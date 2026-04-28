// Lean compiler output
// Module: Init.GrindInstances.Ring.UInt
// Imports: public import Init.GrindInstances.ToInt import all Init.GrindInstances.ToInt import all Init.Data.UInt.Basic public import Init.Data.UInt.Lemmas public import Init.Grind.Ring.Basic import Init.Grind.Ring.ToInt
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
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_mul(size_t, size_t);
size_t l_USize_ofInt(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mul(uint64_t, uint64_t);
uint64_t l_UInt64_ofInt(lean_object*);
uint8_t l_UInt8_ofInt(lean_object*);
uint8_t lean_uint8_mul(uint8_t, uint8_t);
lean_object* l_UInt8_ofInt___boxed(lean_object*);
lean_object* l_UInt8_sub___boxed(lean_object*, lean_object*);
lean_object* l_UInt8_neg___boxed(lean_object*);
lean_object* l_UInt8_pow___boxed(lean_object*, lean_object*);
lean_object* l_instHAdd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint8_of_nat(lean_object*);
lean_object* l_UInt8_instOfNat___boxed(lean_object*);
lean_object* l_UInt8_ofNat___boxed(lean_object*);
lean_object* l_UInt8_mul___boxed(lean_object*, lean_object*);
lean_object* l_UInt8_add___boxed(lean_object*, lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
uint32_t lean_uint32_mul(uint32_t, uint32_t);
lean_object* l_UInt16_ofInt___boxed(lean_object*);
lean_object* l_USize_ofNat___boxed(lean_object*);
uint16_t l_UInt16_ofInt(lean_object*);
uint16_t lean_uint16_mul(uint16_t, uint16_t);
uint16_t lean_uint16_of_nat(lean_object*);
uint32_t l_UInt32_ofInt(lean_object*);
lean_object* l_UInt32_sub___boxed(lean_object*, lean_object*);
lean_object* l_UInt16_sub___boxed(lean_object*, lean_object*);
lean_object* l_UInt16_neg___boxed(lean_object*);
lean_object* l_UInt16_pow___boxed(lean_object*, lean_object*);
lean_object* l_UInt16_instOfNat___boxed(lean_object*);
lean_object* l_UInt16_ofNat___boxed(lean_object*);
lean_object* l_UInt16_mul___boxed(lean_object*, lean_object*);
lean_object* l_UInt16_add___boxed(lean_object*, lean_object*);
lean_object* l_USize_mul___boxed(lean_object*, lean_object*);
lean_object* l_UInt64_ofInt___boxed(lean_object*);
lean_object* l_UInt64_sub___boxed(lean_object*, lean_object*);
lean_object* l_UInt64_neg___boxed(lean_object*);
lean_object* l_UInt64_pow___boxed(lean_object*, lean_object*);
lean_object* l_UInt64_instOfNat___boxed(lean_object*);
lean_object* l_UInt64_ofNat___boxed(lean_object*);
lean_object* l_UInt64_mul___boxed(lean_object*, lean_object*);
lean_object* l_UInt64_add___boxed(lean_object*, lean_object*);
lean_object* l_USize_instOfNat___boxed(lean_object*);
lean_object* l_USize_ofInt___boxed(lean_object*);
lean_object* l_USize_sub___boxed(lean_object*, lean_object*);
lean_object* l_USize_neg___boxed(lean_object*);
lean_object* l_USize_pow___boxed(lean_object*, lean_object*);
lean_object* l_USize_add___boxed(lean_object*, lean_object*);
lean_object* l_UInt32_mul___boxed(lean_object*, lean_object*);
lean_object* l_UInt32_instOfNat___boxed(lean_object*);
lean_object* l_UInt32_ofInt___boxed(lean_object*);
lean_object* l_UInt32_pow___boxed(lean_object*, lean_object*);
lean_object* l_UInt32_neg___boxed(lean_object*);
lean_object* l_UInt32_ofNat___boxed(lean_object*);
lean_object* l_UInt32_add___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_UInt8_natCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt8_natCast___closed__0;
LEAN_EXPORT lean_object* l_UInt8_natCast;
static lean_once_cell_t l_UInt8_intCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt8_intCast___closed__0;
LEAN_EXPORT lean_object* l_UInt8_intCast;
static lean_once_cell_t l_UInt16_natCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt16_natCast___closed__0;
LEAN_EXPORT lean_object* l_UInt16_natCast;
static lean_once_cell_t l_UInt16_intCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt16_intCast___closed__0;
LEAN_EXPORT lean_object* l_UInt16_intCast;
static lean_once_cell_t l_UInt32_natCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt32_natCast___closed__0;
LEAN_EXPORT lean_object* l_UInt32_natCast;
static lean_once_cell_t l_UInt32_intCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt32_intCast___closed__0;
LEAN_EXPORT lean_object* l_UInt32_intCast;
static lean_once_cell_t l_UInt64_natCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt64_natCast___closed__0;
LEAN_EXPORT lean_object* l_UInt64_natCast;
static lean_once_cell_t l_UInt64_intCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt64_intCast___closed__0;
LEAN_EXPORT lean_object* l_UInt64_intCast;
static lean_once_cell_t l_USize_natCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_USize_natCast___closed__0;
LEAN_EXPORT lean_object* l_USize_natCast;
static lean_once_cell_t l_USize_intCast___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_USize_intCast___closed__0;
LEAN_EXPORT lean_object* l_USize_intCast;
LEAN_EXPORT uint8_t l_Lean_Grind_instCommRingUInt8___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt8___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_instCommRingUInt8___lam__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt8___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instCommRingUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt8___closed__0;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt8___closed__1;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt8___closed__2;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt8___closed__3;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt8___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt8___closed__4;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt8___closed__5;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt8___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt8___closed__6;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt8___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt8___closed__7;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt8___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt8___closed__8;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt8___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt8___closed__9;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt8___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt8___closed__10;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt8;
LEAN_EXPORT uint16_t l_Lean_Grind_instCommRingUInt16___lam__0(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt16___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint16_t l_Lean_Grind_instCommRingUInt16___lam__1(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt16___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instCommRingUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt16___closed__0;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt16___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt16___closed__1;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt16___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt16___closed__2;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt16___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt16___closed__3;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt16___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt16___closed__4;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt16___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt16___closed__5;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt16___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt16___closed__6;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt16___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt16___closed__7;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt16___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt16___closed__8;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt16___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt16___closed__9;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt16___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt16___closed__10;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt16;
LEAN_EXPORT uint32_t l_Lean_Grind_instCommRingUInt32___lam__0(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt32___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Grind_instCommRingUInt32___lam__1(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt32___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instCommRingUInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt32___closed__0;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt32___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt32___closed__1;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt32___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt32___closed__2;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt32___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt32___closed__3;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt32___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt32___closed__4;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt32___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt32___closed__5;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt32___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt32___closed__6;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt32___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt32___closed__7;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt32___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt32___closed__8;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt32___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt32___closed__9;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt32___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt32___closed__10;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt32;
LEAN_EXPORT uint64_t l_Lean_Grind_instCommRingUInt64___lam__0(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt64___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Grind_instCommRingUInt64___lam__1(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt64___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instCommRingUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt64___closed__0;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt64___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt64___closed__1;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt64___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt64___closed__2;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt64___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt64___closed__3;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt64___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt64___closed__4;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt64___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt64___closed__5;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt64___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt64___closed__6;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt64___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt64___closed__7;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt64___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt64___closed__8;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt64___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt64___closed__9;
static lean_once_cell_t l_Lean_Grind_instCommRingUInt64___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUInt64___closed__10;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt64;
LEAN_EXPORT size_t l_Lean_Grind_instCommRingUSize___lam__0(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUSize___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_Grind_instCommRingUSize___lam__1(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUSize___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_instCommRingUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUSize___closed__0;
static lean_once_cell_t l_Lean_Grind_instCommRingUSize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUSize___closed__1;
static lean_once_cell_t l_Lean_Grind_instCommRingUSize___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUSize___closed__2;
static lean_once_cell_t l_Lean_Grind_instCommRingUSize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUSize___closed__3;
static lean_once_cell_t l_Lean_Grind_instCommRingUSize___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUSize___closed__4;
static lean_once_cell_t l_Lean_Grind_instCommRingUSize___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUSize___closed__5;
static lean_once_cell_t l_Lean_Grind_instCommRingUSize___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUSize___closed__6;
static lean_once_cell_t l_Lean_Grind_instCommRingUSize___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUSize___closed__7;
static lean_once_cell_t l_Lean_Grind_instCommRingUSize___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUSize___closed__8;
static lean_once_cell_t l_Lean_Grind_instCommRingUSize___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUSize___closed__9;
static lean_once_cell_t l_Lean_Grind_instCommRingUSize___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_instCommRingUSize___closed__10;
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUSize;
static lean_object* _init_l_UInt8_natCast___closed__0(void){
_start:
{
lean_object* v___f_1_; 
v___f_1_ = lean_alloc_closure((void*)(l_UInt8_ofNat___boxed), 1, 0);
return v___f_1_;
}
}
static lean_object* _init_l_UInt8_natCast(void){
_start:
{
lean_object* v___f_2_; 
v___f_2_ = lean_obj_once(&l_UInt8_natCast___closed__0, &l_UInt8_natCast___closed__0_once, _init_l_UInt8_natCast___closed__0);
return v___f_2_;
}
}
static lean_object* _init_l_UInt8_intCast___closed__0(void){
_start:
{
lean_object* v___f_3_; 
v___f_3_ = lean_alloc_closure((void*)(l_UInt8_ofInt___boxed), 1, 0);
return v___f_3_;
}
}
static lean_object* _init_l_UInt8_intCast(void){
_start:
{
lean_object* v___f_4_; 
v___f_4_ = lean_obj_once(&l_UInt8_intCast___closed__0, &l_UInt8_intCast___closed__0_once, _init_l_UInt8_intCast___closed__0);
return v___f_4_;
}
}
static lean_object* _init_l_UInt16_natCast___closed__0(void){
_start:
{
lean_object* v___f_5_; 
v___f_5_ = lean_alloc_closure((void*)(l_UInt16_ofNat___boxed), 1, 0);
return v___f_5_;
}
}
static lean_object* _init_l_UInt16_natCast(void){
_start:
{
lean_object* v___f_6_; 
v___f_6_ = lean_obj_once(&l_UInt16_natCast___closed__0, &l_UInt16_natCast___closed__0_once, _init_l_UInt16_natCast___closed__0);
return v___f_6_;
}
}
static lean_object* _init_l_UInt16_intCast___closed__0(void){
_start:
{
lean_object* v___f_7_; 
v___f_7_ = lean_alloc_closure((void*)(l_UInt16_ofInt___boxed), 1, 0);
return v___f_7_;
}
}
static lean_object* _init_l_UInt16_intCast(void){
_start:
{
lean_object* v___f_8_; 
v___f_8_ = lean_obj_once(&l_UInt16_intCast___closed__0, &l_UInt16_intCast___closed__0_once, _init_l_UInt16_intCast___closed__0);
return v___f_8_;
}
}
static lean_object* _init_l_UInt32_natCast___closed__0(void){
_start:
{
lean_object* v___f_9_; 
v___f_9_ = lean_alloc_closure((void*)(l_UInt32_ofNat___boxed), 1, 0);
return v___f_9_;
}
}
static lean_object* _init_l_UInt32_natCast(void){
_start:
{
lean_object* v___f_10_; 
v___f_10_ = lean_obj_once(&l_UInt32_natCast___closed__0, &l_UInt32_natCast___closed__0_once, _init_l_UInt32_natCast___closed__0);
return v___f_10_;
}
}
static lean_object* _init_l_UInt32_intCast___closed__0(void){
_start:
{
lean_object* v___f_11_; 
v___f_11_ = lean_alloc_closure((void*)(l_UInt32_ofInt___boxed), 1, 0);
return v___f_11_;
}
}
static lean_object* _init_l_UInt32_intCast(void){
_start:
{
lean_object* v___f_12_; 
v___f_12_ = lean_obj_once(&l_UInt32_intCast___closed__0, &l_UInt32_intCast___closed__0_once, _init_l_UInt32_intCast___closed__0);
return v___f_12_;
}
}
static lean_object* _init_l_UInt64_natCast___closed__0(void){
_start:
{
lean_object* v___f_13_; 
v___f_13_ = lean_alloc_closure((void*)(l_UInt64_ofNat___boxed), 1, 0);
return v___f_13_;
}
}
static lean_object* _init_l_UInt64_natCast(void){
_start:
{
lean_object* v___f_14_; 
v___f_14_ = lean_obj_once(&l_UInt64_natCast___closed__0, &l_UInt64_natCast___closed__0_once, _init_l_UInt64_natCast___closed__0);
return v___f_14_;
}
}
static lean_object* _init_l_UInt64_intCast___closed__0(void){
_start:
{
lean_object* v___f_15_; 
v___f_15_ = lean_alloc_closure((void*)(l_UInt64_ofInt___boxed), 1, 0);
return v___f_15_;
}
}
static lean_object* _init_l_UInt64_intCast(void){
_start:
{
lean_object* v___f_16_; 
v___f_16_ = lean_obj_once(&l_UInt64_intCast___closed__0, &l_UInt64_intCast___closed__0_once, _init_l_UInt64_intCast___closed__0);
return v___f_16_;
}
}
static lean_object* _init_l_USize_natCast___closed__0(void){
_start:
{
lean_object* v___f_17_; 
v___f_17_ = lean_alloc_closure((void*)(l_USize_ofNat___boxed), 1, 0);
return v___f_17_;
}
}
static lean_object* _init_l_USize_natCast(void){
_start:
{
lean_object* v___f_18_; 
v___f_18_ = lean_obj_once(&l_USize_natCast___closed__0, &l_USize_natCast___closed__0_once, _init_l_USize_natCast___closed__0);
return v___f_18_;
}
}
static lean_object* _init_l_USize_intCast___closed__0(void){
_start:
{
lean_object* v___f_19_; 
v___f_19_ = lean_alloc_closure((void*)(l_USize_ofInt___boxed), 1, 0);
return v___f_19_;
}
}
static lean_object* _init_l_USize_intCast(void){
_start:
{
lean_object* v___f_20_; 
v___f_20_ = lean_obj_once(&l_USize_intCast___closed__0, &l_USize_intCast___closed__0_once, _init_l_USize_intCast___closed__0);
return v___f_20_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_instCommRingUInt8___lam__0(lean_object* v_x1_21_, uint8_t v_x2_22_){
_start:
{
uint8_t v___x_23_; uint8_t v___x_24_; 
v___x_23_ = lean_uint8_of_nat(v_x1_21_);
v___x_24_ = lean_uint8_mul(v___x_23_, v_x2_22_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt8___lam__0___boxed(lean_object* v_x1_25_, lean_object* v_x2_26_){
_start:
{
uint8_t v_x2_64__boxed_27_; uint8_t v_res_28_; lean_object* v_r_29_; 
v_x2_64__boxed_27_ = lean_unbox(v_x2_26_);
v_res_28_ = l_Lean_Grind_instCommRingUInt8___lam__0(v_x1_25_, v_x2_64__boxed_27_);
lean_dec(v_x1_25_);
v_r_29_ = lean_box(v_res_28_);
return v_r_29_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_instCommRingUInt8___lam__1(lean_object* v_x1_30_, uint8_t v_x2_31_){
_start:
{
uint8_t v___x_32_; uint8_t v___x_33_; 
v___x_32_ = l_UInt8_ofInt(v_x1_30_);
v___x_33_ = lean_uint8_mul(v___x_32_, v_x2_31_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt8___lam__1___boxed(lean_object* v_x1_34_, lean_object* v_x2_35_){
_start:
{
uint8_t v_x2_74__boxed_36_; uint8_t v_res_37_; lean_object* v_r_38_; 
v_x2_74__boxed_36_ = lean_unbox(v_x2_35_);
v_res_37_ = l_Lean_Grind_instCommRingUInt8___lam__1(v_x1_34_, v_x2_74__boxed_36_);
lean_dec(v_x1_34_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt8___closed__0(void){
_start:
{
lean_object* v___f_39_; 
v___f_39_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingUInt8___lam__0___boxed), 2, 0);
return v___f_39_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt8___closed__1(void){
_start:
{
lean_object* v___f_40_; 
v___f_40_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingUInt8___lam__1___boxed), 2, 0);
return v___f_40_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt8___closed__2(void){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_alloc_closure((void*)(l_UInt8_add___boxed), 2, 0);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt8___closed__3(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_alloc_closure((void*)(l_UInt8_mul___boxed), 2, 0);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt8___closed__4(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_alloc_closure((void*)(l_UInt8_pow___boxed), 2, 0);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt8___closed__5(void){
_start:
{
lean_object* v___x_44_; lean_object* v___f_45_; 
v___x_44_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt8___closed__4, &l_Lean_Grind_instCommRingUInt8___closed__4_once, _init_l_Lean_Grind_instCommRingUInt8___closed__4);
v___f_45_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_45_, 0, v___x_44_);
return v___f_45_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt8___closed__6(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_alloc_closure((void*)(l_UInt8_neg___boxed), 1, 0);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt8___closed__7(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_alloc_closure((void*)(l_UInt8_sub___boxed), 2, 0);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt8___closed__8(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_alloc_closure((void*)(l_UInt8_instOfNat___boxed), 1, 0);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt8___closed__9(void){
_start:
{
lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___x_51_; lean_object* v___f_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___f_49_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt8___closed__5, &l_Lean_Grind_instCommRingUInt8___closed__5_once, _init_l_Lean_Grind_instCommRingUInt8___closed__5);
v___f_50_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt8___closed__0, &l_Lean_Grind_instCommRingUInt8___closed__0_once, _init_l_Lean_Grind_instCommRingUInt8___closed__0);
v___x_51_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt8___closed__8, &l_Lean_Grind_instCommRingUInt8___closed__8_once, _init_l_Lean_Grind_instCommRingUInt8___closed__8);
v___f_52_ = lean_obj_once(&l_UInt8_natCast___closed__0, &l_UInt8_natCast___closed__0_once, _init_l_UInt8_natCast___closed__0);
v___x_53_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt8___closed__3, &l_Lean_Grind_instCommRingUInt8___closed__3_once, _init_l_Lean_Grind_instCommRingUInt8___closed__3);
v___x_54_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt8___closed__2, &l_Lean_Grind_instCommRingUInt8___closed__2_once, _init_l_Lean_Grind_instCommRingUInt8___closed__2);
v___x_55_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
lean_ctor_set(v___x_55_, 2, v___f_52_);
lean_ctor_set(v___x_55_, 3, v___x_51_);
lean_ctor_set(v___x_55_, 4, v___f_50_);
lean_ctor_set(v___x_55_, 5, v___f_49_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt8___closed__10(void){
_start:
{
lean_object* v___f_56_; lean_object* v___f_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___f_56_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt8___closed__1, &l_Lean_Grind_instCommRingUInt8___closed__1_once, _init_l_Lean_Grind_instCommRingUInt8___closed__1);
v___f_57_ = lean_obj_once(&l_UInt8_intCast___closed__0, &l_UInt8_intCast___closed__0_once, _init_l_UInt8_intCast___closed__0);
v___x_58_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt8___closed__7, &l_Lean_Grind_instCommRingUInt8___closed__7_once, _init_l_Lean_Grind_instCommRingUInt8___closed__7);
v___x_59_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt8___closed__6, &l_Lean_Grind_instCommRingUInt8___closed__6_once, _init_l_Lean_Grind_instCommRingUInt8___closed__6);
v___x_60_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt8___closed__9, &l_Lean_Grind_instCommRingUInt8___closed__9_once, _init_l_Lean_Grind_instCommRingUInt8___closed__9);
v___x_61_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
lean_ctor_set(v___x_61_, 1, v___x_59_);
lean_ctor_set(v___x_61_, 2, v___x_58_);
lean_ctor_set(v___x_61_, 3, v___f_57_);
lean_ctor_set(v___x_61_, 4, v___f_56_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt8(void){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt8___closed__10, &l_Lean_Grind_instCommRingUInt8___closed__10_once, _init_l_Lean_Grind_instCommRingUInt8___closed__10);
return v___x_62_;
}
}
LEAN_EXPORT uint16_t l_Lean_Grind_instCommRingUInt16___lam__0(lean_object* v_x1_63_, uint16_t v_x2_64_){
_start:
{
uint16_t v___x_65_; uint16_t v___x_66_; 
v___x_65_ = lean_uint16_of_nat(v_x1_63_);
v___x_66_ = lean_uint16_mul(v___x_65_, v_x2_64_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt16___lam__0___boxed(lean_object* v_x1_67_, lean_object* v_x2_68_){
_start:
{
uint16_t v_x2_64__boxed_69_; uint16_t v_res_70_; lean_object* v_r_71_; 
v_x2_64__boxed_69_ = lean_unbox(v_x2_68_);
v_res_70_ = l_Lean_Grind_instCommRingUInt16___lam__0(v_x1_67_, v_x2_64__boxed_69_);
lean_dec(v_x1_67_);
v_r_71_ = lean_box(v_res_70_);
return v_r_71_;
}
}
LEAN_EXPORT uint16_t l_Lean_Grind_instCommRingUInt16___lam__1(lean_object* v_x1_72_, uint16_t v_x2_73_){
_start:
{
uint16_t v___x_74_; uint16_t v___x_75_; 
v___x_74_ = l_UInt16_ofInt(v_x1_72_);
v___x_75_ = lean_uint16_mul(v___x_74_, v_x2_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt16___lam__1___boxed(lean_object* v_x1_76_, lean_object* v_x2_77_){
_start:
{
uint16_t v_x2_74__boxed_78_; uint16_t v_res_79_; lean_object* v_r_80_; 
v_x2_74__boxed_78_ = lean_unbox(v_x2_77_);
v_res_79_ = l_Lean_Grind_instCommRingUInt16___lam__1(v_x1_76_, v_x2_74__boxed_78_);
lean_dec(v_x1_76_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt16___closed__0(void){
_start:
{
lean_object* v___f_81_; 
v___f_81_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingUInt16___lam__0___boxed), 2, 0);
return v___f_81_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt16___closed__1(void){
_start:
{
lean_object* v___f_82_; 
v___f_82_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingUInt16___lam__1___boxed), 2, 0);
return v___f_82_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt16___closed__2(void){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lean_alloc_closure((void*)(l_UInt16_add___boxed), 2, 0);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt16___closed__3(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lean_alloc_closure((void*)(l_UInt16_mul___boxed), 2, 0);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt16___closed__4(void){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lean_alloc_closure((void*)(l_UInt16_pow___boxed), 2, 0);
return v___x_85_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt16___closed__5(void){
_start:
{
lean_object* v___x_86_; lean_object* v___f_87_; 
v___x_86_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt16___closed__4, &l_Lean_Grind_instCommRingUInt16___closed__4_once, _init_l_Lean_Grind_instCommRingUInt16___closed__4);
v___f_87_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_87_, 0, v___x_86_);
return v___f_87_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt16___closed__6(void){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_alloc_closure((void*)(l_UInt16_neg___boxed), 1, 0);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt16___closed__7(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_alloc_closure((void*)(l_UInt16_sub___boxed), 2, 0);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt16___closed__8(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_alloc_closure((void*)(l_UInt16_instOfNat___boxed), 1, 0);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt16___closed__9(void){
_start:
{
lean_object* v___f_91_; lean_object* v___f_92_; lean_object* v___x_93_; lean_object* v___f_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___f_91_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt16___closed__5, &l_Lean_Grind_instCommRingUInt16___closed__5_once, _init_l_Lean_Grind_instCommRingUInt16___closed__5);
v___f_92_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt16___closed__0, &l_Lean_Grind_instCommRingUInt16___closed__0_once, _init_l_Lean_Grind_instCommRingUInt16___closed__0);
v___x_93_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt16___closed__8, &l_Lean_Grind_instCommRingUInt16___closed__8_once, _init_l_Lean_Grind_instCommRingUInt16___closed__8);
v___f_94_ = lean_obj_once(&l_UInt16_natCast___closed__0, &l_UInt16_natCast___closed__0_once, _init_l_UInt16_natCast___closed__0);
v___x_95_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt16___closed__3, &l_Lean_Grind_instCommRingUInt16___closed__3_once, _init_l_Lean_Grind_instCommRingUInt16___closed__3);
v___x_96_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt16___closed__2, &l_Lean_Grind_instCommRingUInt16___closed__2_once, _init_l_Lean_Grind_instCommRingUInt16___closed__2);
v___x_97_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___x_95_);
lean_ctor_set(v___x_97_, 2, v___f_94_);
lean_ctor_set(v___x_97_, 3, v___x_93_);
lean_ctor_set(v___x_97_, 4, v___f_92_);
lean_ctor_set(v___x_97_, 5, v___f_91_);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt16___closed__10(void){
_start:
{
lean_object* v___f_98_; lean_object* v___f_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___f_98_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt16___closed__1, &l_Lean_Grind_instCommRingUInt16___closed__1_once, _init_l_Lean_Grind_instCommRingUInt16___closed__1);
v___f_99_ = lean_obj_once(&l_UInt16_intCast___closed__0, &l_UInt16_intCast___closed__0_once, _init_l_UInt16_intCast___closed__0);
v___x_100_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt16___closed__7, &l_Lean_Grind_instCommRingUInt16___closed__7_once, _init_l_Lean_Grind_instCommRingUInt16___closed__7);
v___x_101_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt16___closed__6, &l_Lean_Grind_instCommRingUInt16___closed__6_once, _init_l_Lean_Grind_instCommRingUInt16___closed__6);
v___x_102_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt16___closed__9, &l_Lean_Grind_instCommRingUInt16___closed__9_once, _init_l_Lean_Grind_instCommRingUInt16___closed__9);
v___x_103_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___x_101_);
lean_ctor_set(v___x_103_, 2, v___x_100_);
lean_ctor_set(v___x_103_, 3, v___f_99_);
lean_ctor_set(v___x_103_, 4, v___f_98_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt16(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt16___closed__10, &l_Lean_Grind_instCommRingUInt16___closed__10_once, _init_l_Lean_Grind_instCommRingUInt16___closed__10);
return v___x_104_;
}
}
LEAN_EXPORT uint32_t l_Lean_Grind_instCommRingUInt32___lam__0(lean_object* v_x1_105_, uint32_t v_x2_106_){
_start:
{
uint32_t v___x_107_; uint32_t v___x_108_; 
v___x_107_ = lean_uint32_of_nat(v_x1_105_);
v___x_108_ = lean_uint32_mul(v___x_107_, v_x2_106_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt32___lam__0___boxed(lean_object* v_x1_109_, lean_object* v_x2_110_){
_start:
{
uint32_t v_x2_64__boxed_111_; uint32_t v_res_112_; lean_object* v_r_113_; 
v_x2_64__boxed_111_ = lean_unbox_uint32(v_x2_110_);
lean_dec(v_x2_110_);
v_res_112_ = l_Lean_Grind_instCommRingUInt32___lam__0(v_x1_109_, v_x2_64__boxed_111_);
lean_dec(v_x1_109_);
v_r_113_ = lean_box_uint32(v_res_112_);
return v_r_113_;
}
}
LEAN_EXPORT uint32_t l_Lean_Grind_instCommRingUInt32___lam__1(lean_object* v_x1_114_, uint32_t v_x2_115_){
_start:
{
uint32_t v___x_116_; uint32_t v___x_117_; 
v___x_116_ = l_UInt32_ofInt(v_x1_114_);
v___x_117_ = lean_uint32_mul(v___x_116_, v_x2_115_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt32___lam__1___boxed(lean_object* v_x1_118_, lean_object* v_x2_119_){
_start:
{
uint32_t v_x2_74__boxed_120_; uint32_t v_res_121_; lean_object* v_r_122_; 
v_x2_74__boxed_120_ = lean_unbox_uint32(v_x2_119_);
lean_dec(v_x2_119_);
v_res_121_ = l_Lean_Grind_instCommRingUInt32___lam__1(v_x1_118_, v_x2_74__boxed_120_);
lean_dec(v_x1_118_);
v_r_122_ = lean_box_uint32(v_res_121_);
return v_r_122_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt32___closed__0(void){
_start:
{
lean_object* v___f_123_; 
v___f_123_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingUInt32___lam__0___boxed), 2, 0);
return v___f_123_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt32___closed__1(void){
_start:
{
lean_object* v___f_124_; 
v___f_124_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingUInt32___lam__1___boxed), 2, 0);
return v___f_124_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt32___closed__2(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lean_alloc_closure((void*)(l_UInt32_add___boxed), 2, 0);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt32___closed__3(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_alloc_closure((void*)(l_UInt32_mul___boxed), 2, 0);
return v___x_126_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt32___closed__4(void){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lean_alloc_closure((void*)(l_UInt32_pow___boxed), 2, 0);
return v___x_127_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt32___closed__5(void){
_start:
{
lean_object* v___x_128_; lean_object* v___f_129_; 
v___x_128_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt32___closed__4, &l_Lean_Grind_instCommRingUInt32___closed__4_once, _init_l_Lean_Grind_instCommRingUInt32___closed__4);
v___f_129_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_129_, 0, v___x_128_);
return v___f_129_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt32___closed__6(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_alloc_closure((void*)(l_UInt32_neg___boxed), 1, 0);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt32___closed__7(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_alloc_closure((void*)(l_UInt32_sub___boxed), 2, 0);
return v___x_131_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt32___closed__8(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_alloc_closure((void*)(l_UInt32_instOfNat___boxed), 1, 0);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt32___closed__9(void){
_start:
{
lean_object* v___f_133_; lean_object* v___f_134_; lean_object* v___x_135_; lean_object* v___f_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___f_133_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt32___closed__5, &l_Lean_Grind_instCommRingUInt32___closed__5_once, _init_l_Lean_Grind_instCommRingUInt32___closed__5);
v___f_134_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt32___closed__0, &l_Lean_Grind_instCommRingUInt32___closed__0_once, _init_l_Lean_Grind_instCommRingUInt32___closed__0);
v___x_135_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt32___closed__8, &l_Lean_Grind_instCommRingUInt32___closed__8_once, _init_l_Lean_Grind_instCommRingUInt32___closed__8);
v___f_136_ = lean_obj_once(&l_UInt32_natCast___closed__0, &l_UInt32_natCast___closed__0_once, _init_l_UInt32_natCast___closed__0);
v___x_137_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt32___closed__3, &l_Lean_Grind_instCommRingUInt32___closed__3_once, _init_l_Lean_Grind_instCommRingUInt32___closed__3);
v___x_138_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt32___closed__2, &l_Lean_Grind_instCommRingUInt32___closed__2_once, _init_l_Lean_Grind_instCommRingUInt32___closed__2);
v___x_139_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
lean_ctor_set(v___x_139_, 1, v___x_137_);
lean_ctor_set(v___x_139_, 2, v___f_136_);
lean_ctor_set(v___x_139_, 3, v___x_135_);
lean_ctor_set(v___x_139_, 4, v___f_134_);
lean_ctor_set(v___x_139_, 5, v___f_133_);
return v___x_139_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt32___closed__10(void){
_start:
{
lean_object* v___f_140_; lean_object* v___f_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___f_140_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt32___closed__1, &l_Lean_Grind_instCommRingUInt32___closed__1_once, _init_l_Lean_Grind_instCommRingUInt32___closed__1);
v___f_141_ = lean_obj_once(&l_UInt32_intCast___closed__0, &l_UInt32_intCast___closed__0_once, _init_l_UInt32_intCast___closed__0);
v___x_142_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt32___closed__7, &l_Lean_Grind_instCommRingUInt32___closed__7_once, _init_l_Lean_Grind_instCommRingUInt32___closed__7);
v___x_143_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt32___closed__6, &l_Lean_Grind_instCommRingUInt32___closed__6_once, _init_l_Lean_Grind_instCommRingUInt32___closed__6);
v___x_144_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt32___closed__9, &l_Lean_Grind_instCommRingUInt32___closed__9_once, _init_l_Lean_Grind_instCommRingUInt32___closed__9);
v___x_145_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
lean_ctor_set(v___x_145_, 1, v___x_143_);
lean_ctor_set(v___x_145_, 2, v___x_142_);
lean_ctor_set(v___x_145_, 3, v___f_141_);
lean_ctor_set(v___x_145_, 4, v___f_140_);
return v___x_145_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt32(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt32___closed__10, &l_Lean_Grind_instCommRingUInt32___closed__10_once, _init_l_Lean_Grind_instCommRingUInt32___closed__10);
return v___x_146_;
}
}
LEAN_EXPORT uint64_t l_Lean_Grind_instCommRingUInt64___lam__0(lean_object* v_x1_147_, uint64_t v_x2_148_){
_start:
{
uint64_t v___x_149_; uint64_t v___x_150_; 
v___x_149_ = lean_uint64_of_nat(v_x1_147_);
v___x_150_ = lean_uint64_mul(v___x_149_, v_x2_148_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt64___lam__0___boxed(lean_object* v_x1_151_, lean_object* v_x2_152_){
_start:
{
uint64_t v_x2_64__boxed_153_; uint64_t v_res_154_; lean_object* v_r_155_; 
v_x2_64__boxed_153_ = lean_unbox_uint64(v_x2_152_);
lean_dec_ref(v_x2_152_);
v_res_154_ = l_Lean_Grind_instCommRingUInt64___lam__0(v_x1_151_, v_x2_64__boxed_153_);
lean_dec(v_x1_151_);
v_r_155_ = lean_box_uint64(v_res_154_);
return v_r_155_;
}
}
LEAN_EXPORT uint64_t l_Lean_Grind_instCommRingUInt64___lam__1(lean_object* v_x1_156_, uint64_t v_x2_157_){
_start:
{
uint64_t v___x_158_; uint64_t v___x_159_; 
v___x_158_ = l_UInt64_ofInt(v_x1_156_);
v___x_159_ = lean_uint64_mul(v___x_158_, v_x2_157_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUInt64___lam__1___boxed(lean_object* v_x1_160_, lean_object* v_x2_161_){
_start:
{
uint64_t v_x2_74__boxed_162_; uint64_t v_res_163_; lean_object* v_r_164_; 
v_x2_74__boxed_162_ = lean_unbox_uint64(v_x2_161_);
lean_dec_ref(v_x2_161_);
v_res_163_ = l_Lean_Grind_instCommRingUInt64___lam__1(v_x1_160_, v_x2_74__boxed_162_);
lean_dec(v_x1_160_);
v_r_164_ = lean_box_uint64(v_res_163_);
return v_r_164_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt64___closed__0(void){
_start:
{
lean_object* v___f_165_; 
v___f_165_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingUInt64___lam__0___boxed), 2, 0);
return v___f_165_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt64___closed__1(void){
_start:
{
lean_object* v___f_166_; 
v___f_166_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingUInt64___lam__1___boxed), 2, 0);
return v___f_166_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt64___closed__2(void){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lean_alloc_closure((void*)(l_UInt64_add___boxed), 2, 0);
return v___x_167_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt64___closed__3(void){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_alloc_closure((void*)(l_UInt64_mul___boxed), 2, 0);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt64___closed__4(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_alloc_closure((void*)(l_UInt64_pow___boxed), 2, 0);
return v___x_169_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt64___closed__5(void){
_start:
{
lean_object* v___x_170_; lean_object* v___f_171_; 
v___x_170_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt64___closed__4, &l_Lean_Grind_instCommRingUInt64___closed__4_once, _init_l_Lean_Grind_instCommRingUInt64___closed__4);
v___f_171_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_171_, 0, v___x_170_);
return v___f_171_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt64___closed__6(void){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_alloc_closure((void*)(l_UInt64_neg___boxed), 1, 0);
return v___x_172_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt64___closed__7(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_alloc_closure((void*)(l_UInt64_sub___boxed), 2, 0);
return v___x_173_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt64___closed__8(void){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = lean_alloc_closure((void*)(l_UInt64_instOfNat___boxed), 1, 0);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt64___closed__9(void){
_start:
{
lean_object* v___f_175_; lean_object* v___f_176_; lean_object* v___x_177_; lean_object* v___f_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___f_175_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt64___closed__5, &l_Lean_Grind_instCommRingUInt64___closed__5_once, _init_l_Lean_Grind_instCommRingUInt64___closed__5);
v___f_176_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt64___closed__0, &l_Lean_Grind_instCommRingUInt64___closed__0_once, _init_l_Lean_Grind_instCommRingUInt64___closed__0);
v___x_177_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt64___closed__8, &l_Lean_Grind_instCommRingUInt64___closed__8_once, _init_l_Lean_Grind_instCommRingUInt64___closed__8);
v___f_178_ = lean_obj_once(&l_UInt64_natCast___closed__0, &l_UInt64_natCast___closed__0_once, _init_l_UInt64_natCast___closed__0);
v___x_179_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt64___closed__3, &l_Lean_Grind_instCommRingUInt64___closed__3_once, _init_l_Lean_Grind_instCommRingUInt64___closed__3);
v___x_180_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt64___closed__2, &l_Lean_Grind_instCommRingUInt64___closed__2_once, _init_l_Lean_Grind_instCommRingUInt64___closed__2);
v___x_181_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
lean_ctor_set(v___x_181_, 1, v___x_179_);
lean_ctor_set(v___x_181_, 2, v___f_178_);
lean_ctor_set(v___x_181_, 3, v___x_177_);
lean_ctor_set(v___x_181_, 4, v___f_176_);
lean_ctor_set(v___x_181_, 5, v___f_175_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt64___closed__10(void){
_start:
{
lean_object* v___f_182_; lean_object* v___f_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___f_182_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt64___closed__1, &l_Lean_Grind_instCommRingUInt64___closed__1_once, _init_l_Lean_Grind_instCommRingUInt64___closed__1);
v___f_183_ = lean_obj_once(&l_UInt64_intCast___closed__0, &l_UInt64_intCast___closed__0_once, _init_l_UInt64_intCast___closed__0);
v___x_184_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt64___closed__7, &l_Lean_Grind_instCommRingUInt64___closed__7_once, _init_l_Lean_Grind_instCommRingUInt64___closed__7);
v___x_185_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt64___closed__6, &l_Lean_Grind_instCommRingUInt64___closed__6_once, _init_l_Lean_Grind_instCommRingUInt64___closed__6);
v___x_186_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt64___closed__9, &l_Lean_Grind_instCommRingUInt64___closed__9_once, _init_l_Lean_Grind_instCommRingUInt64___closed__9);
v___x_187_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v___x_185_);
lean_ctor_set(v___x_187_, 2, v___x_184_);
lean_ctor_set(v___x_187_, 3, v___f_183_);
lean_ctor_set(v___x_187_, 4, v___f_182_);
return v___x_187_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUInt64(void){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = lean_obj_once(&l_Lean_Grind_instCommRingUInt64___closed__10, &l_Lean_Grind_instCommRingUInt64___closed__10_once, _init_l_Lean_Grind_instCommRingUInt64___closed__10);
return v___x_188_;
}
}
LEAN_EXPORT size_t l_Lean_Grind_instCommRingUSize___lam__0(lean_object* v_x1_189_, size_t v_x2_190_){
_start:
{
size_t v___x_191_; size_t v___x_192_; 
v___x_191_ = lean_usize_of_nat(v_x1_189_);
v___x_192_ = lean_usize_mul(v___x_191_, v_x2_190_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUSize___lam__0___boxed(lean_object* v_x1_193_, lean_object* v_x2_194_){
_start:
{
size_t v_x2_64__boxed_195_; size_t v_res_196_; lean_object* v_r_197_; 
v_x2_64__boxed_195_ = lean_unbox_usize(v_x2_194_);
lean_dec(v_x2_194_);
v_res_196_ = l_Lean_Grind_instCommRingUSize___lam__0(v_x1_193_, v_x2_64__boxed_195_);
lean_dec(v_x1_193_);
v_r_197_ = lean_box_usize(v_res_196_);
return v_r_197_;
}
}
LEAN_EXPORT size_t l_Lean_Grind_instCommRingUSize___lam__1(lean_object* v_x1_198_, size_t v_x2_199_){
_start:
{
size_t v___x_200_; size_t v___x_201_; 
v___x_200_ = l_USize_ofInt(v_x1_198_);
v___x_201_ = lean_usize_mul(v___x_200_, v_x2_199_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_instCommRingUSize___lam__1___boxed(lean_object* v_x1_202_, lean_object* v_x2_203_){
_start:
{
size_t v_x2_74__boxed_204_; size_t v_res_205_; lean_object* v_r_206_; 
v_x2_74__boxed_204_ = lean_unbox_usize(v_x2_203_);
lean_dec(v_x2_203_);
v_res_205_ = l_Lean_Grind_instCommRingUSize___lam__1(v_x1_202_, v_x2_74__boxed_204_);
lean_dec(v_x1_202_);
v_r_206_ = lean_box_usize(v_res_205_);
return v_r_206_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUSize___closed__0(void){
_start:
{
lean_object* v___f_207_; 
v___f_207_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingUSize___lam__0___boxed), 2, 0);
return v___f_207_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUSize___closed__1(void){
_start:
{
lean_object* v___f_208_; 
v___f_208_ = lean_alloc_closure((void*)(l_Lean_Grind_instCommRingUSize___lam__1___boxed), 2, 0);
return v___f_208_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUSize___closed__2(void){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = lean_alloc_closure((void*)(l_USize_add___boxed), 2, 0);
return v___x_209_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUSize___closed__3(void){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = lean_alloc_closure((void*)(l_USize_mul___boxed), 2, 0);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUSize___closed__4(void){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = lean_alloc_closure((void*)(l_USize_pow___boxed), 2, 0);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUSize___closed__5(void){
_start:
{
lean_object* v___x_212_; lean_object* v___f_213_; 
v___x_212_ = lean_obj_once(&l_Lean_Grind_instCommRingUSize___closed__4, &l_Lean_Grind_instCommRingUSize___closed__4_once, _init_l_Lean_Grind_instCommRingUSize___closed__4);
v___f_213_ = lean_alloc_closure((void*)(l_instHAdd___redArg___lam__0), 3, 1);
lean_closure_set(v___f_213_, 0, v___x_212_);
return v___f_213_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUSize___closed__6(void){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_alloc_closure((void*)(l_USize_neg___boxed), 1, 0);
return v___x_214_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUSize___closed__7(void){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = lean_alloc_closure((void*)(l_USize_sub___boxed), 2, 0);
return v___x_215_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUSize___closed__8(void){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = lean_alloc_closure((void*)(l_USize_instOfNat___boxed), 1, 0);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUSize___closed__9(void){
_start:
{
lean_object* v___f_217_; lean_object* v___f_218_; lean_object* v___x_219_; lean_object* v___f_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___f_217_ = lean_obj_once(&l_Lean_Grind_instCommRingUSize___closed__5, &l_Lean_Grind_instCommRingUSize___closed__5_once, _init_l_Lean_Grind_instCommRingUSize___closed__5);
v___f_218_ = lean_obj_once(&l_Lean_Grind_instCommRingUSize___closed__0, &l_Lean_Grind_instCommRingUSize___closed__0_once, _init_l_Lean_Grind_instCommRingUSize___closed__0);
v___x_219_ = lean_obj_once(&l_Lean_Grind_instCommRingUSize___closed__8, &l_Lean_Grind_instCommRingUSize___closed__8_once, _init_l_Lean_Grind_instCommRingUSize___closed__8);
v___f_220_ = lean_obj_once(&l_USize_natCast___closed__0, &l_USize_natCast___closed__0_once, _init_l_USize_natCast___closed__0);
v___x_221_ = lean_obj_once(&l_Lean_Grind_instCommRingUSize___closed__3, &l_Lean_Grind_instCommRingUSize___closed__3_once, _init_l_Lean_Grind_instCommRingUSize___closed__3);
v___x_222_ = lean_obj_once(&l_Lean_Grind_instCommRingUSize___closed__2, &l_Lean_Grind_instCommRingUSize___closed__2_once, _init_l_Lean_Grind_instCommRingUSize___closed__2);
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
static lean_object* _init_l_Lean_Grind_instCommRingUSize___closed__10(void){
_start:
{
lean_object* v___f_224_; lean_object* v___f_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___f_224_ = lean_obj_once(&l_Lean_Grind_instCommRingUSize___closed__1, &l_Lean_Grind_instCommRingUSize___closed__1_once, _init_l_Lean_Grind_instCommRingUSize___closed__1);
v___f_225_ = lean_obj_once(&l_USize_intCast___closed__0, &l_USize_intCast___closed__0_once, _init_l_USize_intCast___closed__0);
v___x_226_ = lean_obj_once(&l_Lean_Grind_instCommRingUSize___closed__7, &l_Lean_Grind_instCommRingUSize___closed__7_once, _init_l_Lean_Grind_instCommRingUSize___closed__7);
v___x_227_ = lean_obj_once(&l_Lean_Grind_instCommRingUSize___closed__6, &l_Lean_Grind_instCommRingUSize___closed__6_once, _init_l_Lean_Grind_instCommRingUSize___closed__6);
v___x_228_ = lean_obj_once(&l_Lean_Grind_instCommRingUSize___closed__9, &l_Lean_Grind_instCommRingUSize___closed__9_once, _init_l_Lean_Grind_instCommRingUSize___closed__9);
v___x_229_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
lean_ctor_set(v___x_229_, 1, v___x_227_);
lean_ctor_set(v___x_229_, 2, v___x_226_);
lean_ctor_set(v___x_229_, 3, v___f_225_);
lean_ctor_set(v___x_229_, 4, v___f_224_);
return v___x_229_;
}
}
static lean_object* _init_l_Lean_Grind_instCommRingUSize(void){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = lean_obj_once(&l_Lean_Grind_instCommRingUSize___closed__10, &l_Lean_Grind_instCommRingUSize___closed__10_once, _init_l_Lean_Grind_instCommRingUSize___closed__10);
return v___x_230_;
}
}
lean_object* runtime_initialize_Init_GrindInstances_ToInt(uint8_t builtin);
lean_object* runtime_initialize_Init_GrindInstances_ToInt(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Ring_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Ring_ToInt(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_GrindInstances_Ring_UInt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_GrindInstances_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_GrindInstances_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Ring_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Ring_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_UInt8_natCast = _init_l_UInt8_natCast();
lean_mark_persistent(l_UInt8_natCast);
l_UInt8_intCast = _init_l_UInt8_intCast();
lean_mark_persistent(l_UInt8_intCast);
l_UInt16_natCast = _init_l_UInt16_natCast();
lean_mark_persistent(l_UInt16_natCast);
l_UInt16_intCast = _init_l_UInt16_intCast();
lean_mark_persistent(l_UInt16_intCast);
l_UInt32_natCast = _init_l_UInt32_natCast();
lean_mark_persistent(l_UInt32_natCast);
l_UInt32_intCast = _init_l_UInt32_intCast();
lean_mark_persistent(l_UInt32_intCast);
l_UInt64_natCast = _init_l_UInt64_natCast();
lean_mark_persistent(l_UInt64_natCast);
l_UInt64_intCast = _init_l_UInt64_intCast();
lean_mark_persistent(l_UInt64_intCast);
l_USize_natCast = _init_l_USize_natCast();
lean_mark_persistent(l_USize_natCast);
l_USize_intCast = _init_l_USize_intCast();
lean_mark_persistent(l_USize_intCast);
l_Lean_Grind_instCommRingUInt8 = _init_l_Lean_Grind_instCommRingUInt8();
lean_mark_persistent(l_Lean_Grind_instCommRingUInt8);
l_Lean_Grind_instCommRingUInt16 = _init_l_Lean_Grind_instCommRingUInt16();
lean_mark_persistent(l_Lean_Grind_instCommRingUInt16);
l_Lean_Grind_instCommRingUInt32 = _init_l_Lean_Grind_instCommRingUInt32();
lean_mark_persistent(l_Lean_Grind_instCommRingUInt32);
l_Lean_Grind_instCommRingUInt64 = _init_l_Lean_Grind_instCommRingUInt64();
lean_mark_persistent(l_Lean_Grind_instCommRingUInt64);
l_Lean_Grind_instCommRingUSize = _init_l_Lean_Grind_instCommRingUSize();
lean_mark_persistent(l_Lean_Grind_instCommRingUSize);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_GrindInstances_Ring_UInt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_GrindInstances_ToInt(uint8_t builtin);
lean_object* initialize_Init_GrindInstances_ToInt(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Grind_Ring_Basic(uint8_t builtin);
lean_object* initialize_Init_Grind_Ring_ToInt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_GrindInstances_Ring_UInt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_GrindInstances_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_GrindInstances_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Ring_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Ring_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_GrindInstances_Ring_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_GrindInstances_Ring_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_GrindInstances_Ring_UInt(builtin);
}
#ifdef __cplusplus
}
#endif
