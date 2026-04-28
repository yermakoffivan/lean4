// Lean compiler output
// Module: Init.GrindInstances.Ring.SInt
// Imports: import all Init.Grind.ToInt public import Init.GrindInstances.ToInt import all Init.Data.BitVec.Basic import all Init.Data.SInt.Basic public import Init.Data.SInt.Lemmas public import Init.Grind.Ring.Basic import Init.Data.Int.Pow import Init.Data.Nat.Dvd import Init.Grind.Ring.ToInt
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
uint32_t lean_int32_of_nat(lean_object*);
uint32_t lean_int32_mul(uint32_t, uint32_t);
lean_object* l_Int64_mul___boxed(lean_object*, lean_object*);
lean_object* l_Int64_pow___boxed(lean_object*, lean_object*);
lean_object* l_instHAdd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
uint16_t lean_int16_of_int(lean_object*);
uint16_t lean_int16_mul(uint16_t, uint16_t);
lean_object* l_Int8_add___boxed(lean_object*, lean_object*);
lean_object* l_Int16_instOfNat___boxed(lean_object*);
lean_object* l_Int32_ofInt___boxed(lean_object*);
lean_object* l_ISize_sub___boxed(lean_object*, lean_object*);
size_t lean_isize_of_nat(lean_object*);
size_t lean_isize_mul(size_t, size_t);
lean_object* l_Int32_pow___boxed(lean_object*, lean_object*);
lean_object* l_Int32_instOfNat___boxed(lean_object*);
lean_object* l_Int32_ofNat___boxed(lean_object*);
lean_object* l_Int32_mul___boxed(lean_object*, lean_object*);
lean_object* l_Int32_add___boxed(lean_object*, lean_object*);
lean_object* l_Int32_neg___boxed(lean_object*);
uint64_t lean_int64_of_int(lean_object*);
uint64_t lean_int64_mul(uint64_t, uint64_t);
lean_object* l_Int64_add___boxed(lean_object*, lean_object*);
lean_object* l_Int8_neg___boxed(lean_object*);
lean_object* l_Int16_add___boxed(lean_object*, lean_object*);
lean_object* l_Int16_ofInt___boxed(lean_object*);
lean_object* l_Int16_sub___boxed(lean_object*, lean_object*);
lean_object* l_Int16_neg___boxed(lean_object*);
lean_object* l_Int16_pow___boxed(lean_object*, lean_object*);
uint16_t lean_int16_of_nat(lean_object*);
lean_object* l_Int16_ofNat___boxed(lean_object*);
lean_object* l_Int16_mul___boxed(lean_object*, lean_object*);
lean_object* l_Int64_neg___boxed(lean_object*);
uint32_t lean_int32_of_int(lean_object*);
uint8_t lean_int8_of_nat(lean_object*);
uint8_t lean_int8_mul(uint8_t, uint8_t);
lean_object* l_Int8_ofInt___boxed(lean_object*);
lean_object* l_Int64_ofInt___boxed(lean_object*);
lean_object* l_Int64_sub___boxed(lean_object*, lean_object*);
uint64_t lean_int64_of_nat(lean_object*);
lean_object* l_Int64_instOfNat___boxed(lean_object*);
lean_object* l_Int64_ofNat___boxed(lean_object*);
lean_object* l_ISize_ofNat___boxed(lean_object*);
size_t lean_isize_of_int(lean_object*);
lean_object* l_ISize_ofInt___boxed(lean_object*);
lean_object* l_ISize_neg___boxed(lean_object*);
lean_object* l_ISize_pow___boxed(lean_object*, lean_object*);
lean_object* l_ISize_instOfNat___boxed(lean_object*);
lean_object* l_ISize_mul___boxed(lean_object*, lean_object*);
lean_object* l_ISize_add___boxed(lean_object*, lean_object*);
lean_object* l_Int32_sub___boxed(lean_object*, lean_object*);
lean_object* l_Int8_ofNat___boxed(lean_object*);
uint8_t lean_int8_of_int(lean_object*);
lean_object* l_Int8_sub___boxed(lean_object*, lean_object*);
lean_object* l_Int8_pow___boxed(lean_object*, lean_object*);
lean_object* l_Int8_instOfNat___boxed(lean_object*);
lean_object* l_Int8_mul___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_Int8_natCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Int8_natCast___closed__0;
LEAN_EXPORT lean_object* l_Lean_Grind_Int8_natCast;
static lean_once_cell_t l_Lean_Grind_Int8_intCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Int8_intCast___closed__0;
LEAN_EXPORT lean_object* l_Lean_Grind_Int8_intCast;
LEAN_EXPORT uint8_t l_Lean_Grind_instCommRingInt8___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt8___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_instCommRingInt8___lam__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt8___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instCommRingInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt8___closed__0;
static lean_once_cell_t l_Lean_Grind_instCommRingInt8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt8___closed__1;
static lean_once_cell_t l_Lean_Grind_instCommRingInt8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt8___closed__2;
static lean_once_cell_t l_Lean_Grind_instCommRingInt8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt8___closed__3;
static lean_once_cell_t l_Lean_Grind_instCommRingInt8___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt8___closed__4;
static lean_once_cell_t l_Lean_Grind_instCommRingInt8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt8___closed__5;
static lean_once_cell_t l_Lean_Grind_instCommRingInt8___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt8___closed__6;
static lean_once_cell_t l_Lean_Grind_instCommRingInt8___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt8___closed__7;
static lean_once_cell_t l_Lean_Grind_instCommRingInt8___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt8___closed__8;
static lean_once_cell_t l_Lean_Grind_instCommRingInt8___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt8___closed__9;
static lean_once_cell_t l_Lean_Grind_instCommRingInt8___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt8___closed__10;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt8;
static lean_once_cell_t l_Lean_Grind_Int16_natCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Int16_natCast___closed__0;
LEAN_EXPORT lean_object* l_Lean_Grind_Int16_natCast;
static lean_once_cell_t l_Lean_Grind_Int16_intCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Int16_intCast___closed__0;
LEAN_EXPORT lean_object* l_Lean_Grind_Int16_intCast;
LEAN_EXPORT uint16_t l_Lean_Grind_instCommRingInt16___lam__0(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt16___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint16_t l_Lean_Grind_instCommRingInt16___lam__1(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt16___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instCommRingInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt16___closed__0;
static lean_once_cell_t l_Lean_Grind_instCommRingInt16___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt16___closed__1;
static lean_once_cell_t l_Lean_Grind_instCommRingInt16___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt16___closed__2;
static lean_once_cell_t l_Lean_Grind_instCommRingInt16___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt16___closed__3;
static lean_once_cell_t l_Lean_Grind_instCommRingInt16___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt16___closed__4;
static lean_once_cell_t l_Lean_Grind_instCommRingInt16___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt16___closed__5;
static lean_once_cell_t l_Lean_Grind_instCommRingInt16___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt16___closed__6;
static lean_once_cell_t l_Lean_Grind_instCommRingInt16___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt16___closed__7;
static lean_once_cell_t l_Lean_Grind_instCommRingInt16___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt16___closed__8;
static lean_once_cell_t l_Lean_Grind_instCommRingInt16___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt16___closed__9;
static lean_once_cell_t l_Lean_Grind_instCommRingInt16___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt16___closed__10;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt16;
static lean_once_cell_t l_Lean_Grind_Int32_natCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Int32_natCast___closed__0;
LEAN_EXPORT lean_object* l_Lean_Grind_Int32_natCast;
static lean_once_cell_t l_Lean_Grind_Int32_intCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Int32_intCast___closed__0;
LEAN_EXPORT lean_object* l_Lean_Grind_Int32_intCast;
LEAN_EXPORT uint32_t l_Lean_Grind_instCommRingInt32___lam__0(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt32___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Grind_instCommRingInt32___lam__1(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt32___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instCommRingInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt32___closed__0;
static lean_once_cell_t l_Lean_Grind_instCommRingInt32___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt32___closed__1;
static lean_once_cell_t l_Lean_Grind_instCommRingInt32___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt32___closed__2;
static lean_once_cell_t l_Lean_Grind_instCommRingInt32___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt32___closed__3;
static lean_once_cell_t l_Lean_Grind_instCommRingInt32___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt32___closed__4;
static lean_once_cell_t l_Lean_Grind_instCommRingInt32___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt32___closed__5;
static lean_once_cell_t l_Lean_Grind_instCommRingInt32___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt32___closed__6;
static lean_once_cell_t l_Lean_Grind_instCommRingInt32___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt32___closed__7;
static lean_once_cell_t l_Lean_Grind_instCommRingInt32___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt32___closed__8;
static lean_once_cell_t l_Lean_Grind_instCommRingInt32___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt32___closed__9;
static lean_once_cell_t l_Lean_Grind_instCommRingInt32___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt32___closed__10;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt32;
static lean_once_cell_t l_Lean_Grind_Int64_natCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Int64_natCast___closed__0;
LEAN_EXPORT lean_object* l_Lean_Grind_Int64_natCast;
static lean_once_cell_t l_Lean_Grind_Int64_intCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Int64_intCast___closed__0;
LEAN_EXPORT lean_object* l_Lean_Grind_Int64_intCast;
LEAN_EXPORT uint64_t l_Lean_Grind_instCommRingInt64___lam__0(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt64___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Grind_instCommRingInt64___lam__1(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt64___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instCommRingInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt64___closed__0;
static lean_once_cell_t l_Lean_Grind_instCommRingInt64___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt64___closed__1;
static lean_once_cell_t l_Lean_Grind_instCommRingInt64___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt64___closed__2;
static lean_once_cell_t l_Lean_Grind_instCommRingInt64___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt64___closed__3;
static lean_once_cell_t l_Lean_Grind_instCommRingInt64___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt64___closed__4;
static lean_once_cell_t l_Lean_Grind_instCommRingInt64___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt64___closed__5;
static lean_once_cell_t l_Lean_Grind_instCommRingInt64___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt64___closed__6;
static lean_once_cell_t l_Lean_Grind_instCommRingInt64___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt64___closed__7;
static lean_once_cell_t l_Lean_Grind_instCommRingInt64___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt64___closed__8;
static lean_once_cell_t l_Lean_Grind_instCommRingInt64___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt64___closed__9;
static lean_once_cell_t l_Lean_Grind_instCommRingInt64___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingInt64___closed__10;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt64;
static lean_once_cell_t l_Lean_Grind_ISize_natCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_ISize_natCast___closed__0;
LEAN_EXPORT lean_object* l_Lean_Grind_ISize_natCast;
static lean_once_cell_t l_Lean_Grind_ISize_intCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_ISize_intCast___closed__0;
LEAN_EXPORT lean_object* l_Lean_Grind_ISize_intCast;
LEAN_EXPORT size_t l_Lean_Grind_instCommRingISize___lam__0(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingISize___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_Grind_instCommRingISize___lam__1(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingISize___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instCommRingISize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingISize___closed__0;
static lean_once_cell_t l_Lean_Grind_instCommRingISize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingISize___closed__1;
static lean_once_cell_t l_Lean_Grind_instCommRingISize___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingISize___closed__2;
static lean_once_cell_t l_Lean_Grind_instCommRingISize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingISize___closed__3;
static lean_once_cell_t l_Lean_Grind_instCommRingISize___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingISize___closed__4;
static lean_once_cell_t l_Lean_Grind_instCommRingISize___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingISize___closed__5;
static lean_once_cell_t l_Lean_Grind_instCommRingISize___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingISize___closed__6;
static lean_once_cell_t l_Lean_Grind_instCommRingISize___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingISize___closed__7;
static lean_once_cell_t l_Lean_Grind_instCommRingISize___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingISize___closed__8;
static lean_once_cell_t l_Lean_Grind_instCommRingISize___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingISize___closed__9;
static lean_once_cell_t l_Lean_Grind_instCommRingISize___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingISize___closed__10;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingISize;
static lean_object* _init_l_Lean_Grind_Int8_natCast___closed__0(void){
_start:
{
lean_object* v___f_1_; 
v___f_1_ = lean_alloc_closure((void*)(l_Int8_ofNat___boxed), 1, 0);
return v___f_1_;
}
}
static lean_object* _init_l_Lean_Grind_Int8_natCast(void){
_start:
{
lean_object* v___f_2_; 
v___f_2_ = lean_obj_once(&l_Lean_Grind_Int8_natCast___closed__0, &l_Lean_Grind_Int8_natCast___closed__0_once, _init_l_Lean_Grind_Int8_natCast___closed__0);
return v___f_2_;
}
}
static lean_object* _init_l_Lean_Grind_Int8_intCast___closed__0(void){
_start:
{
lean_object* v___f_3_; 
v___f_3_ = lean_alloc_closure((void*)(l_Int8_ofInt___boxed), 1, 0);
return v___f_3_;
}
}
static lean_object* _init_l_Lean_Grind_Int8_intCast(void){
_start:
{
lean_object* v___f_4_; 
v___f_4_ = lean_obj_once(&l_Lean_Grind_Int8_intCast___closed__0, &l_Lean_Grind_Int8_intCast___closed__0_once, _init_l_Lean_Grind_Int8_intCast___closed__0);
return v___f_4_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_instCommRingInt8___lam__0(lean_object* v_x1_5_, uint8_t v_x2_6_){
_start:
{
uint8_t v___x_7_; uint8_t v___x_8_; 
v___x_7_ = lean_int8_of_nat(v_x1_5_);
v___x_8_ = lean_int8_mul(v___x_7_, v_x2_6_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt8___lam__0___boxed(lean_object* v_x1_9_, lean_object* v_x2_10_){
_start:
{
uint8_t v_x2_64__boxed_11_; uint8_t v_res_12_; lean_object* v_r_13_; 
v_x2_64__boxed_11_ = lean_unbox(v_x2_10_);
v_res_12_ = l_Lean_Grind_instCommRingInt8___lam__0(v_x1_9_, v_x2_64__boxed_11_);
lean_dec(v_x1_9_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_instCommRingInt8___lam__1(lean_object* v_x1_14_, uint8_t v_x2_15_){
_start:
{
uint8_t v___x_16_; uint8_t v___x_17_; 
v___x_16_ = lean_int8_of_int(v_x1_14_);
v___x_17_ = lean_int8_mul(v___x_16_, v_x2_15_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt8___lam__1___boxed(lean_object* v_x1_18_, lean_object* v_x2_19_){
_start:
{
uint8_t v_x2_74__boxed_20_; uint8_t v_res_21_; lean_object* v_r_22_; 
v_x2_74__boxed_20_ = lean_unbox(v_x2_19_);
v_res_21_ = l_Lean_Grind_instCommRingInt8___lam__1(v_x1_18_, v_x2_74__boxed_20_);
lean_dec(v_x1_18_);
v_r_22_ = lean_box(v_res_21_);
return v_r_22_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt8___closed__0(void){
_start:
{
lean_object* v___f_23_; 
v___f_23_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingInt8___lam__0___boxed), 2, 0);
return v___f_23_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt8___closed__1(void){
_start:
{
lean_object* v___f_24_; 
v___f_24_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingInt8___lam__1___boxed), 2, 0);
return v___f_24_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt8___closed__2(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_alloc_closure((void*)(l_Int8_add___boxed), 2, 0);
return v___x_25_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt8___closed__3(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_alloc_closure((void*)(l_Int8_mul___boxed), 2, 0);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt8___closed__4(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_alloc_closure((void*)(l_Int8_pow___boxed), 2, 0);
return v___x_27_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt8___closed__5(void){
_start:
{
lean_object* v___x_28_; lean_object* v___f_29_; 
v___x_28_ = lean_obj_once(&l_Lean_Grind_instCommRingInt8___closed__4, &l_Lean_Grind_instCommRingInt8___closed__4_once, _init_l_Lean_Grind_instCommRingInt8___closed__4);
v___f_29_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_29_, 0, v___x_28_);
return v___f_29_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt8___closed__6(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_alloc_closure((void*)(l_Int8_neg___boxed), 1, 0);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt8___closed__7(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_alloc_closure((void*)(l_Int8_sub___boxed), 2, 0);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt8___closed__8(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_alloc_closure((void*)(l_Int8_instOfNat___boxed), 1, 0);
return v___x_32_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt8___closed__9(void){
_start:
{
lean_object* v___f_33_; lean_object* v___f_34_; lean_object* v___x_35_; lean_object* v___f_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___f_33_ = lean_obj_once(&l_Lean_Grind_instCommRingInt8___closed__5, &l_Lean_Grind_instCommRingInt8___closed__5_once, _init_l_Lean_Grind_instCommRingInt8___closed__5);
v___f_34_ = lean_obj_once(&l_Lean_Grind_instCommRingInt8___closed__0, &l_Lean_Grind_instCommRingInt8___closed__0_once, _init_l_Lean_Grind_instCommRingInt8___closed__0);
v___x_35_ = lean_obj_once(&l_Lean_Grind_instCommRingInt8___closed__8, &l_Lean_Grind_instCommRingInt8___closed__8_once, _init_l_Lean_Grind_instCommRingInt8___closed__8);
v___f_36_ = lean_obj_once(&l_Lean_Grind_Int8_natCast___closed__0, &l_Lean_Grind_Int8_natCast___closed__0_once, _init_l_Lean_Grind_Int8_natCast___closed__0);
v___x_37_ = lean_obj_once(&l_Lean_Grind_instCommRingInt8___closed__3, &l_Lean_Grind_instCommRingInt8___closed__3_once, _init_l_Lean_Grind_instCommRingInt8___closed__3);
v___x_38_ = lean_obj_once(&l_Lean_Grind_instCommRingInt8___closed__2, &l_Lean_Grind_instCommRingInt8___closed__2_once, _init_l_Lean_Grind_instCommRingInt8___closed__2);
v___x_39_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
lean_ctor_set(v___x_39_, 1, v___x_37_);
lean_ctor_set(v___x_39_, 2, v___f_36_);
lean_ctor_set(v___x_39_, 3, v___x_35_);
lean_ctor_set(v___x_39_, 4, v___f_34_);
lean_ctor_set(v___x_39_, 5, v___f_33_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt8___closed__10(void){
_start:
{
lean_object* v___f_40_; lean_object* v___f_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___f_40_ = lean_obj_once(&l_Lean_Grind_instCommRingInt8___closed__1, &l_Lean_Grind_instCommRingInt8___closed__1_once, _init_l_Lean_Grind_instCommRingInt8___closed__1);
v___f_41_ = lean_obj_once(&l_Lean_Grind_Int8_intCast___closed__0, &l_Lean_Grind_Int8_intCast___closed__0_once, _init_l_Lean_Grind_Int8_intCast___closed__0);
v___x_42_ = lean_obj_once(&l_Lean_Grind_instCommRingInt8___closed__7, &l_Lean_Grind_instCommRingInt8___closed__7_once, _init_l_Lean_Grind_instCommRingInt8___closed__7);
v___x_43_ = lean_obj_once(&l_Lean_Grind_instCommRingInt8___closed__6, &l_Lean_Grind_instCommRingInt8___closed__6_once, _init_l_Lean_Grind_instCommRingInt8___closed__6);
v___x_44_ = lean_obj_once(&l_Lean_Grind_instCommRingInt8___closed__9, &l_Lean_Grind_instCommRingInt8___closed__9_once, _init_l_Lean_Grind_instCommRingInt8___closed__9);
v___x_45_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
lean_ctor_set(v___x_45_, 1, v___x_43_);
lean_ctor_set(v___x_45_, 2, v___x_42_);
lean_ctor_set(v___x_45_, 3, v___f_41_);
lean_ctor_set(v___x_45_, 4, v___f_40_);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt8(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_obj_once(&l_Lean_Grind_instCommRingInt8___closed__10, &l_Lean_Grind_instCommRingInt8___closed__10_once, _init_l_Lean_Grind_instCommRingInt8___closed__10);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_Grind_Int16_natCast___closed__0(void){
_start:
{
lean_object* v___f_47_; 
v___f_47_ = lean_alloc_closure((void*)(l_Int16_ofNat___boxed), 1, 0);
return v___f_47_;
}
}
static lean_object* _init_l_Lean_Grind_Int16_natCast(void){
_start:
{
lean_object* v___f_48_; 
v___f_48_ = lean_obj_once(&l_Lean_Grind_Int16_natCast___closed__0, &l_Lean_Grind_Int16_natCast___closed__0_once, _init_l_Lean_Grind_Int16_natCast___closed__0);
return v___f_48_;
}
}
static lean_object* _init_l_Lean_Grind_Int16_intCast___closed__0(void){
_start:
{
lean_object* v___f_49_; 
v___f_49_ = lean_alloc_closure((void*)(l_Int16_ofInt___boxed), 1, 0);
return v___f_49_;
}
}
static lean_object* _init_l_Lean_Grind_Int16_intCast(void){
_start:
{
lean_object* v___f_50_; 
v___f_50_ = lean_obj_once(&l_Lean_Grind_Int16_intCast___closed__0, &l_Lean_Grind_Int16_intCast___closed__0_once, _init_l_Lean_Grind_Int16_intCast___closed__0);
return v___f_50_;
}
}
LEAN_EXPORT uint16_t l_Lean_Grind_instCommRingInt16___lam__0(lean_object* v_x1_51_, uint16_t v_x2_52_){
_start:
{
uint16_t v___x_53_; uint16_t v___x_54_; 
v___x_53_ = lean_int16_of_nat(v_x1_51_);
v___x_54_ = lean_int16_mul(v___x_53_, v_x2_52_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt16___lam__0___boxed(lean_object* v_x1_55_, lean_object* v_x2_56_){
_start:
{
uint16_t v_x2_64__boxed_57_; uint16_t v_res_58_; lean_object* v_r_59_; 
v_x2_64__boxed_57_ = lean_unbox(v_x2_56_);
v_res_58_ = l_Lean_Grind_instCommRingInt16___lam__0(v_x1_55_, v_x2_64__boxed_57_);
lean_dec(v_x1_55_);
v_r_59_ = lean_box(v_res_58_);
return v_r_59_;
}
}
LEAN_EXPORT uint16_t l_Lean_Grind_instCommRingInt16___lam__1(lean_object* v_x1_60_, uint16_t v_x2_61_){
_start:
{
uint16_t v___x_62_; uint16_t v___x_63_; 
v___x_62_ = lean_int16_of_int(v_x1_60_);
v___x_63_ = lean_int16_mul(v___x_62_, v_x2_61_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt16___lam__1___boxed(lean_object* v_x1_64_, lean_object* v_x2_65_){
_start:
{
uint16_t v_x2_74__boxed_66_; uint16_t v_res_67_; lean_object* v_r_68_; 
v_x2_74__boxed_66_ = lean_unbox(v_x2_65_);
v_res_67_ = l_Lean_Grind_instCommRingInt16___lam__1(v_x1_64_, v_x2_74__boxed_66_);
lean_dec(v_x1_64_);
v_r_68_ = lean_box(v_res_67_);
return v_r_68_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt16___closed__0(void){
_start:
{
lean_object* v___f_69_; 
v___f_69_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingInt16___lam__0___boxed), 2, 0);
return v___f_69_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt16___closed__1(void){
_start:
{
lean_object* v___f_70_; 
v___f_70_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingInt16___lam__1___boxed), 2, 0);
return v___f_70_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt16___closed__2(void){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_alloc_closure((void*)(l_Int16_add___boxed), 2, 0);
return v___x_71_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt16___closed__3(void){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_alloc_closure((void*)(l_Int16_mul___boxed), 2, 0);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt16___closed__4(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_alloc_closure((void*)(l_Int16_pow___boxed), 2, 0);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt16___closed__5(void){
_start:
{
lean_object* v___x_74_; lean_object* v___f_75_; 
v___x_74_ = lean_obj_once(&l_Lean_Grind_instCommRingInt16___closed__4, &l_Lean_Grind_instCommRingInt16___closed__4_once, _init_l_Lean_Grind_instCommRingInt16___closed__4);
v___f_75_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_75_, 0, v___x_74_);
return v___f_75_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt16___closed__6(void){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_alloc_closure((void*)(l_Int16_neg___boxed), 1, 0);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt16___closed__7(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_alloc_closure((void*)(l_Int16_sub___boxed), 2, 0);
return v___x_77_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt16___closed__8(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_alloc_closure((void*)(l_Int16_instOfNat___boxed), 1, 0);
return v___x_78_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt16___closed__9(void){
_start:
{
lean_object* v___f_79_; lean_object* v___f_80_; lean_object* v___x_81_; lean_object* v___f_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___f_79_ = lean_obj_once(&l_Lean_Grind_instCommRingInt16___closed__5, &l_Lean_Grind_instCommRingInt16___closed__5_once, _init_l_Lean_Grind_instCommRingInt16___closed__5);
v___f_80_ = lean_obj_once(&l_Lean_Grind_instCommRingInt16___closed__0, &l_Lean_Grind_instCommRingInt16___closed__0_once, _init_l_Lean_Grind_instCommRingInt16___closed__0);
v___x_81_ = lean_obj_once(&l_Lean_Grind_instCommRingInt16___closed__8, &l_Lean_Grind_instCommRingInt16___closed__8_once, _init_l_Lean_Grind_instCommRingInt16___closed__8);
v___f_82_ = lean_obj_once(&l_Lean_Grind_Int16_natCast___closed__0, &l_Lean_Grind_Int16_natCast___closed__0_once, _init_l_Lean_Grind_Int16_natCast___closed__0);
v___x_83_ = lean_obj_once(&l_Lean_Grind_instCommRingInt16___closed__3, &l_Lean_Grind_instCommRingInt16___closed__3_once, _init_l_Lean_Grind_instCommRingInt16___closed__3);
v___x_84_ = lean_obj_once(&l_Lean_Grind_instCommRingInt16___closed__2, &l_Lean_Grind_instCommRingInt16___closed__2_once, _init_l_Lean_Grind_instCommRingInt16___closed__2);
v___x_85_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v___x_83_);
lean_ctor_set(v___x_85_, 2, v___f_82_);
lean_ctor_set(v___x_85_, 3, v___x_81_);
lean_ctor_set(v___x_85_, 4, v___f_80_);
lean_ctor_set(v___x_85_, 5, v___f_79_);
return v___x_85_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt16___closed__10(void){
_start:
{
lean_object* v___f_86_; lean_object* v___f_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___f_86_ = lean_obj_once(&l_Lean_Grind_instCommRingInt16___closed__1, &l_Lean_Grind_instCommRingInt16___closed__1_once, _init_l_Lean_Grind_instCommRingInt16___closed__1);
v___f_87_ = lean_obj_once(&l_Lean_Grind_Int16_intCast___closed__0, &l_Lean_Grind_Int16_intCast___closed__0_once, _init_l_Lean_Grind_Int16_intCast___closed__0);
v___x_88_ = lean_obj_once(&l_Lean_Grind_instCommRingInt16___closed__7, &l_Lean_Grind_instCommRingInt16___closed__7_once, _init_l_Lean_Grind_instCommRingInt16___closed__7);
v___x_89_ = lean_obj_once(&l_Lean_Grind_instCommRingInt16___closed__6, &l_Lean_Grind_instCommRingInt16___closed__6_once, _init_l_Lean_Grind_instCommRingInt16___closed__6);
v___x_90_ = lean_obj_once(&l_Lean_Grind_instCommRingInt16___closed__9, &l_Lean_Grind_instCommRingInt16___closed__9_once, _init_l_Lean_Grind_instCommRingInt16___closed__9);
v___x_91_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v___x_89_);
lean_ctor_set(v___x_91_, 2, v___x_88_);
lean_ctor_set(v___x_91_, 3, v___f_87_);
lean_ctor_set(v___x_91_, 4, v___f_86_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt16(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lean_obj_once(&l_Lean_Grind_instCommRingInt16___closed__10, &l_Lean_Grind_instCommRingInt16___closed__10_once, _init_l_Lean_Grind_instCommRingInt16___closed__10);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_Grind_Int32_natCast___closed__0(void){
_start:
{
lean_object* v___f_93_; 
v___f_93_ = lean_alloc_closure((void*)(l_Int32_ofNat___boxed), 1, 0);
return v___f_93_;
}
}
static lean_object* _init_l_Lean_Grind_Int32_natCast(void){
_start:
{
lean_object* v___f_94_; 
v___f_94_ = lean_obj_once(&l_Lean_Grind_Int32_natCast___closed__0, &l_Lean_Grind_Int32_natCast___closed__0_once, _init_l_Lean_Grind_Int32_natCast___closed__0);
return v___f_94_;
}
}
static lean_object* _init_l_Lean_Grind_Int32_intCast___closed__0(void){
_start:
{
lean_object* v___f_95_; 
v___f_95_ = lean_alloc_closure((void*)(l_Int32_ofInt___boxed), 1, 0);
return v___f_95_;
}
}
static lean_object* _init_l_Lean_Grind_Int32_intCast(void){
_start:
{
lean_object* v___f_96_; 
v___f_96_ = lean_obj_once(&l_Lean_Grind_Int32_intCast___closed__0, &l_Lean_Grind_Int32_intCast___closed__0_once, _init_l_Lean_Grind_Int32_intCast___closed__0);
return v___f_96_;
}
}
LEAN_EXPORT uint32_t l_Lean_Grind_instCommRingInt32___lam__0(lean_object* v_x1_97_, uint32_t v_x2_98_){
_start:
{
uint32_t v___x_99_; uint32_t v___x_100_; 
v___x_99_ = lean_int32_of_nat(v_x1_97_);
v___x_100_ = lean_int32_mul(v___x_99_, v_x2_98_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt32___lam__0___boxed(lean_object* v_x1_101_, lean_object* v_x2_102_){
_start:
{
uint32_t v_x2_64__boxed_103_; uint32_t v_res_104_; lean_object* v_r_105_; 
v_x2_64__boxed_103_ = lean_unbox_uint32(v_x2_102_);
lean_dec(v_x2_102_);
v_res_104_ = l_Lean_Grind_instCommRingInt32___lam__0(v_x1_101_, v_x2_64__boxed_103_);
lean_dec(v_x1_101_);
v_r_105_ = lean_box_uint32(v_res_104_);
return v_r_105_;
}
}
LEAN_EXPORT uint32_t l_Lean_Grind_instCommRingInt32___lam__1(lean_object* v_x1_106_, uint32_t v_x2_107_){
_start:
{
uint32_t v___x_108_; uint32_t v___x_109_; 
v___x_108_ = lean_int32_of_int(v_x1_106_);
v___x_109_ = lean_int32_mul(v___x_108_, v_x2_107_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt32___lam__1___boxed(lean_object* v_x1_110_, lean_object* v_x2_111_){
_start:
{
uint32_t v_x2_74__boxed_112_; uint32_t v_res_113_; lean_object* v_r_114_; 
v_x2_74__boxed_112_ = lean_unbox_uint32(v_x2_111_);
lean_dec(v_x2_111_);
v_res_113_ = l_Lean_Grind_instCommRingInt32___lam__1(v_x1_110_, v_x2_74__boxed_112_);
lean_dec(v_x1_110_);
v_r_114_ = lean_box_uint32(v_res_113_);
return v_r_114_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt32___closed__0(void){
_start:
{
lean_object* v___f_115_; 
v___f_115_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingInt32___lam__0___boxed), 2, 0);
return v___f_115_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt32___closed__1(void){
_start:
{
lean_object* v___f_116_; 
v___f_116_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingInt32___lam__1___boxed), 2, 0);
return v___f_116_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt32___closed__2(void){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lean_alloc_closure((void*)(l_Int32_add___boxed), 2, 0);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt32___closed__3(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_alloc_closure((void*)(l_Int32_mul___boxed), 2, 0);
return v___x_118_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt32___closed__4(void){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_alloc_closure((void*)(l_Int32_pow___boxed), 2, 0);
return v___x_119_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt32___closed__5(void){
_start:
{
lean_object* v___x_120_; lean_object* v___f_121_; 
v___x_120_ = lean_obj_once(&l_Lean_Grind_instCommRingInt32___closed__4, &l_Lean_Grind_instCommRingInt32___closed__4_once, _init_l_Lean_Grind_instCommRingInt32___closed__4);
v___f_121_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_121_, 0, v___x_120_);
return v___f_121_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt32___closed__6(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lean_alloc_closure((void*)(l_Int32_neg___boxed), 1, 0);
return v___x_122_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt32___closed__7(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lean_alloc_closure((void*)(l_Int32_sub___boxed), 2, 0);
return v___x_123_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt32___closed__8(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_alloc_closure((void*)(l_Int32_instOfNat___boxed), 1, 0);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt32___closed__9(void){
_start:
{
lean_object* v___f_125_; lean_object* v___f_126_; lean_object* v___x_127_; lean_object* v___f_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___f_125_ = lean_obj_once(&l_Lean_Grind_instCommRingInt32___closed__5, &l_Lean_Grind_instCommRingInt32___closed__5_once, _init_l_Lean_Grind_instCommRingInt32___closed__5);
v___f_126_ = lean_obj_once(&l_Lean_Grind_instCommRingInt32___closed__0, &l_Lean_Grind_instCommRingInt32___closed__0_once, _init_l_Lean_Grind_instCommRingInt32___closed__0);
v___x_127_ = lean_obj_once(&l_Lean_Grind_instCommRingInt32___closed__8, &l_Lean_Grind_instCommRingInt32___closed__8_once, _init_l_Lean_Grind_instCommRingInt32___closed__8);
v___f_128_ = lean_obj_once(&l_Lean_Grind_Int32_natCast___closed__0, &l_Lean_Grind_Int32_natCast___closed__0_once, _init_l_Lean_Grind_Int32_natCast___closed__0);
v___x_129_ = lean_obj_once(&l_Lean_Grind_instCommRingInt32___closed__3, &l_Lean_Grind_instCommRingInt32___closed__3_once, _init_l_Lean_Grind_instCommRingInt32___closed__3);
v___x_130_ = lean_obj_once(&l_Lean_Grind_instCommRingInt32___closed__2, &l_Lean_Grind_instCommRingInt32___closed__2_once, _init_l_Lean_Grind_instCommRingInt32___closed__2);
v___x_131_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set(v___x_131_, 1, v___x_129_);
lean_ctor_set(v___x_131_, 2, v___f_128_);
lean_ctor_set(v___x_131_, 3, v___x_127_);
lean_ctor_set(v___x_131_, 4, v___f_126_);
lean_ctor_set(v___x_131_, 5, v___f_125_);
return v___x_131_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt32___closed__10(void){
_start:
{
lean_object* v___f_132_; lean_object* v___f_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___f_132_ = lean_obj_once(&l_Lean_Grind_instCommRingInt32___closed__1, &l_Lean_Grind_instCommRingInt32___closed__1_once, _init_l_Lean_Grind_instCommRingInt32___closed__1);
v___f_133_ = lean_obj_once(&l_Lean_Grind_Int32_intCast___closed__0, &l_Lean_Grind_Int32_intCast___closed__0_once, _init_l_Lean_Grind_Int32_intCast___closed__0);
v___x_134_ = lean_obj_once(&l_Lean_Grind_instCommRingInt32___closed__7, &l_Lean_Grind_instCommRingInt32___closed__7_once, _init_l_Lean_Grind_instCommRingInt32___closed__7);
v___x_135_ = lean_obj_once(&l_Lean_Grind_instCommRingInt32___closed__6, &l_Lean_Grind_instCommRingInt32___closed__6_once, _init_l_Lean_Grind_instCommRingInt32___closed__6);
v___x_136_ = lean_obj_once(&l_Lean_Grind_instCommRingInt32___closed__9, &l_Lean_Grind_instCommRingInt32___closed__9_once, _init_l_Lean_Grind_instCommRingInt32___closed__9);
v___x_137_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set(v___x_137_, 1, v___x_135_);
lean_ctor_set(v___x_137_, 2, v___x_134_);
lean_ctor_set(v___x_137_, 3, v___f_133_);
lean_ctor_set(v___x_137_, 4, v___f_132_);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt32(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_obj_once(&l_Lean_Grind_instCommRingInt32___closed__10, &l_Lean_Grind_instCommRingInt32___closed__10_once, _init_l_Lean_Grind_instCommRingInt32___closed__10);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Grind_Int64_natCast___closed__0(void){
_start:
{
lean_object* v___f_139_; 
v___f_139_ = lean_alloc_closure((void*)(l_Int64_ofNat___boxed), 1, 0);
return v___f_139_;
}
}
static lean_object* _init_l_Lean_Grind_Int64_natCast(void){
_start:
{
lean_object* v___f_140_; 
v___f_140_ = lean_obj_once(&l_Lean_Grind_Int64_natCast___closed__0, &l_Lean_Grind_Int64_natCast___closed__0_once, _init_l_Lean_Grind_Int64_natCast___closed__0);
return v___f_140_;
}
}
static lean_object* _init_l_Lean_Grind_Int64_intCast___closed__0(void){
_start:
{
lean_object* v___f_141_; 
v___f_141_ = lean_alloc_closure((void*)(l_Int64_ofInt___boxed), 1, 0);
return v___f_141_;
}
}
static lean_object* _init_l_Lean_Grind_Int64_intCast(void){
_start:
{
lean_object* v___f_142_; 
v___f_142_ = lean_obj_once(&l_Lean_Grind_Int64_intCast___closed__0, &l_Lean_Grind_Int64_intCast___closed__0_once, _init_l_Lean_Grind_Int64_intCast___closed__0);
return v___f_142_;
}
}
LEAN_EXPORT uint64_t l_Lean_Grind_instCommRingInt64___lam__0(lean_object* v_x1_143_, uint64_t v_x2_144_){
_start:
{
uint64_t v___x_145_; uint64_t v___x_146_; 
v___x_145_ = lean_int64_of_nat(v_x1_143_);
v___x_146_ = lean_int64_mul(v___x_145_, v_x2_144_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt64___lam__0___boxed(lean_object* v_x1_147_, lean_object* v_x2_148_){
_start:
{
uint64_t v_x2_64__boxed_149_; uint64_t v_res_150_; lean_object* v_r_151_; 
v_x2_64__boxed_149_ = lean_unbox_uint64(v_x2_148_);
lean_dec_ref(v_x2_148_);
v_res_150_ = l_Lean_Grind_instCommRingInt64___lam__0(v_x1_147_, v_x2_64__boxed_149_);
lean_dec(v_x1_147_);
v_r_151_ = lean_box_uint64(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT uint64_t l_Lean_Grind_instCommRingInt64___lam__1(lean_object* v_x1_152_, uint64_t v_x2_153_){
_start:
{
uint64_t v___x_154_; uint64_t v___x_155_; 
v___x_154_ = lean_int64_of_int(v_x1_152_);
v___x_155_ = lean_int64_mul(v___x_154_, v_x2_153_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingInt64___lam__1___boxed(lean_object* v_x1_156_, lean_object* v_x2_157_){
_start:
{
uint64_t v_x2_74__boxed_158_; uint64_t v_res_159_; lean_object* v_r_160_; 
v_x2_74__boxed_158_ = lean_unbox_uint64(v_x2_157_);
lean_dec_ref(v_x2_157_);
v_res_159_ = l_Lean_Grind_instCommRingInt64___lam__1(v_x1_156_, v_x2_74__boxed_158_);
lean_dec(v_x1_156_);
v_r_160_ = lean_box_uint64(v_res_159_);
return v_r_160_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt64___closed__0(void){
_start:
{
lean_object* v___f_161_; 
v___f_161_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingInt64___lam__0___boxed), 2, 0);
return v___f_161_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt64___closed__1(void){
_start:
{
lean_object* v___f_162_; 
v___f_162_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingInt64___lam__1___boxed), 2, 0);
return v___f_162_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt64___closed__2(void){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = lean_alloc_closure((void*)(l_Int64_add___boxed), 2, 0);
return v___x_163_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt64___closed__3(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_alloc_closure((void*)(l_Int64_mul___boxed), 2, 0);
return v___x_164_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt64___closed__4(void){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = lean_alloc_closure((void*)(l_Int64_pow___boxed), 2, 0);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt64___closed__5(void){
_start:
{
lean_object* v___x_166_; lean_object* v___f_167_; 
v___x_166_ = lean_obj_once(&l_Lean_Grind_instCommRingInt64___closed__4, &l_Lean_Grind_instCommRingInt64___closed__4_once, _init_l_Lean_Grind_instCommRingInt64___closed__4);
v___f_167_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_167_, 0, v___x_166_);
return v___f_167_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt64___closed__6(void){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_alloc_closure((void*)(l_Int64_neg___boxed), 1, 0);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt64___closed__7(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_alloc_closure((void*)(l_Int64_sub___boxed), 2, 0);
return v___x_169_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt64___closed__8(void){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_alloc_closure((void*)(l_Int64_instOfNat___boxed), 1, 0);
return v___x_170_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt64___closed__9(void){
_start:
{
lean_object* v___f_171_; lean_object* v___f_172_; lean_object* v___x_173_; lean_object* v___f_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___f_171_ = lean_obj_once(&l_Lean_Grind_instCommRingInt64___closed__5, &l_Lean_Grind_instCommRingInt64___closed__5_once, _init_l_Lean_Grind_instCommRingInt64___closed__5);
v___f_172_ = lean_obj_once(&l_Lean_Grind_instCommRingInt64___closed__0, &l_Lean_Grind_instCommRingInt64___closed__0_once, _init_l_Lean_Grind_instCommRingInt64___closed__0);
v___x_173_ = lean_obj_once(&l_Lean_Grind_instCommRingInt64___closed__8, &l_Lean_Grind_instCommRingInt64___closed__8_once, _init_l_Lean_Grind_instCommRingInt64___closed__8);
v___f_174_ = lean_obj_once(&l_Lean_Grind_Int64_natCast___closed__0, &l_Lean_Grind_Int64_natCast___closed__0_once, _init_l_Lean_Grind_Int64_natCast___closed__0);
v___x_175_ = lean_obj_once(&l_Lean_Grind_instCommRingInt64___closed__3, &l_Lean_Grind_instCommRingInt64___closed__3_once, _init_l_Lean_Grind_instCommRingInt64___closed__3);
v___x_176_ = lean_obj_once(&l_Lean_Grind_instCommRingInt64___closed__2, &l_Lean_Grind_instCommRingInt64___closed__2_once, _init_l_Lean_Grind_instCommRingInt64___closed__2);
v___x_177_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
lean_ctor_set(v___x_177_, 1, v___x_175_);
lean_ctor_set(v___x_177_, 2, v___f_174_);
lean_ctor_set(v___x_177_, 3, v___x_173_);
lean_ctor_set(v___x_177_, 4, v___f_172_);
lean_ctor_set(v___x_177_, 5, v___f_171_);
return v___x_177_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt64___closed__10(void){
_start:
{
lean_object* v___f_178_; lean_object* v___f_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___f_178_ = lean_obj_once(&l_Lean_Grind_instCommRingInt64___closed__1, &l_Lean_Grind_instCommRingInt64___closed__1_once, _init_l_Lean_Grind_instCommRingInt64___closed__1);
v___f_179_ = lean_obj_once(&l_Lean_Grind_Int64_intCast___closed__0, &l_Lean_Grind_Int64_intCast___closed__0_once, _init_l_Lean_Grind_Int64_intCast___closed__0);
v___x_180_ = lean_obj_once(&l_Lean_Grind_instCommRingInt64___closed__7, &l_Lean_Grind_instCommRingInt64___closed__7_once, _init_l_Lean_Grind_instCommRingInt64___closed__7);
v___x_181_ = lean_obj_once(&l_Lean_Grind_instCommRingInt64___closed__6, &l_Lean_Grind_instCommRingInt64___closed__6_once, _init_l_Lean_Grind_instCommRingInt64___closed__6);
v___x_182_ = lean_obj_once(&l_Lean_Grind_instCommRingInt64___closed__9, &l_Lean_Grind_instCommRingInt64___closed__9_once, _init_l_Lean_Grind_instCommRingInt64___closed__9);
v___x_183_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
lean_ctor_set(v___x_183_, 1, v___x_181_);
lean_ctor_set(v___x_183_, 2, v___x_180_);
lean_ctor_set(v___x_183_, 3, v___f_179_);
lean_ctor_set(v___x_183_, 4, v___f_178_);
return v___x_183_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingInt64(void){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_obj_once(&l_Lean_Grind_instCommRingInt64___closed__10, &l_Lean_Grind_instCommRingInt64___closed__10_once, _init_l_Lean_Grind_instCommRingInt64___closed__10);
return v___x_184_;
}
}
static lean_object* _init_l_Lean_Grind_ISize_natCast___closed__0(void){
_start:
{
lean_object* v___f_185_; 
v___f_185_ = lean_alloc_closure((void*)(l_ISize_ofNat___boxed), 1, 0);
return v___f_185_;
}
}
static lean_object* _init_l_Lean_Grind_ISize_natCast(void){
_start:
{
lean_object* v___f_186_; 
v___f_186_ = lean_obj_once(&l_Lean_Grind_ISize_natCast___closed__0, &l_Lean_Grind_ISize_natCast___closed__0_once, _init_l_Lean_Grind_ISize_natCast___closed__0);
return v___f_186_;
}
}
static lean_object* _init_l_Lean_Grind_ISize_intCast___closed__0(void){
_start:
{
lean_object* v___f_187_; 
v___f_187_ = lean_alloc_closure((void*)(l_ISize_ofInt___boxed), 1, 0);
return v___f_187_;
}
}
static lean_object* _init_l_Lean_Grind_ISize_intCast(void){
_start:
{
lean_object* v___f_188_; 
v___f_188_ = lean_obj_once(&l_Lean_Grind_ISize_intCast___closed__0, &l_Lean_Grind_ISize_intCast___closed__0_once, _init_l_Lean_Grind_ISize_intCast___closed__0);
return v___f_188_;
}
}
LEAN_EXPORT size_t l_Lean_Grind_instCommRingISize___lam__0(lean_object* v_x1_189_, size_t v_x2_190_){
_start:
{
size_t v___x_191_; size_t v___x_192_; 
v___x_191_ = lean_isize_of_nat(v_x1_189_);
v___x_192_ = lean_isize_mul(v___x_191_, v_x2_190_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingISize___lam__0___boxed(lean_object* v_x1_193_, lean_object* v_x2_194_){
_start:
{
size_t v_x2_64__boxed_195_; size_t v_res_196_; lean_object* v_r_197_; 
v_x2_64__boxed_195_ = lean_unbox_usize(v_x2_194_);
lean_dec(v_x2_194_);
v_res_196_ = l_Lean_Grind_instCommRingISize___lam__0(v_x1_193_, v_x2_64__boxed_195_);
lean_dec(v_x1_193_);
v_r_197_ = lean_box_usize(v_res_196_);
return v_r_197_;
}
}
LEAN_EXPORT size_t l_Lean_Grind_instCommRingISize___lam__1(lean_object* v_x1_198_, size_t v_x2_199_){
_start:
{
size_t v___x_200_; size_t v___x_201_; 
v___x_200_ = lean_isize_of_int(v_x1_198_);
v___x_201_ = lean_isize_mul(v___x_200_, v_x2_199_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingISize___lam__1___boxed(lean_object* v_x1_202_, lean_object* v_x2_203_){
_start:
{
size_t v_x2_74__boxed_204_; size_t v_res_205_; lean_object* v_r_206_; 
v_x2_74__boxed_204_ = lean_unbox_usize(v_x2_203_);
lean_dec(v_x2_203_);
v_res_205_ = l_Lean_Grind_instCommRingISize___lam__1(v_x1_202_, v_x2_74__boxed_204_);
lean_dec(v_x1_202_);
v_r_206_ = lean_box_usize(v_res_205_);
return v_r_206_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingISize___closed__0(void){
_start:
{
lean_object* v___f_207_; 
v___f_207_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingISize___lam__0___boxed), 2, 0);
return v___f_207_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingISize___closed__1(void){
_start:
{
lean_object* v___f_208_; 
v___f_208_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingISize___lam__1___boxed), 2, 0);
return v___f_208_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingISize___closed__2(void){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = lean_alloc_closure((void*)(l_ISize_add___boxed), 2, 0);
return v___x_209_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingISize___closed__3(void){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = lean_alloc_closure((void*)(l_ISize_mul___boxed), 2, 0);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingISize___closed__4(void){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = lean_alloc_closure((void*)(l_ISize_pow___boxed), 2, 0);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingISize___closed__5(void){
_start:
{
lean_object* v___x_212_; lean_object* v___f_213_; 
v___x_212_ = lean_obj_once(&l_Lean_Grind_instCommRingISize___closed__4, &l_Lean_Grind_instCommRingISize___closed__4_once, _init_l_Lean_Grind_instCommRingISize___closed__4);
v___f_213_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_213_, 0, v___x_212_);
return v___f_213_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingISize___closed__6(void){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_alloc_closure((void*)(l_ISize_neg___boxed), 1, 0);
return v___x_214_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingISize___closed__7(void){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = lean_alloc_closure((void*)(l_ISize_sub___boxed), 2, 0);
return v___x_215_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingISize___closed__8(void){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = lean_alloc_closure((void*)(l_ISize_instOfNat___boxed), 1, 0);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingISize___closed__9(void){
_start:
{
lean_object* v___f_217_; lean_object* v___f_218_; lean_object* v___x_219_; lean_object* v___f_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___f_217_ = lean_obj_once(&l_Lean_Grind_instCommRingISize___closed__5, &l_Lean_Grind_instCommRingISize___closed__5_once, _init_l_Lean_Grind_instCommRingISize___closed__5);
v___f_218_ = lean_obj_once(&l_Lean_Grind_instCommRingISize___closed__0, &l_Lean_Grind_instCommRingISize___closed__0_once, _init_l_Lean_Grind_instCommRingISize___closed__0);
v___x_219_ = lean_obj_once(&l_Lean_Grind_instCommRingISize___closed__8, &l_Lean_Grind_instCommRingISize___closed__8_once, _init_l_Lean_Grind_instCommRingISize___closed__8);
v___f_220_ = lean_obj_once(&l_Lean_Grind_ISize_natCast___closed__0, &l_Lean_Grind_ISize_natCast___closed__0_once, _init_l_Lean_Grind_ISize_natCast___closed__0);
v___x_221_ = lean_obj_once(&l_Lean_Grind_instCommRingISize___closed__3, &l_Lean_Grind_instCommRingISize___closed__3_once, _init_l_Lean_Grind_instCommRingISize___closed__3);
v___x_222_ = lean_obj_once(&l_Lean_Grind_instCommRingISize___closed__2, &l_Lean_Grind_instCommRingISize___closed__2_once, _init_l_Lean_Grind_instCommRingISize___closed__2);
v___x_223_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v___x_221_);
lean_ctor_set(v___x_223_, 2, v___f_220_);
lean_ctor_set(v___x_223_, 3, v___x_219_);
lean_ctor_set(v___x_223_, 4, v___f_218_);
lean_ctor_set(v___x_223_, 5, v___f_217_);
return v___x_223_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingISize___closed__10(void){
_start:
{
lean_object* v___f_224_; lean_object* v___f_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___f_224_ = lean_obj_once(&l_Lean_Grind_instCommRingISize___closed__1, &l_Lean_Grind_instCommRingISize___closed__1_once, _init_l_Lean_Grind_instCommRingISize___closed__1);
v___f_225_ = lean_obj_once(&l_Lean_Grind_ISize_intCast___closed__0, &l_Lean_Grind_ISize_intCast___closed__0_once, _init_l_Lean_Grind_ISize_intCast___closed__0);
v___x_226_ = lean_obj_once(&l_Lean_Grind_instCommRingISize___closed__7, &l_Lean_Grind_instCommRingISize___closed__7_once, _init_l_Lean_Grind_instCommRingISize___closed__7);
v___x_227_ = lean_obj_once(&l_Lean_Grind_instCommRingISize___closed__6, &l_Lean_Grind_instCommRingISize___closed__6_once, _init_l_Lean_Grind_instCommRingISize___closed__6);
v___x_228_ = lean_obj_once(&l_Lean_Grind_instCommRingISize___closed__9, &l_Lean_Grind_instCommRingISize___closed__9_once, _init_l_Lean_Grind_instCommRingISize___closed__9);
v___x_229_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
lean_ctor_set(v___x_229_, 1, v___x_227_);
lean_ctor_set(v___x_229_, 2, v___x_226_);
lean_ctor_set(v___x_229_, 3, v___f_225_);
lean_ctor_set(v___x_229_, 4, v___f_224_);
return v___x_229_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingISize(void){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = lean_obj_once(&l_Lean_Grind_instCommRingISize___closed__10, &l_Lean_Grind_instCommRingISize___closed__10_once, _init_l_Lean_Grind_instCommRingISize___closed__10);
return v___x_230_;
}
}
lean_object* runtime_initialize_Init_Grind_ToInt(uint8_t builtin);
lean_object* runtime_initialize_Init_GrindInstances_ToInt(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_BitVec_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_SInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_SInt_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Ring_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Pow(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Dvd(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Ring_ToInt(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_GrindInstances_Ring_SInt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_GrindInstances_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_SInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_SInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Ring_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Pow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Dvd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Ring_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Grind_Int8_natCast = _init_l_Lean_Grind_Int8_natCast();
lean_mark_persistent(l_Lean_Grind_Int8_natCast);
l_Lean_Grind_Int8_intCast = _init_l_Lean_Grind_Int8_intCast();
lean_mark_persistent(l_Lean_Grind_Int8_intCast);
l_Lean_Grind_instCommRingInt8 = _init_l_Lean_Grind_instCommRingInt8();
lean_mark_persistent(l_Lean_Grind_instCommRingInt8);
l_Lean_Grind_Int16_natCast = _init_l_Lean_Grind_Int16_natCast();
lean_mark_persistent(l_Lean_Grind_Int16_natCast);
l_Lean_Grind_Int16_intCast = _init_l_Lean_Grind_Int16_intCast();
lean_mark_persistent(l_Lean_Grind_Int16_intCast);
l_Lean_Grind_instCommRingInt16 = _init_l_Lean_Grind_instCommRingInt16();
lean_mark_persistent(l_Lean_Grind_instCommRingInt16);
l_Lean_Grind_Int32_natCast = _init_l_Lean_Grind_Int32_natCast();
lean_mark_persistent(l_Lean_Grind_Int32_natCast);
l_Lean_Grind_Int32_intCast = _init_l_Lean_Grind_Int32_intCast();
lean_mark_persistent(l_Lean_Grind_Int32_intCast);
l_Lean_Grind_instCommRingInt32 = _init_l_Lean_Grind_instCommRingInt32();
lean_mark_persistent(l_Lean_Grind_instCommRingInt32);
l_Lean_Grind_Int64_natCast = _init_l_Lean_Grind_Int64_natCast();
lean_mark_persistent(l_Lean_Grind_Int64_natCast);
l_Lean_Grind_Int64_intCast = _init_l_Lean_Grind_Int64_intCast();
lean_mark_persistent(l_Lean_Grind_Int64_intCast);
l_Lean_Grind_instCommRingInt64 = _init_l_Lean_Grind_instCommRingInt64();
lean_mark_persistent(l_Lean_Grind_instCommRingInt64);
l_Lean_Grind_ISize_natCast = _init_l_Lean_Grind_ISize_natCast();
lean_mark_persistent(l_Lean_Grind_ISize_natCast);
l_Lean_Grind_ISize_intCast = _init_l_Lean_Grind_ISize_intCast();
lean_mark_persistent(l_Lean_Grind_ISize_intCast);
l_Lean_Grind_instCommRingISize = _init_l_Lean_Grind_instCommRingISize();
lean_mark_persistent(l_Lean_Grind_instCommRingISize);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_GrindInstances_Ring_SInt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_ToInt(uint8_t builtin);
lean_object* initialize_Init_GrindInstances_ToInt(uint8_t builtin);
lean_object* initialize_Init_Data_BitVec_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_SInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_SInt_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Grind_Ring_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Pow(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Dvd(uint8_t builtin);
lean_object* initialize_Init_Grind_Ring_ToInt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_GrindInstances_Ring_SInt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_GrindInstances_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_BitVec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_SInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_SInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Ring_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Pow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Dvd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Ring_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_GrindInstances_Ring_SInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_GrindInstances_Ring_SInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_GrindInstances_Ring_SInt(builtin);
}
#ifdef __cplusplus
}
#endif
