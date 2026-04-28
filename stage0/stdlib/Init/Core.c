// Lean compiler output
// Module: Init.Core
// Imports: public import Init.SizeOf public import Init.Tactics
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
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_inline___redArg(lean_object*);
LEAN_EXPORT lean_object* l_inline___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_inline(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_inline___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_eagerReduce___redArg(lean_object*);
LEAN_EXPORT lean_object* l_eagerReduce___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_eagerReduce(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_eagerReduce___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_flip___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_flip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqEmpty(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_instDecidableEqEmpty___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqPEmpty(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_instDecidableEqPEmpty___boxed(lean_object*, lean_object*);
lean_object* lean_mk_thunk(lean_object*);
LEAN_EXPORT lean_object* l_Thunk_mk___boxed(lean_object*, lean_object*);
lean_object* lean_thunk_pure(lean_object*);
LEAN_EXPORT lean_object* l_Thunk_pure___boxed(lean_object*, lean_object*);
lean_object* lean_thunk_get_own(lean_object*);
LEAN_EXPORT lean_object* l_Thunk_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Thunk_fnImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Thunk_fnImpl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Thunk_fnImpl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Thunk_fnImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Thunk_map___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Thunk_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Thunk_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Thunk_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Thunk_bind___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Thunk_bind___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Thunk_bind___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Thunk_bind(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_thunkCoe___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_thunkCoe___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_thunkCoe___lam__1(lean_object*);
static lean_once_cell_t l_thunkCoe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_thunkCoe___closed__0;
LEAN_EXPORT lean_object* l_thunkCoe(lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedThunk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedThunk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Eq_ndrecOn___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Eq_ndrecOn___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Eq_ndrecOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Eq_ndrecOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___x3c_x2d_x3e___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x3c_x2d_x3e___00__closed__0;
static lean_once_cell_t l_term___x3c_x2d_x3e___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x3c_x2d_x3e___00__closed__1;
static lean_once_cell_t l_term___x3c_x2d_x3e___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x3c_x2d_x3e___00__closed__2;
static lean_once_cell_t l_term___x3c_x2d_x3e___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x3c_x2d_x3e___00__closed__3;
static lean_once_cell_t l_term___x3c_x2d_x3e___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x3c_x2d_x3e___00__closed__4;
static lean_once_cell_t l_term___x3c_x2d_x3e___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x3c_x2d_x3e___00__closed__5;
static lean_once_cell_t l_term___x3c_x2d_x3e___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x3c_x2d_x3e___00__closed__6;
static lean_once_cell_t l_term___x3c_x2d_x3e___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x3c_x2d_x3e___00__closed__7;
static lean_once_cell_t l_term___x3c_x2d_x3e___00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x3c_x2d_x3e___00__closed__8;
static lean_once_cell_t l_term___x3c_x2d_x3e___00__closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x3c_x2d_x3e___00__closed__9;
static lean_once_cell_t l_term___x3c_x2d_x3e___00__closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x3c_x2d_x3e___00__closed__10;
LEAN_EXPORT lean_object* l_term___x3c_x2d_x3e__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__5;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__6;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__8;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__9;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__10;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__11;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__12;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___aux__Init__Core______unexpand__Iff__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______unexpand__Iff__1___closed__0;
static lean_once_cell_t l___aux__Init__Core______unexpand__Iff__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______unexpand__Iff__1___closed__1;
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Iff__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Iff__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___u2194___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2194___00__closed__0;
static lean_once_cell_t l_term___u2194___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2194___00__closed__1;
static lean_once_cell_t l_term___u2194___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2194___00__closed__2;
static lean_once_cell_t l_term___u2194___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2194___00__closed__3;
static lean_once_cell_t l_term___u2194___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2194___00__closed__4;
static lean_once_cell_t l_term___u2194___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2194___00__closed__5;
LEAN_EXPORT lean_object* l_term___u2194__;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2194____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2194____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Iff__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Iff__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Sum_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Sum_ctorIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_ctorIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_inl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_inl_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_inr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_inr_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___u2295___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295___00__closed__0;
static lean_once_cell_t l_term___u2295___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295___00__closed__1;
static lean_once_cell_t l_term___u2295___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295___00__closed__2;
static lean_once_cell_t l_term___u2295___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295___00__closed__3;
static lean_once_cell_t l_term___u2295___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295___00__closed__4;
static lean_once_cell_t l_term___u2295___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295___00__closed__5;
static lean_once_cell_t l_term___u2295___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295___00__closed__6;
LEAN_EXPORT lean_object* l_term___u2295__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295____1___closed__4;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295____1___closed__5;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295____1___closed__6;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2295____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2295____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Sum__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Sum__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PSum_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_PSum_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_PSum_ctorIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PSum_ctorIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PSum_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PSum_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PSum_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PSum_inl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PSum_inl_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PSum_inr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PSum_inr_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___u2295_x27___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295_x27___00__closed__0;
static lean_once_cell_t l_term___u2295_x27___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295_x27___00__closed__1;
static lean_once_cell_t l_term___u2295_x27___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295_x27___00__closed__2;
static lean_once_cell_t l_term___u2295_x27___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295_x27___00__closed__3;
static lean_once_cell_t l_term___u2295_x27___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295_x27___00__closed__4;
static lean_once_cell_t l_term___u2295_x27___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2295_x27___00__closed__5;
LEAN_EXPORT lean_object* l_term___u2295_x27__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__4;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__5;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__6;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2295_x27____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2295_x27____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__PSum__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__PSum__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PSum_inhabitedLeft___redArg(lean_object*);
LEAN_EXPORT lean_object* l_PSum_inhabitedLeft(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PSum_inhabitedRight___redArg(lean_object*);
LEAN_EXPORT lean_object* l_PSum_inhabitedRight(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForInStep_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ForInStep_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ForInStep_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForInStep_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForInStep_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForInStep_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForInStep_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForInStep_done_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForInStep_done_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForInStep_yield_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ForInStep_yield_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedForInStep_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedForInStep_default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedForInStep___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedForInStep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_pure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_pure_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_return_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_return_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_break_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_break_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_continue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPRBC_continue_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPR_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_DoResultPR_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DoResultPR_ctorIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPR_ctorIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPR_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPR_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPR_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPR_pure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPR_pure_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPR_return_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultPR_return_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultBC_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_DoResultBC_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DoResultBC_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultBC_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultBC_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultBC_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultBC_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultBC_break_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultBC_break_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultBC_continue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultBC_continue_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_ctorIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_ctorIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_pureReturn_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_pureReturn_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_break_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_break_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_continue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DoResultSBC_continue_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___u2248___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2248___00__closed__0;
static lean_once_cell_t l_term___u2248___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2248___00__closed__1;
static lean_once_cell_t l_term___u2248___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2248___00__closed__2;
static lean_once_cell_t l_term___u2248___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2248___00__closed__3;
static lean_once_cell_t l_term___u2248___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2248___00__closed__4;
static lean_once_cell_t l_term___u2248___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2248___00__closed__5;
static lean_once_cell_t l_term___u2248___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2248___00__closed__6;
LEAN_EXPORT lean_object* l_term___u2248__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2248____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2248____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2248____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2248____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2248____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2248____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2248____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2248____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2248____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2248____1___closed__4;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2248____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2248____1___closed__5;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2248____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2248____1___closed__6;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2248____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2248____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__HasEquiv__Equiv__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__HasEquiv__Equiv__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___u2286___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2286___00__closed__0;
static lean_once_cell_t l_term___u2286___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2286___00__closed__1;
static lean_once_cell_t l_term___u2286___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2286___00__closed__2;
static lean_once_cell_t l_term___u2286___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2286___00__closed__3;
static lean_once_cell_t l_term___u2286___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2286___00__closed__4;
static lean_once_cell_t l_term___u2286___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2286___00__closed__5;
LEAN_EXPORT lean_object* l_term___u2286__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2286____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2286____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2286____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2286____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2286____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2286____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2286____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2286____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2286____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2286____1___closed__4;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2286____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2286____1___closed__5;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2286____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2286____1___closed__6;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2286____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2286____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__HasSubset__Subset__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__HasSubset__Subset__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___u2282___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2282___00__closed__0;
static lean_once_cell_t l_term___u2282___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2282___00__closed__1;
static lean_once_cell_t l_term___u2282___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2282___00__closed__2;
static lean_once_cell_t l_term___u2282___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2282___00__closed__3;
static lean_once_cell_t l_term___u2282___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2282___00__closed__4;
static lean_once_cell_t l_term___u2282___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2282___00__closed__5;
LEAN_EXPORT lean_object* l_term___u2282__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2282____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2282____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2282____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2282____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2282____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2282____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2282____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2282____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2282____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2282____1___closed__4;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2282____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2282____1___closed__5;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2282____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2282____1___closed__6;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2282____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2282____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__HasSSubset__SSubset__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__HasSSubset__SSubset__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___u2287___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2287___00__closed__0;
static lean_once_cell_t l_term___u2287___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2287___00__closed__1;
static lean_once_cell_t l_term___u2287___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2287___00__closed__2;
static lean_once_cell_t l_term___u2287___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2287___00__closed__3;
static lean_once_cell_t l_term___u2287___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2287___00__closed__4;
static lean_once_cell_t l_term___u2287___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2287___00__closed__5;
LEAN_EXPORT lean_object* l_term___u2287__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2287____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2287____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2287____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2287____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2287____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2287____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2287____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2287____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2287____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2287____1___closed__4;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2287____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2287____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Superset__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Superset__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___u2283___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2283___00__closed__0;
static lean_once_cell_t l_term___u2283___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2283___00__closed__1;
static lean_once_cell_t l_term___u2283___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2283___00__closed__2;
static lean_once_cell_t l_term___u2283___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2283___00__closed__3;
static lean_once_cell_t l_term___u2283___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2283___00__closed__4;
static lean_once_cell_t l_term___u2283___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2283___00__closed__5;
LEAN_EXPORT lean_object* l_term___u2283__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2283____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2283____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2283____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2283____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2283____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2283____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2283____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2283____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2283____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2283____1___closed__4;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2283____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2283____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__SSuperset__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__SSuperset__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___u222a___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u222a___00__closed__0;
static lean_once_cell_t l_term___u222a___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u222a___00__closed__1;
static lean_once_cell_t l_term___u222a___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u222a___00__closed__2;
static lean_once_cell_t l_term___u222a___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u222a___00__closed__3;
static lean_once_cell_t l_term___u222a___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u222a___00__closed__4;
static lean_once_cell_t l_term___u222a___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u222a___00__closed__5;
static lean_once_cell_t l_term___u222a___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u222a___00__closed__6;
LEAN_EXPORT lean_object* l_term___u222a__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u222a____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u222a____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u222a____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u222a____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u222a____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u222a____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u222a____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u222a____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u222a____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u222a____1___closed__4;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u222a____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u222a____1___closed__5;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u222a____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u222a____1___closed__6;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u222a____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u222a____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Union__union__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Union__union__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___u2229___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2229___00__closed__0;
static lean_once_cell_t l_term___u2229___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2229___00__closed__1;
static lean_once_cell_t l_term___u2229___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2229___00__closed__2;
static lean_once_cell_t l_term___u2229___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2229___00__closed__3;
static lean_once_cell_t l_term___u2229___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2229___00__closed__4;
static lean_once_cell_t l_term___u2229___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2229___00__closed__5;
static lean_once_cell_t l_term___u2229___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2229___00__closed__6;
LEAN_EXPORT lean_object* l_term___u2229__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2229____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2229____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2229____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2229____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2229____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2229____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2229____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2229____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2229____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2229____1___closed__4;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2229____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2229____1___closed__5;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2229____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2229____1___closed__6;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2229____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2229____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Inter__inter__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Inter__inter__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___x5c___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x5c___00__closed__0;
static lean_once_cell_t l_term___x5c___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x5c___00__closed__1;
static lean_once_cell_t l_term___x5c___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x5c___00__closed__2;
static lean_once_cell_t l_term___x5c___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x5c___00__closed__3;
static lean_once_cell_t l_term___x5c___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x5c___00__closed__4;
static lean_once_cell_t l_term___x5c___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x5c___00__closed__5;
LEAN_EXPORT lean_object* l_term___x5c__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x5c____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x5c____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x5c____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x5c____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x5c____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x5c____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x5c____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x5c____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x5c____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x5c____1___closed__4;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x5c____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x5c____1___closed__5;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x5c____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x5c____1___closed__6;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x5c____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x5c____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__SDiff__sdiff__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__SDiff__sdiff__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term_x7b_x7d___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x7b_x7d___closed__0;
static lean_once_cell_t l_term_x7b_x7d___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x7b_x7d___closed__1;
static lean_once_cell_t l_term_x7b_x7d___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x7b_x7d___closed__2;
static lean_once_cell_t l_term_x7b_x7d___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x7b_x7d___closed__3;
static lean_once_cell_t l_term_x7b_x7d___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x7b_x7d___closed__4;
static lean_once_cell_t l_term_x7b_x7d___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x7b_x7d___closed__5;
static lean_once_cell_t l_term_x7b_x7d___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x7b_x7d___closed__6;
static lean_once_cell_t l_term_x7b_x7d___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_x7b_x7d___closed__7;
LEAN_EXPORT lean_object* l_term_x7b_x7d;
static lean_once_cell_t l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__4;
static lean_once_cell_t l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__5;
static lean_once_cell_t l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__6;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term_x7b_x7d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term_x7b_x7d__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__EmptyCollection__emptyCollection__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__EmptyCollection__emptyCollection__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term_u2205___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u2205___closed__0;
static lean_once_cell_t l_term_u2205___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u2205___closed__1;
static lean_once_cell_t l_term_u2205___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u2205___closed__2;
static lean_once_cell_t l_term_u2205___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u2205___closed__3;
static lean_once_cell_t l_term_u2205___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term_u2205___closed__4;
LEAN_EXPORT lean_object* l_term_u2205;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term_u2205__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term_u2205__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__EmptyCollection__emptyCollection__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__EmptyCollection__emptyCollection__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedTask_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedTask_default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedTask___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedTask(lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
LEAN_EXPORT lean_object* l_Task_pure___boxed(lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
LEAN_EXPORT lean_object* l_Task_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Task_Priority_default;
LEAN_EXPORT lean_object* l_Task_Priority_max;
LEAN_EXPORT lean_object* l_Task_Priority_dedicated;
lean_object* lean_task_spawn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Task_spawn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Task_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Task_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_strict_or(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_strictOr___boxed(lean_object*, lean_object*);
uint8_t lean_strict_and(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_strictAnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_bne___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bne___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_bne(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_bne___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___x21_x3d___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x21_x3d___00__closed__0;
static lean_once_cell_t l_term___x21_x3d___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x21_x3d___00__closed__1;
static lean_once_cell_t l_term___x21_x3d___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x21_x3d___00__closed__2;
static lean_once_cell_t l_term___x21_x3d___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x21_x3d___00__closed__3;
static lean_once_cell_t l_term___x21_x3d___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x21_x3d___00__closed__4;
static lean_once_cell_t l_term___x21_x3d___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___x21_x3d___00__closed__5;
LEAN_EXPORT lean_object* l_term___x21_x3d__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__4;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__bne__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__bne__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__2;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqOfLawfulBEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqOfLawfulBEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqOfLawfulBEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqOfLawfulBEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_term___u2260___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2260___00__closed__0;
static lean_once_cell_t l_term___u2260___00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2260___00__closed__1;
static lean_once_cell_t l_term___u2260___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2260___00__closed__2;
static lean_once_cell_t l_term___u2260___00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2260___00__closed__3;
static lean_once_cell_t l_term___u2260___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2260___00__closed__4;
static lean_once_cell_t l_term___u2260___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_term___u2260___00__closed__5;
LEAN_EXPORT lean_object* l_term___u2260__;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2260____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2260____1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2260____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2260____1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2260____1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2260____1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2260____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2260____1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2260____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2260____1___closed__4;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2260____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2260____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Ne__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Ne__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2260____2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2260____2___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2260____2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2260____2___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__term___u2260____2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__term___u2260____2___closed__2;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2260____2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2260____2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__0;
static lean_once_cell_t l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__1;
static lean_once_cell_t l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__2;
static lean_once_cell_t l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__3;
static lean_once_cell_t l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__4;
static lean_once_cell_t l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__5;
static lean_once_cell_t l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__6;
static lean_once_cell_t l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__7;
static lean_once_cell_t l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__8;
static lean_once_cell_t l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__9;
static lean_once_cell_t l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__10;
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instTransIff;
LEAN_EXPORT uint8_t l_toBoolUsing___redArg(uint8_t);
LEAN_EXPORT lean_object* l_toBoolUsing___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_toBoolUsing(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_toBoolUsing___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableTrue;
LEAN_EXPORT uint8_t l_instDecidableFalse;
LEAN_EXPORT uint8_t l_decidable__of__decidable__of__iff___redArg(uint8_t);
LEAN_EXPORT lean_object* l_decidable__of__decidable__of__iff___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_decidable__of__decidable__of__iff(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_decidable__of__decidable__of__iff___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_decidable__of__decidable__of__eq___redArg(uint8_t);
LEAN_EXPORT lean_object* l_decidable__of__decidable__of__eq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_decidable__of__decidable__of__eq(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_decidable__of__decidable__of__eq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableIff___redArg(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_instDecidableIff___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableIff(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_instDecidableIff___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iteInduction___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iteInduction___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iteInduction(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_iteInduction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableDite___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableDite___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableDite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableDite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_noConfusionEnum___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_noConfusionEnum___redArg___lam__0___boxed(lean_object*);
static lean_once_cell_t l_noConfusionEnum___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_noConfusionEnum___redArg___closed__0;
LEAN_EXPORT lean_object* l_noConfusionEnum___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_noConfusionEnum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedProp;
LEAN_EXPORT lean_object* l_instInhabitedNonScalar_default;
LEAN_EXPORT lean_object* l_instInhabitedNonScalar;
LEAN_EXPORT lean_object* l_instInhabitedPNonScalar_default;
LEAN_EXPORT lean_object* l_instInhabitedPNonScalar;
LEAN_EXPORT lean_object* l_instInhabitedTrue;
LEAN_EXPORT uint8_t l_Subtype_instBEq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subtype_instBEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subtype_instBEq___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Subtype_instBEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Subtype_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subtype_instDecidableEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Subtype_instDecidableEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subtype_instDecidableEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_inhabitedLeft___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Sum_inhabitedLeft(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_inhabitedRight___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Sum_inhabitedRight(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqSum_decEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqSum_decEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqSum_decEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqSum_decEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqSum___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqSum___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqSum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqSum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedMProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedMProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedPProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedPProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqProd___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqProd___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Prod_lexLtDec___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_lexLtDec___aux__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Prod_lexLtDec___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_lexLtDec___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Prod_lexLtDec___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_lexLtDec___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Prod_lexLtDec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_lexLtDec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_map___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqSigma___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqSigma___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqSigma(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqSigma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqPSigma___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqPSigma___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqPSigma(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqPSigma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedPUnit;
LEAN_EXPORT uint8_t l_instDecidableEqPUnit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqPUnit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instHasEquivOfSetoid(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqOfIff___redArg(uint8_t);
LEAN_EXPORT lean_object* l_instDecidableEqOfIff___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqOfIff(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_instDecidableEqOfIff___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Not_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_And_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_And_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Iff_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Iff_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_liftOn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_liftOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_rec___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_rec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_recOn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_recOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_recOnSubsingleton___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_recOnSubsingleton(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_hrecOn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_hrecOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_mk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_mk_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_mk_x27___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Quotient_mk_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_mk_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_lift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_liftOn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_liftOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_rec___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_rec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_recOn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_recOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_hrecOn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_hrecOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_lift_u2082(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton_u2082___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton_u2082(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Quotient_decidableEq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_decidableEq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Quotient_decidableEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_decidableEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_pliftOn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quot_pliftOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_pliftOn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_pliftOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Setoid_trivial(lean_object*);
LEAN_EXPORT lean_object* l_Squash_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Squash_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Squash_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Squash_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Squash_lift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Squash_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_reduceBool(uint8_t);
LEAN_EXPORT lean_object* l_Lean_reduceBool___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_reduceNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_reduceNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_opaqueId___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_opaqueId___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_opaqueId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_opaqueId___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___redArg(lean_object* v_inst_1_, lean_object* v_x_2_, lean_object* v_x_3_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_dec_ref(v_inst_1_);
if (lean_obj_tag(v_x_3_) == 0)
{
uint8_t v___x_4_; 
v___x_4_ = 1;
return v___x_4_;
}
else
{
uint8_t v___x_5_; 
lean_dec_ref(v_x_3_);
v___x_5_ = 0;
return v___x_5_;
}
}
else
{
if (lean_obj_tag(v_x_3_) == 0)
{
uint8_t v___x_6_; 
lean_dec_ref(v_x_2_);
lean_dec_ref(v_inst_1_);
v___x_6_ = 0;
return v___x_6_;
}
else
{
lean_object* v_val_7_; lean_object* v_val_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v_val_7_ = lean_ctor_get(v_x_2_, 0);
lean_inc(v_val_7_);
lean_dec_ref(v_x_2_);
v_val_8_ = lean_ctor_get(v_x_3_, 0);
lean_inc(v_val_8_);
lean_dec_ref(v_x_3_);
v___x_9_ = lean_apply_2(v_inst_1_, v_val_7_, v_val_8_);
v___x_10_ = lean_unbox(v___x_9_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___redArg___boxed(lean_object* v_inst_11_, lean_object* v_x_12_, lean_object* v_x_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l_instBEqOption_beq___redArg(v_inst_11_, v_x_12_, v_x_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq(lean_object* v_00_u03b1_16_, lean_object* v_inst_17_, lean_object* v_x_18_, lean_object* v_x_19_){
_start:
{
uint8_t v___x_20_; 
v___x_20_ = l_instBEqOption_beq___redArg(v_inst_17_, v_x_18_, v_x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___boxed(lean_object* v_00_u03b1_21_, lean_object* v_inst_22_, lean_object* v_x_23_, lean_object* v_x_24_){
_start:
{
uint8_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = l_instBEqOption_beq(v_00_u03b1_21_, v_inst_22_, v_x_23_, v_x_24_);
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT lean_object* l_instBEqOption___redArg(lean_object* v_inst_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_alloc_closure((void*)(l_instBEqOption_beq___boxed), 4, 2);
lean_closure_set(v___x_28_, 0, lean_box(0));
lean_closure_set(v___x_28_, 1, v_inst_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_instBEqOption(lean_object* v_00_u03b1_29_, lean_object* v_inst_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_alloc_closure((void*)(l_instBEqOption_beq___boxed), 4, 2);
lean_closure_set(v___x_31_, 0, lean_box(0));
lean_closure_set(v___x_31_, 1, v_inst_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_inline___redArg(lean_object* v_a_32_){
_start:
{
lean_inc(v_a_32_);
return v_a_32_;
}
}
LEAN_EXPORT lean_object* l_inline___redArg___boxed(lean_object* v_a_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_inline___redArg(v_a_33_);
lean_dec(v_a_33_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_inline(lean_object* v_00_u03b1_35_, lean_object* v_a_36_){
_start:
{
lean_inc(v_a_36_);
return v_a_36_;
}
}
LEAN_EXPORT lean_object* l_inline___boxed(lean_object* v_00_u03b1_37_, lean_object* v_a_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_inline(v_00_u03b1_37_, v_a_38_);
lean_dec(v_a_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_eagerReduce___redArg(lean_object* v_a_40_){
_start:
{
lean_inc(v_a_40_);
return v_a_40_;
}
}
LEAN_EXPORT lean_object* l_eagerReduce___redArg___boxed(lean_object* v_a_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_eagerReduce___redArg(v_a_41_);
lean_dec(v_a_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_eagerReduce(lean_object* v_00_u03b1_43_, lean_object* v_a_44_){
_start:
{
lean_inc(v_a_44_);
return v_a_44_;
}
}
LEAN_EXPORT lean_object* l_eagerReduce___boxed(lean_object* v_00_u03b1_45_, lean_object* v_a_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_eagerReduce(v_00_u03b1_45_, v_a_46_);
lean_dec(v_a_46_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_flip___redArg(lean_object* v_f_48_, lean_object* v_b_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_apply_2(v_f_48_, v_a_50_, v_b_49_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_flip(lean_object* v_00_u03b1_52_, lean_object* v_00_u03b2_53_, lean_object* v_00_u03c6_54_, lean_object* v_f_55_, lean_object* v_b_56_, lean_object* v_a_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lean_apply_2(v_f_55_, v_a_57_, v_b_56_);
return v___x_58_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqEmpty(uint8_t v_a_59_, uint8_t v_b_60_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_instDecidableEqEmpty___boxed(lean_object* v_a_61_, lean_object* v_b_62_){
_start:
{
uint8_t v_a_boxed_63_; uint8_t v_b_boxed_64_; uint8_t v_res_65_; lean_object* v_r_66_; 
v_a_boxed_63_ = lean_unbox(v_a_61_);
v_b_boxed_64_ = lean_unbox(v_b_62_);
v_res_65_ = l_instDecidableEqEmpty(v_a_boxed_63_, v_b_boxed_64_);
v_r_66_ = lean_box(v_res_65_);
return v_r_66_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqPEmpty(uint8_t v_a_67_, uint8_t v_b_68_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_instDecidableEqPEmpty___boxed(lean_object* v_a_69_, lean_object* v_b_70_){
_start:
{
uint8_t v_a_boxed_71_; uint8_t v_b_boxed_72_; uint8_t v_res_73_; lean_object* v_r_74_; 
v_a_boxed_71_ = lean_unbox(v_a_69_);
v_b_boxed_72_ = lean_unbox(v_b_70_);
v_res_73_ = l_instDecidableEqPEmpty(v_a_boxed_71_, v_b_boxed_72_);
v_r_74_ = lean_box(v_res_73_);
return v_r_74_;
}
}
LEAN_EXPORT lean_object* l_Thunk_mk___boxed(lean_object* v_00_u03b1_77_, lean_object* v_fn_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = lean_mk_thunk(v_fn_78_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Thunk_pure___boxed(lean_object* v_00_u03b1_82_, lean_object* v_a_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = lean_thunk_pure(v_a_83_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Thunk_get___boxed(lean_object* v_00_u03b1_87_, lean_object* v_x_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = lean_thunk_get_own(v_x_88_);
lean_dec_ref(v_x_88_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Thunk_fnImpl___redArg(lean_object* v_x_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_thunk_get_own(v_x_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Thunk_fnImpl___redArg___boxed(lean_object* v_x_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Thunk_fnImpl___redArg(v_x_92_);
lean_dec_ref(v_x_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Thunk_fnImpl(lean_object* v_00_u03b1_94_, lean_object* v_x_95_, lean_object* v_x_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_thunk_get_own(v_x_95_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Thunk_fnImpl___boxed(lean_object* v_00_u03b1_98_, lean_object* v_x_99_, lean_object* v_x_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Thunk_fnImpl(v_00_u03b1_98_, v_x_99_, v_x_100_);
lean_dec_ref(v_x_99_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Thunk_map___redArg___lam__0(lean_object* v_x_102_, lean_object* v_f_103_, lean_object* v_x_104_){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_thunk_get_own(v_x_102_);
v___x_106_ = lean_apply_1(v_f_103_, v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Thunk_map___redArg___lam__0___boxed(lean_object* v_x_107_, lean_object* v_f_108_, lean_object* v_x_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Thunk_map___redArg___lam__0(v_x_107_, v_f_108_, v_x_109_);
lean_dec_ref(v_x_107_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Thunk_map___redArg(lean_object* v_f_111_, lean_object* v_x_112_){
_start:
{
lean_object* v___f_113_; lean_object* v___x_114_; 
v___f_113_ = lean_alloc_closure((void*)(l_Thunk_map___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_113_, 0, v_x_112_);
lean_closure_set(v___f_113_, 1, v_f_111_);
v___x_114_ = lean_mk_thunk(v___f_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Thunk_map(lean_object* v_00_u03b1_115_, lean_object* v_00_u03b2_116_, lean_object* v_f_117_, lean_object* v_x_118_){
_start:
{
lean_object* v___f_119_; lean_object* v___x_120_; 
v___f_119_ = lean_alloc_closure((void*)(l_Thunk_map___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_119_, 0, v_x_118_);
lean_closure_set(v___f_119_, 1, v_f_117_);
v___x_120_ = lean_mk_thunk(v___f_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Thunk_bind___redArg___lam__0(lean_object* v_x_121_, lean_object* v_f_122_, lean_object* v_x_123_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = lean_thunk_get_own(v_x_121_);
v___x_125_ = lean_apply_1(v_f_122_, v___x_124_);
v___x_126_ = lean_thunk_get_own(v___x_125_);
lean_dec_ref(v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Thunk_bind___redArg___lam__0___boxed(lean_object* v_x_127_, lean_object* v_f_128_, lean_object* v_x_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Thunk_bind___redArg___lam__0(v_x_127_, v_f_128_, v_x_129_);
lean_dec_ref(v_x_127_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Thunk_bind___redArg(lean_object* v_x_131_, lean_object* v_f_132_){
_start:
{
lean_object* v___f_133_; lean_object* v___x_134_; 
v___f_133_ = lean_alloc_closure((void*)(l_Thunk_bind___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_133_, 0, v_x_131_);
lean_closure_set(v___f_133_, 1, v_f_132_);
v___x_134_ = lean_mk_thunk(v___f_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Thunk_bind(lean_object* v_00_u03b1_135_, lean_object* v_00_u03b2_136_, lean_object* v_x_137_, lean_object* v_f_138_){
_start:
{
lean_object* v___f_139_; lean_object* v___x_140_; 
v___f_139_ = lean_alloc_closure((void*)(l_Thunk_bind___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_139_, 0, v_x_137_);
lean_closure_set(v___f_139_, 1, v_f_138_);
v___x_140_ = lean_mk_thunk(v___f_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_thunkCoe___lam__0(lean_object* v_a_141_, lean_object* v_x_142_){
_start:
{
lean_inc(v_a_141_);
return v_a_141_;
}
}
LEAN_EXPORT lean_object* l_thunkCoe___lam__0___boxed(lean_object* v_a_143_, lean_object* v_x_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_thunkCoe___lam__0(v_a_143_, v_x_144_);
lean_dec(v_a_143_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_thunkCoe___lam__1(lean_object* v_a_146_){
_start:
{
lean_object* v___f_147_; lean_object* v___x_148_; 
v___f_147_ = lean_alloc_closure((void*)(l_thunkCoe___lam__0___boxed), 2, 1);
lean_closure_set(v___f_147_, 0, v_a_146_);
v___x_148_ = lean_mk_thunk(v___f_147_);
return v___x_148_;
}
}
static lean_object* _init_l_thunkCoe___closed__0(void){
_start:
{
lean_object* v___f_149_; 
v___f_149_ = lean_alloc_closure((void*)(l_thunkCoe___lam__1), 1, 0);
return v___f_149_;
}
}
LEAN_EXPORT lean_object* l_thunkCoe(lean_object* v_00_u03b1_150_){
_start:
{
lean_object* v___f_151_; 
v___f_151_ = lean_obj_once(&l_thunkCoe___closed__0, &l_thunkCoe___closed__0_once, _init_l_thunkCoe___closed__0);
return v___f_151_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedThunk___redArg(lean_object* v_inst_152_){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_thunk_pure(v_inst_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedThunk(lean_object* v_00_u03b1_154_, lean_object* v_inst_155_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_thunk_pure(v_inst_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Eq_ndrecOn___redArg(lean_object* v_m_157_){
_start:
{
lean_inc(v_m_157_);
return v_m_157_;
}
}
LEAN_EXPORT lean_object* l_Eq_ndrecOn___redArg___boxed(lean_object* v_m_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Eq_ndrecOn___redArg(v_m_158_);
lean_dec(v_m_158_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Eq_ndrecOn(lean_object* v_00_u03b1_160_, lean_object* v_a_161_, lean_object* v_motive_162_, lean_object* v_b_163_, lean_object* v_h_164_, lean_object* v_m_165_){
_start:
{
lean_inc(v_m_165_);
return v_m_165_;
}
}
LEAN_EXPORT lean_object* l_Eq_ndrecOn___boxed(lean_object* v_00_u03b1_166_, lean_object* v_a_167_, lean_object* v_motive_168_, lean_object* v_b_169_, lean_object* v_h_170_, lean_object* v_m_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Eq_ndrecOn(v_00_u03b1_166_, v_a_167_, v_motive_168_, v_b_169_, v_h_170_, v_m_171_);
lean_dec(v_m_171_);
lean_dec(v_b_169_);
lean_dec(v_a_167_);
return v_res_172_;
}
}
static lean_object* _init_l_term___x3c_x2d_x3e___00__closed__0(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_mk_string_unchecked("term_<->_", 9, 9);
return v___x_173_;
}
}
static lean_object* _init_l_term___x3c_x2d_x3e___00__closed__1(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__0, &l_term___x3c_x2d_x3e___00__closed__0_once, _init_l_term___x3c_x2d_x3e___00__closed__0);
v___x_175_ = l_Lean_Name_mkStr1(v___x_174_);
return v___x_175_;
}
}
static lean_object* _init_l_term___x3c_x2d_x3e___00__closed__2(void){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_176_;
}
}
static lean_object* _init_l_term___x3c_x2d_x3e___00__closed__3(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__2, &l_term___x3c_x2d_x3e___00__closed__2_once, _init_l_term___x3c_x2d_x3e___00__closed__2);
v___x_178_ = l_Lean_Name_mkStr1(v___x_177_);
return v___x_178_;
}
}
static lean_object* _init_l_term___x3c_x2d_x3e___00__closed__4(void){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lean_mk_string_unchecked(" <-> ", 5, 5);
return v___x_179_;
}
}
static lean_object* _init_l_term___x3c_x2d_x3e___00__closed__5(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__4, &l_term___x3c_x2d_x3e___00__closed__4_once, _init_l_term___x3c_x2d_x3e___00__closed__4);
v___x_181_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
return v___x_181_;
}
}
static lean_object* _init_l_term___x3c_x2d_x3e___00__closed__6(void){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_182_;
}
}
static lean_object* _init_l_term___x3c_x2d_x3e___00__closed__7(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__6, &l_term___x3c_x2d_x3e___00__closed__6_once, _init_l_term___x3c_x2d_x3e___00__closed__6);
v___x_184_ = l_Lean_Name_mkStr1(v___x_183_);
return v___x_184_;
}
}
static lean_object* _init_l_term___x3c_x2d_x3e___00__closed__8(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_185_ = lean_unsigned_to_nat(21u);
v___x_186_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__7, &l_term___x3c_x2d_x3e___00__closed__7_once, _init_l_term___x3c_x2d_x3e___00__closed__7);
v___x_187_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v___x_185_);
return v___x_187_;
}
}
static lean_object* _init_l_term___x3c_x2d_x3e___00__closed__9(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_188_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__8, &l_term___x3c_x2d_x3e___00__closed__8_once, _init_l_term___x3c_x2d_x3e___00__closed__8);
v___x_189_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__5, &l_term___x3c_x2d_x3e___00__closed__5_once, _init_l_term___x3c_x2d_x3e___00__closed__5);
v___x_190_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_191_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set(v___x_191_, 1, v___x_189_);
lean_ctor_set(v___x_191_, 2, v___x_188_);
return v___x_191_;
}
}
static lean_object* _init_l_term___x3c_x2d_x3e___00__closed__10(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_192_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__9, &l_term___x3c_x2d_x3e___00__closed__9_once, _init_l_term___x3c_x2d_x3e___00__closed__9);
v___x_193_ = lean_unsigned_to_nat(21u);
v___x_194_ = lean_unsigned_to_nat(20u);
v___x_195_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__1, &l_term___x3c_x2d_x3e___00__closed__1_once, _init_l_term___x3c_x2d_x3e___00__closed__1);
v___x_196_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
lean_ctor_set(v___x_196_, 1, v___x_194_);
lean_ctor_set(v___x_196_, 2, v___x_193_);
lean_ctor_set(v___x_196_, 3, v___x_192_);
return v___x_196_;
}
}
static lean_object* _init_l_term___x3c_x2d_x3e__(void){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__10, &l_term___x3c_x2d_x3e___00__closed__10_once, _init_l_term___x3c_x2d_x3e___00__closed__10);
return v___x_197_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0(void){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_198_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1(void){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_199_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__2(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_200_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__3(void){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_201_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_202_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__3, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__3);
v___x_203_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__2, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__2);
v___x_204_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1);
v___x_205_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0);
v___x_206_ = l_Lean_Name_mkStr4(v___x_205_, v___x_204_, v___x_203_, v___x_202_);
return v___x_206_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__5(void){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = lean_mk_string_unchecked("Iff", 3, 3);
return v___x_207_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__6(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__5, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__5_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__5);
v___x_209_ = l_String_toRawSubstring_x27(v___x_208_);
return v___x_209_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__5, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__5_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__5);
v___x_211_ = l_Lean_Name_mkStr1(v___x_210_);
return v___x_211_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__8(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_212_ = lean_box(0);
v___x_213_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7);
v___x_214_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
lean_ctor_set(v___x_214_, 1, v___x_212_);
return v___x_214_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__9(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7);
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
return v___x_216_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__10(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = lean_box(0);
v___x_218_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__9, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__9_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__9);
v___x_219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
lean_ctor_set(v___x_219_, 1, v___x_217_);
return v___x_219_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__11(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_220_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__10, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__10_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__10);
v___x_221_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__8, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__8_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__8);
v___x_222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v___x_220_);
return v___x_222_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__12(void){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_223_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__12, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__12_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__12);
v___x_225_ = l_Lean_Name_mkStr1(v___x_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1(lean_object* v_x_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_229_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__1, &l_term___x3c_x2d_x3e___00__closed__1_once, _init_l_term___x3c_x2d_x3e___00__closed__1);
lean_inc(v_x_226_);
v___x_230_ = l_Lean_Syntax_isOfKind(v_x_226_, v___x_229_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; lean_object* v___x_232_; 
lean_dec(v_x_226_);
v___x_231_ = lean_box(1);
v___x_232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
lean_ctor_set(v___x_232_, 1, v_a_228_);
return v___x_232_;
}
else
{
lean_object* v_quotContext_233_; lean_object* v_currMacroScope_234_; lean_object* v_ref_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; uint8_t v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v_quotContext_233_ = lean_ctor_get(v_a_227_, 1);
v_currMacroScope_234_ = lean_ctor_get(v_a_227_, 2);
v_ref_235_ = lean_ctor_get(v_a_227_, 5);
v___x_236_ = lean_unsigned_to_nat(0u);
v___x_237_ = l_Lean_Syntax_getArg(v_x_226_, v___x_236_);
v___x_238_ = lean_unsigned_to_nat(2u);
v___x_239_ = l_Lean_Syntax_getArg(v_x_226_, v___x_238_);
lean_dec(v_x_226_);
v___x_240_ = 0;
v___x_241_ = l_Lean_SourceInfo_fromRef(v_ref_235_, v___x_240_);
v___x_242_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_243_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__6, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__6_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__6);
v___x_244_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7);
lean_inc(v_currMacroScope_234_);
lean_inc(v_quotContext_233_);
v___x_245_ = l_Lean_addMacroScope(v_quotContext_233_, v___x_244_, v_currMacroScope_234_);
v___x_246_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__11, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__11_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__11);
lean_inc_n(v___x_241_, 2);
v___x_247_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_247_, 0, v___x_241_);
lean_ctor_set(v___x_247_, 1, v___x_243_);
lean_ctor_set(v___x_247_, 2, v___x_245_);
lean_ctor_set(v___x_247_, 3, v___x_246_);
v___x_248_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_249_ = l_Lean_Syntax_node2(v___x_241_, v___x_248_, v___x_237_, v___x_239_);
v___x_250_ = l_Lean_Syntax_node2(v___x_241_, v___x_242_, v___x_247_, v___x_249_);
v___x_251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
lean_ctor_set(v___x_251_, 1, v_a_228_);
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___boxed(lean_object* v_x_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1(v_x_252_, v_a_253_, v_a_254_);
lean_dec_ref(v_a_253_);
return v_res_255_;
}
}
static lean_object* _init_l___aux__Init__Core______unexpand__Iff__1___closed__0(void){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_256_;
}
}
static lean_object* _init_l___aux__Init__Core______unexpand__Iff__1___closed__1(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__0, &l___aux__Init__Core______unexpand__Iff__1___closed__0_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__0);
v___x_258_ = l_Lean_Name_mkStr1(v___x_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Iff__1(lean_object* v_x_259_, lean_object* v_a_260_, lean_object* v_a_261_){
_start:
{
lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_262_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_259_);
v___x_263_ = l_Lean_Syntax_isOfKind(v_x_259_, v___x_262_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; lean_object* v___x_265_; 
lean_dec(v_x_259_);
v___x_264_ = lean_box(0);
v___x_265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v_a_261_);
return v___x_265_;
}
else
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_266_ = lean_unsigned_to_nat(0u);
v___x_267_ = l_Lean_Syntax_getArg(v_x_259_, v___x_266_);
v___x_268_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_267_);
v___x_269_ = l_Lean_Syntax_isOfKind(v___x_267_, v___x_268_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; 
lean_dec(v___x_267_);
lean_dec(v_x_259_);
v___x_270_ = lean_box(0);
v___x_271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
lean_ctor_set(v___x_271_, 1, v_a_261_);
return v___x_271_;
}
else
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_272_ = lean_unsigned_to_nat(1u);
v___x_273_ = l_Lean_Syntax_getArg(v_x_259_, v___x_272_);
lean_dec(v_x_259_);
v___x_274_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_273_);
v___x_275_ = l_Lean_Syntax_matchesNull(v___x_273_, v___x_274_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec(v___x_273_);
lean_dec(v___x_267_);
v___x_276_ = lean_box(0);
v___x_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v_a_261_);
return v___x_277_;
}
else
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v_ref_280_; uint8_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_278_ = l_Lean_Syntax_getArg(v___x_273_, v___x_266_);
v___x_279_ = l_Lean_Syntax_getArg(v___x_273_, v___x_272_);
lean_dec(v___x_273_);
v_ref_280_ = l_Lean_replaceRef(v___x_267_, v_a_260_);
lean_dec(v___x_267_);
v___x_281_ = 0;
v___x_282_ = l_Lean_SourceInfo_fromRef(v_ref_280_, v___x_281_);
lean_dec(v_ref_280_);
v___x_283_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__1, &l_term___x3c_x2d_x3e___00__closed__1_once, _init_l_term___x3c_x2d_x3e___00__closed__1);
v___x_284_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__4, &l_term___x3c_x2d_x3e___00__closed__4_once, _init_l_term___x3c_x2d_x3e___00__closed__4);
lean_inc(v___x_282_);
v___x_285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_282_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = l_Lean_Syntax_node3(v___x_282_, v___x_283_, v___x_278_, v___x_285_, v___x_279_);
v___x_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v_a_261_);
return v___x_287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Iff__1___boxed(lean_object* v_x_288_, lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l___aux__Init__Core______unexpand__Iff__1(v_x_288_, v_a_289_, v_a_290_);
lean_dec(v_a_289_);
return v_res_291_;
}
}
static lean_object* _init_l_term___u2194___00__closed__0(void){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = lean_mk_string_unchecked("term_↔_", 9, 7);
return v___x_292_;
}
}
static lean_object* _init_l_term___u2194___00__closed__1(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = lean_obj_once(&l_term___u2194___00__closed__0, &l_term___u2194___00__closed__0_once, _init_l_term___u2194___00__closed__0);
v___x_294_ = l_Lean_Name_mkStr1(v___x_293_);
return v___x_294_;
}
}
static lean_object* _init_l_term___u2194___00__closed__2(void){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = lean_mk_string_unchecked(" ↔ ", 5, 3);
return v___x_295_;
}
}
static lean_object* _init_l_term___u2194___00__closed__3(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_296_ = lean_obj_once(&l_term___u2194___00__closed__2, &l_term___u2194___00__closed__2_once, _init_l_term___u2194___00__closed__2);
v___x_297_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
return v___x_297_;
}
}
static lean_object* _init_l_term___u2194___00__closed__4(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_298_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__8, &l_term___x3c_x2d_x3e___00__closed__8_once, _init_l_term___x3c_x2d_x3e___00__closed__8);
v___x_299_ = lean_obj_once(&l_term___u2194___00__closed__3, &l_term___u2194___00__closed__3_once, _init_l_term___u2194___00__closed__3);
v___x_300_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_301_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
lean_ctor_set(v___x_301_, 1, v___x_299_);
lean_ctor_set(v___x_301_, 2, v___x_298_);
return v___x_301_;
}
}
static lean_object* _init_l_term___u2194___00__closed__5(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_302_ = lean_obj_once(&l_term___u2194___00__closed__4, &l_term___u2194___00__closed__4_once, _init_l_term___u2194___00__closed__4);
v___x_303_ = lean_unsigned_to_nat(21u);
v___x_304_ = lean_unsigned_to_nat(20u);
v___x_305_ = lean_obj_once(&l_term___u2194___00__closed__1, &l_term___u2194___00__closed__1_once, _init_l_term___u2194___00__closed__1);
v___x_306_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
lean_ctor_set(v___x_306_, 1, v___x_304_);
lean_ctor_set(v___x_306_, 2, v___x_303_);
lean_ctor_set(v___x_306_, 3, v___x_302_);
return v___x_306_;
}
}
static lean_object* _init_l_term___u2194__(void){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = lean_obj_once(&l_term___u2194___00__closed__5, &l_term___u2194___00__closed__5_once, _init_l_term___u2194___00__closed__5);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2194____1(lean_object* v_x_308_, lean_object* v_a_309_, lean_object* v_a_310_){
_start:
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = lean_obj_once(&l_term___u2194___00__closed__1, &l_term___u2194___00__closed__1_once, _init_l_term___u2194___00__closed__1);
lean_inc(v_x_308_);
v___x_312_ = l_Lean_Syntax_isOfKind(v_x_308_, v___x_311_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; lean_object* v___x_314_; 
lean_dec(v_x_308_);
v___x_313_ = lean_box(1);
v___x_314_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_313_);
lean_ctor_set(v___x_314_, 1, v_a_310_);
return v___x_314_;
}
else
{
lean_object* v_quotContext_315_; lean_object* v_currMacroScope_316_; lean_object* v_ref_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; uint8_t v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_quotContext_315_ = lean_ctor_get(v_a_309_, 1);
v_currMacroScope_316_ = lean_ctor_get(v_a_309_, 2);
v_ref_317_ = lean_ctor_get(v_a_309_, 5);
v___x_318_ = lean_unsigned_to_nat(0u);
v___x_319_ = l_Lean_Syntax_getArg(v_x_308_, v___x_318_);
v___x_320_ = lean_unsigned_to_nat(2u);
v___x_321_ = l_Lean_Syntax_getArg(v_x_308_, v___x_320_);
lean_dec(v_x_308_);
v___x_322_ = 0;
v___x_323_ = l_Lean_SourceInfo_fromRef(v_ref_317_, v___x_322_);
v___x_324_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_325_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__6, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__6_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__6);
v___x_326_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__7);
lean_inc(v_currMacroScope_316_);
lean_inc(v_quotContext_315_);
v___x_327_ = l_Lean_addMacroScope(v_quotContext_315_, v___x_326_, v_currMacroScope_316_);
v___x_328_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__11, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__11_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__11);
lean_inc_n(v___x_323_, 2);
v___x_329_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_329_, 0, v___x_323_);
lean_ctor_set(v___x_329_, 1, v___x_325_);
lean_ctor_set(v___x_329_, 2, v___x_327_);
lean_ctor_set(v___x_329_, 3, v___x_328_);
v___x_330_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_331_ = l_Lean_Syntax_node2(v___x_323_, v___x_330_, v___x_319_, v___x_321_);
v___x_332_ = l_Lean_Syntax_node2(v___x_323_, v___x_324_, v___x_329_, v___x_331_);
v___x_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
lean_ctor_set(v___x_333_, 1, v_a_310_);
return v___x_333_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2194____1___boxed(lean_object* v_x_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l___aux__Init__Core______macroRules__term___u2194____1(v_x_334_, v_a_335_, v_a_336_);
lean_dec_ref(v_a_335_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Iff__2(lean_object* v_x_338_, lean_object* v_a_339_, lean_object* v_a_340_){
_start:
{
lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_341_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_338_);
v___x_342_ = l_Lean_Syntax_isOfKind(v_x_338_, v___x_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; lean_object* v___x_344_; 
lean_dec(v_x_338_);
v___x_343_ = lean_box(0);
v___x_344_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_343_);
lean_ctor_set(v___x_344_, 1, v_a_340_);
return v___x_344_;
}
else
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; uint8_t v___x_348_; 
v___x_345_ = lean_unsigned_to_nat(0u);
v___x_346_ = l_Lean_Syntax_getArg(v_x_338_, v___x_345_);
v___x_347_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_346_);
v___x_348_ = l_Lean_Syntax_isOfKind(v___x_346_, v___x_347_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; lean_object* v___x_350_; 
lean_dec(v___x_346_);
lean_dec(v_x_338_);
v___x_349_ = lean_box(0);
v___x_350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
lean_ctor_set(v___x_350_, 1, v_a_340_);
return v___x_350_;
}
else
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_351_ = lean_unsigned_to_nat(1u);
v___x_352_ = l_Lean_Syntax_getArg(v_x_338_, v___x_351_);
lean_dec(v_x_338_);
v___x_353_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_352_);
v___x_354_ = l_Lean_Syntax_matchesNull(v___x_352_, v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_356_; 
lean_dec(v___x_352_);
lean_dec(v___x_346_);
v___x_355_ = lean_box(0);
v___x_356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
lean_ctor_set(v___x_356_, 1, v_a_340_);
return v___x_356_;
}
else
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v_ref_359_; uint8_t v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_357_ = l_Lean_Syntax_getArg(v___x_352_, v___x_345_);
v___x_358_ = l_Lean_Syntax_getArg(v___x_352_, v___x_351_);
lean_dec(v___x_352_);
v_ref_359_ = l_Lean_replaceRef(v___x_346_, v_a_339_);
lean_dec(v___x_346_);
v___x_360_ = 0;
v___x_361_ = l_Lean_SourceInfo_fromRef(v_ref_359_, v___x_360_);
lean_dec(v_ref_359_);
v___x_362_ = lean_obj_once(&l_term___u2194___00__closed__1, &l_term___u2194___00__closed__1_once, _init_l_term___u2194___00__closed__1);
v___x_363_ = lean_obj_once(&l_term___u2194___00__closed__2, &l_term___u2194___00__closed__2_once, _init_l_term___u2194___00__closed__2);
lean_inc(v___x_361_);
v___x_364_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_361_);
lean_ctor_set(v___x_364_, 1, v___x_363_);
v___x_365_ = l_Lean_Syntax_node3(v___x_361_, v___x_362_, v___x_357_, v___x_364_, v___x_358_);
v___x_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
lean_ctor_set(v___x_366_, 1, v_a_340_);
return v___x_366_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Iff__2___boxed(lean_object* v_x_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l___aux__Init__Core______unexpand__Iff__2(v_x_367_, v_a_368_, v_a_369_);
lean_dec(v_a_368_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Sum_ctorIdx___redArg(lean_object* v_x_371_){
_start:
{
if (lean_obj_tag(v_x_371_) == 0)
{
lean_object* v___x_372_; 
v___x_372_ = lean_unsigned_to_nat(0u);
return v___x_372_;
}
else
{
lean_object* v___x_373_; 
v___x_373_ = lean_unsigned_to_nat(1u);
return v___x_373_;
}
}
}
LEAN_EXPORT lean_object* l_Sum_ctorIdx___redArg___boxed(lean_object* v_x_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Sum_ctorIdx___redArg(v_x_374_);
lean_dec_ref(v_x_374_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Sum_ctorIdx(lean_object* v_00_u03b1_376_, lean_object* v_00_u03b2_377_, lean_object* v_x_378_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l_Sum_ctorIdx___redArg(v_x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Sum_ctorIdx___boxed(lean_object* v_00_u03b1_380_, lean_object* v_00_u03b2_381_, lean_object* v_x_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Sum_ctorIdx(v_00_u03b1_380_, v_00_u03b2_381_, v_x_382_);
lean_dec_ref(v_x_382_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Sum_ctorElim___redArg(lean_object* v_t_384_, lean_object* v_k_385_){
_start:
{
lean_object* v_val_386_; lean_object* v___x_387_; 
v_val_386_ = lean_ctor_get(v_t_384_, 0);
lean_inc(v_val_386_);
lean_dec_ref(v_t_384_);
v___x_387_ = lean_apply_1(v_k_385_, v_val_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Sum_ctorElim(lean_object* v_00_u03b1_388_, lean_object* v_00_u03b2_389_, lean_object* v_motive_390_, lean_object* v_ctorIdx_391_, lean_object* v_t_392_, lean_object* v_h_393_, lean_object* v_k_394_){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = l_Sum_ctorElim___redArg(v_t_392_, v_k_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Sum_ctorElim___boxed(lean_object* v_00_u03b1_396_, lean_object* v_00_u03b2_397_, lean_object* v_motive_398_, lean_object* v_ctorIdx_399_, lean_object* v_t_400_, lean_object* v_h_401_, lean_object* v_k_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Sum_ctorElim(v_00_u03b1_396_, v_00_u03b2_397_, v_motive_398_, v_ctorIdx_399_, v_t_400_, v_h_401_, v_k_402_);
lean_dec(v_ctorIdx_399_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Sum_inl_elim___redArg(lean_object* v_t_404_, lean_object* v_inl_405_){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = l_Sum_ctorElim___redArg(v_t_404_, v_inl_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Sum_inl_elim(lean_object* v_00_u03b1_407_, lean_object* v_00_u03b2_408_, lean_object* v_motive_409_, lean_object* v_t_410_, lean_object* v_h_411_, lean_object* v_inl_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Sum_ctorElim___redArg(v_t_410_, v_inl_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Sum_inr_elim___redArg(lean_object* v_t_414_, lean_object* v_inr_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Sum_ctorElim___redArg(v_t_414_, v_inr_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Sum_inr_elim(lean_object* v_00_u03b1_417_, lean_object* v_00_u03b2_418_, lean_object* v_motive_419_, lean_object* v_t_420_, lean_object* v_h_421_, lean_object* v_inr_422_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_Sum_ctorElim___redArg(v_t_420_, v_inr_422_);
return v___x_423_;
}
}
static lean_object* _init_l_term___u2295___00__closed__0(void){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = lean_mk_string_unchecked("term_⊕_", 9, 7);
return v___x_424_;
}
}
static lean_object* _init_l_term___u2295___00__closed__1(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = lean_obj_once(&l_term___u2295___00__closed__0, &l_term___u2295___00__closed__0_once, _init_l_term___u2295___00__closed__0);
v___x_426_ = l_Lean_Name_mkStr1(v___x_425_);
return v___x_426_;
}
}
static lean_object* _init_l_term___u2295___00__closed__2(void){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = lean_mk_string_unchecked(" ⊕ ", 5, 3);
return v___x_427_;
}
}
static lean_object* _init_l_term___u2295___00__closed__3(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_428_ = lean_obj_once(&l_term___u2295___00__closed__2, &l_term___u2295___00__closed__2_once, _init_l_term___u2295___00__closed__2);
v___x_429_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
return v___x_429_;
}
}
static lean_object* _init_l_term___u2295___00__closed__4(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_430_ = lean_unsigned_to_nat(30u);
v___x_431_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__7, &l_term___x3c_x2d_x3e___00__closed__7_once, _init_l_term___x3c_x2d_x3e___00__closed__7);
v___x_432_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
lean_ctor_set(v___x_432_, 1, v___x_430_);
return v___x_432_;
}
}
static lean_object* _init_l_term___u2295___00__closed__5(void){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_433_ = lean_obj_once(&l_term___u2295___00__closed__4, &l_term___u2295___00__closed__4_once, _init_l_term___u2295___00__closed__4);
v___x_434_ = lean_obj_once(&l_term___u2295___00__closed__3, &l_term___u2295___00__closed__3_once, _init_l_term___u2295___00__closed__3);
v___x_435_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_436_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
lean_ctor_set(v___x_436_, 1, v___x_434_);
lean_ctor_set(v___x_436_, 2, v___x_433_);
return v___x_436_;
}
}
static lean_object* _init_l_term___u2295___00__closed__6(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_437_ = lean_obj_once(&l_term___u2295___00__closed__5, &l_term___u2295___00__closed__5_once, _init_l_term___u2295___00__closed__5);
v___x_438_ = lean_unsigned_to_nat(31u);
v___x_439_ = lean_unsigned_to_nat(30u);
v___x_440_ = lean_obj_once(&l_term___u2295___00__closed__1, &l_term___u2295___00__closed__1_once, _init_l_term___u2295___00__closed__1);
v___x_441_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set(v___x_441_, 1, v___x_439_);
lean_ctor_set(v___x_441_, 2, v___x_438_);
lean_ctor_set(v___x_441_, 3, v___x_437_);
return v___x_441_;
}
}
static lean_object* _init_l_term___u2295__(void){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = lean_obj_once(&l_term___u2295___00__closed__6, &l_term___u2295___00__closed__6_once, _init_l_term___u2295___00__closed__6);
return v___x_442_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__0(void){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = lean_mk_string_unchecked("Sum", 3, 3);
return v___x_443_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__1(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295____1___closed__0, &l___aux__Init__Core______macroRules__term___u2295____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__0);
v___x_445_ = l_String_toRawSubstring_x27(v___x_444_);
return v___x_445_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__2(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295____1___closed__0, &l___aux__Init__Core______macroRules__term___u2295____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__0);
v___x_447_ = l_Lean_Name_mkStr1(v___x_446_);
return v___x_447_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__3(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_448_ = lean_box(0);
v___x_449_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295____1___closed__2, &l___aux__Init__Core______macroRules__term___u2295____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__2);
v___x_450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
lean_ctor_set(v___x_450_, 1, v___x_448_);
return v___x_450_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__4(void){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_451_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295____1___closed__2, &l___aux__Init__Core______macroRules__term___u2295____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__2);
v___x_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
return v___x_452_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__5(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_453_ = lean_box(0);
v___x_454_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295____1___closed__4, &l___aux__Init__Core______macroRules__term___u2295____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__4);
v___x_455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_453_);
return v___x_455_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__6(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_456_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295____1___closed__5, &l___aux__Init__Core______macroRules__term___u2295____1___closed__5_once, _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__5);
v___x_457_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295____1___closed__3, &l___aux__Init__Core______macroRules__term___u2295____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__3);
v___x_458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v___x_456_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2295____1(lean_object* v_x_459_, lean_object* v_a_460_, lean_object* v_a_461_){
_start:
{
lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_462_ = lean_obj_once(&l_term___u2295___00__closed__1, &l_term___u2295___00__closed__1_once, _init_l_term___u2295___00__closed__1);
lean_inc(v_x_459_);
v___x_463_ = l_Lean_Syntax_isOfKind(v_x_459_, v___x_462_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; lean_object* v___x_465_; 
lean_dec(v_x_459_);
v___x_464_ = lean_box(1);
v___x_465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
lean_ctor_set(v___x_465_, 1, v_a_461_);
return v___x_465_;
}
else
{
lean_object* v_quotContext_466_; lean_object* v_currMacroScope_467_; lean_object* v_ref_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; uint8_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_quotContext_466_ = lean_ctor_get(v_a_460_, 1);
v_currMacroScope_467_ = lean_ctor_get(v_a_460_, 2);
v_ref_468_ = lean_ctor_get(v_a_460_, 5);
v___x_469_ = lean_unsigned_to_nat(0u);
v___x_470_ = l_Lean_Syntax_getArg(v_x_459_, v___x_469_);
v___x_471_ = lean_unsigned_to_nat(2u);
v___x_472_ = l_Lean_Syntax_getArg(v_x_459_, v___x_471_);
lean_dec(v_x_459_);
v___x_473_ = 0;
v___x_474_ = l_Lean_SourceInfo_fromRef(v_ref_468_, v___x_473_);
v___x_475_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_476_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295____1___closed__1, &l___aux__Init__Core______macroRules__term___u2295____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__1);
v___x_477_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295____1___closed__2, &l___aux__Init__Core______macroRules__term___u2295____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__2);
lean_inc(v_currMacroScope_467_);
lean_inc(v_quotContext_466_);
v___x_478_ = l_Lean_addMacroScope(v_quotContext_466_, v___x_477_, v_currMacroScope_467_);
v___x_479_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295____1___closed__6, &l___aux__Init__Core______macroRules__term___u2295____1___closed__6_once, _init_l___aux__Init__Core______macroRules__term___u2295____1___closed__6);
lean_inc_n(v___x_474_, 2);
v___x_480_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_480_, 0, v___x_474_);
lean_ctor_set(v___x_480_, 1, v___x_476_);
lean_ctor_set(v___x_480_, 2, v___x_478_);
lean_ctor_set(v___x_480_, 3, v___x_479_);
v___x_481_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_482_ = l_Lean_Syntax_node2(v___x_474_, v___x_481_, v___x_470_, v___x_472_);
v___x_483_ = l_Lean_Syntax_node2(v___x_474_, v___x_475_, v___x_480_, v___x_482_);
v___x_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
lean_ctor_set(v___x_484_, 1, v_a_461_);
return v___x_484_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2295____1___boxed(lean_object* v_x_485_, lean_object* v_a_486_, lean_object* v_a_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l___aux__Init__Core______macroRules__term___u2295____1(v_x_485_, v_a_486_, v_a_487_);
lean_dec_ref(v_a_486_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Sum__1(lean_object* v_x_489_, lean_object* v_a_490_, lean_object* v_a_491_){
_start:
{
lean_object* v___x_492_; uint8_t v___x_493_; 
v___x_492_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_489_);
v___x_493_ = l_Lean_Syntax_isOfKind(v_x_489_, v___x_492_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; lean_object* v___x_495_; 
lean_dec(v_x_489_);
v___x_494_ = lean_box(0);
v___x_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v_a_491_);
return v___x_495_;
}
else
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_496_ = lean_unsigned_to_nat(0u);
v___x_497_ = l_Lean_Syntax_getArg(v_x_489_, v___x_496_);
v___x_498_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_497_);
v___x_499_ = l_Lean_Syntax_isOfKind(v___x_497_, v___x_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; lean_object* v___x_501_; 
lean_dec(v___x_497_);
lean_dec(v_x_489_);
v___x_500_ = lean_box(0);
v___x_501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
lean_ctor_set(v___x_501_, 1, v_a_491_);
return v___x_501_;
}
else
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_502_ = lean_unsigned_to_nat(1u);
v___x_503_ = l_Lean_Syntax_getArg(v_x_489_, v___x_502_);
lean_dec(v_x_489_);
v___x_504_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_503_);
v___x_505_ = l_Lean_Syntax_matchesNull(v___x_503_, v___x_504_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; lean_object* v___x_507_; 
lean_dec(v___x_503_);
lean_dec(v___x_497_);
v___x_506_ = lean_box(0);
v___x_507_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_507_, 0, v___x_506_);
lean_ctor_set(v___x_507_, 1, v_a_491_);
return v___x_507_;
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v_ref_510_; uint8_t v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_508_ = l_Lean_Syntax_getArg(v___x_503_, v___x_496_);
v___x_509_ = l_Lean_Syntax_getArg(v___x_503_, v___x_502_);
lean_dec(v___x_503_);
v_ref_510_ = l_Lean_replaceRef(v___x_497_, v_a_490_);
lean_dec(v___x_497_);
v___x_511_ = 0;
v___x_512_ = l_Lean_SourceInfo_fromRef(v_ref_510_, v___x_511_);
lean_dec(v_ref_510_);
v___x_513_ = lean_obj_once(&l_term___u2295___00__closed__1, &l_term___u2295___00__closed__1_once, _init_l_term___u2295___00__closed__1);
v___x_514_ = lean_obj_once(&l_term___u2295___00__closed__2, &l_term___u2295___00__closed__2_once, _init_l_term___u2295___00__closed__2);
lean_inc(v___x_512_);
v___x_515_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_512_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = l_Lean_Syntax_node3(v___x_512_, v___x_513_, v___x_508_, v___x_515_, v___x_509_);
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
lean_ctor_set(v___x_517_, 1, v_a_491_);
return v___x_517_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Sum__1___boxed(lean_object* v_x_518_, lean_object* v_a_519_, lean_object* v_a_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l___aux__Init__Core______unexpand__Sum__1(v_x_518_, v_a_519_, v_a_520_);
lean_dec(v_a_519_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_PSum_ctorIdx___redArg(lean_object* v_x_522_){
_start:
{
if (lean_obj_tag(v_x_522_) == 0)
{
lean_object* v___x_523_; 
v___x_523_ = lean_unsigned_to_nat(0u);
return v___x_523_;
}
else
{
lean_object* v___x_524_; 
v___x_524_ = lean_unsigned_to_nat(1u);
return v___x_524_;
}
}
}
LEAN_EXPORT lean_object* l_PSum_ctorIdx___redArg___boxed(lean_object* v_x_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_PSum_ctorIdx___redArg(v_x_525_);
lean_dec_ref(v_x_525_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_PSum_ctorIdx(lean_object* v_00_u03b1_527_, lean_object* v_00_u03b2_528_, lean_object* v_x_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l_PSum_ctorIdx___redArg(v_x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_PSum_ctorIdx___boxed(lean_object* v_00_u03b1_531_, lean_object* v_00_u03b2_532_, lean_object* v_x_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_PSum_ctorIdx(v_00_u03b1_531_, v_00_u03b2_532_, v_x_533_);
lean_dec_ref(v_x_533_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_PSum_ctorElim___redArg(lean_object* v_t_535_, lean_object* v_k_536_){
_start:
{
lean_object* v_val_537_; lean_object* v___x_538_; 
v_val_537_ = lean_ctor_get(v_t_535_, 0);
lean_inc(v_val_537_);
lean_dec_ref(v_t_535_);
v___x_538_ = lean_apply_1(v_k_536_, v_val_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_PSum_ctorElim(lean_object* v_00_u03b1_539_, lean_object* v_00_u03b2_540_, lean_object* v_motive_541_, lean_object* v_ctorIdx_542_, lean_object* v_t_543_, lean_object* v_h_544_, lean_object* v_k_545_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = l_PSum_ctorElim___redArg(v_t_543_, v_k_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_PSum_ctorElim___boxed(lean_object* v_00_u03b1_547_, lean_object* v_00_u03b2_548_, lean_object* v_motive_549_, lean_object* v_ctorIdx_550_, lean_object* v_t_551_, lean_object* v_h_552_, lean_object* v_k_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_PSum_ctorElim(v_00_u03b1_547_, v_00_u03b2_548_, v_motive_549_, v_ctorIdx_550_, v_t_551_, v_h_552_, v_k_553_);
lean_dec(v_ctorIdx_550_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_PSum_inl_elim___redArg(lean_object* v_t_555_, lean_object* v_inl_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_PSum_ctorElim___redArg(v_t_555_, v_inl_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_PSum_inl_elim(lean_object* v_00_u03b1_558_, lean_object* v_00_u03b2_559_, lean_object* v_motive_560_, lean_object* v_t_561_, lean_object* v_h_562_, lean_object* v_inl_563_){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = l_PSum_ctorElim___redArg(v_t_561_, v_inl_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_PSum_inr_elim___redArg(lean_object* v_t_565_, lean_object* v_inr_566_){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = l_PSum_ctorElim___redArg(v_t_565_, v_inr_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_PSum_inr_elim(lean_object* v_00_u03b1_568_, lean_object* v_00_u03b2_569_, lean_object* v_motive_570_, lean_object* v_t_571_, lean_object* v_h_572_, lean_object* v_inr_573_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_PSum_ctorElim___redArg(v_t_571_, v_inr_573_);
return v___x_574_;
}
}
static lean_object* _init_l_term___u2295_x27___00__closed__0(void){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = lean_mk_string_unchecked("term_⊕'_", 10, 8);
return v___x_575_;
}
}
static lean_object* _init_l_term___u2295_x27___00__closed__1(void){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_576_ = lean_obj_once(&l_term___u2295_x27___00__closed__0, &l_term___u2295_x27___00__closed__0_once, _init_l_term___u2295_x27___00__closed__0);
v___x_577_ = l_Lean_Name_mkStr1(v___x_576_);
return v___x_577_;
}
}
static lean_object* _init_l_term___u2295_x27___00__closed__2(void){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = lean_mk_string_unchecked(" ⊕' ", 6, 4);
return v___x_578_;
}
}
static lean_object* _init_l_term___u2295_x27___00__closed__3(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = lean_obj_once(&l_term___u2295_x27___00__closed__2, &l_term___u2295_x27___00__closed__2_once, _init_l_term___u2295_x27___00__closed__2);
v___x_580_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
return v___x_580_;
}
}
static lean_object* _init_l_term___u2295_x27___00__closed__4(void){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_581_ = lean_obj_once(&l_term___u2295___00__closed__4, &l_term___u2295___00__closed__4_once, _init_l_term___u2295___00__closed__4);
v___x_582_ = lean_obj_once(&l_term___u2295_x27___00__closed__3, &l_term___u2295_x27___00__closed__3_once, _init_l_term___u2295_x27___00__closed__3);
v___x_583_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_584_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
lean_ctor_set(v___x_584_, 1, v___x_582_);
lean_ctor_set(v___x_584_, 2, v___x_581_);
return v___x_584_;
}
}
static lean_object* _init_l_term___u2295_x27___00__closed__5(void){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_585_ = lean_obj_once(&l_term___u2295_x27___00__closed__4, &l_term___u2295_x27___00__closed__4_once, _init_l_term___u2295_x27___00__closed__4);
v___x_586_ = lean_unsigned_to_nat(31u);
v___x_587_ = lean_unsigned_to_nat(30u);
v___x_588_ = lean_obj_once(&l_term___u2295_x27___00__closed__1, &l_term___u2295_x27___00__closed__1_once, _init_l_term___u2295_x27___00__closed__1);
v___x_589_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
lean_ctor_set(v___x_589_, 1, v___x_587_);
lean_ctor_set(v___x_589_, 2, v___x_586_);
lean_ctor_set(v___x_589_, 3, v___x_585_);
return v___x_589_;
}
}
static lean_object* _init_l_term___u2295_x27__(void){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = lean_obj_once(&l_term___u2295_x27___00__closed__5, &l_term___u2295_x27___00__closed__5_once, _init_l_term___u2295_x27___00__closed__5);
return v___x_590_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__0(void){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = lean_mk_string_unchecked("PSum", 4, 4);
return v___x_591_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__1(void){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__0, &l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__0);
v___x_593_ = l_String_toRawSubstring_x27(v___x_592_);
return v___x_593_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__2(void){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__0, &l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__0);
v___x_595_ = l_Lean_Name_mkStr1(v___x_594_);
return v___x_595_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__3(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_596_ = lean_box(0);
v___x_597_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__2, &l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__2);
v___x_598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
lean_ctor_set(v___x_598_, 1, v___x_596_);
return v___x_598_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__4(void){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__2, &l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__2);
v___x_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
return v___x_600_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__5(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_601_ = lean_box(0);
v___x_602_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__4, &l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__4);
v___x_603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
lean_ctor_set(v___x_603_, 1, v___x_601_);
return v___x_603_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__6(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_604_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__5, &l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__5_once, _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__5);
v___x_605_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__3, &l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__3);
v___x_606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
lean_ctor_set(v___x_606_, 1, v___x_604_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2295_x27____1(lean_object* v_x_607_, lean_object* v_a_608_, lean_object* v_a_609_){
_start:
{
lean_object* v___x_610_; uint8_t v___x_611_; 
v___x_610_ = lean_obj_once(&l_term___u2295_x27___00__closed__1, &l_term___u2295_x27___00__closed__1_once, _init_l_term___u2295_x27___00__closed__1);
lean_inc(v_x_607_);
v___x_611_ = l_Lean_Syntax_isOfKind(v_x_607_, v___x_610_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; lean_object* v___x_613_; 
lean_dec(v_x_607_);
v___x_612_ = lean_box(1);
v___x_613_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
lean_ctor_set(v___x_613_, 1, v_a_609_);
return v___x_613_;
}
else
{
lean_object* v_quotContext_614_; lean_object* v_currMacroScope_615_; lean_object* v_ref_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; uint8_t v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v_quotContext_614_ = lean_ctor_get(v_a_608_, 1);
v_currMacroScope_615_ = lean_ctor_get(v_a_608_, 2);
v_ref_616_ = lean_ctor_get(v_a_608_, 5);
v___x_617_ = lean_unsigned_to_nat(0u);
v___x_618_ = l_Lean_Syntax_getArg(v_x_607_, v___x_617_);
v___x_619_ = lean_unsigned_to_nat(2u);
v___x_620_ = l_Lean_Syntax_getArg(v_x_607_, v___x_619_);
lean_dec(v_x_607_);
v___x_621_ = 0;
v___x_622_ = l_Lean_SourceInfo_fromRef(v_ref_616_, v___x_621_);
v___x_623_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_624_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__1, &l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__1);
v___x_625_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__2, &l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__2);
lean_inc(v_currMacroScope_615_);
lean_inc(v_quotContext_614_);
v___x_626_ = l_Lean_addMacroScope(v_quotContext_614_, v___x_625_, v_currMacroScope_615_);
v___x_627_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__6, &l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__6_once, _init_l___aux__Init__Core______macroRules__term___u2295_x27____1___closed__6);
lean_inc_n(v___x_622_, 2);
v___x_628_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_628_, 0, v___x_622_);
lean_ctor_set(v___x_628_, 1, v___x_624_);
lean_ctor_set(v___x_628_, 2, v___x_626_);
lean_ctor_set(v___x_628_, 3, v___x_627_);
v___x_629_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_630_ = l_Lean_Syntax_node2(v___x_622_, v___x_629_, v___x_618_, v___x_620_);
v___x_631_ = l_Lean_Syntax_node2(v___x_622_, v___x_623_, v___x_628_, v___x_630_);
v___x_632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
lean_ctor_set(v___x_632_, 1, v_a_609_);
return v___x_632_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2295_x27____1___boxed(lean_object* v_x_633_, lean_object* v_a_634_, lean_object* v_a_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l___aux__Init__Core______macroRules__term___u2295_x27____1(v_x_633_, v_a_634_, v_a_635_);
lean_dec_ref(v_a_634_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__PSum__1(lean_object* v_x_637_, lean_object* v_a_638_, lean_object* v_a_639_){
_start:
{
lean_object* v___x_640_; uint8_t v___x_641_; 
v___x_640_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_637_);
v___x_641_ = l_Lean_Syntax_isOfKind(v_x_637_, v___x_640_);
if (v___x_641_ == 0)
{
lean_object* v___x_642_; lean_object* v___x_643_; 
lean_dec(v_x_637_);
v___x_642_ = lean_box(0);
v___x_643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
lean_ctor_set(v___x_643_, 1, v_a_639_);
return v___x_643_;
}
else
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_644_ = lean_unsigned_to_nat(0u);
v___x_645_ = l_Lean_Syntax_getArg(v_x_637_, v___x_644_);
v___x_646_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_645_);
v___x_647_ = l_Lean_Syntax_isOfKind(v___x_645_, v___x_646_);
if (v___x_647_ == 0)
{
lean_object* v___x_648_; lean_object* v___x_649_; 
lean_dec(v___x_645_);
lean_dec(v_x_637_);
v___x_648_ = lean_box(0);
v___x_649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
lean_ctor_set(v___x_649_, 1, v_a_639_);
return v___x_649_;
}
else
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_650_ = lean_unsigned_to_nat(1u);
v___x_651_ = l_Lean_Syntax_getArg(v_x_637_, v___x_650_);
lean_dec(v_x_637_);
v___x_652_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_651_);
v___x_653_ = l_Lean_Syntax_matchesNull(v___x_651_, v___x_652_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; lean_object* v___x_655_; 
lean_dec(v___x_651_);
lean_dec(v___x_645_);
v___x_654_ = lean_box(0);
v___x_655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
lean_ctor_set(v___x_655_, 1, v_a_639_);
return v___x_655_;
}
else
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v_ref_658_; uint8_t v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_656_ = l_Lean_Syntax_getArg(v___x_651_, v___x_644_);
v___x_657_ = l_Lean_Syntax_getArg(v___x_651_, v___x_650_);
lean_dec(v___x_651_);
v_ref_658_ = l_Lean_replaceRef(v___x_645_, v_a_638_);
lean_dec(v___x_645_);
v___x_659_ = 0;
v___x_660_ = l_Lean_SourceInfo_fromRef(v_ref_658_, v___x_659_);
lean_dec(v_ref_658_);
v___x_661_ = lean_obj_once(&l_term___u2295_x27___00__closed__1, &l_term___u2295_x27___00__closed__1_once, _init_l_term___u2295_x27___00__closed__1);
v___x_662_ = lean_obj_once(&l_term___u2295_x27___00__closed__2, &l_term___u2295_x27___00__closed__2_once, _init_l_term___u2295_x27___00__closed__2);
lean_inc(v___x_660_);
v___x_663_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_660_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v___x_664_ = l_Lean_Syntax_node3(v___x_660_, v___x_661_, v___x_656_, v___x_663_, v___x_657_);
v___x_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
lean_ctor_set(v___x_665_, 1, v_a_639_);
return v___x_665_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__PSum__1___boxed(lean_object* v_x_666_, lean_object* v_a_667_, lean_object* v_a_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l___aux__Init__Core______unexpand__PSum__1(v_x_666_, v_a_667_, v_a_668_);
lean_dec(v_a_667_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_PSum_inhabitedLeft___redArg(lean_object* v_inst_670_){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_671_, 0, v_inst_670_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_PSum_inhabitedLeft(lean_object* v_00_u03b1_672_, lean_object* v_00_u03b2_673_, lean_object* v_inst_674_){
_start:
{
lean_object* v___x_675_; 
v___x_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_675_, 0, v_inst_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_PSum_inhabitedRight___redArg(lean_object* v_inst_676_){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_677_, 0, v_inst_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_PSum_inhabitedRight(lean_object* v_00_u03b1_678_, lean_object* v_00_u03b2_679_, lean_object* v_inst_680_){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_681_, 0, v_inst_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_ForInStep_ctorIdx___redArg(lean_object* v_x_682_){
_start:
{
if (lean_obj_tag(v_x_682_) == 0)
{
lean_object* v___x_683_; 
v___x_683_ = lean_unsigned_to_nat(0u);
return v___x_683_;
}
else
{
lean_object* v___x_684_; 
v___x_684_ = lean_unsigned_to_nat(1u);
return v___x_684_;
}
}
}
LEAN_EXPORT lean_object* l_ForInStep_ctorIdx___redArg___boxed(lean_object* v_x_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_ForInStep_ctorIdx___redArg(v_x_685_);
lean_dec_ref(v_x_685_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_ForInStep_ctorIdx(lean_object* v_00_u03b1_687_, lean_object* v_x_688_){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = l_ForInStep_ctorIdx___redArg(v_x_688_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_ForInStep_ctorIdx___boxed(lean_object* v_00_u03b1_690_, lean_object* v_x_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_ForInStep_ctorIdx(v_00_u03b1_690_, v_x_691_);
lean_dec_ref(v_x_691_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_ForInStep_ctorElim___redArg(lean_object* v_t_693_, lean_object* v_k_694_){
_start:
{
lean_object* v_a_695_; lean_object* v___x_696_; 
v_a_695_ = lean_ctor_get(v_t_693_, 0);
lean_inc(v_a_695_);
lean_dec_ref(v_t_693_);
v___x_696_ = lean_apply_1(v_k_694_, v_a_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_ForInStep_ctorElim(lean_object* v_00_u03b1_697_, lean_object* v_motive_698_, lean_object* v_ctorIdx_699_, lean_object* v_t_700_, lean_object* v_h_701_, lean_object* v_k_702_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = l_ForInStep_ctorElim___redArg(v_t_700_, v_k_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_ForInStep_ctorElim___boxed(lean_object* v_00_u03b1_704_, lean_object* v_motive_705_, lean_object* v_ctorIdx_706_, lean_object* v_t_707_, lean_object* v_h_708_, lean_object* v_k_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_ForInStep_ctorElim(v_00_u03b1_704_, v_motive_705_, v_ctorIdx_706_, v_t_707_, v_h_708_, v_k_709_);
lean_dec(v_ctorIdx_706_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_ForInStep_done_elim___redArg(lean_object* v_t_711_, lean_object* v_done_712_){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = l_ForInStep_ctorElim___redArg(v_t_711_, v_done_712_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_ForInStep_done_elim(lean_object* v_00_u03b1_714_, lean_object* v_motive_715_, lean_object* v_t_716_, lean_object* v_h_717_, lean_object* v_done_718_){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = l_ForInStep_ctorElim___redArg(v_t_716_, v_done_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_ForInStep_yield_elim___redArg(lean_object* v_t_720_, lean_object* v_yield_721_){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = l_ForInStep_ctorElim___redArg(v_t_720_, v_yield_721_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_ForInStep_yield_elim(lean_object* v_00_u03b1_723_, lean_object* v_motive_724_, lean_object* v_t_725_, lean_object* v_h_726_, lean_object* v_yield_727_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l_ForInStep_ctorElim___redArg(v_t_725_, v_yield_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedForInStep_default___redArg(lean_object* v_inst_729_){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v_inst_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedForInStep_default(lean_object* v_00_u03b1_731_, lean_object* v_inst_732_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_733_, 0, v_inst_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedForInStep___redArg(lean_object* v_inst_734_){
_start:
{
lean_object* v___x_735_; 
v___x_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_735_, 0, v_inst_734_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedForInStep(lean_object* v_a_736_, lean_object* v_inst_737_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_738_, 0, v_inst_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorIdx___redArg(lean_object* v_x_739_){
_start:
{
switch(lean_obj_tag(v_x_739_))
{
case 0:
{
lean_object* v___x_740_; 
v___x_740_ = lean_unsigned_to_nat(0u);
return v___x_740_;
}
case 1:
{
lean_object* v___x_741_; 
v___x_741_ = lean_unsigned_to_nat(1u);
return v___x_741_;
}
case 2:
{
lean_object* v___x_742_; 
v___x_742_ = lean_unsigned_to_nat(2u);
return v___x_742_;
}
default: 
{
lean_object* v___x_743_; 
v___x_743_ = lean_unsigned_to_nat(3u);
return v___x_743_;
}
}
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorIdx___redArg___boxed(lean_object* v_x_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_DoResultPRBC_ctorIdx___redArg(v_x_744_);
lean_dec_ref(v_x_744_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorIdx(lean_object* v_00_u03b1_746_, lean_object* v_00_u03b2_747_, lean_object* v_00_u03c3_748_, lean_object* v_x_749_){
_start:
{
lean_object* v___x_750_; 
v___x_750_ = l_DoResultPRBC_ctorIdx___redArg(v_x_749_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorIdx___boxed(lean_object* v_00_u03b1_751_, lean_object* v_00_u03b2_752_, lean_object* v_00_u03c3_753_, lean_object* v_x_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_DoResultPRBC_ctorIdx(v_00_u03b1_751_, v_00_u03b2_752_, v_00_u03c3_753_, v_x_754_);
lean_dec_ref(v_x_754_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorElim___redArg(lean_object* v_t_756_, lean_object* v_k_757_){
_start:
{
switch(lean_obj_tag(v_t_756_))
{
case 2:
{
lean_object* v_a_758_; lean_object* v___x_759_; 
v_a_758_ = lean_ctor_get(v_t_756_, 0);
lean_inc(v_a_758_);
lean_dec_ref(v_t_756_);
v___x_759_ = lean_apply_1(v_k_757_, v_a_758_);
return v___x_759_;
}
case 3:
{
lean_object* v_a_760_; lean_object* v___x_761_; 
v_a_760_ = lean_ctor_get(v_t_756_, 0);
lean_inc(v_a_760_);
lean_dec_ref(v_t_756_);
v___x_761_ = lean_apply_1(v_k_757_, v_a_760_);
return v___x_761_;
}
default: 
{
lean_object* v_a_762_; lean_object* v_a_763_; lean_object* v___x_764_; 
v_a_762_ = lean_ctor_get(v_t_756_, 0);
lean_inc(v_a_762_);
v_a_763_ = lean_ctor_get(v_t_756_, 1);
lean_inc(v_a_763_);
lean_dec_ref(v_t_756_);
v___x_764_ = lean_apply_2(v_k_757_, v_a_762_, v_a_763_);
return v___x_764_;
}
}
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorElim(lean_object* v_00_u03b1_765_, lean_object* v_00_u03b2_766_, lean_object* v_00_u03c3_767_, lean_object* v_motive_768_, lean_object* v_ctorIdx_769_, lean_object* v_t_770_, lean_object* v_h_771_, lean_object* v_k_772_){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = l_DoResultPRBC_ctorElim___redArg(v_t_770_, v_k_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_ctorElim___boxed(lean_object* v_00_u03b1_774_, lean_object* v_00_u03b2_775_, lean_object* v_00_u03c3_776_, lean_object* v_motive_777_, lean_object* v_ctorIdx_778_, lean_object* v_t_779_, lean_object* v_h_780_, lean_object* v_k_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_DoResultPRBC_ctorElim(v_00_u03b1_774_, v_00_u03b2_775_, v_00_u03c3_776_, v_motive_777_, v_ctorIdx_778_, v_t_779_, v_h_780_, v_k_781_);
lean_dec(v_ctorIdx_778_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_pure_elim___redArg(lean_object* v_t_783_, lean_object* v_pure_784_){
_start:
{
lean_object* v___x_785_; 
v___x_785_ = l_DoResultPRBC_ctorElim___redArg(v_t_783_, v_pure_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_pure_elim(lean_object* v_00_u03b1_786_, lean_object* v_00_u03b2_787_, lean_object* v_00_u03c3_788_, lean_object* v_motive_789_, lean_object* v_t_790_, lean_object* v_h_791_, lean_object* v_pure_792_){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = l_DoResultPRBC_ctorElim___redArg(v_t_790_, v_pure_792_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_return_elim___redArg(lean_object* v_t_794_, lean_object* v_return_795_){
_start:
{
lean_object* v___x_796_; 
v___x_796_ = l_DoResultPRBC_ctorElim___redArg(v_t_794_, v_return_795_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_return_elim(lean_object* v_00_u03b1_797_, lean_object* v_00_u03b2_798_, lean_object* v_00_u03c3_799_, lean_object* v_motive_800_, lean_object* v_t_801_, lean_object* v_h_802_, lean_object* v_return_803_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_DoResultPRBC_ctorElim___redArg(v_t_801_, v_return_803_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_break_elim___redArg(lean_object* v_t_805_, lean_object* v_break_806_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = l_DoResultPRBC_ctorElim___redArg(v_t_805_, v_break_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_break_elim(lean_object* v_00_u03b1_808_, lean_object* v_00_u03b2_809_, lean_object* v_00_u03c3_810_, lean_object* v_motive_811_, lean_object* v_t_812_, lean_object* v_h_813_, lean_object* v_break_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_DoResultPRBC_ctorElim___redArg(v_t_812_, v_break_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_continue_elim___redArg(lean_object* v_t_816_, lean_object* v_continue_817_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l_DoResultPRBC_ctorElim___redArg(v_t_816_, v_continue_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_DoResultPRBC_continue_elim(lean_object* v_00_u03b1_819_, lean_object* v_00_u03b2_820_, lean_object* v_00_u03c3_821_, lean_object* v_motive_822_, lean_object* v_t_823_, lean_object* v_h_824_, lean_object* v_continue_825_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l_DoResultPRBC_ctorElim___redArg(v_t_823_, v_continue_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_DoResultPR_ctorIdx___redArg(lean_object* v_x_827_){
_start:
{
if (lean_obj_tag(v_x_827_) == 0)
{
lean_object* v___x_828_; 
v___x_828_ = lean_unsigned_to_nat(0u);
return v___x_828_;
}
else
{
lean_object* v___x_829_; 
v___x_829_ = lean_unsigned_to_nat(1u);
return v___x_829_;
}
}
}
LEAN_EXPORT lean_object* l_DoResultPR_ctorIdx___redArg___boxed(lean_object* v_x_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_DoResultPR_ctorIdx___redArg(v_x_830_);
lean_dec_ref(v_x_830_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_DoResultPR_ctorIdx(lean_object* v_00_u03b1_832_, lean_object* v_00_u03b2_833_, lean_object* v_00_u03c3_834_, lean_object* v_x_835_){
_start:
{
lean_object* v___x_836_; 
v___x_836_ = l_DoResultPR_ctorIdx___redArg(v_x_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_DoResultPR_ctorIdx___boxed(lean_object* v_00_u03b1_837_, lean_object* v_00_u03b2_838_, lean_object* v_00_u03c3_839_, lean_object* v_x_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_DoResultPR_ctorIdx(v_00_u03b1_837_, v_00_u03b2_838_, v_00_u03c3_839_, v_x_840_);
lean_dec_ref(v_x_840_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_DoResultPR_ctorElim___redArg(lean_object* v_t_842_, lean_object* v_k_843_){
_start:
{
lean_object* v_a_844_; lean_object* v_a_845_; lean_object* v___x_846_; 
v_a_844_ = lean_ctor_get(v_t_842_, 0);
lean_inc(v_a_844_);
v_a_845_ = lean_ctor_get(v_t_842_, 1);
lean_inc(v_a_845_);
lean_dec_ref(v_t_842_);
v___x_846_ = lean_apply_2(v_k_843_, v_a_844_, v_a_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_DoResultPR_ctorElim(lean_object* v_00_u03b1_847_, lean_object* v_00_u03b2_848_, lean_object* v_00_u03c3_849_, lean_object* v_motive_850_, lean_object* v_ctorIdx_851_, lean_object* v_t_852_, lean_object* v_h_853_, lean_object* v_k_854_){
_start:
{
lean_object* v___x_855_; 
v___x_855_ = l_DoResultPR_ctorElim___redArg(v_t_852_, v_k_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_DoResultPR_ctorElim___boxed(lean_object* v_00_u03b1_856_, lean_object* v_00_u03b2_857_, lean_object* v_00_u03c3_858_, lean_object* v_motive_859_, lean_object* v_ctorIdx_860_, lean_object* v_t_861_, lean_object* v_h_862_, lean_object* v_k_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_DoResultPR_ctorElim(v_00_u03b1_856_, v_00_u03b2_857_, v_00_u03c3_858_, v_motive_859_, v_ctorIdx_860_, v_t_861_, v_h_862_, v_k_863_);
lean_dec(v_ctorIdx_860_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_DoResultPR_pure_elim___redArg(lean_object* v_t_865_, lean_object* v_pure_866_){
_start:
{
lean_object* v___x_867_; 
v___x_867_ = l_DoResultPR_ctorElim___redArg(v_t_865_, v_pure_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_DoResultPR_pure_elim(lean_object* v_00_u03b1_868_, lean_object* v_00_u03b2_869_, lean_object* v_00_u03c3_870_, lean_object* v_motive_871_, lean_object* v_t_872_, lean_object* v_h_873_, lean_object* v_pure_874_){
_start:
{
lean_object* v___x_875_; 
v___x_875_ = l_DoResultPR_ctorElim___redArg(v_t_872_, v_pure_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_DoResultPR_return_elim___redArg(lean_object* v_t_876_, lean_object* v_return_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_DoResultPR_ctorElim___redArg(v_t_876_, v_return_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_DoResultPR_return_elim(lean_object* v_00_u03b1_879_, lean_object* v_00_u03b2_880_, lean_object* v_00_u03c3_881_, lean_object* v_motive_882_, lean_object* v_t_883_, lean_object* v_h_884_, lean_object* v_return_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l_DoResultPR_ctorElim___redArg(v_t_883_, v_return_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_DoResultBC_ctorIdx___redArg(lean_object* v_x_887_){
_start:
{
if (lean_obj_tag(v_x_887_) == 0)
{
lean_object* v___x_888_; 
v___x_888_ = lean_unsigned_to_nat(0u);
return v___x_888_;
}
else
{
lean_object* v___x_889_; 
v___x_889_ = lean_unsigned_to_nat(1u);
return v___x_889_;
}
}
}
LEAN_EXPORT lean_object* l_DoResultBC_ctorIdx___redArg___boxed(lean_object* v_x_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_DoResultBC_ctorIdx___redArg(v_x_890_);
lean_dec_ref(v_x_890_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_DoResultBC_ctorIdx(lean_object* v_00_u03c3_892_, lean_object* v_x_893_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_DoResultBC_ctorIdx___redArg(v_x_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_DoResultBC_ctorIdx___boxed(lean_object* v_00_u03c3_895_, lean_object* v_x_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_DoResultBC_ctorIdx(v_00_u03c3_895_, v_x_896_);
lean_dec_ref(v_x_896_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_DoResultBC_ctorElim___redArg(lean_object* v_t_898_, lean_object* v_k_899_){
_start:
{
lean_object* v_a_900_; lean_object* v___x_901_; 
v_a_900_ = lean_ctor_get(v_t_898_, 0);
lean_inc(v_a_900_);
lean_dec_ref(v_t_898_);
v___x_901_ = lean_apply_1(v_k_899_, v_a_900_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_DoResultBC_ctorElim(lean_object* v_00_u03c3_902_, lean_object* v_motive_903_, lean_object* v_ctorIdx_904_, lean_object* v_t_905_, lean_object* v_h_906_, lean_object* v_k_907_){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = l_DoResultBC_ctorElim___redArg(v_t_905_, v_k_907_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_DoResultBC_ctorElim___boxed(lean_object* v_00_u03c3_909_, lean_object* v_motive_910_, lean_object* v_ctorIdx_911_, lean_object* v_t_912_, lean_object* v_h_913_, lean_object* v_k_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_DoResultBC_ctorElim(v_00_u03c3_909_, v_motive_910_, v_ctorIdx_911_, v_t_912_, v_h_913_, v_k_914_);
lean_dec(v_ctorIdx_911_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_DoResultBC_break_elim___redArg(lean_object* v_t_916_, lean_object* v_break_917_){
_start:
{
lean_object* v___x_918_; 
v___x_918_ = l_DoResultBC_ctorElim___redArg(v_t_916_, v_break_917_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_DoResultBC_break_elim(lean_object* v_00_u03c3_919_, lean_object* v_motive_920_, lean_object* v_t_921_, lean_object* v_h_922_, lean_object* v_break_923_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_DoResultBC_ctorElim___redArg(v_t_921_, v_break_923_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_DoResultBC_continue_elim___redArg(lean_object* v_t_925_, lean_object* v_continue_926_){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = l_DoResultBC_ctorElim___redArg(v_t_925_, v_continue_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_DoResultBC_continue_elim(lean_object* v_00_u03c3_928_, lean_object* v_motive_929_, lean_object* v_t_930_, lean_object* v_h_931_, lean_object* v_continue_932_){
_start:
{
lean_object* v___x_933_; 
v___x_933_ = l_DoResultBC_ctorElim___redArg(v_t_930_, v_continue_932_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_ctorIdx___redArg(lean_object* v_x_934_){
_start:
{
switch(lean_obj_tag(v_x_934_))
{
case 0:
{
lean_object* v___x_935_; 
v___x_935_ = lean_unsigned_to_nat(0u);
return v___x_935_;
}
case 1:
{
lean_object* v___x_936_; 
v___x_936_ = lean_unsigned_to_nat(1u);
return v___x_936_;
}
default: 
{
lean_object* v___x_937_; 
v___x_937_ = lean_unsigned_to_nat(2u);
return v___x_937_;
}
}
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_ctorIdx___redArg___boxed(lean_object* v_x_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_DoResultSBC_ctorIdx___redArg(v_x_938_);
lean_dec_ref(v_x_938_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_ctorIdx(lean_object* v_00_u03b1_940_, lean_object* v_00_u03c3_941_, lean_object* v_x_942_){
_start:
{
lean_object* v___x_943_; 
v___x_943_ = l_DoResultSBC_ctorIdx___redArg(v_x_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_ctorIdx___boxed(lean_object* v_00_u03b1_944_, lean_object* v_00_u03c3_945_, lean_object* v_x_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_DoResultSBC_ctorIdx(v_00_u03b1_944_, v_00_u03c3_945_, v_x_946_);
lean_dec_ref(v_x_946_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_ctorElim___redArg(lean_object* v_t_948_, lean_object* v_k_949_){
_start:
{
if (lean_obj_tag(v_t_948_) == 0)
{
lean_object* v_a_950_; lean_object* v_a_951_; lean_object* v___x_952_; 
v_a_950_ = lean_ctor_get(v_t_948_, 0);
lean_inc(v_a_950_);
v_a_951_ = lean_ctor_get(v_t_948_, 1);
lean_inc(v_a_951_);
lean_dec_ref(v_t_948_);
v___x_952_ = lean_apply_2(v_k_949_, v_a_950_, v_a_951_);
return v___x_952_;
}
else
{
lean_object* v_a_953_; lean_object* v___x_954_; 
v_a_953_ = lean_ctor_get(v_t_948_, 0);
lean_inc(v_a_953_);
lean_dec_ref(v_t_948_);
v___x_954_ = lean_apply_1(v_k_949_, v_a_953_);
return v___x_954_;
}
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_ctorElim(lean_object* v_00_u03b1_955_, lean_object* v_00_u03c3_956_, lean_object* v_motive_957_, lean_object* v_ctorIdx_958_, lean_object* v_t_959_, lean_object* v_h_960_, lean_object* v_k_961_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = l_DoResultSBC_ctorElim___redArg(v_t_959_, v_k_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_ctorElim___boxed(lean_object* v_00_u03b1_963_, lean_object* v_00_u03c3_964_, lean_object* v_motive_965_, lean_object* v_ctorIdx_966_, lean_object* v_t_967_, lean_object* v_h_968_, lean_object* v_k_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_DoResultSBC_ctorElim(v_00_u03b1_963_, v_00_u03c3_964_, v_motive_965_, v_ctorIdx_966_, v_t_967_, v_h_968_, v_k_969_);
lean_dec(v_ctorIdx_966_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_pureReturn_elim___redArg(lean_object* v_t_971_, lean_object* v_pureReturn_972_){
_start:
{
lean_object* v___x_973_; 
v___x_973_ = l_DoResultSBC_ctorElim___redArg(v_t_971_, v_pureReturn_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_pureReturn_elim(lean_object* v_00_u03b1_974_, lean_object* v_00_u03c3_975_, lean_object* v_motive_976_, lean_object* v_t_977_, lean_object* v_h_978_, lean_object* v_pureReturn_979_){
_start:
{
lean_object* v___x_980_; 
v___x_980_ = l_DoResultSBC_ctorElim___redArg(v_t_977_, v_pureReturn_979_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_break_elim___redArg(lean_object* v_t_981_, lean_object* v_break_982_){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = l_DoResultSBC_ctorElim___redArg(v_t_981_, v_break_982_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_break_elim(lean_object* v_00_u03b1_984_, lean_object* v_00_u03c3_985_, lean_object* v_motive_986_, lean_object* v_t_987_, lean_object* v_h_988_, lean_object* v_break_989_){
_start:
{
lean_object* v___x_990_; 
v___x_990_ = l_DoResultSBC_ctorElim___redArg(v_t_987_, v_break_989_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_continue_elim___redArg(lean_object* v_t_991_, lean_object* v_continue_992_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = l_DoResultSBC_ctorElim___redArg(v_t_991_, v_continue_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_DoResultSBC_continue_elim(lean_object* v_00_u03b1_994_, lean_object* v_00_u03c3_995_, lean_object* v_motive_996_, lean_object* v_t_997_, lean_object* v_h_998_, lean_object* v_continue_999_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = l_DoResultSBC_ctorElim___redArg(v_t_997_, v_continue_999_);
return v___x_1000_;
}
}
static lean_object* _init_l_term___u2248___00__closed__0(void){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = lean_mk_string_unchecked("term_≈_", 9, 7);
return v___x_1001_;
}
}
static lean_object* _init_l_term___u2248___00__closed__1(void){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1002_ = lean_obj_once(&l_term___u2248___00__closed__0, &l_term___u2248___00__closed__0_once, _init_l_term___u2248___00__closed__0);
v___x_1003_ = l_Lean_Name_mkStr1(v___x_1002_);
return v___x_1003_;
}
}
static lean_object* _init_l_term___u2248___00__closed__2(void){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = lean_mk_string_unchecked(" ≈ ", 5, 3);
return v___x_1004_;
}
}
static lean_object* _init_l_term___u2248___00__closed__3(void){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_obj_once(&l_term___u2248___00__closed__2, &l_term___u2248___00__closed__2_once, _init_l_term___u2248___00__closed__2);
v___x_1006_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
return v___x_1006_;
}
}
static lean_object* _init_l_term___u2248___00__closed__4(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1007_ = lean_unsigned_to_nat(51u);
v___x_1008_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__7, &l_term___x3c_x2d_x3e___00__closed__7_once, _init_l_term___x3c_x2d_x3e___00__closed__7);
v___x_1009_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
lean_ctor_set(v___x_1009_, 1, v___x_1007_);
return v___x_1009_;
}
}
static lean_object* _init_l_term___u2248___00__closed__5(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1010_ = lean_obj_once(&l_term___u2248___00__closed__4, &l_term___u2248___00__closed__4_once, _init_l_term___u2248___00__closed__4);
v___x_1011_ = lean_obj_once(&l_term___u2248___00__closed__3, &l_term___u2248___00__closed__3_once, _init_l_term___u2248___00__closed__3);
v___x_1012_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_1013_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1012_);
lean_ctor_set(v___x_1013_, 1, v___x_1011_);
lean_ctor_set(v___x_1013_, 2, v___x_1010_);
return v___x_1013_;
}
}
static lean_object* _init_l_term___u2248___00__closed__6(void){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1014_ = lean_obj_once(&l_term___u2248___00__closed__5, &l_term___u2248___00__closed__5_once, _init_l_term___u2248___00__closed__5);
v___x_1015_ = lean_unsigned_to_nat(51u);
v___x_1016_ = lean_unsigned_to_nat(50u);
v___x_1017_ = lean_obj_once(&l_term___u2248___00__closed__1, &l_term___u2248___00__closed__1_once, _init_l_term___u2248___00__closed__1);
v___x_1018_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1017_);
lean_ctor_set(v___x_1018_, 1, v___x_1016_);
lean_ctor_set(v___x_1018_, 2, v___x_1015_);
lean_ctor_set(v___x_1018_, 3, v___x_1014_);
return v___x_1018_;
}
}
static lean_object* _init_l_term___u2248__(void){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = lean_obj_once(&l_term___u2248___00__closed__6, &l_term___u2248___00__closed__6_once, _init_l_term___u2248___00__closed__6);
return v___x_1019_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__0(void){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = lean_mk_string_unchecked("HasEquiv.Equiv", 14, 14);
return v___x_1020_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__1(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2248____1___closed__0, &l___aux__Init__Core______macroRules__term___u2248____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__0);
v___x_1022_ = l_String_toRawSubstring_x27(v___x_1021_);
return v___x_1022_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__2(void){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = lean_mk_string_unchecked("HasEquiv", 8, 8);
return v___x_1023_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__3(void){
_start:
{
lean_object* v___x_1024_; 
v___x_1024_ = lean_mk_string_unchecked("Equiv", 5, 5);
return v___x_1024_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__4(void){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1025_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2248____1___closed__3, &l___aux__Init__Core______macroRules__term___u2248____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__3);
v___x_1026_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2248____1___closed__2, &l___aux__Init__Core______macroRules__term___u2248____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__2);
v___x_1027_ = l_Lean_Name_mkStr2(v___x_1026_, v___x_1025_);
return v___x_1027_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__5(void){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1028_ = lean_box(0);
v___x_1029_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2248____1___closed__4, &l___aux__Init__Core______macroRules__term___u2248____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__4);
v___x_1030_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1029_);
lean_ctor_set(v___x_1030_, 1, v___x_1028_);
return v___x_1030_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__6(void){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1031_ = lean_box(0);
v___x_1032_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2248____1___closed__5, &l___aux__Init__Core______macroRules__term___u2248____1___closed__5_once, _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__5);
v___x_1033_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1032_);
lean_ctor_set(v___x_1033_, 1, v___x_1031_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2248____1(lean_object* v_x_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_){
_start:
{
lean_object* v___x_1037_; uint8_t v___x_1038_; 
v___x_1037_ = lean_obj_once(&l_term___u2248___00__closed__1, &l_term___u2248___00__closed__1_once, _init_l_term___u2248___00__closed__1);
lean_inc(v_x_1034_);
v___x_1038_ = l_Lean_Syntax_isOfKind(v_x_1034_, v___x_1037_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
lean_dec(v_x_1034_);
v___x_1039_ = lean_box(1);
v___x_1040_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1039_);
lean_ctor_set(v___x_1040_, 1, v_a_1036_);
return v___x_1040_;
}
else
{
lean_object* v_quotContext_1041_; lean_object* v_currMacroScope_1042_; lean_object* v_ref_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; uint8_t v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v_quotContext_1041_ = lean_ctor_get(v_a_1035_, 1);
v_currMacroScope_1042_ = lean_ctor_get(v_a_1035_, 2);
v_ref_1043_ = lean_ctor_get(v_a_1035_, 5);
v___x_1044_ = lean_unsigned_to_nat(0u);
v___x_1045_ = l_Lean_Syntax_getArg(v_x_1034_, v___x_1044_);
v___x_1046_ = lean_unsigned_to_nat(2u);
v___x_1047_ = l_Lean_Syntax_getArg(v_x_1034_, v___x_1046_);
lean_dec(v_x_1034_);
v___x_1048_ = 0;
v___x_1049_ = l_Lean_SourceInfo_fromRef(v_ref_1043_, v___x_1048_);
v___x_1050_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_1051_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2248____1___closed__1, &l___aux__Init__Core______macroRules__term___u2248____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__1);
v___x_1052_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2248____1___closed__4, &l___aux__Init__Core______macroRules__term___u2248____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__4);
lean_inc(v_currMacroScope_1042_);
lean_inc(v_quotContext_1041_);
v___x_1053_ = l_Lean_addMacroScope(v_quotContext_1041_, v___x_1052_, v_currMacroScope_1042_);
v___x_1054_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2248____1___closed__6, &l___aux__Init__Core______macroRules__term___u2248____1___closed__6_once, _init_l___aux__Init__Core______macroRules__term___u2248____1___closed__6);
lean_inc_n(v___x_1049_, 2);
v___x_1055_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1049_);
lean_ctor_set(v___x_1055_, 1, v___x_1051_);
lean_ctor_set(v___x_1055_, 2, v___x_1053_);
lean_ctor_set(v___x_1055_, 3, v___x_1054_);
v___x_1056_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_1057_ = l_Lean_Syntax_node2(v___x_1049_, v___x_1056_, v___x_1045_, v___x_1047_);
v___x_1058_ = l_Lean_Syntax_node2(v___x_1049_, v___x_1050_, v___x_1055_, v___x_1057_);
v___x_1059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
lean_ctor_set(v___x_1059_, 1, v_a_1036_);
return v___x_1059_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2248____1___boxed(lean_object* v_x_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l___aux__Init__Core______macroRules__term___u2248____1(v_x_1060_, v_a_1061_, v_a_1062_);
lean_dec_ref(v_a_1061_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__HasEquiv__Equiv__1(lean_object* v_x_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_){
_start:
{
lean_object* v___x_1067_; uint8_t v___x_1068_; 
v___x_1067_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_1064_);
v___x_1068_ = l_Lean_Syntax_isOfKind(v_x_1064_, v___x_1067_);
if (v___x_1068_ == 0)
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
lean_dec(v_x_1064_);
v___x_1069_ = lean_box(0);
v___x_1070_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
lean_ctor_set(v___x_1070_, 1, v_a_1066_);
return v___x_1070_;
}
else
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; uint8_t v___x_1074_; 
v___x_1071_ = lean_unsigned_to_nat(0u);
v___x_1072_ = l_Lean_Syntax_getArg(v_x_1064_, v___x_1071_);
v___x_1073_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_1072_);
v___x_1074_ = l_Lean_Syntax_isOfKind(v___x_1072_, v___x_1073_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
lean_dec(v___x_1072_);
lean_dec(v_x_1064_);
v___x_1075_ = lean_box(0);
v___x_1076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
lean_ctor_set(v___x_1076_, 1, v_a_1066_);
return v___x_1076_;
}
else
{
lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1077_ = lean_unsigned_to_nat(1u);
v___x_1078_ = l_Lean_Syntax_getArg(v_x_1064_, v___x_1077_);
lean_dec(v_x_1064_);
v___x_1079_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1078_);
v___x_1080_ = l_Lean_Syntax_matchesNull(v___x_1078_, v___x_1079_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
lean_dec(v___x_1078_);
lean_dec(v___x_1072_);
v___x_1081_ = lean_box(0);
v___x_1082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1081_);
lean_ctor_set(v___x_1082_, 1, v_a_1066_);
return v___x_1082_;
}
else
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v_ref_1085_; uint8_t v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1083_ = l_Lean_Syntax_getArg(v___x_1078_, v___x_1071_);
v___x_1084_ = l_Lean_Syntax_getArg(v___x_1078_, v___x_1077_);
lean_dec(v___x_1078_);
v_ref_1085_ = l_Lean_replaceRef(v___x_1072_, v_a_1065_);
lean_dec(v___x_1072_);
v___x_1086_ = 0;
v___x_1087_ = l_Lean_SourceInfo_fromRef(v_ref_1085_, v___x_1086_);
lean_dec(v_ref_1085_);
v___x_1088_ = lean_obj_once(&l_term___u2248___00__closed__1, &l_term___u2248___00__closed__1_once, _init_l_term___u2248___00__closed__1);
v___x_1089_ = lean_obj_once(&l_term___u2248___00__closed__2, &l_term___u2248___00__closed__2_once, _init_l_term___u2248___00__closed__2);
lean_inc(v___x_1087_);
v___x_1090_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1087_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = l_Lean_Syntax_node3(v___x_1087_, v___x_1088_, v___x_1083_, v___x_1090_, v___x_1084_);
v___x_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
lean_ctor_set(v___x_1092_, 1, v_a_1066_);
return v___x_1092_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__HasEquiv__Equiv__1___boxed(lean_object* v_x_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l___aux__Init__Core______unexpand__HasEquiv__Equiv__1(v_x_1093_, v_a_1094_, v_a_1095_);
lean_dec(v_a_1094_);
return v_res_1096_;
}
}
static lean_object* _init_l_term___u2286___00__closed__0(void){
_start:
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_mk_string_unchecked("term_⊆_", 9, 7);
return v___x_1097_;
}
}
static lean_object* _init_l_term___u2286___00__closed__1(void){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = lean_obj_once(&l_term___u2286___00__closed__0, &l_term___u2286___00__closed__0_once, _init_l_term___u2286___00__closed__0);
v___x_1099_ = l_Lean_Name_mkStr1(v___x_1098_);
return v___x_1099_;
}
}
static lean_object* _init_l_term___u2286___00__closed__2(void){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = lean_mk_string_unchecked(" ⊆ ", 5, 3);
return v___x_1100_;
}
}
static lean_object* _init_l_term___u2286___00__closed__3(void){
_start:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = lean_obj_once(&l_term___u2286___00__closed__2, &l_term___u2286___00__closed__2_once, _init_l_term___u2286___00__closed__2);
v___x_1102_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
return v___x_1102_;
}
}
static lean_object* _init_l_term___u2286___00__closed__4(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1103_ = lean_obj_once(&l_term___u2248___00__closed__4, &l_term___u2248___00__closed__4_once, _init_l_term___u2248___00__closed__4);
v___x_1104_ = lean_obj_once(&l_term___u2286___00__closed__3, &l_term___u2286___00__closed__3_once, _init_l_term___u2286___00__closed__3);
v___x_1105_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_1106_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
lean_ctor_set(v___x_1106_, 1, v___x_1104_);
lean_ctor_set(v___x_1106_, 2, v___x_1103_);
return v___x_1106_;
}
}
static lean_object* _init_l_term___u2286___00__closed__5(void){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1107_ = lean_obj_once(&l_term___u2286___00__closed__4, &l_term___u2286___00__closed__4_once, _init_l_term___u2286___00__closed__4);
v___x_1108_ = lean_unsigned_to_nat(51u);
v___x_1109_ = lean_unsigned_to_nat(50u);
v___x_1110_ = lean_obj_once(&l_term___u2286___00__closed__1, &l_term___u2286___00__closed__1_once, _init_l_term___u2286___00__closed__1);
v___x_1111_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1110_);
lean_ctor_set(v___x_1111_, 1, v___x_1109_);
lean_ctor_set(v___x_1111_, 2, v___x_1108_);
lean_ctor_set(v___x_1111_, 3, v___x_1107_);
return v___x_1111_;
}
}
static lean_object* _init_l_term___u2286__(void){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = lean_obj_once(&l_term___u2286___00__closed__5, &l_term___u2286___00__closed__5_once, _init_l_term___u2286___00__closed__5);
return v___x_1112_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__0(void){
_start:
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_mk_string_unchecked("Subset", 6, 6);
return v___x_1113_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__1(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2286____1___closed__0, &l___aux__Init__Core______macroRules__term___u2286____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__0);
v___x_1115_ = l_String_toRawSubstring_x27(v___x_1114_);
return v___x_1115_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__2(void){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1116_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2286____1___closed__0, &l___aux__Init__Core______macroRules__term___u2286____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__0);
v___x_1117_ = l_Lean_Name_mkStr1(v___x_1116_);
return v___x_1117_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__3(void){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = lean_mk_string_unchecked("HasSubset", 9, 9);
return v___x_1118_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__4(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1119_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2286____1___closed__0, &l___aux__Init__Core______macroRules__term___u2286____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__0);
v___x_1120_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2286____1___closed__3, &l___aux__Init__Core______macroRules__term___u2286____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__3);
v___x_1121_ = l_Lean_Name_mkStr2(v___x_1120_, v___x_1119_);
return v___x_1121_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__5(void){
_start:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1122_ = lean_box(0);
v___x_1123_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2286____1___closed__4, &l___aux__Init__Core______macroRules__term___u2286____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__4);
v___x_1124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
lean_ctor_set(v___x_1124_, 1, v___x_1122_);
return v___x_1124_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__6(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1125_ = lean_box(0);
v___x_1126_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2286____1___closed__5, &l___aux__Init__Core______macroRules__term___u2286____1___closed__5_once, _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__5);
v___x_1127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
lean_ctor_set(v___x_1127_, 1, v___x_1125_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2286____1(lean_object* v_x_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_){
_start:
{
lean_object* v___x_1131_; uint8_t v___x_1132_; 
v___x_1131_ = lean_obj_once(&l_term___u2286___00__closed__1, &l_term___u2286___00__closed__1_once, _init_l_term___u2286___00__closed__1);
lean_inc(v_x_1128_);
v___x_1132_ = l_Lean_Syntax_isOfKind(v_x_1128_, v___x_1131_);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
lean_dec(v_x_1128_);
v___x_1133_ = lean_box(1);
v___x_1134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
lean_ctor_set(v___x_1134_, 1, v_a_1130_);
return v___x_1134_;
}
else
{
lean_object* v_quotContext_1135_; lean_object* v_currMacroScope_1136_; lean_object* v_ref_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; uint8_t v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v_quotContext_1135_ = lean_ctor_get(v_a_1129_, 1);
v_currMacroScope_1136_ = lean_ctor_get(v_a_1129_, 2);
v_ref_1137_ = lean_ctor_get(v_a_1129_, 5);
v___x_1138_ = lean_unsigned_to_nat(0u);
v___x_1139_ = l_Lean_Syntax_getArg(v_x_1128_, v___x_1138_);
v___x_1140_ = lean_unsigned_to_nat(2u);
v___x_1141_ = l_Lean_Syntax_getArg(v_x_1128_, v___x_1140_);
lean_dec(v_x_1128_);
v___x_1142_ = 0;
v___x_1143_ = l_Lean_SourceInfo_fromRef(v_ref_1137_, v___x_1142_);
v___x_1144_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_1145_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2286____1___closed__1, &l___aux__Init__Core______macroRules__term___u2286____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__1);
v___x_1146_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2286____1___closed__2, &l___aux__Init__Core______macroRules__term___u2286____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__2);
lean_inc(v_currMacroScope_1136_);
lean_inc(v_quotContext_1135_);
v___x_1147_ = l_Lean_addMacroScope(v_quotContext_1135_, v___x_1146_, v_currMacroScope_1136_);
v___x_1148_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2286____1___closed__6, &l___aux__Init__Core______macroRules__term___u2286____1___closed__6_once, _init_l___aux__Init__Core______macroRules__term___u2286____1___closed__6);
lean_inc_n(v___x_1143_, 2);
v___x_1149_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1143_);
lean_ctor_set(v___x_1149_, 1, v___x_1145_);
lean_ctor_set(v___x_1149_, 2, v___x_1147_);
lean_ctor_set(v___x_1149_, 3, v___x_1148_);
v___x_1150_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_1151_ = l_Lean_Syntax_node2(v___x_1143_, v___x_1150_, v___x_1139_, v___x_1141_);
v___x_1152_ = l_Lean_Syntax_node2(v___x_1143_, v___x_1144_, v___x_1149_, v___x_1151_);
v___x_1153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1152_);
lean_ctor_set(v___x_1153_, 1, v_a_1130_);
return v___x_1153_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2286____1___boxed(lean_object* v_x_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l___aux__Init__Core______macroRules__term___u2286____1(v_x_1154_, v_a_1155_, v_a_1156_);
lean_dec_ref(v_a_1155_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__HasSubset__Subset__1(lean_object* v_x_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_){
_start:
{
lean_object* v___x_1161_; uint8_t v___x_1162_; 
v___x_1161_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_1158_);
v___x_1162_ = l_Lean_Syntax_isOfKind(v_x_1158_, v___x_1161_);
if (v___x_1162_ == 0)
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
lean_dec(v_x_1158_);
v___x_1163_ = lean_box(0);
v___x_1164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
lean_ctor_set(v___x_1164_, 1, v_a_1160_);
return v___x_1164_;
}
else
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; uint8_t v___x_1168_; 
v___x_1165_ = lean_unsigned_to_nat(0u);
v___x_1166_ = l_Lean_Syntax_getArg(v_x_1158_, v___x_1165_);
v___x_1167_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_1166_);
v___x_1168_ = l_Lean_Syntax_isOfKind(v___x_1166_, v___x_1167_);
if (v___x_1168_ == 0)
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
lean_dec(v___x_1166_);
lean_dec(v_x_1158_);
v___x_1169_ = lean_box(0);
v___x_1170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1169_);
lean_ctor_set(v___x_1170_, 1, v_a_1160_);
return v___x_1170_;
}
else
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; uint8_t v___x_1174_; 
v___x_1171_ = lean_unsigned_to_nat(1u);
v___x_1172_ = l_Lean_Syntax_getArg(v_x_1158_, v___x_1171_);
lean_dec(v_x_1158_);
v___x_1173_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1172_);
v___x_1174_ = l_Lean_Syntax_matchesNull(v___x_1172_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
lean_dec(v___x_1172_);
lean_dec(v___x_1166_);
v___x_1175_ = lean_box(0);
v___x_1176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
lean_ctor_set(v___x_1176_, 1, v_a_1160_);
return v___x_1176_;
}
else
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v_ref_1179_; uint8_t v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1177_ = l_Lean_Syntax_getArg(v___x_1172_, v___x_1165_);
v___x_1178_ = l_Lean_Syntax_getArg(v___x_1172_, v___x_1171_);
lean_dec(v___x_1172_);
v_ref_1179_ = l_Lean_replaceRef(v___x_1166_, v_a_1159_);
lean_dec(v___x_1166_);
v___x_1180_ = 0;
v___x_1181_ = l_Lean_SourceInfo_fromRef(v_ref_1179_, v___x_1180_);
lean_dec(v_ref_1179_);
v___x_1182_ = lean_obj_once(&l_term___u2286___00__closed__1, &l_term___u2286___00__closed__1_once, _init_l_term___u2286___00__closed__1);
v___x_1183_ = lean_obj_once(&l_term___u2286___00__closed__2, &l_term___u2286___00__closed__2_once, _init_l_term___u2286___00__closed__2);
lean_inc(v___x_1181_);
v___x_1184_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1181_);
lean_ctor_set(v___x_1184_, 1, v___x_1183_);
v___x_1185_ = l_Lean_Syntax_node3(v___x_1181_, v___x_1182_, v___x_1177_, v___x_1184_, v___x_1178_);
v___x_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1185_);
lean_ctor_set(v___x_1186_, 1, v_a_1160_);
return v___x_1186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__HasSubset__Subset__1___boxed(lean_object* v_x_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l___aux__Init__Core______unexpand__HasSubset__Subset__1(v_x_1187_, v_a_1188_, v_a_1189_);
lean_dec(v_a_1188_);
return v_res_1190_;
}
}
static lean_object* _init_l_term___u2282___00__closed__0(void){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_mk_string_unchecked("term_⊂_", 9, 7);
return v___x_1191_;
}
}
static lean_object* _init_l_term___u2282___00__closed__1(void){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_obj_once(&l_term___u2282___00__closed__0, &l_term___u2282___00__closed__0_once, _init_l_term___u2282___00__closed__0);
v___x_1193_ = l_Lean_Name_mkStr1(v___x_1192_);
return v___x_1193_;
}
}
static lean_object* _init_l_term___u2282___00__closed__2(void){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = lean_mk_string_unchecked(" ⊂ ", 5, 3);
return v___x_1194_;
}
}
static lean_object* _init_l_term___u2282___00__closed__3(void){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1195_ = lean_obj_once(&l_term___u2282___00__closed__2, &l_term___u2282___00__closed__2_once, _init_l_term___u2282___00__closed__2);
v___x_1196_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1195_);
return v___x_1196_;
}
}
static lean_object* _init_l_term___u2282___00__closed__4(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1197_ = lean_obj_once(&l_term___u2248___00__closed__4, &l_term___u2248___00__closed__4_once, _init_l_term___u2248___00__closed__4);
v___x_1198_ = lean_obj_once(&l_term___u2282___00__closed__3, &l_term___u2282___00__closed__3_once, _init_l_term___u2282___00__closed__3);
v___x_1199_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_1200_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1200_, 0, v___x_1199_);
lean_ctor_set(v___x_1200_, 1, v___x_1198_);
lean_ctor_set(v___x_1200_, 2, v___x_1197_);
return v___x_1200_;
}
}
static lean_object* _init_l_term___u2282___00__closed__5(void){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1201_ = lean_obj_once(&l_term___u2282___00__closed__4, &l_term___u2282___00__closed__4_once, _init_l_term___u2282___00__closed__4);
v___x_1202_ = lean_unsigned_to_nat(51u);
v___x_1203_ = lean_unsigned_to_nat(50u);
v___x_1204_ = lean_obj_once(&l_term___u2282___00__closed__1, &l_term___u2282___00__closed__1_once, _init_l_term___u2282___00__closed__1);
v___x_1205_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1204_);
lean_ctor_set(v___x_1205_, 1, v___x_1203_);
lean_ctor_set(v___x_1205_, 2, v___x_1202_);
lean_ctor_set(v___x_1205_, 3, v___x_1201_);
return v___x_1205_;
}
}
static lean_object* _init_l_term___u2282__(void){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = lean_obj_once(&l_term___u2282___00__closed__5, &l_term___u2282___00__closed__5_once, _init_l_term___u2282___00__closed__5);
return v___x_1206_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__0(void){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = lean_mk_string_unchecked("SSubset", 7, 7);
return v___x_1207_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__1(void){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1208_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2282____1___closed__0, &l___aux__Init__Core______macroRules__term___u2282____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__0);
v___x_1209_ = l_String_toRawSubstring_x27(v___x_1208_);
return v___x_1209_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__2(void){
_start:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2282____1___closed__0, &l___aux__Init__Core______macroRules__term___u2282____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__0);
v___x_1211_ = l_Lean_Name_mkStr1(v___x_1210_);
return v___x_1211_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__3(void){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = lean_mk_string_unchecked("HasSSubset", 10, 10);
return v___x_1212_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__4(void){
_start:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1213_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2282____1___closed__0, &l___aux__Init__Core______macroRules__term___u2282____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__0);
v___x_1214_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2282____1___closed__3, &l___aux__Init__Core______macroRules__term___u2282____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__3);
v___x_1215_ = l_Lean_Name_mkStr2(v___x_1214_, v___x_1213_);
return v___x_1215_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__5(void){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1216_ = lean_box(0);
v___x_1217_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2282____1___closed__4, &l___aux__Init__Core______macroRules__term___u2282____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__4);
v___x_1218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
lean_ctor_set(v___x_1218_, 1, v___x_1216_);
return v___x_1218_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__6(void){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1219_ = lean_box(0);
v___x_1220_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2282____1___closed__5, &l___aux__Init__Core______macroRules__term___u2282____1___closed__5_once, _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__5);
v___x_1221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1220_);
lean_ctor_set(v___x_1221_, 1, v___x_1219_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2282____1(lean_object* v_x_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_){
_start:
{
lean_object* v___x_1225_; uint8_t v___x_1226_; 
v___x_1225_ = lean_obj_once(&l_term___u2282___00__closed__1, &l_term___u2282___00__closed__1_once, _init_l_term___u2282___00__closed__1);
lean_inc(v_x_1222_);
v___x_1226_ = l_Lean_Syntax_isOfKind(v_x_1222_, v___x_1225_);
if (v___x_1226_ == 0)
{
lean_object* v___x_1227_; lean_object* v___x_1228_; 
lean_dec(v_x_1222_);
v___x_1227_ = lean_box(1);
v___x_1228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
lean_ctor_set(v___x_1228_, 1, v_a_1224_);
return v___x_1228_;
}
else
{
lean_object* v_quotContext_1229_; lean_object* v_currMacroScope_1230_; lean_object* v_ref_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v_quotContext_1229_ = lean_ctor_get(v_a_1223_, 1);
v_currMacroScope_1230_ = lean_ctor_get(v_a_1223_, 2);
v_ref_1231_ = lean_ctor_get(v_a_1223_, 5);
v___x_1232_ = lean_unsigned_to_nat(0u);
v___x_1233_ = l_Lean_Syntax_getArg(v_x_1222_, v___x_1232_);
v___x_1234_ = lean_unsigned_to_nat(2u);
v___x_1235_ = l_Lean_Syntax_getArg(v_x_1222_, v___x_1234_);
lean_dec(v_x_1222_);
v___x_1236_ = 0;
v___x_1237_ = l_Lean_SourceInfo_fromRef(v_ref_1231_, v___x_1236_);
v___x_1238_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_1239_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2282____1___closed__1, &l___aux__Init__Core______macroRules__term___u2282____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__1);
v___x_1240_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2282____1___closed__2, &l___aux__Init__Core______macroRules__term___u2282____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__2);
lean_inc(v_currMacroScope_1230_);
lean_inc(v_quotContext_1229_);
v___x_1241_ = l_Lean_addMacroScope(v_quotContext_1229_, v___x_1240_, v_currMacroScope_1230_);
v___x_1242_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2282____1___closed__6, &l___aux__Init__Core______macroRules__term___u2282____1___closed__6_once, _init_l___aux__Init__Core______macroRules__term___u2282____1___closed__6);
lean_inc_n(v___x_1237_, 2);
v___x_1243_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1237_);
lean_ctor_set(v___x_1243_, 1, v___x_1239_);
lean_ctor_set(v___x_1243_, 2, v___x_1241_);
lean_ctor_set(v___x_1243_, 3, v___x_1242_);
v___x_1244_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_1245_ = l_Lean_Syntax_node2(v___x_1237_, v___x_1244_, v___x_1233_, v___x_1235_);
v___x_1246_ = l_Lean_Syntax_node2(v___x_1237_, v___x_1238_, v___x_1243_, v___x_1245_);
v___x_1247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1246_);
lean_ctor_set(v___x_1247_, 1, v_a_1224_);
return v___x_1247_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2282____1___boxed(lean_object* v_x_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l___aux__Init__Core______macroRules__term___u2282____1(v_x_1248_, v_a_1249_, v_a_1250_);
lean_dec_ref(v_a_1249_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__HasSSubset__SSubset__1(lean_object* v_x_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_){
_start:
{
lean_object* v___x_1255_; uint8_t v___x_1256_; 
v___x_1255_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_1252_);
v___x_1256_ = l_Lean_Syntax_isOfKind(v_x_1252_, v___x_1255_);
if (v___x_1256_ == 0)
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
lean_dec(v_x_1252_);
v___x_1257_ = lean_box(0);
v___x_1258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
lean_ctor_set(v___x_1258_, 1, v_a_1254_);
return v___x_1258_;
}
else
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; uint8_t v___x_1262_; 
v___x_1259_ = lean_unsigned_to_nat(0u);
v___x_1260_ = l_Lean_Syntax_getArg(v_x_1252_, v___x_1259_);
v___x_1261_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_1260_);
v___x_1262_ = l_Lean_Syntax_isOfKind(v___x_1260_, v___x_1261_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
lean_dec(v___x_1260_);
lean_dec(v_x_1252_);
v___x_1263_ = lean_box(0);
v___x_1264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1263_);
lean_ctor_set(v___x_1264_, 1, v_a_1254_);
return v___x_1264_;
}
else
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; uint8_t v___x_1268_; 
v___x_1265_ = lean_unsigned_to_nat(1u);
v___x_1266_ = l_Lean_Syntax_getArg(v_x_1252_, v___x_1265_);
lean_dec(v_x_1252_);
v___x_1267_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1266_);
v___x_1268_ = l_Lean_Syntax_matchesNull(v___x_1266_, v___x_1267_);
if (v___x_1268_ == 0)
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
lean_dec(v___x_1266_);
lean_dec(v___x_1260_);
v___x_1269_ = lean_box(0);
v___x_1270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
lean_ctor_set(v___x_1270_, 1, v_a_1254_);
return v___x_1270_;
}
else
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v_ref_1273_; uint8_t v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1271_ = l_Lean_Syntax_getArg(v___x_1266_, v___x_1259_);
v___x_1272_ = l_Lean_Syntax_getArg(v___x_1266_, v___x_1265_);
lean_dec(v___x_1266_);
v_ref_1273_ = l_Lean_replaceRef(v___x_1260_, v_a_1253_);
lean_dec(v___x_1260_);
v___x_1274_ = 0;
v___x_1275_ = l_Lean_SourceInfo_fromRef(v_ref_1273_, v___x_1274_);
lean_dec(v_ref_1273_);
v___x_1276_ = lean_obj_once(&l_term___u2282___00__closed__1, &l_term___u2282___00__closed__1_once, _init_l_term___u2282___00__closed__1);
v___x_1277_ = lean_obj_once(&l_term___u2282___00__closed__2, &l_term___u2282___00__closed__2_once, _init_l_term___u2282___00__closed__2);
lean_inc(v___x_1275_);
v___x_1278_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1275_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v___x_1279_ = l_Lean_Syntax_node3(v___x_1275_, v___x_1276_, v___x_1271_, v___x_1278_, v___x_1272_);
v___x_1280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1279_);
lean_ctor_set(v___x_1280_, 1, v_a_1254_);
return v___x_1280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__HasSSubset__SSubset__1___boxed(lean_object* v_x_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l___aux__Init__Core______unexpand__HasSSubset__SSubset__1(v_x_1281_, v_a_1282_, v_a_1283_);
lean_dec(v_a_1282_);
return v_res_1284_;
}
}
static lean_object* _init_l_term___u2287___00__closed__0(void){
_start:
{
lean_object* v___x_1285_; 
v___x_1285_ = lean_mk_string_unchecked("term_⊇_", 9, 7);
return v___x_1285_;
}
}
static lean_object* _init_l_term___u2287___00__closed__1(void){
_start:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = lean_obj_once(&l_term___u2287___00__closed__0, &l_term___u2287___00__closed__0_once, _init_l_term___u2287___00__closed__0);
v___x_1287_ = l_Lean_Name_mkStr1(v___x_1286_);
return v___x_1287_;
}
}
static lean_object* _init_l_term___u2287___00__closed__2(void){
_start:
{
lean_object* v___x_1288_; 
v___x_1288_ = lean_mk_string_unchecked(" ⊇ ", 5, 3);
return v___x_1288_;
}
}
static lean_object* _init_l_term___u2287___00__closed__3(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = lean_obj_once(&l_term___u2287___00__closed__2, &l_term___u2287___00__closed__2_once, _init_l_term___u2287___00__closed__2);
v___x_1290_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
return v___x_1290_;
}
}
static lean_object* _init_l_term___u2287___00__closed__4(void){
_start:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1291_ = lean_obj_once(&l_term___u2248___00__closed__4, &l_term___u2248___00__closed__4_once, _init_l_term___u2248___00__closed__4);
v___x_1292_ = lean_obj_once(&l_term___u2287___00__closed__3, &l_term___u2287___00__closed__3_once, _init_l_term___u2287___00__closed__3);
v___x_1293_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_1294_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
lean_ctor_set(v___x_1294_, 1, v___x_1292_);
lean_ctor_set(v___x_1294_, 2, v___x_1291_);
return v___x_1294_;
}
}
static lean_object* _init_l_term___u2287___00__closed__5(void){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1295_ = lean_obj_once(&l_term___u2287___00__closed__4, &l_term___u2287___00__closed__4_once, _init_l_term___u2287___00__closed__4);
v___x_1296_ = lean_unsigned_to_nat(51u);
v___x_1297_ = lean_unsigned_to_nat(50u);
v___x_1298_ = lean_obj_once(&l_term___u2287___00__closed__1, &l_term___u2287___00__closed__1_once, _init_l_term___u2287___00__closed__1);
v___x_1299_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
lean_ctor_set(v___x_1299_, 1, v___x_1297_);
lean_ctor_set(v___x_1299_, 2, v___x_1296_);
lean_ctor_set(v___x_1299_, 3, v___x_1295_);
return v___x_1299_;
}
}
static lean_object* _init_l_term___u2287__(void){
_start:
{
lean_object* v___x_1300_; 
v___x_1300_ = lean_obj_once(&l_term___u2287___00__closed__5, &l_term___u2287___00__closed__5_once, _init_l_term___u2287___00__closed__5);
return v___x_1300_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2287____1___closed__0(void){
_start:
{
lean_object* v___x_1301_; 
v___x_1301_ = lean_mk_string_unchecked("Superset", 8, 8);
return v___x_1301_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2287____1___closed__1(void){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2287____1___closed__0, &l___aux__Init__Core______macroRules__term___u2287____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2287____1___closed__0);
v___x_1303_ = l_String_toRawSubstring_x27(v___x_1302_);
return v___x_1303_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2287____1___closed__2(void){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2287____1___closed__0, &l___aux__Init__Core______macroRules__term___u2287____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2287____1___closed__0);
v___x_1305_ = l_Lean_Name_mkStr1(v___x_1304_);
return v___x_1305_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2287____1___closed__3(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1306_ = lean_box(0);
v___x_1307_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2287____1___closed__2, &l___aux__Init__Core______macroRules__term___u2287____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2287____1___closed__2);
v___x_1308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
lean_ctor_set(v___x_1308_, 1, v___x_1306_);
return v___x_1308_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2287____1___closed__4(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1309_ = lean_box(0);
v___x_1310_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2287____1___closed__3, &l___aux__Init__Core______macroRules__term___u2287____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___u2287____1___closed__3);
v___x_1311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
lean_ctor_set(v___x_1311_, 1, v___x_1309_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2287____1(lean_object* v_x_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_){
_start:
{
lean_object* v___x_1315_; uint8_t v___x_1316_; 
v___x_1315_ = lean_obj_once(&l_term___u2287___00__closed__1, &l_term___u2287___00__closed__1_once, _init_l_term___u2287___00__closed__1);
lean_inc(v_x_1312_);
v___x_1316_ = l_Lean_Syntax_isOfKind(v_x_1312_, v___x_1315_);
if (v___x_1316_ == 0)
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
lean_dec(v_x_1312_);
v___x_1317_ = lean_box(1);
v___x_1318_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
lean_ctor_set(v___x_1318_, 1, v_a_1314_);
return v___x_1318_;
}
else
{
lean_object* v_quotContext_1319_; lean_object* v_currMacroScope_1320_; lean_object* v_ref_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; uint8_t v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v_quotContext_1319_ = lean_ctor_get(v_a_1313_, 1);
v_currMacroScope_1320_ = lean_ctor_get(v_a_1313_, 2);
v_ref_1321_ = lean_ctor_get(v_a_1313_, 5);
v___x_1322_ = lean_unsigned_to_nat(0u);
v___x_1323_ = l_Lean_Syntax_getArg(v_x_1312_, v___x_1322_);
v___x_1324_ = lean_unsigned_to_nat(2u);
v___x_1325_ = l_Lean_Syntax_getArg(v_x_1312_, v___x_1324_);
lean_dec(v_x_1312_);
v___x_1326_ = 0;
v___x_1327_ = l_Lean_SourceInfo_fromRef(v_ref_1321_, v___x_1326_);
v___x_1328_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_1329_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2287____1___closed__1, &l___aux__Init__Core______macroRules__term___u2287____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___u2287____1___closed__1);
v___x_1330_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2287____1___closed__2, &l___aux__Init__Core______macroRules__term___u2287____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2287____1___closed__2);
lean_inc(v_currMacroScope_1320_);
lean_inc(v_quotContext_1319_);
v___x_1331_ = l_Lean_addMacroScope(v_quotContext_1319_, v___x_1330_, v_currMacroScope_1320_);
v___x_1332_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2287____1___closed__4, &l___aux__Init__Core______macroRules__term___u2287____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u2287____1___closed__4);
lean_inc_n(v___x_1327_, 2);
v___x_1333_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1327_);
lean_ctor_set(v___x_1333_, 1, v___x_1329_);
lean_ctor_set(v___x_1333_, 2, v___x_1331_);
lean_ctor_set(v___x_1333_, 3, v___x_1332_);
v___x_1334_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_1335_ = l_Lean_Syntax_node2(v___x_1327_, v___x_1334_, v___x_1323_, v___x_1325_);
v___x_1336_ = l_Lean_Syntax_node2(v___x_1327_, v___x_1328_, v___x_1333_, v___x_1335_);
v___x_1337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
lean_ctor_set(v___x_1337_, 1, v_a_1314_);
return v___x_1337_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2287____1___boxed(lean_object* v_x_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l___aux__Init__Core______macroRules__term___u2287____1(v_x_1338_, v_a_1339_, v_a_1340_);
lean_dec_ref(v_a_1339_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Superset__1(lean_object* v_x_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_){
_start:
{
lean_object* v___x_1345_; uint8_t v___x_1346_; 
v___x_1345_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_1342_);
v___x_1346_ = l_Lean_Syntax_isOfKind(v_x_1342_, v___x_1345_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
lean_dec(v_x_1342_);
v___x_1347_ = lean_box(0);
v___x_1348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
lean_ctor_set(v___x_1348_, 1, v_a_1344_);
return v___x_1348_;
}
else
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; uint8_t v___x_1352_; 
v___x_1349_ = lean_unsigned_to_nat(0u);
v___x_1350_ = l_Lean_Syntax_getArg(v_x_1342_, v___x_1349_);
v___x_1351_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_1350_);
v___x_1352_ = l_Lean_Syntax_isOfKind(v___x_1350_, v___x_1351_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
lean_dec(v___x_1350_);
lean_dec(v_x_1342_);
v___x_1353_ = lean_box(0);
v___x_1354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1353_);
lean_ctor_set(v___x_1354_, 1, v_a_1344_);
return v___x_1354_;
}
else
{
lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; uint8_t v___x_1358_; 
v___x_1355_ = lean_unsigned_to_nat(1u);
v___x_1356_ = l_Lean_Syntax_getArg(v_x_1342_, v___x_1355_);
lean_dec(v_x_1342_);
v___x_1357_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1356_);
v___x_1358_ = l_Lean_Syntax_matchesNull(v___x_1356_, v___x_1357_);
if (v___x_1358_ == 0)
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
lean_dec(v___x_1356_);
lean_dec(v___x_1350_);
v___x_1359_ = lean_box(0);
v___x_1360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
lean_ctor_set(v___x_1360_, 1, v_a_1344_);
return v___x_1360_;
}
else
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v_ref_1363_; uint8_t v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1361_ = l_Lean_Syntax_getArg(v___x_1356_, v___x_1349_);
v___x_1362_ = l_Lean_Syntax_getArg(v___x_1356_, v___x_1355_);
lean_dec(v___x_1356_);
v_ref_1363_ = l_Lean_replaceRef(v___x_1350_, v_a_1343_);
lean_dec(v___x_1350_);
v___x_1364_ = 0;
v___x_1365_ = l_Lean_SourceInfo_fromRef(v_ref_1363_, v___x_1364_);
lean_dec(v_ref_1363_);
v___x_1366_ = lean_obj_once(&l_term___u2287___00__closed__1, &l_term___u2287___00__closed__1_once, _init_l_term___u2287___00__closed__1);
v___x_1367_ = lean_obj_once(&l_term___u2287___00__closed__2, &l_term___u2287___00__closed__2_once, _init_l_term___u2287___00__closed__2);
lean_inc(v___x_1365_);
v___x_1368_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1365_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
v___x_1369_ = l_Lean_Syntax_node3(v___x_1365_, v___x_1366_, v___x_1361_, v___x_1368_, v___x_1362_);
v___x_1370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1369_);
lean_ctor_set(v___x_1370_, 1, v_a_1344_);
return v___x_1370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Superset__1___boxed(lean_object* v_x_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l___aux__Init__Core______unexpand__Superset__1(v_x_1371_, v_a_1372_, v_a_1373_);
lean_dec(v_a_1372_);
return v_res_1374_;
}
}
static lean_object* _init_l_term___u2283___00__closed__0(void){
_start:
{
lean_object* v___x_1375_; 
v___x_1375_ = lean_mk_string_unchecked("term_⊃_", 9, 7);
return v___x_1375_;
}
}
static lean_object* _init_l_term___u2283___00__closed__1(void){
_start:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = lean_obj_once(&l_term___u2283___00__closed__0, &l_term___u2283___00__closed__0_once, _init_l_term___u2283___00__closed__0);
v___x_1377_ = l_Lean_Name_mkStr1(v___x_1376_);
return v___x_1377_;
}
}
static lean_object* _init_l_term___u2283___00__closed__2(void){
_start:
{
lean_object* v___x_1378_; 
v___x_1378_ = lean_mk_string_unchecked(" ⊃ ", 5, 3);
return v___x_1378_;
}
}
static lean_object* _init_l_term___u2283___00__closed__3(void){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = lean_obj_once(&l_term___u2283___00__closed__2, &l_term___u2283___00__closed__2_once, _init_l_term___u2283___00__closed__2);
v___x_1380_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
return v___x_1380_;
}
}
static lean_object* _init_l_term___u2283___00__closed__4(void){
_start:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1381_ = lean_obj_once(&l_term___u2248___00__closed__4, &l_term___u2248___00__closed__4_once, _init_l_term___u2248___00__closed__4);
v___x_1382_ = lean_obj_once(&l_term___u2283___00__closed__3, &l_term___u2283___00__closed__3_once, _init_l_term___u2283___00__closed__3);
v___x_1383_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_1384_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
lean_ctor_set(v___x_1384_, 1, v___x_1382_);
lean_ctor_set(v___x_1384_, 2, v___x_1381_);
return v___x_1384_;
}
}
static lean_object* _init_l_term___u2283___00__closed__5(void){
_start:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1385_ = lean_obj_once(&l_term___u2283___00__closed__4, &l_term___u2283___00__closed__4_once, _init_l_term___u2283___00__closed__4);
v___x_1386_ = lean_unsigned_to_nat(51u);
v___x_1387_ = lean_unsigned_to_nat(50u);
v___x_1388_ = lean_obj_once(&l_term___u2283___00__closed__1, &l_term___u2283___00__closed__1_once, _init_l_term___u2283___00__closed__1);
v___x_1389_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1388_);
lean_ctor_set(v___x_1389_, 1, v___x_1387_);
lean_ctor_set(v___x_1389_, 2, v___x_1386_);
lean_ctor_set(v___x_1389_, 3, v___x_1385_);
return v___x_1389_;
}
}
static lean_object* _init_l_term___u2283__(void){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = lean_obj_once(&l_term___u2283___00__closed__5, &l_term___u2283___00__closed__5_once, _init_l_term___u2283___00__closed__5);
return v___x_1390_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2283____1___closed__0(void){
_start:
{
lean_object* v___x_1391_; 
v___x_1391_ = lean_mk_string_unchecked("SSuperset", 9, 9);
return v___x_1391_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2283____1___closed__1(void){
_start:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1392_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2283____1___closed__0, &l___aux__Init__Core______macroRules__term___u2283____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2283____1___closed__0);
v___x_1393_ = l_String_toRawSubstring_x27(v___x_1392_);
return v___x_1393_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2283____1___closed__2(void){
_start:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2283____1___closed__0, &l___aux__Init__Core______macroRules__term___u2283____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2283____1___closed__0);
v___x_1395_ = l_Lean_Name_mkStr1(v___x_1394_);
return v___x_1395_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2283____1___closed__3(void){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1396_ = lean_box(0);
v___x_1397_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2283____1___closed__2, &l___aux__Init__Core______macroRules__term___u2283____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2283____1___closed__2);
v___x_1398_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1398_, 0, v___x_1397_);
lean_ctor_set(v___x_1398_, 1, v___x_1396_);
return v___x_1398_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2283____1___closed__4(void){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1399_ = lean_box(0);
v___x_1400_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2283____1___closed__3, &l___aux__Init__Core______macroRules__term___u2283____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___u2283____1___closed__3);
v___x_1401_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1400_);
lean_ctor_set(v___x_1401_, 1, v___x_1399_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2283____1(lean_object* v_x_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_){
_start:
{
lean_object* v___x_1405_; uint8_t v___x_1406_; 
v___x_1405_ = lean_obj_once(&l_term___u2283___00__closed__1, &l_term___u2283___00__closed__1_once, _init_l_term___u2283___00__closed__1);
lean_inc(v_x_1402_);
v___x_1406_ = l_Lean_Syntax_isOfKind(v_x_1402_, v___x_1405_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
lean_dec(v_x_1402_);
v___x_1407_ = lean_box(1);
v___x_1408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1407_);
lean_ctor_set(v___x_1408_, 1, v_a_1404_);
return v___x_1408_;
}
else
{
lean_object* v_quotContext_1409_; lean_object* v_currMacroScope_1410_; lean_object* v_ref_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; uint8_t v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v_quotContext_1409_ = lean_ctor_get(v_a_1403_, 1);
v_currMacroScope_1410_ = lean_ctor_get(v_a_1403_, 2);
v_ref_1411_ = lean_ctor_get(v_a_1403_, 5);
v___x_1412_ = lean_unsigned_to_nat(0u);
v___x_1413_ = l_Lean_Syntax_getArg(v_x_1402_, v___x_1412_);
v___x_1414_ = lean_unsigned_to_nat(2u);
v___x_1415_ = l_Lean_Syntax_getArg(v_x_1402_, v___x_1414_);
lean_dec(v_x_1402_);
v___x_1416_ = 0;
v___x_1417_ = l_Lean_SourceInfo_fromRef(v_ref_1411_, v___x_1416_);
v___x_1418_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_1419_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2283____1___closed__1, &l___aux__Init__Core______macroRules__term___u2283____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___u2283____1___closed__1);
v___x_1420_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2283____1___closed__2, &l___aux__Init__Core______macroRules__term___u2283____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2283____1___closed__2);
lean_inc(v_currMacroScope_1410_);
lean_inc(v_quotContext_1409_);
v___x_1421_ = l_Lean_addMacroScope(v_quotContext_1409_, v___x_1420_, v_currMacroScope_1410_);
v___x_1422_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2283____1___closed__4, &l___aux__Init__Core______macroRules__term___u2283____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u2283____1___closed__4);
lean_inc_n(v___x_1417_, 2);
v___x_1423_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1417_);
lean_ctor_set(v___x_1423_, 1, v___x_1419_);
lean_ctor_set(v___x_1423_, 2, v___x_1421_);
lean_ctor_set(v___x_1423_, 3, v___x_1422_);
v___x_1424_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_1425_ = l_Lean_Syntax_node2(v___x_1417_, v___x_1424_, v___x_1413_, v___x_1415_);
v___x_1426_ = l_Lean_Syntax_node2(v___x_1417_, v___x_1418_, v___x_1423_, v___x_1425_);
v___x_1427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
lean_ctor_set(v___x_1427_, 1, v_a_1404_);
return v___x_1427_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2283____1___boxed(lean_object* v_x_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l___aux__Init__Core______macroRules__term___u2283____1(v_x_1428_, v_a_1429_, v_a_1430_);
lean_dec_ref(v_a_1429_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__SSuperset__1(lean_object* v_x_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_){
_start:
{
lean_object* v___x_1435_; uint8_t v___x_1436_; 
v___x_1435_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_1432_);
v___x_1436_ = l_Lean_Syntax_isOfKind(v_x_1432_, v___x_1435_);
if (v___x_1436_ == 0)
{
lean_object* v___x_1437_; lean_object* v___x_1438_; 
lean_dec(v_x_1432_);
v___x_1437_ = lean_box(0);
v___x_1438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1437_);
lean_ctor_set(v___x_1438_, 1, v_a_1434_);
return v___x_1438_;
}
else
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; uint8_t v___x_1442_; 
v___x_1439_ = lean_unsigned_to_nat(0u);
v___x_1440_ = l_Lean_Syntax_getArg(v_x_1432_, v___x_1439_);
v___x_1441_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_1440_);
v___x_1442_ = l_Lean_Syntax_isOfKind(v___x_1440_, v___x_1441_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
lean_dec(v___x_1440_);
lean_dec(v_x_1432_);
v___x_1443_ = lean_box(0);
v___x_1444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
lean_ctor_set(v___x_1444_, 1, v_a_1434_);
return v___x_1444_;
}
else
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; uint8_t v___x_1448_; 
v___x_1445_ = lean_unsigned_to_nat(1u);
v___x_1446_ = l_Lean_Syntax_getArg(v_x_1432_, v___x_1445_);
lean_dec(v_x_1432_);
v___x_1447_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1446_);
v___x_1448_ = l_Lean_Syntax_matchesNull(v___x_1446_, v___x_1447_);
if (v___x_1448_ == 0)
{
lean_object* v___x_1449_; lean_object* v___x_1450_; 
lean_dec(v___x_1446_);
lean_dec(v___x_1440_);
v___x_1449_ = lean_box(0);
v___x_1450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1449_);
lean_ctor_set(v___x_1450_, 1, v_a_1434_);
return v___x_1450_;
}
else
{
lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v_ref_1453_; uint8_t v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1451_ = l_Lean_Syntax_getArg(v___x_1446_, v___x_1439_);
v___x_1452_ = l_Lean_Syntax_getArg(v___x_1446_, v___x_1445_);
lean_dec(v___x_1446_);
v_ref_1453_ = l_Lean_replaceRef(v___x_1440_, v_a_1433_);
lean_dec(v___x_1440_);
v___x_1454_ = 0;
v___x_1455_ = l_Lean_SourceInfo_fromRef(v_ref_1453_, v___x_1454_);
lean_dec(v_ref_1453_);
v___x_1456_ = lean_obj_once(&l_term___u2283___00__closed__1, &l_term___u2283___00__closed__1_once, _init_l_term___u2283___00__closed__1);
v___x_1457_ = lean_obj_once(&l_term___u2283___00__closed__2, &l_term___u2283___00__closed__2_once, _init_l_term___u2283___00__closed__2);
lean_inc(v___x_1455_);
v___x_1458_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1455_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
v___x_1459_ = l_Lean_Syntax_node3(v___x_1455_, v___x_1456_, v___x_1451_, v___x_1458_, v___x_1452_);
v___x_1460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1460_, 0, v___x_1459_);
lean_ctor_set(v___x_1460_, 1, v_a_1434_);
return v___x_1460_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__SSuperset__1___boxed(lean_object* v_x_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l___aux__Init__Core______unexpand__SSuperset__1(v_x_1461_, v_a_1462_, v_a_1463_);
lean_dec(v_a_1462_);
return v_res_1464_;
}
}
static lean_object* _init_l_term___u222a___00__closed__0(void){
_start:
{
lean_object* v___x_1465_; 
v___x_1465_ = lean_mk_string_unchecked("term_∪_", 9, 7);
return v___x_1465_;
}
}
static lean_object* _init_l_term___u222a___00__closed__1(void){
_start:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = lean_obj_once(&l_term___u222a___00__closed__0, &l_term___u222a___00__closed__0_once, _init_l_term___u222a___00__closed__0);
v___x_1467_ = l_Lean_Name_mkStr1(v___x_1466_);
return v___x_1467_;
}
}
static lean_object* _init_l_term___u222a___00__closed__2(void){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = lean_mk_string_unchecked(" ∪ ", 5, 3);
return v___x_1468_;
}
}
static lean_object* _init_l_term___u222a___00__closed__3(void){
_start:
{
lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1469_ = lean_obj_once(&l_term___u222a___00__closed__2, &l_term___u222a___00__closed__2_once, _init_l_term___u222a___00__closed__2);
v___x_1470_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1470_, 0, v___x_1469_);
return v___x_1470_;
}
}
static lean_object* _init_l_term___u222a___00__closed__4(void){
_start:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1471_ = lean_unsigned_to_nat(66u);
v___x_1472_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__7, &l_term___x3c_x2d_x3e___00__closed__7_once, _init_l_term___x3c_x2d_x3e___00__closed__7);
v___x_1473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1472_);
lean_ctor_set(v___x_1473_, 1, v___x_1471_);
return v___x_1473_;
}
}
static lean_object* _init_l_term___u222a___00__closed__5(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1474_ = lean_obj_once(&l_term___u222a___00__closed__4, &l_term___u222a___00__closed__4_once, _init_l_term___u222a___00__closed__4);
v___x_1475_ = lean_obj_once(&l_term___u222a___00__closed__3, &l_term___u222a___00__closed__3_once, _init_l_term___u222a___00__closed__3);
v___x_1476_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_1477_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1476_);
lean_ctor_set(v___x_1477_, 1, v___x_1475_);
lean_ctor_set(v___x_1477_, 2, v___x_1474_);
return v___x_1477_;
}
}
static lean_object* _init_l_term___u222a___00__closed__6(void){
_start:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1478_ = lean_obj_once(&l_term___u222a___00__closed__5, &l_term___u222a___00__closed__5_once, _init_l_term___u222a___00__closed__5);
v___x_1479_ = lean_unsigned_to_nat(65u);
v___x_1480_ = lean_obj_once(&l_term___u222a___00__closed__1, &l_term___u222a___00__closed__1_once, _init_l_term___u222a___00__closed__1);
v___x_1481_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1480_);
lean_ctor_set(v___x_1481_, 1, v___x_1479_);
lean_ctor_set(v___x_1481_, 2, v___x_1479_);
lean_ctor_set(v___x_1481_, 3, v___x_1478_);
return v___x_1481_;
}
}
static lean_object* _init_l_term___u222a__(void){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = lean_obj_once(&l_term___u222a___00__closed__6, &l_term___u222a___00__closed__6_once, _init_l_term___u222a___00__closed__6);
return v___x_1482_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__0(void){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = lean_mk_string_unchecked("Union.union", 11, 11);
return v___x_1483_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__1(void){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1484_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u222a____1___closed__0, &l___aux__Init__Core______macroRules__term___u222a____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__0);
v___x_1485_ = l_String_toRawSubstring_x27(v___x_1484_);
return v___x_1485_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__2(void){
_start:
{
lean_object* v___x_1486_; 
v___x_1486_ = lean_mk_string_unchecked("Union", 5, 5);
return v___x_1486_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__3(void){
_start:
{
lean_object* v___x_1487_; 
v___x_1487_ = lean_mk_string_unchecked("union", 5, 5);
return v___x_1487_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__4(void){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1488_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u222a____1___closed__3, &l___aux__Init__Core______macroRules__term___u222a____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__3);
v___x_1489_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u222a____1___closed__2, &l___aux__Init__Core______macroRules__term___u222a____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__2);
v___x_1490_ = l_Lean_Name_mkStr2(v___x_1489_, v___x_1488_);
return v___x_1490_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__5(void){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1491_ = lean_box(0);
v___x_1492_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u222a____1___closed__4, &l___aux__Init__Core______macroRules__term___u222a____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__4);
v___x_1493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1492_);
lean_ctor_set(v___x_1493_, 1, v___x_1491_);
return v___x_1493_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__6(void){
_start:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1494_ = lean_box(0);
v___x_1495_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u222a____1___closed__5, &l___aux__Init__Core______macroRules__term___u222a____1___closed__5_once, _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__5);
v___x_1496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1495_);
lean_ctor_set(v___x_1496_, 1, v___x_1494_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u222a____1(lean_object* v_x_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_){
_start:
{
lean_object* v___x_1500_; uint8_t v___x_1501_; 
v___x_1500_ = lean_obj_once(&l_term___u222a___00__closed__1, &l_term___u222a___00__closed__1_once, _init_l_term___u222a___00__closed__1);
lean_inc(v_x_1497_);
v___x_1501_ = l_Lean_Syntax_isOfKind(v_x_1497_, v___x_1500_);
if (v___x_1501_ == 0)
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
lean_dec(v_x_1497_);
v___x_1502_ = lean_box(1);
v___x_1503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1502_);
lean_ctor_set(v___x_1503_, 1, v_a_1499_);
return v___x_1503_;
}
else
{
lean_object* v_quotContext_1504_; lean_object* v_currMacroScope_1505_; lean_object* v_ref_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; uint8_t v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v_quotContext_1504_ = lean_ctor_get(v_a_1498_, 1);
v_currMacroScope_1505_ = lean_ctor_get(v_a_1498_, 2);
v_ref_1506_ = lean_ctor_get(v_a_1498_, 5);
v___x_1507_ = lean_unsigned_to_nat(0u);
v___x_1508_ = l_Lean_Syntax_getArg(v_x_1497_, v___x_1507_);
v___x_1509_ = lean_unsigned_to_nat(2u);
v___x_1510_ = l_Lean_Syntax_getArg(v_x_1497_, v___x_1509_);
lean_dec(v_x_1497_);
v___x_1511_ = 0;
v___x_1512_ = l_Lean_SourceInfo_fromRef(v_ref_1506_, v___x_1511_);
v___x_1513_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_1514_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u222a____1___closed__1, &l___aux__Init__Core______macroRules__term___u222a____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__1);
v___x_1515_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u222a____1___closed__4, &l___aux__Init__Core______macroRules__term___u222a____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__4);
lean_inc(v_currMacroScope_1505_);
lean_inc(v_quotContext_1504_);
v___x_1516_ = l_Lean_addMacroScope(v_quotContext_1504_, v___x_1515_, v_currMacroScope_1505_);
v___x_1517_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u222a____1___closed__6, &l___aux__Init__Core______macroRules__term___u222a____1___closed__6_once, _init_l___aux__Init__Core______macroRules__term___u222a____1___closed__6);
lean_inc_n(v___x_1512_, 2);
v___x_1518_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1512_);
lean_ctor_set(v___x_1518_, 1, v___x_1514_);
lean_ctor_set(v___x_1518_, 2, v___x_1516_);
lean_ctor_set(v___x_1518_, 3, v___x_1517_);
v___x_1519_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_1520_ = l_Lean_Syntax_node2(v___x_1512_, v___x_1519_, v___x_1508_, v___x_1510_);
v___x_1521_ = l_Lean_Syntax_node2(v___x_1512_, v___x_1513_, v___x_1518_, v___x_1520_);
v___x_1522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1521_);
lean_ctor_set(v___x_1522_, 1, v_a_1499_);
return v___x_1522_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u222a____1___boxed(lean_object* v_x_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l___aux__Init__Core______macroRules__term___u222a____1(v_x_1523_, v_a_1524_, v_a_1525_);
lean_dec_ref(v_a_1524_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Union__union__1(lean_object* v_x_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_){
_start:
{
lean_object* v___x_1530_; uint8_t v___x_1531_; 
v___x_1530_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_1527_);
v___x_1531_ = l_Lean_Syntax_isOfKind(v_x_1527_, v___x_1530_);
if (v___x_1531_ == 0)
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
lean_dec(v_x_1527_);
v___x_1532_ = lean_box(0);
v___x_1533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1532_);
lean_ctor_set(v___x_1533_, 1, v_a_1529_);
return v___x_1533_;
}
else
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; uint8_t v___x_1537_; 
v___x_1534_ = lean_unsigned_to_nat(0u);
v___x_1535_ = l_Lean_Syntax_getArg(v_x_1527_, v___x_1534_);
v___x_1536_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_1535_);
v___x_1537_ = l_Lean_Syntax_isOfKind(v___x_1535_, v___x_1536_);
if (v___x_1537_ == 0)
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
lean_dec(v___x_1535_);
lean_dec(v_x_1527_);
v___x_1538_ = lean_box(0);
v___x_1539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1538_);
lean_ctor_set(v___x_1539_, 1, v_a_1529_);
return v___x_1539_;
}
else
{
lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; uint8_t v___x_1543_; 
v___x_1540_ = lean_unsigned_to_nat(1u);
v___x_1541_ = l_Lean_Syntax_getArg(v_x_1527_, v___x_1540_);
lean_dec(v_x_1527_);
v___x_1542_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1541_);
v___x_1543_ = l_Lean_Syntax_matchesNull(v___x_1541_, v___x_1542_);
if (v___x_1543_ == 0)
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
lean_dec(v___x_1541_);
lean_dec(v___x_1535_);
v___x_1544_ = lean_box(0);
v___x_1545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1544_);
lean_ctor_set(v___x_1545_, 1, v_a_1529_);
return v___x_1545_;
}
else
{
lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v_ref_1548_; uint8_t v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1546_ = l_Lean_Syntax_getArg(v___x_1541_, v___x_1534_);
v___x_1547_ = l_Lean_Syntax_getArg(v___x_1541_, v___x_1540_);
lean_dec(v___x_1541_);
v_ref_1548_ = l_Lean_replaceRef(v___x_1535_, v_a_1528_);
lean_dec(v___x_1535_);
v___x_1549_ = 0;
v___x_1550_ = l_Lean_SourceInfo_fromRef(v_ref_1548_, v___x_1549_);
lean_dec(v_ref_1548_);
v___x_1551_ = lean_obj_once(&l_term___u222a___00__closed__1, &l_term___u222a___00__closed__1_once, _init_l_term___u222a___00__closed__1);
v___x_1552_ = lean_obj_once(&l_term___u222a___00__closed__2, &l_term___u222a___00__closed__2_once, _init_l_term___u222a___00__closed__2);
lean_inc(v___x_1550_);
v___x_1553_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1550_);
lean_ctor_set(v___x_1553_, 1, v___x_1552_);
v___x_1554_ = l_Lean_Syntax_node3(v___x_1550_, v___x_1551_, v___x_1546_, v___x_1553_, v___x_1547_);
v___x_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1554_);
lean_ctor_set(v___x_1555_, 1, v_a_1529_);
return v___x_1555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Union__union__1___boxed(lean_object* v_x_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l___aux__Init__Core______unexpand__Union__union__1(v_x_1556_, v_a_1557_, v_a_1558_);
lean_dec(v_a_1557_);
return v_res_1559_;
}
}
static lean_object* _init_l_term___u2229___00__closed__0(void){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_mk_string_unchecked("term_∩_", 9, 7);
return v___x_1560_;
}
}
static lean_object* _init_l_term___u2229___00__closed__1(void){
_start:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1561_ = lean_obj_once(&l_term___u2229___00__closed__0, &l_term___u2229___00__closed__0_once, _init_l_term___u2229___00__closed__0);
v___x_1562_ = l_Lean_Name_mkStr1(v___x_1561_);
return v___x_1562_;
}
}
static lean_object* _init_l_term___u2229___00__closed__2(void){
_start:
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_mk_string_unchecked(" ∩ ", 5, 3);
return v___x_1563_;
}
}
static lean_object* _init_l_term___u2229___00__closed__3(void){
_start:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1564_ = lean_obj_once(&l_term___u2229___00__closed__2, &l_term___u2229___00__closed__2_once, _init_l_term___u2229___00__closed__2);
v___x_1565_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1564_);
return v___x_1565_;
}
}
static lean_object* _init_l_term___u2229___00__closed__4(void){
_start:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v___x_1566_ = lean_unsigned_to_nat(71u);
v___x_1567_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__7, &l_term___x3c_x2d_x3e___00__closed__7_once, _init_l_term___x3c_x2d_x3e___00__closed__7);
v___x_1568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1567_);
lean_ctor_set(v___x_1568_, 1, v___x_1566_);
return v___x_1568_;
}
}
static lean_object* _init_l_term___u2229___00__closed__5(void){
_start:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1569_ = lean_obj_once(&l_term___u2229___00__closed__4, &l_term___u2229___00__closed__4_once, _init_l_term___u2229___00__closed__4);
v___x_1570_ = lean_obj_once(&l_term___u2229___00__closed__3, &l_term___u2229___00__closed__3_once, _init_l_term___u2229___00__closed__3);
v___x_1571_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_1572_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1571_);
lean_ctor_set(v___x_1572_, 1, v___x_1570_);
lean_ctor_set(v___x_1572_, 2, v___x_1569_);
return v___x_1572_;
}
}
static lean_object* _init_l_term___u2229___00__closed__6(void){
_start:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1573_ = lean_obj_once(&l_term___u2229___00__closed__5, &l_term___u2229___00__closed__5_once, _init_l_term___u2229___00__closed__5);
v___x_1574_ = lean_unsigned_to_nat(70u);
v___x_1575_ = lean_obj_once(&l_term___u2229___00__closed__1, &l_term___u2229___00__closed__1_once, _init_l_term___u2229___00__closed__1);
v___x_1576_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
lean_ctor_set(v___x_1576_, 1, v___x_1574_);
lean_ctor_set(v___x_1576_, 2, v___x_1574_);
lean_ctor_set(v___x_1576_, 3, v___x_1573_);
return v___x_1576_;
}
}
static lean_object* _init_l_term___u2229__(void){
_start:
{
lean_object* v___x_1577_; 
v___x_1577_ = lean_obj_once(&l_term___u2229___00__closed__6, &l_term___u2229___00__closed__6_once, _init_l_term___u2229___00__closed__6);
return v___x_1577_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__0(void){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = lean_mk_string_unchecked("Inter.inter", 11, 11);
return v___x_1578_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__1(void){
_start:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1579_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2229____1___closed__0, &l___aux__Init__Core______macroRules__term___u2229____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__0);
v___x_1580_ = l_String_toRawSubstring_x27(v___x_1579_);
return v___x_1580_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__2(void){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = lean_mk_string_unchecked("Inter", 5, 5);
return v___x_1581_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__3(void){
_start:
{
lean_object* v___x_1582_; 
v___x_1582_ = lean_mk_string_unchecked("inter", 5, 5);
return v___x_1582_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__4(void){
_start:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1583_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2229____1___closed__3, &l___aux__Init__Core______macroRules__term___u2229____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__3);
v___x_1584_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2229____1___closed__2, &l___aux__Init__Core______macroRules__term___u2229____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__2);
v___x_1585_ = l_Lean_Name_mkStr2(v___x_1584_, v___x_1583_);
return v___x_1585_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__5(void){
_start:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1586_ = lean_box(0);
v___x_1587_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2229____1___closed__4, &l___aux__Init__Core______macroRules__term___u2229____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__4);
v___x_1588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1587_);
lean_ctor_set(v___x_1588_, 1, v___x_1586_);
return v___x_1588_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__6(void){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1589_ = lean_box(0);
v___x_1590_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2229____1___closed__5, &l___aux__Init__Core______macroRules__term___u2229____1___closed__5_once, _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__5);
v___x_1591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1590_);
lean_ctor_set(v___x_1591_, 1, v___x_1589_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2229____1(lean_object* v_x_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_){
_start:
{
lean_object* v___x_1595_; uint8_t v___x_1596_; 
v___x_1595_ = lean_obj_once(&l_term___u2229___00__closed__1, &l_term___u2229___00__closed__1_once, _init_l_term___u2229___00__closed__1);
lean_inc(v_x_1592_);
v___x_1596_ = l_Lean_Syntax_isOfKind(v_x_1592_, v___x_1595_);
if (v___x_1596_ == 0)
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
lean_dec(v_x_1592_);
v___x_1597_ = lean_box(1);
v___x_1598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1597_);
lean_ctor_set(v___x_1598_, 1, v_a_1594_);
return v___x_1598_;
}
else
{
lean_object* v_quotContext_1599_; lean_object* v_currMacroScope_1600_; lean_object* v_ref_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; uint8_t v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; 
v_quotContext_1599_ = lean_ctor_get(v_a_1593_, 1);
v_currMacroScope_1600_ = lean_ctor_get(v_a_1593_, 2);
v_ref_1601_ = lean_ctor_get(v_a_1593_, 5);
v___x_1602_ = lean_unsigned_to_nat(0u);
v___x_1603_ = l_Lean_Syntax_getArg(v_x_1592_, v___x_1602_);
v___x_1604_ = lean_unsigned_to_nat(2u);
v___x_1605_ = l_Lean_Syntax_getArg(v_x_1592_, v___x_1604_);
lean_dec(v_x_1592_);
v___x_1606_ = 0;
v___x_1607_ = l_Lean_SourceInfo_fromRef(v_ref_1601_, v___x_1606_);
v___x_1608_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_1609_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2229____1___closed__1, &l___aux__Init__Core______macroRules__term___u2229____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__1);
v___x_1610_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2229____1___closed__4, &l___aux__Init__Core______macroRules__term___u2229____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__4);
lean_inc(v_currMacroScope_1600_);
lean_inc(v_quotContext_1599_);
v___x_1611_ = l_Lean_addMacroScope(v_quotContext_1599_, v___x_1610_, v_currMacroScope_1600_);
v___x_1612_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2229____1___closed__6, &l___aux__Init__Core______macroRules__term___u2229____1___closed__6_once, _init_l___aux__Init__Core______macroRules__term___u2229____1___closed__6);
lean_inc_n(v___x_1607_, 2);
v___x_1613_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1607_);
lean_ctor_set(v___x_1613_, 1, v___x_1609_);
lean_ctor_set(v___x_1613_, 2, v___x_1611_);
lean_ctor_set(v___x_1613_, 3, v___x_1612_);
v___x_1614_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_1615_ = l_Lean_Syntax_node2(v___x_1607_, v___x_1614_, v___x_1603_, v___x_1605_);
v___x_1616_ = l_Lean_Syntax_node2(v___x_1607_, v___x_1608_, v___x_1613_, v___x_1615_);
v___x_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1616_);
lean_ctor_set(v___x_1617_, 1, v_a_1594_);
return v___x_1617_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2229____1___boxed(lean_object* v_x_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_){
_start:
{
lean_object* v_res_1621_; 
v_res_1621_ = l___aux__Init__Core______macroRules__term___u2229____1(v_x_1618_, v_a_1619_, v_a_1620_);
lean_dec_ref(v_a_1619_);
return v_res_1621_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Inter__inter__1(lean_object* v_x_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_){
_start:
{
lean_object* v___x_1625_; uint8_t v___x_1626_; 
v___x_1625_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_1622_);
v___x_1626_ = l_Lean_Syntax_isOfKind(v_x_1622_, v___x_1625_);
if (v___x_1626_ == 0)
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
lean_dec(v_x_1622_);
v___x_1627_ = lean_box(0);
v___x_1628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
lean_ctor_set(v___x_1628_, 1, v_a_1624_);
return v___x_1628_;
}
else
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; uint8_t v___x_1632_; 
v___x_1629_ = lean_unsigned_to_nat(0u);
v___x_1630_ = l_Lean_Syntax_getArg(v_x_1622_, v___x_1629_);
v___x_1631_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_1630_);
v___x_1632_ = l_Lean_Syntax_isOfKind(v___x_1630_, v___x_1631_);
if (v___x_1632_ == 0)
{
lean_object* v___x_1633_; lean_object* v___x_1634_; 
lean_dec(v___x_1630_);
lean_dec(v_x_1622_);
v___x_1633_ = lean_box(0);
v___x_1634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1633_);
lean_ctor_set(v___x_1634_, 1, v_a_1624_);
return v___x_1634_;
}
else
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; uint8_t v___x_1638_; 
v___x_1635_ = lean_unsigned_to_nat(1u);
v___x_1636_ = l_Lean_Syntax_getArg(v_x_1622_, v___x_1635_);
lean_dec(v_x_1622_);
v___x_1637_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1636_);
v___x_1638_ = l_Lean_Syntax_matchesNull(v___x_1636_, v___x_1637_);
if (v___x_1638_ == 0)
{
lean_object* v___x_1639_; lean_object* v___x_1640_; 
lean_dec(v___x_1636_);
lean_dec(v___x_1630_);
v___x_1639_ = lean_box(0);
v___x_1640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1639_);
lean_ctor_set(v___x_1640_, 1, v_a_1624_);
return v___x_1640_;
}
else
{
lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v_ref_1643_; uint8_t v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1641_ = l_Lean_Syntax_getArg(v___x_1636_, v___x_1629_);
v___x_1642_ = l_Lean_Syntax_getArg(v___x_1636_, v___x_1635_);
lean_dec(v___x_1636_);
v_ref_1643_ = l_Lean_replaceRef(v___x_1630_, v_a_1623_);
lean_dec(v___x_1630_);
v___x_1644_ = 0;
v___x_1645_ = l_Lean_SourceInfo_fromRef(v_ref_1643_, v___x_1644_);
lean_dec(v_ref_1643_);
v___x_1646_ = lean_obj_once(&l_term___u2229___00__closed__1, &l_term___u2229___00__closed__1_once, _init_l_term___u2229___00__closed__1);
v___x_1647_ = lean_obj_once(&l_term___u2229___00__closed__2, &l_term___u2229___00__closed__2_once, _init_l_term___u2229___00__closed__2);
lean_inc(v___x_1645_);
v___x_1648_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1645_);
lean_ctor_set(v___x_1648_, 1, v___x_1647_);
v___x_1649_ = l_Lean_Syntax_node3(v___x_1645_, v___x_1646_, v___x_1641_, v___x_1648_, v___x_1642_);
v___x_1650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1649_);
lean_ctor_set(v___x_1650_, 1, v_a_1624_);
return v___x_1650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Inter__inter__1___boxed(lean_object* v_x_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l___aux__Init__Core______unexpand__Inter__inter__1(v_x_1651_, v_a_1652_, v_a_1653_);
lean_dec(v_a_1652_);
return v_res_1654_;
}
}
static lean_object* _init_l_term___x5c___00__closed__0(void){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = lean_mk_string_unchecked("term_\\_", 7, 7);
return v___x_1655_;
}
}
static lean_object* _init_l_term___x5c___00__closed__1(void){
_start:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1656_ = lean_obj_once(&l_term___x5c___00__closed__0, &l_term___x5c___00__closed__0_once, _init_l_term___x5c___00__closed__0);
v___x_1657_ = l_Lean_Name_mkStr1(v___x_1656_);
return v___x_1657_;
}
}
static lean_object* _init_l_term___x5c___00__closed__2(void){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = lean_mk_string_unchecked(" \\ ", 3, 3);
return v___x_1658_;
}
}
static lean_object* _init_l_term___x5c___00__closed__3(void){
_start:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1659_ = lean_obj_once(&l_term___x5c___00__closed__2, &l_term___x5c___00__closed__2_once, _init_l_term___x5c___00__closed__2);
v___x_1660_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1659_);
return v___x_1660_;
}
}
static lean_object* _init_l_term___x5c___00__closed__4(void){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1661_ = lean_obj_once(&l_term___u2229___00__closed__4, &l_term___u2229___00__closed__4_once, _init_l_term___u2229___00__closed__4);
v___x_1662_ = lean_obj_once(&l_term___x5c___00__closed__3, &l_term___x5c___00__closed__3_once, _init_l_term___x5c___00__closed__3);
v___x_1663_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_1664_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
lean_ctor_set(v___x_1664_, 1, v___x_1662_);
lean_ctor_set(v___x_1664_, 2, v___x_1661_);
return v___x_1664_;
}
}
static lean_object* _init_l_term___x5c___00__closed__5(void){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1665_ = lean_obj_once(&l_term___x5c___00__closed__4, &l_term___x5c___00__closed__4_once, _init_l_term___x5c___00__closed__4);
v___x_1666_ = lean_unsigned_to_nat(71u);
v___x_1667_ = lean_unsigned_to_nat(70u);
v___x_1668_ = lean_obj_once(&l_term___x5c___00__closed__1, &l_term___x5c___00__closed__1_once, _init_l_term___x5c___00__closed__1);
v___x_1669_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1668_);
lean_ctor_set(v___x_1669_, 1, v___x_1667_);
lean_ctor_set(v___x_1669_, 2, v___x_1666_);
lean_ctor_set(v___x_1669_, 3, v___x_1665_);
return v___x_1669_;
}
}
static lean_object* _init_l_term___x5c__(void){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = lean_obj_once(&l_term___x5c___00__closed__5, &l_term___x5c___00__closed__5_once, _init_l_term___x5c___00__closed__5);
return v___x_1670_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__0(void){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = lean_mk_string_unchecked("SDiff.sdiff", 11, 11);
return v___x_1671_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__1(void){
_start:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1672_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x5c____1___closed__0, &l___aux__Init__Core______macroRules__term___x5c____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__0);
v___x_1673_ = l_String_toRawSubstring_x27(v___x_1672_);
return v___x_1673_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__2(void){
_start:
{
lean_object* v___x_1674_; 
v___x_1674_ = lean_mk_string_unchecked("SDiff", 5, 5);
return v___x_1674_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__3(void){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = lean_mk_string_unchecked("sdiff", 5, 5);
return v___x_1675_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__4(void){
_start:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1676_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x5c____1___closed__3, &l___aux__Init__Core______macroRules__term___x5c____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__3);
v___x_1677_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x5c____1___closed__2, &l___aux__Init__Core______macroRules__term___x5c____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__2);
v___x_1678_ = l_Lean_Name_mkStr2(v___x_1677_, v___x_1676_);
return v___x_1678_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__5(void){
_start:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1679_ = lean_box(0);
v___x_1680_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x5c____1___closed__4, &l___aux__Init__Core______macroRules__term___x5c____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__4);
v___x_1681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
lean_ctor_set(v___x_1681_, 1, v___x_1679_);
return v___x_1681_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__6(void){
_start:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1682_ = lean_box(0);
v___x_1683_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x5c____1___closed__5, &l___aux__Init__Core______macroRules__term___x5c____1___closed__5_once, _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__5);
v___x_1684_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1683_);
lean_ctor_set(v___x_1684_, 1, v___x_1682_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x5c____1(lean_object* v_x_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_){
_start:
{
lean_object* v___x_1688_; uint8_t v___x_1689_; 
v___x_1688_ = lean_obj_once(&l_term___x5c___00__closed__1, &l_term___x5c___00__closed__1_once, _init_l_term___x5c___00__closed__1);
lean_inc(v_x_1685_);
v___x_1689_ = l_Lean_Syntax_isOfKind(v_x_1685_, v___x_1688_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
lean_dec(v_x_1685_);
v___x_1690_ = lean_box(1);
v___x_1691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
lean_ctor_set(v___x_1691_, 1, v_a_1687_);
return v___x_1691_;
}
else
{
lean_object* v_quotContext_1692_; lean_object* v_currMacroScope_1693_; lean_object* v_ref_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; uint8_t v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v_quotContext_1692_ = lean_ctor_get(v_a_1686_, 1);
v_currMacroScope_1693_ = lean_ctor_get(v_a_1686_, 2);
v_ref_1694_ = lean_ctor_get(v_a_1686_, 5);
v___x_1695_ = lean_unsigned_to_nat(0u);
v___x_1696_ = l_Lean_Syntax_getArg(v_x_1685_, v___x_1695_);
v___x_1697_ = lean_unsigned_to_nat(2u);
v___x_1698_ = l_Lean_Syntax_getArg(v_x_1685_, v___x_1697_);
lean_dec(v_x_1685_);
v___x_1699_ = 0;
v___x_1700_ = l_Lean_SourceInfo_fromRef(v_ref_1694_, v___x_1699_);
v___x_1701_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_1702_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x5c____1___closed__1, &l___aux__Init__Core______macroRules__term___x5c____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__1);
v___x_1703_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x5c____1___closed__4, &l___aux__Init__Core______macroRules__term___x5c____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__4);
lean_inc(v_currMacroScope_1693_);
lean_inc(v_quotContext_1692_);
v___x_1704_ = l_Lean_addMacroScope(v_quotContext_1692_, v___x_1703_, v_currMacroScope_1693_);
v___x_1705_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x5c____1___closed__6, &l___aux__Init__Core______macroRules__term___x5c____1___closed__6_once, _init_l___aux__Init__Core______macroRules__term___x5c____1___closed__6);
lean_inc_n(v___x_1700_, 2);
v___x_1706_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1706_, 0, v___x_1700_);
lean_ctor_set(v___x_1706_, 1, v___x_1702_);
lean_ctor_set(v___x_1706_, 2, v___x_1704_);
lean_ctor_set(v___x_1706_, 3, v___x_1705_);
v___x_1707_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_1708_ = l_Lean_Syntax_node2(v___x_1700_, v___x_1707_, v___x_1696_, v___x_1698_);
v___x_1709_ = l_Lean_Syntax_node2(v___x_1700_, v___x_1701_, v___x_1706_, v___x_1708_);
v___x_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1709_);
lean_ctor_set(v___x_1710_, 1, v_a_1687_);
return v___x_1710_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x5c____1___boxed(lean_object* v_x_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_){
_start:
{
lean_object* v_res_1714_; 
v_res_1714_ = l___aux__Init__Core______macroRules__term___x5c____1(v_x_1711_, v_a_1712_, v_a_1713_);
lean_dec_ref(v_a_1712_);
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__SDiff__sdiff__1(lean_object* v_x_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_){
_start:
{
lean_object* v___x_1718_; uint8_t v___x_1719_; 
v___x_1718_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_1715_);
v___x_1719_ = l_Lean_Syntax_isOfKind(v_x_1715_, v___x_1718_);
if (v___x_1719_ == 0)
{
lean_object* v___x_1720_; lean_object* v___x_1721_; 
lean_dec(v_x_1715_);
v___x_1720_ = lean_box(0);
v___x_1721_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1720_);
lean_ctor_set(v___x_1721_, 1, v_a_1717_);
return v___x_1721_;
}
else
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; uint8_t v___x_1725_; 
v___x_1722_ = lean_unsigned_to_nat(0u);
v___x_1723_ = l_Lean_Syntax_getArg(v_x_1715_, v___x_1722_);
v___x_1724_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_1723_);
v___x_1725_ = l_Lean_Syntax_isOfKind(v___x_1723_, v___x_1724_);
if (v___x_1725_ == 0)
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
lean_dec(v___x_1723_);
lean_dec(v_x_1715_);
v___x_1726_ = lean_box(0);
v___x_1727_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1726_);
lean_ctor_set(v___x_1727_, 1, v_a_1717_);
return v___x_1727_;
}
else
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; uint8_t v___x_1731_; 
v___x_1728_ = lean_unsigned_to_nat(1u);
v___x_1729_ = l_Lean_Syntax_getArg(v_x_1715_, v___x_1728_);
lean_dec(v_x_1715_);
v___x_1730_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1729_);
v___x_1731_ = l_Lean_Syntax_matchesNull(v___x_1729_, v___x_1730_);
if (v___x_1731_ == 0)
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
lean_dec(v___x_1729_);
lean_dec(v___x_1723_);
v___x_1732_ = lean_box(0);
v___x_1733_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1732_);
lean_ctor_set(v___x_1733_, 1, v_a_1717_);
return v___x_1733_;
}
else
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v_ref_1736_; uint8_t v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v___x_1734_ = l_Lean_Syntax_getArg(v___x_1729_, v___x_1722_);
v___x_1735_ = l_Lean_Syntax_getArg(v___x_1729_, v___x_1728_);
lean_dec(v___x_1729_);
v_ref_1736_ = l_Lean_replaceRef(v___x_1723_, v_a_1716_);
lean_dec(v___x_1723_);
v___x_1737_ = 0;
v___x_1738_ = l_Lean_SourceInfo_fromRef(v_ref_1736_, v___x_1737_);
lean_dec(v_ref_1736_);
v___x_1739_ = lean_obj_once(&l_term___x5c___00__closed__1, &l_term___x5c___00__closed__1_once, _init_l_term___x5c___00__closed__1);
v___x_1740_ = lean_obj_once(&l_term___x5c___00__closed__2, &l_term___x5c___00__closed__2_once, _init_l_term___x5c___00__closed__2);
lean_inc(v___x_1738_);
v___x_1741_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1738_);
lean_ctor_set(v___x_1741_, 1, v___x_1740_);
v___x_1742_ = l_Lean_Syntax_node3(v___x_1738_, v___x_1739_, v___x_1734_, v___x_1741_, v___x_1735_);
v___x_1743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1743_, 0, v___x_1742_);
lean_ctor_set(v___x_1743_, 1, v_a_1717_);
return v___x_1743_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__SDiff__sdiff__1___boxed(lean_object* v_x_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l___aux__Init__Core______unexpand__SDiff__sdiff__1(v_x_1744_, v_a_1745_, v_a_1746_);
lean_dec(v_a_1745_);
return v_res_1747_;
}
}
static lean_object* _init_l_term_x7b_x7d___closed__0(void){
_start:
{
lean_object* v___x_1748_; 
v___x_1748_ = lean_mk_string_unchecked("term{}", 6, 6);
return v___x_1748_;
}
}
static lean_object* _init_l_term_x7b_x7d___closed__1(void){
_start:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; 
v___x_1749_ = lean_obj_once(&l_term_x7b_x7d___closed__0, &l_term_x7b_x7d___closed__0_once, _init_l_term_x7b_x7d___closed__0);
v___x_1750_ = l_Lean_Name_mkStr1(v___x_1749_);
return v___x_1750_;
}
}
static lean_object* _init_l_term_x7b_x7d___closed__2(void){
_start:
{
lean_object* v___x_1751_; 
v___x_1751_ = lean_mk_string_unchecked("{", 1, 1);
return v___x_1751_;
}
}
static lean_object* _init_l_term_x7b_x7d___closed__3(void){
_start:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = lean_obj_once(&l_term_x7b_x7d___closed__2, &l_term_x7b_x7d___closed__2_once, _init_l_term_x7b_x7d___closed__2);
v___x_1753_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
return v___x_1753_;
}
}
static lean_object* _init_l_term_x7b_x7d___closed__4(void){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = lean_mk_string_unchecked("}", 1, 1);
return v___x_1754_;
}
}
static lean_object* _init_l_term_x7b_x7d___closed__5(void){
_start:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1755_ = lean_obj_once(&l_term_x7b_x7d___closed__4, &l_term_x7b_x7d___closed__4_once, _init_l_term_x7b_x7d___closed__4);
v___x_1756_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1755_);
return v___x_1756_;
}
}
static lean_object* _init_l_term_x7b_x7d___closed__6(void){
_start:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1757_ = lean_obj_once(&l_term_x7b_x7d___closed__5, &l_term_x7b_x7d___closed__5_once, _init_l_term_x7b_x7d___closed__5);
v___x_1758_ = lean_obj_once(&l_term_x7b_x7d___closed__3, &l_term_x7b_x7d___closed__3_once, _init_l_term_x7b_x7d___closed__3);
v___x_1759_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_1760_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1759_);
lean_ctor_set(v___x_1760_, 1, v___x_1758_);
lean_ctor_set(v___x_1760_, 2, v___x_1757_);
return v___x_1760_;
}
}
static lean_object* _init_l_term_x7b_x7d___closed__7(void){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1761_ = lean_obj_once(&l_term_x7b_x7d___closed__6, &l_term_x7b_x7d___closed__6_once, _init_l_term_x7b_x7d___closed__6);
v___x_1762_ = lean_unsigned_to_nat(1024u);
v___x_1763_ = lean_obj_once(&l_term_x7b_x7d___closed__1, &l_term_x7b_x7d___closed__1_once, _init_l_term_x7b_x7d___closed__1);
v___x_1764_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1763_);
lean_ctor_set(v___x_1764_, 1, v___x_1762_);
lean_ctor_set(v___x_1764_, 2, v___x_1761_);
return v___x_1764_;
}
}
static lean_object* _init_l_term_x7b_x7d(void){
_start:
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_obj_once(&l_term_x7b_x7d___closed__7, &l_term_x7b_x7d___closed__7_once, _init_l_term_x7b_x7d___closed__7);
return v___x_1765_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__0(void){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = lean_mk_string_unchecked("EmptyCollection.emptyCollection", 31, 31);
return v___x_1766_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__1(void){
_start:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1767_ = lean_obj_once(&l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__0, &l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__0_once, _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__0);
v___x_1768_ = l_String_toRawSubstring_x27(v___x_1767_);
return v___x_1768_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__2(void){
_start:
{
lean_object* v___x_1769_; 
v___x_1769_ = lean_mk_string_unchecked("EmptyCollection", 15, 15);
return v___x_1769_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__3(void){
_start:
{
lean_object* v___x_1770_; 
v___x_1770_ = lean_mk_string_unchecked("emptyCollection", 15, 15);
return v___x_1770_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__4(void){
_start:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1771_ = lean_obj_once(&l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__3, &l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__3_once, _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__3);
v___x_1772_ = lean_obj_once(&l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__2, &l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__2_once, _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__2);
v___x_1773_ = l_Lean_Name_mkStr2(v___x_1772_, v___x_1771_);
return v___x_1773_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__5(void){
_start:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1774_ = lean_box(0);
v___x_1775_ = lean_obj_once(&l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__4, &l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__4_once, _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__4);
v___x_1776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1775_);
lean_ctor_set(v___x_1776_, 1, v___x_1774_);
return v___x_1776_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__6(void){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1777_ = lean_box(0);
v___x_1778_ = lean_obj_once(&l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__5, &l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__5_once, _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__5);
v___x_1779_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1779_, 0, v___x_1778_);
lean_ctor_set(v___x_1779_, 1, v___x_1777_);
return v___x_1779_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term_x7b_x7d__1(lean_object* v_x_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_){
_start:
{
lean_object* v___x_1783_; uint8_t v___x_1784_; 
v___x_1783_ = lean_obj_once(&l_term_x7b_x7d___closed__1, &l_term_x7b_x7d___closed__1_once, _init_l_term_x7b_x7d___closed__1);
v___x_1784_ = l_Lean_Syntax_isOfKind(v_x_1780_, v___x_1783_);
if (v___x_1784_ == 0)
{
lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1785_ = lean_box(1);
v___x_1786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1785_);
lean_ctor_set(v___x_1786_, 1, v_a_1782_);
return v___x_1786_;
}
else
{
lean_object* v_quotContext_1787_; lean_object* v_currMacroScope_1788_; lean_object* v_ref_1789_; uint8_t v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v_quotContext_1787_ = lean_ctor_get(v_a_1781_, 1);
v_currMacroScope_1788_ = lean_ctor_get(v_a_1781_, 2);
v_ref_1789_ = lean_ctor_get(v_a_1781_, 5);
v___x_1790_ = 0;
v___x_1791_ = l_Lean_SourceInfo_fromRef(v_ref_1789_, v___x_1790_);
v___x_1792_ = lean_obj_once(&l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__1, &l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__1_once, _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__1);
v___x_1793_ = lean_obj_once(&l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__4, &l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__4_once, _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__4);
lean_inc(v_currMacroScope_1788_);
lean_inc(v_quotContext_1787_);
v___x_1794_ = l_Lean_addMacroScope(v_quotContext_1787_, v___x_1793_, v_currMacroScope_1788_);
v___x_1795_ = lean_obj_once(&l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__6, &l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__6_once, _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__6);
v___x_1796_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1791_);
lean_ctor_set(v___x_1796_, 1, v___x_1792_);
lean_ctor_set(v___x_1796_, 2, v___x_1794_);
lean_ctor_set(v___x_1796_, 3, v___x_1795_);
v___x_1797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1796_);
lean_ctor_set(v___x_1797_, 1, v_a_1782_);
return v___x_1797_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term_x7b_x7d__1___boxed(lean_object* v_x_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l___aux__Init__Core______macroRules__term_x7b_x7d__1(v_x_1798_, v_a_1799_, v_a_1800_);
lean_dec_ref(v_a_1799_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__EmptyCollection__emptyCollection__1(lean_object* v_x_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_){
_start:
{
lean_object* v___x_1805_; uint8_t v___x_1806_; 
v___x_1805_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v_x_1802_);
v___x_1806_ = l_Lean_Syntax_isOfKind(v_x_1802_, v___x_1805_);
if (v___x_1806_ == 0)
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
lean_dec(v_x_1802_);
v___x_1807_ = lean_box(0);
v___x_1808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1807_);
lean_ctor_set(v___x_1808_, 1, v_a_1804_);
return v___x_1808_;
}
else
{
lean_object* v_ref_1809_; uint8_t v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v_ref_1809_ = l_Lean_replaceRef(v_x_1802_, v_a_1803_);
lean_dec(v_x_1802_);
v___x_1810_ = 0;
v___x_1811_ = l_Lean_SourceInfo_fromRef(v_ref_1809_, v___x_1810_);
lean_dec(v_ref_1809_);
v___x_1812_ = lean_obj_once(&l_term_x7b_x7d___closed__1, &l_term_x7b_x7d___closed__1_once, _init_l_term_x7b_x7d___closed__1);
v___x_1813_ = lean_obj_once(&l_term_x7b_x7d___closed__2, &l_term_x7b_x7d___closed__2_once, _init_l_term_x7b_x7d___closed__2);
lean_inc_n(v___x_1811_, 2);
v___x_1814_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1811_);
lean_ctor_set(v___x_1814_, 1, v___x_1813_);
v___x_1815_ = lean_obj_once(&l_term_x7b_x7d___closed__4, &l_term_x7b_x7d___closed__4_once, _init_l_term_x7b_x7d___closed__4);
v___x_1816_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1811_);
lean_ctor_set(v___x_1816_, 1, v___x_1815_);
v___x_1817_ = l_Lean_Syntax_node2(v___x_1811_, v___x_1812_, v___x_1814_, v___x_1816_);
v___x_1818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1818_, 0, v___x_1817_);
lean_ctor_set(v___x_1818_, 1, v_a_1804_);
return v___x_1818_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__EmptyCollection__emptyCollection__1___boxed(lean_object* v_x_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l___aux__Init__Core______unexpand__EmptyCollection__emptyCollection__1(v_x_1819_, v_a_1820_, v_a_1821_);
lean_dec(v_a_1820_);
return v_res_1822_;
}
}
static lean_object* _init_l_term_u2205___closed__0(void){
_start:
{
lean_object* v___x_1823_; 
v___x_1823_ = lean_mk_string_unchecked("term∅", 7, 5);
return v___x_1823_;
}
}
static lean_object* _init_l_term_u2205___closed__1(void){
_start:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1824_ = lean_obj_once(&l_term_u2205___closed__0, &l_term_u2205___closed__0_once, _init_l_term_u2205___closed__0);
v___x_1825_ = l_Lean_Name_mkStr1(v___x_1824_);
return v___x_1825_;
}
}
static lean_object* _init_l_term_u2205___closed__2(void){
_start:
{
lean_object* v___x_1826_; 
v___x_1826_ = lean_mk_string_unchecked("∅", 3, 1);
return v___x_1826_;
}
}
static lean_object* _init_l_term_u2205___closed__3(void){
_start:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1827_ = lean_obj_once(&l_term_u2205___closed__2, &l_term_u2205___closed__2_once, _init_l_term_u2205___closed__2);
v___x_1828_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1827_);
return v___x_1828_;
}
}
static lean_object* _init_l_term_u2205___closed__4(void){
_start:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1829_ = lean_obj_once(&l_term_u2205___closed__3, &l_term_u2205___closed__3_once, _init_l_term_u2205___closed__3);
v___x_1830_ = lean_unsigned_to_nat(1024u);
v___x_1831_ = lean_obj_once(&l_term_u2205___closed__1, &l_term_u2205___closed__1_once, _init_l_term_u2205___closed__1);
v___x_1832_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1831_);
lean_ctor_set(v___x_1832_, 1, v___x_1830_);
lean_ctor_set(v___x_1832_, 2, v___x_1829_);
return v___x_1832_;
}
}
static lean_object* _init_l_term_u2205(void){
_start:
{
lean_object* v___x_1833_; 
v___x_1833_ = lean_obj_once(&l_term_u2205___closed__4, &l_term_u2205___closed__4_once, _init_l_term_u2205___closed__4);
return v___x_1833_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term_u2205__1(lean_object* v_x_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_){
_start:
{
lean_object* v___x_1837_; uint8_t v___x_1838_; 
v___x_1837_ = lean_obj_once(&l_term_u2205___closed__1, &l_term_u2205___closed__1_once, _init_l_term_u2205___closed__1);
v___x_1838_ = l_Lean_Syntax_isOfKind(v_x_1834_, v___x_1837_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1839_ = lean_box(1);
v___x_1840_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1839_);
lean_ctor_set(v___x_1840_, 1, v_a_1836_);
return v___x_1840_;
}
else
{
lean_object* v_quotContext_1841_; lean_object* v_currMacroScope_1842_; lean_object* v_ref_1843_; uint8_t v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v_quotContext_1841_ = lean_ctor_get(v_a_1835_, 1);
v_currMacroScope_1842_ = lean_ctor_get(v_a_1835_, 2);
v_ref_1843_ = lean_ctor_get(v_a_1835_, 5);
v___x_1844_ = 0;
v___x_1845_ = l_Lean_SourceInfo_fromRef(v_ref_1843_, v___x_1844_);
v___x_1846_ = lean_obj_once(&l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__1, &l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__1_once, _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__1);
v___x_1847_ = lean_obj_once(&l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__4, &l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__4_once, _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__4);
lean_inc(v_currMacroScope_1842_);
lean_inc(v_quotContext_1841_);
v___x_1848_ = l_Lean_addMacroScope(v_quotContext_1841_, v___x_1847_, v_currMacroScope_1842_);
v___x_1849_ = lean_obj_once(&l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__6, &l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__6_once, _init_l___aux__Init__Core______macroRules__term_x7b_x7d__1___closed__6);
v___x_1850_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1845_);
lean_ctor_set(v___x_1850_, 1, v___x_1846_);
lean_ctor_set(v___x_1850_, 2, v___x_1848_);
lean_ctor_set(v___x_1850_, 3, v___x_1849_);
v___x_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1850_);
lean_ctor_set(v___x_1851_, 1, v_a_1836_);
return v___x_1851_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term_u2205__1___boxed(lean_object* v_x_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = l___aux__Init__Core______macroRules__term_u2205__1(v_x_1852_, v_a_1853_, v_a_1854_);
lean_dec_ref(v_a_1853_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__EmptyCollection__emptyCollection__2(lean_object* v_x_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_){
_start:
{
lean_object* v___x_1859_; uint8_t v___x_1860_; 
v___x_1859_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v_x_1856_);
v___x_1860_ = l_Lean_Syntax_isOfKind(v_x_1856_, v___x_1859_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; lean_object* v___x_1862_; 
lean_dec(v_x_1856_);
v___x_1861_ = lean_box(0);
v___x_1862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1861_);
lean_ctor_set(v___x_1862_, 1, v_a_1858_);
return v___x_1862_;
}
else
{
lean_object* v_ref_1863_; uint8_t v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; 
v_ref_1863_ = l_Lean_replaceRef(v_x_1856_, v_a_1857_);
lean_dec(v_x_1856_);
v___x_1864_ = 0;
v___x_1865_ = l_Lean_SourceInfo_fromRef(v_ref_1863_, v___x_1864_);
lean_dec(v_ref_1863_);
v___x_1866_ = lean_obj_once(&l_term_u2205___closed__1, &l_term_u2205___closed__1_once, _init_l_term_u2205___closed__1);
v___x_1867_ = lean_obj_once(&l_term_u2205___closed__2, &l_term_u2205___closed__2_once, _init_l_term_u2205___closed__2);
lean_inc(v___x_1865_);
v___x_1868_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1865_);
lean_ctor_set(v___x_1868_, 1, v___x_1867_);
v___x_1869_ = l_Lean_Syntax_node1(v___x_1865_, v___x_1866_, v___x_1868_);
v___x_1870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1869_);
lean_ctor_set(v___x_1870_, 1, v_a_1858_);
return v___x_1870_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__EmptyCollection__emptyCollection__2___boxed(lean_object* v_x_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l___aux__Init__Core______unexpand__EmptyCollection__emptyCollection__2(v_x_1871_, v_a_1872_, v_a_1873_);
lean_dec(v_a_1872_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedTask_default___redArg(lean_object* v_inst_1875_){
_start:
{
lean_object* v___x_1876_; 
v___x_1876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1876_, 0, v_inst_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedTask_default(lean_object* v_00_u03b1_1877_, lean_object* v_inst_1878_){
_start:
{
lean_object* v___x_1879_; 
v___x_1879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1879_, 0, v_inst_1878_);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedTask___redArg(lean_object* v_inst_1880_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1881_, 0, v_inst_1880_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedTask(lean_object* v_a_1882_, lean_object* v_inst_1883_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1884_, 0, v_inst_1883_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Task_pure___boxed(lean_object* v_00_u03b1_1887_, lean_object* v_get_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = lean_task_pure(v_get_1888_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Task_get___boxed(lean_object* v_00_u03b1_1892_, lean_object* v_self_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = lean_task_get_own(v_self_1893_);
return v_res_1894_;
}
}
static lean_object* _init_l_Task_Priority_default(void){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = lean_unsigned_to_nat(0u);
return v___x_1895_;
}
}
static lean_object* _init_l_Task_Priority_max(void){
_start:
{
lean_object* v___x_1896_; 
v___x_1896_ = lean_unsigned_to_nat(8u);
return v___x_1896_;
}
}
static lean_object* _init_l_Task_Priority_dedicated(void){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = lean_unsigned_to_nat(9u);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Task_spawn___boxed(lean_object* v_00_u03b1_1901_, lean_object* v_fn_1902_, lean_object* v_prio_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = lean_task_spawn(v_fn_1902_, v_prio_1903_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_Task_map___boxed(lean_object* v_00_u03b1_1911_, lean_object* v_00_u03b2_1912_, lean_object* v_f_1913_, lean_object* v_x_1914_, lean_object* v_prio_1915_, lean_object* v_sync_1916_){
_start:
{
uint8_t v_sync_boxed_1917_; lean_object* v_res_1918_; 
v_sync_boxed_1917_ = lean_unbox(v_sync_1916_);
v_res_1918_ = lean_task_map(v_f_1913_, v_x_1914_, v_prio_1915_, v_sync_boxed_1917_);
return v_res_1918_;
}
}
LEAN_EXPORT lean_object* l_Task_bind___boxed(lean_object* v_00_u03b1_1925_, lean_object* v_00_u03b2_1926_, lean_object* v_x_1927_, lean_object* v_f_1928_, lean_object* v_prio_1929_, lean_object* v_sync_1930_){
_start:
{
uint8_t v_sync_boxed_1931_; lean_object* v_res_1932_; 
v_sync_boxed_1931_ = lean_unbox(v_sync_1930_);
v_res_1932_ = lean_task_bind(v_x_1927_, v_f_1928_, v_prio_1929_, v_sync_boxed_1931_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_strictOr___boxed(lean_object* v_b_u2081_1935_, lean_object* v_b_u2082_1936_){
_start:
{
uint8_t v_b_u2081_boxed_1937_; uint8_t v_b_u2082_boxed_1938_; uint8_t v_res_1939_; lean_object* v_r_1940_; 
v_b_u2081_boxed_1937_ = lean_unbox(v_b_u2081_1935_);
v_b_u2082_boxed_1938_ = lean_unbox(v_b_u2082_1936_);
v_res_1939_ = lean_strict_or(v_b_u2081_boxed_1937_, v_b_u2082_boxed_1938_);
v_r_1940_ = lean_box(v_res_1939_);
return v_r_1940_;
}
}
LEAN_EXPORT lean_object* l_strictAnd___boxed(lean_object* v_b_u2081_1943_, lean_object* v_b_u2082_1944_){
_start:
{
uint8_t v_b_u2081_boxed_1945_; uint8_t v_b_u2082_boxed_1946_; uint8_t v_res_1947_; lean_object* v_r_1948_; 
v_b_u2081_boxed_1945_ = lean_unbox(v_b_u2081_1943_);
v_b_u2082_boxed_1946_ = lean_unbox(v_b_u2082_1944_);
v_res_1947_ = lean_strict_and(v_b_u2081_boxed_1945_, v_b_u2082_boxed_1946_);
v_r_1948_ = lean_box(v_res_1947_);
return v_r_1948_;
}
}
LEAN_EXPORT uint8_t l_bne___redArg(lean_object* v_inst_1949_, lean_object* v_a_1950_, lean_object* v_b_1951_){
_start:
{
lean_object* v___x_1952_; uint8_t v___x_1953_; 
v___x_1952_ = lean_apply_2(v_inst_1949_, v_a_1950_, v_b_1951_);
v___x_1953_ = lean_unbox(v___x_1952_);
if (v___x_1953_ == 0)
{
uint8_t v___x_1954_; 
v___x_1954_ = 1;
return v___x_1954_;
}
else
{
uint8_t v___x_1955_; 
v___x_1955_ = 0;
return v___x_1955_;
}
}
}
LEAN_EXPORT lean_object* l_bne___redArg___boxed(lean_object* v_inst_1956_, lean_object* v_a_1957_, lean_object* v_b_1958_){
_start:
{
uint8_t v_res_1959_; lean_object* v_r_1960_; 
v_res_1959_ = l_bne___redArg(v_inst_1956_, v_a_1957_, v_b_1958_);
v_r_1960_ = lean_box(v_res_1959_);
return v_r_1960_;
}
}
LEAN_EXPORT uint8_t l_bne(lean_object* v_00_u03b1_1961_, lean_object* v_inst_1962_, lean_object* v_a_1963_, lean_object* v_b_1964_){
_start:
{
lean_object* v___x_1965_; uint8_t v___x_1966_; 
v___x_1965_ = lean_apply_2(v_inst_1962_, v_a_1963_, v_b_1964_);
v___x_1966_ = lean_unbox(v___x_1965_);
if (v___x_1966_ == 0)
{
uint8_t v___x_1967_; 
v___x_1967_ = 1;
return v___x_1967_;
}
else
{
uint8_t v___x_1968_; 
v___x_1968_ = 0;
return v___x_1968_;
}
}
}
LEAN_EXPORT lean_object* l_bne___boxed(lean_object* v_00_u03b1_1969_, lean_object* v_inst_1970_, lean_object* v_a_1971_, lean_object* v_b_1972_){
_start:
{
uint8_t v_res_1973_; lean_object* v_r_1974_; 
v_res_1973_ = l_bne(v_00_u03b1_1969_, v_inst_1970_, v_a_1971_, v_b_1972_);
v_r_1974_ = lean_box(v_res_1973_);
return v_r_1974_;
}
}
static lean_object* _init_l_term___x21_x3d___00__closed__0(void){
_start:
{
lean_object* v___x_1975_; 
v___x_1975_ = lean_mk_string_unchecked("term_!=_", 8, 8);
return v___x_1975_;
}
}
static lean_object* _init_l_term___x21_x3d___00__closed__1(void){
_start:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1976_ = lean_obj_once(&l_term___x21_x3d___00__closed__0, &l_term___x21_x3d___00__closed__0_once, _init_l_term___x21_x3d___00__closed__0);
v___x_1977_ = l_Lean_Name_mkStr1(v___x_1976_);
return v___x_1977_;
}
}
static lean_object* _init_l_term___x21_x3d___00__closed__2(void){
_start:
{
lean_object* v___x_1978_; 
v___x_1978_ = lean_mk_string_unchecked(" != ", 4, 4);
return v___x_1978_;
}
}
static lean_object* _init_l_term___x21_x3d___00__closed__3(void){
_start:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1979_ = lean_obj_once(&l_term___x21_x3d___00__closed__2, &l_term___x21_x3d___00__closed__2_once, _init_l_term___x21_x3d___00__closed__2);
v___x_1980_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1979_);
return v___x_1980_;
}
}
static lean_object* _init_l_term___x21_x3d___00__closed__4(void){
_start:
{
lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1981_ = lean_obj_once(&l_term___u2248___00__closed__4, &l_term___u2248___00__closed__4_once, _init_l_term___u2248___00__closed__4);
v___x_1982_ = lean_obj_once(&l_term___x21_x3d___00__closed__3, &l_term___x21_x3d___00__closed__3_once, _init_l_term___x21_x3d___00__closed__3);
v___x_1983_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_1984_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1983_);
lean_ctor_set(v___x_1984_, 1, v___x_1982_);
lean_ctor_set(v___x_1984_, 2, v___x_1981_);
return v___x_1984_;
}
}
static lean_object* _init_l_term___x21_x3d___00__closed__5(void){
_start:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1985_ = lean_obj_once(&l_term___x21_x3d___00__closed__4, &l_term___x21_x3d___00__closed__4_once, _init_l_term___x21_x3d___00__closed__4);
v___x_1986_ = lean_unsigned_to_nat(51u);
v___x_1987_ = lean_unsigned_to_nat(50u);
v___x_1988_ = lean_obj_once(&l_term___x21_x3d___00__closed__1, &l_term___x21_x3d___00__closed__1_once, _init_l_term___x21_x3d___00__closed__1);
v___x_1989_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_1989_, 0, v___x_1988_);
lean_ctor_set(v___x_1989_, 1, v___x_1987_);
lean_ctor_set(v___x_1989_, 2, v___x_1986_);
lean_ctor_set(v___x_1989_, 3, v___x_1985_);
return v___x_1989_;
}
}
static lean_object* _init_l_term___x21_x3d__(void){
_start:
{
lean_object* v___x_1990_; 
v___x_1990_ = lean_obj_once(&l_term___x21_x3d___00__closed__5, &l_term___x21_x3d___00__closed__5_once, _init_l_term___x21_x3d___00__closed__5);
return v___x_1990_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__0(void){
_start:
{
lean_object* v___x_1991_; 
v___x_1991_ = lean_mk_string_unchecked("bne", 3, 3);
return v___x_1991_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__1(void){
_start:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1992_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__0, &l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__0);
v___x_1993_ = l_String_toRawSubstring_x27(v___x_1992_);
return v___x_1993_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__2(void){
_start:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1994_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__0, &l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__0);
v___x_1995_ = l_Lean_Name_mkStr1(v___x_1994_);
return v___x_1995_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__3(void){
_start:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___x_1996_ = lean_box(0);
v___x_1997_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__2, &l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__2);
v___x_1998_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1997_);
lean_ctor_set(v___x_1998_, 1, v___x_1996_);
return v___x_1998_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__4(void){
_start:
{
lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1999_ = lean_box(0);
v___x_2000_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__3, &l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__3);
v___x_2001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2001_, 0, v___x_2000_);
lean_ctor_set(v___x_2001_, 1, v___x_1999_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____1(lean_object* v_x_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_){
_start:
{
lean_object* v___x_2005_; uint8_t v___x_2006_; 
v___x_2005_ = lean_obj_once(&l_term___x21_x3d___00__closed__1, &l_term___x21_x3d___00__closed__1_once, _init_l_term___x21_x3d___00__closed__1);
lean_inc(v_x_2002_);
v___x_2006_ = l_Lean_Syntax_isOfKind(v_x_2002_, v___x_2005_);
if (v___x_2006_ == 0)
{
lean_object* v___x_2007_; lean_object* v___x_2008_; 
lean_dec(v_x_2002_);
v___x_2007_ = lean_box(1);
v___x_2008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2007_);
lean_ctor_set(v___x_2008_, 1, v_a_2004_);
return v___x_2008_;
}
else
{
lean_object* v_quotContext_2009_; lean_object* v_currMacroScope_2010_; lean_object* v_ref_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; uint8_t v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; 
v_quotContext_2009_ = lean_ctor_get(v_a_2003_, 1);
v_currMacroScope_2010_ = lean_ctor_get(v_a_2003_, 2);
v_ref_2011_ = lean_ctor_get(v_a_2003_, 5);
v___x_2012_ = lean_unsigned_to_nat(0u);
v___x_2013_ = l_Lean_Syntax_getArg(v_x_2002_, v___x_2012_);
v___x_2014_ = lean_unsigned_to_nat(2u);
v___x_2015_ = l_Lean_Syntax_getArg(v_x_2002_, v___x_2014_);
lean_dec(v_x_2002_);
v___x_2016_ = 0;
v___x_2017_ = l_Lean_SourceInfo_fromRef(v_ref_2011_, v___x_2016_);
v___x_2018_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_2019_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__1, &l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__1);
v___x_2020_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__2, &l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__2);
lean_inc(v_currMacroScope_2010_);
lean_inc(v_quotContext_2009_);
v___x_2021_ = l_Lean_addMacroScope(v_quotContext_2009_, v___x_2020_, v_currMacroScope_2010_);
v___x_2022_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__4, &l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__4);
lean_inc_n(v___x_2017_, 2);
v___x_2023_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2017_);
lean_ctor_set(v___x_2023_, 1, v___x_2019_);
lean_ctor_set(v___x_2023_, 2, v___x_2021_);
lean_ctor_set(v___x_2023_, 3, v___x_2022_);
v___x_2024_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_2025_ = l_Lean_Syntax_node2(v___x_2017_, v___x_2024_, v___x_2013_, v___x_2015_);
v___x_2026_ = l_Lean_Syntax_node2(v___x_2017_, v___x_2018_, v___x_2023_, v___x_2025_);
v___x_2027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2026_);
lean_ctor_set(v___x_2027_, 1, v_a_2004_);
return v___x_2027_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____1___boxed(lean_object* v_x_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l___aux__Init__Core______macroRules__term___x21_x3d____1(v_x_2028_, v_a_2029_, v_a_2030_);
lean_dec_ref(v_a_2029_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__bne__1(lean_object* v_x_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_){
_start:
{
lean_object* v___x_2035_; uint8_t v___x_2036_; 
v___x_2035_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_2032_);
v___x_2036_ = l_Lean_Syntax_isOfKind(v_x_2032_, v___x_2035_);
if (v___x_2036_ == 0)
{
lean_object* v___x_2037_; lean_object* v___x_2038_; 
lean_dec(v_x_2032_);
v___x_2037_ = lean_box(0);
v___x_2038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2037_);
lean_ctor_set(v___x_2038_, 1, v_a_2034_);
return v___x_2038_;
}
else
{
lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; uint8_t v___x_2042_; 
v___x_2039_ = lean_unsigned_to_nat(0u);
v___x_2040_ = l_Lean_Syntax_getArg(v_x_2032_, v___x_2039_);
v___x_2041_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_2040_);
v___x_2042_ = l_Lean_Syntax_isOfKind(v___x_2040_, v___x_2041_);
if (v___x_2042_ == 0)
{
lean_object* v___x_2043_; lean_object* v___x_2044_; 
lean_dec(v___x_2040_);
lean_dec(v_x_2032_);
v___x_2043_ = lean_box(0);
v___x_2044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2043_);
lean_ctor_set(v___x_2044_, 1, v_a_2034_);
return v___x_2044_;
}
else
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; uint8_t v___x_2048_; 
v___x_2045_ = lean_unsigned_to_nat(1u);
v___x_2046_ = l_Lean_Syntax_getArg(v_x_2032_, v___x_2045_);
lean_dec(v_x_2032_);
v___x_2047_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_2046_);
v___x_2048_ = l_Lean_Syntax_matchesNull(v___x_2046_, v___x_2047_);
if (v___x_2048_ == 0)
{
lean_object* v___x_2049_; lean_object* v___x_2050_; 
lean_dec(v___x_2046_);
lean_dec(v___x_2040_);
v___x_2049_ = lean_box(0);
v___x_2050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2049_);
lean_ctor_set(v___x_2050_, 1, v_a_2034_);
return v___x_2050_;
}
else
{
lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v_ref_2053_; uint8_t v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2051_ = l_Lean_Syntax_getArg(v___x_2046_, v___x_2039_);
v___x_2052_ = l_Lean_Syntax_getArg(v___x_2046_, v___x_2045_);
lean_dec(v___x_2046_);
v_ref_2053_ = l_Lean_replaceRef(v___x_2040_, v_a_2033_);
lean_dec(v___x_2040_);
v___x_2054_ = 0;
v___x_2055_ = l_Lean_SourceInfo_fromRef(v_ref_2053_, v___x_2054_);
lean_dec(v_ref_2053_);
v___x_2056_ = lean_obj_once(&l_term___x21_x3d___00__closed__1, &l_term___x21_x3d___00__closed__1_once, _init_l_term___x21_x3d___00__closed__1);
v___x_2057_ = lean_obj_once(&l_term___x21_x3d___00__closed__2, &l_term___x21_x3d___00__closed__2_once, _init_l_term___x21_x3d___00__closed__2);
lean_inc(v___x_2055_);
v___x_2058_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2055_);
lean_ctor_set(v___x_2058_, 1, v___x_2057_);
v___x_2059_ = l_Lean_Syntax_node3(v___x_2055_, v___x_2056_, v___x_2051_, v___x_2058_, v___x_2052_);
v___x_2060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2059_);
lean_ctor_set(v___x_2060_, 1, v_a_2034_);
return v___x_2060_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__bne__1___boxed(lean_object* v_x_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_){
_start:
{
lean_object* v_res_2064_; 
v_res_2064_ = l___aux__Init__Core______unexpand__bne__1(v_x_2061_, v_a_2062_, v_a_2063_);
lean_dec(v_a_2062_);
return v_res_2064_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__0(void){
_start:
{
lean_object* v___x_2065_; 
v___x_2065_ = lean_mk_string_unchecked("binrel_no_prop", 14, 14);
return v___x_2065_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__1(void){
_start:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2066_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__0, &l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__0_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__0);
v___x_2067_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__2, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__2);
v___x_2068_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1);
v___x_2069_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0);
v___x_2070_ = l_Lean_Name_mkStr4(v___x_2069_, v___x_2068_, v___x_2067_, v___x_2066_);
return v___x_2070_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__2(void){
_start:
{
lean_object* v___x_2071_; 
v___x_2071_ = lean_mk_string_unchecked("binrel_no_prop%", 15, 15);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____2(lean_object* v_x_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_){
_start:
{
lean_object* v___x_2075_; uint8_t v___x_2076_; 
v___x_2075_ = lean_obj_once(&l_term___x21_x3d___00__closed__1, &l_term___x21_x3d___00__closed__1_once, _init_l_term___x21_x3d___00__closed__1);
lean_inc(v_x_2072_);
v___x_2076_ = l_Lean_Syntax_isOfKind(v_x_2072_, v___x_2075_);
if (v___x_2076_ == 0)
{
lean_object* v___x_2077_; lean_object* v___x_2078_; 
lean_dec(v_x_2072_);
v___x_2077_ = lean_box(1);
v___x_2078_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2077_);
lean_ctor_set(v___x_2078_, 1, v_a_2074_);
return v___x_2078_;
}
else
{
lean_object* v_quotContext_2079_; lean_object* v_currMacroScope_2080_; lean_object* v_ref_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; uint8_t v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v_quotContext_2079_ = lean_ctor_get(v_a_2073_, 1);
v_currMacroScope_2080_ = lean_ctor_get(v_a_2073_, 2);
v_ref_2081_ = lean_ctor_get(v_a_2073_, 5);
v___x_2082_ = lean_unsigned_to_nat(0u);
v___x_2083_ = l_Lean_Syntax_getArg(v_x_2072_, v___x_2082_);
v___x_2084_ = lean_unsigned_to_nat(2u);
v___x_2085_ = l_Lean_Syntax_getArg(v_x_2072_, v___x_2084_);
lean_dec(v_x_2072_);
v___x_2086_ = 0;
v___x_2087_ = l_Lean_SourceInfo_fromRef(v_ref_2081_, v___x_2086_);
v___x_2088_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__1, &l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__1_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__1);
v___x_2089_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__2, &l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__2_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____2___closed__2);
lean_inc_n(v___x_2087_, 2);
v___x_2090_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2087_);
lean_ctor_set(v___x_2090_, 1, v___x_2089_);
v___x_2091_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__1, &l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__1);
v___x_2092_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__2, &l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__2);
lean_inc(v_currMacroScope_2080_);
lean_inc(v_quotContext_2079_);
v___x_2093_ = l_Lean_addMacroScope(v_quotContext_2079_, v___x_2092_, v_currMacroScope_2080_);
v___x_2094_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__4, &l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x21_x3d____1___closed__4);
v___x_2095_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2087_);
lean_ctor_set(v___x_2095_, 1, v___x_2091_);
lean_ctor_set(v___x_2095_, 2, v___x_2093_);
lean_ctor_set(v___x_2095_, 3, v___x_2094_);
v___x_2096_ = l_Lean_Syntax_node4(v___x_2087_, v___x_2088_, v___x_2090_, v___x_2095_, v___x_2083_, v___x_2085_);
v___x_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2096_);
lean_ctor_set(v___x_2097_, 1, v_a_2074_);
return v___x_2097_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___x21_x3d____2___boxed(lean_object* v_x_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_){
_start:
{
lean_object* v_res_2101_; 
v_res_2101_ = l___aux__Init__Core______macroRules__term___x21_x3d____2(v_x_2098_, v_a_2099_, v_a_2100_);
lean_dec_ref(v_a_2099_);
return v_res_2101_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqOfLawfulBEq___redArg(lean_object* v_inst_2102_, lean_object* v_x_2103_, lean_object* v_y_2104_){
_start:
{
lean_object* v___x_2105_; uint8_t v___x_2106_; 
v___x_2105_ = lean_apply_2(v_inst_2102_, v_x_2103_, v_y_2104_);
v___x_2106_ = lean_unbox(v___x_2105_);
return v___x_2106_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqOfLawfulBEq___redArg___boxed(lean_object* v_inst_2107_, lean_object* v_x_2108_, lean_object* v_y_2109_){
_start:
{
uint8_t v_res_2110_; lean_object* v_r_2111_; 
v_res_2110_ = l_instDecidableEqOfLawfulBEq___redArg(v_inst_2107_, v_x_2108_, v_y_2109_);
v_r_2111_ = lean_box(v_res_2110_);
return v_r_2111_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqOfLawfulBEq(lean_object* v_00_u03b1_2112_, lean_object* v_inst_2113_, lean_object* v_inst_2114_, lean_object* v_x_2115_, lean_object* v_y_2116_){
_start:
{
lean_object* v___x_2117_; uint8_t v___x_2118_; 
v___x_2117_ = lean_apply_2(v_inst_2113_, v_x_2115_, v_y_2116_);
v___x_2118_ = lean_unbox(v___x_2117_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqOfLawfulBEq___boxed(lean_object* v_00_u03b1_2119_, lean_object* v_inst_2120_, lean_object* v_inst_2121_, lean_object* v_x_2122_, lean_object* v_y_2123_){
_start:
{
uint8_t v_res_2124_; lean_object* v_r_2125_; 
v_res_2124_ = l_instDecidableEqOfLawfulBEq(v_00_u03b1_2119_, v_inst_2120_, v_inst_2121_, v_x_2122_, v_y_2123_);
v_r_2125_ = lean_box(v_res_2124_);
return v_r_2125_;
}
}
static lean_object* _init_l_term___u2260___00__closed__0(void){
_start:
{
lean_object* v___x_2126_; 
v___x_2126_ = lean_mk_string_unchecked("term_≠_", 9, 7);
return v___x_2126_;
}
}
static lean_object* _init_l_term___u2260___00__closed__1(void){
_start:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2127_ = lean_obj_once(&l_term___u2260___00__closed__0, &l_term___u2260___00__closed__0_once, _init_l_term___u2260___00__closed__0);
v___x_2128_ = l_Lean_Name_mkStr1(v___x_2127_);
return v___x_2128_;
}
}
static lean_object* _init_l_term___u2260___00__closed__2(void){
_start:
{
lean_object* v___x_2129_; 
v___x_2129_ = lean_mk_string_unchecked(" ≠ ", 5, 3);
return v___x_2129_;
}
}
static lean_object* _init_l_term___u2260___00__closed__3(void){
_start:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2130_ = lean_obj_once(&l_term___u2260___00__closed__2, &l_term___u2260___00__closed__2_once, _init_l_term___u2260___00__closed__2);
v___x_2131_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2130_);
return v___x_2131_;
}
}
static lean_object* _init_l_term___u2260___00__closed__4(void){
_start:
{
lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2132_ = lean_obj_once(&l_term___u2248___00__closed__4, &l_term___u2248___00__closed__4_once, _init_l_term___u2248___00__closed__4);
v___x_2133_ = lean_obj_once(&l_term___u2260___00__closed__3, &l_term___u2260___00__closed__3_once, _init_l_term___u2260___00__closed__3);
v___x_2134_ = lean_obj_once(&l_term___x3c_x2d_x3e___00__closed__3, &l_term___x3c_x2d_x3e___00__closed__3_once, _init_l_term___x3c_x2d_x3e___00__closed__3);
v___x_2135_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2134_);
lean_ctor_set(v___x_2135_, 1, v___x_2133_);
lean_ctor_set(v___x_2135_, 2, v___x_2132_);
return v___x_2135_;
}
}
static lean_object* _init_l_term___u2260___00__closed__5(void){
_start:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2136_ = lean_obj_once(&l_term___u2260___00__closed__4, &l_term___u2260___00__closed__4_once, _init_l_term___u2260___00__closed__4);
v___x_2137_ = lean_unsigned_to_nat(51u);
v___x_2138_ = lean_unsigned_to_nat(50u);
v___x_2139_ = lean_obj_once(&l_term___u2260___00__closed__1, &l_term___u2260___00__closed__1_once, _init_l_term___u2260___00__closed__1);
v___x_2140_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2139_);
lean_ctor_set(v___x_2140_, 1, v___x_2138_);
lean_ctor_set(v___x_2140_, 2, v___x_2137_);
lean_ctor_set(v___x_2140_, 3, v___x_2136_);
return v___x_2140_;
}
}
static lean_object* _init_l_term___u2260__(void){
_start:
{
lean_object* v___x_2141_; 
v___x_2141_ = lean_obj_once(&l_term___u2260___00__closed__5, &l_term___u2260___00__closed__5_once, _init_l_term___u2260___00__closed__5);
return v___x_2141_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__0(void){
_start:
{
lean_object* v___x_2142_; 
v___x_2142_ = lean_mk_string_unchecked("Ne", 2, 2);
return v___x_2142_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__1(void){
_start:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2143_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____1___closed__0, &l___aux__Init__Core______macroRules__term___u2260____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__0);
v___x_2144_ = l_String_toRawSubstring_x27(v___x_2143_);
return v___x_2144_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__2(void){
_start:
{
lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2145_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____1___closed__0, &l___aux__Init__Core______macroRules__term___u2260____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__0);
v___x_2146_ = l_Lean_Name_mkStr1(v___x_2145_);
return v___x_2146_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__3(void){
_start:
{
lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2147_ = lean_box(0);
v___x_2148_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____1___closed__2, &l___aux__Init__Core______macroRules__term___u2260____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__2);
v___x_2149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2148_);
lean_ctor_set(v___x_2149_, 1, v___x_2147_);
return v___x_2149_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__4(void){
_start:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___x_2150_ = lean_box(0);
v___x_2151_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____1___closed__3, &l___aux__Init__Core______macroRules__term___u2260____1___closed__3_once, _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__3);
v___x_2152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2152_, 0, v___x_2151_);
lean_ctor_set(v___x_2152_, 1, v___x_2150_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2260____1(lean_object* v_x_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_){
_start:
{
lean_object* v___x_2156_; uint8_t v___x_2157_; 
v___x_2156_ = lean_obj_once(&l_term___u2260___00__closed__1, &l_term___u2260___00__closed__1_once, _init_l_term___u2260___00__closed__1);
lean_inc(v_x_2153_);
v___x_2157_ = l_Lean_Syntax_isOfKind(v_x_2153_, v___x_2156_);
if (v___x_2157_ == 0)
{
lean_object* v___x_2158_; lean_object* v___x_2159_; 
lean_dec(v_x_2153_);
v___x_2158_ = lean_box(1);
v___x_2159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2158_);
lean_ctor_set(v___x_2159_, 1, v_a_2155_);
return v___x_2159_;
}
else
{
lean_object* v_quotContext_2160_; lean_object* v_currMacroScope_2161_; lean_object* v_ref_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; uint8_t v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v_quotContext_2160_ = lean_ctor_get(v_a_2154_, 1);
v_currMacroScope_2161_ = lean_ctor_get(v_a_2154_, 2);
v_ref_2162_ = lean_ctor_get(v_a_2154_, 5);
v___x_2163_ = lean_unsigned_to_nat(0u);
v___x_2164_ = l_Lean_Syntax_getArg(v_x_2153_, v___x_2163_);
v___x_2165_ = lean_unsigned_to_nat(2u);
v___x_2166_ = l_Lean_Syntax_getArg(v_x_2153_, v___x_2165_);
lean_dec(v_x_2153_);
v___x_2167_ = 0;
v___x_2168_ = l_Lean_SourceInfo_fromRef(v_ref_2162_, v___x_2167_);
v___x_2169_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
v___x_2170_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____1___closed__1, &l___aux__Init__Core______macroRules__term___u2260____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__1);
v___x_2171_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____1___closed__2, &l___aux__Init__Core______macroRules__term___u2260____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__2);
lean_inc(v_currMacroScope_2161_);
lean_inc(v_quotContext_2160_);
v___x_2172_ = l_Lean_addMacroScope(v_quotContext_2160_, v___x_2171_, v_currMacroScope_2161_);
v___x_2173_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____1___closed__4, &l___aux__Init__Core______macroRules__term___u2260____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__4);
lean_inc_n(v___x_2168_, 2);
v___x_2174_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2168_);
lean_ctor_set(v___x_2174_, 1, v___x_2170_);
lean_ctor_set(v___x_2174_, 2, v___x_2172_);
lean_ctor_set(v___x_2174_, 3, v___x_2173_);
v___x_2175_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__13);
v___x_2176_ = l_Lean_Syntax_node2(v___x_2168_, v___x_2175_, v___x_2164_, v___x_2166_);
v___x_2177_ = l_Lean_Syntax_node2(v___x_2168_, v___x_2169_, v___x_2174_, v___x_2176_);
v___x_2178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2177_);
lean_ctor_set(v___x_2178_, 1, v_a_2155_);
return v___x_2178_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2260____1___boxed(lean_object* v_x_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l___aux__Init__Core______macroRules__term___u2260____1(v_x_2179_, v_a_2180_, v_a_2181_);
lean_dec_ref(v_a_2180_);
return v_res_2182_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Ne__1(lean_object* v_x_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_){
_start:
{
lean_object* v___x_2186_; uint8_t v___x_2187_; 
v___x_2186_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__4);
lean_inc(v_x_2183_);
v___x_2187_ = l_Lean_Syntax_isOfKind(v_x_2183_, v___x_2186_);
if (v___x_2187_ == 0)
{
lean_object* v___x_2188_; lean_object* v___x_2189_; 
lean_dec(v_x_2183_);
v___x_2188_ = lean_box(0);
v___x_2189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2188_);
lean_ctor_set(v___x_2189_, 1, v_a_2185_);
return v___x_2189_;
}
else
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; uint8_t v___x_2193_; 
v___x_2190_ = lean_unsigned_to_nat(0u);
v___x_2191_ = l_Lean_Syntax_getArg(v_x_2183_, v___x_2190_);
v___x_2192_ = lean_obj_once(&l___aux__Init__Core______unexpand__Iff__1___closed__1, &l___aux__Init__Core______unexpand__Iff__1___closed__1_once, _init_l___aux__Init__Core______unexpand__Iff__1___closed__1);
lean_inc(v___x_2191_);
v___x_2193_ = l_Lean_Syntax_isOfKind(v___x_2191_, v___x_2192_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; lean_object* v___x_2195_; 
lean_dec(v___x_2191_);
lean_dec(v_x_2183_);
v___x_2194_ = lean_box(0);
v___x_2195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2195_, 0, v___x_2194_);
lean_ctor_set(v___x_2195_, 1, v_a_2185_);
return v___x_2195_;
}
else
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; uint8_t v___x_2199_; 
v___x_2196_ = lean_unsigned_to_nat(1u);
v___x_2197_ = l_Lean_Syntax_getArg(v_x_2183_, v___x_2196_);
lean_dec(v_x_2183_);
v___x_2198_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_2197_);
v___x_2199_ = l_Lean_Syntax_matchesNull(v___x_2197_, v___x_2198_);
if (v___x_2199_ == 0)
{
lean_object* v___x_2200_; lean_object* v___x_2201_; 
lean_dec(v___x_2197_);
lean_dec(v___x_2191_);
v___x_2200_ = lean_box(0);
v___x_2201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2200_);
lean_ctor_set(v___x_2201_, 1, v_a_2185_);
return v___x_2201_;
}
else
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v_ref_2204_; uint8_t v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2202_ = l_Lean_Syntax_getArg(v___x_2197_, v___x_2190_);
v___x_2203_ = l_Lean_Syntax_getArg(v___x_2197_, v___x_2196_);
lean_dec(v___x_2197_);
v_ref_2204_ = l_Lean_replaceRef(v___x_2191_, v_a_2184_);
lean_dec(v___x_2191_);
v___x_2205_ = 0;
v___x_2206_ = l_Lean_SourceInfo_fromRef(v_ref_2204_, v___x_2205_);
lean_dec(v_ref_2204_);
v___x_2207_ = lean_obj_once(&l_term___u2260___00__closed__1, &l_term___u2260___00__closed__1_once, _init_l_term___u2260___00__closed__1);
v___x_2208_ = lean_obj_once(&l_term___u2260___00__closed__2, &l_term___u2260___00__closed__2_once, _init_l_term___u2260___00__closed__2);
lean_inc(v___x_2206_);
v___x_2209_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2206_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2210_ = l_Lean_Syntax_node3(v___x_2206_, v___x_2207_, v___x_2202_, v___x_2209_, v___x_2203_);
v___x_2211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2210_);
lean_ctor_set(v___x_2211_, 1, v_a_2185_);
return v___x_2211_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______unexpand__Ne__1___boxed(lean_object* v_x_2212_, lean_object* v_a_2213_, lean_object* v_a_2214_){
_start:
{
lean_object* v_res_2215_; 
v_res_2215_ = l___aux__Init__Core______unexpand__Ne__1(v_x_2212_, v_a_2213_, v_a_2214_);
lean_dec(v_a_2213_);
return v_res_2215_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2260____2___closed__0(void){
_start:
{
lean_object* v___x_2216_; 
v___x_2216_ = lean_mk_string_unchecked("binrel", 6, 6);
return v___x_2216_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2260____2___closed__1(void){
_start:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2217_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____2___closed__0, &l___aux__Init__Core______macroRules__term___u2260____2___closed__0_once, _init_l___aux__Init__Core______macroRules__term___u2260____2___closed__0);
v___x_2218_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__2, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__2);
v___x_2219_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1);
v___x_2220_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0);
v___x_2221_ = l_Lean_Name_mkStr4(v___x_2220_, v___x_2219_, v___x_2218_, v___x_2217_);
return v___x_2221_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__term___u2260____2___closed__2(void){
_start:
{
lean_object* v___x_2222_; 
v___x_2222_ = lean_mk_string_unchecked("binrel%", 7, 7);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2260____2(lean_object* v_x_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_){
_start:
{
lean_object* v___x_2226_; uint8_t v___x_2227_; 
v___x_2226_ = lean_obj_once(&l_term___u2260___00__closed__1, &l_term___u2260___00__closed__1_once, _init_l_term___u2260___00__closed__1);
lean_inc(v_x_2223_);
v___x_2227_ = l_Lean_Syntax_isOfKind(v_x_2223_, v___x_2226_);
if (v___x_2227_ == 0)
{
lean_object* v___x_2228_; lean_object* v___x_2229_; 
lean_dec(v_x_2223_);
v___x_2228_ = lean_box(1);
v___x_2229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2228_);
lean_ctor_set(v___x_2229_, 1, v_a_2225_);
return v___x_2229_;
}
else
{
lean_object* v_quotContext_2230_; lean_object* v_currMacroScope_2231_; lean_object* v_ref_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; uint8_t v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v_quotContext_2230_ = lean_ctor_get(v_a_2224_, 1);
v_currMacroScope_2231_ = lean_ctor_get(v_a_2224_, 2);
v_ref_2232_ = lean_ctor_get(v_a_2224_, 5);
v___x_2233_ = lean_unsigned_to_nat(0u);
v___x_2234_ = l_Lean_Syntax_getArg(v_x_2223_, v___x_2233_);
v___x_2235_ = lean_unsigned_to_nat(2u);
v___x_2236_ = l_Lean_Syntax_getArg(v_x_2223_, v___x_2235_);
lean_dec(v_x_2223_);
v___x_2237_ = 0;
v___x_2238_ = l_Lean_SourceInfo_fromRef(v_ref_2232_, v___x_2237_);
v___x_2239_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____2___closed__1, &l___aux__Init__Core______macroRules__term___u2260____2___closed__1_once, _init_l___aux__Init__Core______macroRules__term___u2260____2___closed__1);
v___x_2240_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____2___closed__2, &l___aux__Init__Core______macroRules__term___u2260____2___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2260____2___closed__2);
lean_inc_n(v___x_2238_, 2);
v___x_2241_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2238_);
lean_ctor_set(v___x_2241_, 1, v___x_2240_);
v___x_2242_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____1___closed__1, &l___aux__Init__Core______macroRules__term___u2260____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__1);
v___x_2243_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____1___closed__2, &l___aux__Init__Core______macroRules__term___u2260____1___closed__2_once, _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__2);
lean_inc(v_currMacroScope_2231_);
lean_inc(v_quotContext_2230_);
v___x_2244_ = l_Lean_addMacroScope(v_quotContext_2230_, v___x_2243_, v_currMacroScope_2231_);
v___x_2245_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___u2260____1___closed__4, &l___aux__Init__Core______macroRules__term___u2260____1___closed__4_once, _init_l___aux__Init__Core______macroRules__term___u2260____1___closed__4);
v___x_2246_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2246_, 0, v___x_2238_);
lean_ctor_set(v___x_2246_, 1, v___x_2242_);
lean_ctor_set(v___x_2246_, 2, v___x_2244_);
lean_ctor_set(v___x_2246_, 3, v___x_2245_);
v___x_2247_ = l_Lean_Syntax_node4(v___x_2238_, v___x_2239_, v___x_2241_, v___x_2246_, v___x_2234_, v___x_2236_);
v___x_2248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2247_);
lean_ctor_set(v___x_2248_, 1, v_a_2225_);
return v___x_2248_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__term___u2260____2___boxed(lean_object* v_x_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_){
_start:
{
lean_object* v_res_2252_; 
v_res_2252_ = l___aux__Init__Core______macroRules__term___u2260____2(v_x_2249_, v_a_2250_, v_a_2251_);
lean_dec_ref(v_a_2250_);
return v_res_2252_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__0(void){
_start:
{
lean_object* v___x_2253_; 
v___x_2253_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_2253_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__1(void){
_start:
{
lean_object* v___x_2254_; 
v___x_2254_ = lean_mk_string_unchecked("tacticRfl", 9, 9);
return v___x_2254_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__2(void){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2255_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__1, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__1_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__1);
v___x_2256_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__0, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__0_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__0);
v___x_2257_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1);
v___x_2258_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0);
v___x_2259_ = l_Lean_Name_mkStr4(v___x_2258_, v___x_2257_, v___x_2256_, v___x_2255_);
return v___x_2259_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__3(void){
_start:
{
lean_object* v___x_2260_; 
v___x_2260_ = lean_mk_string_unchecked("exact", 5, 5);
return v___x_2260_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__4(void){
_start:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2261_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__3, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__3_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__3);
v___x_2262_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__0, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__0_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__0);
v___x_2263_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__1);
v___x_2264_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__0);
v___x_2265_ = l_Lean_Name_mkStr4(v___x_2264_, v___x_2263_, v___x_2262_, v___x_2261_);
return v___x_2265_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__5(void){
_start:
{
lean_object* v___x_2266_; 
v___x_2266_ = lean_mk_string_unchecked("Iff.rfl", 7, 7);
return v___x_2266_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__6(void){
_start:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__5, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__5_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__5);
v___x_2268_ = l_String_toRawSubstring_x27(v___x_2267_);
return v___x_2268_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__7(void){
_start:
{
lean_object* v___x_2269_; 
v___x_2269_ = lean_mk_string_unchecked("rfl", 3, 3);
return v___x_2269_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__8(void){
_start:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2270_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__7, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__7_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__7);
v___x_2271_ = lean_obj_once(&l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__5, &l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__5_once, _init_l___aux__Init__Core______macroRules__term___x3c_x2d_x3e____1___closed__5);
v___x_2272_ = l_Lean_Name_mkStr2(v___x_2271_, v___x_2270_);
return v___x_2272_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__9(void){
_start:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2273_ = lean_box(0);
v___x_2274_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__8, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__8_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__8);
v___x_2275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2274_);
lean_ctor_set(v___x_2275_, 1, v___x_2273_);
return v___x_2275_;
}
}
static lean_object* _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__10(void){
_start:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2276_ = lean_box(0);
v___x_2277_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__9, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__9_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__9);
v___x_2278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
lean_ctor_set(v___x_2278_, 1, v___x_2276_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1(lean_object* v_x_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_){
_start:
{
lean_object* v___x_2282_; uint8_t v___x_2283_; 
v___x_2282_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__2, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__2_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__2);
v___x_2283_ = l_Lean_Syntax_isOfKind(v_x_2279_, v___x_2282_);
if (v___x_2283_ == 0)
{
lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2284_ = lean_box(1);
v___x_2285_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
lean_ctor_set(v___x_2285_, 1, v_a_2281_);
return v___x_2285_;
}
else
{
lean_object* v_quotContext_2286_; lean_object* v_currMacroScope_2287_; lean_object* v_ref_2288_; uint8_t v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v_quotContext_2286_ = lean_ctor_get(v_a_2280_, 1);
v_currMacroScope_2287_ = lean_ctor_get(v_a_2280_, 2);
v_ref_2288_ = lean_ctor_get(v_a_2280_, 5);
v___x_2289_ = 0;
v___x_2290_ = l_Lean_SourceInfo_fromRef(v_ref_2288_, v___x_2289_);
v___x_2291_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__3, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__3_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__3);
v___x_2292_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__4, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__4_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__4);
lean_inc_n(v___x_2290_, 2);
v___x_2293_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2290_);
lean_ctor_set(v___x_2293_, 1, v___x_2291_);
v___x_2294_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__6, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__6_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__6);
v___x_2295_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__8, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__8_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__8);
lean_inc(v_currMacroScope_2287_);
lean_inc(v_quotContext_2286_);
v___x_2296_ = l_Lean_addMacroScope(v_quotContext_2286_, v___x_2295_, v_currMacroScope_2287_);
v___x_2297_ = lean_obj_once(&l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__10, &l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__10_once, _init_l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___closed__10);
v___x_2298_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2290_);
lean_ctor_set(v___x_2298_, 1, v___x_2294_);
lean_ctor_set(v___x_2298_, 2, v___x_2296_);
lean_ctor_set(v___x_2298_, 3, v___x_2297_);
v___x_2299_ = l_Lean_Syntax_node2(v___x_2290_, v___x_2292_, v___x_2293_, v___x_2298_);
v___x_2300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2299_);
lean_ctor_set(v___x_2300_, 1, v_a_2281_);
return v___x_2300_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1___boxed(lean_object* v_x_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_){
_start:
{
lean_object* v_res_2304_; 
v_res_2304_ = l___aux__Init__Core______macroRules__Lean__Parser__Tactic__tacticRfl__1(v_x_2301_, v_a_2302_, v_a_2303_);
lean_dec_ref(v_a_2302_);
return v_res_2304_;
}
}
static lean_object* _init_l_instTransIff(void){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = lean_box(0);
return v___x_2305_;
}
}
LEAN_EXPORT uint8_t l_toBoolUsing___redArg(uint8_t v_d_2306_){
_start:
{
return v_d_2306_;
}
}
LEAN_EXPORT lean_object* l_toBoolUsing___redArg___boxed(lean_object* v_d_2307_){
_start:
{
uint8_t v_d_boxed_2308_; uint8_t v_res_2309_; lean_object* v_r_2310_; 
v_d_boxed_2308_ = lean_unbox(v_d_2307_);
v_res_2309_ = l_toBoolUsing___redArg(v_d_boxed_2308_);
v_r_2310_ = lean_box(v_res_2309_);
return v_r_2310_;
}
}
LEAN_EXPORT uint8_t l_toBoolUsing(lean_object* v_p_2311_, uint8_t v_d_2312_){
_start:
{
return v_d_2312_;
}
}
LEAN_EXPORT lean_object* l_toBoolUsing___boxed(lean_object* v_p_2313_, lean_object* v_d_2314_){
_start:
{
uint8_t v_d_boxed_2315_; uint8_t v_res_2316_; lean_object* v_r_2317_; 
v_d_boxed_2315_ = lean_unbox(v_d_2314_);
v_res_2316_ = l_toBoolUsing(v_p_2313_, v_d_boxed_2315_);
v_r_2317_ = lean_box(v_res_2316_);
return v_r_2317_;
}
}
static uint8_t _init_l_instDecidableTrue(void){
_start:
{
uint8_t v___x_2318_; 
v___x_2318_ = 1;
return v___x_2318_;
}
}
static uint8_t _init_l_instDecidableFalse(void){
_start:
{
uint8_t v___x_2319_; 
v___x_2319_ = 0;
return v___x_2319_;
}
}
LEAN_EXPORT uint8_t l_decidable__of__decidable__of__iff___redArg(uint8_t v_inst_2320_){
_start:
{
return v_inst_2320_;
}
}
LEAN_EXPORT lean_object* l_decidable__of__decidable__of__iff___redArg___boxed(lean_object* v_inst_2321_){
_start:
{
uint8_t v_inst_8__boxed_2322_; uint8_t v_res_2323_; lean_object* v_r_2324_; 
v_inst_8__boxed_2322_ = lean_unbox(v_inst_2321_);
v_res_2323_ = l_decidable__of__decidable__of__iff___redArg(v_inst_8__boxed_2322_);
v_r_2324_ = lean_box(v_res_2323_);
return v_r_2324_;
}
}
LEAN_EXPORT uint8_t l_decidable__of__decidable__of__iff(lean_object* v_p_2325_, lean_object* v_q_2326_, uint8_t v_inst_2327_, lean_object* v_h_2328_){
_start:
{
return v_inst_2327_;
}
}
LEAN_EXPORT lean_object* l_decidable__of__decidable__of__iff___boxed(lean_object* v_p_2329_, lean_object* v_q_2330_, lean_object* v_inst_2331_, lean_object* v_h_2332_){
_start:
{
uint8_t v_inst_11__boxed_2333_; uint8_t v_res_2334_; lean_object* v_r_2335_; 
v_inst_11__boxed_2333_ = lean_unbox(v_inst_2331_);
v_res_2334_ = l_decidable__of__decidable__of__iff(v_p_2329_, v_q_2330_, v_inst_11__boxed_2333_, v_h_2332_);
v_r_2335_ = lean_box(v_res_2334_);
return v_r_2335_;
}
}
LEAN_EXPORT uint8_t l_decidable__of__decidable__of__eq___redArg(uint8_t v_inst_2336_){
_start:
{
return v_inst_2336_;
}
}
LEAN_EXPORT lean_object* l_decidable__of__decidable__of__eq___redArg___boxed(lean_object* v_inst_2337_){
_start:
{
uint8_t v_inst_8__boxed_2338_; uint8_t v_res_2339_; lean_object* v_r_2340_; 
v_inst_8__boxed_2338_ = lean_unbox(v_inst_2337_);
v_res_2339_ = l_decidable__of__decidable__of__eq___redArg(v_inst_8__boxed_2338_);
v_r_2340_ = lean_box(v_res_2339_);
return v_r_2340_;
}
}
LEAN_EXPORT uint8_t l_decidable__of__decidable__of__eq(lean_object* v_p_2341_, lean_object* v_q_2342_, uint8_t v_inst_2343_, lean_object* v_h_2344_){
_start:
{
return v_inst_2343_;
}
}
LEAN_EXPORT lean_object* l_decidable__of__decidable__of__eq___boxed(lean_object* v_p_2345_, lean_object* v_q_2346_, lean_object* v_inst_2347_, lean_object* v_h_2348_){
_start:
{
uint8_t v_inst_11__boxed_2349_; uint8_t v_res_2350_; lean_object* v_r_2351_; 
v_inst_11__boxed_2349_ = lean_unbox(v_inst_2347_);
v_res_2350_ = l_decidable__of__decidable__of__eq(v_p_2345_, v_q_2346_, v_inst_11__boxed_2349_, v_h_2348_);
v_r_2351_ = lean_box(v_res_2350_);
return v_r_2351_;
}
}
LEAN_EXPORT uint8_t l_instDecidableIff___redArg(uint8_t v_inst_2352_, uint8_t v_inst_2353_){
_start:
{
if (v_inst_2352_ == 0)
{
if (v_inst_2353_ == 0)
{
uint8_t v___x_2354_; 
v___x_2354_ = 1;
return v___x_2354_;
}
else
{
return v_inst_2352_;
}
}
else
{
return v_inst_2353_;
}
}
}
LEAN_EXPORT lean_object* l_instDecidableIff___redArg___boxed(lean_object* v_inst_2355_, lean_object* v_inst_2356_){
_start:
{
uint8_t v_inst_15__boxed_2357_; uint8_t v_inst_16__boxed_2358_; uint8_t v_res_2359_; lean_object* v_r_2360_; 
v_inst_15__boxed_2357_ = lean_unbox(v_inst_2355_);
v_inst_16__boxed_2358_ = lean_unbox(v_inst_2356_);
v_res_2359_ = l_instDecidableIff___redArg(v_inst_15__boxed_2357_, v_inst_16__boxed_2358_);
v_r_2360_ = lean_box(v_res_2359_);
return v_r_2360_;
}
}
LEAN_EXPORT uint8_t l_instDecidableIff(lean_object* v_p_2361_, lean_object* v_q_2362_, uint8_t v_inst_2363_, uint8_t v_inst_2364_){
_start:
{
if (v_inst_2363_ == 0)
{
if (v_inst_2364_ == 0)
{
uint8_t v___x_2365_; 
v___x_2365_ = 1;
return v___x_2365_;
}
else
{
return v_inst_2363_;
}
}
else
{
return v_inst_2364_;
}
}
}
LEAN_EXPORT lean_object* l_instDecidableIff___boxed(lean_object* v_p_2366_, lean_object* v_q_2367_, lean_object* v_inst_2368_, lean_object* v_inst_2369_){
_start:
{
uint8_t v_inst_23__boxed_2370_; uint8_t v_inst_24__boxed_2371_; uint8_t v_res_2372_; lean_object* v_r_2373_; 
v_inst_23__boxed_2370_ = lean_unbox(v_inst_2368_);
v_inst_24__boxed_2371_ = lean_unbox(v_inst_2369_);
v_res_2372_ = l_instDecidableIff(v_p_2366_, v_q_2367_, v_inst_23__boxed_2370_, v_inst_24__boxed_2371_);
v_r_2373_ = lean_box(v_res_2372_);
return v_r_2373_;
}
}
LEAN_EXPORT lean_object* l_iteInduction___redArg(uint8_t v_inst_2374_, lean_object* v_hpos_2375_, lean_object* v_hneg_2376_){
_start:
{
if (v_inst_2374_ == 0)
{
lean_object* v___x_2377_; 
lean_dec(v_hpos_2375_);
v___x_2377_ = lean_apply_1(v_hneg_2376_, lean_box(0));
return v___x_2377_;
}
else
{
lean_object* v___x_2378_; 
lean_dec(v_hneg_2376_);
v___x_2378_ = lean_apply_1(v_hpos_2375_, lean_box(0));
return v___x_2378_;
}
}
}
LEAN_EXPORT lean_object* l_iteInduction___redArg___boxed(lean_object* v_inst_2379_, lean_object* v_hpos_2380_, lean_object* v_hneg_2381_){
_start:
{
uint8_t v_inst_boxed_2382_; lean_object* v_res_2383_; 
v_inst_boxed_2382_ = lean_unbox(v_inst_2379_);
v_res_2383_ = l_iteInduction___redArg(v_inst_boxed_2382_, v_hpos_2380_, v_hneg_2381_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_iteInduction(lean_object* v_00_u03b1_2384_, lean_object* v_c_2385_, uint8_t v_inst_2386_, lean_object* v_motive_2387_, lean_object* v_t_2388_, lean_object* v_e_2389_, lean_object* v_hpos_2390_, lean_object* v_hneg_2391_){
_start:
{
lean_object* v___x_2392_; 
v___x_2392_ = l_iteInduction___redArg(v_inst_2386_, v_hpos_2390_, v_hneg_2391_);
return v___x_2392_;
}
}
LEAN_EXPORT lean_object* l_iteInduction___boxed(lean_object* v_00_u03b1_2393_, lean_object* v_c_2394_, lean_object* v_inst_2395_, lean_object* v_motive_2396_, lean_object* v_t_2397_, lean_object* v_e_2398_, lean_object* v_hpos_2399_, lean_object* v_hneg_2400_){
_start:
{
uint8_t v_inst_boxed_2401_; lean_object* v_res_2402_; 
v_inst_boxed_2401_ = lean_unbox(v_inst_2395_);
v_res_2402_ = l_iteInduction(v_00_u03b1_2393_, v_c_2394_, v_inst_boxed_2401_, v_motive_2396_, v_t_2397_, v_e_2398_, v_hpos_2399_, v_hneg_2400_);
lean_dec(v_e_2398_);
lean_dec(v_t_2397_);
return v_res_2402_;
}
}
LEAN_EXPORT uint8_t l_instDecidableDite___redArg(uint8_t v_dC_2403_, lean_object* v_dT_2404_, lean_object* v_dE_2405_){
_start:
{
if (v_dC_2403_ == 0)
{
lean_object* v___x_2406_; uint8_t v___x_2407_; 
lean_dec_ref(v_dT_2404_);
v___x_2406_ = lean_apply_1(v_dE_2405_, lean_box(0));
v___x_2407_ = lean_unbox(v___x_2406_);
return v___x_2407_;
}
else
{
lean_object* v___x_2408_; uint8_t v___x_2409_; 
lean_dec_ref(v_dE_2405_);
v___x_2408_ = lean_apply_1(v_dT_2404_, lean_box(0));
v___x_2409_ = lean_unbox(v___x_2408_);
return v___x_2409_;
}
}
}
LEAN_EXPORT lean_object* l_instDecidableDite___redArg___boxed(lean_object* v_dC_2410_, lean_object* v_dT_2411_, lean_object* v_dE_2412_){
_start:
{
uint8_t v_dC_boxed_2413_; uint8_t v_res_2414_; lean_object* v_r_2415_; 
v_dC_boxed_2413_ = lean_unbox(v_dC_2410_);
v_res_2414_ = l_instDecidableDite___redArg(v_dC_boxed_2413_, v_dT_2411_, v_dE_2412_);
v_r_2415_ = lean_box(v_res_2414_);
return v_r_2415_;
}
}
LEAN_EXPORT uint8_t l_instDecidableDite(lean_object* v_c_2416_, lean_object* v_t_2417_, lean_object* v_e_2418_, uint8_t v_dC_2419_, lean_object* v_dT_2420_, lean_object* v_dE_2421_){
_start:
{
if (v_dC_2419_ == 0)
{
lean_object* v___x_2422_; uint8_t v___x_2423_; 
lean_dec_ref(v_dT_2420_);
v___x_2422_ = lean_apply_1(v_dE_2421_, lean_box(0));
v___x_2423_ = lean_unbox(v___x_2422_);
return v___x_2423_;
}
else
{
lean_object* v___x_2424_; uint8_t v___x_2425_; 
lean_dec_ref(v_dE_2421_);
v___x_2424_ = lean_apply_1(v_dT_2420_, lean_box(0));
v___x_2425_ = lean_unbox(v___x_2424_);
return v___x_2425_;
}
}
}
LEAN_EXPORT lean_object* l_instDecidableDite___boxed(lean_object* v_c_2426_, lean_object* v_t_2427_, lean_object* v_e_2428_, lean_object* v_dC_2429_, lean_object* v_dT_2430_, lean_object* v_dE_2431_){
_start:
{
uint8_t v_dC_boxed_2432_; uint8_t v_res_2433_; lean_object* v_r_2434_; 
v_dC_boxed_2432_ = lean_unbox(v_dC_2429_);
v_res_2433_ = l_instDecidableDite(v_c_2426_, v_t_2427_, v_e_2428_, v_dC_boxed_2432_, v_dT_2430_, v_dE_2431_);
v_r_2434_ = lean_box(v_res_2433_);
return v_r_2434_;
}
}
LEAN_EXPORT lean_object* l_noConfusionEnum___redArg___lam__0(lean_object* v_x_2435_){
_start:
{
lean_inc(v_x_2435_);
return v_x_2435_;
}
}
LEAN_EXPORT lean_object* l_noConfusionEnum___redArg___lam__0___boxed(lean_object* v_x_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_noConfusionEnum___redArg___lam__0(v_x_2436_);
lean_dec(v_x_2436_);
return v_res_2437_;
}
}
static lean_object* _init_l_noConfusionEnum___redArg___closed__0(void){
_start:
{
lean_object* v___f_2438_; 
v___f_2438_ = lean_alloc_closure((void*)(l_noConfusionEnum___redArg___lam__0___boxed), 1, 0);
return v___f_2438_;
}
}
LEAN_EXPORT lean_object* l_noConfusionEnum___redArg(lean_object* v_inst_2439_, lean_object* v_f_2440_, lean_object* v_x_2441_, lean_object* v_y_2442_){
_start:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___f_2446_; 
lean_inc(v_f_2440_);
v___x_2443_ = lean_apply_1(v_f_2440_, v_x_2441_);
v___x_2444_ = lean_apply_1(v_f_2440_, v_y_2442_);
v___x_2445_ = lean_apply_2(v_inst_2439_, v___x_2443_, v___x_2444_);
v___f_2446_ = lean_obj_once(&l_noConfusionEnum___redArg___closed__0, &l_noConfusionEnum___redArg___closed__0_once, _init_l_noConfusionEnum___redArg___closed__0);
return v___f_2446_;
}
}
LEAN_EXPORT lean_object* l_noConfusionEnum(lean_object* v_00_u03b1_2447_, lean_object* v_00_u03b2_2448_, lean_object* v_inst_2449_, lean_object* v_f_2450_, lean_object* v_P_2451_, lean_object* v_x_2452_, lean_object* v_y_2453_, lean_object* v_h_2454_){
_start:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___f_2458_; 
lean_inc(v_f_2450_);
v___x_2455_ = lean_apply_1(v_f_2450_, v_x_2452_);
v___x_2456_ = lean_apply_1(v_f_2450_, v_y_2453_);
v___x_2457_ = lean_apply_2(v_inst_2449_, v___x_2455_, v___x_2456_);
v___f_2458_ = lean_obj_once(&l_noConfusionEnum___redArg___closed__0, &l_noConfusionEnum___redArg___closed__0_once, _init_l_noConfusionEnum___redArg___closed__0);
return v___f_2458_;
}
}
static lean_object* _init_l_instInhabitedProp(void){
_start:
{
lean_object* v___x_2459_; 
v___x_2459_ = lean_box(0);
return v___x_2459_;
}
}
static lean_object* _init_l_instInhabitedNonScalar_default(void){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = lean_unsigned_to_nat(0u);
return v___x_2460_;
}
}
static lean_object* _init_l_instInhabitedNonScalar(void){
_start:
{
lean_object* v___x_2461_; 
v___x_2461_ = lean_unsigned_to_nat(0u);
return v___x_2461_;
}
}
static lean_object* _init_l_instInhabitedPNonScalar_default(void){
_start:
{
lean_object* v___x_2462_; 
v___x_2462_ = lean_unsigned_to_nat(0u);
return v___x_2462_;
}
}
static lean_object* _init_l_instInhabitedPNonScalar(void){
_start:
{
lean_object* v___x_2463_; 
v___x_2463_ = lean_unsigned_to_nat(0u);
return v___x_2463_;
}
}
static lean_object* _init_l_instInhabitedTrue(void){
_start:
{
lean_object* v___x_2464_; 
v___x_2464_ = lean_box(0);
return v___x_2464_;
}
}
LEAN_EXPORT uint8_t l_Subtype_instBEq___redArg___lam__0(lean_object* v_inst_2465_, lean_object* v_x_2466_, lean_object* v_y_2467_){
_start:
{
lean_object* v___x_2468_; uint8_t v___x_2469_; 
v___x_2468_ = lean_apply_2(v_inst_2465_, v_x_2466_, v_y_2467_);
v___x_2469_ = lean_unbox(v___x_2468_);
return v___x_2469_;
}
}
LEAN_EXPORT lean_object* l_Subtype_instBEq___redArg___lam__0___boxed(lean_object* v_inst_2470_, lean_object* v_x_2471_, lean_object* v_y_2472_){
_start:
{
uint8_t v_res_2473_; lean_object* v_r_2474_; 
v_res_2473_ = l_Subtype_instBEq___redArg___lam__0(v_inst_2470_, v_x_2471_, v_y_2472_);
v_r_2474_ = lean_box(v_res_2473_);
return v_r_2474_;
}
}
LEAN_EXPORT lean_object* l_Subtype_instBEq___redArg(lean_object* v_inst_2475_){
_start:
{
lean_object* v___f_2476_; 
v___f_2476_ = lean_alloc_closure((void*)(l_Subtype_instBEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2476_, 0, v_inst_2475_);
return v___f_2476_;
}
}
LEAN_EXPORT lean_object* l_Subtype_instBEq(lean_object* v_00_u03b1_2477_, lean_object* v_p_2478_, lean_object* v_inst_2479_){
_start:
{
lean_object* v___f_2480_; 
v___f_2480_ = lean_alloc_closure((void*)(l_Subtype_instBEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2480_, 0, v_inst_2479_);
return v___f_2480_;
}
}
LEAN_EXPORT uint8_t l_Subtype_instDecidableEq___redArg(lean_object* v_inst_2481_, lean_object* v_x_2482_, lean_object* v_x_2483_){
_start:
{
lean_object* v___x_2484_; uint8_t v___x_2485_; 
v___x_2484_ = lean_apply_2(v_inst_2481_, v_x_2482_, v_x_2483_);
v___x_2485_ = lean_unbox(v___x_2484_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l_Subtype_instDecidableEq___redArg___boxed(lean_object* v_inst_2486_, lean_object* v_x_2487_, lean_object* v_x_2488_){
_start:
{
uint8_t v_res_2489_; lean_object* v_r_2490_; 
v_res_2489_ = l_Subtype_instDecidableEq___redArg(v_inst_2486_, v_x_2487_, v_x_2488_);
v_r_2490_ = lean_box(v_res_2489_);
return v_r_2490_;
}
}
LEAN_EXPORT uint8_t l_Subtype_instDecidableEq(lean_object* v_00_u03b1_2491_, lean_object* v_p_2492_, lean_object* v_inst_2493_, lean_object* v_x_2494_, lean_object* v_x_2495_){
_start:
{
lean_object* v___x_2496_; uint8_t v___x_2497_; 
v___x_2496_ = lean_apply_2(v_inst_2493_, v_x_2494_, v_x_2495_);
v___x_2497_ = lean_unbox(v___x_2496_);
return v___x_2497_;
}
}
LEAN_EXPORT lean_object* l_Subtype_instDecidableEq___boxed(lean_object* v_00_u03b1_2498_, lean_object* v_p_2499_, lean_object* v_inst_2500_, lean_object* v_x_2501_, lean_object* v_x_2502_){
_start:
{
uint8_t v_res_2503_; lean_object* v_r_2504_; 
v_res_2503_ = l_Subtype_instDecidableEq(v_00_u03b1_2498_, v_p_2499_, v_inst_2500_, v_x_2501_, v_x_2502_);
v_r_2504_ = lean_box(v_res_2503_);
return v_r_2504_;
}
}
LEAN_EXPORT lean_object* l_Sum_inhabitedLeft___redArg(lean_object* v_inst_2505_){
_start:
{
lean_object* v___x_2506_; 
v___x_2506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2506_, 0, v_inst_2505_);
return v___x_2506_;
}
}
LEAN_EXPORT lean_object* l_Sum_inhabitedLeft(lean_object* v_00_u03b1_2507_, lean_object* v_00_u03b2_2508_, lean_object* v_inst_2509_){
_start:
{
lean_object* v___x_2510_; 
v___x_2510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2510_, 0, v_inst_2509_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l_Sum_inhabitedRight___redArg(lean_object* v_inst_2511_){
_start:
{
lean_object* v___x_2512_; 
v___x_2512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2512_, 0, v_inst_2511_);
return v___x_2512_;
}
}
LEAN_EXPORT lean_object* l_Sum_inhabitedRight(lean_object* v_00_u03b1_2513_, lean_object* v_00_u03b2_2514_, lean_object* v_inst_2515_){
_start:
{
lean_object* v___x_2516_; 
v___x_2516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2516_, 0, v_inst_2515_);
return v___x_2516_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqSum_decEq___redArg(lean_object* v_inst_2517_, lean_object* v_inst_2518_, lean_object* v_x_2519_, lean_object* v_x_2520_){
_start:
{
if (lean_obj_tag(v_x_2519_) == 0)
{
lean_dec_ref(v_inst_2518_);
if (lean_obj_tag(v_x_2520_) == 0)
{
lean_object* v_val_2521_; lean_object* v_val_2522_; lean_object* v___x_2523_; uint8_t v___x_2524_; 
v_val_2521_ = lean_ctor_get(v_x_2519_, 0);
lean_inc(v_val_2521_);
lean_dec_ref(v_x_2519_);
v_val_2522_ = lean_ctor_get(v_x_2520_, 0);
lean_inc(v_val_2522_);
lean_dec_ref(v_x_2520_);
v___x_2523_ = lean_apply_2(v_inst_2517_, v_val_2521_, v_val_2522_);
v___x_2524_ = lean_unbox(v___x_2523_);
return v___x_2524_;
}
else
{
uint8_t v___x_2525_; 
lean_dec_ref(v_x_2520_);
lean_dec_ref(v_x_2519_);
lean_dec_ref(v_inst_2517_);
v___x_2525_ = 0;
return v___x_2525_;
}
}
else
{
lean_dec_ref(v_inst_2517_);
if (lean_obj_tag(v_x_2520_) == 0)
{
uint8_t v___x_2526_; 
lean_dec_ref(v_x_2520_);
lean_dec_ref(v_x_2519_);
lean_dec_ref(v_inst_2518_);
v___x_2526_ = 0;
return v___x_2526_;
}
else
{
lean_object* v_val_2527_; lean_object* v_val_2528_; lean_object* v___x_2529_; uint8_t v___x_2530_; 
v_val_2527_ = lean_ctor_get(v_x_2519_, 0);
lean_inc(v_val_2527_);
lean_dec_ref(v_x_2519_);
v_val_2528_ = lean_ctor_get(v_x_2520_, 0);
lean_inc(v_val_2528_);
lean_dec_ref(v_x_2520_);
v___x_2529_ = lean_apply_2(v_inst_2518_, v_val_2527_, v_val_2528_);
v___x_2530_ = lean_unbox(v___x_2529_);
return v___x_2530_;
}
}
}
}
LEAN_EXPORT lean_object* l_instDecidableEqSum_decEq___redArg___boxed(lean_object* v_inst_2531_, lean_object* v_inst_2532_, lean_object* v_x_2533_, lean_object* v_x_2534_){
_start:
{
uint8_t v_res_2535_; lean_object* v_r_2536_; 
v_res_2535_ = l_instDecidableEqSum_decEq___redArg(v_inst_2531_, v_inst_2532_, v_x_2533_, v_x_2534_);
v_r_2536_ = lean_box(v_res_2535_);
return v_r_2536_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqSum_decEq(lean_object* v_00_u03b1_2537_, lean_object* v_00_u03b2_2538_, lean_object* v_inst_2539_, lean_object* v_inst_2540_, lean_object* v_x_2541_, lean_object* v_x_2542_){
_start:
{
uint8_t v___x_2543_; 
v___x_2543_ = l_instDecidableEqSum_decEq___redArg(v_inst_2539_, v_inst_2540_, v_x_2541_, v_x_2542_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqSum_decEq___boxed(lean_object* v_00_u03b1_2544_, lean_object* v_00_u03b2_2545_, lean_object* v_inst_2546_, lean_object* v_inst_2547_, lean_object* v_x_2548_, lean_object* v_x_2549_){
_start:
{
uint8_t v_res_2550_; lean_object* v_r_2551_; 
v_res_2550_ = l_instDecidableEqSum_decEq(v_00_u03b1_2544_, v_00_u03b2_2545_, v_inst_2546_, v_inst_2547_, v_x_2548_, v_x_2549_);
v_r_2551_ = lean_box(v_res_2550_);
return v_r_2551_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqSum___redArg(lean_object* v_inst_2552_, lean_object* v_inst_2553_, lean_object* v_x_2554_, lean_object* v_x_2555_){
_start:
{
uint8_t v___x_2556_; 
v___x_2556_ = l_instDecidableEqSum_decEq___redArg(v_inst_2552_, v_inst_2553_, v_x_2554_, v_x_2555_);
return v___x_2556_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqSum___redArg___boxed(lean_object* v_inst_2557_, lean_object* v_inst_2558_, lean_object* v_x_2559_, lean_object* v_x_2560_){
_start:
{
uint8_t v_res_2561_; lean_object* v_r_2562_; 
v_res_2561_ = l_instDecidableEqSum___redArg(v_inst_2557_, v_inst_2558_, v_x_2559_, v_x_2560_);
v_r_2562_ = lean_box(v_res_2561_);
return v_r_2562_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqSum(lean_object* v_00_u03b1_2563_, lean_object* v_00_u03b2_2564_, lean_object* v_inst_2565_, lean_object* v_inst_2566_, lean_object* v_x_2567_, lean_object* v_x_2568_){
_start:
{
uint8_t v___x_2569_; 
v___x_2569_ = l_instDecidableEqSum_decEq___redArg(v_inst_2565_, v_inst_2566_, v_x_2567_, v_x_2568_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqSum___boxed(lean_object* v_00_u03b1_2570_, lean_object* v_00_u03b2_2571_, lean_object* v_inst_2572_, lean_object* v_inst_2573_, lean_object* v_x_2574_, lean_object* v_x_2575_){
_start:
{
uint8_t v_res_2576_; lean_object* v_r_2577_; 
v_res_2576_ = l_instDecidableEqSum(v_00_u03b1_2570_, v_00_u03b2_2571_, v_inst_2572_, v_inst_2573_, v_x_2574_, v_x_2575_);
v_r_2577_ = lean_box(v_res_2576_);
return v_r_2577_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedProd___redArg(lean_object* v_inst_2578_, lean_object* v_inst_2579_){
_start:
{
lean_object* v___x_2580_; 
v___x_2580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2580_, 0, v_inst_2578_);
lean_ctor_set(v___x_2580_, 1, v_inst_2579_);
return v___x_2580_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedProd(lean_object* v_00_u03b1_2581_, lean_object* v_00_u03b2_2582_, lean_object* v_inst_2583_, lean_object* v_inst_2584_){
_start:
{
lean_object* v___x_2585_; 
v___x_2585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2585_, 0, v_inst_2583_);
lean_ctor_set(v___x_2585_, 1, v_inst_2584_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedMProd___redArg(lean_object* v_inst_2586_, lean_object* v_inst_2587_){
_start:
{
lean_object* v___x_2588_; 
v___x_2588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2588_, 0, v_inst_2586_);
lean_ctor_set(v___x_2588_, 1, v_inst_2587_);
return v___x_2588_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedMProd(lean_object* v_00_u03b1_2589_, lean_object* v_00_u03b2_2590_, lean_object* v_inst_2591_, lean_object* v_inst_2592_){
_start:
{
lean_object* v___x_2593_; 
v___x_2593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2593_, 0, v_inst_2591_);
lean_ctor_set(v___x_2593_, 1, v_inst_2592_);
return v___x_2593_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedPProd___redArg(lean_object* v_inst_2594_, lean_object* v_inst_2595_){
_start:
{
lean_object* v___x_2596_; 
v___x_2596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2596_, 0, v_inst_2594_);
lean_ctor_set(v___x_2596_, 1, v_inst_2595_);
return v___x_2596_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedPProd(lean_object* v_00_u03b1_2597_, lean_object* v_00_u03b2_2598_, lean_object* v_inst_2599_, lean_object* v_inst_2600_){
_start:
{
lean_object* v___x_2601_; 
v___x_2601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2601_, 0, v_inst_2599_);
lean_ctor_set(v___x_2601_, 1, v_inst_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqProd___redArg(lean_object* v_inst_2602_, lean_object* v_inst_2603_, lean_object* v_x_2604_, lean_object* v_x_2605_){
_start:
{
lean_object* v_fst_2606_; lean_object* v_snd_2607_; lean_object* v_fst_2608_; lean_object* v_snd_2609_; lean_object* v___x_2610_; uint8_t v___x_2611_; 
v_fst_2606_ = lean_ctor_get(v_x_2604_, 0);
lean_inc(v_fst_2606_);
v_snd_2607_ = lean_ctor_get(v_x_2604_, 1);
lean_inc(v_snd_2607_);
lean_dec_ref(v_x_2604_);
v_fst_2608_ = lean_ctor_get(v_x_2605_, 0);
lean_inc(v_fst_2608_);
v_snd_2609_ = lean_ctor_get(v_x_2605_, 1);
lean_inc(v_snd_2609_);
lean_dec_ref(v_x_2605_);
v___x_2610_ = lean_apply_2(v_inst_2602_, v_fst_2606_, v_fst_2608_);
v___x_2611_ = lean_unbox(v___x_2610_);
if (v___x_2611_ == 0)
{
uint8_t v___x_2612_; 
lean_dec(v_snd_2609_);
lean_dec(v_snd_2607_);
lean_dec_ref(v_inst_2603_);
v___x_2612_ = lean_unbox(v___x_2610_);
return v___x_2612_;
}
else
{
lean_object* v___x_2613_; uint8_t v___x_2614_; 
v___x_2613_ = lean_apply_2(v_inst_2603_, v_snd_2607_, v_snd_2609_);
v___x_2614_ = lean_unbox(v___x_2613_);
return v___x_2614_;
}
}
}
LEAN_EXPORT lean_object* l_instDecidableEqProd___redArg___boxed(lean_object* v_inst_2615_, lean_object* v_inst_2616_, lean_object* v_x_2617_, lean_object* v_x_2618_){
_start:
{
uint8_t v_res_2619_; lean_object* v_r_2620_; 
v_res_2619_ = l_instDecidableEqProd___redArg(v_inst_2615_, v_inst_2616_, v_x_2617_, v_x_2618_);
v_r_2620_ = lean_box(v_res_2619_);
return v_r_2620_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqProd(lean_object* v_00_u03b1_2621_, lean_object* v_00_u03b2_2622_, lean_object* v_inst_2623_, lean_object* v_inst_2624_, lean_object* v_x_2625_, lean_object* v_x_2626_){
_start:
{
uint8_t v___x_2627_; 
v___x_2627_ = l_instDecidableEqProd___redArg(v_inst_2623_, v_inst_2624_, v_x_2625_, v_x_2626_);
return v___x_2627_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqProd___boxed(lean_object* v_00_u03b1_2628_, lean_object* v_00_u03b2_2629_, lean_object* v_inst_2630_, lean_object* v_inst_2631_, lean_object* v_x_2632_, lean_object* v_x_2633_){
_start:
{
uint8_t v_res_2634_; lean_object* v_r_2635_; 
v_res_2634_ = l_instDecidableEqProd(v_00_u03b1_2628_, v_00_u03b2_2629_, v_inst_2630_, v_inst_2631_, v_x_2632_, v_x_2633_);
v_r_2635_ = lean_box(v_res_2634_);
return v_r_2635_;
}
}
LEAN_EXPORT uint8_t l_instBEqProd___redArg___lam__0(lean_object* v_inst_2636_, lean_object* v_inst_2637_, lean_object* v_x_2638_, lean_object* v_x_2639_){
_start:
{
lean_object* v_fst_2640_; lean_object* v_snd_2641_; lean_object* v_fst_2642_; lean_object* v_snd_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; 
v_fst_2640_ = lean_ctor_get(v_x_2638_, 0);
lean_inc(v_fst_2640_);
v_snd_2641_ = lean_ctor_get(v_x_2638_, 1);
lean_inc(v_snd_2641_);
lean_dec_ref(v_x_2638_);
v_fst_2642_ = lean_ctor_get(v_x_2639_, 0);
lean_inc(v_fst_2642_);
v_snd_2643_ = lean_ctor_get(v_x_2639_, 1);
lean_inc(v_snd_2643_);
lean_dec_ref(v_x_2639_);
v___x_2644_ = lean_apply_2(v_inst_2636_, v_fst_2640_, v_fst_2642_);
v___x_2645_ = lean_unbox(v___x_2644_);
if (v___x_2645_ == 0)
{
uint8_t v___x_2646_; 
lean_dec(v_snd_2643_);
lean_dec(v_snd_2641_);
lean_dec_ref(v_inst_2637_);
v___x_2646_ = lean_unbox(v___x_2644_);
return v___x_2646_;
}
else
{
lean_object* v___x_2647_; uint8_t v___x_2648_; 
v___x_2647_ = lean_apply_2(v_inst_2637_, v_snd_2641_, v_snd_2643_);
v___x_2648_ = lean_unbox(v___x_2647_);
return v___x_2648_;
}
}
}
LEAN_EXPORT lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object* v_inst_2649_, lean_object* v_inst_2650_, lean_object* v_x_2651_, lean_object* v_x_2652_){
_start:
{
uint8_t v_res_2653_; lean_object* v_r_2654_; 
v_res_2653_ = l_instBEqProd___redArg___lam__0(v_inst_2649_, v_inst_2650_, v_x_2651_, v_x_2652_);
v_r_2654_ = lean_box(v_res_2653_);
return v_r_2654_;
}
}
LEAN_EXPORT lean_object* l_instBEqProd___redArg(lean_object* v_inst_2655_, lean_object* v_inst_2656_){
_start:
{
lean_object* v___f_2657_; 
v___f_2657_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2657_, 0, v_inst_2655_);
lean_closure_set(v___f_2657_, 1, v_inst_2656_);
return v___f_2657_;
}
}
LEAN_EXPORT lean_object* l_instBEqProd(lean_object* v_00_u03b1_2658_, lean_object* v_00_u03b2_2659_, lean_object* v_inst_2660_, lean_object* v_inst_2661_){
_start:
{
lean_object* v___f_2662_; 
v___f_2662_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2662_, 0, v_inst_2660_);
lean_closure_set(v___f_2662_, 1, v_inst_2661_);
return v___f_2662_;
}
}
LEAN_EXPORT uint8_t l_Prod_lexLtDec___aux__1___redArg(lean_object* v_inst_2663_, lean_object* v_inst_2664_, lean_object* v_inst_2665_, lean_object* v_x_2666_, lean_object* v_x_2667_){
_start:
{
lean_object* v_fst_2668_; lean_object* v_snd_2669_; lean_object* v_fst_2670_; lean_object* v_snd_2671_; lean_object* v___x_2672_; uint8_t v___x_2673_; 
v_fst_2668_ = lean_ctor_get(v_x_2666_, 0);
lean_inc_n(v_fst_2668_, 2);
v_snd_2669_ = lean_ctor_get(v_x_2666_, 1);
lean_inc(v_snd_2669_);
lean_dec_ref(v_x_2666_);
v_fst_2670_ = lean_ctor_get(v_x_2667_, 0);
lean_inc_n(v_fst_2670_, 2);
v_snd_2671_ = lean_ctor_get(v_x_2667_, 1);
lean_inc(v_snd_2671_);
lean_dec_ref(v_x_2667_);
v___x_2672_ = lean_apply_2(v_inst_2664_, v_fst_2668_, v_fst_2670_);
v___x_2673_ = lean_unbox(v___x_2672_);
if (v___x_2673_ == 0)
{
lean_object* v___x_2674_; uint8_t v___x_2675_; 
v___x_2674_ = lean_apply_2(v_inst_2663_, v_fst_2668_, v_fst_2670_);
v___x_2675_ = lean_unbox(v___x_2674_);
if (v___x_2675_ == 0)
{
uint8_t v___x_2676_; 
lean_dec(v_snd_2671_);
lean_dec(v_snd_2669_);
lean_dec_ref(v_inst_2665_);
v___x_2676_ = lean_unbox(v___x_2674_);
return v___x_2676_;
}
else
{
lean_object* v___x_2677_; uint8_t v___x_2678_; 
v___x_2677_ = lean_apply_2(v_inst_2665_, v_snd_2669_, v_snd_2671_);
v___x_2678_ = lean_unbox(v___x_2677_);
return v___x_2678_;
}
}
else
{
uint8_t v___x_2679_; 
lean_dec(v_snd_2671_);
lean_dec(v_fst_2670_);
lean_dec(v_snd_2669_);
lean_dec(v_fst_2668_);
lean_dec_ref(v_inst_2665_);
lean_dec_ref(v_inst_2663_);
v___x_2679_ = lean_unbox(v___x_2672_);
return v___x_2679_;
}
}
}
LEAN_EXPORT lean_object* l_Prod_lexLtDec___aux__1___redArg___boxed(lean_object* v_inst_2680_, lean_object* v_inst_2681_, lean_object* v_inst_2682_, lean_object* v_x_2683_, lean_object* v_x_2684_){
_start:
{
uint8_t v_res_2685_; lean_object* v_r_2686_; 
v_res_2685_ = l_Prod_lexLtDec___aux__1___redArg(v_inst_2680_, v_inst_2681_, v_inst_2682_, v_x_2683_, v_x_2684_);
v_r_2686_ = lean_box(v_res_2685_);
return v_r_2686_;
}
}
LEAN_EXPORT uint8_t l_Prod_lexLtDec___aux__1(lean_object* v_00_u03b1_2687_, lean_object* v_00_u03b2_2688_, lean_object* v_inst_2689_, lean_object* v_inst_2690_, lean_object* v_inst_2691_, lean_object* v_inst_2692_, lean_object* v_inst_2693_, lean_object* v_x_2694_, lean_object* v_x_2695_){
_start:
{
uint8_t v___x_2696_; 
v___x_2696_ = l_Prod_lexLtDec___aux__1___redArg(v_inst_2691_, v_inst_2692_, v_inst_2693_, v_x_2694_, v_x_2695_);
return v___x_2696_;
}
}
LEAN_EXPORT lean_object* l_Prod_lexLtDec___aux__1___boxed(lean_object* v_00_u03b1_2697_, lean_object* v_00_u03b2_2698_, lean_object* v_inst_2699_, lean_object* v_inst_2700_, lean_object* v_inst_2701_, lean_object* v_inst_2702_, lean_object* v_inst_2703_, lean_object* v_x_2704_, lean_object* v_x_2705_){
_start:
{
uint8_t v_res_2706_; lean_object* v_r_2707_; 
v_res_2706_ = l_Prod_lexLtDec___aux__1(v_00_u03b1_2697_, v_00_u03b2_2698_, v_inst_2699_, v_inst_2700_, v_inst_2701_, v_inst_2702_, v_inst_2703_, v_x_2704_, v_x_2705_);
v_r_2707_ = lean_box(v_res_2706_);
return v_r_2707_;
}
}
LEAN_EXPORT uint8_t l_Prod_lexLtDec___redArg(lean_object* v_inst_2708_, lean_object* v_inst_2709_, lean_object* v_inst_2710_, lean_object* v_x_2711_, lean_object* v_x_2712_){
_start:
{
uint8_t v___x_2713_; 
v___x_2713_ = l_Prod_lexLtDec___aux__1___redArg(v_inst_2708_, v_inst_2709_, v_inst_2710_, v_x_2711_, v_x_2712_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* l_Prod_lexLtDec___redArg___boxed(lean_object* v_inst_2714_, lean_object* v_inst_2715_, lean_object* v_inst_2716_, lean_object* v_x_2717_, lean_object* v_x_2718_){
_start:
{
uint8_t v_res_2719_; lean_object* v_r_2720_; 
v_res_2719_ = l_Prod_lexLtDec___redArg(v_inst_2714_, v_inst_2715_, v_inst_2716_, v_x_2717_, v_x_2718_);
v_r_2720_ = lean_box(v_res_2719_);
return v_r_2720_;
}
}
LEAN_EXPORT uint8_t l_Prod_lexLtDec(lean_object* v_00_u03b1_2721_, lean_object* v_00_u03b2_2722_, lean_object* v_inst_2723_, lean_object* v_inst_2724_, lean_object* v_inst_2725_, lean_object* v_inst_2726_, lean_object* v_inst_2727_, lean_object* v_x_2728_, lean_object* v_x_2729_){
_start:
{
uint8_t v___x_2730_; 
v___x_2730_ = l_Prod_lexLtDec___aux__1___redArg(v_inst_2725_, v_inst_2726_, v_inst_2727_, v_x_2728_, v_x_2729_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l_Prod_lexLtDec___boxed(lean_object* v_00_u03b1_2731_, lean_object* v_00_u03b2_2732_, lean_object* v_inst_2733_, lean_object* v_inst_2734_, lean_object* v_inst_2735_, lean_object* v_inst_2736_, lean_object* v_inst_2737_, lean_object* v_x_2738_, lean_object* v_x_2739_){
_start:
{
uint8_t v_res_2740_; lean_object* v_r_2741_; 
v_res_2740_ = l_Prod_lexLtDec(v_00_u03b1_2731_, v_00_u03b2_2732_, v_inst_2733_, v_inst_2734_, v_inst_2735_, v_inst_2736_, v_inst_2737_, v_x_2738_, v_x_2739_);
v_r_2741_ = lean_box(v_res_2740_);
return v_r_2741_;
}
}
LEAN_EXPORT lean_object* l_Prod_map___redArg(lean_object* v_f_2742_, lean_object* v_g_2743_, lean_object* v_x_2744_){
_start:
{
lean_object* v_fst_2745_; lean_object* v_snd_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2755_; 
v_fst_2745_ = lean_ctor_get(v_x_2744_, 0);
v_snd_2746_ = lean_ctor_get(v_x_2744_, 1);
v_isSharedCheck_2755_ = !lean_is_exclusive(v_x_2744_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2748_ = v_x_2744_;
v_isShared_2749_ = v_isSharedCheck_2755_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_snd_2746_);
lean_inc(v_fst_2745_);
lean_dec(v_x_2744_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2755_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2753_; 
v___x_2750_ = lean_apply_1(v_f_2742_, v_fst_2745_);
v___x_2751_ = lean_apply_1(v_g_2743_, v_snd_2746_);
if (v_isShared_2749_ == 0)
{
lean_ctor_set(v___x_2748_, 1, v___x_2751_);
lean_ctor_set(v___x_2748_, 0, v___x_2750_);
v___x_2753_ = v___x_2748_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v___x_2750_);
lean_ctor_set(v_reuseFailAlloc_2754_, 1, v___x_2751_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
}
}
LEAN_EXPORT lean_object* l_Prod_map(lean_object* v_00_u03b1_u2081_2756_, lean_object* v_00_u03b1_u2082_2757_, lean_object* v_00_u03b2_u2081_2758_, lean_object* v_00_u03b2_u2082_2759_, lean_object* v_f_2760_, lean_object* v_g_2761_, lean_object* v_x_2762_){
_start:
{
lean_object* v___x_2763_; 
v___x_2763_ = l_Prod_map___redArg(v_f_2760_, v_g_2761_, v_x_2762_);
return v___x_2763_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqSigma___redArg(lean_object* v_h_u2081_2764_, lean_object* v_h_u2082_2765_, lean_object* v_x_2766_, lean_object* v_x_2767_){
_start:
{
lean_object* v_fst_2768_; lean_object* v_snd_2769_; lean_object* v_fst_2770_; lean_object* v_snd_2771_; lean_object* v___x_2772_; uint8_t v___x_2773_; 
v_fst_2768_ = lean_ctor_get(v_x_2766_, 0);
lean_inc_n(v_fst_2768_, 2);
v_snd_2769_ = lean_ctor_get(v_x_2766_, 1);
lean_inc(v_snd_2769_);
lean_dec_ref(v_x_2766_);
v_fst_2770_ = lean_ctor_get(v_x_2767_, 0);
lean_inc(v_fst_2770_);
v_snd_2771_ = lean_ctor_get(v_x_2767_, 1);
lean_inc(v_snd_2771_);
lean_dec_ref(v_x_2767_);
v___x_2772_ = lean_apply_2(v_h_u2081_2764_, v_fst_2768_, v_fst_2770_);
v___x_2773_ = lean_unbox(v___x_2772_);
if (v___x_2773_ == 0)
{
uint8_t v___x_2774_; 
lean_dec(v_snd_2771_);
lean_dec(v_snd_2769_);
lean_dec(v_fst_2768_);
lean_dec_ref(v_h_u2082_2765_);
v___x_2774_ = lean_unbox(v___x_2772_);
return v___x_2774_;
}
else
{
lean_object* v___x_2775_; uint8_t v___x_2776_; 
v___x_2775_ = lean_apply_3(v_h_u2082_2765_, v_fst_2768_, v_snd_2769_, v_snd_2771_);
v___x_2776_ = lean_unbox(v___x_2775_);
return v___x_2776_;
}
}
}
LEAN_EXPORT lean_object* l_instDecidableEqSigma___redArg___boxed(lean_object* v_h_u2081_2777_, lean_object* v_h_u2082_2778_, lean_object* v_x_2779_, lean_object* v_x_2780_){
_start:
{
uint8_t v_res_2781_; lean_object* v_r_2782_; 
v_res_2781_ = l_instDecidableEqSigma___redArg(v_h_u2081_2777_, v_h_u2082_2778_, v_x_2779_, v_x_2780_);
v_r_2782_ = lean_box(v_res_2781_);
return v_r_2782_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqSigma(lean_object* v_00_u03b1_2783_, lean_object* v_00_u03b2_2784_, lean_object* v_h_u2081_2785_, lean_object* v_h_u2082_2786_, lean_object* v_x_2787_, lean_object* v_x_2788_){
_start:
{
uint8_t v___x_2789_; 
v___x_2789_ = l_instDecidableEqSigma___redArg(v_h_u2081_2785_, v_h_u2082_2786_, v_x_2787_, v_x_2788_);
return v___x_2789_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqSigma___boxed(lean_object* v_00_u03b1_2790_, lean_object* v_00_u03b2_2791_, lean_object* v_h_u2081_2792_, lean_object* v_h_u2082_2793_, lean_object* v_x_2794_, lean_object* v_x_2795_){
_start:
{
uint8_t v_res_2796_; lean_object* v_r_2797_; 
v_res_2796_ = l_instDecidableEqSigma(v_00_u03b1_2790_, v_00_u03b2_2791_, v_h_u2081_2792_, v_h_u2082_2793_, v_x_2794_, v_x_2795_);
v_r_2797_ = lean_box(v_res_2796_);
return v_r_2797_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqPSigma___redArg(lean_object* v_h_u2081_2798_, lean_object* v_h_u2082_2799_, lean_object* v_x_2800_, lean_object* v_x_2801_){
_start:
{
lean_object* v_fst_2802_; lean_object* v_snd_2803_; lean_object* v_fst_2804_; lean_object* v_snd_2805_; lean_object* v___x_2806_; uint8_t v___x_2807_; 
v_fst_2802_ = lean_ctor_get(v_x_2800_, 0);
lean_inc_n(v_fst_2802_, 2);
v_snd_2803_ = lean_ctor_get(v_x_2800_, 1);
lean_inc(v_snd_2803_);
lean_dec_ref(v_x_2800_);
v_fst_2804_ = lean_ctor_get(v_x_2801_, 0);
lean_inc(v_fst_2804_);
v_snd_2805_ = lean_ctor_get(v_x_2801_, 1);
lean_inc(v_snd_2805_);
lean_dec_ref(v_x_2801_);
v___x_2806_ = lean_apply_2(v_h_u2081_2798_, v_fst_2802_, v_fst_2804_);
v___x_2807_ = lean_unbox(v___x_2806_);
if (v___x_2807_ == 0)
{
uint8_t v___x_2808_; 
lean_dec(v_snd_2805_);
lean_dec(v_snd_2803_);
lean_dec(v_fst_2802_);
lean_dec_ref(v_h_u2082_2799_);
v___x_2808_ = lean_unbox(v___x_2806_);
return v___x_2808_;
}
else
{
lean_object* v___x_2809_; uint8_t v___x_2810_; 
v___x_2809_ = lean_apply_3(v_h_u2082_2799_, v_fst_2802_, v_snd_2803_, v_snd_2805_);
v___x_2810_ = lean_unbox(v___x_2809_);
return v___x_2810_;
}
}
}
LEAN_EXPORT lean_object* l_instDecidableEqPSigma___redArg___boxed(lean_object* v_h_u2081_2811_, lean_object* v_h_u2082_2812_, lean_object* v_x_2813_, lean_object* v_x_2814_){
_start:
{
uint8_t v_res_2815_; lean_object* v_r_2816_; 
v_res_2815_ = l_instDecidableEqPSigma___redArg(v_h_u2081_2811_, v_h_u2082_2812_, v_x_2813_, v_x_2814_);
v_r_2816_ = lean_box(v_res_2815_);
return v_r_2816_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqPSigma(lean_object* v_00_u03b1_2817_, lean_object* v_00_u03b2_2818_, lean_object* v_h_u2081_2819_, lean_object* v_h_u2082_2820_, lean_object* v_x_2821_, lean_object* v_x_2822_){
_start:
{
uint8_t v___x_2823_; 
v___x_2823_ = l_instDecidableEqPSigma___redArg(v_h_u2081_2819_, v_h_u2082_2820_, v_x_2821_, v_x_2822_);
return v___x_2823_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqPSigma___boxed(lean_object* v_00_u03b1_2824_, lean_object* v_00_u03b2_2825_, lean_object* v_h_u2081_2826_, lean_object* v_h_u2082_2827_, lean_object* v_x_2828_, lean_object* v_x_2829_){
_start:
{
uint8_t v_res_2830_; lean_object* v_r_2831_; 
v_res_2830_ = l_instDecidableEqPSigma(v_00_u03b1_2824_, v_00_u03b2_2825_, v_h_u2081_2826_, v_h_u2082_2827_, v_x_2828_, v_x_2829_);
v_r_2831_ = lean_box(v_res_2830_);
return v_r_2831_;
}
}
static lean_object* _init_l_instInhabitedPUnit(void){
_start:
{
lean_object* v___x_2832_; 
v___x_2832_ = lean_box(0);
return v___x_2832_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqPUnit(lean_object* v_a_2833_, lean_object* v_b_2834_){
_start:
{
uint8_t v___x_2835_; 
v___x_2835_ = 1;
return v___x_2835_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqPUnit___boxed(lean_object* v_a_2836_, lean_object* v_b_2837_){
_start:
{
uint8_t v_res_2838_; lean_object* v_r_2839_; 
v_res_2838_ = l_instDecidableEqPUnit(v_a_2836_, v_b_2837_);
v_r_2839_ = lean_box(v_res_2838_);
return v_r_2839_;
}
}
LEAN_EXPORT lean_object* l_instHasEquivOfSetoid(lean_object* v_00_u03b1_2840_, lean_object* v_inst_2841_){
_start:
{
lean_object* v___x_2842_; 
v___x_2842_ = lean_box(0);
return v___x_2842_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqOfIff___redArg(uint8_t v_d_2843_){
_start:
{
return v_d_2843_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqOfIff___redArg___boxed(lean_object* v_d_2844_){
_start:
{
uint8_t v_d_boxed_2845_; uint8_t v_res_2846_; lean_object* v_r_2847_; 
v_d_boxed_2845_ = lean_unbox(v_d_2844_);
v_res_2846_ = l_instDecidableEqOfIff___redArg(v_d_boxed_2845_);
v_r_2847_ = lean_box(v_res_2846_);
return v_r_2847_;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqOfIff(lean_object* v_p_2848_, lean_object* v_q_2849_, uint8_t v_d_2850_){
_start:
{
return v_d_2850_;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqOfIff___boxed(lean_object* v_p_2851_, lean_object* v_q_2852_, lean_object* v_d_2853_){
_start:
{
uint8_t v_d_boxed_2854_; uint8_t v_res_2855_; lean_object* v_r_2856_; 
v_d_boxed_2854_ = lean_unbox(v_d_2853_);
v_res_2855_ = l_instDecidableEqOfIff(v_p_2851_, v_q_2852_, v_d_boxed_2854_);
v_r_2856_ = lean_box(v_res_2855_);
return v_r_2856_;
}
}
LEAN_EXPORT lean_object* l_Not_elim(lean_object* v_a_2857_, lean_object* v_00_u03b1_2858_, lean_object* v_H1_2859_, lean_object* v_H2_2860_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_And_elim___redArg(lean_object* v_f_2861_){
_start:
{
lean_object* v___x_2862_; 
v___x_2862_ = lean_apply_2(v_f_2861_, lean_box(0), lean_box(0));
return v___x_2862_;
}
}
LEAN_EXPORT lean_object* l_And_elim(lean_object* v_a_2863_, lean_object* v_b_2864_, lean_object* v_00_u03b1_2865_, lean_object* v_f_2866_, lean_object* v_h_2867_){
_start:
{
lean_object* v___x_2868_; 
v___x_2868_ = lean_apply_2(v_f_2866_, lean_box(0), lean_box(0));
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_Iff_elim___redArg(lean_object* v_f_2869_){
_start:
{
lean_object* v___x_2870_; 
v___x_2870_ = lean_apply_2(v_f_2869_, lean_box(0), lean_box(0));
return v___x_2870_;
}
}
LEAN_EXPORT lean_object* l_Iff_elim(lean_object* v_a_2871_, lean_object* v_b_2872_, lean_object* v_00_u03b1_2873_, lean_object* v_f_2874_, lean_object* v_h_2875_){
_start:
{
lean_object* v___x_2876_; 
v___x_2876_ = lean_apply_2(v_f_2874_, lean_box(0), lean_box(0));
return v___x_2876_;
}
}
LEAN_EXPORT lean_object* l_Quot_liftOn___redArg(lean_object* v_q_2877_, lean_object* v_f_2878_){
_start:
{
lean_object* v___x_2879_; 
v___x_2879_ = lean_apply_1(v_f_2878_, v_q_2877_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l_Quot_liftOn(lean_object* v_00_u03b1_2880_, lean_object* v_00_u03b2_2881_, lean_object* v_r_2882_, lean_object* v_q_2883_, lean_object* v_f_2884_, lean_object* v_c_2885_){
_start:
{
lean_object* v___x_2886_; 
v___x_2886_ = lean_apply_1(v_f_2884_, v_q_2883_);
return v___x_2886_;
}
}
LEAN_EXPORT lean_object* l_Quot_rec___redArg(lean_object* v_f_2887_, lean_object* v_q_2888_){
_start:
{
lean_object* v___x_2889_; 
v___x_2889_ = lean_apply_1(v_f_2887_, v_q_2888_);
return v___x_2889_;
}
}
LEAN_EXPORT lean_object* l_Quot_rec(lean_object* v_00_u03b1_2890_, lean_object* v_r_2891_, lean_object* v_motive_2892_, lean_object* v_f_2893_, lean_object* v_h_2894_, lean_object* v_q_2895_){
_start:
{
lean_object* v___x_2896_; 
v___x_2896_ = lean_apply_1(v_f_2893_, v_q_2895_);
return v___x_2896_;
}
}
LEAN_EXPORT lean_object* l_Quot_recOn___redArg(lean_object* v_q_2897_, lean_object* v_f_2898_){
_start:
{
lean_object* v___x_2899_; 
v___x_2899_ = lean_apply_1(v_f_2898_, v_q_2897_);
return v___x_2899_;
}
}
LEAN_EXPORT lean_object* l_Quot_recOn(lean_object* v_00_u03b1_2900_, lean_object* v_r_2901_, lean_object* v_motive_2902_, lean_object* v_q_2903_, lean_object* v_f_2904_, lean_object* v_h_2905_){
_start:
{
lean_object* v___x_2906_; 
v___x_2906_ = lean_apply_1(v_f_2904_, v_q_2903_);
return v___x_2906_;
}
}
LEAN_EXPORT lean_object* l_Quot_recOnSubsingleton___redArg(lean_object* v_q_2907_, lean_object* v_f_2908_){
_start:
{
lean_object* v___x_2909_; 
v___x_2909_ = lean_apply_1(v_f_2908_, v_q_2907_);
return v___x_2909_;
}
}
LEAN_EXPORT lean_object* l_Quot_recOnSubsingleton(lean_object* v_00_u03b1_2910_, lean_object* v_r_2911_, lean_object* v_motive_2912_, lean_object* v_h_2913_, lean_object* v_q_2914_, lean_object* v_f_2915_){
_start:
{
lean_object* v___x_2916_; 
v___x_2916_ = lean_apply_1(v_f_2915_, v_q_2914_);
return v___x_2916_;
}
}
LEAN_EXPORT lean_object* l_Quot_hrecOn___redArg(lean_object* v_q_2917_, lean_object* v_f_2918_){
_start:
{
lean_object* v___x_2919_; 
v___x_2919_ = lean_apply_1(v_f_2918_, v_q_2917_);
return v___x_2919_;
}
}
LEAN_EXPORT lean_object* l_Quot_hrecOn(lean_object* v_00_u03b1_2920_, lean_object* v_r_2921_, lean_object* v_motive_2922_, lean_object* v_q_2923_, lean_object* v_f_2924_, lean_object* v_c_2925_){
_start:
{
lean_object* v___x_2926_; 
v___x_2926_ = lean_apply_1(v_f_2924_, v_q_2923_);
return v___x_2926_;
}
}
LEAN_EXPORT lean_object* l_Quotient_mk___redArg(lean_object* v_a_2927_){
_start:
{
lean_inc(v_a_2927_);
return v_a_2927_;
}
}
LEAN_EXPORT lean_object* l_Quotient_mk___redArg___boxed(lean_object* v_a_2928_){
_start:
{
lean_object* v_res_2929_; 
v_res_2929_ = l_Quotient_mk___redArg(v_a_2928_);
lean_dec(v_a_2928_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l_Quotient_mk(lean_object* v_00_u03b1_2930_, lean_object* v_s_2931_, lean_object* v_a_2932_){
_start:
{
lean_inc(v_a_2932_);
return v_a_2932_;
}
}
LEAN_EXPORT lean_object* l_Quotient_mk___boxed(lean_object* v_00_u03b1_2933_, lean_object* v_s_2934_, lean_object* v_a_2935_){
_start:
{
lean_object* v_res_2936_; 
v_res_2936_ = l_Quotient_mk(v_00_u03b1_2933_, v_s_2934_, v_a_2935_);
lean_dec(v_a_2935_);
return v_res_2936_;
}
}
LEAN_EXPORT lean_object* l_Quotient_mk_x27___redArg(lean_object* v_a_2937_){
_start:
{
lean_inc(v_a_2937_);
return v_a_2937_;
}
}
LEAN_EXPORT lean_object* l_Quotient_mk_x27___redArg___boxed(lean_object* v_a_2938_){
_start:
{
lean_object* v_res_2939_; 
v_res_2939_ = l_Quotient_mk_x27___redArg(v_a_2938_);
lean_dec(v_a_2938_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l_Quotient_mk_x27(lean_object* v_00_u03b1_2940_, lean_object* v_s_2941_, lean_object* v_a_2942_){
_start:
{
lean_inc(v_a_2942_);
return v_a_2942_;
}
}
LEAN_EXPORT lean_object* l_Quotient_mk_x27___boxed(lean_object* v_00_u03b1_2943_, lean_object* v_s_2944_, lean_object* v_a_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l_Quotient_mk_x27(v_00_u03b1_2943_, v_s_2944_, v_a_2945_);
lean_dec(v_a_2945_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_Quotient_lift___redArg(lean_object* v_f_2947_, lean_object* v_a_2948_){
_start:
{
lean_object* v___x_2949_; 
v___x_2949_ = lean_apply_1(v_f_2947_, v_a_2948_);
return v___x_2949_;
}
}
LEAN_EXPORT lean_object* l_Quotient_lift(lean_object* v_00_u03b1_2950_, lean_object* v_00_u03b2_2951_, lean_object* v_s_2952_, lean_object* v_f_2953_, lean_object* v_a_2954_, lean_object* v_a_2955_){
_start:
{
lean_object* v___x_2956_; 
v___x_2956_ = lean_apply_1(v_f_2953_, v_a_2955_);
return v___x_2956_;
}
}
LEAN_EXPORT lean_object* l_Quotient_liftOn___redArg(lean_object* v_q_2957_, lean_object* v_f_2958_){
_start:
{
lean_object* v___x_2959_; 
v___x_2959_ = lean_apply_1(v_f_2958_, v_q_2957_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_Quotient_liftOn(lean_object* v_00_u03b1_2960_, lean_object* v_00_u03b2_2961_, lean_object* v_s_2962_, lean_object* v_q_2963_, lean_object* v_f_2964_, lean_object* v_c_2965_){
_start:
{
lean_object* v___x_2966_; 
v___x_2966_ = lean_apply_1(v_f_2964_, v_q_2963_);
return v___x_2966_;
}
}
LEAN_EXPORT lean_object* l_Quotient_rec___redArg(lean_object* v_f_2967_, lean_object* v_q_2968_){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = lean_apply_1(v_f_2967_, v_q_2968_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_Quotient_rec(lean_object* v_00_u03b1_2970_, lean_object* v_s_2971_, lean_object* v_motive_2972_, lean_object* v_f_2973_, lean_object* v_h_2974_, lean_object* v_q_2975_){
_start:
{
lean_object* v___x_2976_; 
v___x_2976_ = lean_apply_1(v_f_2973_, v_q_2975_);
return v___x_2976_;
}
}
LEAN_EXPORT lean_object* l_Quotient_recOn___redArg(lean_object* v_q_2977_, lean_object* v_f_2978_){
_start:
{
lean_object* v___x_2979_; 
v___x_2979_ = lean_apply_1(v_f_2978_, v_q_2977_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_Quotient_recOn(lean_object* v_00_u03b1_2980_, lean_object* v_s_2981_, lean_object* v_motive_2982_, lean_object* v_q_2983_, lean_object* v_f_2984_, lean_object* v_h_2985_){
_start:
{
lean_object* v___x_2986_; 
v___x_2986_ = lean_apply_1(v_f_2984_, v_q_2983_);
return v___x_2986_;
}
}
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton___redArg(lean_object* v_q_2987_, lean_object* v_f_2988_){
_start:
{
lean_object* v___x_2989_; 
v___x_2989_ = lean_apply_1(v_f_2988_, v_q_2987_);
return v___x_2989_;
}
}
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton(lean_object* v_00_u03b1_2990_, lean_object* v_s_2991_, lean_object* v_motive_2992_, lean_object* v_h_2993_, lean_object* v_q_2994_, lean_object* v_f_2995_){
_start:
{
lean_object* v___x_2996_; 
v___x_2996_ = lean_apply_1(v_f_2995_, v_q_2994_);
return v___x_2996_;
}
}
LEAN_EXPORT lean_object* l_Quotient_hrecOn___redArg(lean_object* v_q_2997_, lean_object* v_f_2998_){
_start:
{
lean_object* v___x_2999_; 
v___x_2999_ = lean_apply_1(v_f_2998_, v_q_2997_);
return v___x_2999_;
}
}
LEAN_EXPORT lean_object* l_Quotient_hrecOn(lean_object* v_00_u03b1_3000_, lean_object* v_s_3001_, lean_object* v_motive_3002_, lean_object* v_q_3003_, lean_object* v_f_3004_, lean_object* v_c_3005_){
_start:
{
lean_object* v___x_3006_; 
v___x_3006_ = lean_apply_1(v_f_3004_, v_q_3003_);
return v___x_3006_;
}
}
LEAN_EXPORT lean_object* l_Quotient_lift_u2082___redArg(lean_object* v_f_3007_, lean_object* v_q_u2081_3008_, lean_object* v_q_u2082_3009_){
_start:
{
lean_object* v___x_3010_; 
v___x_3010_ = lean_apply_2(v_f_3007_, v_q_u2081_3008_, v_q_u2082_3009_);
return v___x_3010_;
}
}
LEAN_EXPORT lean_object* l_Quotient_lift_u2082(lean_object* v_00_u03b1_3011_, lean_object* v_00_u03b2_3012_, lean_object* v_00_u03c6_3013_, lean_object* v_s_u2081_3014_, lean_object* v_s_u2082_3015_, lean_object* v_f_3016_, lean_object* v_c_3017_, lean_object* v_q_u2081_3018_, lean_object* v_q_u2082_3019_){
_start:
{
lean_object* v___x_3020_; 
v___x_3020_ = lean_apply_2(v_f_3016_, v_q_u2081_3018_, v_q_u2082_3019_);
return v___x_3020_;
}
}
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082___redArg(lean_object* v_q_u2081_3021_, lean_object* v_q_u2082_3022_, lean_object* v_f_3023_){
_start:
{
lean_object* v___x_3024_; 
v___x_3024_ = lean_apply_2(v_f_3023_, v_q_u2081_3021_, v_q_u2082_3022_);
return v___x_3024_;
}
}
LEAN_EXPORT lean_object* l_Quotient_liftOn_u2082(lean_object* v_00_u03b1_3025_, lean_object* v_00_u03b2_3026_, lean_object* v_00_u03c6_3027_, lean_object* v_s_u2081_3028_, lean_object* v_s_u2082_3029_, lean_object* v_q_u2081_3030_, lean_object* v_q_u2082_3031_, lean_object* v_f_3032_, lean_object* v_c_3033_){
_start:
{
lean_object* v___x_3034_; 
v___x_3034_ = lean_apply_2(v_f_3032_, v_q_u2081_3030_, v_q_u2082_3031_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton_u2082___redArg(lean_object* v_q_u2081_3035_, lean_object* v_q_u2082_3036_, lean_object* v_g_3037_){
_start:
{
lean_object* v___x_3038_; 
v___x_3038_ = lean_apply_2(v_g_3037_, v_q_u2081_3035_, v_q_u2082_3036_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l_Quotient_recOnSubsingleton_u2082(lean_object* v_00_u03b1_3039_, lean_object* v_00_u03b2_3040_, lean_object* v_s_u2081_3041_, lean_object* v_s_u2082_3042_, lean_object* v_motive_3043_, lean_object* v_s_3044_, lean_object* v_q_u2081_3045_, lean_object* v_q_u2082_3046_, lean_object* v_g_3047_){
_start:
{
lean_object* v___x_3048_; 
v___x_3048_ = lean_apply_2(v_g_3047_, v_q_u2081_3045_, v_q_u2082_3046_);
return v___x_3048_;
}
}
LEAN_EXPORT uint8_t l_Quotient_decidableEq___redArg(lean_object* v_d_3049_, lean_object* v_q_u2081_3050_, lean_object* v_q_u2082_3051_){
_start:
{
lean_object* v___x_3052_; uint8_t v___x_3053_; 
v___x_3052_ = lean_apply_2(v_d_3049_, v_q_u2081_3050_, v_q_u2082_3051_);
v___x_3053_ = lean_unbox(v___x_3052_);
return v___x_3053_;
}
}
LEAN_EXPORT lean_object* l_Quotient_decidableEq___redArg___boxed(lean_object* v_d_3054_, lean_object* v_q_u2081_3055_, lean_object* v_q_u2082_3056_){
_start:
{
uint8_t v_res_3057_; lean_object* v_r_3058_; 
v_res_3057_ = l_Quotient_decidableEq___redArg(v_d_3054_, v_q_u2081_3055_, v_q_u2082_3056_);
v_r_3058_ = lean_box(v_res_3057_);
return v_r_3058_;
}
}
LEAN_EXPORT uint8_t l_Quotient_decidableEq(lean_object* v_00_u03b1_3059_, lean_object* v_s_3060_, lean_object* v_d_3061_, lean_object* v_q_u2081_3062_, lean_object* v_q_u2082_3063_){
_start:
{
lean_object* v___x_3064_; uint8_t v___x_3065_; 
v___x_3064_ = lean_apply_2(v_d_3061_, v_q_u2081_3062_, v_q_u2082_3063_);
v___x_3065_ = lean_unbox(v___x_3064_);
return v___x_3065_;
}
}
LEAN_EXPORT lean_object* l_Quotient_decidableEq___boxed(lean_object* v_00_u03b1_3066_, lean_object* v_s_3067_, lean_object* v_d_3068_, lean_object* v_q_u2081_3069_, lean_object* v_q_u2082_3070_){
_start:
{
uint8_t v_res_3071_; lean_object* v_r_3072_; 
v_res_3071_ = l_Quotient_decidableEq(v_00_u03b1_3066_, v_s_3067_, v_d_3068_, v_q_u2081_3069_, v_q_u2082_3070_);
v_r_3072_ = lean_box(v_res_3071_);
return v_r_3072_;
}
}
LEAN_EXPORT lean_object* l_Quot_pliftOn___redArg(lean_object* v_q_3073_, lean_object* v_f_3074_){
_start:
{
lean_object* v___x_3075_; 
v___x_3075_ = lean_apply_2(v_f_3074_, v_q_3073_, lean_box(0));
return v___x_3075_;
}
}
LEAN_EXPORT lean_object* l_Quot_pliftOn(lean_object* v_00_u03b2_3076_, lean_object* v_00_u03b1_3077_, lean_object* v_r_3078_, lean_object* v_q_3079_, lean_object* v_f_3080_, lean_object* v_h_3081_){
_start:
{
lean_object* v___x_3082_; 
v___x_3082_ = lean_apply_2(v_f_3080_, v_q_3079_, lean_box(0));
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l_Quotient_pliftOn___redArg(lean_object* v_q_3083_, lean_object* v_f_3084_){
_start:
{
lean_object* v___x_3085_; 
v___x_3085_ = lean_apply_2(v_f_3084_, v_q_3083_, lean_box(0));
return v___x_3085_;
}
}
LEAN_EXPORT lean_object* l_Quotient_pliftOn(lean_object* v_00_u03b2_3086_, lean_object* v_00_u03b1_3087_, lean_object* v_s_3088_, lean_object* v_q_3089_, lean_object* v_f_3090_, lean_object* v_h_3091_){
_start:
{
lean_object* v___x_3092_; 
v___x_3092_ = lean_apply_2(v_f_3090_, v_q_3089_, lean_box(0));
return v___x_3092_;
}
}
LEAN_EXPORT lean_object* l_Setoid_trivial(lean_object* v_00_u03b1_3093_){
_start:
{
lean_object* v___x_3094_; 
v___x_3094_ = lean_box(0);
return v___x_3094_;
}
}
LEAN_EXPORT lean_object* l_Squash_mk___redArg(lean_object* v_x_3095_){
_start:
{
lean_inc(v_x_3095_);
return v_x_3095_;
}
}
LEAN_EXPORT lean_object* l_Squash_mk___redArg___boxed(lean_object* v_x_3096_){
_start:
{
lean_object* v_res_3097_; 
v_res_3097_ = l_Squash_mk___redArg(v_x_3096_);
lean_dec(v_x_3096_);
return v_res_3097_;
}
}
LEAN_EXPORT lean_object* l_Squash_mk(lean_object* v_00_u03b1_3098_, lean_object* v_x_3099_){
_start:
{
lean_inc(v_x_3099_);
return v_x_3099_;
}
}
LEAN_EXPORT lean_object* l_Squash_mk___boxed(lean_object* v_00_u03b1_3100_, lean_object* v_x_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_Squash_mk(v_00_u03b1_3100_, v_x_3101_);
lean_dec(v_x_3101_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l_Squash_lift___redArg(lean_object* v_s_3103_, lean_object* v_f_3104_){
_start:
{
lean_object* v___x_3105_; 
v___x_3105_ = lean_apply_1(v_f_3104_, v_s_3103_);
return v___x_3105_;
}
}
LEAN_EXPORT lean_object* l_Squash_lift(lean_object* v_00_u03b1_3106_, lean_object* v_00_u03b2_3107_, lean_object* v_inst_3108_, lean_object* v_s_3109_, lean_object* v_f_3110_){
_start:
{
lean_object* v___x_3111_; 
v___x_3111_ = lean_apply_1(v_f_3110_, v_s_3109_);
return v___x_3111_;
}
}
LEAN_EXPORT uint8_t l_Lean_reduceBool(uint8_t v_b_3112_){
_start:
{
return v_b_3112_;
}
}
LEAN_EXPORT lean_object* l_Lean_reduceBool___boxed(lean_object* v_b_3113_){
_start:
{
uint8_t v_b_boxed_3114_; uint8_t v_res_3115_; lean_object* v_r_3116_; 
v_b_boxed_3114_ = lean_unbox(v_b_3113_);
v_res_3115_ = l_Lean_reduceBool(v_b_boxed_3114_);
v_r_3116_ = lean_box(v_res_3115_);
return v_r_3116_;
}
}
LEAN_EXPORT lean_object* l_Lean_reduceNat(lean_object* v_n_3117_){
_start:
{
lean_inc(v_n_3117_);
return v_n_3117_;
}
}
LEAN_EXPORT lean_object* l_Lean_reduceNat___boxed(lean_object* v_n_3118_){
_start:
{
lean_object* v_res_3119_; 
v_res_3119_ = l_Lean_reduceNat(v_n_3118_);
lean_dec(v_n_3118_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* l_Lean_opaqueId___redArg(lean_object* v_x_3120_){
_start:
{
lean_inc(v_x_3120_);
return v_x_3120_;
}
}
LEAN_EXPORT lean_object* l_Lean_opaqueId___redArg___boxed(lean_object* v_x_3121_){
_start:
{
lean_object* v_res_3122_; 
v_res_3122_ = l_Lean_opaqueId___redArg(v_x_3121_);
lean_dec(v_x_3121_);
return v_res_3122_;
}
}
LEAN_EXPORT lean_object* l_Lean_opaqueId(lean_object* v_00_u03b1_3123_, lean_object* v_x_3124_){
_start:
{
lean_inc(v_x_3124_);
return v_x_3124_;
}
}
LEAN_EXPORT lean_object* l_Lean_opaqueId___boxed(lean_object* v_00_u03b1_3125_, lean_object* v_x_3126_){
_start:
{
lean_object* v_res_3127_; 
v_res_3127_ = l_Lean_opaqueId(v_00_u03b1_3125_, v_x_3126_);
lean_dec(v_x_3126_);
return v_res_3127_;
}
}
lean_object* runtime_initialize_Init_SizeOf(uint8_t builtin);
lean_object* runtime_initialize_Init_Tactics(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Core(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_SizeOf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Task_Priority_default = _init_l_Task_Priority_default();
lean_mark_persistent(l_Task_Priority_default);
l_Task_Priority_max = _init_l_Task_Priority_max();
lean_mark_persistent(l_Task_Priority_max);
l_Task_Priority_dedicated = _init_l_Task_Priority_dedicated();
lean_mark_persistent(l_Task_Priority_dedicated);
l_instTransIff = _init_l_instTransIff();
l_instDecidableTrue = _init_l_instDecidableTrue();
l_instDecidableFalse = _init_l_instDecidableFalse();
l_instInhabitedProp = _init_l_instInhabitedProp();
l_instInhabitedNonScalar_default = _init_l_instInhabitedNonScalar_default();
lean_mark_persistent(l_instInhabitedNonScalar_default);
l_instInhabitedNonScalar = _init_l_instInhabitedNonScalar();
lean_mark_persistent(l_instInhabitedNonScalar);
l_instInhabitedPNonScalar_default = _init_l_instInhabitedPNonScalar_default();
lean_mark_persistent(l_instInhabitedPNonScalar_default);
l_instInhabitedPNonScalar = _init_l_instInhabitedPNonScalar();
lean_mark_persistent(l_instInhabitedPNonScalar);
l_instInhabitedTrue = _init_l_instInhabitedTrue();
l_instInhabitedPUnit = _init_l_instInhabitedPUnit();
lean_mark_persistent(l_instInhabitedPUnit);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Core(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_term___x3c_x2d_x3e__ = _init_l_term___x3c_x2d_x3e__();
lean_mark_persistent(l_term___x3c_x2d_x3e__);
l_term___u2194__ = _init_l_term___u2194__();
lean_mark_persistent(l_term___u2194__);
l_term___u2295__ = _init_l_term___u2295__();
lean_mark_persistent(l_term___u2295__);
l_term___u2295_x27__ = _init_l_term___u2295_x27__();
lean_mark_persistent(l_term___u2295_x27__);
l_term___u2248__ = _init_l_term___u2248__();
lean_mark_persistent(l_term___u2248__);
l_term___u2286__ = _init_l_term___u2286__();
lean_mark_persistent(l_term___u2286__);
l_term___u2282__ = _init_l_term___u2282__();
lean_mark_persistent(l_term___u2282__);
l_term___u2287__ = _init_l_term___u2287__();
lean_mark_persistent(l_term___u2287__);
l_term___u2283__ = _init_l_term___u2283__();
lean_mark_persistent(l_term___u2283__);
l_term___u222a__ = _init_l_term___u222a__();
lean_mark_persistent(l_term___u222a__);
l_term___u2229__ = _init_l_term___u2229__();
lean_mark_persistent(l_term___u2229__);
l_term___x5c__ = _init_l_term___x5c__();
lean_mark_persistent(l_term___x5c__);
l_term_x7b_x7d = _init_l_term_x7b_x7d();
lean_mark_persistent(l_term_x7b_x7d);
l_term_u2205 = _init_l_term_u2205();
lean_mark_persistent(l_term_u2205);
l_term___x21_x3d__ = _init_l_term___x21_x3d__();
lean_mark_persistent(l_term___x21_x3d__);
l_term___u2260__ = _init_l_term___u2260__();
lean_mark_persistent(l_term___u2260__);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_SizeOf(uint8_t builtin);
lean_object* initialize_Init_Tactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Core(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_SizeOf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Core(builtin);
}
#ifdef __cplusplus
}
#endif
