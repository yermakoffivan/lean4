// Lean compiler output
// Module: Std.Time.Duration
// Imports: public import Std.Time.Date public import Init.Data.String.Basic
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_div(lean_object*, lean_object*);
lean_object* lean_int_mod(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Std_Time_Nanosecond_instOrdSpan___aux__1___boxed(lean_object*, lean_object*);
lean_object* l_Std_Time_Week_Offset_toDays___boxed(lean_object*);
lean_object* l_Std_Time_Day_Offset_toSeconds___boxed(lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Hour_Offset_toSeconds___boxed(lean_object*);
lean_object* l_Std_Time_PlainTime_toNanoseconds(lean_object*);
lean_object* l_Std_Time_PlainTime_ofNanoseconds(lean_object*);
lean_object* l_Std_Time_Minute_Offset_toSeconds___boxed(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_compareOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Second_instOrdOffset___aux__1___boxed(lean_object*, lean_object*);
lean_object* l_compareLex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_Nanosecond_Span_toOffset(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_Time_Second_instReprOffset___lam__0(lean_object*, lean_object*);
lean_object* l_Std_Time_Nanosecond_instReprOrdinal___lam__0(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprDuration_repr_spec__0(lean_object*);
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__0;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__1;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__2;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__3;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__4;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__5;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__6;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__7;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__8;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__9;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__10;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__11;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__12;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__13;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__14;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__15;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__16;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__17;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__18;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__19;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__20;
static lean_once_cell_t l_Std_Time_instReprDuration_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration_repr___redArg___closed__21;
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_instReprDuration___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration;
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqDuration_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqDuration_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqDuration(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqDuration___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Std_Time_instToStringDuration_leftPad_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_instToStringDuration_leftPad___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instToStringDuration_leftPad___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration_leftPad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration_leftPad___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_instToStringDuration___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instToStringDuration___lam__0___closed__0;
static lean_once_cell_t l_Std_Time_instToStringDuration___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instToStringDuration___lam__0___closed__1;
static lean_once_cell_t l_Std_Time_instToStringDuration___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instToStringDuration___lam__0___closed__2;
static lean_once_cell_t l_Std_Time_instToStringDuration___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instToStringDuration___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration___lam__0(lean_object*);
static lean_once_cell_t l_Std_Time_instToStringDuration___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instToStringDuration___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration;
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_instReprDuration__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprDuration__1___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1;
static lean_once_cell_t l_Std_Time_instInhabitedDuration___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedDuration___closed__0;
static lean_once_cell_t l_Std_Time_instInhabitedDuration___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedDuration___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedDuration;
LEAN_EXPORT lean_object* l_Std_Time_instOfNatDuration(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__1___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_instOrdDuration___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdDuration___closed__0;
static lean_once_cell_t l_Std_Time_instOrdDuration___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdDuration___closed__1;
static lean_once_cell_t l_Std_Time_instOrdDuration___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdDuration___closed__2;
static lean_once_cell_t l_Std_Time_instOrdDuration___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdDuration___closed__3;
static lean_once_cell_t l_Std_Time_instOrdDuration___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdDuration___closed__4;
static lean_once_cell_t l_Std_Time_instOrdDuration___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdDuration___closed__5;
static lean_once_cell_t l_Std_Time_instOrdDuration___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instOrdDuration___closed__6;
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration;
LEAN_EXPORT lean_object* l_Std_Time_Duration_neg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_Duration_ofNanoseconds_spec__1(lean_object*);
static lean_once_cell_t l_Std_Time_Duration_ofNanoseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_ofNanoseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofNanoseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Duration_ofNanoseconds_spec__0(lean_object*);
static lean_once_cell_t l_Std_Time_Duration_ofMillisecond___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_ofMillisecond___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofMillisecond(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofMillisecond___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_Duration_isZero(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_isZero___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toSeconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toSeconds___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Duration_toMilliseconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_toMilliseconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMilliseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMilliseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toNanoseconds(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toNanoseconds___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instLE;
LEAN_EXPORT uint8_t l_Std_Time_Duration_instDecidableLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instDecidableLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instLT;
LEAN_EXPORT uint8_t l_Std_Time_Duration_instDecidableLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instDecidableLt___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_toMinutes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_toMinutes___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMinutes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMinutes___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_Duration_toDays___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_toDays___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_toDays(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_toDays___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_fromComponents(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_fromComponents___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_sub___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMilliseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMilliseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subNanoseconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subNanoseconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addSeconds___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_subSeconds___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_subSeconds___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_subSeconds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subSeconds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMinutes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMinutes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMinutes___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_addHours___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_addHours___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_addHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subHours(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subHours___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addDays___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subDays(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subDays___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_addWeeks___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_addWeeks___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_addWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_addWeeks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subWeeks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_subWeeks___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_instHAddOffset___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHAddOffset___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddOffset;
static lean_once_cell_t l_Std_Time_Duration_instHSubOffset___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHSubOffset___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubOffset;
static lean_once_cell_t l_Std_Time_Duration_instHAddOffset__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHAddOffset__1___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddOffset__1;
static lean_once_cell_t l_Std_Time_Duration_instHSubOffset__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHSubOffset__1___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubOffset__1;
static lean_once_cell_t l_Std_Time_Duration_instHAddOffset__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHAddOffset__2___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddOffset__2;
static lean_once_cell_t l_Std_Time_Duration_instHSubOffset__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHSubOffset__2___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubOffset__2;
static lean_once_cell_t l_Std_Time_Duration_instHAddOffset__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHAddOffset__3___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddOffset__3;
static lean_once_cell_t l_Std_Time_Duration_instHSubOffset__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHSubOffset__3___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubOffset__3;
static lean_once_cell_t l_Std_Time_Duration_instHAddOffset__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHAddOffset__4___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddOffset__4;
static lean_once_cell_t l_Std_Time_Duration_instHSubOffset__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHSubOffset__4___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubOffset__4;
static lean_once_cell_t l_Std_Time_Duration_instHAddOffset__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHAddOffset__5___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddOffset__5;
static lean_once_cell_t l_Std_Time_Duration_instHSubOffset__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHSubOffset__5___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubOffset__5;
static lean_once_cell_t l_Std_Time_Duration_instHAddOffset__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHAddOffset__6___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddOffset__6;
static lean_once_cell_t l_Std_Time_Duration_instHSubOffset__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHSubOffset__6___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubOffset__6;
static lean_once_cell_t l_Std_Time_Duration_instHSub___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHSub___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSub;
static lean_once_cell_t l_Std_Time_Duration_instHAdd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHAdd___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAdd;
static lean_once_cell_t l_Std_Time_Duration_instCoeOffset___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instCoeOffset___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instCoeOffset;
static lean_once_cell_t l_Std_Time_Duration_instCoeOffset__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instCoeOffset__1___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instCoeOffset__1;
static lean_once_cell_t l_Std_Time_Duration_instCoeOffset__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instCoeOffset__2___closed__0;
static lean_once_cell_t l_Std_Time_Duration_instCoeOffset__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instCoeOffset__2___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instCoeOffset__2;
static lean_once_cell_t l_Std_Time_Duration_instCoeOffset__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instCoeOffset__3___closed__0;
static lean_once_cell_t l_Std_Time_Duration_instCoeOffset__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instCoeOffset__3___closed__1;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instCoeOffset__3;
static lean_once_cell_t l_Std_Time_Duration_instCoeOffset__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instCoeOffset__4___closed__0;
static lean_once_cell_t l_Std_Time_Duration_instCoeOffset__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instCoeOffset__4___closed__1;
static lean_once_cell_t l_Std_Time_Duration_instCoeOffset__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instCoeOffset__4___closed__2;
static lean_once_cell_t l_Std_Time_Duration_instCoeOffset__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instCoeOffset__4___closed__3;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instCoeOffset__4;
static lean_once_cell_t l_Std_Time_Duration_instCoeOffset__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instCoeOffset__5___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instCoeOffset__5;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_instHMulInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHMulInt___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_instHMulInt__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHMulInt__1___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_instHAddPlainTime___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHAddPlainTime___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_Duration_instHSubPlainTime___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_Duration_instHSubPlainTime___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_instReprDuration_repr_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__0(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("{ ", 2, 2);
return v___x_3_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__1(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("second", 6, 6);
return v___x_4_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__1, &l_Std_Time_instReprDuration_repr___redArg___closed__1_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__1);
v___x_6_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__2, &l_Std_Time_instReprDuration_repr___redArg___closed__2_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__2);
v___x_8_ = lean_box(0);
v___x_9_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_7_);
return v___x_9_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked(" := ", 4, 4);
return v___x_10_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__4, &l_Std_Time_instReprDuration_repr___redArg___closed__4_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__4);
v___x_12_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__5, &l_Std_Time_instReprDuration_repr___redArg___closed__5_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__5);
v___x_14_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__3, &l_Std_Time_instReprDuration_repr___redArg___closed__3_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__3);
v___x_15_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
return v___x_15_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(10u);
v___x_17_ = lean_nat_to_int(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_mk_string_unchecked(",", 1, 1);
return v___x_18_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__8, &l_Std_Time_instReprDuration_repr___redArg___closed__8_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__8);
v___x_20_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("nano", 4, 4);
return v___x_21_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__10, &l_Std_Time_instReprDuration_repr___redArg___closed__10_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__10);
v___x_23_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_unsigned_to_nat(8u);
v___x_25_ = lean_nat_to_int(v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_mk_string_unchecked("proof", 5, 5);
return v___x_26_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__13, &l_Std_Time_instReprDuration_repr___redArg___closed__13_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__13);
v___x_28_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_mk_string_unchecked("_", 1, 1);
return v___x_29_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__15, &l_Std_Time_instReprDuration_repr___redArg___closed__15_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__15);
v___x_31_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_mk_string_unchecked(" }", 2, 2);
return v___x_32_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__0, &l_Std_Time_instReprDuration_repr___redArg___closed__0_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__0);
v___x_34_ = lean_string_length(v___x_33_);
return v___x_34_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__18, &l_Std_Time_instReprDuration_repr___redArg___closed__18_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__18);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__0, &l_Std_Time_instReprDuration_repr___redArg___closed__0_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__0);
v___x_38_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__17, &l_Std_Time_instReprDuration_repr___redArg___closed__17_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__17);
v___x_40_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr___redArg(lean_object* v_x_41_){
_start:
{
lean_object* v_second_42_; lean_object* v_nano_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_84_; 
v_second_42_ = lean_ctor_get(v_x_41_, 0);
v_nano_43_ = lean_ctor_get(v_x_41_, 1);
v_isSharedCheck_84_ = !lean_is_exclusive(v_x_41_);
if (v_isSharedCheck_84_ == 0)
{
v___x_45_ = v_x_41_;
v_isShared_46_ = v_isSharedCheck_84_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_nano_43_);
lean_inc(v_second_42_);
lean_dec(v_x_41_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_84_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_53_; 
v___x_47_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__5, &l_Std_Time_instReprDuration_repr___redArg___closed__5_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__5);
v___x_48_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__6, &l_Std_Time_instReprDuration_repr___redArg___closed__6_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__6);
v___x_49_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__7, &l_Std_Time_instReprDuration_repr___redArg___closed__7_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__7);
v___x_50_ = lean_unsigned_to_nat(0u);
v___x_51_ = l_Std_Time_Second_instReprOffset___lam__0(v_second_42_, v___x_50_);
lean_dec(v_second_42_);
if (v_isShared_46_ == 0)
{
lean_ctor_set_tag(v___x_45_, 4);
lean_ctor_set(v___x_45_, 1, v___x_51_);
lean_ctor_set(v___x_45_, 0, v___x_49_);
v___x_53_ = v___x_45_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v___x_49_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v___x_51_);
v___x_53_ = v_reuseFailAlloc_83_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
uint8_t v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_54_ = 0;
v___x_55_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_55_, 0, v___x_53_);
lean_ctor_set_uint8(v___x_55_, sizeof(void*)*1, v___x_54_);
v___x_56_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_48_);
lean_ctor_set(v___x_56_, 1, v___x_55_);
v___x_57_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__9, &l_Std_Time_instReprDuration_repr___redArg___closed__9_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__9);
v___x_58_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_56_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = lean_box(1);
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_58_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__11, &l_Std_Time_instReprDuration_repr___redArg___closed__11_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__11);
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_47_);
v___x_64_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__12, &l_Std_Time_instReprDuration_repr___redArg___closed__12_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__12);
v___x_65_ = l_Std_Time_Nanosecond_instReprOrdinal___lam__0(v_nano_43_, v___x_50_);
lean_dec(v_nano_43_);
v___x_66_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_64_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set_uint8(v___x_67_, sizeof(void*)*1, v___x_54_);
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_63_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_57_);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_59_);
v___x_71_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__14, &l_Std_Time_instReprDuration_repr___redArg___closed__14_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__14);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_47_);
v___x_74_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__16, &l_Std_Time_instReprDuration_repr___redArg___closed__16_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__16);
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__19, &l_Std_Time_instReprDuration_repr___redArg___closed__19_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__19);
v___x_77_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__20, &l_Std_Time_instReprDuration_repr___redArg___closed__20_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__20);
v___x_78_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set(v___x_78_, 1, v___x_75_);
v___x_79_ = lean_obj_once(&l_Std_Time_instReprDuration_repr___redArg___closed__21, &l_Std_Time_instReprDuration_repr___redArg___closed__21_once, _init_l_Std_Time_instReprDuration_repr___redArg___closed__21);
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_78_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
v___x_81_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_76_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1, v___x_54_);
return v___x_82_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr(lean_object* v_x_85_, lean_object* v_prec_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Std_Time_instReprDuration_repr___redArg(v_x_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration_repr___boxed(lean_object* v_x_88_, lean_object* v_prec_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Std_Time_instReprDuration_repr(v_x_88_, v_prec_89_);
lean_dec(v_prec_89_);
return v_res_90_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration___closed__0(void){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_alloc_closure((void*)(l_Std_Time_instReprDuration_repr___boxed), 2, 0);
return v___x_91_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lean_obj_once(&l_Std_Time_instReprDuration___closed__0, &l_Std_Time_instReprDuration___closed__0_once, _init_l_Std_Time_instReprDuration___closed__0);
return v___x_92_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqDuration_decEq(lean_object* v_x_93_, lean_object* v_x_94_){
_start:
{
lean_object* v_second_95_; lean_object* v_nano_96_; lean_object* v_second_97_; lean_object* v_nano_98_; uint8_t v___x_99_; 
v_second_95_ = lean_ctor_get(v_x_93_, 0);
v_nano_96_ = lean_ctor_get(v_x_93_, 1);
v_second_97_ = lean_ctor_get(v_x_94_, 0);
v_nano_98_ = lean_ctor_get(v_x_94_, 1);
v___x_99_ = lean_int_dec_eq(v_second_95_, v_second_97_);
if (v___x_99_ == 0)
{
return v___x_99_;
}
else
{
uint8_t v___x_100_; 
v___x_100_ = lean_int_dec_eq(v_nano_96_, v_nano_98_);
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqDuration_decEq___boxed(lean_object* v_x_101_, lean_object* v_x_102_){
_start:
{
uint8_t v_res_103_; lean_object* v_r_104_; 
v_res_103_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_101_, v_x_102_);
lean_dec_ref(v_x_102_);
lean_dec_ref(v_x_101_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_instDecidableEqDuration(lean_object* v_x_105_, lean_object* v_x_106_){
_start:
{
uint8_t v___x_107_; 
v___x_107_ = l_Std_Time_instDecidableEqDuration_decEq(v_x_105_, v_x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instDecidableEqDuration___boxed(lean_object* v_x_108_, lean_object* v_x_109_){
_start:
{
uint8_t v_res_110_; lean_object* v_r_111_; 
v_res_110_ = l_Std_Time_instDecidableEqDuration(v_x_108_, v_x_109_);
lean_dec_ref(v_x_109_);
lean_dec_ref(v_x_108_);
v_r_111_ = lean_box(v_res_110_);
return v_r_111_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Std_Time_instToStringDuration_leftPad_spec__0(lean_object* v_x_112_, lean_object* v_x_113_){
_start:
{
lean_object* v_zero_114_; uint8_t v_isZero_115_; 
v_zero_114_ = lean_unsigned_to_nat(0u);
v_isZero_115_ = lean_nat_dec_eq(v_x_112_, v_zero_114_);
if (v_isZero_115_ == 1)
{
lean_dec(v_x_112_);
return v_x_113_;
}
else
{
uint32_t v___x_116_; lean_object* v_one_117_; lean_object* v_n_118_; lean_object* v___x_119_; 
v___x_116_ = 48;
v_one_117_ = lean_unsigned_to_nat(1u);
v_n_118_ = lean_nat_sub(v_x_112_, v_one_117_);
lean_dec(v_x_112_);
v___x_119_ = lean_string_push(v_x_113_, v___x_116_);
v_x_112_ = v_n_118_;
v_x_113_ = v___x_119_;
goto _start;
}
}
}
static lean_object* _init_l_Std_Time_instToStringDuration_leftPad___closed__0(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_mk_string_unchecked("", 0, 0);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration_leftPad(lean_object* v_n_122_, lean_object* v_s_123_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_124_ = lean_obj_once(&l_Std_Time_instToStringDuration_leftPad___closed__0, &l_Std_Time_instToStringDuration_leftPad___closed__0_once, _init_l_Std_Time_instToStringDuration_leftPad___closed__0);
v___x_125_ = lean_string_length(v_s_123_);
v___x_126_ = lean_nat_sub(v_n_122_, v___x_125_);
v___x_127_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Std_Time_instToStringDuration_leftPad_spec__0(v___x_126_, v___x_124_);
v___x_128_ = lean_string_append(v___x_127_, v_s_123_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration_leftPad___boxed(lean_object* v_n_129_, lean_object* v_s_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Std_Time_instToStringDuration_leftPad(v_n_129_, v_s_130_);
lean_dec_ref(v_s_130_);
lean_dec(v_n_129_);
return v_res_131_;
}
}
static lean_object* _init_l_Std_Time_instToStringDuration___lam__0___closed__0(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_mk_string_unchecked("s", 1, 1);
return v___x_132_;
}
}
static lean_object* _init_l_Std_Time_instToStringDuration___lam__0___closed__1(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = lean_unsigned_to_nat(0u);
v___x_134_ = lean_nat_to_int(v___x_133_);
return v___x_134_;
}
}
static lean_object* _init_l_Std_Time_instToStringDuration___lam__0___closed__2(void){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_mk_string_unchecked(".", 1, 1);
return v___x_135_;
}
}
static lean_object* _init_l_Std_Time_instToStringDuration___lam__0___closed__3(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lean_mk_string_unchecked("-", 1, 1);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instToStringDuration___lam__0(lean_object* v_s_137_){
_start:
{
lean_object* v___y_139_; lean_object* v___y_140_; lean_object* v_second_144_; lean_object* v_nano_145_; lean_object* v_fst_147_; lean_object* v_fst_148_; lean_object* v_snd_149_; lean_object* v___x_160_; uint8_t v___x_161_; 
v_second_144_ = lean_ctor_get(v_s_137_, 0);
lean_inc(v_second_144_);
v_nano_145_ = lean_ctor_get(v_s_137_, 1);
lean_inc(v_nano_145_);
lean_dec_ref(v_s_137_);
v___x_160_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_161_ = lean_int_dec_lt(v___x_160_, v_second_144_);
if (v___x_161_ == 0)
{
uint8_t v___x_162_; 
v___x_162_ = lean_int_dec_lt(v_second_144_, v___x_160_);
if (v___x_162_ == 0)
{
uint8_t v___x_163_; 
v___x_163_ = lean_int_dec_lt(v_nano_145_, v___x_160_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; 
v___x_164_ = lean_obj_once(&l_Std_Time_instToStringDuration_leftPad___closed__0, &l_Std_Time_instToStringDuration_leftPad___closed__0_once, _init_l_Std_Time_instToStringDuration_leftPad___closed__0);
lean_inc(v_nano_145_);
v_fst_147_ = v___x_164_;
v_fst_148_ = v_second_144_;
v_snd_149_ = v_nano_145_;
goto v___jp_146_;
}
else
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_165_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__3, &l_Std_Time_instToStringDuration___lam__0___closed__3_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__3);
v___x_166_ = lean_int_neg(v_second_144_);
lean_dec(v_second_144_);
v___x_167_ = lean_int_neg(v_nano_145_);
v_fst_147_ = v___x_165_;
v_fst_148_ = v___x_166_;
v_snd_149_ = v___x_167_;
goto v___jp_146_;
}
}
else
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__3, &l_Std_Time_instToStringDuration___lam__0___closed__3_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__3);
v___x_169_ = lean_int_neg(v_second_144_);
lean_dec(v_second_144_);
v___x_170_ = lean_int_neg(v_nano_145_);
v_fst_147_ = v___x_168_;
v_fst_148_ = v___x_169_;
v_snd_149_ = v___x_170_;
goto v___jp_146_;
}
}
else
{
lean_object* v___x_171_; 
v___x_171_ = lean_obj_once(&l_Std_Time_instToStringDuration_leftPad___closed__0, &l_Std_Time_instToStringDuration_leftPad___closed__0_once, _init_l_Std_Time_instToStringDuration_leftPad___closed__0);
lean_inc(v_nano_145_);
v_fst_147_ = v___x_171_;
v_fst_148_ = v_second_144_;
v_snd_149_ = v_nano_145_;
goto v___jp_146_;
}
v___jp_138_:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_141_ = lean_string_append(v___y_139_, v___y_140_);
lean_dec_ref(v___y_140_);
v___x_142_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__0, &l_Std_Time_instToStringDuration___lam__0___closed__0_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__0);
v___x_143_ = lean_string_append(v___x_141_, v___x_142_);
return v___x_143_;
}
v___jp_146_:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_150_ = l_Int_repr(v_fst_148_);
lean_dec(v_fst_148_);
lean_inc_ref(v_fst_147_);
v___x_151_ = lean_string_append(v_fst_147_, v___x_150_);
lean_dec_ref(v___x_150_);
v___x_152_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_153_ = lean_int_dec_eq(v_nano_145_, v___x_152_);
lean_dec(v_nano_145_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_154_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__2, &l_Std_Time_instToStringDuration___lam__0___closed__2_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__2);
v___x_155_ = lean_unsigned_to_nat(9u);
v___x_156_ = l_Int_repr(v_snd_149_);
lean_dec(v_snd_149_);
v___x_157_ = l_Std_Time_instToStringDuration_leftPad(v___x_155_, v___x_156_);
lean_dec_ref(v___x_156_);
v___x_158_ = lean_string_append(v___x_154_, v___x_157_);
lean_dec_ref(v___x_157_);
v___y_139_ = v___x_151_;
v___y_140_ = v___x_158_;
goto v___jp_138_;
}
else
{
lean_object* v___x_159_; 
lean_dec(v_snd_149_);
v___x_159_ = lean_obj_once(&l_Std_Time_instToStringDuration_leftPad___closed__0, &l_Std_Time_instToStringDuration_leftPad___closed__0_once, _init_l_Std_Time_instToStringDuration_leftPad___closed__0);
v___y_139_ = v___x_151_;
v___y_140_ = v___x_159_;
goto v___jp_138_;
}
}
}
}
static lean_object* _init_l_Std_Time_instToStringDuration___closed__0(void){
_start:
{
lean_object* v___f_172_; 
v___f_172_ = lean_alloc_closure((void*)(l_Std_Time_instToStringDuration___lam__0), 1, 0);
return v___f_172_;
}
}
static lean_object* _init_l_Std_Time_instToStringDuration(void){
_start:
{
lean_object* v___f_173_; 
v___f_173_ = lean_obj_once(&l_Std_Time_instToStringDuration___closed__0, &l_Std_Time_instToStringDuration___closed__0_once, _init_l_Std_Time_instToStringDuration___closed__0);
return v___f_173_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1___lam__0(lean_object* v_s_174_, lean_object* v___y_175_){
_start:
{
lean_object* v___y_177_; lean_object* v___y_178_; lean_object* v_second_184_; lean_object* v_nano_185_; lean_object* v_fst_187_; lean_object* v_fst_188_; lean_object* v_snd_189_; lean_object* v___x_200_; uint8_t v___x_201_; 
v_second_184_ = lean_ctor_get(v_s_174_, 0);
lean_inc(v_second_184_);
v_nano_185_ = lean_ctor_get(v_s_174_, 1);
lean_inc(v_nano_185_);
lean_dec_ref(v_s_174_);
v___x_200_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_201_ = lean_int_dec_lt(v___x_200_, v_second_184_);
if (v___x_201_ == 0)
{
uint8_t v___x_202_; 
v___x_202_ = lean_int_dec_lt(v_second_184_, v___x_200_);
if (v___x_202_ == 0)
{
uint8_t v___x_203_; 
v___x_203_ = lean_int_dec_lt(v_nano_185_, v___x_200_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; 
v___x_204_ = lean_obj_once(&l_Std_Time_instToStringDuration_leftPad___closed__0, &l_Std_Time_instToStringDuration_leftPad___closed__0_once, _init_l_Std_Time_instToStringDuration_leftPad___closed__0);
lean_inc(v_nano_185_);
v_fst_187_ = v___x_204_;
v_fst_188_ = v_second_184_;
v_snd_189_ = v_nano_185_;
goto v___jp_186_;
}
else
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_205_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__3, &l_Std_Time_instToStringDuration___lam__0___closed__3_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__3);
v___x_206_ = lean_int_neg(v_second_184_);
lean_dec(v_second_184_);
v___x_207_ = lean_int_neg(v_nano_185_);
v_fst_187_ = v___x_205_;
v_fst_188_ = v___x_206_;
v_snd_189_ = v___x_207_;
goto v___jp_186_;
}
}
else
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_208_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__3, &l_Std_Time_instToStringDuration___lam__0___closed__3_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__3);
v___x_209_ = lean_int_neg(v_second_184_);
lean_dec(v_second_184_);
v___x_210_ = lean_int_neg(v_nano_185_);
v_fst_187_ = v___x_208_;
v_fst_188_ = v___x_209_;
v_snd_189_ = v___x_210_;
goto v___jp_186_;
}
}
else
{
lean_object* v___x_211_; 
v___x_211_ = lean_obj_once(&l_Std_Time_instToStringDuration_leftPad___closed__0, &l_Std_Time_instToStringDuration_leftPad___closed__0_once, _init_l_Std_Time_instToStringDuration_leftPad___closed__0);
lean_inc(v_nano_185_);
v_fst_187_ = v___x_211_;
v_fst_188_ = v_second_184_;
v_snd_189_ = v_nano_185_;
goto v___jp_186_;
}
v___jp_176_:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_179_ = lean_string_append(v___y_177_, v___y_178_);
lean_dec_ref(v___y_178_);
v___x_180_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__0, &l_Std_Time_instToStringDuration___lam__0___closed__0_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__0);
v___x_181_ = lean_string_append(v___x_179_, v___x_180_);
v___x_182_ = l_String_quote(v___x_181_);
v___x_183_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
return v___x_183_;
}
v___jp_186_:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_190_ = l_Int_repr(v_fst_188_);
lean_dec(v_fst_188_);
lean_inc_ref(v_fst_187_);
v___x_191_ = lean_string_append(v_fst_187_, v___x_190_);
lean_dec_ref(v___x_190_);
v___x_192_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_193_ = lean_int_dec_eq(v_nano_185_, v___x_192_);
lean_dec(v_nano_185_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_194_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__2, &l_Std_Time_instToStringDuration___lam__0___closed__2_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__2);
v___x_195_ = lean_unsigned_to_nat(9u);
v___x_196_ = l_Int_repr(v_snd_189_);
lean_dec(v_snd_189_);
v___x_197_ = l_Std_Time_instToStringDuration_leftPad(v___x_195_, v___x_196_);
lean_dec_ref(v___x_196_);
v___x_198_ = lean_string_append(v___x_194_, v___x_197_);
lean_dec_ref(v___x_197_);
v___y_177_ = v___x_191_;
v___y_178_ = v___x_198_;
goto v___jp_176_;
}
else
{
lean_object* v___x_199_; 
lean_dec(v_snd_189_);
v___x_199_ = lean_obj_once(&l_Std_Time_instToStringDuration_leftPad___closed__0, &l_Std_Time_instToStringDuration_leftPad___closed__0_once, _init_l_Std_Time_instToStringDuration_leftPad___closed__0);
v___y_177_ = v___x_191_;
v___y_178_ = v___x_199_;
goto v___jp_176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprDuration__1___lam__0___boxed(lean_object* v_s_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Std_Time_instReprDuration__1___lam__0(v_s_212_, v___y_213_);
lean_dec(v___y_213_);
return v_res_214_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration__1___closed__0(void){
_start:
{
lean_object* v___f_215_; 
v___f_215_ = lean_alloc_closure((void*)(l_Std_Time_instReprDuration__1___lam__0___boxed), 2, 0);
return v___f_215_;
}
}
static lean_object* _init_l_Std_Time_instReprDuration__1(void){
_start:
{
lean_object* v___f_216_; 
v___f_216_ = lean_obj_once(&l_Std_Time_instReprDuration__1___closed__0, &l_Std_Time_instReprDuration__1___closed__0_once, _init_l_Std_Time_instReprDuration__1___closed__0);
return v___f_216_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedDuration___closed__0(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_unsigned_to_nat(0u);
v___x_218_ = lean_nat_to_int(v___x_217_);
return v___x_218_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedDuration___closed__1(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_obj_once(&l_Std_Time_instInhabitedDuration___closed__0, &l_Std_Time_instInhabitedDuration___closed__0_once, _init_l_Std_Time_instInhabitedDuration___closed__0);
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set(v___x_220_, 1, v___x_219_);
return v___x_220_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedDuration(void){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_obj_once(&l_Std_Time_instInhabitedDuration___closed__1, &l_Std_Time_instInhabitedDuration___closed__1_once, _init_l_Std_Time_instInhabitedDuration___closed__1);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOfNatDuration(lean_object* v_n_222_){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_223_ = lean_nat_to_int(v_n_222_);
v___x_224_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_223_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__0(lean_object* v_x_226_){
_start:
{
lean_object* v_second_227_; 
v_second_227_ = lean_ctor_get(v_x_226_, 0);
lean_inc(v_second_227_);
return v_second_227_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__0___boxed(lean_object* v_x_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Std_Time_instOrdDuration___lam__0(v_x_228_);
lean_dec_ref(v_x_228_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__1(lean_object* v_x_230_){
_start:
{
lean_object* v_nano_231_; 
v_nano_231_ = lean_ctor_get(v_x_230_, 1);
lean_inc(v_nano_231_);
return v_nano_231_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instOrdDuration___lam__1___boxed(lean_object* v_x_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Std_Time_instOrdDuration___lam__1(v_x_232_);
lean_dec_ref(v_x_232_);
return v_res_233_;
}
}
static lean_object* _init_l_Std_Time_instOrdDuration___closed__0(void){
_start:
{
lean_object* v___f_234_; 
v___f_234_ = lean_alloc_closure((void*)(l_Std_Time_instOrdDuration___lam__0___boxed), 1, 0);
return v___f_234_;
}
}
static lean_object* _init_l_Std_Time_instOrdDuration___closed__1(void){
_start:
{
lean_object* v___f_235_; 
v___f_235_ = lean_alloc_closure((void*)(l_Std_Time_instOrdDuration___lam__1___boxed), 1, 0);
return v___f_235_;
}
}
static lean_object* _init_l_Std_Time_instOrdDuration___closed__2(void){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = lean_alloc_closure((void*)(l_Std_Time_Second_instOrdOffset___aux__1___boxed), 2, 0);
return v___x_236_;
}
}
static lean_object* _init_l_Std_Time_instOrdDuration___closed__3(void){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = lean_alloc_closure((void*)(l_Std_Time_Nanosecond_instOrdSpan___aux__1___boxed), 2, 0);
return v___x_237_;
}
}
static lean_object* _init_l_Std_Time_instOrdDuration___closed__4(void){
_start:
{
lean_object* v___f_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___f_238_ = lean_obj_once(&l_Std_Time_instOrdDuration___closed__0, &l_Std_Time_instOrdDuration___closed__0_once, _init_l_Std_Time_instOrdDuration___closed__0);
v___x_239_ = lean_obj_once(&l_Std_Time_instOrdDuration___closed__2, &l_Std_Time_instOrdDuration___closed__2_once, _init_l_Std_Time_instOrdDuration___closed__2);
v___x_240_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_240_, 0, lean_box(0));
lean_closure_set(v___x_240_, 1, lean_box(0));
lean_closure_set(v___x_240_, 2, v___x_239_);
lean_closure_set(v___x_240_, 3, v___f_238_);
return v___x_240_;
}
}
static lean_object* _init_l_Std_Time_instOrdDuration___closed__5(void){
_start:
{
lean_object* v___f_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___f_241_ = lean_obj_once(&l_Std_Time_instOrdDuration___closed__1, &l_Std_Time_instOrdDuration___closed__1_once, _init_l_Std_Time_instOrdDuration___closed__1);
v___x_242_ = lean_obj_once(&l_Std_Time_instOrdDuration___closed__3, &l_Std_Time_instOrdDuration___closed__3_once, _init_l_Std_Time_instOrdDuration___closed__3);
v___x_243_ = lean_alloc_closure((void*)(l_compareOn___boxed), 6, 4);
lean_closure_set(v___x_243_, 0, lean_box(0));
lean_closure_set(v___x_243_, 1, lean_box(0));
lean_closure_set(v___x_243_, 2, v___x_242_);
lean_closure_set(v___x_243_, 3, v___f_241_);
return v___x_243_;
}
}
static lean_object* _init_l_Std_Time_instOrdDuration___closed__6(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_244_ = lean_obj_once(&l_Std_Time_instOrdDuration___closed__5, &l_Std_Time_instOrdDuration___closed__5_once, _init_l_Std_Time_instOrdDuration___closed__5);
v___x_245_ = lean_obj_once(&l_Std_Time_instOrdDuration___closed__4, &l_Std_Time_instOrdDuration___closed__4_once, _init_l_Std_Time_instOrdDuration___closed__4);
v___x_246_ = lean_alloc_closure((void*)(l_compareLex___boxed), 6, 4);
lean_closure_set(v___x_246_, 0, lean_box(0));
lean_closure_set(v___x_246_, 1, lean_box(0));
lean_closure_set(v___x_246_, 2, v___x_245_);
lean_closure_set(v___x_246_, 3, v___x_244_);
return v___x_246_;
}
}
static lean_object* _init_l_Std_Time_instOrdDuration(void){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lean_obj_once(&l_Std_Time_instOrdDuration___closed__6, &l_Std_Time_instOrdDuration___closed__6_once, _init_l_Std_Time_instOrdDuration___closed__6);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_neg(lean_object* v_duration_248_){
_start:
{
lean_object* v_second_249_; lean_object* v_nano_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_259_; 
v_second_249_ = lean_ctor_get(v_duration_248_, 0);
v_nano_250_ = lean_ctor_get(v_duration_248_, 1);
v_isSharedCheck_259_ = !lean_is_exclusive(v_duration_248_);
if (v_isSharedCheck_259_ == 0)
{
v___x_252_ = v_duration_248_;
v_isShared_253_ = v_isSharedCheck_259_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_nano_250_);
lean_inc(v_second_249_);
lean_dec(v_duration_248_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_259_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_257_; 
v___x_254_ = lean_int_neg(v_second_249_);
lean_dec(v_second_249_);
v___x_255_ = lean_int_neg(v_nano_250_);
lean_dec(v_nano_250_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 1, v___x_255_);
lean_ctor_set(v___x_252_, 0, v___x_254_);
v___x_257_ = v___x_252_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_254_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v___x_255_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofSeconds(lean_object* v_s_260_){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v_s_260_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00Std_Time_Duration_ofNanoseconds_spec__1(lean_object* v_a_263_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = l_Rat_ofInt(v_a_263_);
return v___x_264_;
}
}
static lean_object* _init_l_Std_Time_Duration_ofNanoseconds___closed__0(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_265_ = lean_unsigned_to_nat(1000000000u);
v___x_266_ = lean_nat_to_int(v___x_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object* v_s_267_){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_268_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_269_ = lean_int_div(v_s_267_, v___x_268_);
v___x_270_ = lean_int_mod(v_s_267_, v___x_268_);
v___x_271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_269_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofNanoseconds___boxed(lean_object* v_s_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_Std_Time_Duration_ofNanoseconds(v_s_272_);
lean_dec(v_s_272_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Time_Duration_ofNanoseconds_spec__0(lean_object* v_a_274_){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_nat_to_int(v_a_274_);
v___x_276_ = l_Rat_ofInt(v___x_275_);
return v___x_276_;
}
}
static lean_object* _init_l_Std_Time_Duration_ofMillisecond___closed__0(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = lean_unsigned_to_nat(1000000u);
v___x_278_ = lean_nat_to_int(v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofMillisecond(lean_object* v_s_279_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_280_ = lean_obj_once(&l_Std_Time_Duration_ofMillisecond___closed__0, &l_Std_Time_Duration_ofMillisecond___closed__0_once, _init_l_Std_Time_Duration_ofMillisecond___closed__0);
v___x_281_ = lean_int_mul(v_s_279_, v___x_280_);
v___x_282_ = l_Std_Time_Duration_ofNanoseconds(v___x_281_);
lean_dec(v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_ofMillisecond___boxed(lean_object* v_s_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Std_Time_Duration_ofMillisecond(v_s_283_);
lean_dec(v_s_283_);
return v_res_284_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Duration_isZero(lean_object* v_d_285_){
_start:
{
lean_object* v_second_286_; lean_object* v_nano_287_; lean_object* v___x_288_; uint8_t v___x_289_; 
v_second_286_ = lean_ctor_get(v_d_285_, 0);
v_nano_287_ = lean_ctor_get(v_d_285_, 1);
v___x_288_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_289_ = lean_int_dec_eq(v_second_286_, v___x_288_);
if (v___x_289_ == 0)
{
return v___x_289_;
}
else
{
uint8_t v___x_290_; 
v___x_290_ = lean_int_dec_eq(v_nano_287_, v___x_288_);
return v___x_290_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_isZero___boxed(lean_object* v_d_291_){
_start:
{
uint8_t v_res_292_; lean_object* v_r_293_; 
v_res_292_ = l_Std_Time_Duration_isZero(v_d_291_);
lean_dec_ref(v_d_291_);
v_r_293_ = lean_box(v_res_292_);
return v_r_293_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toSeconds(lean_object* v_duration_294_){
_start:
{
lean_object* v_second_295_; 
v_second_295_ = lean_ctor_get(v_duration_294_, 0);
lean_inc(v_second_295_);
return v_second_295_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toSeconds___boxed(lean_object* v_duration_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Std_Time_Duration_toSeconds(v_duration_296_);
lean_dec_ref(v_duration_296_);
return v_res_297_;
}
}
static lean_object* _init_l_Std_Time_Duration_toMilliseconds___closed__0(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_unsigned_to_nat(1000u);
v___x_299_ = lean_nat_to_int(v___x_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMilliseconds(lean_object* v_duration_300_){
_start:
{
lean_object* v_second_301_; lean_object* v_nano_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v_millis_307_; 
v_second_301_ = lean_ctor_get(v_duration_300_, 0);
v_nano_302_ = lean_ctor_get(v_duration_300_, 1);
v___x_303_ = lean_obj_once(&l_Std_Time_Duration_toMilliseconds___closed__0, &l_Std_Time_Duration_toMilliseconds___closed__0_once, _init_l_Std_Time_Duration_toMilliseconds___closed__0);
v___x_304_ = lean_int_mul(v_second_301_, v___x_303_);
v___x_305_ = lean_obj_once(&l_Std_Time_Duration_ofMillisecond___closed__0, &l_Std_Time_Duration_ofMillisecond___closed__0_once, _init_l_Std_Time_Duration_ofMillisecond___closed__0);
v___x_306_ = lean_int_ediv(v_nano_302_, v___x_305_);
v_millis_307_ = lean_int_add(v___x_304_, v___x_306_);
lean_dec(v___x_306_);
lean_dec(v___x_304_);
return v_millis_307_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMilliseconds___boxed(lean_object* v_duration_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Std_Time_Duration_toMilliseconds(v_duration_308_);
lean_dec_ref(v_duration_308_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toNanoseconds(lean_object* v_duration_310_){
_start:
{
lean_object* v_second_311_; lean_object* v_nano_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v_nanos_315_; 
v_second_311_ = lean_ctor_get(v_duration_310_, 0);
v_nano_312_ = lean_ctor_get(v_duration_310_, 1);
v___x_313_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_314_ = lean_int_mul(v_second_311_, v___x_313_);
v_nanos_315_ = lean_int_add(v___x_314_, v_nano_312_);
lean_dec(v___x_314_);
return v_nanos_315_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toNanoseconds___boxed(lean_object* v_duration_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Std_Time_Duration_toNanoseconds(v_duration_316_);
lean_dec_ref(v_duration_316_);
return v_res_317_;
}
}
static lean_object* _init_l_Std_Time_Duration_instLE(void){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = lean_box(0);
return v___x_318_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Duration_instDecidableLe(lean_object* v_x_319_, lean_object* v_y_320_){
_start:
{
lean_object* v_second_321_; lean_object* v_nano_322_; lean_object* v_second_323_; lean_object* v_nano_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v_nanos_327_; lean_object* v___x_328_; lean_object* v_nanos_329_; uint8_t v___x_330_; 
v_second_321_ = lean_ctor_get(v_x_319_, 0);
v_nano_322_ = lean_ctor_get(v_x_319_, 1);
v_second_323_ = lean_ctor_get(v_y_320_, 0);
v_nano_324_ = lean_ctor_get(v_y_320_, 1);
v___x_325_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_326_ = lean_int_mul(v_second_321_, v___x_325_);
v_nanos_327_ = lean_int_add(v___x_326_, v_nano_322_);
lean_dec(v___x_326_);
v___x_328_ = lean_int_mul(v_second_323_, v___x_325_);
v_nanos_329_ = lean_int_add(v___x_328_, v_nano_324_);
lean_dec(v___x_328_);
v___x_330_ = lean_int_dec_le(v_nanos_327_, v_nanos_329_);
lean_dec(v_nanos_329_);
lean_dec(v_nanos_327_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instDecidableLe___boxed(lean_object* v_x_331_, lean_object* v_y_332_){
_start:
{
uint8_t v_res_333_; lean_object* v_r_334_; 
v_res_333_ = l_Std_Time_Duration_instDecidableLe(v_x_331_, v_y_332_);
lean_dec_ref(v_y_332_);
lean_dec_ref(v_x_331_);
v_r_334_ = lean_box(v_res_333_);
return v_r_334_;
}
}
static lean_object* _init_l_Std_Time_Duration_instLT(void){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_box(0);
return v___x_335_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_Duration_instDecidableLt(lean_object* v_x_336_, lean_object* v_y_337_){
_start:
{
lean_object* v_second_338_; lean_object* v_nano_339_; lean_object* v_second_340_; lean_object* v_nano_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v_nanos_344_; lean_object* v___x_345_; lean_object* v_nanos_346_; uint8_t v___x_347_; 
v_second_338_ = lean_ctor_get(v_x_336_, 0);
v_nano_339_ = lean_ctor_get(v_x_336_, 1);
v_second_340_ = lean_ctor_get(v_y_337_, 0);
v_nano_341_ = lean_ctor_get(v_y_337_, 1);
v___x_342_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_343_ = lean_int_mul(v_second_338_, v___x_342_);
v_nanos_344_ = lean_int_add(v___x_343_, v_nano_339_);
lean_dec(v___x_343_);
v___x_345_ = lean_int_mul(v_second_340_, v___x_342_);
v_nanos_346_ = lean_int_add(v___x_345_, v_nano_341_);
lean_dec(v___x_345_);
v___x_347_ = lean_int_dec_lt(v_nanos_344_, v_nanos_346_);
lean_dec(v_nanos_346_);
lean_dec(v_nanos_344_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instDecidableLt___boxed(lean_object* v_x_348_, lean_object* v_y_349_){
_start:
{
uint8_t v_res_350_; lean_object* v_r_351_; 
v_res_350_ = l_Std_Time_Duration_instDecidableLt(v_x_348_, v_y_349_);
lean_dec_ref(v_y_349_);
lean_dec_ref(v_x_348_);
v_r_351_ = lean_box(v_res_350_);
return v_r_351_;
}
}
static lean_object* _init_l_Std_Time_Duration_toMinutes___closed__0(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_unsigned_to_nat(60u);
v___x_353_ = lean_nat_to_int(v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMinutes(lean_object* v_tm_354_){
_start:
{
lean_object* v_second_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v_second_355_ = lean_ctor_get(v_tm_354_, 0);
v___x_356_ = lean_obj_once(&l_Std_Time_Duration_toMinutes___closed__0, &l_Std_Time_Duration_toMinutes___closed__0_once, _init_l_Std_Time_Duration_toMinutes___closed__0);
v___x_357_ = lean_int_div(v_second_355_, v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toMinutes___boxed(lean_object* v_tm_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Std_Time_Duration_toMinutes(v_tm_358_);
lean_dec_ref(v_tm_358_);
return v_res_359_;
}
}
static lean_object* _init_l_Std_Time_Duration_toDays___closed__0(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = lean_unsigned_to_nat(86400u);
v___x_361_ = lean_nat_to_int(v___x_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toDays(lean_object* v_tm_362_){
_start:
{
lean_object* v_second_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v_second_363_ = lean_ctor_get(v_tm_362_, 0);
v___x_364_ = lean_obj_once(&l_Std_Time_Duration_toDays___closed__0, &l_Std_Time_Duration_toDays___closed__0_once, _init_l_Std_Time_Duration_toDays___closed__0);
v___x_365_ = lean_int_div(v_second_363_, v___x_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_toDays___boxed(lean_object* v_tm_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Std_Time_Duration_toDays(v_tm_366_);
lean_dec_ref(v_tm_366_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_fromComponents(lean_object* v_secs_368_, lean_object* v_nanos_369_){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_370_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_371_ = lean_int_mul(v_secs_368_, v___x_370_);
v___x_372_ = l_Std_Time_Nanosecond_Span_toOffset(v_nanos_369_);
v___x_373_ = lean_int_add(v___x_371_, v___x_372_);
lean_dec(v___x_372_);
lean_dec(v___x_371_);
v___x_374_ = l_Std_Time_Duration_ofNanoseconds(v___x_373_);
lean_dec(v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_fromComponents___boxed(lean_object* v_secs_375_, lean_object* v_nanos_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Std_Time_Duration_fromComponents(v_secs_375_, v_nanos_376_);
lean_dec(v_nanos_376_);
lean_dec(v_secs_375_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_add(lean_object* v_t_u2081_378_, lean_object* v_t_u2082_379_){
_start:
{
lean_object* v_second_380_; lean_object* v_nano_381_; lean_object* v_second_382_; lean_object* v_nano_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v_second_380_ = lean_ctor_get(v_t_u2081_378_, 0);
v_nano_381_ = lean_ctor_get(v_t_u2081_378_, 1);
v_second_382_ = lean_ctor_get(v_t_u2082_379_, 0);
v_nano_383_ = lean_ctor_get(v_t_u2082_379_, 1);
v___x_384_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_385_ = lean_int_mul(v_second_380_, v___x_384_);
v___x_386_ = lean_int_add(v___x_385_, v_nano_381_);
lean_dec(v___x_385_);
v___x_387_ = lean_int_mul(v_second_382_, v___x_384_);
v___x_388_ = lean_int_add(v___x_387_, v_nano_383_);
lean_dec(v___x_387_);
v___x_389_ = lean_int_add(v___x_386_, v___x_388_);
lean_dec(v___x_388_);
lean_dec(v___x_386_);
v___x_390_ = l_Std_Time_Duration_ofNanoseconds(v___x_389_);
lean_dec(v___x_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_add___boxed(lean_object* v_t_u2081_391_, lean_object* v_t_u2082_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Std_Time_Duration_add(v_t_u2081_391_, v_t_u2082_392_);
lean_dec_ref(v_t_u2082_392_);
lean_dec_ref(v_t_u2081_391_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_sub(lean_object* v_t_u2081_394_, lean_object* v_t_u2082_395_){
_start:
{
lean_object* v_second_396_; lean_object* v_nano_397_; lean_object* v_second_398_; lean_object* v_nano_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_second_396_ = lean_ctor_get(v_t_u2082_395_, 0);
v_nano_397_ = lean_ctor_get(v_t_u2082_395_, 1);
v_second_398_ = lean_ctor_get(v_t_u2081_394_, 0);
v_nano_399_ = lean_ctor_get(v_t_u2081_394_, 1);
v___x_400_ = lean_int_neg(v_second_396_);
v___x_401_ = lean_int_neg(v_nano_397_);
v___x_402_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_403_ = lean_int_mul(v_second_398_, v___x_402_);
v___x_404_ = lean_int_add(v___x_403_, v_nano_399_);
lean_dec(v___x_403_);
v___x_405_ = lean_int_mul(v___x_400_, v___x_402_);
lean_dec(v___x_400_);
v___x_406_ = lean_int_add(v___x_405_, v___x_401_);
lean_dec(v___x_401_);
lean_dec(v___x_405_);
v___x_407_ = lean_int_add(v___x_404_, v___x_406_);
lean_dec(v___x_406_);
lean_dec(v___x_404_);
v___x_408_ = l_Std_Time_Duration_ofNanoseconds(v___x_407_);
lean_dec(v___x_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_sub___boxed(lean_object* v_t_u2081_409_, lean_object* v_t_u2082_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Std_Time_Duration_sub(v_t_u2081_409_, v_t_u2082_410_);
lean_dec_ref(v_t_u2082_410_);
lean_dec_ref(v_t_u2081_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addNanoseconds(lean_object* v_t_412_, lean_object* v_s_413_){
_start:
{
lean_object* v_second_414_; lean_object* v_nano_415_; lean_object* v___x_416_; lean_object* v_second_417_; lean_object* v_nano_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v_second_414_ = lean_ctor_get(v_t_412_, 0);
v_nano_415_ = lean_ctor_get(v_t_412_, 1);
v___x_416_ = l_Std_Time_Duration_ofNanoseconds(v_s_413_);
v_second_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_second_417_);
v_nano_418_ = lean_ctor_get(v___x_416_, 1);
lean_inc(v_nano_418_);
lean_dec_ref(v___x_416_);
v___x_419_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_420_ = lean_int_mul(v_second_414_, v___x_419_);
v___x_421_ = lean_int_add(v___x_420_, v_nano_415_);
lean_dec(v___x_420_);
v___x_422_ = lean_int_mul(v_second_417_, v___x_419_);
lean_dec(v_second_417_);
v___x_423_ = lean_int_add(v___x_422_, v_nano_418_);
lean_dec(v_nano_418_);
lean_dec(v___x_422_);
v___x_424_ = lean_int_add(v___x_421_, v___x_423_);
lean_dec(v___x_423_);
lean_dec(v___x_421_);
v___x_425_ = l_Std_Time_Duration_ofNanoseconds(v___x_424_);
lean_dec(v___x_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addNanoseconds___boxed(lean_object* v_t_426_, lean_object* v_s_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Std_Time_Duration_addNanoseconds(v_t_426_, v_s_427_);
lean_dec(v_s_427_);
lean_dec_ref(v_t_426_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMilliseconds(lean_object* v_t_429_, lean_object* v_s_430_){
_start:
{
lean_object* v_second_431_; lean_object* v_nano_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v_second_436_; lean_object* v_nano_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_second_431_ = lean_ctor_get(v_t_429_, 0);
v_nano_432_ = lean_ctor_get(v_t_429_, 1);
v___x_433_ = lean_obj_once(&l_Std_Time_Duration_ofMillisecond___closed__0, &l_Std_Time_Duration_ofMillisecond___closed__0_once, _init_l_Std_Time_Duration_ofMillisecond___closed__0);
v___x_434_ = lean_int_mul(v_s_430_, v___x_433_);
v___x_435_ = l_Std_Time_Duration_ofNanoseconds(v___x_434_);
lean_dec(v___x_434_);
v_second_436_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_second_436_);
v_nano_437_ = lean_ctor_get(v___x_435_, 1);
lean_inc(v_nano_437_);
lean_dec_ref(v___x_435_);
v___x_438_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_439_ = lean_int_mul(v_second_431_, v___x_438_);
v___x_440_ = lean_int_add(v___x_439_, v_nano_432_);
lean_dec(v___x_439_);
v___x_441_ = lean_int_mul(v_second_436_, v___x_438_);
lean_dec(v_second_436_);
v___x_442_ = lean_int_add(v___x_441_, v_nano_437_);
lean_dec(v_nano_437_);
lean_dec(v___x_441_);
v___x_443_ = lean_int_add(v___x_440_, v___x_442_);
lean_dec(v___x_442_);
lean_dec(v___x_440_);
v___x_444_ = l_Std_Time_Duration_ofNanoseconds(v___x_443_);
lean_dec(v___x_443_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMilliseconds___boxed(lean_object* v_t_445_, lean_object* v_s_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Std_Time_Duration_addMilliseconds(v_t_445_, v_s_446_);
lean_dec(v_s_446_);
lean_dec_ref(v_t_445_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMilliseconds(lean_object* v_t_448_, lean_object* v_s_449_){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v_second_453_; lean_object* v_nano_454_; lean_object* v_second_455_; lean_object* v_nano_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_450_ = lean_obj_once(&l_Std_Time_Duration_ofMillisecond___closed__0, &l_Std_Time_Duration_ofMillisecond___closed__0_once, _init_l_Std_Time_Duration_ofMillisecond___closed__0);
v___x_451_ = lean_int_mul(v_s_449_, v___x_450_);
v___x_452_ = l_Std_Time_Duration_ofNanoseconds(v___x_451_);
lean_dec(v___x_451_);
v_second_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_second_453_);
v_nano_454_ = lean_ctor_get(v___x_452_, 1);
lean_inc(v_nano_454_);
lean_dec_ref(v___x_452_);
v_second_455_ = lean_ctor_get(v_t_448_, 0);
v_nano_456_ = lean_ctor_get(v_t_448_, 1);
v___x_457_ = lean_int_neg(v_second_453_);
lean_dec(v_second_453_);
v___x_458_ = lean_int_neg(v_nano_454_);
lean_dec(v_nano_454_);
v___x_459_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_460_ = lean_int_mul(v_second_455_, v___x_459_);
v___x_461_ = lean_int_add(v___x_460_, v_nano_456_);
lean_dec(v___x_460_);
v___x_462_ = lean_int_mul(v___x_457_, v___x_459_);
lean_dec(v___x_457_);
v___x_463_ = lean_int_add(v___x_462_, v___x_458_);
lean_dec(v___x_458_);
lean_dec(v___x_462_);
v___x_464_ = lean_int_add(v___x_461_, v___x_463_);
lean_dec(v___x_463_);
lean_dec(v___x_461_);
v___x_465_ = l_Std_Time_Duration_ofNanoseconds(v___x_464_);
lean_dec(v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMilliseconds___boxed(lean_object* v_t_466_, lean_object* v_s_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Std_Time_Duration_subMilliseconds(v_t_466_, v_s_467_);
lean_dec(v_s_467_);
lean_dec_ref(v_t_466_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subNanoseconds(lean_object* v_t_469_, lean_object* v_s_470_){
_start:
{
lean_object* v___x_471_; lean_object* v_second_472_; lean_object* v_nano_473_; lean_object* v_second_474_; lean_object* v_nano_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_471_ = l_Std_Time_Duration_ofNanoseconds(v_s_470_);
v_second_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_second_472_);
v_nano_473_ = lean_ctor_get(v___x_471_, 1);
lean_inc(v_nano_473_);
lean_dec_ref(v___x_471_);
v_second_474_ = lean_ctor_get(v_t_469_, 0);
v_nano_475_ = lean_ctor_get(v_t_469_, 1);
v___x_476_ = lean_int_neg(v_second_472_);
lean_dec(v_second_472_);
v___x_477_ = lean_int_neg(v_nano_473_);
lean_dec(v_nano_473_);
v___x_478_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_479_ = lean_int_mul(v_second_474_, v___x_478_);
v___x_480_ = lean_int_add(v___x_479_, v_nano_475_);
lean_dec(v___x_479_);
v___x_481_ = lean_int_mul(v___x_476_, v___x_478_);
lean_dec(v___x_476_);
v___x_482_ = lean_int_add(v___x_481_, v___x_477_);
lean_dec(v___x_477_);
lean_dec(v___x_481_);
v___x_483_ = lean_int_add(v___x_480_, v___x_482_);
lean_dec(v___x_482_);
lean_dec(v___x_480_);
v___x_484_ = l_Std_Time_Duration_ofNanoseconds(v___x_483_);
lean_dec(v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subNanoseconds___boxed(lean_object* v_t_485_, lean_object* v_s_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Std_Time_Duration_subNanoseconds(v_t_485_, v_s_486_);
lean_dec(v_s_486_);
lean_dec_ref(v_t_485_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addSeconds(lean_object* v_t_488_, lean_object* v_s_489_){
_start:
{
lean_object* v_second_490_; lean_object* v_nano_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v_second_490_ = lean_ctor_get(v_t_488_, 0);
v_nano_491_ = lean_ctor_get(v_t_488_, 1);
v___x_492_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_493_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_494_ = lean_int_mul(v_second_490_, v___x_493_);
v___x_495_ = lean_int_add(v___x_494_, v_nano_491_);
lean_dec(v___x_494_);
v___x_496_ = lean_int_mul(v_s_489_, v___x_493_);
v___x_497_ = lean_int_add(v___x_496_, v___x_492_);
lean_dec(v___x_496_);
v___x_498_ = lean_int_add(v___x_495_, v___x_497_);
lean_dec(v___x_497_);
lean_dec(v___x_495_);
v___x_499_ = l_Std_Time_Duration_ofNanoseconds(v___x_498_);
lean_dec(v___x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addSeconds___boxed(lean_object* v_t_500_, lean_object* v_s_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Std_Time_Duration_addSeconds(v_t_500_, v_s_501_);
lean_dec(v_s_501_);
lean_dec_ref(v_t_500_);
return v_res_502_;
}
}
static lean_object* _init_l_Std_Time_Duration_subSeconds___closed__0(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_504_ = lean_int_neg(v___x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subSeconds(lean_object* v_t_505_, lean_object* v_s_506_){
_start:
{
lean_object* v_second_507_; lean_object* v_nano_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v_second_507_ = lean_ctor_get(v_t_505_, 0);
v_nano_508_ = lean_ctor_get(v_t_505_, 1);
v___x_509_ = lean_int_neg(v_s_506_);
v___x_510_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_511_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_512_ = lean_int_mul(v_second_507_, v___x_511_);
v___x_513_ = lean_int_add(v___x_512_, v_nano_508_);
lean_dec(v___x_512_);
v___x_514_ = lean_int_mul(v___x_509_, v___x_511_);
lean_dec(v___x_509_);
v___x_515_ = lean_int_add(v___x_514_, v___x_510_);
lean_dec(v___x_514_);
v___x_516_ = lean_int_add(v___x_513_, v___x_515_);
lean_dec(v___x_515_);
lean_dec(v___x_513_);
v___x_517_ = l_Std_Time_Duration_ofNanoseconds(v___x_516_);
lean_dec(v___x_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subSeconds___boxed(lean_object* v_t_518_, lean_object* v_s_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Std_Time_Duration_subSeconds(v_t_518_, v_s_519_);
lean_dec(v_s_519_);
lean_dec_ref(v_t_518_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMinutes(lean_object* v_t_521_, lean_object* v_m_522_){
_start:
{
lean_object* v_second_523_; lean_object* v_nano_524_; lean_object* v___x_525_; lean_object* v_seconds_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v_second_523_ = lean_ctor_get(v_t_521_, 0);
v_nano_524_ = lean_ctor_get(v_t_521_, 1);
v___x_525_ = lean_obj_once(&l_Std_Time_Duration_toMinutes___closed__0, &l_Std_Time_Duration_toMinutes___closed__0_once, _init_l_Std_Time_Duration_toMinutes___closed__0);
v_seconds_526_ = lean_int_mul(v_m_522_, v___x_525_);
v___x_527_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_528_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_529_ = lean_int_mul(v_second_523_, v___x_528_);
v___x_530_ = lean_int_add(v___x_529_, v_nano_524_);
lean_dec(v___x_529_);
v___x_531_ = lean_int_mul(v_seconds_526_, v___x_528_);
lean_dec(v_seconds_526_);
v___x_532_ = lean_int_add(v___x_531_, v___x_527_);
lean_dec(v___x_531_);
v___x_533_ = lean_int_add(v___x_530_, v___x_532_);
lean_dec(v___x_532_);
lean_dec(v___x_530_);
v___x_534_ = l_Std_Time_Duration_ofNanoseconds(v___x_533_);
lean_dec(v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addMinutes___boxed(lean_object* v_t_535_, lean_object* v_m_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Std_Time_Duration_addMinutes(v_t_535_, v_m_536_);
lean_dec(v_m_536_);
lean_dec_ref(v_t_535_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMinutes(lean_object* v_t_538_, lean_object* v_m_539_){
_start:
{
lean_object* v_second_540_; lean_object* v_nano_541_; lean_object* v___x_542_; lean_object* v_seconds_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v_second_540_ = lean_ctor_get(v_t_538_, 0);
v_nano_541_ = lean_ctor_get(v_t_538_, 1);
v___x_542_ = lean_obj_once(&l_Std_Time_Duration_toMinutes___closed__0, &l_Std_Time_Duration_toMinutes___closed__0_once, _init_l_Std_Time_Duration_toMinutes___closed__0);
v_seconds_543_ = lean_int_mul(v_m_539_, v___x_542_);
v___x_544_ = lean_int_neg(v_seconds_543_);
lean_dec(v_seconds_543_);
v___x_545_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_546_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_547_ = lean_int_mul(v_second_540_, v___x_546_);
v___x_548_ = lean_int_add(v___x_547_, v_nano_541_);
lean_dec(v___x_547_);
v___x_549_ = lean_int_mul(v___x_544_, v___x_546_);
lean_dec(v___x_544_);
v___x_550_ = lean_int_add(v___x_549_, v___x_545_);
lean_dec(v___x_549_);
v___x_551_ = lean_int_add(v___x_548_, v___x_550_);
lean_dec(v___x_550_);
lean_dec(v___x_548_);
v___x_552_ = l_Std_Time_Duration_ofNanoseconds(v___x_551_);
lean_dec(v___x_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subMinutes___boxed(lean_object* v_t_553_, lean_object* v_m_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Std_Time_Duration_subMinutes(v_t_553_, v_m_554_);
lean_dec(v_m_554_);
lean_dec_ref(v_t_553_);
return v_res_555_;
}
}
static lean_object* _init_l_Std_Time_Duration_addHours___closed__0(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = lean_unsigned_to_nat(3600u);
v___x_557_ = lean_nat_to_int(v___x_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addHours(lean_object* v_t_558_, lean_object* v_h_559_){
_start:
{
lean_object* v_second_560_; lean_object* v_nano_561_; lean_object* v___x_562_; lean_object* v_seconds_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v_second_560_ = lean_ctor_get(v_t_558_, 0);
v_nano_561_ = lean_ctor_get(v_t_558_, 1);
v___x_562_ = lean_obj_once(&l_Std_Time_Duration_addHours___closed__0, &l_Std_Time_Duration_addHours___closed__0_once, _init_l_Std_Time_Duration_addHours___closed__0);
v_seconds_563_ = lean_int_mul(v_h_559_, v___x_562_);
v___x_564_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_565_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_566_ = lean_int_mul(v_second_560_, v___x_565_);
v___x_567_ = lean_int_add(v___x_566_, v_nano_561_);
lean_dec(v___x_566_);
v___x_568_ = lean_int_mul(v_seconds_563_, v___x_565_);
lean_dec(v_seconds_563_);
v___x_569_ = lean_int_add(v___x_568_, v___x_564_);
lean_dec(v___x_568_);
v___x_570_ = lean_int_add(v___x_567_, v___x_569_);
lean_dec(v___x_569_);
lean_dec(v___x_567_);
v___x_571_ = l_Std_Time_Duration_ofNanoseconds(v___x_570_);
lean_dec(v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addHours___boxed(lean_object* v_t_572_, lean_object* v_h_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Std_Time_Duration_addHours(v_t_572_, v_h_573_);
lean_dec(v_h_573_);
lean_dec_ref(v_t_572_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subHours(lean_object* v_t_575_, lean_object* v_h_576_){
_start:
{
lean_object* v_second_577_; lean_object* v_nano_578_; lean_object* v___x_579_; lean_object* v_seconds_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v_second_577_ = lean_ctor_get(v_t_575_, 0);
v_nano_578_ = lean_ctor_get(v_t_575_, 1);
v___x_579_ = lean_obj_once(&l_Std_Time_Duration_addHours___closed__0, &l_Std_Time_Duration_addHours___closed__0_once, _init_l_Std_Time_Duration_addHours___closed__0);
v_seconds_580_ = lean_int_mul(v_h_576_, v___x_579_);
v___x_581_ = lean_int_neg(v_seconds_580_);
lean_dec(v_seconds_580_);
v___x_582_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_583_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_584_ = lean_int_mul(v_second_577_, v___x_583_);
v___x_585_ = lean_int_add(v___x_584_, v_nano_578_);
lean_dec(v___x_584_);
v___x_586_ = lean_int_mul(v___x_581_, v___x_583_);
lean_dec(v___x_581_);
v___x_587_ = lean_int_add(v___x_586_, v___x_582_);
lean_dec(v___x_586_);
v___x_588_ = lean_int_add(v___x_585_, v___x_587_);
lean_dec(v___x_587_);
lean_dec(v___x_585_);
v___x_589_ = l_Std_Time_Duration_ofNanoseconds(v___x_588_);
lean_dec(v___x_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subHours___boxed(lean_object* v_t_590_, lean_object* v_h_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Std_Time_Duration_subHours(v_t_590_, v_h_591_);
lean_dec(v_h_591_);
lean_dec_ref(v_t_590_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addDays(lean_object* v_t_593_, lean_object* v_d_594_){
_start:
{
lean_object* v_second_595_; lean_object* v_nano_596_; lean_object* v___x_597_; lean_object* v_seconds_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v_second_595_ = lean_ctor_get(v_t_593_, 0);
v_nano_596_ = lean_ctor_get(v_t_593_, 1);
v___x_597_ = lean_obj_once(&l_Std_Time_Duration_toDays___closed__0, &l_Std_Time_Duration_toDays___closed__0_once, _init_l_Std_Time_Duration_toDays___closed__0);
v_seconds_598_ = lean_int_mul(v_d_594_, v___x_597_);
v___x_599_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_600_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_601_ = lean_int_mul(v_second_595_, v___x_600_);
v___x_602_ = lean_int_add(v___x_601_, v_nano_596_);
lean_dec(v___x_601_);
v___x_603_ = lean_int_mul(v_seconds_598_, v___x_600_);
lean_dec(v_seconds_598_);
v___x_604_ = lean_int_add(v___x_603_, v___x_599_);
lean_dec(v___x_603_);
v___x_605_ = lean_int_add(v___x_602_, v___x_604_);
lean_dec(v___x_604_);
lean_dec(v___x_602_);
v___x_606_ = l_Std_Time_Duration_ofNanoseconds(v___x_605_);
lean_dec(v___x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addDays___boxed(lean_object* v_t_607_, lean_object* v_d_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Std_Time_Duration_addDays(v_t_607_, v_d_608_);
lean_dec(v_d_608_);
lean_dec_ref(v_t_607_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subDays(lean_object* v_t_610_, lean_object* v_d_611_){
_start:
{
lean_object* v_second_612_; lean_object* v_nano_613_; lean_object* v___x_614_; lean_object* v_seconds_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v_second_612_ = lean_ctor_get(v_t_610_, 0);
v_nano_613_ = lean_ctor_get(v_t_610_, 1);
v___x_614_ = lean_obj_once(&l_Std_Time_Duration_toDays___closed__0, &l_Std_Time_Duration_toDays___closed__0_once, _init_l_Std_Time_Duration_toDays___closed__0);
v_seconds_615_ = lean_int_mul(v_d_611_, v___x_614_);
v___x_616_ = lean_int_neg(v_seconds_615_);
lean_dec(v_seconds_615_);
v___x_617_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_618_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_619_ = lean_int_mul(v_second_612_, v___x_618_);
v___x_620_ = lean_int_add(v___x_619_, v_nano_613_);
lean_dec(v___x_619_);
v___x_621_ = lean_int_mul(v___x_616_, v___x_618_);
lean_dec(v___x_616_);
v___x_622_ = lean_int_add(v___x_621_, v___x_617_);
lean_dec(v___x_621_);
v___x_623_ = lean_int_add(v___x_620_, v___x_622_);
lean_dec(v___x_622_);
lean_dec(v___x_620_);
v___x_624_ = l_Std_Time_Duration_ofNanoseconds(v___x_623_);
lean_dec(v___x_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subDays___boxed(lean_object* v_t_625_, lean_object* v_d_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Std_Time_Duration_subDays(v_t_625_, v_d_626_);
lean_dec(v_d_626_);
lean_dec_ref(v_t_625_);
return v_res_627_;
}
}
static lean_object* _init_l_Std_Time_Duration_addWeeks___closed__0(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = lean_unsigned_to_nat(604800u);
v___x_629_ = lean_nat_to_int(v___x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addWeeks(lean_object* v_t_630_, lean_object* v_w_631_){
_start:
{
lean_object* v_second_632_; lean_object* v_nano_633_; lean_object* v___x_634_; lean_object* v_seconds_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v_second_632_ = lean_ctor_get(v_t_630_, 0);
v_nano_633_ = lean_ctor_get(v_t_630_, 1);
v___x_634_ = lean_obj_once(&l_Std_Time_Duration_addWeeks___closed__0, &l_Std_Time_Duration_addWeeks___closed__0_once, _init_l_Std_Time_Duration_addWeeks___closed__0);
v_seconds_635_ = lean_int_mul(v_w_631_, v___x_634_);
v___x_636_ = lean_obj_once(&l_Std_Time_instToStringDuration___lam__0___closed__1, &l_Std_Time_instToStringDuration___lam__0___closed__1_once, _init_l_Std_Time_instToStringDuration___lam__0___closed__1);
v___x_637_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_638_ = lean_int_mul(v_second_632_, v___x_637_);
v___x_639_ = lean_int_add(v___x_638_, v_nano_633_);
lean_dec(v___x_638_);
v___x_640_ = lean_int_mul(v_seconds_635_, v___x_637_);
lean_dec(v_seconds_635_);
v___x_641_ = lean_int_add(v___x_640_, v___x_636_);
lean_dec(v___x_640_);
v___x_642_ = lean_int_add(v___x_639_, v___x_641_);
lean_dec(v___x_641_);
lean_dec(v___x_639_);
v___x_643_ = l_Std_Time_Duration_ofNanoseconds(v___x_642_);
lean_dec(v___x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_addWeeks___boxed(lean_object* v_t_644_, lean_object* v_w_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Std_Time_Duration_addWeeks(v_t_644_, v_w_645_);
lean_dec(v_w_645_);
lean_dec_ref(v_t_644_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subWeeks(lean_object* v_t_647_, lean_object* v_w_648_){
_start:
{
lean_object* v_second_649_; lean_object* v_nano_650_; lean_object* v___x_651_; lean_object* v_seconds_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v_second_649_ = lean_ctor_get(v_t_647_, 0);
v_nano_650_ = lean_ctor_get(v_t_647_, 1);
v___x_651_ = lean_obj_once(&l_Std_Time_Duration_addWeeks___closed__0, &l_Std_Time_Duration_addWeeks___closed__0_once, _init_l_Std_Time_Duration_addWeeks___closed__0);
v_seconds_652_ = lean_int_mul(v_w_648_, v___x_651_);
v___x_653_ = lean_int_neg(v_seconds_652_);
lean_dec(v_seconds_652_);
v___x_654_ = lean_obj_once(&l_Std_Time_Duration_subSeconds___closed__0, &l_Std_Time_Duration_subSeconds___closed__0_once, _init_l_Std_Time_Duration_subSeconds___closed__0);
v___x_655_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_656_ = lean_int_mul(v_second_649_, v___x_655_);
v___x_657_ = lean_int_add(v___x_656_, v_nano_650_);
lean_dec(v___x_656_);
v___x_658_ = lean_int_mul(v___x_653_, v___x_655_);
lean_dec(v___x_653_);
v___x_659_ = lean_int_add(v___x_658_, v___x_654_);
lean_dec(v___x_658_);
v___x_660_ = lean_int_add(v___x_657_, v___x_659_);
lean_dec(v___x_659_);
lean_dec(v___x_657_);
v___x_661_ = l_Std_Time_Duration_ofNanoseconds(v___x_660_);
lean_dec(v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_subWeeks___boxed(lean_object* v_t_662_, lean_object* v_w_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_Std_Time_Duration_subWeeks(v_t_662_, v_w_663_);
lean_dec(v_w_663_);
lean_dec_ref(v_t_662_);
return v_res_664_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset___closed__0(void){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = lean_alloc_closure((void*)(l_Std_Time_Duration_addDays___boxed), 2, 0);
return v___x_665_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset(void){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = lean_obj_once(&l_Std_Time_Duration_instHAddOffset___closed__0, &l_Std_Time_Duration_instHAddOffset___closed__0_once, _init_l_Std_Time_Duration_instHAddOffset___closed__0);
return v___x_666_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset___closed__0(void){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = lean_alloc_closure((void*)(l_Std_Time_Duration_subDays___boxed), 2, 0);
return v___x_667_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset(void){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = lean_obj_once(&l_Std_Time_Duration_instHSubOffset___closed__0, &l_Std_Time_Duration_instHSubOffset___closed__0_once, _init_l_Std_Time_Duration_instHSubOffset___closed__0);
return v___x_668_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset__1___closed__0(void){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = lean_alloc_closure((void*)(l_Std_Time_Duration_addWeeks___boxed), 2, 0);
return v___x_669_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset__1(void){
_start:
{
lean_object* v___x_670_; 
v___x_670_ = lean_obj_once(&l_Std_Time_Duration_instHAddOffset__1___closed__0, &l_Std_Time_Duration_instHAddOffset__1___closed__0_once, _init_l_Std_Time_Duration_instHAddOffset__1___closed__0);
return v___x_670_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset__1___closed__0(void){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = lean_alloc_closure((void*)(l_Std_Time_Duration_subWeeks___boxed), 2, 0);
return v___x_671_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset__1(void){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = lean_obj_once(&l_Std_Time_Duration_instHSubOffset__1___closed__0, &l_Std_Time_Duration_instHSubOffset__1___closed__0_once, _init_l_Std_Time_Duration_instHSubOffset__1___closed__0);
return v___x_672_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset__2___closed__0(void){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = lean_alloc_closure((void*)(l_Std_Time_Duration_addHours___boxed), 2, 0);
return v___x_673_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset__2(void){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = lean_obj_once(&l_Std_Time_Duration_instHAddOffset__2___closed__0, &l_Std_Time_Duration_instHAddOffset__2___closed__0_once, _init_l_Std_Time_Duration_instHAddOffset__2___closed__0);
return v___x_674_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset__2___closed__0(void){
_start:
{
lean_object* v___x_675_; 
v___x_675_ = lean_alloc_closure((void*)(l_Std_Time_Duration_subHours___boxed), 2, 0);
return v___x_675_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset__2(void){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = lean_obj_once(&l_Std_Time_Duration_instHSubOffset__2___closed__0, &l_Std_Time_Duration_instHSubOffset__2___closed__0_once, _init_l_Std_Time_Duration_instHSubOffset__2___closed__0);
return v___x_676_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset__3___closed__0(void){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = lean_alloc_closure((void*)(l_Std_Time_Duration_addMinutes___boxed), 2, 0);
return v___x_677_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset__3(void){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = lean_obj_once(&l_Std_Time_Duration_instHAddOffset__3___closed__0, &l_Std_Time_Duration_instHAddOffset__3___closed__0_once, _init_l_Std_Time_Duration_instHAddOffset__3___closed__0);
return v___x_678_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset__3___closed__0(void){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = lean_alloc_closure((void*)(l_Std_Time_Duration_subMinutes___boxed), 2, 0);
return v___x_679_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset__3(void){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = lean_obj_once(&l_Std_Time_Duration_instHSubOffset__3___closed__0, &l_Std_Time_Duration_instHSubOffset__3___closed__0_once, _init_l_Std_Time_Duration_instHSubOffset__3___closed__0);
return v___x_680_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset__4___closed__0(void){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = lean_alloc_closure((void*)(l_Std_Time_Duration_addSeconds___boxed), 2, 0);
return v___x_681_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset__4(void){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = lean_obj_once(&l_Std_Time_Duration_instHAddOffset__4___closed__0, &l_Std_Time_Duration_instHAddOffset__4___closed__0_once, _init_l_Std_Time_Duration_instHAddOffset__4___closed__0);
return v___x_682_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset__4___closed__0(void){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = lean_alloc_closure((void*)(l_Std_Time_Duration_subSeconds___boxed), 2, 0);
return v___x_683_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset__4(void){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = lean_obj_once(&l_Std_Time_Duration_instHSubOffset__4___closed__0, &l_Std_Time_Duration_instHSubOffset__4___closed__0_once, _init_l_Std_Time_Duration_instHSubOffset__4___closed__0);
return v___x_684_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset__5___closed__0(void){
_start:
{
lean_object* v___x_685_; 
v___x_685_ = lean_alloc_closure((void*)(l_Std_Time_Duration_addNanoseconds___boxed), 2, 0);
return v___x_685_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset__5(void){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = lean_obj_once(&l_Std_Time_Duration_instHAddOffset__5___closed__0, &l_Std_Time_Duration_instHAddOffset__5___closed__0_once, _init_l_Std_Time_Duration_instHAddOffset__5___closed__0);
return v___x_686_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset__5___closed__0(void){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = lean_alloc_closure((void*)(l_Std_Time_Duration_subNanoseconds___boxed), 2, 0);
return v___x_687_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset__5(void){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = lean_obj_once(&l_Std_Time_Duration_instHSubOffset__5___closed__0, &l_Std_Time_Duration_instHSubOffset__5___closed__0_once, _init_l_Std_Time_Duration_instHSubOffset__5___closed__0);
return v___x_688_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset__6___closed__0(void){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = lean_alloc_closure((void*)(l_Std_Time_Duration_addMilliseconds___boxed), 2, 0);
return v___x_689_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddOffset__6(void){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = lean_obj_once(&l_Std_Time_Duration_instHAddOffset__6___closed__0, &l_Std_Time_Duration_instHAddOffset__6___closed__0_once, _init_l_Std_Time_Duration_instHAddOffset__6___closed__0);
return v___x_690_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset__6___closed__0(void){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = lean_alloc_closure((void*)(l_Std_Time_Duration_subMilliseconds___boxed), 2, 0);
return v___x_691_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubOffset__6(void){
_start:
{
lean_object* v___x_692_; 
v___x_692_ = lean_obj_once(&l_Std_Time_Duration_instHSubOffset__6___closed__0, &l_Std_Time_Duration_instHSubOffset__6___closed__0_once, _init_l_Std_Time_Duration_instHSubOffset__6___closed__0);
return v___x_692_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSub___closed__0(void){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = lean_alloc_closure((void*)(l_Std_Time_Duration_sub___boxed), 2, 0);
return v___x_693_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSub(void){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = lean_obj_once(&l_Std_Time_Duration_instHSub___closed__0, &l_Std_Time_Duration_instHSub___closed__0_once, _init_l_Std_Time_Duration_instHSub___closed__0);
return v___x_694_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAdd___closed__0(void){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = lean_alloc_closure((void*)(l_Std_Time_Duration_add___boxed), 2, 0);
return v___x_695_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAdd(void){
_start:
{
lean_object* v___x_696_; 
v___x_696_ = lean_obj_once(&l_Std_Time_Duration_instHAdd___closed__0, &l_Std_Time_Duration_instHAdd___closed__0_once, _init_l_Std_Time_Duration_instHAdd___closed__0);
return v___x_696_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset___closed__0(void){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = lean_alloc_closure((void*)(l_Std_Time_Duration_ofNanoseconds___boxed), 1, 0);
return v___x_697_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset(void){
_start:
{
lean_object* v___x_698_; 
v___x_698_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset___closed__0, &l_Std_Time_Duration_instCoeOffset___closed__0_once, _init_l_Std_Time_Duration_instCoeOffset___closed__0);
return v___x_698_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__1___closed__0(void){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = lean_alloc_closure((void*)(l_Std_Time_Duration_ofSeconds), 1, 0);
return v___x_699_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__1(void){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__1___closed__0, &l_Std_Time_Duration_instCoeOffset__1___closed__0_once, _init_l_Std_Time_Duration_instCoeOffset__1___closed__0);
return v___x_700_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__2___closed__0(void){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = lean_alloc_closure((void*)(l_Std_Time_Minute_Offset_toSeconds___boxed), 1, 0);
return v___x_701_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__2___closed__1(void){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_702_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__2___closed__0, &l_Std_Time_Duration_instCoeOffset__2___closed__0_once, _init_l_Std_Time_Duration_instCoeOffset__2___closed__0);
v___x_703_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__1___closed__0, &l_Std_Time_Duration_instCoeOffset__1___closed__0_once, _init_l_Std_Time_Duration_instCoeOffset__1___closed__0);
v___x_704_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_704_, 0, lean_box(0));
lean_closure_set(v___x_704_, 1, lean_box(0));
lean_closure_set(v___x_704_, 2, lean_box(0));
lean_closure_set(v___x_704_, 3, v___x_703_);
lean_closure_set(v___x_704_, 4, v___x_702_);
return v___x_704_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__2(void){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__2___closed__1, &l_Std_Time_Duration_instCoeOffset__2___closed__1_once, _init_l_Std_Time_Duration_instCoeOffset__2___closed__1);
return v___x_705_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__3___closed__0(void){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = lean_alloc_closure((void*)(l_Std_Time_Hour_Offset_toSeconds___boxed), 1, 0);
return v___x_706_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__3___closed__1(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_707_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__3___closed__0, &l_Std_Time_Duration_instCoeOffset__3___closed__0_once, _init_l_Std_Time_Duration_instCoeOffset__3___closed__0);
v___x_708_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__1___closed__0, &l_Std_Time_Duration_instCoeOffset__1___closed__0_once, _init_l_Std_Time_Duration_instCoeOffset__1___closed__0);
v___x_709_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_709_, 0, lean_box(0));
lean_closure_set(v___x_709_, 1, lean_box(0));
lean_closure_set(v___x_709_, 2, lean_box(0));
lean_closure_set(v___x_709_, 3, v___x_708_);
lean_closure_set(v___x_709_, 4, v___x_707_);
return v___x_709_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__3(void){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__3___closed__1, &l_Std_Time_Duration_instCoeOffset__3___closed__1_once, _init_l_Std_Time_Duration_instCoeOffset__3___closed__1);
return v___x_710_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__4___closed__0(void){
_start:
{
lean_object* v___x_711_; 
v___x_711_ = lean_alloc_closure((void*)(l_Std_Time_Day_Offset_toSeconds___boxed), 1, 0);
return v___x_711_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__4___closed__1(void){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = lean_alloc_closure((void*)(l_Std_Time_Week_Offset_toDays___boxed), 1, 0);
return v___x_712_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__4___closed__2(void){
_start:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_713_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__4___closed__1, &l_Std_Time_Duration_instCoeOffset__4___closed__1_once, _init_l_Std_Time_Duration_instCoeOffset__4___closed__1);
v___x_714_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__4___closed__0, &l_Std_Time_Duration_instCoeOffset__4___closed__0_once, _init_l_Std_Time_Duration_instCoeOffset__4___closed__0);
v___x_715_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_715_, 0, lean_box(0));
lean_closure_set(v___x_715_, 1, lean_box(0));
lean_closure_set(v___x_715_, 2, lean_box(0));
lean_closure_set(v___x_715_, 3, v___x_714_);
lean_closure_set(v___x_715_, 4, v___x_713_);
return v___x_715_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__4___closed__3(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_716_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__4___closed__2, &l_Std_Time_Duration_instCoeOffset__4___closed__2_once, _init_l_Std_Time_Duration_instCoeOffset__4___closed__2);
v___x_717_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__1___closed__0, &l_Std_Time_Duration_instCoeOffset__1___closed__0_once, _init_l_Std_Time_Duration_instCoeOffset__1___closed__0);
v___x_718_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_718_, 0, lean_box(0));
lean_closure_set(v___x_718_, 1, lean_box(0));
lean_closure_set(v___x_718_, 2, lean_box(0));
lean_closure_set(v___x_718_, 3, v___x_717_);
lean_closure_set(v___x_718_, 4, v___x_716_);
return v___x_718_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__4(void){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__4___closed__3, &l_Std_Time_Duration_instCoeOffset__4___closed__3_once, _init_l_Std_Time_Duration_instCoeOffset__4___closed__3);
return v___x_719_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__5___closed__0(void){
_start:
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_720_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__4___closed__0, &l_Std_Time_Duration_instCoeOffset__4___closed__0_once, _init_l_Std_Time_Duration_instCoeOffset__4___closed__0);
v___x_721_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__1___closed__0, &l_Std_Time_Duration_instCoeOffset__1___closed__0_once, _init_l_Std_Time_Duration_instCoeOffset__1___closed__0);
v___x_722_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_722_, 0, lean_box(0));
lean_closure_set(v___x_722_, 1, lean_box(0));
lean_closure_set(v___x_722_, 2, lean_box(0));
lean_closure_set(v___x_722_, 3, v___x_721_);
lean_closure_set(v___x_722_, 4, v___x_720_);
return v___x_722_;
}
}
static lean_object* _init_l_Std_Time_Duration_instCoeOffset__5(void){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = lean_obj_once(&l_Std_Time_Duration_instCoeOffset__5___closed__0, &l_Std_Time_Duration_instCoeOffset__5___closed__0_once, _init_l_Std_Time_Duration_instCoeOffset__5___closed__0);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt___lam__0(lean_object* v_i_724_, lean_object* v_d_725_){
_start:
{
lean_object* v_second_726_; lean_object* v_nano_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v_second_726_ = lean_ctor_get(v_d_725_, 0);
v_nano_727_ = lean_ctor_get(v_d_725_, 1);
v___x_728_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_729_ = lean_int_mul(v_second_726_, v___x_728_);
v___x_730_ = lean_int_add(v___x_729_, v_nano_727_);
lean_dec(v___x_729_);
v___x_731_ = lean_int_mul(v___x_730_, v_i_724_);
lean_dec(v___x_730_);
v___x_732_ = l_Std_Time_Duration_ofNanoseconds(v___x_731_);
lean_dec(v___x_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt___lam__0___boxed(lean_object* v_i_733_, lean_object* v_d_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Std_Time_Duration_instHMulInt___lam__0(v_i_733_, v_d_734_);
lean_dec_ref(v_d_734_);
lean_dec(v_i_733_);
return v_res_735_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHMulInt___closed__0(void){
_start:
{
lean_object* v___f_736_; 
v___f_736_ = lean_alloc_closure((void*)(l_Std_Time_Duration_instHMulInt___lam__0___boxed), 2, 0);
return v___f_736_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHMulInt(void){
_start:
{
lean_object* v___f_737_; 
v___f_737_ = lean_obj_once(&l_Std_Time_Duration_instHMulInt___closed__0, &l_Std_Time_Duration_instHMulInt___closed__0_once, _init_l_Std_Time_Duration_instHMulInt___closed__0);
return v___f_737_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1___lam__0(lean_object* v_d_738_, lean_object* v_i_739_){
_start:
{
lean_object* v_second_740_; lean_object* v_nano_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v_second_740_ = lean_ctor_get(v_d_738_, 0);
v_nano_741_ = lean_ctor_get(v_d_738_, 1);
v___x_742_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_743_ = lean_int_mul(v_second_740_, v___x_742_);
v___x_744_ = lean_int_add(v___x_743_, v_nano_741_);
lean_dec(v___x_743_);
v___x_745_ = lean_int_mul(v___x_744_, v_i_739_);
lean_dec(v___x_744_);
v___x_746_ = l_Std_Time_Duration_ofNanoseconds(v___x_745_);
lean_dec(v___x_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHMulInt__1___lam__0___boxed(lean_object* v_d_747_, lean_object* v_i_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Std_Time_Duration_instHMulInt__1___lam__0(v_d_747_, v_i_748_);
lean_dec(v_i_748_);
lean_dec_ref(v_d_747_);
return v_res_749_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHMulInt__1___closed__0(void){
_start:
{
lean_object* v___f_750_; 
v___f_750_ = lean_alloc_closure((void*)(l_Std_Time_Duration_instHMulInt__1___lam__0___boxed), 2, 0);
return v___f_750_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHMulInt__1(void){
_start:
{
lean_object* v___f_751_; 
v___f_751_ = lean_obj_once(&l_Std_Time_Duration_instHMulInt__1___closed__0, &l_Std_Time_Duration_instHMulInt__1___closed__0_once, _init_l_Std_Time_Duration_instHMulInt__1___closed__0);
return v___f_751_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime___lam__0(lean_object* v_pt_752_, lean_object* v_d_753_){
_start:
{
lean_object* v_second_754_; lean_object* v_nano_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v_second_754_ = lean_ctor_get(v_d_753_, 0);
v_nano_755_ = lean_ctor_get(v_d_753_, 1);
v___x_756_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_757_ = lean_int_mul(v_second_754_, v___x_756_);
v___x_758_ = lean_int_add(v___x_757_, v_nano_755_);
lean_dec(v___x_757_);
v___x_759_ = l_Std_Time_PlainTime_toNanoseconds(v_pt_752_);
v___x_760_ = lean_int_add(v___x_758_, v___x_759_);
lean_dec(v___x_759_);
lean_dec(v___x_758_);
v___x_761_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_760_);
lean_dec(v___x_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHAddPlainTime___lam__0___boxed(lean_object* v_pt_762_, lean_object* v_d_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Std_Time_Duration_instHAddPlainTime___lam__0(v_pt_762_, v_d_763_);
lean_dec_ref(v_d_763_);
lean_dec_ref(v_pt_762_);
return v_res_764_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddPlainTime___closed__0(void){
_start:
{
lean_object* v___f_765_; 
v___f_765_ = lean_alloc_closure((void*)(l_Std_Time_Duration_instHAddPlainTime___lam__0___boxed), 2, 0);
return v___f_765_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHAddPlainTime(void){
_start:
{
lean_object* v___f_766_; 
v___f_766_ = lean_obj_once(&l_Std_Time_Duration_instHAddPlainTime___closed__0, &l_Std_Time_Duration_instHAddPlainTime___closed__0_once, _init_l_Std_Time_Duration_instHAddPlainTime___closed__0);
return v___f_766_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime___lam__0(lean_object* v_pt_767_, lean_object* v_d_768_){
_start:
{
lean_object* v_second_769_; lean_object* v_nano_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v_second_769_ = lean_ctor_get(v_d_768_, 0);
v_nano_770_ = lean_ctor_get(v_d_768_, 1);
v___x_771_ = l_Std_Time_PlainTime_toNanoseconds(v_pt_767_);
v___x_772_ = lean_obj_once(&l_Std_Time_Duration_ofNanoseconds___closed__0, &l_Std_Time_Duration_ofNanoseconds___closed__0_once, _init_l_Std_Time_Duration_ofNanoseconds___closed__0);
v___x_773_ = lean_int_mul(v_second_769_, v___x_772_);
v___x_774_ = lean_int_add(v___x_773_, v_nano_770_);
lean_dec(v___x_773_);
v___x_775_ = lean_int_sub(v___x_771_, v___x_774_);
lean_dec(v___x_774_);
lean_dec(v___x_771_);
v___x_776_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_775_);
lean_dec(v___x_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Duration_instHSubPlainTime___lam__0___boxed(lean_object* v_pt_777_, lean_object* v_d_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Std_Time_Duration_instHSubPlainTime___lam__0(v_pt_777_, v_d_778_);
lean_dec_ref(v_d_778_);
lean_dec_ref(v_pt_777_);
return v_res_779_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubPlainTime___closed__0(void){
_start:
{
lean_object* v___f_780_; 
v___f_780_ = lean_alloc_closure((void*)(l_Std_Time_Duration_instHSubPlainTime___lam__0___boxed), 2, 0);
return v___f_780_;
}
}
static lean_object* _init_l_Std_Time_Duration_instHSubPlainTime(void){
_start:
{
lean_object* v___f_781_; 
v___f_781_ = lean_obj_once(&l_Std_Time_Duration_instHSubPlainTime___closed__0, &l_Std_Time_Duration_instHSubPlainTime___closed__0_once, _init_l_Std_Time_Duration_instHSubPlainTime___closed__0);
return v___f_781_;
}
}
lean_object* runtime_initialize_Std_Time_Date(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Duration(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Time_Date(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instReprDuration = _init_l_Std_Time_instReprDuration();
lean_mark_persistent(l_Std_Time_instReprDuration);
l_Std_Time_instToStringDuration = _init_l_Std_Time_instToStringDuration();
lean_mark_persistent(l_Std_Time_instToStringDuration);
l_Std_Time_instReprDuration__1 = _init_l_Std_Time_instReprDuration__1();
lean_mark_persistent(l_Std_Time_instReprDuration__1);
l_Std_Time_instInhabitedDuration = _init_l_Std_Time_instInhabitedDuration();
lean_mark_persistent(l_Std_Time_instInhabitedDuration);
l_Std_Time_instOrdDuration = _init_l_Std_Time_instOrdDuration();
lean_mark_persistent(l_Std_Time_instOrdDuration);
l_Std_Time_Duration_instLE = _init_l_Std_Time_Duration_instLE();
lean_mark_persistent(l_Std_Time_Duration_instLE);
l_Std_Time_Duration_instLT = _init_l_Std_Time_Duration_instLT();
lean_mark_persistent(l_Std_Time_Duration_instLT);
l_Std_Time_Duration_instHAddOffset = _init_l_Std_Time_Duration_instHAddOffset();
lean_mark_persistent(l_Std_Time_Duration_instHAddOffset);
l_Std_Time_Duration_instHSubOffset = _init_l_Std_Time_Duration_instHSubOffset();
lean_mark_persistent(l_Std_Time_Duration_instHSubOffset);
l_Std_Time_Duration_instHAddOffset__1 = _init_l_Std_Time_Duration_instHAddOffset__1();
lean_mark_persistent(l_Std_Time_Duration_instHAddOffset__1);
l_Std_Time_Duration_instHSubOffset__1 = _init_l_Std_Time_Duration_instHSubOffset__1();
lean_mark_persistent(l_Std_Time_Duration_instHSubOffset__1);
l_Std_Time_Duration_instHAddOffset__2 = _init_l_Std_Time_Duration_instHAddOffset__2();
lean_mark_persistent(l_Std_Time_Duration_instHAddOffset__2);
l_Std_Time_Duration_instHSubOffset__2 = _init_l_Std_Time_Duration_instHSubOffset__2();
lean_mark_persistent(l_Std_Time_Duration_instHSubOffset__2);
l_Std_Time_Duration_instHAddOffset__3 = _init_l_Std_Time_Duration_instHAddOffset__3();
lean_mark_persistent(l_Std_Time_Duration_instHAddOffset__3);
l_Std_Time_Duration_instHSubOffset__3 = _init_l_Std_Time_Duration_instHSubOffset__3();
lean_mark_persistent(l_Std_Time_Duration_instHSubOffset__3);
l_Std_Time_Duration_instHAddOffset__4 = _init_l_Std_Time_Duration_instHAddOffset__4();
lean_mark_persistent(l_Std_Time_Duration_instHAddOffset__4);
l_Std_Time_Duration_instHSubOffset__4 = _init_l_Std_Time_Duration_instHSubOffset__4();
lean_mark_persistent(l_Std_Time_Duration_instHSubOffset__4);
l_Std_Time_Duration_instHAddOffset__5 = _init_l_Std_Time_Duration_instHAddOffset__5();
lean_mark_persistent(l_Std_Time_Duration_instHAddOffset__5);
l_Std_Time_Duration_instHSubOffset__5 = _init_l_Std_Time_Duration_instHSubOffset__5();
lean_mark_persistent(l_Std_Time_Duration_instHSubOffset__5);
l_Std_Time_Duration_instHAddOffset__6 = _init_l_Std_Time_Duration_instHAddOffset__6();
lean_mark_persistent(l_Std_Time_Duration_instHAddOffset__6);
l_Std_Time_Duration_instHSubOffset__6 = _init_l_Std_Time_Duration_instHSubOffset__6();
lean_mark_persistent(l_Std_Time_Duration_instHSubOffset__6);
l_Std_Time_Duration_instHSub = _init_l_Std_Time_Duration_instHSub();
lean_mark_persistent(l_Std_Time_Duration_instHSub);
l_Std_Time_Duration_instHAdd = _init_l_Std_Time_Duration_instHAdd();
lean_mark_persistent(l_Std_Time_Duration_instHAdd);
l_Std_Time_Duration_instCoeOffset = _init_l_Std_Time_Duration_instCoeOffset();
lean_mark_persistent(l_Std_Time_Duration_instCoeOffset);
l_Std_Time_Duration_instCoeOffset__1 = _init_l_Std_Time_Duration_instCoeOffset__1();
lean_mark_persistent(l_Std_Time_Duration_instCoeOffset__1);
l_Std_Time_Duration_instCoeOffset__2 = _init_l_Std_Time_Duration_instCoeOffset__2();
lean_mark_persistent(l_Std_Time_Duration_instCoeOffset__2);
l_Std_Time_Duration_instCoeOffset__3 = _init_l_Std_Time_Duration_instCoeOffset__3();
lean_mark_persistent(l_Std_Time_Duration_instCoeOffset__3);
l_Std_Time_Duration_instCoeOffset__4 = _init_l_Std_Time_Duration_instCoeOffset__4();
lean_mark_persistent(l_Std_Time_Duration_instCoeOffset__4);
l_Std_Time_Duration_instCoeOffset__5 = _init_l_Std_Time_Duration_instCoeOffset__5();
lean_mark_persistent(l_Std_Time_Duration_instCoeOffset__5);
l_Std_Time_Duration_instHMulInt = _init_l_Std_Time_Duration_instHMulInt();
lean_mark_persistent(l_Std_Time_Duration_instHMulInt);
l_Std_Time_Duration_instHMulInt__1 = _init_l_Std_Time_Duration_instHMulInt__1();
lean_mark_persistent(l_Std_Time_Duration_instHMulInt__1);
l_Std_Time_Duration_instHAddPlainTime = _init_l_Std_Time_Duration_instHAddPlainTime();
lean_mark_persistent(l_Std_Time_Duration_instHAddPlainTime);
l_Std_Time_Duration_instHSubPlainTime = _init_l_Std_Time_Duration_instHSubPlainTime();
lean_mark_persistent(l_Std_Time_Duration_instHSubPlainTime);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Duration(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Date(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Duration(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Date(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Duration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Duration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Duration(builtin);
}
#ifdef __cplusplus
}
#endif
