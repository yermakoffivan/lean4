// Lean compiler output
// Module: Lean.Meta.Sym.Arith.Functions
// Imports: public import Lean.Meta.Sym.Arith.MonadRing public import Lean.Meta.Sym.Arith.MonadSemiring
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
extern lean_object* l_Lean_Nat_mkType;
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__6;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__6;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__6;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__7;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__5;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__6;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__7;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v_mctx_11_; lean_object* v_lctx_12_; lean_object* v_options_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_st_ref_get(v___y_5_);
lean_dec(v___x_9_);
v___x_10_ = lean_st_ref_get(v___y_3_);
v_mctx_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc_ref(v_mctx_11_);
lean_dec(v___x_10_);
v_lctx_12_ = lean_ctor_get(v___y_2_, 2);
v_options_13_ = lean_ctor_get(v___y_4_, 2);
lean_inc_ref(v_options_13_);
lean_inc_ref(v_lctx_12_);
v___x_14_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_14_, 0, v_env_8_);
lean_ctor_set(v___x_14_, 1, v_mctx_11_);
lean_ctor_set(v___x_14_, 2, v_lctx_12_);
lean_ctor_set(v___x_14_, 3, v_options_13_);
v___x_15_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v_msgData_1_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0_spec__0___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0_spec__0(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg(lean_object* v_msg_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_ref_30_; lean_object* v___x_31_; lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_ref_30_ = lean_ctor_get(v___y_27_, 5);
v___x_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0_spec__0(v_msg_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
v_a_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_40_ == 0)
{
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
lean_inc(v_ref_30_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v_ref_30_);
lean_ctor_set(v___x_36_, 1, v_a_32_);
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 1);
lean_ctor_set(v___x_34_, 0, v___x_36_);
v___x_38_ = v___x_34_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___x_36_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg___boxed(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg(v_msg_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
static uint64_t _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__0(void){
_start:
{
uint8_t v___x_48_; uint64_t v___x_49_; 
v___x_48_ = 3;
v___x_49_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_48_);
return v___x_49_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__1(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_mk_string_unchecked("error while initializing arithmetic operators:\ninstance for `", 61, 61);
return v___x_50_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__2(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__1);
v___x_52_ = l_Lean_stringToMessageData(v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__3(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_mk_string_unchecked("` ", 2, 2);
return v___x_53_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__4(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__3, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__3_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__3);
v___x_55_ = l_Lean_stringToMessageData(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__5(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_mk_string_unchecked("\nis not definitionally equal to the expected one ", 49, 49);
return v___x_56_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__6(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__5, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__5_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__5);
v___x_58_ = l_Lean_stringToMessageData(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__7(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_mk_string_unchecked("\nwhen only reducible definitions and instances are reduced", 58, 58);
return v___x_59_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__8(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__7, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__7_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__7);
v___x_61_ = l_Lean_stringToMessageData(v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(lean_object* v_declName_62_, lean_object* v_inst_63_, lean_object* v_inst_x27_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v___x_70_; uint8_t v_foApprox_71_; uint8_t v_ctxApprox_72_; uint8_t v_quasiPatternApprox_73_; uint8_t v_constApprox_74_; uint8_t v_isDefEqStuckEx_75_; uint8_t v_unificationHints_76_; uint8_t v_proofIrrelevance_77_; uint8_t v_assignSyntheticOpaque_78_; uint8_t v_offsetCnstrs_79_; uint8_t v_etaStruct_80_; uint8_t v_univApprox_81_; uint8_t v_iota_82_; uint8_t v_beta_83_; uint8_t v_proj_84_; uint8_t v_zeta_85_; uint8_t v_zetaDelta_86_; uint8_t v_zetaUnused_87_; uint8_t v_zetaHave_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_147_; 
v___x_70_ = l_Lean_Meta_Context_config(v_a_65_);
v_foApprox_71_ = lean_ctor_get_uint8(v___x_70_, 0);
v_ctxApprox_72_ = lean_ctor_get_uint8(v___x_70_, 1);
v_quasiPatternApprox_73_ = lean_ctor_get_uint8(v___x_70_, 2);
v_constApprox_74_ = lean_ctor_get_uint8(v___x_70_, 3);
v_isDefEqStuckEx_75_ = lean_ctor_get_uint8(v___x_70_, 4);
v_unificationHints_76_ = lean_ctor_get_uint8(v___x_70_, 5);
v_proofIrrelevance_77_ = lean_ctor_get_uint8(v___x_70_, 6);
v_assignSyntheticOpaque_78_ = lean_ctor_get_uint8(v___x_70_, 7);
v_offsetCnstrs_79_ = lean_ctor_get_uint8(v___x_70_, 8);
v_etaStruct_80_ = lean_ctor_get_uint8(v___x_70_, 10);
v_univApprox_81_ = lean_ctor_get_uint8(v___x_70_, 11);
v_iota_82_ = lean_ctor_get_uint8(v___x_70_, 12);
v_beta_83_ = lean_ctor_get_uint8(v___x_70_, 13);
v_proj_84_ = lean_ctor_get_uint8(v___x_70_, 14);
v_zeta_85_ = lean_ctor_get_uint8(v___x_70_, 15);
v_zetaDelta_86_ = lean_ctor_get_uint8(v___x_70_, 16);
v_zetaUnused_87_ = lean_ctor_get_uint8(v___x_70_, 17);
v_zetaHave_88_ = lean_ctor_get_uint8(v___x_70_, 18);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_147_ == 0)
{
v___x_90_ = v___x_70_;
v_isShared_91_ = v_isSharedCheck_147_;
goto v_resetjp_89_;
}
else
{
lean_dec(v___x_70_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_147_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
uint8_t v_trackZetaDelta_92_; lean_object* v_zetaDeltaSet_93_; lean_object* v_lctx_94_; lean_object* v_localInstances_95_; lean_object* v_defEqCtx_x3f_96_; lean_object* v_synthPendingDepth_97_; lean_object* v_canUnfold_x3f_98_; uint8_t v_univApprox_99_; uint8_t v_inTypeClassResolution_100_; uint8_t v_cacheInferType_101_; uint8_t v___x_102_; lean_object* v_config_104_; 
v_trackZetaDelta_92_ = lean_ctor_get_uint8(v_a_65_, sizeof(void*)*7);
v_zetaDeltaSet_93_ = lean_ctor_get(v_a_65_, 1);
v_lctx_94_ = lean_ctor_get(v_a_65_, 2);
v_localInstances_95_ = lean_ctor_get(v_a_65_, 3);
v_defEqCtx_x3f_96_ = lean_ctor_get(v_a_65_, 4);
v_synthPendingDepth_97_ = lean_ctor_get(v_a_65_, 5);
v_canUnfold_x3f_98_ = lean_ctor_get(v_a_65_, 6);
v_univApprox_99_ = lean_ctor_get_uint8(v_a_65_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_100_ = lean_ctor_get_uint8(v_a_65_, sizeof(void*)*7 + 2);
v_cacheInferType_101_ = lean_ctor_get_uint8(v_a_65_, sizeof(void*)*7 + 3);
v___x_102_ = 3;
if (v_isShared_91_ == 0)
{
v_config_104_ = v___x_90_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 0, v_foApprox_71_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 1, v_ctxApprox_72_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 2, v_quasiPatternApprox_73_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 3, v_constApprox_74_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 4, v_isDefEqStuckEx_75_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 5, v_unificationHints_76_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 6, v_proofIrrelevance_77_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 7, v_assignSyntheticOpaque_78_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 8, v_offsetCnstrs_79_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 10, v_etaStruct_80_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 11, v_univApprox_81_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 12, v_iota_82_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 13, v_beta_83_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 14, v_proj_84_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 15, v_zeta_85_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 16, v_zetaDelta_86_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 17, v_zetaUnused_87_);
lean_ctor_set_uint8(v_reuseFailAlloc_146_, 18, v_zetaHave_88_);
v_config_104_ = v_reuseFailAlloc_146_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
uint64_t v___x_105_; uint64_t v___x_106_; uint64_t v___x_107_; uint64_t v___x_108_; uint64_t v___x_109_; uint64_t v_key_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
lean_ctor_set_uint8(v_config_104_, 9, v___x_102_);
v___x_105_ = l_Lean_Meta_Context_configKey(v_a_65_);
v___x_106_ = 2ULL;
v___x_107_ = lean_uint64_shift_right(v___x_105_, v___x_106_);
v___x_108_ = lean_uint64_shift_left(v___x_107_, v___x_106_);
v___x_109_ = lean_uint64_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__0);
v_key_110_ = lean_uint64_lor(v___x_108_, v___x_109_);
v___x_111_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_111_, 0, v_config_104_);
lean_ctor_set_uint64(v___x_111_, sizeof(void*)*1, v_key_110_);
lean_inc(v_canUnfold_x3f_98_);
lean_inc(v_synthPendingDepth_97_);
lean_inc(v_defEqCtx_x3f_96_);
lean_inc_ref(v_localInstances_95_);
lean_inc_ref(v_lctx_94_);
lean_inc(v_zetaDeltaSet_93_);
v___x_112_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set(v___x_112_, 1, v_zetaDeltaSet_93_);
lean_ctor_set(v___x_112_, 2, v_lctx_94_);
lean_ctor_set(v___x_112_, 3, v_localInstances_95_);
lean_ctor_set(v___x_112_, 4, v_defEqCtx_x3f_96_);
lean_ctor_set(v___x_112_, 5, v_synthPendingDepth_97_);
lean_ctor_set(v___x_112_, 6, v_canUnfold_x3f_98_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*7, v_trackZetaDelta_92_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*7 + 1, v_univApprox_99_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*7 + 2, v_inTypeClassResolution_100_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*7 + 3, v_cacheInferType_101_);
lean_inc_ref(v_inst_x27_64_);
lean_inc_ref(v_inst_63_);
v___x_113_ = l_Lean_Meta_isExprDefEq(v_inst_63_, v_inst_x27_64_, v___x_112_, v_a_66_, v_a_67_, v_a_68_);
lean_dec_ref(v___x_112_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_137_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_137_ == 0)
{
v___x_116_ = v___x_113_;
v_isShared_117_ = v_isSharedCheck_137_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_113_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_137_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
uint8_t v___x_118_; 
v___x_118_ = lean_unbox(v_a_114_);
lean_dec(v_a_114_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
lean_del_object(v___x_116_);
v___x_119_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__2, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__2_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__2);
v___x_120_ = l_Lean_MessageData_ofName(v_declName_62_);
v___x_121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_119_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__4, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__4_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__4);
v___x_123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_121_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = l_Lean_indentExpr(v_inst_63_);
v___x_125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v___x_126_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__6, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__6_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__6);
v___x_127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_125_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = l_Lean_indentExpr(v_inst_x27_64_);
v___x_129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_127_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__8, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__8_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___closed__8);
v___x_131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_129_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
v___x_132_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg(v___x_131_, v_a_65_, v_a_66_, v_a_67_, v_a_68_);
return v___x_132_;
}
else
{
lean_object* v___x_133_; lean_object* v___x_135_; 
lean_dec_ref(v_inst_x27_64_);
lean_dec_ref(v_inst_63_);
lean_dec(v_declName_62_);
v___x_133_ = lean_box(0);
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 0, v___x_133_);
v___x_135_ = v___x_116_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v___x_133_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
else
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
lean_dec_ref(v_inst_x27_64_);
lean_dec_ref(v_inst_63_);
lean_dec(v_declName_62_);
v_a_138_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v___x_113_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_113_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_a_138_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed(lean_object* v_declName_148_, lean_object* v_inst_149_, lean_object* v_inst_x27_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(v_declName_148_, v_inst_149_, v_inst_x27_150_, v_a_151_, v_a_152_, v_a_153_, v_a_154_);
lean_dec(v_a_154_);
lean_dec_ref(v_a_153_);
lean_dec(v_a_152_);
lean_dec_ref(v_a_151_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0(lean_object* v_00_u03b1_157_, lean_object* v_msg_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___redArg(v_msg_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0___boxed(lean_object* v_00_u03b1_165_, lean_object* v_msg_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst_spec__0(v_00_u03b1_165_, v_msg_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg___lam__0(lean_object* v_inst_173_, lean_object* v_declName_174_, lean_object* v___x_175_, lean_object* v_type_176_, lean_object* v_inst_177_, lean_object* v_____r_178_){
_start:
{
lean_object* v_canonExpr_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v_canonExpr_179_ = lean_ctor_get(v_inst_173_, 0);
lean_inc(v_canonExpr_179_);
lean_dec_ref(v_inst_173_);
v___x_180_ = l_Lean_mkConst(v_declName_174_, v___x_175_);
v___x_181_ = l_Lean_mkAppB(v___x_180_, v_type_176_, v_inst_177_);
v___x_182_ = lean_apply_1(v_canonExpr_179_, v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg___lam__1(lean_object* v_inst_183_, lean_object* v_declName_184_, lean_object* v___x_185_, lean_object* v_type_186_, lean_object* v_expectedInst_187_, lean_object* v_inst_188_, lean_object* v_toBind_189_, lean_object* v_inst_190_){
_start:
{
lean_object* v___f_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
lean_inc_ref(v_inst_190_);
lean_inc(v_declName_184_);
v___f_191_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg___lam__0), 6, 5);
lean_closure_set(v___f_191_, 0, v_inst_183_);
lean_closure_set(v___f_191_, 1, v_declName_184_);
lean_closure_set(v___f_191_, 2, v___x_185_);
lean_closure_set(v___f_191_, 3, v_type_186_);
lean_closure_set(v___f_191_, 4, v_inst_190_);
v___x_192_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed), 8, 3);
lean_closure_set(v___x_192_, 0, v_declName_184_);
lean_closure_set(v___x_192_, 1, v_inst_190_);
lean_closure_set(v___x_192_, 2, v_expectedInst_187_);
v___x_193_ = lean_apply_2(v_inst_188_, lean_box(0), v___x_192_);
v___x_194_ = lean_apply_4(v_toBind_189_, lean_box(0), lean_box(0), v___x_193_, v___f_191_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg(lean_object* v_inst_195_, lean_object* v_inst_196_, lean_object* v_inst_197_, lean_object* v_inst_198_, lean_object* v_type_199_, lean_object* v_u_200_, lean_object* v_instDeclName_201_, lean_object* v_declName_202_, lean_object* v_expectedInst_203_){
_start:
{
lean_object* v_toBind_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___f_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v_toBind_204_ = lean_ctor_get(v_inst_197_, 1);
lean_inc_n(v_toBind_204_, 2);
v___x_205_ = lean_box(0);
v___x_206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_206_, 0, v_u_200_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
lean_inc_ref(v_type_199_);
lean_inc_ref(v___x_206_);
lean_inc_ref(v_inst_198_);
v___f_207_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg___lam__1), 8, 7);
lean_closure_set(v___f_207_, 0, v_inst_198_);
lean_closure_set(v___f_207_, 1, v_declName_202_);
lean_closure_set(v___f_207_, 2, v___x_206_);
lean_closure_set(v___f_207_, 3, v_type_199_);
lean_closure_set(v___f_207_, 4, v_expectedInst_203_);
lean_closure_set(v___f_207_, 5, v_inst_195_);
lean_closure_set(v___f_207_, 6, v_toBind_204_);
v___x_208_ = l_Lean_mkConst(v_instDeclName_201_, v___x_206_);
v___x_209_ = l_Lean_Expr_app___override(v___x_208_, v_type_199_);
v___x_210_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___redArg(v_inst_197_, v_inst_196_, v_inst_198_, v___x_209_);
v___x_211_ = lean_apply_4(v_toBind_204_, lean_box(0), lean_box(0), v___x_210_, v___f_207_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn(lean_object* v_m_212_, lean_object* v_inst_213_, lean_object* v_inst_214_, lean_object* v_inst_215_, lean_object* v_inst_216_, lean_object* v_type_217_, lean_object* v_u_218_, lean_object* v_instDeclName_219_, lean_object* v_declName_220_, lean_object* v_expectedInst_221_){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg(v_inst_213_, v_inst_214_, v_inst_215_, v_inst_216_, v_type_217_, v_u_218_, v_instDeclName_219_, v_declName_220_, v_expectedInst_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg___lam__0(lean_object* v_inst_223_, lean_object* v_declName_224_, lean_object* v___x_225_, lean_object* v_type_226_, lean_object* v_inst_227_, lean_object* v_____r_228_){
_start:
{
lean_object* v_canonExpr_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_canonExpr_229_ = lean_ctor_get(v_inst_223_, 0);
lean_inc(v_canonExpr_229_);
lean_dec_ref(v_inst_223_);
v___x_230_ = l_Lean_mkConst(v_declName_224_, v___x_225_);
lean_inc_ref_n(v_type_226_, 2);
v___x_231_ = l_Lean_mkApp4(v___x_230_, v_type_226_, v_type_226_, v_type_226_, v_inst_227_);
v___x_232_ = lean_apply_1(v_canonExpr_229_, v___x_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg___lam__1(lean_object* v_inst_233_, lean_object* v_declName_234_, lean_object* v___x_235_, lean_object* v_type_236_, lean_object* v_expectedInst_237_, lean_object* v_inst_238_, lean_object* v_toBind_239_, lean_object* v_inst_240_){
_start:
{
lean_object* v___f_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
lean_inc_ref(v_inst_240_);
lean_inc(v_declName_234_);
v___f_241_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg___lam__0), 6, 5);
lean_closure_set(v___f_241_, 0, v_inst_233_);
lean_closure_set(v___f_241_, 1, v_declName_234_);
lean_closure_set(v___f_241_, 2, v___x_235_);
lean_closure_set(v___f_241_, 3, v_type_236_);
lean_closure_set(v___f_241_, 4, v_inst_240_);
v___x_242_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed), 8, 3);
lean_closure_set(v___x_242_, 0, v_declName_234_);
lean_closure_set(v___x_242_, 1, v_inst_240_);
lean_closure_set(v___x_242_, 2, v_expectedInst_237_);
v___x_243_ = lean_apply_2(v_inst_238_, lean_box(0), v___x_242_);
v___x_244_ = lean_apply_4(v_toBind_239_, lean_box(0), lean_box(0), v___x_243_, v___f_241_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(lean_object* v_inst_245_, lean_object* v_inst_246_, lean_object* v_inst_247_, lean_object* v_inst_248_, lean_object* v_type_249_, lean_object* v_u_250_, lean_object* v_instDeclName_251_, lean_object* v_declName_252_, lean_object* v_expectedInst_253_){
_start:
{
lean_object* v_toBind_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___f_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v_toBind_254_ = lean_ctor_get(v_inst_247_, 1);
lean_inc_n(v_toBind_254_, 2);
v___x_255_ = lean_box(0);
lean_inc_n(v_u_250_, 2);
v___x_256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_256_, 0, v_u_250_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_257_, 0, v_u_250_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
v___x_258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_258_, 0, v_u_250_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
lean_inc_ref_n(v_type_249_, 3);
lean_inc_ref(v___x_258_);
lean_inc_ref(v_inst_248_);
v___f_259_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg___lam__1), 8, 7);
lean_closure_set(v___f_259_, 0, v_inst_248_);
lean_closure_set(v___f_259_, 1, v_declName_252_);
lean_closure_set(v___f_259_, 2, v___x_258_);
lean_closure_set(v___f_259_, 3, v_type_249_);
lean_closure_set(v___f_259_, 4, v_expectedInst_253_);
lean_closure_set(v___f_259_, 5, v_inst_245_);
lean_closure_set(v___f_259_, 6, v_toBind_254_);
v___x_260_ = l_Lean_mkConst(v_instDeclName_251_, v___x_258_);
v___x_261_ = l_Lean_mkApp3(v___x_260_, v_type_249_, v_type_249_, v_type_249_);
v___x_262_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___redArg(v_inst_247_, v_inst_246_, v_inst_248_, v___x_261_);
v___x_263_ = lean_apply_4(v_toBind_254_, lean_box(0), lean_box(0), v___x_262_, v___f_259_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn(lean_object* v_m_264_, lean_object* v_inst_265_, lean_object* v_inst_266_, lean_object* v_inst_267_, lean_object* v_inst_268_, lean_object* v_type_269_, lean_object* v_u_270_, lean_object* v_instDeclName_271_, lean_object* v_declName_272_, lean_object* v_expectedInst_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_265_, v_inst_266_, v_inst_267_, v_inst_268_, v_type_269_, v_u_270_, v_instDeclName_271_, v_declName_272_, v_expectedInst_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__0(lean_object* v_inst_275_, lean_object* v___x_276_, lean_object* v___x_277_, lean_object* v_type_278_, lean_object* v___x_279_, lean_object* v_inst_280_, lean_object* v_____r_281_){
_start:
{
lean_object* v_canonExpr_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v_canonExpr_282_ = lean_ctor_get(v_inst_275_, 0);
lean_inc(v_canonExpr_282_);
lean_dec_ref(v_inst_275_);
v___x_283_ = l_Lean_mkConst(v___x_276_, v___x_277_);
lean_inc_ref(v_type_278_);
v___x_284_ = l_Lean_mkApp4(v___x_283_, v_type_278_, v___x_279_, v_type_278_, v_inst_280_);
v___x_285_ = lean_apply_1(v_canonExpr_282_, v___x_284_);
return v___x_285_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_286_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_287_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2(void){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = lean_mk_string_unchecked("Semiring", 8, 8);
return v___x_288_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = lean_mk_string_unchecked("npow", 4, 4);
return v___x_289_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_290_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__3, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__3_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__3);
v___x_291_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2);
v___x_292_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1);
v___x_293_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0);
v___x_294_ = l_Lean_Name_mkStr4(v___x_293_, v___x_292_, v___x_291_, v___x_290_);
return v___x_294_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__5(void){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = lean_mk_string_unchecked("hPow", 4, 4);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1(lean_object* v___x_296_, lean_object* v_type_297_, lean_object* v_semiringInst_298_, lean_object* v___x_299_, lean_object* v_inst_300_, lean_object* v___x_301_, lean_object* v___x_302_, lean_object* v_inst_303_, lean_object* v_toBind_304_, lean_object* v_inst_305_){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v_inst_x27_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___f_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_306_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__4);
v___x_307_ = l_Lean_mkConst(v___x_306_, v___x_296_);
lean_inc_ref(v_type_297_);
v_inst_x27_308_ = l_Lean_mkAppB(v___x_307_, v_type_297_, v_semiringInst_298_);
v___x_309_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__5, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__5_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__5);
v___x_310_ = l_Lean_Name_mkStr2(v___x_299_, v___x_309_);
lean_inc_ref(v_inst_305_);
lean_inc(v___x_310_);
v___f_311_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__0), 7, 6);
lean_closure_set(v___f_311_, 0, v_inst_300_);
lean_closure_set(v___f_311_, 1, v___x_310_);
lean_closure_set(v___f_311_, 2, v___x_301_);
lean_closure_set(v___f_311_, 3, v_type_297_);
lean_closure_set(v___f_311_, 4, v___x_302_);
lean_closure_set(v___f_311_, 5, v_inst_305_);
v___x_312_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed), 8, 3);
lean_closure_set(v___x_312_, 0, v___x_310_);
lean_closure_set(v___x_312_, 1, v_inst_305_);
lean_closure_set(v___x_312_, 2, v_inst_x27_308_);
v___x_313_ = lean_apply_2(v_inst_303_, lean_box(0), v___x_312_);
v___x_314_ = lean_apply_4(v_toBind_304_, lean_box(0), lean_box(0), v___x_313_, v___f_311_);
return v___x_314_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0(void){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = lean_mk_string_unchecked("HPow", 4, 4);
return v___x_315_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__1(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0);
v___x_317_ = l_Lean_Name_mkStr1(v___x_316_);
return v___x_317_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = lean_unsigned_to_nat(0u);
v___x_319_ = l_Lean_Level_ofNat(v___x_318_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg(lean_object* v_inst_320_, lean_object* v_inst_321_, lean_object* v_inst_322_, lean_object* v_inst_323_, lean_object* v_u_324_, lean_object* v_type_325_, lean_object* v_semiringInst_326_){
_start:
{
lean_object* v_toBind_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___f_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_toBind_327_ = lean_ctor_get(v_inst_322_, 1);
lean_inc_n(v_toBind_327_, 2);
v___x_328_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__0);
v___x_329_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__1);
v___x_330_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___closed__2);
v___x_331_ = lean_box(0);
lean_inc(v_u_324_);
v___x_332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_332_, 0, v_u_324_);
lean_ctor_set(v___x_332_, 1, v___x_331_);
lean_inc_ref(v___x_332_);
v___x_333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_330_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
v___x_334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_334_, 0, v_u_324_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
lean_inc_ref(v___x_334_);
v___x_335_ = l_Lean_mkConst(v___x_329_, v___x_334_);
v___x_336_ = l_Lean_Nat_mkType;
lean_inc_ref(v_inst_323_);
lean_inc_ref_n(v_type_325_, 2);
v___f_337_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1), 10, 9);
lean_closure_set(v___f_337_, 0, v___x_332_);
lean_closure_set(v___f_337_, 1, v_type_325_);
lean_closure_set(v___f_337_, 2, v_semiringInst_326_);
lean_closure_set(v___f_337_, 3, v___x_328_);
lean_closure_set(v___f_337_, 4, v_inst_323_);
lean_closure_set(v___f_337_, 5, v___x_334_);
lean_closure_set(v___f_337_, 6, v___x_336_);
lean_closure_set(v___f_337_, 7, v_inst_320_);
lean_closure_set(v___f_337_, 8, v_toBind_327_);
v___x_338_ = l_Lean_mkApp3(v___x_335_, v_type_325_, v___x_336_, v_type_325_);
v___x_339_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___redArg(v_inst_322_, v_inst_321_, v_inst_323_, v___x_338_);
v___x_340_ = lean_apply_4(v_toBind_327_, lean_box(0), lean_box(0), v___x_339_, v___f_337_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn(lean_object* v_m_341_, lean_object* v_inst_342_, lean_object* v_inst_343_, lean_object* v_inst_344_, lean_object* v_inst_345_, lean_object* v_u_346_, lean_object* v_type_347_, lean_object* v_semiringInst_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg(v_inst_342_, v_inst_343_, v_inst_344_, v_inst_345_, v_u_346_, v_type_347_, v_semiringInst_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__0(lean_object* v___x_350_, lean_object* v___x_351_, lean_object* v___x_352_, lean_object* v_type_353_, lean_object* v_canonExpr_354_, lean_object* v_inst_355_){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_356_ = l_Lean_Name_mkStr2(v___x_350_, v___x_351_);
v___x_357_ = l_Lean_mkConst(v___x_356_, v___x_352_);
v___x_358_ = l_Lean_mkAppB(v___x_357_, v_type_353_, v_inst_355_);
v___x_359_ = lean_apply_1(v_canonExpr_354_, v___x_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__1(lean_object* v___f_360_, lean_object* v_inst_361_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = lean_apply_1(v___f_360_, v_inst_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__3(lean_object* v_toPure_363_, lean_object* v_val_364_, lean_object* v_toBind_365_, lean_object* v___f_366_, lean_object* v_____r_367_){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = lean_apply_2(v_toPure_363_, lean_box(0), v_val_364_);
v___x_369_ = lean_apply_4(v_toBind_365_, lean_box(0), lean_box(0), v___x_368_, v___f_366_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__2(lean_object* v_toPure_370_, lean_object* v_inst_x27_371_, lean_object* v_toBind_372_, lean_object* v___f_373_, lean_object* v___f_374_, lean_object* v___x_375_, lean_object* v___x_376_, lean_object* v_inst_377_, lean_object* v_____do__lift_378_){
_start:
{
if (lean_obj_tag(v_____do__lift_378_) == 0)
{
lean_object* v___x_379_; lean_object* v___x_380_; 
lean_dec(v_inst_377_);
lean_dec_ref(v___x_376_);
lean_dec_ref(v___x_375_);
lean_dec(v___f_374_);
v___x_379_ = lean_apply_2(v_toPure_370_, lean_box(0), v_inst_x27_371_);
v___x_380_ = lean_apply_4(v_toBind_372_, lean_box(0), lean_box(0), v___x_379_, v___f_373_);
return v___x_380_;
}
else
{
lean_object* v_val_381_; lean_object* v___f_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
lean_dec(v___f_373_);
v_val_381_ = lean_ctor_get(v_____do__lift_378_, 0);
lean_inc_n(v_val_381_, 2);
lean_dec_ref(v_____do__lift_378_);
lean_inc(v_toBind_372_);
v___f_382_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__3), 5, 4);
lean_closure_set(v___f_382_, 0, v_toPure_370_);
lean_closure_set(v___f_382_, 1, v_val_381_);
lean_closure_set(v___f_382_, 2, v_toBind_372_);
lean_closure_set(v___f_382_, 3, v___f_374_);
v___x_383_ = l_Lean_Name_mkStr2(v___x_375_, v___x_376_);
v___x_384_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed), 8, 3);
lean_closure_set(v___x_384_, 0, v___x_383_);
lean_closure_set(v___x_384_, 1, v_val_381_);
lean_closure_set(v___x_384_, 2, v_inst_x27_371_);
v___x_385_ = lean_apply_2(v_inst_377_, lean_box(0), v___x_384_);
v___x_386_ = lean_apply_4(v_toBind_372_, lean_box(0), lean_box(0), v___x_385_, v___f_382_);
return v___x_386_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0(void){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = lean_mk_string_unchecked("natCast", 7, 7);
return v___x_387_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_388_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0);
v___x_389_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2);
v___x_390_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1);
v___x_391_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0);
v___x_392_ = l_Lean_Name_mkStr4(v___x_391_, v___x_390_, v___x_389_, v___x_388_);
return v___x_392_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2(void){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = lean_mk_string_unchecked("NatCast", 7, 7);
return v___x_393_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__3(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2);
v___x_395_ = l_Lean_Name_mkStr1(v___x_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg(lean_object* v_inst_396_, lean_object* v_inst_397_, lean_object* v_inst_398_, lean_object* v_u_399_, lean_object* v_type_400_, lean_object* v_semiringInst_401_){
_start:
{
lean_object* v_toApplicative_402_; lean_object* v_toBind_403_; lean_object* v_canonExpr_404_; lean_object* v_synthInstance_x3f_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_427_; 
v_toApplicative_402_ = lean_ctor_get(v_inst_397_, 0);
lean_inc_ref(v_toApplicative_402_);
v_toBind_403_ = lean_ctor_get(v_inst_397_, 1);
lean_inc(v_toBind_403_);
lean_dec_ref(v_inst_397_);
v_canonExpr_404_ = lean_ctor_get(v_inst_398_, 0);
v_synthInstance_x3f_405_ = lean_ctor_get(v_inst_398_, 1);
v_isSharedCheck_427_ = !lean_is_exclusive(v_inst_398_);
if (v_isSharedCheck_427_ == 0)
{
v___x_407_ = v_inst_398_;
v_isShared_408_ = v_isSharedCheck_427_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_synthInstance_x3f_405_);
lean_inc(v_canonExpr_404_);
lean_dec(v_inst_398_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_427_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v_toPure_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
v_toPure_409_ = lean_ctor_get(v_toApplicative_402_, 1);
lean_inc(v_toPure_409_);
lean_dec_ref(v_toApplicative_402_);
v___x_410_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__0);
v___x_411_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__1);
v___x_412_ = lean_box(0);
if (v_isShared_408_ == 0)
{
lean_ctor_set_tag(v___x_407_, 1);
lean_ctor_set(v___x_407_, 1, v___x_412_);
lean_ctor_set(v___x_407_, 0, v_u_399_);
v___x_414_ = v___x_407_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_u_399_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v___x_412_);
v___x_414_ = v_reuseFailAlloc_426_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
lean_object* v___x_415_; lean_object* v_inst_x27_416_; lean_object* v___x_417_; lean_object* v___f_418_; lean_object* v___f_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v_instType_422_; lean_object* v___x_423_; lean_object* v___f_424_; lean_object* v___x_425_; 
lean_inc_ref_n(v___x_414_, 2);
v___x_415_ = l_Lean_mkConst(v___x_411_, v___x_414_);
lean_inc_ref_n(v_type_400_, 2);
v_inst_x27_416_ = l_Lean_mkAppB(v___x_415_, v_type_400_, v_semiringInst_401_);
v___x_417_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__2);
v___f_418_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__0), 6, 5);
lean_closure_set(v___f_418_, 0, v___x_417_);
lean_closure_set(v___f_418_, 1, v___x_410_);
lean_closure_set(v___f_418_, 2, v___x_414_);
lean_closure_set(v___f_418_, 3, v_type_400_);
lean_closure_set(v___f_418_, 4, v_canonExpr_404_);
v___f_419_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__1), 2, 1);
lean_closure_set(v___f_419_, 0, v___f_418_);
v___x_420_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__3, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__3_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___closed__3);
v___x_421_ = l_Lean_mkConst(v___x_420_, v___x_414_);
v_instType_422_ = l_Lean_Expr_app___override(v___x_421_, v_type_400_);
v___x_423_ = lean_apply_1(v_synthInstance_x3f_405_, v_instType_422_);
lean_inc_ref(v___f_419_);
lean_inc(v_toBind_403_);
v___f_424_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__2), 9, 8);
lean_closure_set(v___f_424_, 0, v_toPure_409_);
lean_closure_set(v___f_424_, 1, v_inst_x27_416_);
lean_closure_set(v___f_424_, 2, v_toBind_403_);
lean_closure_set(v___f_424_, 3, v___f_419_);
lean_closure_set(v___f_424_, 4, v___f_419_);
lean_closure_set(v___f_424_, 5, v___x_417_);
lean_closure_set(v___f_424_, 6, v___x_410_);
lean_closure_set(v___f_424_, 7, v_inst_396_);
v___x_425_ = lean_apply_4(v_toBind_403_, lean_box(0), lean_box(0), v___x_423_, v___f_424_);
return v___x_425_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn(lean_object* v_m_428_, lean_object* v_inst_429_, lean_object* v_inst_430_, lean_object* v_inst_431_, lean_object* v_u_432_, lean_object* v_type_433_, lean_object* v_semiringInst_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg(v_inst_429_, v_inst_430_, v_inst_431_, v_u_432_, v_type_433_, v_semiringInst_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__0(lean_object* v_addFn_436_, lean_object* v_s_437_){
_start:
{
lean_object* v_id_438_; lean_object* v_type_439_; lean_object* v_u_440_; lean_object* v_ringInst_441_; lean_object* v_semiringInst_442_; lean_object* v_charInst_x3f_443_; lean_object* v_mulFn_x3f_444_; lean_object* v_subFn_x3f_445_; lean_object* v_negFn_x3f_446_; lean_object* v_powFn_x3f_447_; lean_object* v_intCastFn_x3f_448_; lean_object* v_natCastFn_x3f_449_; lean_object* v_one_x3f_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_458_; 
v_id_438_ = lean_ctor_get(v_s_437_, 0);
v_type_439_ = lean_ctor_get(v_s_437_, 1);
v_u_440_ = lean_ctor_get(v_s_437_, 2);
v_ringInst_441_ = lean_ctor_get(v_s_437_, 3);
v_semiringInst_442_ = lean_ctor_get(v_s_437_, 4);
v_charInst_x3f_443_ = lean_ctor_get(v_s_437_, 5);
v_mulFn_x3f_444_ = lean_ctor_get(v_s_437_, 7);
v_subFn_x3f_445_ = lean_ctor_get(v_s_437_, 8);
v_negFn_x3f_446_ = lean_ctor_get(v_s_437_, 9);
v_powFn_x3f_447_ = lean_ctor_get(v_s_437_, 10);
v_intCastFn_x3f_448_ = lean_ctor_get(v_s_437_, 11);
v_natCastFn_x3f_449_ = lean_ctor_get(v_s_437_, 12);
v_one_x3f_450_ = lean_ctor_get(v_s_437_, 13);
v_isSharedCheck_458_ = !lean_is_exclusive(v_s_437_);
if (v_isSharedCheck_458_ == 0)
{
lean_object* v_unused_459_; 
v_unused_459_ = lean_ctor_get(v_s_437_, 6);
lean_dec(v_unused_459_);
v___x_452_ = v_s_437_;
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_one_x3f_450_);
lean_inc(v_natCastFn_x3f_449_);
lean_inc(v_intCastFn_x3f_448_);
lean_inc(v_powFn_x3f_447_);
lean_inc(v_negFn_x3f_446_);
lean_inc(v_subFn_x3f_445_);
lean_inc(v_mulFn_x3f_444_);
lean_inc(v_charInst_x3f_443_);
lean_inc(v_semiringInst_442_);
lean_inc(v_ringInst_441_);
lean_inc(v_u_440_);
lean_inc(v_type_439_);
lean_inc(v_id_438_);
lean_dec(v_s_437_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_454_; lean_object* v___x_456_; 
v___x_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_454_, 0, v_addFn_436_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 6, v___x_454_);
v___x_456_ = v___x_452_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 14, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_id_438_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_type_439_);
lean_ctor_set(v_reuseFailAlloc_457_, 2, v_u_440_);
lean_ctor_set(v_reuseFailAlloc_457_, 3, v_ringInst_441_);
lean_ctor_set(v_reuseFailAlloc_457_, 4, v_semiringInst_442_);
lean_ctor_set(v_reuseFailAlloc_457_, 5, v_charInst_x3f_443_);
lean_ctor_set(v_reuseFailAlloc_457_, 6, v___x_454_);
lean_ctor_set(v_reuseFailAlloc_457_, 7, v_mulFn_x3f_444_);
lean_ctor_set(v_reuseFailAlloc_457_, 8, v_subFn_x3f_445_);
lean_ctor_set(v_reuseFailAlloc_457_, 9, v_negFn_x3f_446_);
lean_ctor_set(v_reuseFailAlloc_457_, 10, v_powFn_x3f_447_);
lean_ctor_set(v_reuseFailAlloc_457_, 11, v_intCastFn_x3f_448_);
lean_ctor_set(v_reuseFailAlloc_457_, 12, v_natCastFn_x3f_449_);
lean_ctor_set(v_reuseFailAlloc_457_, 13, v_one_x3f_450_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__1(lean_object* v_toPure_460_, lean_object* v_addFn_461_, lean_object* v_____r_462_){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = lean_apply_2(v_toPure_460_, lean_box(0), v_addFn_461_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__2(lean_object* v_toPure_464_, lean_object* v_modifyRing_465_, lean_object* v_toBind_466_, lean_object* v_addFn_467_){
_start:
{
lean_object* v___f_468_; lean_object* v___f_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
lean_inc_ref(v_addFn_467_);
v___f_468_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_468_, 0, v_addFn_467_);
v___f_469_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_469_, 0, v_toPure_464_);
lean_closure_set(v___f_469_, 1, v_addFn_467_);
v___x_470_ = lean_apply_1(v_modifyRing_465_, v___f_468_);
v___x_471_ = lean_apply_4(v_toBind_466_, lean_box(0), lean_box(0), v___x_470_, v___f_469_);
return v___x_471_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__0(void){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = lean_mk_string_unchecked("instHAdd", 8, 8);
return v___x_472_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__0, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__0_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__0);
v___x_474_ = l_Lean_Name_mkStr1(v___x_473_);
return v___x_474_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__2(void){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = lean_mk_string_unchecked("toAdd", 5, 5);
return v___x_475_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_476_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__2, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__2);
v___x_477_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2);
v___x_478_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1);
v___x_479_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0);
v___x_480_ = l_Lean_Name_mkStr4(v___x_479_, v___x_478_, v___x_477_, v___x_476_);
return v___x_480_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4(void){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = lean_mk_string_unchecked("HAdd", 4, 4);
return v___x_481_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4);
v___x_483_ = l_Lean_Name_mkStr1(v___x_482_);
return v___x_483_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__6(void){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = lean_mk_string_unchecked("hAdd", 4, 4);
return v___x_484_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_485_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__6, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__6_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__6);
v___x_486_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__4);
v___x_487_ = l_Lean_Name_mkStr2(v___x_486_, v___x_485_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3(lean_object* v_toPure_488_, lean_object* v_inst_489_, lean_object* v_inst_490_, lean_object* v_inst_491_, lean_object* v_inst_492_, lean_object* v_toBind_493_, lean_object* v___f_494_, lean_object* v_ring_495_){
_start:
{
lean_object* v_addFn_x3f_496_; 
v_addFn_x3f_496_ = lean_ctor_get(v_ring_495_, 6);
if (lean_obj_tag(v_addFn_x3f_496_) == 1)
{
lean_object* v_val_497_; lean_object* v___x_498_; 
lean_inc_ref(v_addFn_x3f_496_);
lean_dec_ref(v_ring_495_);
lean_dec(v___f_494_);
lean_dec(v_toBind_493_);
lean_dec_ref(v_inst_492_);
lean_dec_ref(v_inst_491_);
lean_dec_ref(v_inst_490_);
lean_dec(v_inst_489_);
v_val_497_ = lean_ctor_get(v_addFn_x3f_496_, 0);
lean_inc(v_val_497_);
lean_dec_ref(v_addFn_x3f_496_);
v___x_498_ = lean_apply_2(v_toPure_488_, lean_box(0), v_val_497_);
return v___x_498_;
}
else
{
lean_object* v_type_499_; lean_object* v_u_500_; lean_object* v_semiringInst_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v_expectedInst_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
lean_dec(v_toPure_488_);
v_type_499_ = lean_ctor_get(v_ring_495_, 1);
lean_inc_ref_n(v_type_499_, 3);
v_u_500_ = lean_ctor_get(v_ring_495_, 2);
lean_inc_n(v_u_500_, 2);
v_semiringInst_501_ = lean_ctor_get(v_ring_495_, 4);
lean_inc_ref(v_semiringInst_501_);
lean_dec_ref(v_ring_495_);
v___x_502_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1);
v___x_503_ = lean_box(0);
v___x_504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_504_, 0, v_u_500_);
lean_ctor_set(v___x_504_, 1, v___x_503_);
lean_inc_ref(v___x_504_);
v___x_505_ = l_Lean_mkConst(v___x_502_, v___x_504_);
v___x_506_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3);
v___x_507_ = l_Lean_mkConst(v___x_506_, v___x_504_);
v___x_508_ = l_Lean_mkAppB(v___x_507_, v_type_499_, v_semiringInst_501_);
v_expectedInst_509_ = l_Lean_mkAppB(v___x_505_, v_type_499_, v___x_508_);
v___x_510_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5);
v___x_511_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7);
v___x_512_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_489_, v_inst_490_, v_inst_491_, v_inst_492_, v_type_499_, v_u_500_, v___x_510_, v___x_511_, v_expectedInst_509_);
v___x_513_ = lean_apply_4(v_toBind_493_, lean_box(0), lean_box(0), v___x_512_, v___f_494_);
return v___x_513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___redArg(lean_object* v_inst_514_, lean_object* v_inst_515_, lean_object* v_inst_516_, lean_object* v_inst_517_, lean_object* v_inst_518_){
_start:
{
lean_object* v_toApplicative_519_; lean_object* v_toBind_520_; lean_object* v_getRing_521_; lean_object* v_modifyRing_522_; lean_object* v_toPure_523_; lean_object* v___f_524_; lean_object* v___f_525_; lean_object* v___x_526_; 
v_toApplicative_519_ = lean_ctor_get(v_inst_516_, 0);
v_toBind_520_ = lean_ctor_get(v_inst_516_, 1);
lean_inc_n(v_toBind_520_, 3);
v_getRing_521_ = lean_ctor_get(v_inst_518_, 0);
lean_inc(v_getRing_521_);
v_modifyRing_522_ = lean_ctor_get(v_inst_518_, 1);
lean_inc(v_modifyRing_522_);
lean_dec_ref(v_inst_518_);
v_toPure_523_ = lean_ctor_get(v_toApplicative_519_, 1);
lean_inc_n(v_toPure_523_, 2);
v___f_524_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_524_, 0, v_toPure_523_);
lean_closure_set(v___f_524_, 1, v_modifyRing_522_);
lean_closure_set(v___f_524_, 2, v_toBind_520_);
v___f_525_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_525_, 0, v_toPure_523_);
lean_closure_set(v___f_525_, 1, v_inst_514_);
lean_closure_set(v___f_525_, 2, v_inst_515_);
lean_closure_set(v___f_525_, 3, v_inst_516_);
lean_closure_set(v___f_525_, 4, v_inst_517_);
lean_closure_set(v___f_525_, 5, v_toBind_520_);
lean_closure_set(v___f_525_, 6, v___f_524_);
v___x_526_ = lean_apply_4(v_toBind_520_, lean_box(0), lean_box(0), v_getRing_521_, v___f_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn(lean_object* v_m_527_, lean_object* v_inst_528_, lean_object* v_inst_529_, lean_object* v_inst_530_, lean_object* v_inst_531_, lean_object* v_inst_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Lean_Meta_Sym_Arith_getAddFn___redArg(v_inst_528_, v_inst_529_, v_inst_530_, v_inst_531_, v_inst_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__0(lean_object* v_mulFn_534_, lean_object* v_s_535_){
_start:
{
lean_object* v_id_536_; lean_object* v_type_537_; lean_object* v_u_538_; lean_object* v_ringInst_539_; lean_object* v_semiringInst_540_; lean_object* v_charInst_x3f_541_; lean_object* v_addFn_x3f_542_; lean_object* v_subFn_x3f_543_; lean_object* v_negFn_x3f_544_; lean_object* v_powFn_x3f_545_; lean_object* v_intCastFn_x3f_546_; lean_object* v_natCastFn_x3f_547_; lean_object* v_one_x3f_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_556_; 
v_id_536_ = lean_ctor_get(v_s_535_, 0);
v_type_537_ = lean_ctor_get(v_s_535_, 1);
v_u_538_ = lean_ctor_get(v_s_535_, 2);
v_ringInst_539_ = lean_ctor_get(v_s_535_, 3);
v_semiringInst_540_ = lean_ctor_get(v_s_535_, 4);
v_charInst_x3f_541_ = lean_ctor_get(v_s_535_, 5);
v_addFn_x3f_542_ = lean_ctor_get(v_s_535_, 6);
v_subFn_x3f_543_ = lean_ctor_get(v_s_535_, 8);
v_negFn_x3f_544_ = lean_ctor_get(v_s_535_, 9);
v_powFn_x3f_545_ = lean_ctor_get(v_s_535_, 10);
v_intCastFn_x3f_546_ = lean_ctor_get(v_s_535_, 11);
v_natCastFn_x3f_547_ = lean_ctor_get(v_s_535_, 12);
v_one_x3f_548_ = lean_ctor_get(v_s_535_, 13);
v_isSharedCheck_556_ = !lean_is_exclusive(v_s_535_);
if (v_isSharedCheck_556_ == 0)
{
lean_object* v_unused_557_; 
v_unused_557_ = lean_ctor_get(v_s_535_, 7);
lean_dec(v_unused_557_);
v___x_550_ = v_s_535_;
v_isShared_551_ = v_isSharedCheck_556_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_one_x3f_548_);
lean_inc(v_natCastFn_x3f_547_);
lean_inc(v_intCastFn_x3f_546_);
lean_inc(v_powFn_x3f_545_);
lean_inc(v_negFn_x3f_544_);
lean_inc(v_subFn_x3f_543_);
lean_inc(v_addFn_x3f_542_);
lean_inc(v_charInst_x3f_541_);
lean_inc(v_semiringInst_540_);
lean_inc(v_ringInst_539_);
lean_inc(v_u_538_);
lean_inc(v_type_537_);
lean_inc(v_id_536_);
lean_dec(v_s_535_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_556_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_552_; lean_object* v___x_554_; 
v___x_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_552_, 0, v_mulFn_534_);
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 7, v___x_552_);
v___x_554_ = v___x_550_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 14, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_id_536_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_type_537_);
lean_ctor_set(v_reuseFailAlloc_555_, 2, v_u_538_);
lean_ctor_set(v_reuseFailAlloc_555_, 3, v_ringInst_539_);
lean_ctor_set(v_reuseFailAlloc_555_, 4, v_semiringInst_540_);
lean_ctor_set(v_reuseFailAlloc_555_, 5, v_charInst_x3f_541_);
lean_ctor_set(v_reuseFailAlloc_555_, 6, v_addFn_x3f_542_);
lean_ctor_set(v_reuseFailAlloc_555_, 7, v___x_552_);
lean_ctor_set(v_reuseFailAlloc_555_, 8, v_subFn_x3f_543_);
lean_ctor_set(v_reuseFailAlloc_555_, 9, v_negFn_x3f_544_);
lean_ctor_set(v_reuseFailAlloc_555_, 10, v_powFn_x3f_545_);
lean_ctor_set(v_reuseFailAlloc_555_, 11, v_intCastFn_x3f_546_);
lean_ctor_set(v_reuseFailAlloc_555_, 12, v_natCastFn_x3f_547_);
lean_ctor_set(v_reuseFailAlloc_555_, 13, v_one_x3f_548_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__1(lean_object* v_toPure_558_, lean_object* v_mulFn_559_, lean_object* v_____r_560_){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = lean_apply_2(v_toPure_558_, lean_box(0), v_mulFn_559_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__2(lean_object* v_toPure_562_, lean_object* v_modifyRing_563_, lean_object* v_toBind_564_, lean_object* v_mulFn_565_){
_start:
{
lean_object* v___f_566_; lean_object* v___f_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
lean_inc_ref(v_mulFn_565_);
v___f_566_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_566_, 0, v_mulFn_565_);
v___f_567_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_567_, 0, v_toPure_562_);
lean_closure_set(v___f_567_, 1, v_mulFn_565_);
v___x_568_ = lean_apply_1(v_modifyRing_563_, v___f_566_);
v___x_569_ = lean_apply_4(v_toBind_564_, lean_box(0), lean_box(0), v___x_568_, v___f_567_);
return v___x_569_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__0(void){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = lean_mk_string_unchecked("instHMul", 8, 8);
return v___x_570_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__0, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__0_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__0);
v___x_572_ = l_Lean_Name_mkStr1(v___x_571_);
return v___x_572_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__2(void){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = lean_mk_string_unchecked("toMul", 5, 5);
return v___x_573_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_574_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__2, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__2);
v___x_575_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__2);
v___x_576_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1);
v___x_577_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0);
v___x_578_ = l_Lean_Name_mkStr4(v___x_577_, v___x_576_, v___x_575_, v___x_574_);
return v___x_578_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4(void){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = lean_mk_string_unchecked("HMul", 4, 4);
return v___x_579_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5(void){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_580_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4);
v___x_581_ = l_Lean_Name_mkStr1(v___x_580_);
return v___x_581_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__6(void){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = lean_mk_string_unchecked("hMul", 4, 4);
return v___x_582_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7(void){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_583_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__6, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__6_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__6);
v___x_584_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__4);
v___x_585_ = l_Lean_Name_mkStr2(v___x_584_, v___x_583_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3(lean_object* v_toPure_586_, lean_object* v_inst_587_, lean_object* v_inst_588_, lean_object* v_inst_589_, lean_object* v_inst_590_, lean_object* v_toBind_591_, lean_object* v___f_592_, lean_object* v_ring_593_){
_start:
{
lean_object* v_mulFn_x3f_594_; 
v_mulFn_x3f_594_ = lean_ctor_get(v_ring_593_, 7);
if (lean_obj_tag(v_mulFn_x3f_594_) == 1)
{
lean_object* v_val_595_; lean_object* v___x_596_; 
lean_inc_ref(v_mulFn_x3f_594_);
lean_dec_ref(v_ring_593_);
lean_dec(v___f_592_);
lean_dec(v_toBind_591_);
lean_dec_ref(v_inst_590_);
lean_dec_ref(v_inst_589_);
lean_dec_ref(v_inst_588_);
lean_dec(v_inst_587_);
v_val_595_ = lean_ctor_get(v_mulFn_x3f_594_, 0);
lean_inc(v_val_595_);
lean_dec_ref(v_mulFn_x3f_594_);
v___x_596_ = lean_apply_2(v_toPure_586_, lean_box(0), v_val_595_);
return v___x_596_;
}
else
{
lean_object* v_type_597_; lean_object* v_u_598_; lean_object* v_semiringInst_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v_expectedInst_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
lean_dec(v_toPure_586_);
v_type_597_ = lean_ctor_get(v_ring_593_, 1);
lean_inc_ref_n(v_type_597_, 3);
v_u_598_ = lean_ctor_get(v_ring_593_, 2);
lean_inc_n(v_u_598_, 2);
v_semiringInst_599_ = lean_ctor_get(v_ring_593_, 4);
lean_inc_ref(v_semiringInst_599_);
lean_dec_ref(v_ring_593_);
v___x_600_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1);
v___x_601_ = lean_box(0);
v___x_602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_602_, 0, v_u_598_);
lean_ctor_set(v___x_602_, 1, v___x_601_);
lean_inc_ref(v___x_602_);
v___x_603_ = l_Lean_mkConst(v___x_600_, v___x_602_);
v___x_604_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3);
v___x_605_ = l_Lean_mkConst(v___x_604_, v___x_602_);
v___x_606_ = l_Lean_mkAppB(v___x_605_, v_type_597_, v_semiringInst_599_);
v_expectedInst_607_ = l_Lean_mkAppB(v___x_603_, v_type_597_, v___x_606_);
v___x_608_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5);
v___x_609_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7);
v___x_610_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_587_, v_inst_588_, v_inst_589_, v_inst_590_, v_type_597_, v_u_598_, v___x_608_, v___x_609_, v_expectedInst_607_);
v___x_611_ = lean_apply_4(v_toBind_591_, lean_box(0), lean_box(0), v___x_610_, v___f_592_);
return v___x_611_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___redArg(lean_object* v_inst_612_, lean_object* v_inst_613_, lean_object* v_inst_614_, lean_object* v_inst_615_, lean_object* v_inst_616_){
_start:
{
lean_object* v_toApplicative_617_; lean_object* v_toBind_618_; lean_object* v_getRing_619_; lean_object* v_modifyRing_620_; lean_object* v_toPure_621_; lean_object* v___f_622_; lean_object* v___f_623_; lean_object* v___x_624_; 
v_toApplicative_617_ = lean_ctor_get(v_inst_614_, 0);
v_toBind_618_ = lean_ctor_get(v_inst_614_, 1);
lean_inc_n(v_toBind_618_, 3);
v_getRing_619_ = lean_ctor_get(v_inst_616_, 0);
lean_inc(v_getRing_619_);
v_modifyRing_620_ = lean_ctor_get(v_inst_616_, 1);
lean_inc(v_modifyRing_620_);
lean_dec_ref(v_inst_616_);
v_toPure_621_ = lean_ctor_get(v_toApplicative_617_, 1);
lean_inc_n(v_toPure_621_, 2);
v___f_622_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_622_, 0, v_toPure_621_);
lean_closure_set(v___f_622_, 1, v_modifyRing_620_);
lean_closure_set(v___f_622_, 2, v_toBind_618_);
v___f_623_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_623_, 0, v_toPure_621_);
lean_closure_set(v___f_623_, 1, v_inst_612_);
lean_closure_set(v___f_623_, 2, v_inst_613_);
lean_closure_set(v___f_623_, 3, v_inst_614_);
lean_closure_set(v___f_623_, 4, v_inst_615_);
lean_closure_set(v___f_623_, 5, v_toBind_618_);
lean_closure_set(v___f_623_, 6, v___f_622_);
v___x_624_ = lean_apply_4(v_toBind_618_, lean_box(0), lean_box(0), v_getRing_619_, v___f_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn(lean_object* v_m_625_, lean_object* v_inst_626_, lean_object* v_inst_627_, lean_object* v_inst_628_, lean_object* v_inst_629_, lean_object* v_inst_630_){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = l_Lean_Meta_Sym_Arith_getMulFn___redArg(v_inst_626_, v_inst_627_, v_inst_628_, v_inst_629_, v_inst_630_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__0(lean_object* v_subFn_632_, lean_object* v_s_633_){
_start:
{
lean_object* v_id_634_; lean_object* v_type_635_; lean_object* v_u_636_; lean_object* v_ringInst_637_; lean_object* v_semiringInst_638_; lean_object* v_charInst_x3f_639_; lean_object* v_addFn_x3f_640_; lean_object* v_mulFn_x3f_641_; lean_object* v_negFn_x3f_642_; lean_object* v_powFn_x3f_643_; lean_object* v_intCastFn_x3f_644_; lean_object* v_natCastFn_x3f_645_; lean_object* v_one_x3f_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_654_; 
v_id_634_ = lean_ctor_get(v_s_633_, 0);
v_type_635_ = lean_ctor_get(v_s_633_, 1);
v_u_636_ = lean_ctor_get(v_s_633_, 2);
v_ringInst_637_ = lean_ctor_get(v_s_633_, 3);
v_semiringInst_638_ = lean_ctor_get(v_s_633_, 4);
v_charInst_x3f_639_ = lean_ctor_get(v_s_633_, 5);
v_addFn_x3f_640_ = lean_ctor_get(v_s_633_, 6);
v_mulFn_x3f_641_ = lean_ctor_get(v_s_633_, 7);
v_negFn_x3f_642_ = lean_ctor_get(v_s_633_, 9);
v_powFn_x3f_643_ = lean_ctor_get(v_s_633_, 10);
v_intCastFn_x3f_644_ = lean_ctor_get(v_s_633_, 11);
v_natCastFn_x3f_645_ = lean_ctor_get(v_s_633_, 12);
v_one_x3f_646_ = lean_ctor_get(v_s_633_, 13);
v_isSharedCheck_654_ = !lean_is_exclusive(v_s_633_);
if (v_isSharedCheck_654_ == 0)
{
lean_object* v_unused_655_; 
v_unused_655_ = lean_ctor_get(v_s_633_, 8);
lean_dec(v_unused_655_);
v___x_648_ = v_s_633_;
v_isShared_649_ = v_isSharedCheck_654_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_one_x3f_646_);
lean_inc(v_natCastFn_x3f_645_);
lean_inc(v_intCastFn_x3f_644_);
lean_inc(v_powFn_x3f_643_);
lean_inc(v_negFn_x3f_642_);
lean_inc(v_mulFn_x3f_641_);
lean_inc(v_addFn_x3f_640_);
lean_inc(v_charInst_x3f_639_);
lean_inc(v_semiringInst_638_);
lean_inc(v_ringInst_637_);
lean_inc(v_u_636_);
lean_inc(v_type_635_);
lean_inc(v_id_634_);
lean_dec(v_s_633_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_654_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_650_; lean_object* v___x_652_; 
v___x_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_650_, 0, v_subFn_632_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 8, v___x_650_);
v___x_652_ = v___x_648_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 14, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_id_634_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_type_635_);
lean_ctor_set(v_reuseFailAlloc_653_, 2, v_u_636_);
lean_ctor_set(v_reuseFailAlloc_653_, 3, v_ringInst_637_);
lean_ctor_set(v_reuseFailAlloc_653_, 4, v_semiringInst_638_);
lean_ctor_set(v_reuseFailAlloc_653_, 5, v_charInst_x3f_639_);
lean_ctor_set(v_reuseFailAlloc_653_, 6, v_addFn_x3f_640_);
lean_ctor_set(v_reuseFailAlloc_653_, 7, v_mulFn_x3f_641_);
lean_ctor_set(v_reuseFailAlloc_653_, 8, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_653_, 9, v_negFn_x3f_642_);
lean_ctor_set(v_reuseFailAlloc_653_, 10, v_powFn_x3f_643_);
lean_ctor_set(v_reuseFailAlloc_653_, 11, v_intCastFn_x3f_644_);
lean_ctor_set(v_reuseFailAlloc_653_, 12, v_natCastFn_x3f_645_);
lean_ctor_set(v_reuseFailAlloc_653_, 13, v_one_x3f_646_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__1(lean_object* v_toPure_656_, lean_object* v_subFn_657_, lean_object* v_____r_658_){
_start:
{
lean_object* v___x_659_; 
v___x_659_ = lean_apply_2(v_toPure_656_, lean_box(0), v_subFn_657_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__2(lean_object* v_toPure_660_, lean_object* v_modifyRing_661_, lean_object* v_toBind_662_, lean_object* v_subFn_663_){
_start:
{
lean_object* v___f_664_; lean_object* v___f_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
lean_inc_ref(v_subFn_663_);
v___f_664_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_664_, 0, v_subFn_663_);
v___f_665_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_665_, 0, v_toPure_660_);
lean_closure_set(v___f_665_, 1, v_subFn_663_);
v___x_666_ = lean_apply_1(v_modifyRing_661_, v___f_664_);
v___x_667_ = lean_apply_4(v_toBind_662_, lean_box(0), lean_box(0), v___x_666_, v___f_665_);
return v___x_667_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__0(void){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = lean_mk_string_unchecked("instHSub", 8, 8);
return v___x_668_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_669_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__0, &l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__0_once, _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__0);
v___x_670_ = l_Lean_Name_mkStr1(v___x_669_);
return v___x_670_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2(void){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = lean_mk_string_unchecked("Ring", 4, 4);
return v___x_671_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = lean_mk_string_unchecked("toSub", 5, 5);
return v___x_672_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__4(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_673_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3, &l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3_once, _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__3);
v___x_674_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2, &l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2);
v___x_675_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1);
v___x_676_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0);
v___x_677_ = l_Lean_Name_mkStr4(v___x_676_, v___x_675_, v___x_674_, v___x_673_);
return v___x_677_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5(void){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = lean_mk_string_unchecked("HSub", 4, 4);
return v___x_678_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__6(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5, &l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5_once, _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5);
v___x_680_ = l_Lean_Name_mkStr1(v___x_679_);
return v___x_680_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__7(void){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = lean_mk_string_unchecked("hSub", 4, 4);
return v___x_681_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__8(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_682_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__7, &l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__7_once, _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__7);
v___x_683_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5, &l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5_once, _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__5);
v___x_684_ = l_Lean_Name_mkStr2(v___x_683_, v___x_682_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3(lean_object* v_toPure_685_, lean_object* v_inst_686_, lean_object* v_inst_687_, lean_object* v_inst_688_, lean_object* v_inst_689_, lean_object* v_toBind_690_, lean_object* v___f_691_, lean_object* v_ring_692_){
_start:
{
lean_object* v_subFn_x3f_693_; 
v_subFn_x3f_693_ = lean_ctor_get(v_ring_692_, 8);
if (lean_obj_tag(v_subFn_x3f_693_) == 1)
{
lean_object* v_val_694_; lean_object* v___x_695_; 
lean_inc_ref(v_subFn_x3f_693_);
lean_dec_ref(v_ring_692_);
lean_dec(v___f_691_);
lean_dec(v_toBind_690_);
lean_dec_ref(v_inst_689_);
lean_dec_ref(v_inst_688_);
lean_dec_ref(v_inst_687_);
lean_dec(v_inst_686_);
v_val_694_ = lean_ctor_get(v_subFn_x3f_693_, 0);
lean_inc(v_val_694_);
lean_dec_ref(v_subFn_x3f_693_);
v___x_695_ = lean_apply_2(v_toPure_685_, lean_box(0), v_val_694_);
return v___x_695_;
}
else
{
lean_object* v_type_696_; lean_object* v_u_697_; lean_object* v_ringInst_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v_expectedInst_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
lean_dec(v_toPure_685_);
v_type_696_ = lean_ctor_get(v_ring_692_, 1);
lean_inc_ref_n(v_type_696_, 3);
v_u_697_ = lean_ctor_get(v_ring_692_, 2);
lean_inc_n(v_u_697_, 2);
v_ringInst_698_ = lean_ctor_get(v_ring_692_, 3);
lean_inc_ref(v_ringInst_698_);
lean_dec_ref(v_ring_692_);
v___x_699_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__1, &l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__1_once, _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__1);
v___x_700_ = lean_box(0);
v___x_701_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_701_, 0, v_u_697_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
lean_inc_ref(v___x_701_);
v___x_702_ = l_Lean_mkConst(v___x_699_, v___x_701_);
v___x_703_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__4, &l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__4_once, _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__4);
v___x_704_ = l_Lean_mkConst(v___x_703_, v___x_701_);
v___x_705_ = l_Lean_mkAppB(v___x_704_, v_type_696_, v_ringInst_698_);
v_expectedInst_706_ = l_Lean_mkAppB(v___x_702_, v_type_696_, v___x_705_);
v___x_707_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__6, &l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__6_once, _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__6);
v___x_708_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__8, &l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__8_once, _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__8);
v___x_709_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_686_, v_inst_687_, v_inst_688_, v_inst_689_, v_type_696_, v_u_697_, v___x_707_, v___x_708_, v_expectedInst_706_);
v___x_710_ = lean_apply_4(v_toBind_690_, lean_box(0), lean_box(0), v___x_709_, v___f_691_);
return v___x_710_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn___redArg(lean_object* v_inst_711_, lean_object* v_inst_712_, lean_object* v_inst_713_, lean_object* v_inst_714_, lean_object* v_inst_715_){
_start:
{
lean_object* v_toApplicative_716_; lean_object* v_toBind_717_; lean_object* v_getRing_718_; lean_object* v_modifyRing_719_; lean_object* v_toPure_720_; lean_object* v___f_721_; lean_object* v___f_722_; lean_object* v___x_723_; 
v_toApplicative_716_ = lean_ctor_get(v_inst_713_, 0);
v_toBind_717_ = lean_ctor_get(v_inst_713_, 1);
lean_inc_n(v_toBind_717_, 3);
v_getRing_718_ = lean_ctor_get(v_inst_715_, 0);
lean_inc(v_getRing_718_);
v_modifyRing_719_ = lean_ctor_get(v_inst_715_, 1);
lean_inc(v_modifyRing_719_);
lean_dec_ref(v_inst_715_);
v_toPure_720_ = lean_ctor_get(v_toApplicative_716_, 1);
lean_inc_n(v_toPure_720_, 2);
v___f_721_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_721_, 0, v_toPure_720_);
lean_closure_set(v___f_721_, 1, v_modifyRing_719_);
lean_closure_set(v___f_721_, 2, v_toBind_717_);
v___f_722_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_722_, 0, v_toPure_720_);
lean_closure_set(v___f_722_, 1, v_inst_711_);
lean_closure_set(v___f_722_, 2, v_inst_712_);
lean_closure_set(v___f_722_, 3, v_inst_713_);
lean_closure_set(v___f_722_, 4, v_inst_714_);
lean_closure_set(v___f_722_, 5, v_toBind_717_);
lean_closure_set(v___f_722_, 6, v___f_721_);
v___x_723_ = lean_apply_4(v_toBind_717_, lean_box(0), lean_box(0), v_getRing_718_, v___f_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getSubFn(lean_object* v_m_724_, lean_object* v_inst_725_, lean_object* v_inst_726_, lean_object* v_inst_727_, lean_object* v_inst_728_, lean_object* v_inst_729_){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = l_Lean_Meta_Sym_Arith_getSubFn___redArg(v_inst_725_, v_inst_726_, v_inst_727_, v_inst_728_, v_inst_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__0(lean_object* v_negFn_731_, lean_object* v_s_732_){
_start:
{
lean_object* v_id_733_; lean_object* v_type_734_; lean_object* v_u_735_; lean_object* v_ringInst_736_; lean_object* v_semiringInst_737_; lean_object* v_charInst_x3f_738_; lean_object* v_addFn_x3f_739_; lean_object* v_mulFn_x3f_740_; lean_object* v_subFn_x3f_741_; lean_object* v_powFn_x3f_742_; lean_object* v_intCastFn_x3f_743_; lean_object* v_natCastFn_x3f_744_; lean_object* v_one_x3f_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_753_; 
v_id_733_ = lean_ctor_get(v_s_732_, 0);
v_type_734_ = lean_ctor_get(v_s_732_, 1);
v_u_735_ = lean_ctor_get(v_s_732_, 2);
v_ringInst_736_ = lean_ctor_get(v_s_732_, 3);
v_semiringInst_737_ = lean_ctor_get(v_s_732_, 4);
v_charInst_x3f_738_ = lean_ctor_get(v_s_732_, 5);
v_addFn_x3f_739_ = lean_ctor_get(v_s_732_, 6);
v_mulFn_x3f_740_ = lean_ctor_get(v_s_732_, 7);
v_subFn_x3f_741_ = lean_ctor_get(v_s_732_, 8);
v_powFn_x3f_742_ = lean_ctor_get(v_s_732_, 10);
v_intCastFn_x3f_743_ = lean_ctor_get(v_s_732_, 11);
v_natCastFn_x3f_744_ = lean_ctor_get(v_s_732_, 12);
v_one_x3f_745_ = lean_ctor_get(v_s_732_, 13);
v_isSharedCheck_753_ = !lean_is_exclusive(v_s_732_);
if (v_isSharedCheck_753_ == 0)
{
lean_object* v_unused_754_; 
v_unused_754_ = lean_ctor_get(v_s_732_, 9);
lean_dec(v_unused_754_);
v___x_747_ = v_s_732_;
v_isShared_748_ = v_isSharedCheck_753_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_one_x3f_745_);
lean_inc(v_natCastFn_x3f_744_);
lean_inc(v_intCastFn_x3f_743_);
lean_inc(v_powFn_x3f_742_);
lean_inc(v_subFn_x3f_741_);
lean_inc(v_mulFn_x3f_740_);
lean_inc(v_addFn_x3f_739_);
lean_inc(v_charInst_x3f_738_);
lean_inc(v_semiringInst_737_);
lean_inc(v_ringInst_736_);
lean_inc(v_u_735_);
lean_inc(v_type_734_);
lean_inc(v_id_733_);
lean_dec(v_s_732_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_753_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_749_; lean_object* v___x_751_; 
v___x_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_749_, 0, v_negFn_731_);
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 9, v___x_749_);
v___x_751_ = v___x_747_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 14, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_id_733_);
lean_ctor_set(v_reuseFailAlloc_752_, 1, v_type_734_);
lean_ctor_set(v_reuseFailAlloc_752_, 2, v_u_735_);
lean_ctor_set(v_reuseFailAlloc_752_, 3, v_ringInst_736_);
lean_ctor_set(v_reuseFailAlloc_752_, 4, v_semiringInst_737_);
lean_ctor_set(v_reuseFailAlloc_752_, 5, v_charInst_x3f_738_);
lean_ctor_set(v_reuseFailAlloc_752_, 6, v_addFn_x3f_739_);
lean_ctor_set(v_reuseFailAlloc_752_, 7, v_mulFn_x3f_740_);
lean_ctor_set(v_reuseFailAlloc_752_, 8, v_subFn_x3f_741_);
lean_ctor_set(v_reuseFailAlloc_752_, 9, v___x_749_);
lean_ctor_set(v_reuseFailAlloc_752_, 10, v_powFn_x3f_742_);
lean_ctor_set(v_reuseFailAlloc_752_, 11, v_intCastFn_x3f_743_);
lean_ctor_set(v_reuseFailAlloc_752_, 12, v_natCastFn_x3f_744_);
lean_ctor_set(v_reuseFailAlloc_752_, 13, v_one_x3f_745_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__1(lean_object* v_toPure_755_, lean_object* v_negFn_756_, lean_object* v_____r_757_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = lean_apply_2(v_toPure_755_, lean_box(0), v_negFn_756_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__2(lean_object* v_toPure_759_, lean_object* v_modifyRing_760_, lean_object* v_toBind_761_, lean_object* v_negFn_762_){
_start:
{
lean_object* v___f_763_; lean_object* v___f_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
lean_inc_ref(v_negFn_762_);
v___f_763_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_763_, 0, v_negFn_762_);
v___f_764_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_764_, 0, v_toPure_759_);
lean_closure_set(v___f_764_, 1, v_negFn_762_);
v___x_765_ = lean_apply_1(v_modifyRing_760_, v___f_763_);
v___x_766_ = lean_apply_4(v_toBind_761_, lean_box(0), lean_box(0), v___x_765_, v___f_764_);
return v___x_766_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__0(void){
_start:
{
lean_object* v___x_767_; 
v___x_767_ = lean_mk_string_unchecked("toNeg", 5, 5);
return v___x_767_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_768_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__0, &l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__0_once, _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__0);
v___x_769_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2, &l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2);
v___x_770_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1);
v___x_771_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0);
v___x_772_ = l_Lean_Name_mkStr4(v___x_771_, v___x_770_, v___x_769_, v___x_768_);
return v___x_772_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2(void){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = lean_mk_string_unchecked("Neg", 3, 3);
return v___x_773_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2, &l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2);
v___x_775_ = l_Lean_Name_mkStr1(v___x_774_);
return v___x_775_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__4(void){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = lean_mk_string_unchecked("neg", 3, 3);
return v___x_776_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__5(void){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_777_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__4, &l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__4_once, _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__4);
v___x_778_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2, &l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__2);
v___x_779_ = l_Lean_Name_mkStr2(v___x_778_, v___x_777_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3(lean_object* v_toPure_780_, lean_object* v_inst_781_, lean_object* v_inst_782_, lean_object* v_inst_783_, lean_object* v_inst_784_, lean_object* v_toBind_785_, lean_object* v___f_786_, lean_object* v_ring_787_){
_start:
{
lean_object* v_negFn_x3f_788_; 
v_negFn_x3f_788_ = lean_ctor_get(v_ring_787_, 9);
if (lean_obj_tag(v_negFn_x3f_788_) == 1)
{
lean_object* v_val_789_; lean_object* v___x_790_; 
lean_inc_ref(v_negFn_x3f_788_);
lean_dec_ref(v_ring_787_);
lean_dec(v___f_786_);
lean_dec(v_toBind_785_);
lean_dec_ref(v_inst_784_);
lean_dec_ref(v_inst_783_);
lean_dec_ref(v_inst_782_);
lean_dec(v_inst_781_);
v_val_789_ = lean_ctor_get(v_negFn_x3f_788_, 0);
lean_inc(v_val_789_);
lean_dec_ref(v_negFn_x3f_788_);
v___x_790_ = lean_apply_2(v_toPure_780_, lean_box(0), v_val_789_);
return v___x_790_;
}
else
{
lean_object* v_type_791_; lean_object* v_u_792_; lean_object* v_ringInst_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v_expectedInst_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
lean_dec(v_toPure_780_);
v_type_791_ = lean_ctor_get(v_ring_787_, 1);
lean_inc_ref_n(v_type_791_, 2);
v_u_792_ = lean_ctor_get(v_ring_787_, 2);
lean_inc_n(v_u_792_, 2);
v_ringInst_793_ = lean_ctor_get(v_ring_787_, 3);
lean_inc_ref(v_ringInst_793_);
lean_dec_ref(v_ring_787_);
v___x_794_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1, &l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1_once, _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__1);
v___x_795_ = lean_box(0);
v___x_796_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_796_, 0, v_u_792_);
lean_ctor_set(v___x_796_, 1, v___x_795_);
v___x_797_ = l_Lean_mkConst(v___x_794_, v___x_796_);
v_expectedInst_798_ = l_Lean_mkAppB(v___x_797_, v_type_791_, v_ringInst_793_);
v___x_799_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__3, &l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__3_once, _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__3);
v___x_800_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__5, &l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__5_once, _init_l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3___closed__5);
v___x_801_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg(v_inst_781_, v_inst_782_, v_inst_783_, v_inst_784_, v_type_791_, v_u_792_, v___x_799_, v___x_800_, v_expectedInst_798_);
v___x_802_ = lean_apply_4(v_toBind_785_, lean_box(0), lean_box(0), v___x_801_, v___f_786_);
return v___x_802_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___redArg(lean_object* v_inst_803_, lean_object* v_inst_804_, lean_object* v_inst_805_, lean_object* v_inst_806_, lean_object* v_inst_807_){
_start:
{
lean_object* v_toApplicative_808_; lean_object* v_toBind_809_; lean_object* v_getRing_810_; lean_object* v_modifyRing_811_; lean_object* v_toPure_812_; lean_object* v___f_813_; lean_object* v___f_814_; lean_object* v___x_815_; 
v_toApplicative_808_ = lean_ctor_get(v_inst_805_, 0);
v_toBind_809_ = lean_ctor_get(v_inst_805_, 1);
lean_inc_n(v_toBind_809_, 3);
v_getRing_810_ = lean_ctor_get(v_inst_807_, 0);
lean_inc(v_getRing_810_);
v_modifyRing_811_ = lean_ctor_get(v_inst_807_, 1);
lean_inc(v_modifyRing_811_);
lean_dec_ref(v_inst_807_);
v_toPure_812_ = lean_ctor_get(v_toApplicative_808_, 1);
lean_inc_n(v_toPure_812_, 2);
v___f_813_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_813_, 0, v_toPure_812_);
lean_closure_set(v___f_813_, 1, v_modifyRing_811_);
lean_closure_set(v___f_813_, 2, v_toBind_809_);
v___f_814_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNegFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_814_, 0, v_toPure_812_);
lean_closure_set(v___f_814_, 1, v_inst_803_);
lean_closure_set(v___f_814_, 2, v_inst_804_);
lean_closure_set(v___f_814_, 3, v_inst_805_);
lean_closure_set(v___f_814_, 4, v_inst_806_);
lean_closure_set(v___f_814_, 5, v_toBind_809_);
lean_closure_set(v___f_814_, 6, v___f_813_);
v___x_815_ = lean_apply_4(v_toBind_809_, lean_box(0), lean_box(0), v_getRing_810_, v___f_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn(lean_object* v_m_816_, lean_object* v_inst_817_, lean_object* v_inst_818_, lean_object* v_inst_819_, lean_object* v_inst_820_, lean_object* v_inst_821_){
_start:
{
lean_object* v___x_822_; 
v___x_822_ = l_Lean_Meta_Sym_Arith_getNegFn___redArg(v_inst_817_, v_inst_818_, v_inst_819_, v_inst_820_, v_inst_821_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__0(lean_object* v_powFn_823_, lean_object* v_s_824_){
_start:
{
lean_object* v_id_825_; lean_object* v_type_826_; lean_object* v_u_827_; lean_object* v_ringInst_828_; lean_object* v_semiringInst_829_; lean_object* v_charInst_x3f_830_; lean_object* v_addFn_x3f_831_; lean_object* v_mulFn_x3f_832_; lean_object* v_subFn_x3f_833_; lean_object* v_negFn_x3f_834_; lean_object* v_intCastFn_x3f_835_; lean_object* v_natCastFn_x3f_836_; lean_object* v_one_x3f_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_845_; 
v_id_825_ = lean_ctor_get(v_s_824_, 0);
v_type_826_ = lean_ctor_get(v_s_824_, 1);
v_u_827_ = lean_ctor_get(v_s_824_, 2);
v_ringInst_828_ = lean_ctor_get(v_s_824_, 3);
v_semiringInst_829_ = lean_ctor_get(v_s_824_, 4);
v_charInst_x3f_830_ = lean_ctor_get(v_s_824_, 5);
v_addFn_x3f_831_ = lean_ctor_get(v_s_824_, 6);
v_mulFn_x3f_832_ = lean_ctor_get(v_s_824_, 7);
v_subFn_x3f_833_ = lean_ctor_get(v_s_824_, 8);
v_negFn_x3f_834_ = lean_ctor_get(v_s_824_, 9);
v_intCastFn_x3f_835_ = lean_ctor_get(v_s_824_, 11);
v_natCastFn_x3f_836_ = lean_ctor_get(v_s_824_, 12);
v_one_x3f_837_ = lean_ctor_get(v_s_824_, 13);
v_isSharedCheck_845_ = !lean_is_exclusive(v_s_824_);
if (v_isSharedCheck_845_ == 0)
{
lean_object* v_unused_846_; 
v_unused_846_ = lean_ctor_get(v_s_824_, 10);
lean_dec(v_unused_846_);
v___x_839_ = v_s_824_;
v_isShared_840_ = v_isSharedCheck_845_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_one_x3f_837_);
lean_inc(v_natCastFn_x3f_836_);
lean_inc(v_intCastFn_x3f_835_);
lean_inc(v_negFn_x3f_834_);
lean_inc(v_subFn_x3f_833_);
lean_inc(v_mulFn_x3f_832_);
lean_inc(v_addFn_x3f_831_);
lean_inc(v_charInst_x3f_830_);
lean_inc(v_semiringInst_829_);
lean_inc(v_ringInst_828_);
lean_inc(v_u_827_);
lean_inc(v_type_826_);
lean_inc(v_id_825_);
lean_dec(v_s_824_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_845_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_841_; lean_object* v___x_843_; 
v___x_841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_841_, 0, v_powFn_823_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 10, v___x_841_);
v___x_843_ = v___x_839_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 14, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_id_825_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v_type_826_);
lean_ctor_set(v_reuseFailAlloc_844_, 2, v_u_827_);
lean_ctor_set(v_reuseFailAlloc_844_, 3, v_ringInst_828_);
lean_ctor_set(v_reuseFailAlloc_844_, 4, v_semiringInst_829_);
lean_ctor_set(v_reuseFailAlloc_844_, 5, v_charInst_x3f_830_);
lean_ctor_set(v_reuseFailAlloc_844_, 6, v_addFn_x3f_831_);
lean_ctor_set(v_reuseFailAlloc_844_, 7, v_mulFn_x3f_832_);
lean_ctor_set(v_reuseFailAlloc_844_, 8, v_subFn_x3f_833_);
lean_ctor_set(v_reuseFailAlloc_844_, 9, v_negFn_x3f_834_);
lean_ctor_set(v_reuseFailAlloc_844_, 10, v___x_841_);
lean_ctor_set(v_reuseFailAlloc_844_, 11, v_intCastFn_x3f_835_);
lean_ctor_set(v_reuseFailAlloc_844_, 12, v_natCastFn_x3f_836_);
lean_ctor_set(v_reuseFailAlloc_844_, 13, v_one_x3f_837_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__1(lean_object* v_toPure_847_, lean_object* v_powFn_848_, lean_object* v_____r_849_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = lean_apply_2(v_toPure_847_, lean_box(0), v_powFn_848_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__2(lean_object* v_toPure_851_, lean_object* v_modifyRing_852_, lean_object* v_toBind_853_, lean_object* v_powFn_854_){
_start:
{
lean_object* v___f_855_; lean_object* v___f_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
lean_inc_ref(v_powFn_854_);
v___f_855_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_855_, 0, v_powFn_854_);
v___f_856_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_856_, 0, v_toPure_851_);
lean_closure_set(v___f_856_, 1, v_powFn_854_);
v___x_857_ = lean_apply_1(v_modifyRing_852_, v___f_855_);
v___x_858_ = lean_apply_4(v_toBind_853_, lean_box(0), lean_box(0), v___x_857_, v___f_856_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__3(lean_object* v_toPure_859_, lean_object* v_inst_860_, lean_object* v_inst_861_, lean_object* v_inst_862_, lean_object* v_inst_863_, lean_object* v_toBind_864_, lean_object* v___f_865_, lean_object* v_ring_866_){
_start:
{
lean_object* v_powFn_x3f_867_; 
v_powFn_x3f_867_ = lean_ctor_get(v_ring_866_, 10);
if (lean_obj_tag(v_powFn_x3f_867_) == 1)
{
lean_object* v_val_868_; lean_object* v___x_869_; 
lean_inc_ref(v_powFn_x3f_867_);
lean_dec_ref(v_ring_866_);
lean_dec(v___f_865_);
lean_dec(v_toBind_864_);
lean_dec_ref(v_inst_863_);
lean_dec_ref(v_inst_862_);
lean_dec_ref(v_inst_861_);
lean_dec(v_inst_860_);
v_val_868_ = lean_ctor_get(v_powFn_x3f_867_, 0);
lean_inc(v_val_868_);
lean_dec_ref(v_powFn_x3f_867_);
v___x_869_ = lean_apply_2(v_toPure_859_, lean_box(0), v_val_868_);
return v___x_869_;
}
else
{
lean_object* v_type_870_; lean_object* v_u_871_; lean_object* v_semiringInst_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
lean_dec(v_toPure_859_);
v_type_870_ = lean_ctor_get(v_ring_866_, 1);
lean_inc_ref(v_type_870_);
v_u_871_ = lean_ctor_get(v_ring_866_, 2);
lean_inc(v_u_871_);
v_semiringInst_872_ = lean_ctor_get(v_ring_866_, 4);
lean_inc_ref(v_semiringInst_872_);
lean_dec_ref(v_ring_866_);
v___x_873_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg(v_inst_860_, v_inst_861_, v_inst_862_, v_inst_863_, v_u_871_, v_type_870_, v_semiringInst_872_);
v___x_874_ = lean_apply_4(v_toBind_864_, lean_box(0), lean_box(0), v___x_873_, v___f_865_);
return v___x_874_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___redArg(lean_object* v_inst_875_, lean_object* v_inst_876_, lean_object* v_inst_877_, lean_object* v_inst_878_, lean_object* v_inst_879_){
_start:
{
lean_object* v_toApplicative_880_; lean_object* v_toBind_881_; lean_object* v_getRing_882_; lean_object* v_modifyRing_883_; lean_object* v_toPure_884_; lean_object* v___f_885_; lean_object* v___f_886_; lean_object* v___x_887_; 
v_toApplicative_880_ = lean_ctor_get(v_inst_877_, 0);
v_toBind_881_ = lean_ctor_get(v_inst_877_, 1);
lean_inc_n(v_toBind_881_, 3);
v_getRing_882_ = lean_ctor_get(v_inst_879_, 0);
lean_inc(v_getRing_882_);
v_modifyRing_883_ = lean_ctor_get(v_inst_879_, 1);
lean_inc(v_modifyRing_883_);
lean_dec_ref(v_inst_879_);
v_toPure_884_ = lean_ctor_get(v_toApplicative_880_, 1);
lean_inc_n(v_toPure_884_, 2);
v___f_885_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_885_, 0, v_toPure_884_);
lean_closure_set(v___f_885_, 1, v_modifyRing_883_);
lean_closure_set(v___f_885_, 2, v_toBind_881_);
v___f_886_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_886_, 0, v_toPure_884_);
lean_closure_set(v___f_886_, 1, v_inst_875_);
lean_closure_set(v___f_886_, 2, v_inst_876_);
lean_closure_set(v___f_886_, 3, v_inst_877_);
lean_closure_set(v___f_886_, 4, v_inst_878_);
lean_closure_set(v___f_886_, 5, v_toBind_881_);
lean_closure_set(v___f_886_, 6, v___f_885_);
v___x_887_ = lean_apply_4(v_toBind_881_, lean_box(0), lean_box(0), v_getRing_882_, v___f_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn(lean_object* v_m_888_, lean_object* v_inst_889_, lean_object* v_inst_890_, lean_object* v_inst_891_, lean_object* v_inst_892_, lean_object* v_inst_893_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lean_Meta_Sym_Arith_getPowFn___redArg(v_inst_889_, v_inst_890_, v_inst_891_, v_inst_892_, v_inst_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__0(lean_object* v_intCastFn_895_, lean_object* v_s_896_){
_start:
{
lean_object* v_id_897_; lean_object* v_type_898_; lean_object* v_u_899_; lean_object* v_ringInst_900_; lean_object* v_semiringInst_901_; lean_object* v_charInst_x3f_902_; lean_object* v_addFn_x3f_903_; lean_object* v_mulFn_x3f_904_; lean_object* v_subFn_x3f_905_; lean_object* v_negFn_x3f_906_; lean_object* v_powFn_x3f_907_; lean_object* v_natCastFn_x3f_908_; lean_object* v_one_x3f_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_917_; 
v_id_897_ = lean_ctor_get(v_s_896_, 0);
v_type_898_ = lean_ctor_get(v_s_896_, 1);
v_u_899_ = lean_ctor_get(v_s_896_, 2);
v_ringInst_900_ = lean_ctor_get(v_s_896_, 3);
v_semiringInst_901_ = lean_ctor_get(v_s_896_, 4);
v_charInst_x3f_902_ = lean_ctor_get(v_s_896_, 5);
v_addFn_x3f_903_ = lean_ctor_get(v_s_896_, 6);
v_mulFn_x3f_904_ = lean_ctor_get(v_s_896_, 7);
v_subFn_x3f_905_ = lean_ctor_get(v_s_896_, 8);
v_negFn_x3f_906_ = lean_ctor_get(v_s_896_, 9);
v_powFn_x3f_907_ = lean_ctor_get(v_s_896_, 10);
v_natCastFn_x3f_908_ = lean_ctor_get(v_s_896_, 12);
v_one_x3f_909_ = lean_ctor_get(v_s_896_, 13);
v_isSharedCheck_917_ = !lean_is_exclusive(v_s_896_);
if (v_isSharedCheck_917_ == 0)
{
lean_object* v_unused_918_; 
v_unused_918_ = lean_ctor_get(v_s_896_, 11);
lean_dec(v_unused_918_);
v___x_911_ = v_s_896_;
v_isShared_912_ = v_isSharedCheck_917_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_one_x3f_909_);
lean_inc(v_natCastFn_x3f_908_);
lean_inc(v_powFn_x3f_907_);
lean_inc(v_negFn_x3f_906_);
lean_inc(v_subFn_x3f_905_);
lean_inc(v_mulFn_x3f_904_);
lean_inc(v_addFn_x3f_903_);
lean_inc(v_charInst_x3f_902_);
lean_inc(v_semiringInst_901_);
lean_inc(v_ringInst_900_);
lean_inc(v_u_899_);
lean_inc(v_type_898_);
lean_inc(v_id_897_);
lean_dec(v_s_896_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_917_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_913_; lean_object* v___x_915_; 
v___x_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_913_, 0, v_intCastFn_895_);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 11, v___x_913_);
v___x_915_ = v___x_911_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(0, 14, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_id_897_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v_type_898_);
lean_ctor_set(v_reuseFailAlloc_916_, 2, v_u_899_);
lean_ctor_set(v_reuseFailAlloc_916_, 3, v_ringInst_900_);
lean_ctor_set(v_reuseFailAlloc_916_, 4, v_semiringInst_901_);
lean_ctor_set(v_reuseFailAlloc_916_, 5, v_charInst_x3f_902_);
lean_ctor_set(v_reuseFailAlloc_916_, 6, v_addFn_x3f_903_);
lean_ctor_set(v_reuseFailAlloc_916_, 7, v_mulFn_x3f_904_);
lean_ctor_set(v_reuseFailAlloc_916_, 8, v_subFn_x3f_905_);
lean_ctor_set(v_reuseFailAlloc_916_, 9, v_negFn_x3f_906_);
lean_ctor_set(v_reuseFailAlloc_916_, 10, v_powFn_x3f_907_);
lean_ctor_set(v_reuseFailAlloc_916_, 11, v___x_913_);
lean_ctor_set(v_reuseFailAlloc_916_, 12, v_natCastFn_x3f_908_);
lean_ctor_set(v_reuseFailAlloc_916_, 13, v_one_x3f_909_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__1(lean_object* v_toPure_919_, lean_object* v_intCastFn_920_, lean_object* v_____r_921_){
_start:
{
lean_object* v___x_922_; 
v___x_922_ = lean_apply_2(v_toPure_919_, lean_box(0), v_intCastFn_920_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__2(lean_object* v_toPure_923_, lean_object* v_modifyRing_924_, lean_object* v_toBind_925_, lean_object* v_intCastFn_926_){
_start:
{
lean_object* v___f_927_; lean_object* v___f_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
lean_inc_ref(v_intCastFn_926_);
v___f_927_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_927_, 0, v_intCastFn_926_);
v___f_928_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_928_, 0, v_toPure_923_);
lean_closure_set(v___f_928_, 1, v_intCastFn_926_);
v___x_929_ = lean_apply_1(v_modifyRing_924_, v___f_927_);
v___x_930_ = lean_apply_4(v_toBind_925_, lean_box(0), lean_box(0), v___x_929_, v___f_928_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__3(lean_object* v___x_931_, lean_object* v___x_932_, lean_object* v___x_933_, lean_object* v_type_934_, lean_object* v_canonExpr_935_, lean_object* v_toBind_936_, lean_object* v___f_937_, lean_object* v_inst_938_){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_939_ = l_Lean_Name_mkStr2(v___x_931_, v___x_932_);
v___x_940_ = l_Lean_mkConst(v___x_939_, v___x_933_);
v___x_941_ = l_Lean_mkAppB(v___x_940_, v_type_934_, v_inst_938_);
v___x_942_ = lean_apply_1(v_canonExpr_935_, v___x_941_);
v___x_943_ = lean_apply_4(v_toBind_936_, lean_box(0), lean_box(0), v___x_942_, v___f_937_);
return v___x_943_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__0(void){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = lean_mk_string_unchecked("Int", 3, 3);
return v___x_944_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__1(void){
_start:
{
lean_object* v___x_945_; 
v___x_945_ = lean_mk_string_unchecked("cast", 4, 4);
return v___x_945_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__2(void){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_946_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__1, &l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__1_once, _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__1);
v___x_947_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__0, &l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__0_once, _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__0);
v___x_948_ = l_Lean_Name_mkStr2(v___x_947_, v___x_946_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7(lean_object* v_toPure_949_, lean_object* v_inst_x27_950_, lean_object* v_toBind_951_, lean_object* v___f_952_, lean_object* v___f_953_, lean_object* v_inst_954_, lean_object* v_____do__lift_955_){
_start:
{
if (lean_obj_tag(v_____do__lift_955_) == 0)
{
lean_object* v___x_956_; lean_object* v___x_957_; 
lean_dec(v_inst_954_);
lean_dec(v___f_953_);
v___x_956_ = lean_apply_2(v_toPure_949_, lean_box(0), v_inst_x27_950_);
v___x_957_ = lean_apply_4(v_toBind_951_, lean_box(0), lean_box(0), v___x_956_, v___f_952_);
return v___x_957_;
}
else
{
lean_object* v_val_958_; lean_object* v___f_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
lean_dec(v___f_952_);
v_val_958_ = lean_ctor_get(v_____do__lift_955_, 0);
lean_inc_n(v_val_958_, 2);
lean_dec_ref(v_____do__lift_955_);
lean_inc(v_toBind_951_);
v___f_959_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__3), 5, 4);
lean_closure_set(v___f_959_, 0, v_toPure_949_);
lean_closure_set(v___f_959_, 1, v_val_958_);
lean_closure_set(v___f_959_, 2, v_toBind_951_);
lean_closure_set(v___f_959_, 3, v___f_953_);
v___x_960_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__2, &l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__2_once, _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7___closed__2);
v___x_961_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst___boxed), 8, 3);
lean_closure_set(v___x_961_, 0, v___x_960_);
lean_closure_set(v___x_961_, 1, v_val_958_);
lean_closure_set(v___x_961_, 2, v_inst_x27_950_);
v___x_962_ = lean_apply_2(v_inst_954_, lean_box(0), v___x_961_);
v___x_963_ = lean_apply_4(v_toBind_951_, lean_box(0), lean_box(0), v___x_962_, v___f_959_);
return v___x_963_;
}
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0(void){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = lean_mk_string_unchecked("intCast", 7, 7);
return v___x_964_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1(void){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_965_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0, &l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0_once, _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0);
v___x_966_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2, &l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Sym_Arith_getSubFn___redArg___lam__3___closed__2);
v___x_967_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1);
v___x_968_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0);
v___x_969_ = l_Lean_Name_mkStr4(v___x_968_, v___x_967_, v___x_966_, v___x_965_);
return v___x_969_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2(void){
_start:
{
lean_object* v___x_970_; 
v___x_970_ = lean_mk_string_unchecked("IntCast", 7, 7);
return v___x_970_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__3(void){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2, &l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2_once, _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2);
v___x_972_ = l_Lean_Name_mkStr1(v___x_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4(lean_object* v_toPure_973_, lean_object* v_inst_974_, lean_object* v_toBind_975_, lean_object* v___f_976_, lean_object* v_inst_977_, lean_object* v_ring_978_){
_start:
{
lean_object* v_intCastFn_x3f_979_; 
v_intCastFn_x3f_979_ = lean_ctor_get(v_ring_978_, 11);
if (lean_obj_tag(v_intCastFn_x3f_979_) == 1)
{
lean_object* v_val_980_; lean_object* v___x_981_; 
lean_inc_ref(v_intCastFn_x3f_979_);
lean_dec_ref(v_ring_978_);
lean_dec(v_inst_977_);
lean_dec(v___f_976_);
lean_dec(v_toBind_975_);
lean_dec_ref(v_inst_974_);
v_val_980_ = lean_ctor_get(v_intCastFn_x3f_979_, 0);
lean_inc(v_val_980_);
lean_dec_ref(v_intCastFn_x3f_979_);
v___x_981_ = lean_apply_2(v_toPure_973_, lean_box(0), v_val_980_);
return v___x_981_;
}
else
{
lean_object* v_type_982_; lean_object* v_u_983_; lean_object* v_ringInst_984_; lean_object* v_canonExpr_985_; lean_object* v_synthInstance_x3f_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1007_; 
v_type_982_ = lean_ctor_get(v_ring_978_, 1);
lean_inc_ref(v_type_982_);
v_u_983_ = lean_ctor_get(v_ring_978_, 2);
lean_inc(v_u_983_);
v_ringInst_984_ = lean_ctor_get(v_ring_978_, 3);
lean_inc_ref(v_ringInst_984_);
lean_dec_ref(v_ring_978_);
v_canonExpr_985_ = lean_ctor_get(v_inst_974_, 0);
v_synthInstance_x3f_986_ = lean_ctor_get(v_inst_974_, 1);
v_isSharedCheck_1007_ = !lean_is_exclusive(v_inst_974_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_988_ = v_inst_974_;
v_isShared_989_ = v_isSharedCheck_1007_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_synthInstance_x3f_986_);
lean_inc(v_canonExpr_985_);
lean_dec(v_inst_974_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1007_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_994_; 
v___x_990_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0, &l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0_once, _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__0);
v___x_991_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1, &l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1_once, _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__1);
v___x_992_ = lean_box(0);
if (v_isShared_989_ == 0)
{
lean_ctor_set_tag(v___x_988_, 1);
lean_ctor_set(v___x_988_, 1, v___x_992_);
lean_ctor_set(v___x_988_, 0, v_u_983_);
v___x_994_ = v___x_988_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_u_983_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v___x_992_);
v___x_994_ = v_reuseFailAlloc_1006_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
lean_object* v___x_995_; lean_object* v_inst_x27_996_; lean_object* v___x_997_; lean_object* v___f_998_; lean_object* v___f_999_; lean_object* v___f_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v_instType_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
lean_inc_ref_n(v___x_994_, 2);
v___x_995_ = l_Lean_mkConst(v___x_991_, v___x_994_);
lean_inc_ref_n(v_type_982_, 2);
v_inst_x27_996_ = l_Lean_mkAppB(v___x_995_, v_type_982_, v_ringInst_984_);
v___x_997_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2, &l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2_once, _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__2);
lean_inc_n(v_toBind_975_, 2);
v___f_998_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_998_, 0, v___x_997_);
lean_closure_set(v___f_998_, 1, v___x_990_);
lean_closure_set(v___f_998_, 2, v___x_994_);
lean_closure_set(v___f_998_, 3, v_type_982_);
lean_closure_set(v___f_998_, 4, v_canonExpr_985_);
lean_closure_set(v___f_998_, 5, v_toBind_975_);
lean_closure_set(v___f_998_, 6, v___f_976_);
v___f_999_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg___lam__1), 2, 1);
lean_closure_set(v___f_999_, 0, v___f_998_);
lean_inc_ref(v___f_999_);
v___f_1000_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__7), 7, 6);
lean_closure_set(v___f_1000_, 0, v_toPure_973_);
lean_closure_set(v___f_1000_, 1, v_inst_x27_996_);
lean_closure_set(v___f_1000_, 2, v_toBind_975_);
lean_closure_set(v___f_1000_, 3, v___f_999_);
lean_closure_set(v___f_1000_, 4, v___f_999_);
lean_closure_set(v___f_1000_, 5, v_inst_977_);
v___x_1001_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__3, &l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__3_once, _init_l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4___closed__3);
v___x_1002_ = l_Lean_mkConst(v___x_1001_, v___x_994_);
v_instType_1003_ = l_Lean_Expr_app___override(v___x_1002_, v_type_982_);
v___x_1004_ = lean_apply_1(v_synthInstance_x3f_986_, v_instType_1003_);
v___x_1005_ = lean_apply_4(v_toBind_975_, lean_box(0), lean_box(0), v___x_1004_, v___f_1000_);
return v___x_1005_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg(lean_object* v_inst_1008_, lean_object* v_inst_1009_, lean_object* v_inst_1010_, lean_object* v_inst_1011_){
_start:
{
lean_object* v_toApplicative_1012_; lean_object* v_toBind_1013_; lean_object* v_getRing_1014_; lean_object* v_modifyRing_1015_; lean_object* v_toPure_1016_; lean_object* v___f_1017_; lean_object* v___f_1018_; lean_object* v___x_1019_; 
v_toApplicative_1012_ = lean_ctor_get(v_inst_1009_, 0);
lean_inc_ref(v_toApplicative_1012_);
v_toBind_1013_ = lean_ctor_get(v_inst_1009_, 1);
lean_inc_n(v_toBind_1013_, 3);
lean_dec_ref(v_inst_1009_);
v_getRing_1014_ = lean_ctor_get(v_inst_1011_, 0);
lean_inc(v_getRing_1014_);
v_modifyRing_1015_ = lean_ctor_get(v_inst_1011_, 1);
lean_inc(v_modifyRing_1015_);
lean_dec_ref(v_inst_1011_);
v_toPure_1016_ = lean_ctor_get(v_toApplicative_1012_, 1);
lean_inc_n(v_toPure_1016_, 2);
lean_dec_ref(v_toApplicative_1012_);
v___f_1017_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1017_, 0, v_toPure_1016_);
lean_closure_set(v___f_1017_, 1, v_modifyRing_1015_);
lean_closure_set(v___f_1017_, 2, v_toBind_1013_);
v___f_1018_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___redArg___lam__4), 6, 5);
lean_closure_set(v___f_1018_, 0, v_toPure_1016_);
lean_closure_set(v___f_1018_, 1, v_inst_1010_);
lean_closure_set(v___f_1018_, 2, v_toBind_1013_);
lean_closure_set(v___f_1018_, 3, v___f_1017_);
lean_closure_set(v___f_1018_, 4, v_inst_1008_);
v___x_1019_ = lean_apply_4(v_toBind_1013_, lean_box(0), lean_box(0), v_getRing_1014_, v___f_1018_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn(lean_object* v_m_1020_, lean_object* v_inst_1021_, lean_object* v_inst_1022_, lean_object* v_inst_1023_, lean_object* v_inst_1024_){
_start:
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Lean_Meta_Sym_Arith_getIntCastFn___redArg(v_inst_1021_, v_inst_1022_, v_inst_1023_, v_inst_1024_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__0(lean_object* v_natCastFn_1026_, lean_object* v_s_1027_){
_start:
{
lean_object* v_id_1028_; lean_object* v_type_1029_; lean_object* v_u_1030_; lean_object* v_ringInst_1031_; lean_object* v_semiringInst_1032_; lean_object* v_charInst_x3f_1033_; lean_object* v_addFn_x3f_1034_; lean_object* v_mulFn_x3f_1035_; lean_object* v_subFn_x3f_1036_; lean_object* v_negFn_x3f_1037_; lean_object* v_powFn_x3f_1038_; lean_object* v_intCastFn_x3f_1039_; lean_object* v_one_x3f_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1048_; 
v_id_1028_ = lean_ctor_get(v_s_1027_, 0);
v_type_1029_ = lean_ctor_get(v_s_1027_, 1);
v_u_1030_ = lean_ctor_get(v_s_1027_, 2);
v_ringInst_1031_ = lean_ctor_get(v_s_1027_, 3);
v_semiringInst_1032_ = lean_ctor_get(v_s_1027_, 4);
v_charInst_x3f_1033_ = lean_ctor_get(v_s_1027_, 5);
v_addFn_x3f_1034_ = lean_ctor_get(v_s_1027_, 6);
v_mulFn_x3f_1035_ = lean_ctor_get(v_s_1027_, 7);
v_subFn_x3f_1036_ = lean_ctor_get(v_s_1027_, 8);
v_negFn_x3f_1037_ = lean_ctor_get(v_s_1027_, 9);
v_powFn_x3f_1038_ = lean_ctor_get(v_s_1027_, 10);
v_intCastFn_x3f_1039_ = lean_ctor_get(v_s_1027_, 11);
v_one_x3f_1040_ = lean_ctor_get(v_s_1027_, 13);
v_isSharedCheck_1048_ = !lean_is_exclusive(v_s_1027_);
if (v_isSharedCheck_1048_ == 0)
{
lean_object* v_unused_1049_; 
v_unused_1049_ = lean_ctor_get(v_s_1027_, 12);
lean_dec(v_unused_1049_);
v___x_1042_ = v_s_1027_;
v_isShared_1043_ = v_isSharedCheck_1048_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_one_x3f_1040_);
lean_inc(v_intCastFn_x3f_1039_);
lean_inc(v_powFn_x3f_1038_);
lean_inc(v_negFn_x3f_1037_);
lean_inc(v_subFn_x3f_1036_);
lean_inc(v_mulFn_x3f_1035_);
lean_inc(v_addFn_x3f_1034_);
lean_inc(v_charInst_x3f_1033_);
lean_inc(v_semiringInst_1032_);
lean_inc(v_ringInst_1031_);
lean_inc(v_u_1030_);
lean_inc(v_type_1029_);
lean_inc(v_id_1028_);
lean_dec(v_s_1027_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1048_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; lean_object* v___x_1046_; 
v___x_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1044_, 0, v_natCastFn_1026_);
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 12, v___x_1044_);
v___x_1046_ = v___x_1042_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 14, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_id_1028_);
lean_ctor_set(v_reuseFailAlloc_1047_, 1, v_type_1029_);
lean_ctor_set(v_reuseFailAlloc_1047_, 2, v_u_1030_);
lean_ctor_set(v_reuseFailAlloc_1047_, 3, v_ringInst_1031_);
lean_ctor_set(v_reuseFailAlloc_1047_, 4, v_semiringInst_1032_);
lean_ctor_set(v_reuseFailAlloc_1047_, 5, v_charInst_x3f_1033_);
lean_ctor_set(v_reuseFailAlloc_1047_, 6, v_addFn_x3f_1034_);
lean_ctor_set(v_reuseFailAlloc_1047_, 7, v_mulFn_x3f_1035_);
lean_ctor_set(v_reuseFailAlloc_1047_, 8, v_subFn_x3f_1036_);
lean_ctor_set(v_reuseFailAlloc_1047_, 9, v_negFn_x3f_1037_);
lean_ctor_set(v_reuseFailAlloc_1047_, 10, v_powFn_x3f_1038_);
lean_ctor_set(v_reuseFailAlloc_1047_, 11, v_intCastFn_x3f_1039_);
lean_ctor_set(v_reuseFailAlloc_1047_, 12, v___x_1044_);
lean_ctor_set(v_reuseFailAlloc_1047_, 13, v_one_x3f_1040_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__1(lean_object* v_toPure_1050_, lean_object* v_natCastFn_1051_, lean_object* v_____r_1052_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = lean_apply_2(v_toPure_1050_, lean_box(0), v_natCastFn_1051_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__2(lean_object* v_toPure_1054_, lean_object* v_modifyRing_1055_, lean_object* v_toBind_1056_, lean_object* v_natCastFn_1057_){
_start:
{
lean_object* v___f_1058_; lean_object* v___f_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
lean_inc_ref(v_natCastFn_1057_);
v___f_1058_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1058_, 0, v_natCastFn_1057_);
v___f_1059_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1059_, 0, v_toPure_1054_);
lean_closure_set(v___f_1059_, 1, v_natCastFn_1057_);
v___x_1060_ = lean_apply_1(v_modifyRing_1055_, v___f_1058_);
v___x_1061_ = lean_apply_4(v_toBind_1056_, lean_box(0), lean_box(0), v___x_1060_, v___f_1059_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__3(lean_object* v_toPure_1062_, lean_object* v_inst_1063_, lean_object* v_inst_1064_, lean_object* v_inst_1065_, lean_object* v_toBind_1066_, lean_object* v___f_1067_, lean_object* v_ring_1068_){
_start:
{
lean_object* v_natCastFn_x3f_1069_; 
v_natCastFn_x3f_1069_ = lean_ctor_get(v_ring_1068_, 12);
if (lean_obj_tag(v_natCastFn_x3f_1069_) == 1)
{
lean_object* v_val_1070_; lean_object* v___x_1071_; 
lean_inc_ref(v_natCastFn_x3f_1069_);
lean_dec_ref(v_ring_1068_);
lean_dec(v___f_1067_);
lean_dec(v_toBind_1066_);
lean_dec_ref(v_inst_1065_);
lean_dec_ref(v_inst_1064_);
lean_dec(v_inst_1063_);
v_val_1070_ = lean_ctor_get(v_natCastFn_x3f_1069_, 0);
lean_inc(v_val_1070_);
lean_dec_ref(v_natCastFn_x3f_1069_);
v___x_1071_ = lean_apply_2(v_toPure_1062_, lean_box(0), v_val_1070_);
return v___x_1071_;
}
else
{
lean_object* v_type_1072_; lean_object* v_u_1073_; lean_object* v_semiringInst_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
lean_dec(v_toPure_1062_);
v_type_1072_ = lean_ctor_get(v_ring_1068_, 1);
lean_inc_ref(v_type_1072_);
v_u_1073_ = lean_ctor_get(v_ring_1068_, 2);
lean_inc(v_u_1073_);
v_semiringInst_1074_ = lean_ctor_get(v_ring_1068_, 4);
lean_inc_ref(v_semiringInst_1074_);
lean_dec_ref(v_ring_1068_);
v___x_1075_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg(v_inst_1063_, v_inst_1064_, v_inst_1065_, v_u_1073_, v_type_1072_, v_semiringInst_1074_);
v___x_1076_ = lean_apply_4(v_toBind_1066_, lean_box(0), lean_box(0), v___x_1075_, v___f_1067_);
return v___x_1076_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg(lean_object* v_inst_1077_, lean_object* v_inst_1078_, lean_object* v_inst_1079_, lean_object* v_inst_1080_){
_start:
{
lean_object* v_toApplicative_1081_; lean_object* v_toBind_1082_; lean_object* v_getRing_1083_; lean_object* v_modifyRing_1084_; lean_object* v_toPure_1085_; lean_object* v___f_1086_; lean_object* v___f_1087_; lean_object* v___x_1088_; 
v_toApplicative_1081_ = lean_ctor_get(v_inst_1078_, 0);
v_toBind_1082_ = lean_ctor_get(v_inst_1078_, 1);
lean_inc_n(v_toBind_1082_, 3);
v_getRing_1083_ = lean_ctor_get(v_inst_1080_, 0);
lean_inc(v_getRing_1083_);
v_modifyRing_1084_ = lean_ctor_get(v_inst_1080_, 1);
lean_inc(v_modifyRing_1084_);
lean_dec_ref(v_inst_1080_);
v_toPure_1085_ = lean_ctor_get(v_toApplicative_1081_, 1);
lean_inc_n(v_toPure_1085_, 2);
v___f_1086_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1086_, 0, v_toPure_1085_);
lean_closure_set(v___f_1086_, 1, v_modifyRing_1084_);
lean_closure_set(v___f_1086_, 2, v_toBind_1082_);
v___f_1087_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__3), 7, 6);
lean_closure_set(v___f_1087_, 0, v_toPure_1085_);
lean_closure_set(v___f_1087_, 1, v_inst_1077_);
lean_closure_set(v___f_1087_, 2, v_inst_1078_);
lean_closure_set(v___f_1087_, 3, v_inst_1079_);
lean_closure_set(v___f_1087_, 4, v_toBind_1082_);
lean_closure_set(v___f_1087_, 5, v___f_1086_);
v___x_1088_ = lean_apply_4(v_toBind_1082_, lean_box(0), lean_box(0), v_getRing_1083_, v___f_1087_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn(lean_object* v_m_1089_, lean_object* v_inst_1090_, lean_object* v_inst_1091_, lean_object* v_inst_1092_, lean_object* v_inst_1093_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l_Lean_Meta_Sym_Arith_getNatCastFn___redArg(v_inst_1090_, v_inst_1091_, v_inst_1092_, v_inst_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__0(lean_object* v_invFn_1095_, lean_object* v_s_1096_){
_start:
{
lean_object* v_toRing_1097_; lean_object* v_semiringId_x3f_1098_; lean_object* v_commSemiringInst_1099_; lean_object* v_commRingInst_1100_; lean_object* v_noZeroDivInst_x3f_1101_; lean_object* v_fieldInst_x3f_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1110_; 
v_toRing_1097_ = lean_ctor_get(v_s_1096_, 0);
v_semiringId_x3f_1098_ = lean_ctor_get(v_s_1096_, 2);
v_commSemiringInst_1099_ = lean_ctor_get(v_s_1096_, 3);
v_commRingInst_1100_ = lean_ctor_get(v_s_1096_, 4);
v_noZeroDivInst_x3f_1101_ = lean_ctor_get(v_s_1096_, 5);
v_fieldInst_x3f_1102_ = lean_ctor_get(v_s_1096_, 6);
v_isSharedCheck_1110_ = !lean_is_exclusive(v_s_1096_);
if (v_isSharedCheck_1110_ == 0)
{
lean_object* v_unused_1111_; 
v_unused_1111_ = lean_ctor_get(v_s_1096_, 1);
lean_dec(v_unused_1111_);
v___x_1104_ = v_s_1096_;
v_isShared_1105_ = v_isSharedCheck_1110_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_fieldInst_x3f_1102_);
lean_inc(v_noZeroDivInst_x3f_1101_);
lean_inc(v_commRingInst_1100_);
lean_inc(v_commSemiringInst_1099_);
lean_inc(v_semiringId_x3f_1098_);
lean_inc(v_toRing_1097_);
lean_dec(v_s_1096_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1110_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1106_; lean_object* v___x_1108_; 
v___x_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1106_, 0, v_invFn_1095_);
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 1, v___x_1106_);
v___x_1108_ = v___x_1104_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_toRing_1097_);
lean_ctor_set(v_reuseFailAlloc_1109_, 1, v___x_1106_);
lean_ctor_set(v_reuseFailAlloc_1109_, 2, v_semiringId_x3f_1098_);
lean_ctor_set(v_reuseFailAlloc_1109_, 3, v_commSemiringInst_1099_);
lean_ctor_set(v_reuseFailAlloc_1109_, 4, v_commRingInst_1100_);
lean_ctor_set(v_reuseFailAlloc_1109_, 5, v_noZeroDivInst_x3f_1101_);
lean_ctor_set(v_reuseFailAlloc_1109_, 6, v_fieldInst_x3f_1102_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__1(lean_object* v_toPure_1112_, lean_object* v_invFn_1113_, lean_object* v_____r_1114_){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = lean_apply_2(v_toPure_1112_, lean_box(0), v_invFn_1113_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__2(lean_object* v_toPure_1116_, lean_object* v_modifyCommRing_1117_, lean_object* v_toBind_1118_, lean_object* v_invFn_1119_){
_start:
{
lean_object* v___f_1120_; lean_object* v___f_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; 
lean_inc_ref(v_invFn_1119_);
v___f_1120_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1120_, 0, v_invFn_1119_);
v___f_1121_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1121_, 0, v_toPure_1116_);
lean_closure_set(v___f_1121_, 1, v_invFn_1119_);
v___x_1122_ = lean_apply_1(v_modifyCommRing_1117_, v___f_1120_);
v___x_1123_ = lean_apply_4(v_toBind_1118_, lean_box(0), lean_box(0), v___x_1122_, v___f_1121_);
return v___x_1123_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__0(void){
_start:
{
lean_object* v___x_1124_; 
v___x_1124_ = lean_mk_string_unchecked("Field", 5, 5);
return v___x_1124_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_mk_string_unchecked("toInv", 5, 5);
return v___x_1125_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2(void){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1126_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__1, &l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__1_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__1);
v___x_1127_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__0, &l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__0_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__0);
v___x_1128_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__1);
v___x_1129_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg___lam__1___closed__0);
v___x_1130_ = l_Lean_Name_mkStr4(v___x_1129_, v___x_1128_, v___x_1127_, v___x_1126_);
return v___x_1130_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_mk_string_unchecked("Inv", 3, 3);
return v___x_1131_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__4(void){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3, &l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3);
v___x_1133_ = l_Lean_Name_mkStr1(v___x_1132_);
return v___x_1133_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__5(void){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_mk_string_unchecked("inv", 3, 3);
return v___x_1134_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__6(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1135_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__5, &l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__5_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__5);
v___x_1136_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3, &l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__3);
v___x_1137_ = l_Lean_Name_mkStr2(v___x_1136_, v___x_1135_);
return v___x_1137_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__7(void){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = lean_mk_string_unchecked("internal error: type is not a field", 35, 35);
return v___x_1138_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8(void){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__7, &l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__7_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__7);
v___x_1140_ = l_Lean_stringToMessageData(v___x_1139_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3(lean_object* v_toPure_1141_, lean_object* v_inst_1142_, lean_object* v_inst_1143_, lean_object* v_inst_1144_, lean_object* v_inst_1145_, lean_object* v_toBind_1146_, lean_object* v___f_1147_, lean_object* v_ring_1148_){
_start:
{
lean_object* v_fieldInst_x3f_1149_; 
v_fieldInst_x3f_1149_ = lean_ctor_get(v_ring_1148_, 6);
if (lean_obj_tag(v_fieldInst_x3f_1149_) == 1)
{
lean_object* v_invFn_x3f_1150_; 
lean_inc_ref(v_fieldInst_x3f_1149_);
v_invFn_x3f_1150_ = lean_ctor_get(v_ring_1148_, 1);
if (lean_obj_tag(v_invFn_x3f_1150_) == 1)
{
lean_object* v_val_1151_; lean_object* v___x_1152_; 
lean_inc_ref(v_invFn_x3f_1150_);
lean_dec_ref(v_fieldInst_x3f_1149_);
lean_dec_ref(v_ring_1148_);
lean_dec(v___f_1147_);
lean_dec(v_toBind_1146_);
lean_dec_ref(v_inst_1145_);
lean_dec_ref(v_inst_1144_);
lean_dec_ref(v_inst_1143_);
lean_dec(v_inst_1142_);
v_val_1151_ = lean_ctor_get(v_invFn_x3f_1150_, 0);
lean_inc(v_val_1151_);
lean_dec_ref(v_invFn_x3f_1150_);
v___x_1152_ = lean_apply_2(v_toPure_1141_, lean_box(0), v_val_1151_);
return v___x_1152_;
}
else
{
lean_object* v_toRing_1153_; lean_object* v_val_1154_; lean_object* v_type_1155_; lean_object* v_u_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v_expectedInst_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
lean_dec(v_toPure_1141_);
v_toRing_1153_ = lean_ctor_get(v_ring_1148_, 0);
lean_inc_ref(v_toRing_1153_);
lean_dec_ref(v_ring_1148_);
v_val_1154_ = lean_ctor_get(v_fieldInst_x3f_1149_, 0);
lean_inc(v_val_1154_);
lean_dec_ref(v_fieldInst_x3f_1149_);
v_type_1155_ = lean_ctor_get(v_toRing_1153_, 1);
lean_inc_ref_n(v_type_1155_, 2);
v_u_1156_ = lean_ctor_get(v_toRing_1153_, 2);
lean_inc_n(v_u_1156_, 2);
lean_dec_ref(v_toRing_1153_);
v___x_1157_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2, &l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__2);
v___x_1158_ = lean_box(0);
v___x_1159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1159_, 0, v_u_1156_);
lean_ctor_set(v___x_1159_, 1, v___x_1158_);
v___x_1160_ = l_Lean_mkConst(v___x_1157_, v___x_1159_);
v_expectedInst_1161_ = l_Lean_mkAppB(v___x_1160_, v_type_1155_, v_val_1154_);
v___x_1162_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__4, &l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__4_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__4);
v___x_1163_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__6, &l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__6_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__6);
v___x_1164_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___redArg(v_inst_1142_, v_inst_1143_, v_inst_1144_, v_inst_1145_, v_type_1155_, v_u_1156_, v___x_1162_, v___x_1163_, v_expectedInst_1161_);
v___x_1165_ = lean_apply_4(v_toBind_1146_, lean_box(0), lean_box(0), v___x_1164_, v___f_1147_);
return v___x_1165_;
}
}
else
{
lean_object* v_toRing_1166_; lean_object* v_type_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
lean_dec(v___f_1147_);
lean_dec(v_toBind_1146_);
lean_dec_ref(v_inst_1145_);
lean_dec(v_inst_1142_);
lean_dec(v_toPure_1141_);
v_toRing_1166_ = lean_ctor_get(v_ring_1148_, 0);
lean_inc_ref(v_toRing_1166_);
lean_dec_ref(v_ring_1148_);
v_type_1167_ = lean_ctor_get(v_toRing_1166_, 1);
lean_inc_ref(v_type_1167_);
lean_dec_ref(v_toRing_1166_);
v___x_1168_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8, &l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3___closed__8);
v___x_1169_ = l_Lean_indentExpr(v_type_1167_);
v___x_1170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1168_);
lean_ctor_set(v___x_1170_, 1, v___x_1169_);
v___x_1171_ = l_Lean_throwError___redArg(v_inst_1144_, v_inst_1143_, v___x_1170_);
return v___x_1171_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___redArg(lean_object* v_inst_1172_, lean_object* v_inst_1173_, lean_object* v_inst_1174_, lean_object* v_inst_1175_, lean_object* v_inst_1176_){
_start:
{
lean_object* v_toApplicative_1177_; lean_object* v_toBind_1178_; lean_object* v_getCommRing_1179_; lean_object* v_modifyCommRing_1180_; lean_object* v_toPure_1181_; lean_object* v___f_1182_; lean_object* v___f_1183_; lean_object* v___x_1184_; 
v_toApplicative_1177_ = lean_ctor_get(v_inst_1174_, 0);
v_toBind_1178_ = lean_ctor_get(v_inst_1174_, 1);
lean_inc_n(v_toBind_1178_, 3);
v_getCommRing_1179_ = lean_ctor_get(v_inst_1176_, 0);
lean_inc(v_getCommRing_1179_);
v_modifyCommRing_1180_ = lean_ctor_get(v_inst_1176_, 1);
lean_inc(v_modifyCommRing_1180_);
lean_dec_ref(v_inst_1176_);
v_toPure_1181_ = lean_ctor_get(v_toApplicative_1177_, 1);
lean_inc_n(v_toPure_1181_, 2);
v___f_1182_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1182_, 0, v_toPure_1181_);
lean_closure_set(v___f_1182_, 1, v_modifyCommRing_1180_);
lean_closure_set(v___f_1182_, 2, v_toBind_1178_);
v___f_1183_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getInvFn___redArg___lam__3), 8, 7);
lean_closure_set(v___f_1183_, 0, v_toPure_1181_);
lean_closure_set(v___f_1183_, 1, v_inst_1172_);
lean_closure_set(v___f_1183_, 2, v_inst_1173_);
lean_closure_set(v___f_1183_, 3, v_inst_1174_);
lean_closure_set(v___f_1183_, 4, v_inst_1175_);
lean_closure_set(v___f_1183_, 5, v_toBind_1178_);
lean_closure_set(v___f_1183_, 6, v___f_1182_);
v___x_1184_ = lean_apply_4(v_toBind_1178_, lean_box(0), lean_box(0), v_getCommRing_1179_, v___f_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn(lean_object* v_m_1185_, lean_object* v_inst_1186_, lean_object* v_inst_1187_, lean_object* v_inst_1188_, lean_object* v_inst_1189_, lean_object* v_inst_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l_Lean_Meta_Sym_Arith_getInvFn___redArg(v_inst_1186_, v_inst_1187_, v_inst_1188_, v_inst_1189_, v_inst_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__0(lean_object* v_addFn_1192_, lean_object* v_s_1193_){
_start:
{
lean_object* v_id_1194_; lean_object* v_type_1195_; lean_object* v_u_1196_; lean_object* v_semiringInst_1197_; lean_object* v_mulFn_x3f_1198_; lean_object* v_powFn_x3f_1199_; lean_object* v_natCastFn_x3f_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1208_; 
v_id_1194_ = lean_ctor_get(v_s_1193_, 0);
v_type_1195_ = lean_ctor_get(v_s_1193_, 1);
v_u_1196_ = lean_ctor_get(v_s_1193_, 2);
v_semiringInst_1197_ = lean_ctor_get(v_s_1193_, 3);
v_mulFn_x3f_1198_ = lean_ctor_get(v_s_1193_, 5);
v_powFn_x3f_1199_ = lean_ctor_get(v_s_1193_, 6);
v_natCastFn_x3f_1200_ = lean_ctor_get(v_s_1193_, 7);
v_isSharedCheck_1208_ = !lean_is_exclusive(v_s_1193_);
if (v_isSharedCheck_1208_ == 0)
{
lean_object* v_unused_1209_; 
v_unused_1209_ = lean_ctor_get(v_s_1193_, 4);
lean_dec(v_unused_1209_);
v___x_1202_ = v_s_1193_;
v_isShared_1203_ = v_isSharedCheck_1208_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_natCastFn_x3f_1200_);
lean_inc(v_powFn_x3f_1199_);
lean_inc(v_mulFn_x3f_1198_);
lean_inc(v_semiringInst_1197_);
lean_inc(v_u_1196_);
lean_inc(v_type_1195_);
lean_inc(v_id_1194_);
lean_dec(v_s_1193_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1208_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1204_; lean_object* v___x_1206_; 
v___x_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1204_, 0, v_addFn_1192_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 4, v___x_1204_);
v___x_1206_ = v___x_1202_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_id_1194_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v_type_1195_);
lean_ctor_set(v_reuseFailAlloc_1207_, 2, v_u_1196_);
lean_ctor_set(v_reuseFailAlloc_1207_, 3, v_semiringInst_1197_);
lean_ctor_set(v_reuseFailAlloc_1207_, 4, v___x_1204_);
lean_ctor_set(v_reuseFailAlloc_1207_, 5, v_mulFn_x3f_1198_);
lean_ctor_set(v_reuseFailAlloc_1207_, 6, v_powFn_x3f_1199_);
lean_ctor_set(v_reuseFailAlloc_1207_, 7, v_natCastFn_x3f_1200_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__2(lean_object* v_toPure_1210_, lean_object* v_modifySemiring_1211_, lean_object* v_toBind_1212_, lean_object* v_addFn_1213_){
_start:
{
lean_object* v___f_1214_; lean_object* v___f_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
lean_inc_ref(v_addFn_1213_);
v___f_1214_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1214_, 0, v_addFn_1213_);
v___f_1215_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1215_, 0, v_toPure_1210_);
lean_closure_set(v___f_1215_, 1, v_addFn_1213_);
v___x_1216_ = lean_apply_1(v_modifySemiring_1211_, v___f_1214_);
v___x_1217_ = lean_apply_4(v_toBind_1212_, lean_box(0), lean_box(0), v___x_1216_, v___f_1215_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__1(lean_object* v_toPure_1218_, lean_object* v_inst_1219_, lean_object* v_inst_1220_, lean_object* v_inst_1221_, lean_object* v_inst_1222_, lean_object* v_toBind_1223_, lean_object* v___f_1224_, lean_object* v_sr_1225_){
_start:
{
lean_object* v_addFn_x3f_1226_; 
v_addFn_x3f_1226_ = lean_ctor_get(v_sr_1225_, 4);
if (lean_obj_tag(v_addFn_x3f_1226_) == 1)
{
lean_object* v_val_1227_; lean_object* v___x_1228_; 
lean_inc_ref(v_addFn_x3f_1226_);
lean_dec_ref(v_sr_1225_);
lean_dec(v___f_1224_);
lean_dec(v_toBind_1223_);
lean_dec_ref(v_inst_1222_);
lean_dec_ref(v_inst_1221_);
lean_dec_ref(v_inst_1220_);
lean_dec(v_inst_1219_);
v_val_1227_ = lean_ctor_get(v_addFn_x3f_1226_, 0);
lean_inc(v_val_1227_);
lean_dec_ref(v_addFn_x3f_1226_);
v___x_1228_ = lean_apply_2(v_toPure_1218_, lean_box(0), v_val_1227_);
return v___x_1228_;
}
else
{
lean_object* v_type_1229_; lean_object* v_u_1230_; lean_object* v_semiringInst_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v_expectedInst_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
lean_dec(v_toPure_1218_);
v_type_1229_ = lean_ctor_get(v_sr_1225_, 1);
lean_inc_ref_n(v_type_1229_, 3);
v_u_1230_ = lean_ctor_get(v_sr_1225_, 2);
lean_inc_n(v_u_1230_, 2);
v_semiringInst_1231_ = lean_ctor_get(v_sr_1225_, 3);
lean_inc_ref(v_semiringInst_1231_);
lean_dec_ref(v_sr_1225_);
v___x_1232_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__1);
v___x_1233_ = lean_box(0);
v___x_1234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1234_, 0, v_u_1230_);
lean_ctor_set(v___x_1234_, 1, v___x_1233_);
lean_inc_ref(v___x_1234_);
v___x_1235_ = l_Lean_mkConst(v___x_1232_, v___x_1234_);
v___x_1236_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__3);
v___x_1237_ = l_Lean_mkConst(v___x_1236_, v___x_1234_);
v___x_1238_ = l_Lean_mkAppB(v___x_1237_, v_type_1229_, v_semiringInst_1231_);
v_expectedInst_1239_ = l_Lean_mkAppB(v___x_1235_, v_type_1229_, v___x_1238_);
v___x_1240_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__5);
v___x_1241_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7, &l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7_once, _init_l_Lean_Meta_Sym_Arith_getAddFn___redArg___lam__3___closed__7);
v___x_1242_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_1219_, v_inst_1220_, v_inst_1221_, v_inst_1222_, v_type_1229_, v_u_1230_, v___x_1240_, v___x_1241_, v_expectedInst_1239_);
v___x_1243_ = lean_apply_4(v_toBind_1223_, lean_box(0), lean_box(0), v___x_1242_, v___f_1224_);
return v___x_1243_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg(lean_object* v_inst_1244_, lean_object* v_inst_1245_, lean_object* v_inst_1246_, lean_object* v_inst_1247_, lean_object* v_inst_1248_){
_start:
{
lean_object* v_toApplicative_1249_; lean_object* v_toBind_1250_; lean_object* v_getSemiring_1251_; lean_object* v_modifySemiring_1252_; lean_object* v_toPure_1253_; lean_object* v___f_1254_; lean_object* v___f_1255_; lean_object* v___x_1256_; 
v_toApplicative_1249_ = lean_ctor_get(v_inst_1246_, 0);
v_toBind_1250_ = lean_ctor_get(v_inst_1246_, 1);
lean_inc_n(v_toBind_1250_, 3);
v_getSemiring_1251_ = lean_ctor_get(v_inst_1248_, 0);
lean_inc(v_getSemiring_1251_);
v_modifySemiring_1252_ = lean_ctor_get(v_inst_1248_, 1);
lean_inc(v_modifySemiring_1252_);
lean_dec_ref(v_inst_1248_);
v_toPure_1253_ = lean_ctor_get(v_toApplicative_1249_, 1);
lean_inc_n(v_toPure_1253_, 2);
v___f_1254_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1254_, 0, v_toPure_1253_);
lean_closure_set(v___f_1254_, 1, v_modifySemiring_1252_);
lean_closure_set(v___f_1254_, 2, v_toBind_1250_);
v___f_1255_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg___lam__1), 8, 7);
lean_closure_set(v___f_1255_, 0, v_toPure_1253_);
lean_closure_set(v___f_1255_, 1, v_inst_1244_);
lean_closure_set(v___f_1255_, 2, v_inst_1245_);
lean_closure_set(v___f_1255_, 3, v_inst_1246_);
lean_closure_set(v___f_1255_, 4, v_inst_1247_);
lean_closure_set(v___f_1255_, 5, v_toBind_1250_);
lean_closure_set(v___f_1255_, 6, v___f_1254_);
v___x_1256_ = lean_apply_4(v_toBind_1250_, lean_box(0), lean_box(0), v_getSemiring_1251_, v___f_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn_x27(lean_object* v_m_1257_, lean_object* v_inst_1258_, lean_object* v_inst_1259_, lean_object* v_inst_1260_, lean_object* v_inst_1261_, lean_object* v_inst_1262_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Lean_Meta_Sym_Arith_getAddFn_x27___redArg(v_inst_1258_, v_inst_1259_, v_inst_1260_, v_inst_1261_, v_inst_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__0(lean_object* v_mulFn_1264_, lean_object* v_s_1265_){
_start:
{
lean_object* v_id_1266_; lean_object* v_type_1267_; lean_object* v_u_1268_; lean_object* v_semiringInst_1269_; lean_object* v_addFn_x3f_1270_; lean_object* v_powFn_x3f_1271_; lean_object* v_natCastFn_x3f_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1280_; 
v_id_1266_ = lean_ctor_get(v_s_1265_, 0);
v_type_1267_ = lean_ctor_get(v_s_1265_, 1);
v_u_1268_ = lean_ctor_get(v_s_1265_, 2);
v_semiringInst_1269_ = lean_ctor_get(v_s_1265_, 3);
v_addFn_x3f_1270_ = lean_ctor_get(v_s_1265_, 4);
v_powFn_x3f_1271_ = lean_ctor_get(v_s_1265_, 6);
v_natCastFn_x3f_1272_ = lean_ctor_get(v_s_1265_, 7);
v_isSharedCheck_1280_ = !lean_is_exclusive(v_s_1265_);
if (v_isSharedCheck_1280_ == 0)
{
lean_object* v_unused_1281_; 
v_unused_1281_ = lean_ctor_get(v_s_1265_, 5);
lean_dec(v_unused_1281_);
v___x_1274_ = v_s_1265_;
v_isShared_1275_ = v_isSharedCheck_1280_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_natCastFn_x3f_1272_);
lean_inc(v_powFn_x3f_1271_);
lean_inc(v_addFn_x3f_1270_);
lean_inc(v_semiringInst_1269_);
lean_inc(v_u_1268_);
lean_inc(v_type_1267_);
lean_inc(v_id_1266_);
lean_dec(v_s_1265_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1280_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1276_, 0, v_mulFn_1264_);
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 5, v___x_1276_);
v___x_1278_ = v___x_1274_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v_id_1266_);
lean_ctor_set(v_reuseFailAlloc_1279_, 1, v_type_1267_);
lean_ctor_set(v_reuseFailAlloc_1279_, 2, v_u_1268_);
lean_ctor_set(v_reuseFailAlloc_1279_, 3, v_semiringInst_1269_);
lean_ctor_set(v_reuseFailAlloc_1279_, 4, v_addFn_x3f_1270_);
lean_ctor_set(v_reuseFailAlloc_1279_, 5, v___x_1276_);
lean_ctor_set(v_reuseFailAlloc_1279_, 6, v_powFn_x3f_1271_);
lean_ctor_set(v_reuseFailAlloc_1279_, 7, v_natCastFn_x3f_1272_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__2(lean_object* v_toPure_1282_, lean_object* v_modifySemiring_1283_, lean_object* v_toBind_1284_, lean_object* v_mulFn_1285_){
_start:
{
lean_object* v___f_1286_; lean_object* v___f_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
lean_inc_ref(v_mulFn_1285_);
v___f_1286_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1286_, 0, v_mulFn_1285_);
v___f_1287_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1287_, 0, v_toPure_1282_);
lean_closure_set(v___f_1287_, 1, v_mulFn_1285_);
v___x_1288_ = lean_apply_1(v_modifySemiring_1283_, v___f_1286_);
v___x_1289_ = lean_apply_4(v_toBind_1284_, lean_box(0), lean_box(0), v___x_1288_, v___f_1287_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__1(lean_object* v_toPure_1290_, lean_object* v_inst_1291_, lean_object* v_inst_1292_, lean_object* v_inst_1293_, lean_object* v_inst_1294_, lean_object* v_toBind_1295_, lean_object* v___f_1296_, lean_object* v_sr_1297_){
_start:
{
lean_object* v_mulFn_x3f_1298_; 
v_mulFn_x3f_1298_ = lean_ctor_get(v_sr_1297_, 5);
if (lean_obj_tag(v_mulFn_x3f_1298_) == 1)
{
lean_object* v_val_1299_; lean_object* v___x_1300_; 
lean_inc_ref(v_mulFn_x3f_1298_);
lean_dec_ref(v_sr_1297_);
lean_dec(v___f_1296_);
lean_dec(v_toBind_1295_);
lean_dec_ref(v_inst_1294_);
lean_dec_ref(v_inst_1293_);
lean_dec_ref(v_inst_1292_);
lean_dec(v_inst_1291_);
v_val_1299_ = lean_ctor_get(v_mulFn_x3f_1298_, 0);
lean_inc(v_val_1299_);
lean_dec_ref(v_mulFn_x3f_1298_);
v___x_1300_ = lean_apply_2(v_toPure_1290_, lean_box(0), v_val_1299_);
return v___x_1300_;
}
else
{
lean_object* v_type_1301_; lean_object* v_u_1302_; lean_object* v_semiringInst_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v_expectedInst_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
lean_dec(v_toPure_1290_);
v_type_1301_ = lean_ctor_get(v_sr_1297_, 1);
lean_inc_ref_n(v_type_1301_, 3);
v_u_1302_ = lean_ctor_get(v_sr_1297_, 2);
lean_inc_n(v_u_1302_, 2);
v_semiringInst_1303_ = lean_ctor_get(v_sr_1297_, 3);
lean_inc_ref(v_semiringInst_1303_);
lean_dec_ref(v_sr_1297_);
v___x_1304_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__1);
v___x_1305_ = lean_box(0);
v___x_1306_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1306_, 0, v_u_1302_);
lean_ctor_set(v___x_1306_, 1, v___x_1305_);
lean_inc_ref(v___x_1306_);
v___x_1307_ = l_Lean_mkConst(v___x_1304_, v___x_1306_);
v___x_1308_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__3);
v___x_1309_ = l_Lean_mkConst(v___x_1308_, v___x_1306_);
v___x_1310_ = l_Lean_mkAppB(v___x_1309_, v_type_1301_, v_semiringInst_1303_);
v_expectedInst_1311_ = l_Lean_mkAppB(v___x_1307_, v_type_1301_, v___x_1310_);
v___x_1312_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__5);
v___x_1313_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7, &l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7_once, _init_l_Lean_Meta_Sym_Arith_getMulFn___redArg___lam__3___closed__7);
v___x_1314_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___redArg(v_inst_1291_, v_inst_1292_, v_inst_1293_, v_inst_1294_, v_type_1301_, v_u_1302_, v___x_1312_, v___x_1313_, v_expectedInst_1311_);
v___x_1315_ = lean_apply_4(v_toBind_1295_, lean_box(0), lean_box(0), v___x_1314_, v___f_1296_);
return v___x_1315_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg(lean_object* v_inst_1316_, lean_object* v_inst_1317_, lean_object* v_inst_1318_, lean_object* v_inst_1319_, lean_object* v_inst_1320_){
_start:
{
lean_object* v_toApplicative_1321_; lean_object* v_toBind_1322_; lean_object* v_getSemiring_1323_; lean_object* v_modifySemiring_1324_; lean_object* v_toPure_1325_; lean_object* v___f_1326_; lean_object* v___f_1327_; lean_object* v___x_1328_; 
v_toApplicative_1321_ = lean_ctor_get(v_inst_1318_, 0);
v_toBind_1322_ = lean_ctor_get(v_inst_1318_, 1);
lean_inc_n(v_toBind_1322_, 3);
v_getSemiring_1323_ = lean_ctor_get(v_inst_1320_, 0);
lean_inc(v_getSemiring_1323_);
v_modifySemiring_1324_ = lean_ctor_get(v_inst_1320_, 1);
lean_inc(v_modifySemiring_1324_);
lean_dec_ref(v_inst_1320_);
v_toPure_1325_ = lean_ctor_get(v_toApplicative_1321_, 1);
lean_inc_n(v_toPure_1325_, 2);
v___f_1326_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1326_, 0, v_toPure_1325_);
lean_closure_set(v___f_1326_, 1, v_modifySemiring_1324_);
lean_closure_set(v___f_1326_, 2, v_toBind_1322_);
v___f_1327_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg___lam__1), 8, 7);
lean_closure_set(v___f_1327_, 0, v_toPure_1325_);
lean_closure_set(v___f_1327_, 1, v_inst_1316_);
lean_closure_set(v___f_1327_, 2, v_inst_1317_);
lean_closure_set(v___f_1327_, 3, v_inst_1318_);
lean_closure_set(v___f_1327_, 4, v_inst_1319_);
lean_closure_set(v___f_1327_, 5, v_toBind_1322_);
lean_closure_set(v___f_1327_, 6, v___f_1326_);
v___x_1328_ = lean_apply_4(v_toBind_1322_, lean_box(0), lean_box(0), v_getSemiring_1323_, v___f_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn_x27(lean_object* v_m_1329_, lean_object* v_inst_1330_, lean_object* v_inst_1331_, lean_object* v_inst_1332_, lean_object* v_inst_1333_, lean_object* v_inst_1334_){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = l_Lean_Meta_Sym_Arith_getMulFn_x27___redArg(v_inst_1330_, v_inst_1331_, v_inst_1332_, v_inst_1333_, v_inst_1334_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__0(lean_object* v_powFn_1336_, lean_object* v_s_1337_){
_start:
{
lean_object* v_id_1338_; lean_object* v_type_1339_; lean_object* v_u_1340_; lean_object* v_semiringInst_1341_; lean_object* v_addFn_x3f_1342_; lean_object* v_mulFn_x3f_1343_; lean_object* v_natCastFn_x3f_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1352_; 
v_id_1338_ = lean_ctor_get(v_s_1337_, 0);
v_type_1339_ = lean_ctor_get(v_s_1337_, 1);
v_u_1340_ = lean_ctor_get(v_s_1337_, 2);
v_semiringInst_1341_ = lean_ctor_get(v_s_1337_, 3);
v_addFn_x3f_1342_ = lean_ctor_get(v_s_1337_, 4);
v_mulFn_x3f_1343_ = lean_ctor_get(v_s_1337_, 5);
v_natCastFn_x3f_1344_ = lean_ctor_get(v_s_1337_, 7);
v_isSharedCheck_1352_ = !lean_is_exclusive(v_s_1337_);
if (v_isSharedCheck_1352_ == 0)
{
lean_object* v_unused_1353_; 
v_unused_1353_ = lean_ctor_get(v_s_1337_, 6);
lean_dec(v_unused_1353_);
v___x_1346_ = v_s_1337_;
v_isShared_1347_ = v_isSharedCheck_1352_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_natCastFn_x3f_1344_);
lean_inc(v_mulFn_x3f_1343_);
lean_inc(v_addFn_x3f_1342_);
lean_inc(v_semiringInst_1341_);
lean_inc(v_u_1340_);
lean_inc(v_type_1339_);
lean_inc(v_id_1338_);
lean_dec(v_s_1337_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1352_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1348_; lean_object* v___x_1350_; 
v___x_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1348_, 0, v_powFn_1336_);
if (v_isShared_1347_ == 0)
{
lean_ctor_set(v___x_1346_, 6, v___x_1348_);
v___x_1350_ = v___x_1346_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_id_1338_);
lean_ctor_set(v_reuseFailAlloc_1351_, 1, v_type_1339_);
lean_ctor_set(v_reuseFailAlloc_1351_, 2, v_u_1340_);
lean_ctor_set(v_reuseFailAlloc_1351_, 3, v_semiringInst_1341_);
lean_ctor_set(v_reuseFailAlloc_1351_, 4, v_addFn_x3f_1342_);
lean_ctor_set(v_reuseFailAlloc_1351_, 5, v_mulFn_x3f_1343_);
lean_ctor_set(v_reuseFailAlloc_1351_, 6, v___x_1348_);
lean_ctor_set(v_reuseFailAlloc_1351_, 7, v_natCastFn_x3f_1344_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
return v___x_1350_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__2(lean_object* v_toPure_1354_, lean_object* v_modifySemiring_1355_, lean_object* v_toBind_1356_, lean_object* v_powFn_1357_){
_start:
{
lean_object* v___f_1358_; lean_object* v___f_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
lean_inc_ref(v_powFn_1357_);
v___f_1358_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1358_, 0, v_powFn_1357_);
v___f_1359_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1359_, 0, v_toPure_1354_);
lean_closure_set(v___f_1359_, 1, v_powFn_1357_);
v___x_1360_ = lean_apply_1(v_modifySemiring_1355_, v___f_1358_);
v___x_1361_ = lean_apply_4(v_toBind_1356_, lean_box(0), lean_box(0), v___x_1360_, v___f_1359_);
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__1(lean_object* v_toPure_1362_, lean_object* v_inst_1363_, lean_object* v_inst_1364_, lean_object* v_inst_1365_, lean_object* v_inst_1366_, lean_object* v_toBind_1367_, lean_object* v___f_1368_, lean_object* v_sr_1369_){
_start:
{
lean_object* v_powFn_x3f_1370_; 
v_powFn_x3f_1370_ = lean_ctor_get(v_sr_1369_, 6);
if (lean_obj_tag(v_powFn_x3f_1370_) == 1)
{
lean_object* v_val_1371_; lean_object* v___x_1372_; 
lean_inc_ref(v_powFn_x3f_1370_);
lean_dec_ref(v_sr_1369_);
lean_dec(v___f_1368_);
lean_dec(v_toBind_1367_);
lean_dec_ref(v_inst_1366_);
lean_dec_ref(v_inst_1365_);
lean_dec_ref(v_inst_1364_);
lean_dec(v_inst_1363_);
v_val_1371_ = lean_ctor_get(v_powFn_x3f_1370_, 0);
lean_inc(v_val_1371_);
lean_dec_ref(v_powFn_x3f_1370_);
v___x_1372_ = lean_apply_2(v_toPure_1362_, lean_box(0), v_val_1371_);
return v___x_1372_;
}
else
{
lean_object* v_type_1373_; lean_object* v_u_1374_; lean_object* v_semiringInst_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
lean_dec(v_toPure_1362_);
v_type_1373_ = lean_ctor_get(v_sr_1369_, 1);
lean_inc_ref(v_type_1373_);
v_u_1374_ = lean_ctor_get(v_sr_1369_, 2);
lean_inc(v_u_1374_);
v_semiringInst_1375_ = lean_ctor_get(v_sr_1369_, 3);
lean_inc_ref(v_semiringInst_1375_);
lean_dec_ref(v_sr_1369_);
v___x_1376_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___redArg(v_inst_1363_, v_inst_1364_, v_inst_1365_, v_inst_1366_, v_u_1374_, v_type_1373_, v_semiringInst_1375_);
v___x_1377_ = lean_apply_4(v_toBind_1367_, lean_box(0), lean_box(0), v___x_1376_, v___f_1368_);
return v___x_1377_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg(lean_object* v_inst_1378_, lean_object* v_inst_1379_, lean_object* v_inst_1380_, lean_object* v_inst_1381_, lean_object* v_inst_1382_){
_start:
{
lean_object* v_toApplicative_1383_; lean_object* v_toBind_1384_; lean_object* v_getSemiring_1385_; lean_object* v_modifySemiring_1386_; lean_object* v_toPure_1387_; lean_object* v___f_1388_; lean_object* v___f_1389_; lean_object* v___x_1390_; 
v_toApplicative_1383_ = lean_ctor_get(v_inst_1380_, 0);
v_toBind_1384_ = lean_ctor_get(v_inst_1380_, 1);
lean_inc_n(v_toBind_1384_, 3);
v_getSemiring_1385_ = lean_ctor_get(v_inst_1382_, 0);
lean_inc(v_getSemiring_1385_);
v_modifySemiring_1386_ = lean_ctor_get(v_inst_1382_, 1);
lean_inc(v_modifySemiring_1386_);
lean_dec_ref(v_inst_1382_);
v_toPure_1387_ = lean_ctor_get(v_toApplicative_1383_, 1);
lean_inc_n(v_toPure_1387_, 2);
v___f_1388_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1388_, 0, v_toPure_1387_);
lean_closure_set(v___f_1388_, 1, v_modifySemiring_1386_);
lean_closure_set(v___f_1388_, 2, v_toBind_1384_);
v___f_1389_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg___lam__1), 8, 7);
lean_closure_set(v___f_1389_, 0, v_toPure_1387_);
lean_closure_set(v___f_1389_, 1, v_inst_1378_);
lean_closure_set(v___f_1389_, 2, v_inst_1379_);
lean_closure_set(v___f_1389_, 3, v_inst_1380_);
lean_closure_set(v___f_1389_, 4, v_inst_1381_);
lean_closure_set(v___f_1389_, 5, v_toBind_1384_);
lean_closure_set(v___f_1389_, 6, v___f_1388_);
v___x_1390_ = lean_apply_4(v_toBind_1384_, lean_box(0), lean_box(0), v_getSemiring_1385_, v___f_1389_);
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn_x27(lean_object* v_m_1391_, lean_object* v_inst_1392_, lean_object* v_inst_1393_, lean_object* v_inst_1394_, lean_object* v_inst_1395_, lean_object* v_inst_1396_){
_start:
{
lean_object* v___x_1397_; 
v___x_1397_ = l_Lean_Meta_Sym_Arith_getPowFn_x27___redArg(v_inst_1392_, v_inst_1393_, v_inst_1394_, v_inst_1395_, v_inst_1396_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__0(lean_object* v_natCastFn_1398_, lean_object* v_s_1399_){
_start:
{
lean_object* v_id_1400_; lean_object* v_type_1401_; lean_object* v_u_1402_; lean_object* v_semiringInst_1403_; lean_object* v_addFn_x3f_1404_; lean_object* v_mulFn_x3f_1405_; lean_object* v_powFn_x3f_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1414_; 
v_id_1400_ = lean_ctor_get(v_s_1399_, 0);
v_type_1401_ = lean_ctor_get(v_s_1399_, 1);
v_u_1402_ = lean_ctor_get(v_s_1399_, 2);
v_semiringInst_1403_ = lean_ctor_get(v_s_1399_, 3);
v_addFn_x3f_1404_ = lean_ctor_get(v_s_1399_, 4);
v_mulFn_x3f_1405_ = lean_ctor_get(v_s_1399_, 5);
v_powFn_x3f_1406_ = lean_ctor_get(v_s_1399_, 6);
v_isSharedCheck_1414_ = !lean_is_exclusive(v_s_1399_);
if (v_isSharedCheck_1414_ == 0)
{
lean_object* v_unused_1415_; 
v_unused_1415_ = lean_ctor_get(v_s_1399_, 7);
lean_dec(v_unused_1415_);
v___x_1408_ = v_s_1399_;
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_powFn_x3f_1406_);
lean_inc(v_mulFn_x3f_1405_);
lean_inc(v_addFn_x3f_1404_);
lean_inc(v_semiringInst_1403_);
lean_inc(v_u_1402_);
lean_inc(v_type_1401_);
lean_inc(v_id_1400_);
lean_dec(v_s_1399_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1410_; lean_object* v___x_1412_; 
v___x_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1410_, 0, v_natCastFn_1398_);
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 7, v___x_1410_);
v___x_1412_ = v___x_1408_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_id_1400_);
lean_ctor_set(v_reuseFailAlloc_1413_, 1, v_type_1401_);
lean_ctor_set(v_reuseFailAlloc_1413_, 2, v_u_1402_);
lean_ctor_set(v_reuseFailAlloc_1413_, 3, v_semiringInst_1403_);
lean_ctor_set(v_reuseFailAlloc_1413_, 4, v_addFn_x3f_1404_);
lean_ctor_set(v_reuseFailAlloc_1413_, 5, v_mulFn_x3f_1405_);
lean_ctor_set(v_reuseFailAlloc_1413_, 6, v_powFn_x3f_1406_);
lean_ctor_set(v_reuseFailAlloc_1413_, 7, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__2(lean_object* v_toPure_1416_, lean_object* v_modifySemiring_1417_, lean_object* v_toBind_1418_, lean_object* v_natCastFn_1419_){
_start:
{
lean_object* v___f_1420_; lean_object* v___f_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
lean_inc_ref(v_natCastFn_1419_);
v___f_1420_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1420_, 0, v_natCastFn_1419_);
v___f_1421_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1421_, 0, v_toPure_1416_);
lean_closure_set(v___f_1421_, 1, v_natCastFn_1419_);
v___x_1422_ = lean_apply_1(v_modifySemiring_1417_, v___f_1420_);
v___x_1423_ = lean_apply_4(v_toBind_1418_, lean_box(0), lean_box(0), v___x_1422_, v___f_1421_);
return v___x_1423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__1(lean_object* v_toPure_1424_, lean_object* v_inst_1425_, lean_object* v_inst_1426_, lean_object* v_inst_1427_, lean_object* v_toBind_1428_, lean_object* v___f_1429_, lean_object* v_sr_1430_){
_start:
{
lean_object* v_natCastFn_x3f_1431_; 
v_natCastFn_x3f_1431_ = lean_ctor_get(v_sr_1430_, 7);
if (lean_obj_tag(v_natCastFn_x3f_1431_) == 1)
{
lean_object* v_val_1432_; lean_object* v___x_1433_; 
lean_inc_ref(v_natCastFn_x3f_1431_);
lean_dec_ref(v_sr_1430_);
lean_dec(v___f_1429_);
lean_dec(v_toBind_1428_);
lean_dec_ref(v_inst_1427_);
lean_dec_ref(v_inst_1426_);
lean_dec(v_inst_1425_);
v_val_1432_ = lean_ctor_get(v_natCastFn_x3f_1431_, 0);
lean_inc(v_val_1432_);
lean_dec_ref(v_natCastFn_x3f_1431_);
v___x_1433_ = lean_apply_2(v_toPure_1424_, lean_box(0), v_val_1432_);
return v___x_1433_;
}
else
{
lean_object* v_type_1434_; lean_object* v_u_1435_; lean_object* v_semiringInst_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
lean_dec(v_toPure_1424_);
v_type_1434_ = lean_ctor_get(v_sr_1430_, 1);
lean_inc_ref(v_type_1434_);
v_u_1435_ = lean_ctor_get(v_sr_1430_, 2);
lean_inc(v_u_1435_);
v_semiringInst_1436_ = lean_ctor_get(v_sr_1430_, 3);
lean_inc_ref(v_semiringInst_1436_);
lean_dec_ref(v_sr_1430_);
v___x_1437_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___redArg(v_inst_1425_, v_inst_1426_, v_inst_1427_, v_u_1435_, v_type_1434_, v_semiringInst_1436_);
v___x_1438_ = lean_apply_4(v_toBind_1428_, lean_box(0), lean_box(0), v___x_1437_, v___f_1429_);
return v___x_1438_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg(lean_object* v_inst_1439_, lean_object* v_inst_1440_, lean_object* v_inst_1441_, lean_object* v_inst_1442_){
_start:
{
lean_object* v_toApplicative_1443_; lean_object* v_toBind_1444_; lean_object* v_getSemiring_1445_; lean_object* v_modifySemiring_1446_; lean_object* v_toPure_1447_; lean_object* v___f_1448_; lean_object* v___f_1449_; lean_object* v___x_1450_; 
v_toApplicative_1443_ = lean_ctor_get(v_inst_1440_, 0);
v_toBind_1444_ = lean_ctor_get(v_inst_1440_, 1);
lean_inc_n(v_toBind_1444_, 3);
v_getSemiring_1445_ = lean_ctor_get(v_inst_1442_, 0);
lean_inc(v_getSemiring_1445_);
v_modifySemiring_1446_ = lean_ctor_get(v_inst_1442_, 1);
lean_inc(v_modifySemiring_1446_);
lean_dec_ref(v_inst_1442_);
v_toPure_1447_ = lean_ctor_get(v_toApplicative_1443_, 1);
lean_inc_n(v_toPure_1447_, 2);
v___f_1448_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1448_, 0, v_toPure_1447_);
lean_closure_set(v___f_1448_, 1, v_modifySemiring_1446_);
lean_closure_set(v___f_1448_, 2, v_toBind_1444_);
v___f_1449_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg___lam__1), 7, 6);
lean_closure_set(v___f_1449_, 0, v_toPure_1447_);
lean_closure_set(v___f_1449_, 1, v_inst_1439_);
lean_closure_set(v___f_1449_, 2, v_inst_1440_);
lean_closure_set(v___f_1449_, 3, v_inst_1441_);
lean_closure_set(v___f_1449_, 4, v_toBind_1444_);
lean_closure_set(v___f_1449_, 5, v___f_1448_);
v___x_1450_ = lean_apply_4(v_toBind_1444_, lean_box(0), lean_box(0), v_getSemiring_1445_, v___f_1449_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn_x27(lean_object* v_m_1451_, lean_object* v_inst_1452_, lean_object* v_inst_1453_, lean_object* v_inst_1454_, lean_object* v_inst_1455_){
_start:
{
lean_object* v___x_1456_; 
v___x_1456_ = l_Lean_Meta_Sym_Arith_getNatCastFn_x27___redArg(v_inst_1452_, v_inst_1453_, v_inst_1454_, v_inst_1455_);
return v___x_1456_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Arith_MonadRing(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Arith_MonadSemiring(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Arith_Functions(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_Arith_MonadRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_MonadSemiring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Arith_Functions(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Arith_MonadRing(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Arith_MonadSemiring(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Arith_Functions(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Arith_MonadRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Arith_MonadSemiring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_Functions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Arith_Functions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Arith_Functions(builtin);
}
#ifdef __cplusplus
}
#endif
