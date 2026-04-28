// Lean compiler output
// Module: Lean.Meta.ReduceEval
// Imports: public import Lean.Meta.Offset
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
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instReduceEvalNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalNat___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat;
static lean_once_cell_t l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instReduceEvalString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalString___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString;
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1;
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__2;
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3;
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__4;
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5;
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__6;
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalName___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalName___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instReduceEvalName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalName___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalName;
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instReduceEvalBitVec___private__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1___closed__0;
static lean_once_cell_t l_Lean_Meta_instReduceEvalBitVec___private__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1___closed__1;
static lean_once_cell_t l_Lean_Meta_instReduceEvalBitVec___private__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBitVec(lean_object*);
static lean_once_cell_t l_Lean_Meta_instReduceEvalBool___private__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBool___private__1___closed__0;
static lean_once_cell_t l_Lean_Meta_instReduceEvalBool___private__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBool___private__1___closed__1;
static lean_once_cell_t l_Lean_Meta_instReduceEvalBool___private__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBool___private__1___closed__2;
static lean_once_cell_t l_Lean_Meta_instReduceEvalBool___private__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBool___private__1___closed__3;
static lean_once_cell_t l_Lean_Meta_instReduceEvalBool___private__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBool___private__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBool___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBool___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instReduceEvalBool___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBool___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBool;
static lean_once_cell_t l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__0;
static lean_once_cell_t l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__1;
static lean_once_cell_t l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__2;
static lean_once_cell_t l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__3;
static lean_once_cell_t l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instReduceEvalBinderInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalBinderInfo___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBinderInfo;
static lean_once_cell_t l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0;
static lean_once_cell_t l_Lean_Meta_instReduceEvalLiteral___private__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___closed__1;
static lean_once_cell_t l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2;
static lean_once_cell_t l_Lean_Meta_instReduceEvalLiteral___private__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___closed__3;
static lean_once_cell_t l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instReduceEvalLiteral___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalLiteral___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLiteral;
static lean_once_cell_t l_Lean_Meta_instReduceEvalMVarId___private__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalMVarId___private__1___closed__0;
static lean_once_cell_t l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instReduceEvalMVarId___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalMVarId___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId;
static lean_once_cell_t l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__0;
static lean_once_cell_t l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instReduceEvalLevelMVarId___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId;
static lean_once_cell_t l_Lean_Meta_instReduceEvalFVarId___private__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalFVarId___private__1___closed__0;
static lean_once_cell_t l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instReduceEvalFVarId___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReduceEvalFVarId___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId;
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___redArg(lean_object* v_inst_1_, lean_object* v_e_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
uint8_t v___y_9_; lean_object* v___x_55_; uint8_t v_transparency_56_; uint8_t v___x_57_; uint8_t v___x_58_; 
v___x_55_ = l_Lean_Meta_Context_config(v_a_3_);
v_transparency_56_ = lean_ctor_get_uint8(v___x_55_, 9);
lean_dec_ref(v___x_55_);
v___x_57_ = 1;
v___x_58_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_56_, v___x_57_);
if (v___x_58_ == 0)
{
v___y_9_ = v_transparency_56_;
goto v___jp_8_;
}
else
{
v___y_9_ = v___x_57_;
goto v___jp_8_;
}
v___jp_8_:
{
lean_object* v___x_10_; uint8_t v_foApprox_11_; uint8_t v_ctxApprox_12_; uint8_t v_quasiPatternApprox_13_; uint8_t v_constApprox_14_; uint8_t v_isDefEqStuckEx_15_; uint8_t v_unificationHints_16_; uint8_t v_proofIrrelevance_17_; uint8_t v_assignSyntheticOpaque_18_; uint8_t v_offsetCnstrs_19_; uint8_t v_etaStruct_20_; uint8_t v_univApprox_21_; uint8_t v_iota_22_; uint8_t v_beta_23_; uint8_t v_proj_24_; uint8_t v_zeta_25_; uint8_t v_zetaDelta_26_; uint8_t v_zetaUnused_27_; uint8_t v_zetaHave_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_54_; 
v___x_10_ = l_Lean_Meta_Context_config(v_a_3_);
v_foApprox_11_ = lean_ctor_get_uint8(v___x_10_, 0);
v_ctxApprox_12_ = lean_ctor_get_uint8(v___x_10_, 1);
v_quasiPatternApprox_13_ = lean_ctor_get_uint8(v___x_10_, 2);
v_constApprox_14_ = lean_ctor_get_uint8(v___x_10_, 3);
v_isDefEqStuckEx_15_ = lean_ctor_get_uint8(v___x_10_, 4);
v_unificationHints_16_ = lean_ctor_get_uint8(v___x_10_, 5);
v_proofIrrelevance_17_ = lean_ctor_get_uint8(v___x_10_, 6);
v_assignSyntheticOpaque_18_ = lean_ctor_get_uint8(v___x_10_, 7);
v_offsetCnstrs_19_ = lean_ctor_get_uint8(v___x_10_, 8);
v_etaStruct_20_ = lean_ctor_get_uint8(v___x_10_, 10);
v_univApprox_21_ = lean_ctor_get_uint8(v___x_10_, 11);
v_iota_22_ = lean_ctor_get_uint8(v___x_10_, 12);
v_beta_23_ = lean_ctor_get_uint8(v___x_10_, 13);
v_proj_24_ = lean_ctor_get_uint8(v___x_10_, 14);
v_zeta_25_ = lean_ctor_get_uint8(v___x_10_, 15);
v_zetaDelta_26_ = lean_ctor_get_uint8(v___x_10_, 16);
v_zetaUnused_27_ = lean_ctor_get_uint8(v___x_10_, 17);
v_zetaHave_28_ = lean_ctor_get_uint8(v___x_10_, 18);
v_isSharedCheck_54_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_54_ == 0)
{
v___x_30_ = v___x_10_;
v_isShared_31_ = v_isSharedCheck_54_;
goto v_resetjp_29_;
}
else
{
lean_dec(v___x_10_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_54_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
uint8_t v_trackZetaDelta_32_; lean_object* v_zetaDeltaSet_33_; lean_object* v_lctx_34_; lean_object* v_localInstances_35_; lean_object* v_defEqCtx_x3f_36_; lean_object* v_synthPendingDepth_37_; lean_object* v_canUnfold_x3f_38_; uint8_t v_univApprox_39_; uint8_t v_inTypeClassResolution_40_; uint8_t v_cacheInferType_41_; lean_object* v_config_43_; 
v_trackZetaDelta_32_ = lean_ctor_get_uint8(v_a_3_, sizeof(void*)*7);
v_zetaDeltaSet_33_ = lean_ctor_get(v_a_3_, 1);
v_lctx_34_ = lean_ctor_get(v_a_3_, 2);
v_localInstances_35_ = lean_ctor_get(v_a_3_, 3);
v_defEqCtx_x3f_36_ = lean_ctor_get(v_a_3_, 4);
v_synthPendingDepth_37_ = lean_ctor_get(v_a_3_, 5);
v_canUnfold_x3f_38_ = lean_ctor_get(v_a_3_, 6);
v_univApprox_39_ = lean_ctor_get_uint8(v_a_3_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_40_ = lean_ctor_get_uint8(v_a_3_, sizeof(void*)*7 + 2);
v_cacheInferType_41_ = lean_ctor_get_uint8(v_a_3_, sizeof(void*)*7 + 3);
if (v_isShared_31_ == 0)
{
v_config_43_ = v___x_30_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 0, v_foApprox_11_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 1, v_ctxApprox_12_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 2, v_quasiPatternApprox_13_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 3, v_constApprox_14_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 4, v_isDefEqStuckEx_15_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 5, v_unificationHints_16_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 6, v_proofIrrelevance_17_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 7, v_assignSyntheticOpaque_18_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 8, v_offsetCnstrs_19_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 10, v_etaStruct_20_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 11, v_univApprox_21_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 12, v_iota_22_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 13, v_beta_23_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 14, v_proj_24_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 15, v_zeta_25_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 16, v_zetaDelta_26_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 17, v_zetaUnused_27_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, 18, v_zetaHave_28_);
v_config_43_ = v_reuseFailAlloc_53_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
uint64_t v___x_44_; uint64_t v___x_45_; uint64_t v___x_46_; uint64_t v___x_47_; uint64_t v___x_48_; uint64_t v_key_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
lean_ctor_set_uint8(v_config_43_, 9, v___y_9_);
v___x_44_ = l_Lean_Meta_Context_configKey(v_a_3_);
v___x_45_ = 2ULL;
v___x_46_ = lean_uint64_shift_right(v___x_44_, v___x_45_);
v___x_47_ = lean_uint64_shift_left(v___x_46_, v___x_45_);
v___x_48_ = l_Lean_Meta_TransparencyMode_toUInt64(v___y_9_);
v_key_49_ = lean_uint64_lor(v___x_47_, v___x_48_);
v___x_50_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_50_, 0, v_config_43_);
lean_ctor_set_uint64(v___x_50_, sizeof(void*)*1, v_key_49_);
lean_inc(v_canUnfold_x3f_38_);
lean_inc(v_synthPendingDepth_37_);
lean_inc(v_defEqCtx_x3f_36_);
lean_inc_ref(v_localInstances_35_);
lean_inc_ref(v_lctx_34_);
lean_inc(v_zetaDeltaSet_33_);
v___x_51_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set(v___x_51_, 1, v_zetaDeltaSet_33_);
lean_ctor_set(v___x_51_, 2, v_lctx_34_);
lean_ctor_set(v___x_51_, 3, v_localInstances_35_);
lean_ctor_set(v___x_51_, 4, v_defEqCtx_x3f_36_);
lean_ctor_set(v___x_51_, 5, v_synthPendingDepth_37_);
lean_ctor_set(v___x_51_, 6, v_canUnfold_x3f_38_);
lean_ctor_set_uint8(v___x_51_, sizeof(void*)*7, v_trackZetaDelta_32_);
lean_ctor_set_uint8(v___x_51_, sizeof(void*)*7 + 1, v_univApprox_39_);
lean_ctor_set_uint8(v___x_51_, sizeof(void*)*7 + 2, v_inTypeClassResolution_40_);
lean_ctor_set_uint8(v___x_51_, sizeof(void*)*7 + 3, v_cacheInferType_41_);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
v___x_52_ = lean_apply_6(v_inst_1_, v_e_2_, v___x_51_, v_a_4_, v_a_5_, v_a_6_, lean_box(0));
return v___x_52_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___redArg___boxed(lean_object* v_inst_59_, lean_object* v_e_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_Meta_reduceEval___redArg(v_inst_59_, v_e_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval(lean_object* v_00_u03b1_67_, lean_object* v_inst_68_, lean_object* v_e_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Meta_reduceEval___redArg(v_inst_68_, v_e_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___boxed(lean_object* v_00_u03b1_76_, lean_object* v_inst_77_, lean_object* v_e_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_Meta_reduceEval(v_00_u03b1_76_, v_inst_77_, v_e_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_);
lean_dec(v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec_ref(v_a_79_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0_spec__0(lean_object* v_msgData_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v___x_91_; lean_object* v_env_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v_mctx_95_; lean_object* v_lctx_96_; lean_object* v_options_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_91_ = lean_st_ref_get(v___y_89_);
v_env_92_ = lean_ctor_get(v___x_91_, 0);
lean_inc_ref(v_env_92_);
lean_dec(v___x_91_);
v___x_93_ = lean_st_ref_get(v___y_89_);
lean_dec(v___x_93_);
v___x_94_ = lean_st_ref_get(v___y_87_);
v_mctx_95_ = lean_ctor_get(v___x_94_, 0);
lean_inc_ref(v_mctx_95_);
lean_dec(v___x_94_);
v_lctx_96_ = lean_ctor_get(v___y_86_, 2);
v_options_97_ = lean_ctor_get(v___y_88_, 2);
lean_inc_ref(v_options_97_);
lean_inc_ref(v_lctx_96_);
v___x_98_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_98_, 0, v_env_92_);
lean_ctor_set(v___x_98_, 1, v_mctx_95_);
lean_ctor_set(v___x_98_, 2, v_lctx_96_);
lean_ctor_set(v___x_98_, 3, v_options_97_);
v___x_99_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v_msgData_85_);
v___x_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0_spec__0___boxed(lean_object* v_msgData_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0_spec__0(v_msgData_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg(lean_object* v_msg_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
lean_object* v_ref_114_; lean_object* v___x_115_; lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_124_; 
v_ref_114_ = lean_ctor_get(v___y_111_, 5);
v___x_115_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0_spec__0(v_msg_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_);
v_a_116_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_124_ == 0)
{
v___x_118_ = v___x_115_;
v_isShared_119_ = v_isSharedCheck_124_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_115_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_124_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_120_; lean_object* v___x_122_; 
lean_inc(v_ref_114_);
v___x_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_120_, 0, v_ref_114_);
lean_ctor_set(v___x_120_, 1, v_a_116_);
if (v_isShared_119_ == 0)
{
lean_ctor_set_tag(v___x_118_, 1);
lean_ctor_set(v___x_118_, 0, v___x_120_);
v___x_122_ = v___x_118_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v___x_120_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg___boxed(lean_object* v_msg_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg(v_msg_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_);
lean_dec(v___y_129_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
return v_res_131_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__0(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_mk_string_unchecked("reduceEval: failed to evaluate argument", 39, 39);
return v___x_132_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__1(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__0, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__0_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__0);
v___x_134_ = l_Lean_stringToMessageData(v___x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(lean_object* v_e_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_141_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__1, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__1_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__1);
v___x_142_ = l_Lean_indentExpr(v_e_135_);
v___x_143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_141_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
v___x_144_ = l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg(v___x_143_, v_a_136_, v_a_137_, v_a_138_, v_a_139_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___boxed(lean_object* v_e_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
lean_dec(v_a_149_);
lean_dec_ref(v_a_148_);
lean_dec(v_a_147_);
lean_dec_ref(v_a_146_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval(lean_object* v_00_u03b1_152_, lean_object* v_e_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___boxed(lean_object* v_00_u03b1_160_, lean_object* v_e_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval(v_00_u03b1_160_, v_e_161_, v_a_162_, v_a_163_, v_a_164_, v_a_165_);
lean_dec(v_a_165_);
lean_dec_ref(v_a_164_);
lean_dec(v_a_163_);
lean_dec_ref(v_a_162_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0(lean_object* v_00_u03b1_168_, lean_object* v_msg_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg(v_msg_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___boxed(lean_object* v_00_u03b1_176_, lean_object* v_msg_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0(v_00_u03b1_176_, v_msg_177_, v___y_178_, v___y_179_, v___y_180_, v___y_181_);
lean_dec(v___y_181_);
lean_dec_ref(v___y_180_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___private__1(lean_object* v_e_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
lean_object* v___x_190_; 
lean_inc(v_a_188_);
lean_inc_ref(v_a_187_);
lean_inc(v_a_186_);
lean_inc_ref(v_a_185_);
v___x_190_ = lean_whnf(v_e_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_);
if (lean_obj_tag(v___x_190_) == 0)
{
lean_object* v_a_191_; lean_object* v___x_192_; 
v_a_191_ = lean_ctor_get(v___x_190_, 0);
lean_inc_n(v_a_191_, 2);
lean_dec_ref(v___x_190_);
v___x_192_ = l_Lean_Meta_evalNat(v_a_191_, v_a_185_, v_a_186_, v_a_187_, v_a_188_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v_a_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_202_; 
v_a_193_ = lean_ctor_get(v___x_192_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_202_ == 0)
{
v___x_195_ = v___x_192_;
v_isShared_196_ = v_isSharedCheck_202_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_a_193_);
lean_dec(v___x_192_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_202_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
if (lean_obj_tag(v_a_193_) == 1)
{
lean_object* v_val_197_; lean_object* v___x_199_; 
lean_dec(v_a_191_);
v_val_197_ = lean_ctor_get(v_a_193_, 0);
lean_inc(v_val_197_);
lean_dec_ref(v_a_193_);
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 0, v_val_197_);
v___x_199_ = v___x_195_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_val_197_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
else
{
lean_object* v___x_201_; 
lean_del_object(v___x_195_);
lean_dec(v_a_193_);
v___x_201_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_191_, v_a_185_, v_a_186_, v_a_187_, v_a_188_);
return v___x_201_;
}
}
}
else
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_210_; 
lean_dec(v_a_191_);
v_a_203_ = lean_ctor_get(v___x_192_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_210_ == 0)
{
v___x_205_ = v___x_192_;
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_192_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_208_; 
if (v_isShared_206_ == 0)
{
v___x_208_ = v___x_205_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_a_203_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
else
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_218_; 
v_a_211_ = lean_ctor_get(v___x_190_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_190_);
if (v_isSharedCheck_218_ == 0)
{
v___x_213_ = v___x_190_;
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_190_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_a_211_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___private__1___boxed(lean_object* v_e_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lean_Meta_instReduceEvalNat___private__1(v_e_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
lean_dec(v_a_221_);
lean_dec_ref(v_a_220_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___lam__0(lean_object* v_e_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_){
_start:
{
lean_object* v___x_232_; 
lean_inc(v___y_230_);
lean_inc_ref(v___y_229_);
lean_inc(v___y_228_);
lean_inc_ref(v___y_227_);
v___x_232_ = lean_whnf(v_e_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v___x_234_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc_n(v_a_233_, 2);
lean_dec_ref(v___x_232_);
v___x_234_ = l_Lean_Meta_evalNat(v_a_233_, v___y_227_, v___y_228_, v___y_229_, v___y_230_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_244_; 
v_a_235_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_244_ == 0)
{
v___x_237_ = v___x_234_;
v_isShared_238_ = v_isSharedCheck_244_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_234_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_244_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
if (lean_obj_tag(v_a_235_) == 1)
{
lean_object* v_val_239_; lean_object* v___x_241_; 
lean_dec(v_a_233_);
v_val_239_ = lean_ctor_get(v_a_235_, 0);
lean_inc(v_val_239_);
lean_dec_ref(v_a_235_);
if (v_isShared_238_ == 0)
{
lean_ctor_set(v___x_237_, 0, v_val_239_);
v___x_241_ = v___x_237_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_val_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
else
{
lean_object* v___x_243_; 
lean_del_object(v___x_237_);
lean_dec(v_a_235_);
v___x_243_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_233_, v___y_227_, v___y_228_, v___y_229_, v___y_230_);
return v___x_243_;
}
}
}
else
{
lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_252_; 
lean_dec(v_a_233_);
v_a_245_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_252_ == 0)
{
v___x_247_ = v___x_234_;
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_dec(v___x_234_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_250_; 
if (v_isShared_248_ == 0)
{
v___x_250_ = v___x_247_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_a_245_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
}
else
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_260_; 
v_a_253_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_260_ == 0)
{
v___x_255_ = v___x_232_;
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_232_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_258_; 
if (v_isShared_256_ == 0)
{
v___x_258_ = v___x_255_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_253_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___lam__0___boxed(lean_object* v_e_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_Meta_instReduceEvalNat___lam__0(v_e_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
return v_res_267_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalNat___closed__0(void){
_start:
{
lean_object* v___f_268_; 
v___f_268_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalNat___lam__0___boxed), 6, 0);
return v___f_268_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalNat(void){
_start:
{
lean_object* v___f_269_; 
v___f_269_ = lean_obj_once(&l_Lean_Meta_instReduceEvalNat___closed__0, &l_Lean_Meta_instReduceEvalNat___closed__0_once, _init_l_Lean_Meta_instReduceEvalNat___closed__0);
return v___f_269_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = lean_mk_string_unchecked("Option", 6, 6);
return v___x_270_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lean_mk_string_unchecked("some", 4, 4);
return v___x_271_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_272_ = lean_obj_once(&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__1, &l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__1_once, _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__1);
v___x_273_ = lean_obj_once(&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0, &l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0_once, _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0);
v___x_274_ = l_Lean_Name_mkStr2(v___x_273_, v___x_272_);
return v___x_274_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lean_mk_string_unchecked("none", 4, 4);
return v___x_275_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = lean_obj_once(&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__3, &l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__3_once, _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__3);
v___x_277_ = lean_obj_once(&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0, &l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0_once, _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0);
v___x_278_ = l_Lean_Name_mkStr2(v___x_277_, v___x_276_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg(lean_object* v_inst_279_, lean_object* v_e_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_){
_start:
{
lean_object* v___x_286_; 
lean_inc(v_a_284_);
lean_inc_ref(v_a_283_);
lean_inc(v_a_282_);
lean_inc_ref(v_a_281_);
v___x_286_ = lean_whnf(v_e_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_331_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_331_ == 0)
{
v___x_289_ = v___x_286_;
v_isShared_290_ = v_isSharedCheck_331_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_286_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_331_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
uint8_t v___y_292_; lean_object* v___x_313_; 
v___x_313_ = l_Lean_Expr_getAppFn(v_a_287_);
if (lean_obj_tag(v___x_313_) == 4)
{
lean_object* v_declName_314_; lean_object* v___x_315_; uint8_t v___y_317_; lean_object* v___x_326_; uint8_t v___x_327_; 
v_declName_314_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_declName_314_);
lean_dec_ref(v___x_313_);
v___x_315_ = l_Lean_Expr_getAppNumArgs(v_a_287_);
v___x_326_ = lean_obj_once(&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4, &l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4_once, _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4);
v___x_327_ = lean_name_eq(v_declName_314_, v___x_326_);
if (v___x_327_ == 0)
{
v___y_317_ = v___x_327_;
goto v___jp_316_;
}
else
{
lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_328_ = lean_unsigned_to_nat(0u);
v___x_329_ = lean_nat_dec_eq(v___x_315_, v___x_328_);
v___y_317_ = v___x_329_;
goto v___jp_316_;
}
v___jp_316_:
{
if (v___y_317_ == 0)
{
lean_object* v___x_318_; uint8_t v___x_319_; 
lean_del_object(v___x_289_);
v___x_318_ = lean_obj_once(&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2, &l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2_once, _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2);
v___x_319_ = lean_name_eq(v_declName_314_, v___x_318_);
lean_dec(v_declName_314_);
if (v___x_319_ == 0)
{
lean_dec(v___x_315_);
v___y_292_ = v___x_319_;
goto v___jp_291_;
}
else
{
lean_object* v___x_320_; uint8_t v___x_321_; 
v___x_320_ = lean_unsigned_to_nat(1u);
v___x_321_ = lean_nat_dec_eq(v___x_315_, v___x_320_);
lean_dec(v___x_315_);
v___y_292_ = v___x_321_;
goto v___jp_291_;
}
}
else
{
lean_object* v___x_322_; lean_object* v___x_324_; 
lean_dec(v___x_315_);
lean_dec(v_declName_314_);
lean_dec(v_a_287_);
lean_dec_ref(v_inst_279_);
v___x_322_ = lean_box(0);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_322_);
v___x_324_ = v___x_289_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_322_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
else
{
lean_object* v___x_330_; 
lean_dec_ref(v___x_313_);
lean_del_object(v___x_289_);
lean_dec_ref(v_inst_279_);
v___x_330_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_287_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
return v___x_330_;
}
v___jp_291_:
{
if (v___y_292_ == 0)
{
lean_object* v___x_293_; 
lean_dec_ref(v_inst_279_);
v___x_293_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_287_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
return v___x_293_;
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = l_Lean_Expr_appArg_x21(v_a_287_);
lean_dec(v_a_287_);
v___x_295_ = l_Lean_Meta_reduceEval___redArg(v_inst_279_, v___x_294_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_304_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_304_ == 0)
{
v___x_298_ = v___x_295_;
v_isShared_299_ = v_isSharedCheck_304_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_295_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_304_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_300_; lean_object* v___x_302_; 
v___x_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_300_, 0, v_a_296_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 0, v___x_300_);
v___x_302_ = v___x_298_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_300_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
else
{
lean_object* v_a_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_312_; 
v_a_305_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_312_ == 0)
{
v___x_307_ = v___x_295_;
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_a_305_);
lean_dec(v___x_295_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_310_; 
if (v_isShared_308_ == 0)
{
v___x_310_ = v___x_307_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_a_305_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_339_; 
lean_dec_ref(v_inst_279_);
v_a_332_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_339_ == 0)
{
v___x_334_ = v___x_286_;
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_286_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_337_; 
if (v_isShared_335_ == 0)
{
v___x_337_ = v___x_334_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_a_332_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___boxed(lean_object* v_inst_340_, lean_object* v_e_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Lean_Meta_instReduceEvalOption___private__1___redArg(v_inst_340_, v_e_341_, v_a_342_, v_a_343_, v_a_344_, v_a_345_);
lean_dec(v_a_345_);
lean_dec_ref(v_a_344_);
lean_dec(v_a_343_);
lean_dec_ref(v_a_342_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1(lean_object* v_00_u03b1_348_, lean_object* v_inst_349_, lean_object* v_e_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_){
_start:
{
lean_object* v___x_356_; 
lean_inc(v_a_354_);
lean_inc_ref(v_a_353_);
lean_inc(v_a_352_);
lean_inc_ref(v_a_351_);
v___x_356_ = lean_whnf(v_e_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_401_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_401_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_401_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_401_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
uint8_t v___y_362_; lean_object* v___x_383_; 
v___x_383_ = l_Lean_Expr_getAppFn(v_a_357_);
if (lean_obj_tag(v___x_383_) == 4)
{
lean_object* v_declName_384_; lean_object* v___x_385_; uint8_t v___y_387_; lean_object* v___x_396_; uint8_t v___x_397_; 
v_declName_384_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_declName_384_);
lean_dec_ref(v___x_383_);
v___x_385_ = l_Lean_Expr_getAppNumArgs(v_a_357_);
v___x_396_ = lean_obj_once(&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4, &l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4_once, _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4);
v___x_397_ = lean_name_eq(v_declName_384_, v___x_396_);
if (v___x_397_ == 0)
{
v___y_387_ = v___x_397_;
goto v___jp_386_;
}
else
{
lean_object* v___x_398_; uint8_t v___x_399_; 
v___x_398_ = lean_unsigned_to_nat(0u);
v___x_399_ = lean_nat_dec_eq(v___x_385_, v___x_398_);
v___y_387_ = v___x_399_;
goto v___jp_386_;
}
v___jp_386_:
{
if (v___y_387_ == 0)
{
lean_object* v___x_388_; uint8_t v___x_389_; 
lean_del_object(v___x_359_);
v___x_388_ = lean_obj_once(&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2, &l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2_once, _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2);
v___x_389_ = lean_name_eq(v_declName_384_, v___x_388_);
lean_dec(v_declName_384_);
if (v___x_389_ == 0)
{
lean_dec(v___x_385_);
v___y_362_ = v___x_389_;
goto v___jp_361_;
}
else
{
lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_390_ = lean_unsigned_to_nat(1u);
v___x_391_ = lean_nat_dec_eq(v___x_385_, v___x_390_);
lean_dec(v___x_385_);
v___y_362_ = v___x_391_;
goto v___jp_361_;
}
}
else
{
lean_object* v___x_392_; lean_object* v___x_394_; 
lean_dec(v___x_385_);
lean_dec(v_declName_384_);
lean_dec(v_a_357_);
lean_dec_ref(v_inst_349_);
v___x_392_ = lean_box(0);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_392_);
v___x_394_ = v___x_359_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v___x_392_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
else
{
lean_object* v___x_400_; 
lean_dec_ref(v___x_383_);
lean_del_object(v___x_359_);
lean_dec_ref(v_inst_349_);
v___x_400_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_357_, v_a_351_, v_a_352_, v_a_353_, v_a_354_);
return v___x_400_;
}
v___jp_361_:
{
if (v___y_362_ == 0)
{
lean_object* v___x_363_; 
lean_dec_ref(v_inst_349_);
v___x_363_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_357_, v_a_351_, v_a_352_, v_a_353_, v_a_354_);
return v___x_363_;
}
else
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = l_Lean_Expr_appArg_x21(v_a_357_);
lean_dec(v_a_357_);
v___x_365_ = l_Lean_Meta_reduceEval___redArg(v_inst_349_, v___x_364_, v_a_351_, v_a_352_, v_a_353_, v_a_354_);
if (lean_obj_tag(v___x_365_) == 0)
{
lean_object* v_a_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_374_; 
v_a_366_ = lean_ctor_get(v___x_365_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_374_ == 0)
{
v___x_368_ = v___x_365_;
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_a_366_);
lean_dec(v___x_365_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_370_, 0, v_a_366_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 0, v___x_370_);
v___x_372_ = v___x_368_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
else
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
v_a_375_ = lean_ctor_get(v___x_365_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_382_ == 0)
{
v___x_377_ = v___x_365_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_365_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_375_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
lean_dec_ref(v_inst_349_);
v_a_402_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_356_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_356_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1___boxed(lean_object* v_00_u03b1_410_, lean_object* v_inst_411_, lean_object* v_e_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Lean_Meta_instReduceEvalOption___private__1(v_00_u03b1_410_, v_inst_411_, v_e_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_);
lean_dec(v_a_416_);
lean_dec_ref(v_a_415_);
lean_dec(v_a_414_);
lean_dec_ref(v_a_413_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___redArg___lam__0(lean_object* v_inst_419_, lean_object* v_e_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
lean_object* v___x_426_; 
lean_inc(v___y_424_);
lean_inc_ref(v___y_423_);
lean_inc(v___y_422_);
lean_inc_ref(v___y_421_);
v___x_426_ = lean_whnf(v_e_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_471_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_471_ == 0)
{
v___x_429_ = v___x_426_;
v_isShared_430_ = v_isSharedCheck_471_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_426_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_471_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
uint8_t v___y_432_; lean_object* v___x_453_; 
v___x_453_ = l_Lean_Expr_getAppFn(v_a_427_);
if (lean_obj_tag(v___x_453_) == 4)
{
lean_object* v_declName_454_; lean_object* v___x_455_; uint8_t v___y_457_; lean_object* v___x_466_; uint8_t v___x_467_; 
v_declName_454_ = lean_ctor_get(v___x_453_, 0);
lean_inc(v_declName_454_);
lean_dec_ref(v___x_453_);
v___x_455_ = l_Lean_Expr_getAppNumArgs(v_a_427_);
v___x_466_ = lean_obj_once(&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4, &l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4_once, _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4);
v___x_467_ = lean_name_eq(v_declName_454_, v___x_466_);
if (v___x_467_ == 0)
{
v___y_457_ = v___x_467_;
goto v___jp_456_;
}
else
{
lean_object* v___x_468_; uint8_t v___x_469_; 
v___x_468_ = lean_unsigned_to_nat(0u);
v___x_469_ = lean_nat_dec_eq(v___x_455_, v___x_468_);
v___y_457_ = v___x_469_;
goto v___jp_456_;
}
v___jp_456_:
{
if (v___y_457_ == 0)
{
lean_object* v___x_458_; uint8_t v___x_459_; 
lean_del_object(v___x_429_);
v___x_458_ = lean_obj_once(&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2, &l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2_once, _init_l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2);
v___x_459_ = lean_name_eq(v_declName_454_, v___x_458_);
lean_dec(v_declName_454_);
if (v___x_459_ == 0)
{
lean_dec(v___x_455_);
v___y_432_ = v___x_459_;
goto v___jp_431_;
}
else
{
lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_460_ = lean_unsigned_to_nat(1u);
v___x_461_ = lean_nat_dec_eq(v___x_455_, v___x_460_);
lean_dec(v___x_455_);
v___y_432_ = v___x_461_;
goto v___jp_431_;
}
}
else
{
lean_object* v___x_462_; lean_object* v___x_464_; 
lean_dec(v___x_455_);
lean_dec(v_declName_454_);
lean_dec(v_a_427_);
lean_dec_ref(v_inst_419_);
v___x_462_ = lean_box(0);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 0, v___x_462_);
v___x_464_ = v___x_429_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_462_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
else
{
lean_object* v___x_470_; 
lean_dec_ref(v___x_453_);
lean_del_object(v___x_429_);
lean_dec_ref(v_inst_419_);
v___x_470_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_427_, v___y_421_, v___y_422_, v___y_423_, v___y_424_);
return v___x_470_;
}
v___jp_431_:
{
if (v___y_432_ == 0)
{
lean_object* v___x_433_; 
lean_dec_ref(v_inst_419_);
v___x_433_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_427_, v___y_421_, v___y_422_, v___y_423_, v___y_424_);
return v___x_433_;
}
else
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = l_Lean_Expr_appArg_x21(v_a_427_);
lean_dec(v_a_427_);
v___x_435_ = l_Lean_Meta_reduceEval___redArg(v_inst_419_, v___x_434_, v___y_421_, v___y_422_, v___y_423_, v___y_424_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_444_; 
v_a_436_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_444_ == 0)
{
v___x_438_ = v___x_435_;
v_isShared_439_ = v_isSharedCheck_444_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_435_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_444_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_440_, 0, v_a_436_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_440_);
v___x_442_ = v___x_438_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_440_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
else
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
v_a_445_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_435_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_435_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_a_445_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_dec_ref(v_inst_419_);
v_a_472_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_426_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_426_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___redArg___lam__0___boxed(lean_object* v_inst_480_, lean_object* v_e_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lean_Meta_instReduceEvalOption___redArg___lam__0(v_inst_480_, v_e_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___redArg(lean_object* v_inst_488_){
_start:
{
lean_object* v___f_489_; 
v___f_489_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalOption___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_489_, 0, v_inst_488_);
return v___f_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption(lean_object* v_00_u03b1_490_, lean_object* v_inst_491_){
_start:
{
lean_object* v___f_492_; 
v___f_492_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalOption___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_492_, 0, v_inst_491_);
return v___f_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___private__1(lean_object* v_e_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_){
_start:
{
lean_object* v___x_499_; 
lean_inc(v_a_497_);
lean_inc_ref(v_a_496_);
lean_inc(v_a_495_);
lean_inc_ref(v_a_494_);
lean_inc_ref(v_e_493_);
v___x_499_ = lean_whnf(v_e_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_511_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_511_ == 0)
{
v___x_502_ = v___x_499_;
v_isShared_503_ = v_isSharedCheck_511_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_511_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
if (lean_obj_tag(v_a_500_) == 9)
{
lean_object* v_a_504_; 
v_a_504_ = lean_ctor_get(v_a_500_, 0);
lean_inc_ref(v_a_504_);
lean_dec_ref(v_a_500_);
if (lean_obj_tag(v_a_504_) == 1)
{
lean_object* v_val_505_; lean_object* v___x_507_; 
lean_dec_ref(v_e_493_);
v_val_505_ = lean_ctor_get(v_a_504_, 0);
lean_inc_ref(v_val_505_);
lean_dec_ref(v_a_504_);
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 0, v_val_505_);
v___x_507_ = v___x_502_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_val_505_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
else
{
lean_object* v___x_509_; 
lean_dec_ref(v_a_504_);
lean_del_object(v___x_502_);
v___x_509_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_);
return v___x_509_;
}
}
else
{
lean_object* v___x_510_; 
lean_del_object(v___x_502_);
lean_dec(v_a_500_);
v___x_510_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_);
return v___x_510_;
}
}
}
else
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
lean_dec_ref(v_e_493_);
v_a_512_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_499_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_499_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___private__1___boxed(lean_object* v_e_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_Meta_instReduceEvalString___private__1(v_e_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_);
lean_dec(v_a_524_);
lean_dec_ref(v_a_523_);
lean_dec(v_a_522_);
lean_dec_ref(v_a_521_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___lam__0(lean_object* v_e_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v___x_533_; 
lean_inc(v___y_531_);
lean_inc_ref(v___y_530_);
lean_inc(v___y_529_);
lean_inc_ref(v___y_528_);
lean_inc_ref(v_e_527_);
v___x_533_ = lean_whnf(v_e_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_545_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_545_ == 0)
{
v___x_536_ = v___x_533_;
v_isShared_537_ = v_isSharedCheck_545_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_533_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_545_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
if (lean_obj_tag(v_a_534_) == 9)
{
lean_object* v_a_538_; 
v_a_538_ = lean_ctor_get(v_a_534_, 0);
lean_inc_ref(v_a_538_);
lean_dec_ref(v_a_534_);
if (lean_obj_tag(v_a_538_) == 1)
{
lean_object* v_val_539_; lean_object* v___x_541_; 
lean_dec_ref(v_e_527_);
v_val_539_ = lean_ctor_get(v_a_538_, 0);
lean_inc_ref(v_val_539_);
lean_dec_ref(v_a_538_);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 0, v_val_539_);
v___x_541_ = v___x_536_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_val_539_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
else
{
lean_object* v___x_543_; 
lean_dec_ref(v_a_538_);
lean_del_object(v___x_536_);
v___x_543_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_);
return v___x_543_;
}
}
else
{
lean_object* v___x_544_; 
lean_del_object(v___x_536_);
lean_dec(v_a_534_);
v___x_544_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_);
return v___x_544_;
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
lean_dec_ref(v_e_527_);
v_a_546_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_533_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_533_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_551_; 
if (v_isShared_549_ == 0)
{
v___x_551_ = v___x_548_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_546_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___lam__0___boxed(lean_object* v_e_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_Meta_instReduceEvalString___lam__0(v_e_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
return v_res_560_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalString___closed__0(void){
_start:
{
lean_object* v___f_561_; 
v___f_561_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalString___lam__0___boxed), 6, 0);
return v___f_561_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalString(void){
_start:
{
lean_object* v___f_562_; 
v___f_562_ = lean_obj_once(&l_Lean_Meta_instReduceEvalString___closed__0, &l_Lean_Meta_instReduceEvalString___closed__0_once, _init_l_Lean_Meta_instReduceEvalString___closed__0);
return v___f_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__0(lean_object* v_e_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_){
_start:
{
uint8_t v___y_570_; lean_object* v___x_644_; uint8_t v_transparency_645_; uint8_t v___x_646_; uint8_t v___x_647_; 
v___x_644_ = l_Lean_Meta_Context_config(v_a_564_);
v_transparency_645_ = lean_ctor_get_uint8(v___x_644_, 9);
lean_dec_ref(v___x_644_);
v___x_646_ = 1;
v___x_647_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_645_, v___x_646_);
if (v___x_647_ == 0)
{
v___y_570_ = v_transparency_645_;
goto v___jp_569_;
}
else
{
v___y_570_ = v___x_646_;
goto v___jp_569_;
}
v___jp_569_:
{
lean_object* v___x_571_; uint8_t v_foApprox_572_; uint8_t v_ctxApprox_573_; uint8_t v_quasiPatternApprox_574_; uint8_t v_constApprox_575_; uint8_t v_isDefEqStuckEx_576_; uint8_t v_unificationHints_577_; uint8_t v_proofIrrelevance_578_; uint8_t v_assignSyntheticOpaque_579_; uint8_t v_offsetCnstrs_580_; uint8_t v_etaStruct_581_; uint8_t v_univApprox_582_; uint8_t v_iota_583_; uint8_t v_beta_584_; uint8_t v_proj_585_; uint8_t v_zeta_586_; uint8_t v_zetaDelta_587_; uint8_t v_zetaUnused_588_; uint8_t v_zetaHave_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_643_; 
v___x_571_ = l_Lean_Meta_Context_config(v_a_564_);
v_foApprox_572_ = lean_ctor_get_uint8(v___x_571_, 0);
v_ctxApprox_573_ = lean_ctor_get_uint8(v___x_571_, 1);
v_quasiPatternApprox_574_ = lean_ctor_get_uint8(v___x_571_, 2);
v_constApprox_575_ = lean_ctor_get_uint8(v___x_571_, 3);
v_isDefEqStuckEx_576_ = lean_ctor_get_uint8(v___x_571_, 4);
v_unificationHints_577_ = lean_ctor_get_uint8(v___x_571_, 5);
v_proofIrrelevance_578_ = lean_ctor_get_uint8(v___x_571_, 6);
v_assignSyntheticOpaque_579_ = lean_ctor_get_uint8(v___x_571_, 7);
v_offsetCnstrs_580_ = lean_ctor_get_uint8(v___x_571_, 8);
v_etaStruct_581_ = lean_ctor_get_uint8(v___x_571_, 10);
v_univApprox_582_ = lean_ctor_get_uint8(v___x_571_, 11);
v_iota_583_ = lean_ctor_get_uint8(v___x_571_, 12);
v_beta_584_ = lean_ctor_get_uint8(v___x_571_, 13);
v_proj_585_ = lean_ctor_get_uint8(v___x_571_, 14);
v_zeta_586_ = lean_ctor_get_uint8(v___x_571_, 15);
v_zetaDelta_587_ = lean_ctor_get_uint8(v___x_571_, 16);
v_zetaUnused_588_ = lean_ctor_get_uint8(v___x_571_, 17);
v_zetaHave_589_ = lean_ctor_get_uint8(v___x_571_, 18);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_643_ == 0)
{
v___x_591_ = v___x_571_;
v_isShared_592_ = v_isSharedCheck_643_;
goto v_resetjp_590_;
}
else
{
lean_dec(v___x_571_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_643_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
uint8_t v_trackZetaDelta_593_; lean_object* v_zetaDeltaSet_594_; lean_object* v_lctx_595_; lean_object* v_localInstances_596_; lean_object* v_defEqCtx_x3f_597_; lean_object* v_synthPendingDepth_598_; lean_object* v_canUnfold_x3f_599_; uint8_t v_univApprox_600_; uint8_t v_inTypeClassResolution_601_; uint8_t v_cacheInferType_602_; lean_object* v_config_604_; 
v_trackZetaDelta_593_ = lean_ctor_get_uint8(v_a_564_, sizeof(void*)*7);
v_zetaDeltaSet_594_ = lean_ctor_get(v_a_564_, 1);
v_lctx_595_ = lean_ctor_get(v_a_564_, 2);
v_localInstances_596_ = lean_ctor_get(v_a_564_, 3);
v_defEqCtx_x3f_597_ = lean_ctor_get(v_a_564_, 4);
v_synthPendingDepth_598_ = lean_ctor_get(v_a_564_, 5);
v_canUnfold_x3f_599_ = lean_ctor_get(v_a_564_, 6);
v_univApprox_600_ = lean_ctor_get_uint8(v_a_564_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_601_ = lean_ctor_get_uint8(v_a_564_, sizeof(void*)*7 + 2);
v_cacheInferType_602_ = lean_ctor_get_uint8(v_a_564_, sizeof(void*)*7 + 3);
if (v_isShared_592_ == 0)
{
v_config_604_ = v___x_591_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 0, v_foApprox_572_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 1, v_ctxApprox_573_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 2, v_quasiPatternApprox_574_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 3, v_constApprox_575_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 4, v_isDefEqStuckEx_576_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 5, v_unificationHints_577_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 6, v_proofIrrelevance_578_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 7, v_assignSyntheticOpaque_579_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 8, v_offsetCnstrs_580_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 10, v_etaStruct_581_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 11, v_univApprox_582_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 12, v_iota_583_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 13, v_beta_584_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 14, v_proj_585_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 15, v_zeta_586_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 16, v_zetaDelta_587_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 17, v_zetaUnused_588_);
lean_ctor_set_uint8(v_reuseFailAlloc_642_, 18, v_zetaHave_589_);
v_config_604_ = v_reuseFailAlloc_642_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
uint64_t v___x_605_; uint64_t v___x_606_; uint64_t v___x_607_; uint64_t v___x_608_; uint64_t v___x_609_; uint64_t v_key_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
lean_ctor_set_uint8(v_config_604_, 9, v___y_570_);
v___x_605_ = l_Lean_Meta_Context_configKey(v_a_564_);
v___x_606_ = 2ULL;
v___x_607_ = lean_uint64_shift_right(v___x_605_, v___x_606_);
v___x_608_ = lean_uint64_shift_left(v___x_607_, v___x_606_);
v___x_609_ = l_Lean_Meta_TransparencyMode_toUInt64(v___y_570_);
v_key_610_ = lean_uint64_lor(v___x_608_, v___x_609_);
v___x_611_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_611_, 0, v_config_604_);
lean_ctor_set_uint64(v___x_611_, sizeof(void*)*1, v_key_610_);
lean_inc(v_canUnfold_x3f_599_);
lean_inc(v_synthPendingDepth_598_);
lean_inc(v_defEqCtx_x3f_597_);
lean_inc_ref(v_localInstances_596_);
lean_inc_ref(v_lctx_595_);
lean_inc(v_zetaDeltaSet_594_);
v___x_612_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_612_, 0, v___x_611_);
lean_ctor_set(v___x_612_, 1, v_zetaDeltaSet_594_);
lean_ctor_set(v___x_612_, 2, v_lctx_595_);
lean_ctor_set(v___x_612_, 3, v_localInstances_596_);
lean_ctor_set(v___x_612_, 4, v_defEqCtx_x3f_597_);
lean_ctor_set(v___x_612_, 5, v_synthPendingDepth_598_);
lean_ctor_set(v___x_612_, 6, v_canUnfold_x3f_599_);
lean_ctor_set_uint8(v___x_612_, sizeof(void*)*7, v_trackZetaDelta_593_);
lean_ctor_set_uint8(v___x_612_, sizeof(void*)*7 + 1, v_univApprox_600_);
lean_ctor_set_uint8(v___x_612_, sizeof(void*)*7 + 2, v_inTypeClassResolution_601_);
lean_ctor_set_uint8(v___x_612_, sizeof(void*)*7 + 3, v_cacheInferType_602_);
lean_inc(v_a_567_);
lean_inc_ref(v_a_566_);
lean_inc(v_a_565_);
lean_inc_ref(v___x_612_);
v___x_613_ = lean_whnf(v_e_563_, v___x_612_, v_a_565_, v_a_566_, v_a_567_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_615_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
lean_inc_n(v_a_614_, 2);
lean_dec_ref(v___x_613_);
v___x_615_ = l_Lean_Meta_evalNat(v_a_614_, v___x_612_, v_a_565_, v_a_566_, v_a_567_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_625_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_625_ == 0)
{
v___x_618_ = v___x_615_;
v_isShared_619_ = v_isSharedCheck_625_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_625_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
if (lean_obj_tag(v_a_616_) == 1)
{
lean_object* v_val_620_; lean_object* v___x_622_; 
lean_dec(v_a_614_);
lean_dec_ref(v___x_612_);
v_val_620_ = lean_ctor_get(v_a_616_, 0);
lean_inc(v_val_620_);
lean_dec_ref(v_a_616_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v_val_620_);
v___x_622_ = v___x_618_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_val_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
else
{
lean_object* v___x_624_; 
lean_del_object(v___x_618_);
lean_dec(v_a_616_);
v___x_624_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_614_, v___x_612_, v_a_565_, v_a_566_, v_a_567_);
lean_dec_ref(v___x_612_);
return v___x_624_;
}
}
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec(v_a_614_);
lean_dec_ref(v___x_612_);
v_a_626_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_615_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_615_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec_ref(v___x_612_);
v_a_634_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_613_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_613_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__0___boxed(lean_object* v_e_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__0(v_e_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_);
lean_dec(v_a_652_);
lean_dec_ref(v_a_651_);
lean_dec(v_a_650_);
lean_dec_ref(v_a_649_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__1(lean_object* v_e_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_){
_start:
{
uint8_t v___y_662_; lean_object* v___x_728_; uint8_t v_transparency_729_; uint8_t v___x_730_; uint8_t v___x_731_; 
v___x_728_ = l_Lean_Meta_Context_config(v_a_656_);
v_transparency_729_ = lean_ctor_get_uint8(v___x_728_, 9);
lean_dec_ref(v___x_728_);
v___x_730_ = 1;
v___x_731_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_729_, v___x_730_);
if (v___x_731_ == 0)
{
v___y_662_ = v_transparency_729_;
goto v___jp_661_;
}
else
{
v___y_662_ = v___x_730_;
goto v___jp_661_;
}
v___jp_661_:
{
lean_object* v___x_663_; uint8_t v_foApprox_664_; uint8_t v_ctxApprox_665_; uint8_t v_quasiPatternApprox_666_; uint8_t v_constApprox_667_; uint8_t v_isDefEqStuckEx_668_; uint8_t v_unificationHints_669_; uint8_t v_proofIrrelevance_670_; uint8_t v_assignSyntheticOpaque_671_; uint8_t v_offsetCnstrs_672_; uint8_t v_etaStruct_673_; uint8_t v_univApprox_674_; uint8_t v_iota_675_; uint8_t v_beta_676_; uint8_t v_proj_677_; uint8_t v_zeta_678_; uint8_t v_zetaDelta_679_; uint8_t v_zetaUnused_680_; uint8_t v_zetaHave_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_727_; 
v___x_663_ = l_Lean_Meta_Context_config(v_a_656_);
v_foApprox_664_ = lean_ctor_get_uint8(v___x_663_, 0);
v_ctxApprox_665_ = lean_ctor_get_uint8(v___x_663_, 1);
v_quasiPatternApprox_666_ = lean_ctor_get_uint8(v___x_663_, 2);
v_constApprox_667_ = lean_ctor_get_uint8(v___x_663_, 3);
v_isDefEqStuckEx_668_ = lean_ctor_get_uint8(v___x_663_, 4);
v_unificationHints_669_ = lean_ctor_get_uint8(v___x_663_, 5);
v_proofIrrelevance_670_ = lean_ctor_get_uint8(v___x_663_, 6);
v_assignSyntheticOpaque_671_ = lean_ctor_get_uint8(v___x_663_, 7);
v_offsetCnstrs_672_ = lean_ctor_get_uint8(v___x_663_, 8);
v_etaStruct_673_ = lean_ctor_get_uint8(v___x_663_, 10);
v_univApprox_674_ = lean_ctor_get_uint8(v___x_663_, 11);
v_iota_675_ = lean_ctor_get_uint8(v___x_663_, 12);
v_beta_676_ = lean_ctor_get_uint8(v___x_663_, 13);
v_proj_677_ = lean_ctor_get_uint8(v___x_663_, 14);
v_zeta_678_ = lean_ctor_get_uint8(v___x_663_, 15);
v_zetaDelta_679_ = lean_ctor_get_uint8(v___x_663_, 16);
v_zetaUnused_680_ = lean_ctor_get_uint8(v___x_663_, 17);
v_zetaHave_681_ = lean_ctor_get_uint8(v___x_663_, 18);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_727_ == 0)
{
v___x_683_ = v___x_663_;
v_isShared_684_ = v_isSharedCheck_727_;
goto v_resetjp_682_;
}
else
{
lean_dec(v___x_663_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_727_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
uint8_t v_trackZetaDelta_685_; lean_object* v_zetaDeltaSet_686_; lean_object* v_lctx_687_; lean_object* v_localInstances_688_; lean_object* v_defEqCtx_x3f_689_; lean_object* v_synthPendingDepth_690_; lean_object* v_canUnfold_x3f_691_; uint8_t v_univApprox_692_; uint8_t v_inTypeClassResolution_693_; uint8_t v_cacheInferType_694_; lean_object* v_config_696_; 
v_trackZetaDelta_685_ = lean_ctor_get_uint8(v_a_656_, sizeof(void*)*7);
v_zetaDeltaSet_686_ = lean_ctor_get(v_a_656_, 1);
v_lctx_687_ = lean_ctor_get(v_a_656_, 2);
v_localInstances_688_ = lean_ctor_get(v_a_656_, 3);
v_defEqCtx_x3f_689_ = lean_ctor_get(v_a_656_, 4);
v_synthPendingDepth_690_ = lean_ctor_get(v_a_656_, 5);
v_canUnfold_x3f_691_ = lean_ctor_get(v_a_656_, 6);
v_univApprox_692_ = lean_ctor_get_uint8(v_a_656_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_693_ = lean_ctor_get_uint8(v_a_656_, sizeof(void*)*7 + 2);
v_cacheInferType_694_ = lean_ctor_get_uint8(v_a_656_, sizeof(void*)*7 + 3);
if (v_isShared_684_ == 0)
{
v_config_696_ = v___x_683_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 0, v_foApprox_664_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 1, v_ctxApprox_665_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 2, v_quasiPatternApprox_666_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 3, v_constApprox_667_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 4, v_isDefEqStuckEx_668_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 5, v_unificationHints_669_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 6, v_proofIrrelevance_670_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 7, v_assignSyntheticOpaque_671_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 8, v_offsetCnstrs_672_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 10, v_etaStruct_673_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 11, v_univApprox_674_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 12, v_iota_675_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 13, v_beta_676_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 14, v_proj_677_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 15, v_zeta_678_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 16, v_zetaDelta_679_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 17, v_zetaUnused_680_);
lean_ctor_set_uint8(v_reuseFailAlloc_726_, 18, v_zetaHave_681_);
v_config_696_ = v_reuseFailAlloc_726_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
uint64_t v___x_697_; uint64_t v___x_698_; uint64_t v___x_699_; uint64_t v___x_700_; uint64_t v___x_701_; uint64_t v_key_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
lean_ctor_set_uint8(v_config_696_, 9, v___y_662_);
v___x_697_ = l_Lean_Meta_Context_configKey(v_a_656_);
v___x_698_ = 2ULL;
v___x_699_ = lean_uint64_shift_right(v___x_697_, v___x_698_);
v___x_700_ = lean_uint64_shift_left(v___x_699_, v___x_698_);
v___x_701_ = l_Lean_Meta_TransparencyMode_toUInt64(v___y_662_);
v_key_702_ = lean_uint64_lor(v___x_700_, v___x_701_);
v___x_703_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_703_, 0, v_config_696_);
lean_ctor_set_uint64(v___x_703_, sizeof(void*)*1, v_key_702_);
lean_inc(v_canUnfold_x3f_691_);
lean_inc(v_synthPendingDepth_690_);
lean_inc(v_defEqCtx_x3f_689_);
lean_inc_ref(v_localInstances_688_);
lean_inc_ref(v_lctx_687_);
lean_inc(v_zetaDeltaSet_686_);
v___x_704_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_704_, 0, v___x_703_);
lean_ctor_set(v___x_704_, 1, v_zetaDeltaSet_686_);
lean_ctor_set(v___x_704_, 2, v_lctx_687_);
lean_ctor_set(v___x_704_, 3, v_localInstances_688_);
lean_ctor_set(v___x_704_, 4, v_defEqCtx_x3f_689_);
lean_ctor_set(v___x_704_, 5, v_synthPendingDepth_690_);
lean_ctor_set(v___x_704_, 6, v_canUnfold_x3f_691_);
lean_ctor_set_uint8(v___x_704_, sizeof(void*)*7, v_trackZetaDelta_685_);
lean_ctor_set_uint8(v___x_704_, sizeof(void*)*7 + 1, v_univApprox_692_);
lean_ctor_set_uint8(v___x_704_, sizeof(void*)*7 + 2, v_inTypeClassResolution_693_);
lean_ctor_set_uint8(v___x_704_, sizeof(void*)*7 + 3, v_cacheInferType_694_);
lean_inc(v_a_659_);
lean_inc_ref(v_a_658_);
lean_inc(v_a_657_);
lean_inc_ref(v___x_704_);
lean_inc_ref(v_e_655_);
v___x_705_ = lean_whnf(v_e_655_, v___x_704_, v_a_657_, v_a_658_, v_a_659_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_717_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_717_ == 0)
{
v___x_708_ = v___x_705_;
v_isShared_709_ = v_isSharedCheck_717_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_705_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_717_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
if (lean_obj_tag(v_a_706_) == 9)
{
lean_object* v_a_710_; 
v_a_710_ = lean_ctor_get(v_a_706_, 0);
lean_inc_ref(v_a_710_);
lean_dec_ref(v_a_706_);
if (lean_obj_tag(v_a_710_) == 1)
{
lean_object* v_val_711_; lean_object* v___x_713_; 
lean_dec_ref(v___x_704_);
lean_dec_ref(v_e_655_);
v_val_711_ = lean_ctor_get(v_a_710_, 0);
lean_inc_ref(v_val_711_);
lean_dec_ref(v_a_710_);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 0, v_val_711_);
v___x_713_ = v___x_708_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_val_711_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
else
{
lean_object* v___x_715_; 
lean_dec_ref(v_a_710_);
lean_del_object(v___x_708_);
v___x_715_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_655_, v___x_704_, v_a_657_, v_a_658_, v_a_659_);
lean_dec_ref(v___x_704_);
return v___x_715_;
}
}
else
{
lean_object* v___x_716_; 
lean_del_object(v___x_708_);
lean_dec(v_a_706_);
v___x_716_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_655_, v___x_704_, v_a_657_, v_a_658_, v_a_659_);
lean_dec_ref(v___x_704_);
return v___x_716_;
}
}
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
lean_dec_ref(v___x_704_);
lean_dec_ref(v_e_655_);
v_a_718_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_705_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_705_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_718_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__1___boxed(lean_object* v_e_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__1(v_e_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
lean_dec(v_a_736_);
lean_dec_ref(v_a_735_);
lean_dec(v_a_734_);
lean_dec_ref(v_a_733_);
return v_res_738_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0(lean_object* v___x_739_, lean_object* v_00___740_){
_start:
{
lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_741_ = lean_unsigned_to_nat(2u);
v___x_742_ = lean_nat_dec_eq(v___x_739_, v___x_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0___boxed(lean_object* v___x_743_, lean_object* v_00___744_){
_start:
{
uint8_t v_res_745_; lean_object* v_r_746_; 
v_res_745_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0(v___x_743_, v_00___744_);
lean_dec(v___x_743_);
v_r_746_ = lean_box(v_res_745_);
return v_r_746_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0(void){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_747_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1(void){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = lean_mk_string_unchecked("Name", 4, 4);
return v___x_748_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__2(void){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = lean_mk_string_unchecked("num", 3, 3);
return v___x_749_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_750_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__2, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__2_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__2);
v___x_751_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1);
v___x_752_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0);
v___x_753_ = l_Lean_Name_mkStr3(v___x_752_, v___x_751_, v___x_750_);
return v___x_753_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__4(void){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = lean_mk_string_unchecked("str", 3, 3);
return v___x_754_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5(void){
_start:
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_755_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__4, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__4_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__4);
v___x_756_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1);
v___x_757_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0);
v___x_758_ = l_Lean_Name_mkStr3(v___x_757_, v___x_756_, v___x_755_);
return v___x_758_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__6(void){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = lean_mk_string_unchecked("anonymous", 9, 9);
return v___x_759_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7(void){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_760_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__6, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__6_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__6);
v___x_761_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1);
v___x_762_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0);
v___x_763_ = l_Lean_Name_mkStr3(v___x_762_, v___x_761_, v___x_760_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName(lean_object* v_e_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_){
_start:
{
lean_object* v___x_770_; 
lean_inc(v_a_768_);
lean_inc_ref(v_a_767_);
lean_inc(v_a_766_);
lean_inc_ref(v_a_765_);
v___x_770_ = lean_whnf(v_e_764_, v_a_765_, v_a_766_, v_a_767_, v_a_768_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_852_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_852_ == 0)
{
v___x_773_ = v___x_770_;
v_isShared_774_ = v_isSharedCheck_852_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_770_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_852_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_775_; 
v___x_775_ = l_Lean_Expr_getAppFn(v_a_771_);
if (lean_obj_tag(v___x_775_) == 4)
{
lean_object* v_declName_776_; lean_object* v___x_777_; uint8_t v___y_779_; uint8_t v___y_807_; uint8_t v___y_838_; lean_object* v___x_847_; uint8_t v___x_848_; 
v_declName_776_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_declName_776_);
lean_dec_ref(v___x_775_);
v___x_777_ = l_Lean_Expr_getAppNumArgs(v_a_771_);
v___x_847_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7);
v___x_848_ = lean_name_eq(v_declName_776_, v___x_847_);
if (v___x_848_ == 0)
{
v___y_838_ = v___x_848_;
goto v___jp_837_;
}
else
{
lean_object* v___x_849_; uint8_t v___x_850_; 
v___x_849_ = lean_unsigned_to_nat(0u);
v___x_850_ = lean_nat_dec_eq(v___x_777_, v___x_849_);
v___y_838_ = v___x_850_;
goto v___jp_837_;
}
v___jp_778_:
{
if (v___y_779_ == 0)
{
lean_object* v___x_780_; 
lean_dec(v___x_777_);
v___x_780_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_771_, v_a_765_, v_a_766_, v_a_767_, v_a_768_);
return v___x_780_;
}
else
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_781_ = lean_unsigned_to_nat(1u);
v___x_782_ = lean_nat_sub(v___x_777_, v___x_781_);
lean_dec(v___x_777_);
lean_inc(v___x_782_);
v___x_783_ = l_Lean_Expr_getRevArg_x21(v_a_771_, v___x_782_);
v___x_784_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName(v___x_783_, v_a_765_, v_a_766_, v_a_767_, v_a_768_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_785_);
lean_dec_ref(v___x_784_);
v___x_786_ = lean_nat_sub(v___x_782_, v___x_781_);
lean_dec(v___x_782_);
v___x_787_ = l_Lean_Expr_getRevArg_x21(v_a_771_, v___x_786_);
lean_dec(v_a_771_);
v___x_788_ = l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__0(v___x_787_, v_a_765_, v_a_766_, v_a_767_, v_a_768_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_797_; 
v_a_789_ = lean_ctor_get(v___x_788_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_797_ == 0)
{
v___x_791_ = v___x_788_;
v_isShared_792_ = v_isSharedCheck_797_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_788_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_797_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_793_; lean_object* v___x_795_; 
v___x_793_ = l_Lean_Name_num___override(v_a_785_, v_a_789_);
if (v_isShared_792_ == 0)
{
lean_ctor_set(v___x_791_, 0, v___x_793_);
v___x_795_ = v___x_791_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v___x_793_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_dec(v_a_785_);
v_a_798_ = lean_ctor_get(v___x_788_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_788_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_788_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
else
{
lean_dec(v___x_782_);
lean_dec(v_a_771_);
return v___x_784_;
}
}
}
v___jp_806_:
{
if (v___y_807_ == 0)
{
lean_object* v___x_808_; uint8_t v___x_809_; 
v___x_808_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3);
v___x_809_ = lean_name_eq(v_declName_776_, v___x_808_);
lean_dec(v_declName_776_);
if (v___x_809_ == 0)
{
v___y_779_ = v___x_809_;
goto v___jp_778_;
}
else
{
lean_object* v___x_810_; uint8_t v___x_811_; 
v___x_810_ = lean_box(0);
v___x_811_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0(v___x_777_, v___x_810_);
v___y_779_ = v___x_811_;
goto v___jp_778_;
}
}
else
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
lean_dec(v_declName_776_);
v___x_812_ = lean_unsigned_to_nat(1u);
v___x_813_ = lean_nat_sub(v___x_777_, v___x_812_);
lean_dec(v___x_777_);
lean_inc(v___x_813_);
v___x_814_ = l_Lean_Expr_getRevArg_x21(v_a_771_, v___x_813_);
v___x_815_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName(v___x_814_, v_a_765_, v_a_766_, v_a_767_, v_a_768_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v_a_816_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_a_816_);
lean_dec_ref(v___x_815_);
v___x_817_ = lean_nat_sub(v___x_813_, v___x_812_);
lean_dec(v___x_813_);
v___x_818_ = l_Lean_Expr_getRevArg_x21(v_a_771_, v___x_817_);
lean_dec(v_a_771_);
v___x_819_ = l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__1(v___x_818_, v_a_765_, v_a_766_, v_a_767_, v_a_768_);
if (lean_obj_tag(v___x_819_) == 0)
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_828_; 
v_a_820_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_828_ == 0)
{
v___x_822_ = v___x_819_;
v_isShared_823_ = v_isSharedCheck_828_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_819_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_828_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_824_; lean_object* v___x_826_; 
v___x_824_ = l_Lean_Name_str___override(v_a_816_, v_a_820_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 0, v___x_824_);
v___x_826_ = v___x_822_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
else
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
lean_dec(v_a_816_);
v_a_829_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_819_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_819_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_829_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
}
else
{
lean_dec(v___x_813_);
lean_dec(v_a_771_);
return v___x_815_;
}
}
}
v___jp_837_:
{
if (v___y_838_ == 0)
{
lean_object* v___x_839_; uint8_t v___x_840_; 
lean_del_object(v___x_773_);
v___x_839_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5);
v___x_840_ = lean_name_eq(v_declName_776_, v___x_839_);
if (v___x_840_ == 0)
{
v___y_807_ = v___x_840_;
goto v___jp_806_;
}
else
{
lean_object* v___x_841_; uint8_t v___x_842_; 
v___x_841_ = lean_box(0);
v___x_842_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0(v___x_777_, v___x_841_);
v___y_807_ = v___x_842_;
goto v___jp_806_;
}
}
else
{
lean_object* v___x_843_; lean_object* v___x_845_; 
lean_dec(v___x_777_);
lean_dec(v_declName_776_);
lean_dec(v_a_771_);
v___x_843_ = lean_box(0);
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 0, v___x_843_);
v___x_845_ = v___x_773_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_843_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
else
{
lean_object* v___x_851_; 
lean_dec_ref(v___x_775_);
lean_del_object(v___x_773_);
v___x_851_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_771_, v_a_765_, v_a_766_, v_a_767_, v_a_768_);
return v___x_851_;
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_860_; 
v_a_853_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_860_ == 0)
{
v___x_855_ = v___x_770_;
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_a_853_);
lean_dec(v___x_770_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_858_; 
if (v_isShared_856_ == 0)
{
v___x_858_ = v___x_855_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_a_853_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___boxed(lean_object* v_e_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName(v_e_861_, v_a_862_, v_a_863_, v_a_864_, v_a_865_);
lean_dec(v_a_865_);
lean_dec_ref(v_a_864_);
lean_dec(v_a_863_);
lean_dec_ref(v_a_862_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalName___private__1(lean_object* v_e_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_){
_start:
{
lean_object* v___x_874_; 
v___x_874_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName(v_e_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalName___private__1___boxed(lean_object* v_e_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Lean_Meta_instReduceEvalName___private__1(v_e_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_);
lean_dec(v_a_879_);
lean_dec_ref(v_a_878_);
lean_dec(v_a_877_);
lean_dec_ref(v_a_876_);
return v_res_881_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalName___closed__0(void){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalName___private__1___boxed), 6, 0);
return v___x_882_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalName(void){
_start:
{
lean_object* v___x_883_; 
v___x_883_ = lean_obj_once(&l_Lean_Meta_instReduceEvalName___closed__0, &l_Lean_Meta_instReduceEvalName___closed__0_once, _init_l_Lean_Meta_instReduceEvalName___closed__0);
return v___x_883_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__0(void){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = lean_mk_string_unchecked("List", 4, 4);
return v___x_884_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__1(void){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = lean_mk_string_unchecked("nil", 3, 3);
return v___x_885_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__2(void){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = lean_mk_string_unchecked("cons", 4, 4);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(lean_object* v_inst_887_, lean_object* v_e_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_){
_start:
{
lean_object* v___x_894_; 
lean_inc(v_a_892_);
lean_inc_ref(v_a_891_);
lean_inc(v_a_890_);
lean_inc_ref(v_a_889_);
v___x_894_ = lean_whnf(v_e_888_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_956_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_956_ == 0)
{
v___x_897_ = v___x_894_;
v_isShared_898_ = v_isSharedCheck_956_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_894_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_956_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_Expr_getAppFn(v_a_895_);
if (lean_obj_tag(v___x_899_) == 4)
{
lean_object* v_declName_900_; 
v_declName_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_declName_900_);
lean_dec_ref(v___x_899_);
if (lean_obj_tag(v_declName_900_) == 1)
{
lean_object* v_pre_901_; 
v_pre_901_ = lean_ctor_get(v_declName_900_, 0);
lean_inc(v_pre_901_);
if (lean_obj_tag(v_pre_901_) == 1)
{
lean_object* v_pre_902_; 
v_pre_902_ = lean_ctor_get(v_pre_901_, 0);
if (lean_obj_tag(v_pre_902_) == 0)
{
lean_object* v_str_903_; lean_object* v_str_904_; lean_object* v___x_905_; uint8_t v___x_906_; 
v_str_903_ = lean_ctor_get(v_declName_900_, 1);
lean_inc_ref(v_str_903_);
lean_dec_ref(v_declName_900_);
v_str_904_ = lean_ctor_get(v_pre_901_, 1);
lean_inc_ref(v_str_904_);
lean_dec_ref(v_pre_901_);
v___x_905_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__0, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__0_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__0);
v___x_906_ = lean_string_dec_eq(v_str_904_, v___x_905_);
lean_dec_ref(v_str_904_);
if (v___x_906_ == 0)
{
lean_object* v___x_907_; 
lean_dec_ref(v_str_903_);
lean_del_object(v___x_897_);
lean_dec_ref(v_inst_887_);
v___x_907_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_895_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
return v___x_907_;
}
else
{
lean_object* v___x_908_; lean_object* v___x_909_; uint8_t v___x_910_; 
v___x_908_ = l_Lean_Expr_getAppNumArgs(v_a_895_);
v___x_909_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__1, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__1_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__1);
v___x_910_ = lean_string_dec_eq(v_str_903_, v___x_909_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; uint8_t v___x_912_; 
lean_del_object(v___x_897_);
v___x_911_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__2, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__2_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__2);
v___x_912_ = lean_string_dec_eq(v_str_903_, v___x_911_);
lean_dec_ref(v_str_903_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; 
lean_dec(v___x_908_);
lean_dec_ref(v_inst_887_);
v___x_913_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_895_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
return v___x_913_;
}
else
{
lean_object* v___x_914_; uint8_t v___x_915_; 
v___x_914_ = lean_unsigned_to_nat(3u);
v___x_915_ = lean_nat_dec_eq(v___x_908_, v___x_914_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; 
lean_dec(v___x_908_);
lean_dec_ref(v_inst_887_);
v___x_916_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_895_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
return v___x_916_;
}
else
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_917_ = lean_unsigned_to_nat(1u);
v___x_918_ = lean_nat_sub(v___x_908_, v___x_917_);
v___x_919_ = lean_nat_sub(v___x_918_, v___x_917_);
lean_dec(v___x_918_);
v___x_920_ = l_Lean_Expr_getRevArg_x21(v_a_895_, v___x_919_);
lean_inc_ref(v_inst_887_);
v___x_921_ = l_Lean_Meta_reduceEval___redArg(v_inst_887_, v___x_920_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_922_);
lean_dec_ref(v___x_921_);
v___x_923_ = lean_unsigned_to_nat(2u);
v___x_924_ = lean_nat_sub(v___x_908_, v___x_923_);
lean_dec(v___x_908_);
v___x_925_ = lean_nat_sub(v___x_924_, v___x_917_);
lean_dec(v___x_924_);
v___x_926_ = l_Lean_Expr_getRevArg_x21(v_a_895_, v___x_925_);
lean_dec(v_a_895_);
v___x_927_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(v_inst_887_, v___x_926_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_936_; 
v_a_928_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_936_ == 0)
{
v___x_930_ = v___x_927_;
v_isShared_931_ = v_isSharedCheck_936_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_927_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_936_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_932_; lean_object* v___x_934_; 
v___x_932_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_932_, 0, v_a_922_);
lean_ctor_set(v___x_932_, 1, v_a_928_);
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 0, v___x_932_);
v___x_934_ = v___x_930_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v___x_932_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
else
{
lean_dec(v_a_922_);
return v___x_927_;
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
lean_dec(v___x_908_);
lean_dec(v_a_895_);
lean_dec_ref(v_inst_887_);
v_a_937_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_921_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_921_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
}
}
else
{
lean_object* v___x_945_; uint8_t v___x_946_; 
lean_dec_ref(v_str_903_);
lean_dec_ref(v_inst_887_);
v___x_945_ = lean_unsigned_to_nat(1u);
v___x_946_ = lean_nat_dec_eq(v___x_908_, v___x_945_);
lean_dec(v___x_908_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
lean_del_object(v___x_897_);
v___x_947_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_895_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
return v___x_947_;
}
else
{
lean_object* v___x_948_; lean_object* v___x_950_; 
lean_dec(v_a_895_);
v___x_948_ = lean_box(0);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v___x_948_);
v___x_950_ = v___x_897_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v___x_948_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
}
else
{
lean_object* v___x_952_; 
lean_dec_ref(v_pre_901_);
lean_dec_ref(v_declName_900_);
lean_del_object(v___x_897_);
lean_dec_ref(v_inst_887_);
v___x_952_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_895_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
return v___x_952_;
}
}
else
{
lean_object* v___x_953_; 
lean_dec_ref(v_declName_900_);
lean_dec(v_pre_901_);
lean_del_object(v___x_897_);
lean_dec_ref(v_inst_887_);
v___x_953_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_895_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
return v___x_953_;
}
}
else
{
lean_object* v___x_954_; 
lean_dec(v_declName_900_);
lean_del_object(v___x_897_);
lean_dec_ref(v_inst_887_);
v___x_954_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_895_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
return v___x_954_;
}
}
else
{
lean_object* v___x_955_; 
lean_dec_ref(v___x_899_);
lean_del_object(v___x_897_);
lean_dec_ref(v_inst_887_);
v___x_955_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_895_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
return v___x_955_;
}
}
}
else
{
lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_964_; 
lean_dec_ref(v_inst_887_);
v_a_957_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_964_ == 0)
{
v___x_959_ = v___x_894_;
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_dec(v___x_894_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_962_; 
if (v_isShared_960_ == 0)
{
v___x_962_ = v___x_959_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_a_957_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___boxed(lean_object* v_inst_965_, lean_object* v_e_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(v_inst_965_, v_e_966_, v_a_967_, v_a_968_, v_a_969_, v_a_970_);
lean_dec(v_a_970_);
lean_dec_ref(v_a_969_);
lean_dec(v_a_968_);
lean_dec_ref(v_a_967_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList(lean_object* v_00_u03b1_973_, lean_object* v_inst_974_, lean_object* v_e_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(v_inst_974_, v_e_975_, v_a_976_, v_a_977_, v_a_978_, v_a_979_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___boxed(lean_object* v_00_u03b1_982_, lean_object* v_inst_983_, lean_object* v_e_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList(v_00_u03b1_982_, v_inst_983_, v_e_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_);
lean_dec(v_a_988_);
lean_dec_ref(v_a_987_);
lean_dec(v_a_986_);
lean_dec_ref(v_a_985_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1___redArg(lean_object* v_inst_991_, lean_object* v_e_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(v_inst_991_, v_e_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1___redArg___boxed(lean_object* v_inst_999_, lean_object* v_e_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l_Lean_Meta_instReduceEvalList___private__1___redArg(v_inst_999_, v_e_1000_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_);
lean_dec(v_a_1004_);
lean_dec_ref(v_a_1003_);
lean_dec(v_a_1002_);
lean_dec_ref(v_a_1001_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1(lean_object* v_00_u03b1_1007_, lean_object* v_inst_1008_, lean_object* v_e_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_){
_start:
{
lean_object* v___x_1015_; 
v___x_1015_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(v_inst_1008_, v_e_1009_, v_a_1010_, v_a_1011_, v_a_1012_, v_a_1013_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1___boxed(lean_object* v_00_u03b1_1016_, lean_object* v_inst_1017_, lean_object* v_e_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_Lean_Meta_instReduceEvalList___private__1(v_00_u03b1_1016_, v_inst_1017_, v_e_1018_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_);
lean_dec(v_a_1022_);
lean_dec_ref(v_a_1021_);
lean_dec(v_a_1020_);
lean_dec_ref(v_a_1019_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___redArg(lean_object* v_inst_1025_){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalList___private__1___boxed), 8, 2);
lean_closure_set(v___x_1026_, 0, lean_box(0));
lean_closure_set(v___x_1026_, 1, v_inst_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList(lean_object* v_00_u03b1_1027_, lean_object* v_inst_1028_){
_start:
{
lean_object* v___x_1029_; 
v___x_1029_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalList___private__1___boxed), 8, 2);
lean_closure_set(v___x_1029_, 0, lean_box(0));
lean_closure_set(v___x_1029_, 1, v_inst_1028_);
return v___x_1029_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = lean_mk_string_unchecked("Fin", 3, 3);
return v___x_1030_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_mk_string_unchecked("mk", 2, 2);
return v___x_1031_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1032_ = lean_obj_once(&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1, &l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1_once, _init_l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1);
v___x_1033_ = lean_obj_once(&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__0, &l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__0_once, _init_l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__0);
v___x_1034_ = l_Lean_Name_mkStr2(v___x_1033_, v___x_1032_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg(lean_object* v_n_1035_, lean_object* v_e_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_){
_start:
{
lean_object* v___x_1042_; 
lean_inc(v_a_1040_);
lean_inc_ref(v_a_1039_);
lean_inc(v_a_1038_);
lean_inc_ref(v_a_1037_);
v___x_1042_ = lean_whnf(v_e_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; uint8_t v___x_1046_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_a_1043_);
lean_dec_ref(v___x_1042_);
v___x_1044_ = lean_obj_once(&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2, &l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2_once, _init_l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2);
v___x_1045_ = lean_unsigned_to_nat(3u);
v___x_1046_ = l_Lean_Expr_isAppOfArity(v_a_1043_, v___x_1044_, v___x_1045_);
if (v___x_1046_ == 0)
{
lean_object* v___x_1047_; 
v___x_1047_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1043_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_);
return v___x_1047_;
}
else
{
lean_object* v___f_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___f_1048_ = lean_obj_once(&l_Lean_Meta_instReduceEvalNat___closed__0, &l_Lean_Meta_instReduceEvalNat___closed__0_once, _init_l_Lean_Meta_instReduceEvalNat___closed__0);
v___x_1049_ = lean_unsigned_to_nat(1u);
v___x_1050_ = l_Lean_Expr_getAppNumArgs(v_a_1043_);
v___x_1051_ = lean_nat_sub(v___x_1050_, v___x_1049_);
lean_dec(v___x_1050_);
v___x_1052_ = lean_nat_sub(v___x_1051_, v___x_1049_);
lean_dec(v___x_1051_);
v___x_1053_ = l_Lean_Expr_getRevArg_x21(v_a_1043_, v___x_1052_);
lean_dec(v_a_1043_);
v___x_1054_ = l_Lean_Meta_reduceEval___redArg(v___f_1048_, v___x_1053_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_);
if (lean_obj_tag(v___x_1054_) == 0)
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1063_; 
v_a_1055_ = lean_ctor_get(v___x_1054_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1057_ = v___x_1054_;
v_isShared_1058_ = v_isSharedCheck_1063_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1054_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1063_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; lean_object* v___x_1061_; 
v___x_1059_ = lean_nat_mod(v_a_1055_, v_n_1035_);
lean_dec(v_a_1055_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v___x_1059_);
v___x_1061_ = v___x_1057_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1059_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1071_; 
v_a_1064_ = lean_ctor_get(v___x_1054_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1066_ = v___x_1054_;
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_dec(v___x_1054_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_a_1064_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
v_a_1072_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1042_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1042_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___boxed(lean_object* v_n_1080_, lean_object* v_e_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg(v_n_1080_, v_e_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_);
lean_dec(v_a_1085_);
lean_dec_ref(v_a_1084_);
lean_dec(v_a_1083_);
lean_dec_ref(v_a_1082_);
lean_dec(v_n_1080_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1(lean_object* v_n_1088_, lean_object* v_inst_1089_, lean_object* v_e_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v___x_1096_; 
lean_inc(v_a_1094_);
lean_inc_ref(v_a_1093_);
lean_inc(v_a_1092_);
lean_inc_ref(v_a_1091_);
v___x_1096_ = lean_whnf(v_e_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v_a_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_a_1097_);
lean_dec_ref(v___x_1096_);
v___x_1098_ = lean_obj_once(&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2, &l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2_once, _init_l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2);
v___x_1099_ = lean_unsigned_to_nat(3u);
v___x_1100_ = l_Lean_Expr_isAppOfArity(v_a_1097_, v___x_1098_, v___x_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; 
v___x_1101_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1097_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_);
return v___x_1101_;
}
else
{
lean_object* v___f_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___f_1102_ = lean_obj_once(&l_Lean_Meta_instReduceEvalNat___closed__0, &l_Lean_Meta_instReduceEvalNat___closed__0_once, _init_l_Lean_Meta_instReduceEvalNat___closed__0);
v___x_1103_ = lean_unsigned_to_nat(1u);
v___x_1104_ = l_Lean_Expr_getAppNumArgs(v_a_1097_);
v___x_1105_ = lean_nat_sub(v___x_1104_, v___x_1103_);
lean_dec(v___x_1104_);
v___x_1106_ = lean_nat_sub(v___x_1105_, v___x_1103_);
lean_dec(v___x_1105_);
v___x_1107_ = l_Lean_Expr_getRevArg_x21(v_a_1097_, v___x_1106_);
lean_dec(v_a_1097_);
v___x_1108_ = l_Lean_Meta_reduceEval___redArg(v___f_1102_, v___x_1107_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1117_; 
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1111_ = v___x_1108_;
v_isShared_1112_ = v_isSharedCheck_1117_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1108_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1117_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1113_; lean_object* v___x_1115_; 
v___x_1113_ = lean_nat_mod(v_a_1109_, v_n_1088_);
lean_dec(v_a_1109_);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v___x_1113_);
v___x_1115_ = v___x_1111_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1113_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
v_a_1118_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_1108_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1108_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
}
else
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
v_a_1126_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1096_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1096_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___boxed(lean_object* v_n_1134_, lean_object* v_inst_1135_, lean_object* v_e_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1(v_n_1134_, v_inst_1135_, v_e_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_);
lean_dec(v_a_1140_);
lean_dec_ref(v_a_1139_);
lean_dec(v_a_1138_);
lean_dec_ref(v_a_1137_);
lean_dec(v_n_1134_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___redArg(lean_object* v_n_1143_){
_start:
{
lean_object* v___x_1144_; 
v___x_1144_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___boxed), 8, 2);
lean_closure_set(v___x_1144_, 0, v_n_1143_);
lean_closure_set(v___x_1144_, 1, lean_box(0));
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat(lean_object* v_n_1145_, lean_object* v_inst_1146_){
_start:
{
lean_object* v___x_1147_; 
v___x_1147_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___boxed), 8, 2);
lean_closure_set(v___x_1147_, 0, v_n_1145_);
lean_closure_set(v___x_1147_, 1, lean_box(0));
return v___x_1147_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBitVec___private__1___closed__0(void){
_start:
{
lean_object* v___x_1148_; 
v___x_1148_ = lean_mk_string_unchecked("BitVec", 6, 6);
return v___x_1148_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBitVec___private__1___closed__1(void){
_start:
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_mk_string_unchecked("ofFin", 5, 5);
return v___x_1149_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBitVec___private__1___closed__2(void){
_start:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1150_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBitVec___private__1___closed__1, &l_Lean_Meta_instReduceEvalBitVec___private__1___closed__1_once, _init_l_Lean_Meta_instReduceEvalBitVec___private__1___closed__1);
v___x_1151_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBitVec___private__1___closed__0, &l_Lean_Meta_instReduceEvalBitVec___private__1___closed__0_once, _init_l_Lean_Meta_instReduceEvalBitVec___private__1___closed__0);
v___x_1152_ = l_Lean_Name_mkStr2(v___x_1151_, v___x_1150_);
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1(lean_object* v_n_1153_, lean_object* v_e_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_){
_start:
{
lean_object* v___x_1160_; 
lean_inc(v_a_1158_);
lean_inc_ref(v_a_1157_);
lean_inc(v_a_1156_);
lean_inc_ref(v_a_1155_);
v___x_1160_ = lean_whnf(v_e_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_);
if (lean_obj_tag(v___x_1160_) == 0)
{
lean_object* v_a_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; uint8_t v___x_1164_; 
v_a_1161_ = lean_ctor_get(v___x_1160_, 0);
lean_inc(v_a_1161_);
lean_dec_ref(v___x_1160_);
v___x_1162_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBitVec___private__1___closed__2, &l_Lean_Meta_instReduceEvalBitVec___private__1___closed__2_once, _init_l_Lean_Meta_instReduceEvalBitVec___private__1___closed__2);
v___x_1163_ = lean_unsigned_to_nat(2u);
v___x_1164_ = l_Lean_Expr_isAppOfArity(v_a_1161_, v___x_1162_, v___x_1163_);
if (v___x_1164_ == 0)
{
lean_object* v___x_1165_; 
v___x_1165_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1161_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_);
return v___x_1165_;
}
else
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1166_ = lean_nat_pow(v___x_1163_, v_n_1153_);
v___x_1167_ = lean_unsigned_to_nat(1u);
v___x_1168_ = lean_nat_sub(v___x_1166_, v___x_1167_);
lean_dec(v___x_1166_);
v___x_1169_ = lean_nat_add(v___x_1168_, v___x_1167_);
lean_dec(v___x_1168_);
v___x_1170_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___boxed), 8, 2);
lean_closure_set(v___x_1170_, 0, v___x_1169_);
lean_closure_set(v___x_1170_, 1, lean_box(0));
v___x_1171_ = l_Lean_Expr_getAppNumArgs(v_a_1161_);
v___x_1172_ = lean_nat_sub(v___x_1171_, v___x_1167_);
lean_dec(v___x_1171_);
v___x_1173_ = lean_nat_sub(v___x_1172_, v___x_1167_);
lean_dec(v___x_1172_);
v___x_1174_ = l_Lean_Expr_getRevArg_x21(v_a_1161_, v___x_1173_);
lean_dec(v_a_1161_);
v___x_1175_ = l_Lean_Meta_reduceEval___redArg(v___x_1170_, v___x_1174_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_);
if (lean_obj_tag(v___x_1175_) == 0)
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1183_; 
v_a_1176_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1178_ = v___x_1175_;
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1175_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
else
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
v_a_1184_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v___x_1175_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1175_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
v_a_1192_ = lean_ctor_get(v___x_1160_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1160_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1160_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1___boxed(lean_object* v_n_1200_, lean_object* v_e_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l_Lean_Meta_instReduceEvalBitVec___private__1(v_n_1200_, v_e_1201_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_);
lean_dec(v_a_1205_);
lean_dec_ref(v_a_1204_);
lean_dec(v_a_1203_);
lean_dec_ref(v_a_1202_);
lean_dec(v_n_1200_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBitVec(lean_object* v_n_1208_){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalBitVec___private__1___boxed), 7, 1);
lean_closure_set(v___x_1209_, 0, v_n_1208_);
return v___x_1209_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBool___private__1___closed__0(void){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = lean_mk_string_unchecked("Bool", 4, 4);
return v___x_1210_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBool___private__1___closed__1(void){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = lean_mk_string_unchecked("true", 4, 4);
return v___x_1211_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBool___private__1___closed__2(void){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1212_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBool___private__1___closed__1, &l_Lean_Meta_instReduceEvalBool___private__1___closed__1_once, _init_l_Lean_Meta_instReduceEvalBool___private__1___closed__1);
v___x_1213_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBool___private__1___closed__0, &l_Lean_Meta_instReduceEvalBool___private__1___closed__0_once, _init_l_Lean_Meta_instReduceEvalBool___private__1___closed__0);
v___x_1214_ = l_Lean_Name_mkStr2(v___x_1213_, v___x_1212_);
return v___x_1214_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBool___private__1___closed__3(void){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = lean_mk_string_unchecked("false", 5, 5);
return v___x_1215_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBool___private__1___closed__4(void){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1216_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBool___private__1___closed__3, &l_Lean_Meta_instReduceEvalBool___private__1___closed__3_once, _init_l_Lean_Meta_instReduceEvalBool___private__1___closed__3);
v___x_1217_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBool___private__1___closed__0, &l_Lean_Meta_instReduceEvalBool___private__1___closed__0_once, _init_l_Lean_Meta_instReduceEvalBool___private__1___closed__0);
v___x_1218_ = l_Lean_Name_mkStr2(v___x_1217_, v___x_1216_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBool___private__1(lean_object* v_e_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_){
_start:
{
lean_object* v___x_1225_; 
lean_inc(v_a_1223_);
lean_inc_ref(v_a_1222_);
lean_inc(v_a_1221_);
lean_inc_ref(v_a_1220_);
v___x_1225_ = lean_whnf(v_e_1219_, v_a_1220_, v_a_1221_, v_a_1222_, v_a_1223_);
if (lean_obj_tag(v___x_1225_) == 0)
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1243_; 
v_a_1226_ = lean_ctor_get(v___x_1225_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1228_ = v___x_1225_;
v_isShared_1229_ = v_isSharedCheck_1243_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1225_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1243_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1230_; uint8_t v___x_1231_; 
v___x_1230_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBool___private__1___closed__2, &l_Lean_Meta_instReduceEvalBool___private__1___closed__2_once, _init_l_Lean_Meta_instReduceEvalBool___private__1___closed__2);
v___x_1231_ = l_Lean_Expr_isAppOf(v_a_1226_, v___x_1230_);
if (v___x_1231_ == 0)
{
lean_object* v___x_1232_; uint8_t v___x_1233_; 
v___x_1232_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBool___private__1___closed__4, &l_Lean_Meta_instReduceEvalBool___private__1___closed__4_once, _init_l_Lean_Meta_instReduceEvalBool___private__1___closed__4);
v___x_1233_ = l_Lean_Expr_isAppOf(v_a_1226_, v___x_1232_);
if (v___x_1233_ == 0)
{
lean_object* v___x_1234_; 
lean_del_object(v___x_1228_);
v___x_1234_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1226_, v_a_1220_, v_a_1221_, v_a_1222_, v_a_1223_);
return v___x_1234_;
}
else
{
lean_object* v___x_1235_; lean_object* v___x_1237_; 
lean_dec(v_a_1226_);
v___x_1235_ = lean_box(v___x_1231_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 0, v___x_1235_);
v___x_1237_ = v___x_1228_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v___x_1235_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
else
{
lean_object* v___x_1239_; lean_object* v___x_1241_; 
lean_dec(v_a_1226_);
v___x_1239_ = lean_box(v___x_1231_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 0, v___x_1239_);
v___x_1241_ = v___x_1228_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v___x_1239_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
}
else
{
lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1251_; 
v_a_1244_ = lean_ctor_get(v___x_1225_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1246_ = v___x_1225_;
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1225_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___x_1249_; 
if (v_isShared_1247_ == 0)
{
v___x_1249_ = v___x_1246_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_a_1244_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBool___private__1___boxed(lean_object* v_e_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l_Lean_Meta_instReduceEvalBool___private__1(v_e_1252_, v_a_1253_, v_a_1254_, v_a_1255_, v_a_1256_);
lean_dec(v_a_1256_);
lean_dec_ref(v_a_1255_);
lean_dec(v_a_1254_);
lean_dec_ref(v_a_1253_);
return v_res_1258_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBool___closed__0(void){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalBool___private__1___boxed), 6, 0);
return v___x_1259_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBool(void){
_start:
{
lean_object* v___x_1260_; 
v___x_1260_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBool___closed__0, &l_Lean_Meta_instReduceEvalBool___closed__0_once, _init_l_Lean_Meta_instReduceEvalBool___closed__0);
return v___x_1260_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__0(void){
_start:
{
lean_object* v___x_1261_; 
v___x_1261_ = lean_mk_string_unchecked("BinderInfo", 10, 10);
return v___x_1261_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__1(void){
_start:
{
lean_object* v___x_1262_; 
v___x_1262_ = lean_mk_string_unchecked("default", 7, 7);
return v___x_1262_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__2(void){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = lean_mk_string_unchecked("implicit", 8, 8);
return v___x_1263_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__3(void){
_start:
{
lean_object* v___x_1264_; 
v___x_1264_ = lean_mk_string_unchecked("strictImplicit", 14, 14);
return v___x_1264_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__4(void){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_mk_string_unchecked("instImplicit", 12, 12);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1(lean_object* v_e_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_){
_start:
{
lean_object* v___x_1272_; 
lean_inc(v_a_1270_);
lean_inc_ref(v_a_1269_);
lean_inc(v_a_1268_);
lean_inc_ref(v_a_1267_);
lean_inc_ref(v_e_1266_);
v___x_1272_ = lean_whnf(v_e_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1325_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1275_ = v___x_1272_;
v_isShared_1276_ = v_isSharedCheck_1325_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1272_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1325_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1277_; 
v___x_1277_ = l_Lean_Expr_constName_x3f(v_a_1273_);
lean_dec(v_a_1273_);
if (lean_obj_tag(v___x_1277_) == 1)
{
lean_object* v_val_1278_; 
v_val_1278_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_val_1278_);
lean_dec_ref(v___x_1277_);
if (lean_obj_tag(v_val_1278_) == 1)
{
lean_object* v_pre_1279_; 
v_pre_1279_ = lean_ctor_get(v_val_1278_, 0);
lean_inc(v_pre_1279_);
if (lean_obj_tag(v_pre_1279_) == 1)
{
lean_object* v_pre_1280_; 
v_pre_1280_ = lean_ctor_get(v_pre_1279_, 0);
lean_inc(v_pre_1280_);
if (lean_obj_tag(v_pre_1280_) == 1)
{
lean_object* v_pre_1281_; 
v_pre_1281_ = lean_ctor_get(v_pre_1280_, 0);
if (lean_obj_tag(v_pre_1281_) == 0)
{
lean_object* v_str_1282_; lean_object* v_str_1283_; lean_object* v_str_1284_; lean_object* v___x_1285_; uint8_t v___x_1286_; 
v_str_1282_ = lean_ctor_get(v_val_1278_, 1);
lean_inc_ref(v_str_1282_);
lean_dec_ref(v_val_1278_);
v_str_1283_ = lean_ctor_get(v_pre_1279_, 1);
lean_inc_ref(v_str_1283_);
lean_dec_ref(v_pre_1279_);
v_str_1284_ = lean_ctor_get(v_pre_1280_, 1);
lean_inc_ref(v_str_1284_);
lean_dec_ref(v_pre_1280_);
v___x_1285_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0);
v___x_1286_ = lean_string_dec_eq(v_str_1284_, v___x_1285_);
lean_dec_ref(v_str_1284_);
if (v___x_1286_ == 0)
{
lean_object* v___x_1287_; 
lean_dec_ref(v_str_1283_);
lean_dec_ref(v_str_1282_);
lean_del_object(v___x_1275_);
v___x_1287_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1287_;
}
else
{
lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1288_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__0, &l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__0_once, _init_l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__0);
v___x_1289_ = lean_string_dec_eq(v_str_1283_, v___x_1288_);
lean_dec_ref(v_str_1283_);
if (v___x_1289_ == 0)
{
lean_object* v___x_1290_; 
lean_dec_ref(v_str_1282_);
lean_del_object(v___x_1275_);
v___x_1290_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1290_;
}
else
{
lean_object* v___x_1291_; uint8_t v___x_1292_; 
v___x_1291_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__1, &l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__1_once, _init_l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__1);
v___x_1292_ = lean_string_dec_eq(v_str_1282_, v___x_1291_);
if (v___x_1292_ == 0)
{
lean_object* v___x_1293_; uint8_t v___x_1294_; 
v___x_1293_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__2, &l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__2_once, _init_l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__2);
v___x_1294_ = lean_string_dec_eq(v_str_1282_, v___x_1293_);
if (v___x_1294_ == 0)
{
lean_object* v___x_1295_; uint8_t v___x_1296_; 
v___x_1295_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__3, &l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__3_once, _init_l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__3);
v___x_1296_ = lean_string_dec_eq(v_str_1282_, v___x_1295_);
if (v___x_1296_ == 0)
{
lean_object* v___x_1297_; uint8_t v___x_1298_; 
v___x_1297_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__4, &l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__4_once, _init_l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__4);
v___x_1298_ = lean_string_dec_eq(v_str_1282_, v___x_1297_);
lean_dec_ref(v_str_1282_);
if (v___x_1298_ == 0)
{
lean_object* v___x_1299_; 
lean_del_object(v___x_1275_);
v___x_1299_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1299_;
}
else
{
uint8_t v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1303_; 
lean_dec_ref(v_e_1266_);
v___x_1300_ = 3;
v___x_1301_ = lean_box(v___x_1300_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1301_);
v___x_1303_ = v___x_1275_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v___x_1301_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
}
else
{
uint8_t v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1308_; 
lean_dec_ref(v_str_1282_);
lean_dec_ref(v_e_1266_);
v___x_1305_ = 2;
v___x_1306_ = lean_box(v___x_1305_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1306_);
v___x_1308_ = v___x_1275_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v___x_1306_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
else
{
uint8_t v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1313_; 
lean_dec_ref(v_str_1282_);
lean_dec_ref(v_e_1266_);
v___x_1310_ = 1;
v___x_1311_ = lean_box(v___x_1310_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1311_);
v___x_1313_ = v___x_1275_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v___x_1311_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
else
{
uint8_t v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1318_; 
lean_dec_ref(v_str_1282_);
lean_dec_ref(v_e_1266_);
v___x_1315_ = 0;
v___x_1316_ = lean_box(v___x_1315_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1316_);
v___x_1318_ = v___x_1275_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v___x_1316_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
}
else
{
lean_object* v___x_1320_; 
lean_dec_ref(v_pre_1280_);
lean_dec_ref(v_pre_1279_);
lean_dec_ref(v_val_1278_);
lean_del_object(v___x_1275_);
v___x_1320_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1320_;
}
}
else
{
lean_object* v___x_1321_; 
lean_dec_ref(v_pre_1279_);
lean_dec(v_pre_1280_);
lean_dec_ref(v_val_1278_);
lean_del_object(v___x_1275_);
v___x_1321_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1321_;
}
}
else
{
lean_object* v___x_1322_; 
lean_dec_ref(v_val_1278_);
lean_dec(v_pre_1279_);
lean_del_object(v___x_1275_);
v___x_1322_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1322_;
}
}
else
{
lean_object* v___x_1323_; 
lean_dec(v_val_1278_);
lean_del_object(v___x_1275_);
v___x_1323_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1323_;
}
}
else
{
lean_object* v___x_1324_; 
lean_dec(v___x_1277_);
lean_del_object(v___x_1275_);
v___x_1324_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1324_;
}
}
}
else
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1333_; 
lean_dec_ref(v_e_1266_);
v_a_1326_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1328_ = v___x_1272_;
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1272_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1331_; 
if (v_isShared_1329_ == 0)
{
v___x_1331_ = v___x_1328_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_a_1326_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___boxed(lean_object* v_e_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l_Lean_Meta_instReduceEvalBinderInfo___private__1(v_e_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_);
lean_dec(v_a_1338_);
lean_dec_ref(v_a_1337_);
lean_dec(v_a_1336_);
lean_dec_ref(v_a_1335_);
return v_res_1340_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBinderInfo___closed__0(void){
_start:
{
lean_object* v___x_1341_; 
v___x_1341_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalBinderInfo___private__1___boxed), 6, 0);
return v___x_1341_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalBinderInfo(void){
_start:
{
lean_object* v___x_1342_; 
v___x_1342_ = lean_obj_once(&l_Lean_Meta_instReduceEvalBinderInfo___closed__0, &l_Lean_Meta_instReduceEvalBinderInfo___closed__0_once, _init_l_Lean_Meta_instReduceEvalBinderInfo___closed__0);
return v___x_1342_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0(void){
_start:
{
lean_object* v___x_1343_; 
v___x_1343_ = lean_mk_string_unchecked("Literal", 7, 7);
return v___x_1343_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalLiteral___private__1___closed__1(void){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_mk_string_unchecked("natVal", 6, 6);
return v___x_1344_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1345_ = lean_obj_once(&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__1, &l_Lean_Meta_instReduceEvalLiteral___private__1___closed__1_once, _init_l_Lean_Meta_instReduceEvalLiteral___private__1___closed__1);
v___x_1346_ = lean_obj_once(&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0, &l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0_once, _init_l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0);
v___x_1347_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0);
v___x_1348_ = l_Lean_Name_mkStr3(v___x_1347_, v___x_1346_, v___x_1345_);
return v___x_1348_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalLiteral___private__1___closed__3(void){
_start:
{
lean_object* v___x_1349_; 
v___x_1349_ = lean_mk_string_unchecked("strVal", 6, 6);
return v___x_1349_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4(void){
_start:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1350_ = lean_obj_once(&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__3, &l_Lean_Meta_instReduceEvalLiteral___private__1___closed__3_once, _init_l_Lean_Meta_instReduceEvalLiteral___private__1___closed__3);
v___x_1351_ = lean_obj_once(&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0, &l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0_once, _init_l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0);
v___x_1352_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0);
v___x_1353_ = l_Lean_Name_mkStr3(v___x_1352_, v___x_1351_, v___x_1350_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1(lean_object* v_e_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_){
_start:
{
lean_object* v___x_1360_; 
lean_inc(v_a_1358_);
lean_inc_ref(v_a_1357_);
lean_inc(v_a_1356_);
lean_inc_ref(v_a_1355_);
v___x_1360_ = lean_whnf(v_e_1354_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v_a_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; uint8_t v___x_1364_; 
v_a_1361_ = lean_ctor_get(v___x_1360_, 0);
lean_inc(v_a_1361_);
lean_dec_ref(v___x_1360_);
v___x_1362_ = lean_obj_once(&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2, &l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2_once, _init_l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2);
v___x_1363_ = lean_unsigned_to_nat(1u);
v___x_1364_ = l_Lean_Expr_isAppOfArity(v_a_1361_, v___x_1362_, v___x_1363_);
if (v___x_1364_ == 0)
{
lean_object* v___x_1365_; uint8_t v___x_1366_; 
v___x_1365_ = lean_obj_once(&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4, &l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4_once, _init_l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4);
v___x_1366_ = l_Lean_Expr_isAppOfArity(v_a_1361_, v___x_1365_, v___x_1363_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; 
v___x_1367_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1361_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_);
return v___x_1367_;
}
else
{
lean_object* v___f_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___f_1368_ = lean_obj_once(&l_Lean_Meta_instReduceEvalString___closed__0, &l_Lean_Meta_instReduceEvalString___closed__0_once, _init_l_Lean_Meta_instReduceEvalString___closed__0);
v___x_1369_ = l_Lean_Expr_getAppNumArgs(v_a_1361_);
v___x_1370_ = lean_nat_sub(v___x_1369_, v___x_1363_);
lean_dec(v___x_1369_);
v___x_1371_ = l_Lean_Expr_getRevArg_x21(v_a_1361_, v___x_1370_);
lean_dec(v_a_1361_);
v___x_1372_ = l_Lean_Meta_reduceEval___redArg(v___f_1368_, v___x_1371_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1381_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1375_ = v___x_1372_;
v_isShared_1376_ = v_isSharedCheck_1381_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1381_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1379_; 
v___x_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1377_, 0, v_a_1373_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1377_);
v___x_1379_ = v___x_1375_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v___x_1377_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
}
else
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1389_; 
v_a_1382_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1384_ = v___x_1372_;
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1372_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_a_1382_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
}
else
{
lean_object* v___f_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___f_1390_ = lean_obj_once(&l_Lean_Meta_instReduceEvalNat___closed__0, &l_Lean_Meta_instReduceEvalNat___closed__0_once, _init_l_Lean_Meta_instReduceEvalNat___closed__0);
v___x_1391_ = l_Lean_Expr_getAppNumArgs(v_a_1361_);
v___x_1392_ = lean_nat_sub(v___x_1391_, v___x_1363_);
lean_dec(v___x_1391_);
v___x_1393_ = l_Lean_Expr_getRevArg_x21(v_a_1361_, v___x_1392_);
lean_dec(v_a_1361_);
v___x_1394_ = l_Lean_Meta_reduceEval___redArg(v___f_1390_, v___x_1393_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1403_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1397_ = v___x_1394_;
v_isShared_1398_ = v_isSharedCheck_1403_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_a_1395_);
lean_dec(v___x_1394_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1403_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1399_; lean_object* v___x_1401_; 
v___x_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1399_, 0, v_a_1395_);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 0, v___x_1399_);
v___x_1401_ = v___x_1397_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v___x_1399_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
v_a_1404_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1394_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1394_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
else
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1419_; 
v_a_1412_ = lean_ctor_get(v___x_1360_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1414_ = v___x_1360_;
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1360_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1417_; 
if (v_isShared_1415_ == 0)
{
v___x_1417_ = v___x_1414_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1412_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___boxed(lean_object* v_e_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Lean_Meta_instReduceEvalLiteral___private__1(v_e_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_);
lean_dec(v_a_1424_);
lean_dec_ref(v_a_1423_);
lean_dec(v_a_1422_);
lean_dec_ref(v_a_1421_);
return v_res_1426_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalLiteral___closed__0(void){
_start:
{
lean_object* v___x_1427_; 
v___x_1427_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalLiteral___private__1___boxed), 6, 0);
return v___x_1427_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalLiteral(void){
_start:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_obj_once(&l_Lean_Meta_instReduceEvalLiteral___closed__0, &l_Lean_Meta_instReduceEvalLiteral___closed__0_once, _init_l_Lean_Meta_instReduceEvalLiteral___closed__0);
return v___x_1428_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalMVarId___private__1___closed__0(void){
_start:
{
lean_object* v___x_1429_; 
v___x_1429_ = lean_mk_string_unchecked("MVarId", 6, 6);
return v___x_1429_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1(void){
_start:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1430_ = lean_obj_once(&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1, &l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1_once, _init_l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1);
v___x_1431_ = lean_obj_once(&l_Lean_Meta_instReduceEvalMVarId___private__1___closed__0, &l_Lean_Meta_instReduceEvalMVarId___private__1___closed__0_once, _init_l_Lean_Meta_instReduceEvalMVarId___private__1___closed__0);
v___x_1432_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0);
v___x_1433_ = l_Lean_Name_mkStr3(v___x_1432_, v___x_1431_, v___x_1430_);
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___private__1(lean_object* v_e_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_){
_start:
{
lean_object* v___x_1440_; 
lean_inc(v_a_1438_);
lean_inc_ref(v_a_1437_);
lean_inc(v_a_1436_);
lean_inc_ref(v_a_1435_);
v___x_1440_ = lean_whnf(v_e_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; uint8_t v___x_1444_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref(v___x_1440_);
v___x_1442_ = lean_obj_once(&l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1, &l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1_once, _init_l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1);
v___x_1443_ = lean_unsigned_to_nat(1u);
v___x_1444_ = l_Lean_Expr_isAppOfArity(v_a_1441_, v___x_1442_, v___x_1443_);
if (v___x_1444_ == 0)
{
lean_object* v___x_1445_; 
v___x_1445_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1441_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_);
return v___x_1445_;
}
else
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1446_ = lean_obj_once(&l_Lean_Meta_instReduceEvalName___closed__0, &l_Lean_Meta_instReduceEvalName___closed__0_once, _init_l_Lean_Meta_instReduceEvalName___closed__0);
v___x_1447_ = l_Lean_Expr_getAppNumArgs(v_a_1441_);
v___x_1448_ = lean_nat_sub(v___x_1447_, v___x_1443_);
lean_dec(v___x_1447_);
v___x_1449_ = l_Lean_Expr_getRevArg_x21(v_a_1441_, v___x_1448_);
lean_dec(v_a_1441_);
v___x_1450_ = l_Lean_Meta_reduceEval___redArg(v___x_1446_, v___x_1449_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1458_; 
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1453_ = v___x_1450_;
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1450_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1456_; 
if (v_isShared_1454_ == 0)
{
v___x_1456_ = v___x_1453_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_a_1451_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
else
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1466_; 
v_a_1459_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1461_ = v___x_1450_;
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1450_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1464_; 
if (v_isShared_1462_ == 0)
{
v___x_1464_ = v___x_1461_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_a_1459_);
v___x_1464_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
return v___x_1464_;
}
}
}
}
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1474_; 
v_a_1467_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1469_ = v___x_1440_;
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v___x_1440_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1472_; 
if (v_isShared_1470_ == 0)
{
v___x_1472_ = v___x_1469_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_a_1467_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___private__1___boxed(lean_object* v_e_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lean_Meta_instReduceEvalMVarId___private__1(v_e_1475_, v_a_1476_, v_a_1477_, v_a_1478_, v_a_1479_);
lean_dec(v_a_1479_);
lean_dec_ref(v_a_1478_);
lean_dec(v_a_1477_);
lean_dec_ref(v_a_1476_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___lam__0(lean_object* v_e_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_){
_start:
{
lean_object* v___x_1488_; 
lean_inc(v___y_1486_);
lean_inc_ref(v___y_1485_);
lean_inc(v___y_1484_);
lean_inc_ref(v___y_1483_);
v___x_1488_ = lean_whnf(v_e_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_a_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; uint8_t v___x_1492_; 
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
lean_inc(v_a_1489_);
lean_dec_ref(v___x_1488_);
v___x_1490_ = lean_obj_once(&l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1, &l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1_once, _init_l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1);
v___x_1491_ = lean_unsigned_to_nat(1u);
v___x_1492_ = l_Lean_Expr_isAppOfArity(v_a_1489_, v___x_1490_, v___x_1491_);
if (v___x_1492_ == 0)
{
lean_object* v___x_1493_; 
v___x_1493_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1489_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_);
return v___x_1493_;
}
else
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___x_1494_ = lean_obj_once(&l_Lean_Meta_instReduceEvalName___closed__0, &l_Lean_Meta_instReduceEvalName___closed__0_once, _init_l_Lean_Meta_instReduceEvalName___closed__0);
v___x_1495_ = l_Lean_Expr_getAppNumArgs(v_a_1489_);
v___x_1496_ = lean_nat_sub(v___x_1495_, v___x_1491_);
lean_dec(v___x_1495_);
v___x_1497_ = l_Lean_Expr_getRevArg_x21(v_a_1489_, v___x_1496_);
lean_dec(v_a_1489_);
v___x_1498_ = l_Lean_Meta_reduceEval___redArg(v___x_1494_, v___x_1497_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_);
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v_a_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1498_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1498_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1499_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1514_; 
v_a_1507_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1509_ = v___x_1498_;
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1498_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1507_);
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
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
v_a_1515_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1488_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1488_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1518_ == 0)
{
v___x_1520_ = v___x_1517_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1515_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___lam__0___boxed(lean_object* v_e_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
lean_object* v_res_1529_; 
v_res_1529_ = l_Lean_Meta_instReduceEvalMVarId___lam__0(v_e_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
return v_res_1529_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalMVarId___closed__0(void){
_start:
{
lean_object* v___f_1530_; 
v___f_1530_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalMVarId___lam__0___boxed), 6, 0);
return v___f_1530_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalMVarId(void){
_start:
{
lean_object* v___f_1531_; 
v___f_1531_ = lean_obj_once(&l_Lean_Meta_instReduceEvalMVarId___closed__0, &l_Lean_Meta_instReduceEvalMVarId___closed__0_once, _init_l_Lean_Meta_instReduceEvalMVarId___closed__0);
return v___f_1531_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__0(void){
_start:
{
lean_object* v___x_1532_; 
v___x_1532_ = lean_mk_string_unchecked("LevelMVarId", 11, 11);
return v___x_1532_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1(void){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1533_ = lean_obj_once(&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1, &l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1_once, _init_l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1);
v___x_1534_ = lean_obj_once(&l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__0, &l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__0_once, _init_l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__0);
v___x_1535_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0);
v___x_1536_ = l_Lean_Name_mkStr3(v___x_1535_, v___x_1534_, v___x_1533_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___private__1(lean_object* v_e_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_){
_start:
{
lean_object* v___x_1543_; 
lean_inc(v_a_1541_);
lean_inc_ref(v_a_1540_);
lean_inc(v_a_1539_);
lean_inc_ref(v_a_1538_);
v___x_1543_ = lean_whnf(v_e_1537_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v_a_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; uint8_t v___x_1547_; 
v_a_1544_ = lean_ctor_get(v___x_1543_, 0);
lean_inc(v_a_1544_);
lean_dec_ref(v___x_1543_);
v___x_1545_ = lean_obj_once(&l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1, &l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1_once, _init_l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1);
v___x_1546_ = lean_unsigned_to_nat(1u);
v___x_1547_ = l_Lean_Expr_isAppOfArity(v_a_1544_, v___x_1545_, v___x_1546_);
if (v___x_1547_ == 0)
{
lean_object* v___x_1548_; 
v___x_1548_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1544_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_);
return v___x_1548_;
}
else
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1549_ = lean_obj_once(&l_Lean_Meta_instReduceEvalName___closed__0, &l_Lean_Meta_instReduceEvalName___closed__0_once, _init_l_Lean_Meta_instReduceEvalName___closed__0);
v___x_1550_ = l_Lean_Expr_getAppNumArgs(v_a_1544_);
v___x_1551_ = lean_nat_sub(v___x_1550_, v___x_1546_);
lean_dec(v___x_1550_);
v___x_1552_ = l_Lean_Expr_getRevArg_x21(v_a_1544_, v___x_1551_);
lean_dec(v_a_1544_);
v___x_1553_ = l_Lean_Meta_reduceEval___redArg(v___x_1549_, v___x_1552_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
v_a_1554_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v___x_1553_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1553_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
else
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1569_; 
v_a_1562_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1564_ = v___x_1553_;
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v___x_1553_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1567_; 
if (v_isShared_1565_ == 0)
{
v___x_1567_ = v___x_1564_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1562_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
}
else
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
v_a_1570_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1543_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1543_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1570_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___private__1___boxed(lean_object* v_e_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_Lean_Meta_instReduceEvalLevelMVarId___private__1(v_e_1578_, v_a_1579_, v_a_1580_, v_a_1581_, v_a_1582_);
lean_dec(v_a_1582_);
lean_dec_ref(v_a_1581_);
lean_dec(v_a_1580_);
lean_dec_ref(v_a_1579_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___lam__0(lean_object* v_e_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
lean_object* v___x_1591_; 
lean_inc(v___y_1589_);
lean_inc_ref(v___y_1588_);
lean_inc(v___y_1587_);
lean_inc_ref(v___y_1586_);
v___x_1591_ = lean_whnf(v_e_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v_a_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; uint8_t v___x_1595_; 
v_a_1592_ = lean_ctor_get(v___x_1591_, 0);
lean_inc(v_a_1592_);
lean_dec_ref(v___x_1591_);
v___x_1593_ = lean_obj_once(&l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1, &l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1_once, _init_l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1);
v___x_1594_ = lean_unsigned_to_nat(1u);
v___x_1595_ = l_Lean_Expr_isAppOfArity(v_a_1592_, v___x_1593_, v___x_1594_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1596_; 
v___x_1596_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1592_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
return v___x_1596_;
}
else
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1597_ = lean_obj_once(&l_Lean_Meta_instReduceEvalName___closed__0, &l_Lean_Meta_instReduceEvalName___closed__0_once, _init_l_Lean_Meta_instReduceEvalName___closed__0);
v___x_1598_ = l_Lean_Expr_getAppNumArgs(v_a_1592_);
v___x_1599_ = lean_nat_sub(v___x_1598_, v___x_1594_);
lean_dec(v___x_1598_);
v___x_1600_ = l_Lean_Expr_getRevArg_x21(v_a_1592_, v___x_1599_);
lean_dec(v_a_1592_);
v___x_1601_ = l_Lean_Meta_reduceEval___redArg(v___x_1597_, v___x_1600_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1601_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1601_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_a_1602_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
else
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1617_; 
v_a_1610_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1612_ = v___x_1601_;
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1601_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1615_; 
if (v_isShared_1613_ == 0)
{
v___x_1615_ = v___x_1612_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_a_1610_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
v_a_1618_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1591_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1591_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___lam__0___boxed(lean_object* v_e_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_Lean_Meta_instReduceEvalLevelMVarId___lam__0(v_e_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
return v_res_1632_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalLevelMVarId___closed__0(void){
_start:
{
lean_object* v___f_1633_; 
v___f_1633_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalLevelMVarId___lam__0___boxed), 6, 0);
return v___f_1633_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalLevelMVarId(void){
_start:
{
lean_object* v___f_1634_; 
v___f_1634_ = lean_obj_once(&l_Lean_Meta_instReduceEvalLevelMVarId___closed__0, &l_Lean_Meta_instReduceEvalLevelMVarId___closed__0_once, _init_l_Lean_Meta_instReduceEvalLevelMVarId___closed__0);
return v___f_1634_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalFVarId___private__1___closed__0(void){
_start:
{
lean_object* v___x_1635_; 
v___x_1635_ = lean_mk_string_unchecked("FVarId", 6, 6);
return v___x_1635_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1(void){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1636_ = lean_obj_once(&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1, &l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1_once, _init_l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1);
v___x_1637_ = lean_obj_once(&l_Lean_Meta_instReduceEvalFVarId___private__1___closed__0, &l_Lean_Meta_instReduceEvalFVarId___private__1___closed__0_once, _init_l_Lean_Meta_instReduceEvalFVarId___private__1___closed__0);
v___x_1638_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0);
v___x_1639_ = l_Lean_Name_mkStr3(v___x_1638_, v___x_1637_, v___x_1636_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___private__1(lean_object* v_e_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_){
_start:
{
lean_object* v___x_1646_; 
lean_inc(v_a_1644_);
lean_inc_ref(v_a_1643_);
lean_inc(v_a_1642_);
lean_inc_ref(v_a_1641_);
v___x_1646_ = lean_whnf(v_e_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; uint8_t v___x_1650_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
lean_inc(v_a_1647_);
lean_dec_ref(v___x_1646_);
v___x_1648_ = lean_obj_once(&l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1, &l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1_once, _init_l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1);
v___x_1649_ = lean_unsigned_to_nat(1u);
v___x_1650_ = l_Lean_Expr_isAppOfArity(v_a_1647_, v___x_1648_, v___x_1649_);
if (v___x_1650_ == 0)
{
lean_object* v___x_1651_; 
v___x_1651_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1647_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_);
return v___x_1651_;
}
else
{
lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1652_ = lean_obj_once(&l_Lean_Meta_instReduceEvalName___closed__0, &l_Lean_Meta_instReduceEvalName___closed__0_once, _init_l_Lean_Meta_instReduceEvalName___closed__0);
v___x_1653_ = l_Lean_Expr_getAppNumArgs(v_a_1647_);
v___x_1654_ = lean_nat_sub(v___x_1653_, v___x_1649_);
lean_dec(v___x_1653_);
v___x_1655_ = l_Lean_Expr_getRevArg_x21(v_a_1647_, v___x_1654_);
lean_dec(v_a_1647_);
v___x_1656_ = l_Lean_Meta_reduceEval___redArg(v___x_1652_, v___x_1655_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1664_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1659_ = v___x_1656_;
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1656_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1660_ == 0)
{
v___x_1662_ = v___x_1659_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1657_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
else
{
lean_object* v_a_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1672_; 
v_a_1665_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1667_ = v___x_1656_;
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_a_1665_);
lean_dec(v___x_1656_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v___x_1670_; 
if (v_isShared_1668_ == 0)
{
v___x_1670_ = v___x_1667_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_a_1665_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
}
else
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
v_a_1673_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1646_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1646_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___private__1___boxed(lean_object* v_e_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l_Lean_Meta_instReduceEvalFVarId___private__1(v_e_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_);
lean_dec(v_a_1685_);
lean_dec_ref(v_a_1684_);
lean_dec(v_a_1683_);
lean_dec_ref(v_a_1682_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___lam__0(lean_object* v_e_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v___x_1694_; 
lean_inc(v___y_1692_);
lean_inc_ref(v___y_1691_);
lean_inc(v___y_1690_);
lean_inc_ref(v___y_1689_);
v___x_1694_ = lean_whnf(v_e_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; 
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
lean_inc(v_a_1695_);
lean_dec_ref(v___x_1694_);
v___x_1696_ = lean_obj_once(&l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1, &l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1_once, _init_l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1);
v___x_1697_ = lean_unsigned_to_nat(1u);
v___x_1698_ = l_Lean_Expr_isAppOfArity(v_a_1695_, v___x_1696_, v___x_1697_);
if (v___x_1698_ == 0)
{
lean_object* v___x_1699_; 
v___x_1699_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1695_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_);
return v___x_1699_;
}
else
{
lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1700_ = lean_obj_once(&l_Lean_Meta_instReduceEvalName___closed__0, &l_Lean_Meta_instReduceEvalName___closed__0_once, _init_l_Lean_Meta_instReduceEvalName___closed__0);
v___x_1701_ = l_Lean_Expr_getAppNumArgs(v_a_1695_);
v___x_1702_ = lean_nat_sub(v___x_1701_, v___x_1697_);
lean_dec(v___x_1701_);
v___x_1703_ = l_Lean_Expr_getRevArg_x21(v_a_1695_, v___x_1702_);
lean_dec(v_a_1695_);
v___x_1704_ = l_Lean_Meta_reduceEval___redArg(v___x_1700_, v___x_1703_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_);
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v_a_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1712_; 
v_a_1705_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1707_ = v___x_1704_;
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_a_1705_);
lean_dec(v___x_1704_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1710_; 
if (v_isShared_1708_ == 0)
{
v___x_1710_ = v___x_1707_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_a_1705_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
v_a_1713_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1704_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1704_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
v_a_1721_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1694_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1694_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1721_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___lam__0___boxed(lean_object* v_e_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = l_Lean_Meta_instReduceEvalFVarId___lam__0(v_e_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
return v_res_1735_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalFVarId___closed__0(void){
_start:
{
lean_object* v___f_1736_; 
v___f_1736_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalFVarId___lam__0___boxed), 6, 0);
return v___f_1736_;
}
}
static lean_object* _init_l_Lean_Meta_instReduceEvalFVarId(void){
_start:
{
lean_object* v___f_1737_; 
v___f_1737_ = lean_obj_once(&l_Lean_Meta_instReduceEvalFVarId___closed__0, &l_Lean_Meta_instReduceEvalFVarId___closed__0_once, _init_l_Lean_Meta_instReduceEvalFVarId___closed__0);
return v___f_1737_;
}
}
lean_object* runtime_initialize_Lean_Meta_Offset(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_ReduceEval(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Offset(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instReduceEvalNat = _init_l_Lean_Meta_instReduceEvalNat();
lean_mark_persistent(l_Lean_Meta_instReduceEvalNat);
l_Lean_Meta_instReduceEvalString = _init_l_Lean_Meta_instReduceEvalString();
lean_mark_persistent(l_Lean_Meta_instReduceEvalString);
l_Lean_Meta_instReduceEvalName = _init_l_Lean_Meta_instReduceEvalName();
lean_mark_persistent(l_Lean_Meta_instReduceEvalName);
l_Lean_Meta_instReduceEvalBool = _init_l_Lean_Meta_instReduceEvalBool();
lean_mark_persistent(l_Lean_Meta_instReduceEvalBool);
l_Lean_Meta_instReduceEvalBinderInfo = _init_l_Lean_Meta_instReduceEvalBinderInfo();
lean_mark_persistent(l_Lean_Meta_instReduceEvalBinderInfo);
l_Lean_Meta_instReduceEvalLiteral = _init_l_Lean_Meta_instReduceEvalLiteral();
lean_mark_persistent(l_Lean_Meta_instReduceEvalLiteral);
l_Lean_Meta_instReduceEvalMVarId = _init_l_Lean_Meta_instReduceEvalMVarId();
lean_mark_persistent(l_Lean_Meta_instReduceEvalMVarId);
l_Lean_Meta_instReduceEvalLevelMVarId = _init_l_Lean_Meta_instReduceEvalLevelMVarId();
lean_mark_persistent(l_Lean_Meta_instReduceEvalLevelMVarId);
l_Lean_Meta_instReduceEvalFVarId = _init_l_Lean_Meta_instReduceEvalFVarId();
lean_mark_persistent(l_Lean_Meta_instReduceEvalFVarId);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_ReduceEval(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Offset(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_ReduceEval(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Offset(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ReduceEval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_ReduceEval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_ReduceEval(builtin);
}
#ifdef __cplusplus
}
#endif
