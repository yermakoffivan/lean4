// Lean compiler output
// Module: Init.Data.UInt.Basic
// Imports: public import Init.Data.BitVec.Basic
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
uint32_t lean_uint32_of_nat_mk(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
uint8_t lean_uint8_of_nat_mk(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
extern lean_object* l_System_Platform_numBits;
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_usize_to_nat(size_t);
size_t lean_usize_of_nat_mk(lean_object*);
uint64_t lean_uint64_of_nat_mk(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_uint16_to_nat(uint16_t);
uint16_t lean_uint16_of_nat_mk(lean_object*);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint16_t lean_uint16_of_nat(lean_object*);
uint8_t lean_uint8_of_nat(lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
LEAN_EXPORT uint8_t l_UInt8_ofFin(lean_object*);
LEAN_EXPORT lean_object* l_UInt8_ofFin___boxed(lean_object*);
static lean_once_cell_t l_UInt8_ofInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt8_ofInt___closed__0;
static lean_once_cell_t l_UInt8_ofInt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt8_ofInt___closed__1;
LEAN_EXPORT uint8_t l_UInt8_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_UInt8_ofInt___boxed(lean_object*);
uint8_t lean_uint8_add(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UInt8_add___boxed(lean_object*, lean_object*);
uint8_t lean_uint8_sub(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UInt8_sub___boxed(lean_object*, lean_object*);
uint8_t lean_uint8_mul(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UInt8_mul___boxed(lean_object*, lean_object*);
uint8_t lean_uint8_div(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UInt8_div___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UInt8_pow(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_UInt8_pow___boxed(lean_object*, lean_object*);
uint8_t lean_uint8_mod(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UInt8_mod___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt8_modn_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt8_modn_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UInt8_modn(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_UInt8_modn___boxed(lean_object*, lean_object*);
uint8_t lean_uint8_land(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UInt8_land___boxed(lean_object*, lean_object*);
uint8_t lean_uint8_lor(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UInt8_lor___boxed(lean_object*, lean_object*);
uint8_t lean_uint8_xor(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UInt8_xor___boxed(lean_object*, lean_object*);
uint8_t lean_uint8_shift_left(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UInt8_shiftLeft___boxed(lean_object*, lean_object*);
uint8_t lean_uint8_shift_right(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_UInt8_shiftRight___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_instAddUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instAddUInt8___closed__0;
LEAN_EXPORT lean_object* l_instAddUInt8;
static lean_once_cell_t l_instSubUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instSubUInt8___closed__0;
LEAN_EXPORT lean_object* l_instSubUInt8;
static lean_once_cell_t l_instMulUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMulUInt8___closed__0;
LEAN_EXPORT lean_object* l_instMulUInt8;
static lean_once_cell_t l_instPowUInt8Nat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instPowUInt8Nat___closed__0;
LEAN_EXPORT lean_object* l_instPowUInt8Nat;
static lean_once_cell_t l_instModUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instModUInt8___closed__0;
LEAN_EXPORT lean_object* l_instModUInt8;
static lean_once_cell_t l_instHModUInt8Nat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instHModUInt8Nat___closed__0;
LEAN_EXPORT lean_object* l_instHModUInt8Nat;
static lean_once_cell_t l_instDivUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instDivUInt8___closed__0;
LEAN_EXPORT lean_object* l_instDivUInt8;
uint8_t lean_uint8_complement(uint8_t);
LEAN_EXPORT lean_object* l_UInt8_complement___boxed(lean_object*);
uint8_t lean_uint8_neg(uint8_t);
LEAN_EXPORT lean_object* l_UInt8_neg___boxed(lean_object*);
static lean_once_cell_t l_instComplementUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instComplementUInt8___closed__0;
LEAN_EXPORT lean_object* l_instComplementUInt8;
static lean_once_cell_t l_instNegUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instNegUInt8___closed__0;
LEAN_EXPORT lean_object* l_instNegUInt8;
static lean_once_cell_t l_instAndOpUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instAndOpUInt8___closed__0;
LEAN_EXPORT lean_object* l_instAndOpUInt8;
static lean_once_cell_t l_instOrOpUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instOrOpUInt8___closed__0;
LEAN_EXPORT lean_object* l_instOrOpUInt8;
static lean_once_cell_t l_instXorOpUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instXorOpUInt8___closed__0;
LEAN_EXPORT lean_object* l_instXorOpUInt8;
static lean_once_cell_t l_instShiftLeftUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instShiftLeftUInt8___closed__0;
LEAN_EXPORT lean_object* l_instShiftLeftUInt8;
static lean_once_cell_t l_instShiftRightUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instShiftRightUInt8___closed__0;
LEAN_EXPORT lean_object* l_instShiftRightUInt8;
uint8_t lean_bool_to_uint8(uint8_t);
LEAN_EXPORT lean_object* l_Bool_toUInt8___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instMaxUInt8___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_instMaxUInt8___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_instMaxUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMaxUInt8___closed__0;
LEAN_EXPORT lean_object* l_instMaxUInt8;
LEAN_EXPORT uint8_t l_instMinUInt8___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_instMinUInt8___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_instMinUInt8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMinUInt8___closed__0;
LEAN_EXPORT lean_object* l_instMinUInt8;
LEAN_EXPORT uint8_t l_UInt8_toAsciiLower(uint8_t);
LEAN_EXPORT lean_object* l_UInt8_toAsciiLower___boxed(lean_object*);
LEAN_EXPORT uint16_t l_UInt16_ofFin(lean_object*);
LEAN_EXPORT lean_object* l_UInt16_ofFin___boxed(lean_object*);
static lean_once_cell_t l_UInt16_ofInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt16_ofInt___closed__0;
LEAN_EXPORT uint16_t l_UInt16_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_UInt16_ofInt___boxed(lean_object*);
uint16_t lean_uint16_add(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_add___boxed(lean_object*, lean_object*);
uint16_t lean_uint16_sub(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_sub___boxed(lean_object*, lean_object*);
uint16_t lean_uint16_mul(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_mul___boxed(lean_object*, lean_object*);
uint16_t lean_uint16_div(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_div___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint16_t l_UInt16_pow(uint16_t, lean_object*);
LEAN_EXPORT lean_object* l_UInt16_pow___boxed(lean_object*, lean_object*);
uint16_t lean_uint16_mod(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_mod___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt16_modn_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt16_modn_spec__0___boxed(lean_object*);
LEAN_EXPORT uint16_t l_UInt16_modn(uint16_t, lean_object*);
LEAN_EXPORT lean_object* l_UInt16_modn___boxed(lean_object*, lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_land___boxed(lean_object*, lean_object*);
uint16_t lean_uint16_lor(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_lor___boxed(lean_object*, lean_object*);
uint16_t lean_uint16_xor(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_xor___boxed(lean_object*, lean_object*);
uint16_t lean_uint16_shift_left(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_shiftLeft___boxed(lean_object*, lean_object*);
uint16_t lean_uint16_shift_right(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_shiftRight___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_instAddUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instAddUInt16___closed__0;
LEAN_EXPORT lean_object* l_instAddUInt16;
static lean_once_cell_t l_instSubUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instSubUInt16___closed__0;
LEAN_EXPORT lean_object* l_instSubUInt16;
static lean_once_cell_t l_instMulUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMulUInt16___closed__0;
LEAN_EXPORT lean_object* l_instMulUInt16;
static lean_once_cell_t l_instPowUInt16Nat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instPowUInt16Nat___closed__0;
LEAN_EXPORT lean_object* l_instPowUInt16Nat;
static lean_once_cell_t l_instModUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instModUInt16___closed__0;
LEAN_EXPORT lean_object* l_instModUInt16;
static lean_once_cell_t l_instHModUInt16Nat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instHModUInt16Nat___closed__0;
LEAN_EXPORT lean_object* l_instHModUInt16Nat;
static lean_once_cell_t l_instDivUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instDivUInt16___closed__0;
LEAN_EXPORT lean_object* l_instDivUInt16;
LEAN_EXPORT lean_object* l_instLTUInt16;
LEAN_EXPORT lean_object* l_instLEUInt16;
uint16_t lean_uint16_complement(uint16_t);
LEAN_EXPORT lean_object* l_UInt16_complement___boxed(lean_object*);
uint16_t lean_uint16_neg(uint16_t);
LEAN_EXPORT lean_object* l_UInt16_neg___boxed(lean_object*);
static lean_once_cell_t l_instComplementUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instComplementUInt16___closed__0;
LEAN_EXPORT lean_object* l_instComplementUInt16;
static lean_once_cell_t l_instNegUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instNegUInt16___closed__0;
LEAN_EXPORT lean_object* l_instNegUInt16;
static lean_once_cell_t l_instAndOpUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instAndOpUInt16___closed__0;
LEAN_EXPORT lean_object* l_instAndOpUInt16;
static lean_once_cell_t l_instOrOpUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instOrOpUInt16___closed__0;
LEAN_EXPORT lean_object* l_instOrOpUInt16;
static lean_once_cell_t l_instXorOpUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instXorOpUInt16___closed__0;
LEAN_EXPORT lean_object* l_instXorOpUInt16;
static lean_once_cell_t l_instShiftLeftUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instShiftLeftUInt16___closed__0;
LEAN_EXPORT lean_object* l_instShiftLeftUInt16;
static lean_once_cell_t l_instShiftRightUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instShiftRightUInt16___closed__0;
LEAN_EXPORT lean_object* l_instShiftRightUInt16;
uint16_t lean_bool_to_uint16(uint8_t);
LEAN_EXPORT lean_object* l_Bool_toUInt16___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UInt16_decLt___aux__1(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_decLt___aux__1___boxed(lean_object*, lean_object*);
uint8_t lean_uint16_dec_lt(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_decLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UInt16_decLe___aux__1(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_decLe___aux__1___boxed(lean_object*, lean_object*);
uint8_t lean_uint16_dec_le(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_UInt16_decLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint16_t l_instMaxUInt16___lam__0(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_instMaxUInt16___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_instMaxUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMaxUInt16___closed__0;
LEAN_EXPORT lean_object* l_instMaxUInt16;
LEAN_EXPORT uint16_t l_instMinUInt16___lam__0(uint16_t, uint16_t);
LEAN_EXPORT lean_object* l_instMinUInt16___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_instMinUInt16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMinUInt16___closed__0;
LEAN_EXPORT lean_object* l_instMinUInt16;
LEAN_EXPORT uint32_t l_UInt32_ofFin(lean_object*);
LEAN_EXPORT lean_object* l_UInt32_ofFin___boxed(lean_object*);
static lean_once_cell_t l_UInt32_ofInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt32_ofInt___closed__0;
LEAN_EXPORT uint32_t l_UInt32_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_UInt32_ofInt___boxed(lean_object*);
uint32_t lean_uint32_mul(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UInt32_mul___boxed(lean_object*, lean_object*);
uint32_t lean_uint32_div(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UInt32_div___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_UInt32_pow(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_UInt32_pow___boxed(lean_object*, lean_object*);
uint32_t lean_uint32_mod(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UInt32_mod___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt32_modn_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt32_modn_spec__0___boxed(lean_object*);
LEAN_EXPORT uint32_t l_UInt32_modn(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_UInt32_modn___boxed(lean_object*, lean_object*);
uint32_t lean_uint32_land(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UInt32_land___boxed(lean_object*, lean_object*);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UInt32_lor___boxed(lean_object*, lean_object*);
uint32_t lean_uint32_xor(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UInt32_xor___boxed(lean_object*, lean_object*);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UInt32_shiftLeft___boxed(lean_object*, lean_object*);
uint32_t lean_uint32_shift_right(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_UInt32_shiftRight___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_instMulUInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMulUInt32___closed__0;
LEAN_EXPORT lean_object* l_instMulUInt32;
static lean_once_cell_t l_instPowUInt32Nat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instPowUInt32Nat___closed__0;
LEAN_EXPORT lean_object* l_instPowUInt32Nat;
static lean_once_cell_t l_instModUInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instModUInt32___closed__0;
LEAN_EXPORT lean_object* l_instModUInt32;
static lean_once_cell_t l_instHModUInt32Nat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instHModUInt32Nat___closed__0;
LEAN_EXPORT lean_object* l_instHModUInt32Nat;
static lean_once_cell_t l_instDivUInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instDivUInt32___closed__0;
LEAN_EXPORT lean_object* l_instDivUInt32;
uint32_t lean_uint32_complement(uint32_t);
LEAN_EXPORT lean_object* l_UInt32_complement___boxed(lean_object*);
uint32_t lean_uint32_neg(uint32_t);
LEAN_EXPORT lean_object* l_UInt32_neg___boxed(lean_object*);
static lean_once_cell_t l_instComplementUInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instComplementUInt32___closed__0;
LEAN_EXPORT lean_object* l_instComplementUInt32;
static lean_once_cell_t l_instNegUInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instNegUInt32___closed__0;
LEAN_EXPORT lean_object* l_instNegUInt32;
static lean_once_cell_t l_instAndOpUInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instAndOpUInt32___closed__0;
LEAN_EXPORT lean_object* l_instAndOpUInt32;
static lean_once_cell_t l_instOrOpUInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instOrOpUInt32___closed__0;
LEAN_EXPORT lean_object* l_instOrOpUInt32;
static lean_once_cell_t l_instXorOpUInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instXorOpUInt32___closed__0;
LEAN_EXPORT lean_object* l_instXorOpUInt32;
static lean_once_cell_t l_instShiftLeftUInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instShiftLeftUInt32___closed__0;
LEAN_EXPORT lean_object* l_instShiftLeftUInt32;
static lean_once_cell_t l_instShiftRightUInt32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instShiftRightUInt32___closed__0;
LEAN_EXPORT lean_object* l_instShiftRightUInt32;
uint32_t lean_bool_to_uint32(uint8_t);
LEAN_EXPORT lean_object* l_Bool_toUInt32___boxed(lean_object*);
LEAN_EXPORT uint64_t l_UInt64_ofFin(lean_object*);
LEAN_EXPORT lean_object* l_UInt64_ofFin___boxed(lean_object*);
static lean_once_cell_t l_UInt64_ofInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_UInt64_ofInt___closed__0;
LEAN_EXPORT uint64_t l_UInt64_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_UInt64_ofInt___boxed(lean_object*);
uint64_t lean_uint64_add(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_add___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_sub(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_sub___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_mul(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_mul___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_div(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_div___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_UInt64_pow(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_UInt64_pow___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_mod(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_mod___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt64_modn_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt64_modn_spec__0___boxed(lean_object*);
LEAN_EXPORT uint64_t l_UInt64_modn(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_UInt64_modn___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_land(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_land___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_lor___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_xor___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_shiftLeft___boxed(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_shiftRight___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_instAddUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instAddUInt64___closed__0;
LEAN_EXPORT lean_object* l_instAddUInt64;
static lean_once_cell_t l_instSubUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instSubUInt64___closed__0;
LEAN_EXPORT lean_object* l_instSubUInt64;
static lean_once_cell_t l_instMulUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMulUInt64___closed__0;
LEAN_EXPORT lean_object* l_instMulUInt64;
static lean_once_cell_t l_instPowUInt64Nat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instPowUInt64Nat___closed__0;
LEAN_EXPORT lean_object* l_instPowUInt64Nat;
static lean_once_cell_t l_instModUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instModUInt64___closed__0;
LEAN_EXPORT lean_object* l_instModUInt64;
static lean_once_cell_t l_instHModUInt64Nat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instHModUInt64Nat___closed__0;
LEAN_EXPORT lean_object* l_instHModUInt64Nat;
static lean_once_cell_t l_instDivUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instDivUInt64___closed__0;
LEAN_EXPORT lean_object* l_instDivUInt64;
LEAN_EXPORT lean_object* l_instLTUInt64;
LEAN_EXPORT lean_object* l_instLEUInt64;
uint64_t lean_uint64_complement(uint64_t);
LEAN_EXPORT lean_object* l_UInt64_complement___boxed(lean_object*);
uint64_t lean_uint64_neg(uint64_t);
LEAN_EXPORT lean_object* l_UInt64_neg___boxed(lean_object*);
static lean_once_cell_t l_instComplementUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instComplementUInt64___closed__0;
LEAN_EXPORT lean_object* l_instComplementUInt64;
static lean_once_cell_t l_instNegUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instNegUInt64___closed__0;
LEAN_EXPORT lean_object* l_instNegUInt64;
static lean_once_cell_t l_instAndOpUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instAndOpUInt64___closed__0;
LEAN_EXPORT lean_object* l_instAndOpUInt64;
static lean_once_cell_t l_instOrOpUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instOrOpUInt64___closed__0;
LEAN_EXPORT lean_object* l_instOrOpUInt64;
static lean_once_cell_t l_instXorOpUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instXorOpUInt64___closed__0;
LEAN_EXPORT lean_object* l_instXorOpUInt64;
static lean_once_cell_t l_instShiftLeftUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instShiftLeftUInt64___closed__0;
LEAN_EXPORT lean_object* l_instShiftLeftUInt64;
static lean_once_cell_t l_instShiftRightUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instShiftRightUInt64___closed__0;
LEAN_EXPORT lean_object* l_instShiftRightUInt64;
uint64_t lean_bool_to_uint64(uint8_t);
LEAN_EXPORT lean_object* l_Bool_toUInt64___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UInt64_decLt___aux__1(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_decLt___aux__1___boxed(lean_object*, lean_object*);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_decLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UInt64_decLe___aux__1(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_decLe___aux__1___boxed(lean_object*, lean_object*);
uint8_t lean_uint64_dec_le(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_UInt64_decLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_instMaxUInt64___lam__0(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_instMaxUInt64___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_instMaxUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMaxUInt64___closed__0;
LEAN_EXPORT lean_object* l_instMaxUInt64;
LEAN_EXPORT uint64_t l_instMinUInt64___lam__0(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_instMinUInt64___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_instMinUInt64___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMinUInt64___closed__0;
LEAN_EXPORT lean_object* l_instMinUInt64;
LEAN_EXPORT size_t l_USize_ofFin(lean_object*);
LEAN_EXPORT lean_object* l_USize_ofFin___boxed(lean_object*);
static lean_once_cell_t l_USize_ofInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_USize_ofInt___closed__0;
LEAN_EXPORT size_t l_USize_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_USize_ofInt___boxed(lean_object*);
size_t lean_usize_mul(size_t, size_t);
LEAN_EXPORT lean_object* l_USize_mul___boxed(lean_object*, lean_object*);
size_t lean_usize_div(size_t, size_t);
LEAN_EXPORT lean_object* l_USize_div___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_USize_pow(size_t, lean_object*);
LEAN_EXPORT lean_object* l_USize_pow___boxed(lean_object*, lean_object*);
size_t lean_usize_mod(size_t, size_t);
LEAN_EXPORT lean_object* l_USize_mod___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00USize_modn_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00USize_modn_spec__0___boxed(lean_object*);
LEAN_EXPORT size_t l_USize_modn(size_t, lean_object*);
LEAN_EXPORT lean_object* l_USize_modn___boxed(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
LEAN_EXPORT lean_object* l_USize_land___boxed(lean_object*, lean_object*);
size_t lean_usize_lor(size_t, size_t);
LEAN_EXPORT lean_object* l_USize_lor___boxed(lean_object*, lean_object*);
size_t lean_usize_xor(size_t, size_t);
LEAN_EXPORT lean_object* l_USize_xor___boxed(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
LEAN_EXPORT lean_object* l_USize_shiftLeft___boxed(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
LEAN_EXPORT lean_object* l_USize_shiftRight___boxed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_USize_ofNat32___boxed(lean_object*, lean_object*);
size_t lean_uint8_to_usize(uint8_t);
LEAN_EXPORT lean_object* l_UInt8_toUSize___boxed(lean_object*);
uint8_t lean_usize_to_uint8(size_t);
LEAN_EXPORT lean_object* l_USize_toUInt8___boxed(lean_object*);
size_t lean_uint16_to_usize(uint16_t);
LEAN_EXPORT lean_object* l_UInt16_toUSize___boxed(lean_object*);
uint16_t lean_usize_to_uint16(size_t);
LEAN_EXPORT lean_object* l_USize_toUInt16___boxed(lean_object*);
size_t lean_uint32_to_usize(uint32_t);
LEAN_EXPORT lean_object* l_UInt32_toUSize___boxed(lean_object*);
uint32_t lean_usize_to_uint32(size_t);
LEAN_EXPORT lean_object* l_USize_toUInt32___boxed(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
LEAN_EXPORT lean_object* l_UInt64_toUSize___boxed(lean_object*);
uint64_t lean_usize_to_uint64(size_t);
LEAN_EXPORT lean_object* l_USize_toUInt64___boxed(lean_object*);
static lean_once_cell_t l_instMulUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMulUSize___closed__0;
LEAN_EXPORT lean_object* l_instMulUSize;
static lean_once_cell_t l_instPowUSizeNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instPowUSizeNat___closed__0;
LEAN_EXPORT lean_object* l_instPowUSizeNat;
static lean_once_cell_t l_instModUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instModUSize___closed__0;
LEAN_EXPORT lean_object* l_instModUSize;
static lean_once_cell_t l_instHModUSizeNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instHModUSizeNat___closed__0;
LEAN_EXPORT lean_object* l_instHModUSizeNat;
static lean_once_cell_t l_instDivUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instDivUSize___closed__0;
LEAN_EXPORT lean_object* l_instDivUSize;
size_t lean_usize_complement(size_t);
LEAN_EXPORT lean_object* l_USize_complement___boxed(lean_object*);
size_t lean_usize_neg(size_t);
LEAN_EXPORT lean_object* l_USize_neg___boxed(lean_object*);
static lean_once_cell_t l_instComplementUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instComplementUSize___closed__0;
LEAN_EXPORT lean_object* l_instComplementUSize;
static lean_once_cell_t l_instNegUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instNegUSize___closed__0;
LEAN_EXPORT lean_object* l_instNegUSize;
static lean_once_cell_t l_instAndOpUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instAndOpUSize___closed__0;
LEAN_EXPORT lean_object* l_instAndOpUSize;
static lean_once_cell_t l_instOrOpUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instOrOpUSize___closed__0;
LEAN_EXPORT lean_object* l_instOrOpUSize;
static lean_once_cell_t l_instXorOpUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instXorOpUSize___closed__0;
LEAN_EXPORT lean_object* l_instXorOpUSize;
static lean_once_cell_t l_instShiftLeftUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instShiftLeftUSize___closed__0;
LEAN_EXPORT lean_object* l_instShiftLeftUSize;
static lean_once_cell_t l_instShiftRightUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instShiftRightUSize___closed__0;
LEAN_EXPORT lean_object* l_instShiftRightUSize;
size_t lean_bool_to_usize(uint8_t);
LEAN_EXPORT lean_object* l_Bool_toUSize___boxed(lean_object*);
LEAN_EXPORT size_t l_instMaxUSize___lam__0(size_t, size_t);
LEAN_EXPORT lean_object* l_instMaxUSize___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_instMaxUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMaxUSize___closed__0;
LEAN_EXPORT lean_object* l_instMaxUSize;
LEAN_EXPORT size_t l_instMinUSize___lam__0(size_t, size_t);
LEAN_EXPORT lean_object* l_instMinUSize___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_instMinUSize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMinUSize___closed__0;
LEAN_EXPORT lean_object* l_instMinUSize;
LEAN_EXPORT uint8_t l_UInt8_ofFin(lean_object* v_a_1_){
_start:
{
uint8_t v___x_2_; 
v___x_2_ = lean_uint8_of_nat_mk(v_a_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_UInt8_ofFin___boxed(lean_object* v_a_3_){
_start:
{
uint8_t v_res_4_; lean_object* v_r_5_; 
v_res_4_ = l_UInt8_ofFin(v_a_3_);
v_r_5_ = lean_box(v_res_4_);
return v_r_5_;
}
}
static lean_object* _init_l_UInt8_ofInt___closed__0(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_unsigned_to_nat(2u);
v___x_7_ = lean_nat_to_int(v___x_6_);
return v___x_7_;
}
}
static lean_object* _init_l_UInt8_ofInt___closed__1(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = lean_unsigned_to_nat(8u);
v___x_9_ = lean_obj_once(&l_UInt8_ofInt___closed__0, &l_UInt8_ofInt___closed__0_once, _init_l_UInt8_ofInt___closed__0);
v___x_10_ = l_Int_pow(v___x_9_, v___x_8_);
return v___x_10_;
}
}
LEAN_EXPORT uint8_t l_UInt8_ofInt(lean_object* v_x_11_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; uint8_t v___x_15_; 
v___x_12_ = lean_obj_once(&l_UInt8_ofInt___closed__1, &l_UInt8_ofInt___closed__1_once, _init_l_UInt8_ofInt___closed__1);
v___x_13_ = lean_int_emod(v_x_11_, v___x_12_);
v___x_14_ = l_Int_toNat(v___x_13_);
lean_dec(v___x_13_);
v___x_15_ = lean_uint8_of_nat(v___x_14_);
lean_dec(v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_UInt8_ofInt___boxed(lean_object* v_x_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = l_UInt8_ofInt(v_x_16_);
lean_dec(v_x_16_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT lean_object* l_UInt8_add___boxed(lean_object* v_a_21_, lean_object* v_b_22_){
_start:
{
uint8_t v_a_boxed_23_; uint8_t v_b_boxed_24_; uint8_t v_res_25_; lean_object* v_r_26_; 
v_a_boxed_23_ = lean_unbox(v_a_21_);
v_b_boxed_24_ = lean_unbox(v_b_22_);
v_res_25_ = lean_uint8_add(v_a_boxed_23_, v_b_boxed_24_);
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT lean_object* l_UInt8_sub___boxed(lean_object* v_a_29_, lean_object* v_b_30_){
_start:
{
uint8_t v_a_boxed_31_; uint8_t v_b_boxed_32_; uint8_t v_res_33_; lean_object* v_r_34_; 
v_a_boxed_31_ = lean_unbox(v_a_29_);
v_b_boxed_32_ = lean_unbox(v_b_30_);
v_res_33_ = lean_uint8_sub(v_a_boxed_31_, v_b_boxed_32_);
v_r_34_ = lean_box(v_res_33_);
return v_r_34_;
}
}
LEAN_EXPORT lean_object* l_UInt8_mul___boxed(lean_object* v_a_37_, lean_object* v_b_38_){
_start:
{
uint8_t v_a_boxed_39_; uint8_t v_b_boxed_40_; uint8_t v_res_41_; lean_object* v_r_42_; 
v_a_boxed_39_ = lean_unbox(v_a_37_);
v_b_boxed_40_ = lean_unbox(v_b_38_);
v_res_41_ = lean_uint8_mul(v_a_boxed_39_, v_b_boxed_40_);
v_r_42_ = lean_box(v_res_41_);
return v_r_42_;
}
}
LEAN_EXPORT lean_object* l_UInt8_div___boxed(lean_object* v_a_45_, lean_object* v_b_46_){
_start:
{
uint8_t v_a_boxed_47_; uint8_t v_b_boxed_48_; uint8_t v_res_49_; lean_object* v_r_50_; 
v_a_boxed_47_ = lean_unbox(v_a_45_);
v_b_boxed_48_ = lean_unbox(v_b_46_);
v_res_49_ = lean_uint8_div(v_a_boxed_47_, v_b_boxed_48_);
v_r_50_ = lean_box(v_res_49_);
return v_r_50_;
}
}
LEAN_EXPORT uint8_t l_UInt8_pow(uint8_t v_x_51_, lean_object* v_n_52_){
_start:
{
lean_object* v_zero_53_; uint8_t v_isZero_54_; 
v_zero_53_ = lean_unsigned_to_nat(0u);
v_isZero_54_ = lean_nat_dec_eq(v_n_52_, v_zero_53_);
if (v_isZero_54_ == 1)
{
uint8_t v___x_55_; 
v___x_55_ = 1;
return v___x_55_;
}
else
{
lean_object* v_one_56_; lean_object* v_n_57_; uint8_t v___x_58_; uint8_t v___x_59_; 
v_one_56_ = lean_unsigned_to_nat(1u);
v_n_57_ = lean_nat_sub(v_n_52_, v_one_56_);
v___x_58_ = l_UInt8_pow(v_x_51_, v_n_57_);
lean_dec(v_n_57_);
v___x_59_ = lean_uint8_mul(v___x_58_, v_x_51_);
return v___x_59_;
}
}
}
LEAN_EXPORT lean_object* l_UInt8_pow___boxed(lean_object* v_x_60_, lean_object* v_n_61_){
_start:
{
uint8_t v_x_boxed_62_; uint8_t v_res_63_; lean_object* v_r_64_; 
v_x_boxed_62_ = lean_unbox(v_x_60_);
v_res_63_ = l_UInt8_pow(v_x_boxed_62_, v_n_61_);
lean_dec(v_n_61_);
v_r_64_ = lean_box(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT lean_object* l_UInt8_mod___boxed(lean_object* v_a_67_, lean_object* v_b_68_){
_start:
{
uint8_t v_a_boxed_69_; uint8_t v_b_boxed_70_; uint8_t v_res_71_; lean_object* v_r_72_; 
v_a_boxed_69_ = lean_unbox(v_a_67_);
v_b_boxed_70_ = lean_unbox(v_b_68_);
v_res_71_ = lean_uint8_mod(v_a_boxed_69_, v_b_boxed_70_);
v_r_72_ = lean_box(v_res_71_);
return v_r_72_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt8_modn_spec__0(lean_object* v_a_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_unsigned_to_nat(8u);
v___x_75_ = l_BitVec_ofNat(v___x_74_, v_a_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt8_modn_spec__0___boxed(lean_object* v_a_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Nat_cast___at___00UInt8_modn_spec__0(v_a_76_);
lean_dec(v_a_76_);
return v_res_77_;
}
}
LEAN_EXPORT uint8_t l_UInt8_modn(uint8_t v_a_78_, lean_object* v_n_79_){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_80_ = lean_uint8_to_nat(v_a_78_);
v___x_81_ = lean_nat_mod(v___x_80_, v_n_79_);
lean_dec(v___x_80_);
v___x_82_ = l_Nat_cast___at___00UInt8_modn_spec__0(v___x_81_);
lean_dec(v___x_81_);
v___x_83_ = lean_uint8_of_nat_mk(v___x_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_UInt8_modn___boxed(lean_object* v_a_84_, lean_object* v_n_85_){
_start:
{
uint8_t v_a_boxed_86_; uint8_t v_res_87_; lean_object* v_r_88_; 
v_a_boxed_86_ = lean_unbox(v_a_84_);
v_res_87_ = l_UInt8_modn(v_a_boxed_86_, v_n_85_);
lean_dec(v_n_85_);
v_r_88_ = lean_box(v_res_87_);
return v_r_88_;
}
}
LEAN_EXPORT lean_object* l_UInt8_land___boxed(lean_object* v_a_91_, lean_object* v_b_92_){
_start:
{
uint8_t v_a_boxed_93_; uint8_t v_b_boxed_94_; uint8_t v_res_95_; lean_object* v_r_96_; 
v_a_boxed_93_ = lean_unbox(v_a_91_);
v_b_boxed_94_ = lean_unbox(v_b_92_);
v_res_95_ = lean_uint8_land(v_a_boxed_93_, v_b_boxed_94_);
v_r_96_ = lean_box(v_res_95_);
return v_r_96_;
}
}
LEAN_EXPORT lean_object* l_UInt8_lor___boxed(lean_object* v_a_99_, lean_object* v_b_100_){
_start:
{
uint8_t v_a_boxed_101_; uint8_t v_b_boxed_102_; uint8_t v_res_103_; lean_object* v_r_104_; 
v_a_boxed_101_ = lean_unbox(v_a_99_);
v_b_boxed_102_ = lean_unbox(v_b_100_);
v_res_103_ = lean_uint8_lor(v_a_boxed_101_, v_b_boxed_102_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT lean_object* l_UInt8_xor___boxed(lean_object* v_a_107_, lean_object* v_b_108_){
_start:
{
uint8_t v_a_boxed_109_; uint8_t v_b_boxed_110_; uint8_t v_res_111_; lean_object* v_r_112_; 
v_a_boxed_109_ = lean_unbox(v_a_107_);
v_b_boxed_110_ = lean_unbox(v_b_108_);
v_res_111_ = lean_uint8_xor(v_a_boxed_109_, v_b_boxed_110_);
v_r_112_ = lean_box(v_res_111_);
return v_r_112_;
}
}
LEAN_EXPORT lean_object* l_UInt8_shiftLeft___boxed(lean_object* v_a_115_, lean_object* v_b_116_){
_start:
{
uint8_t v_a_boxed_117_; uint8_t v_b_boxed_118_; uint8_t v_res_119_; lean_object* v_r_120_; 
v_a_boxed_117_ = lean_unbox(v_a_115_);
v_b_boxed_118_ = lean_unbox(v_b_116_);
v_res_119_ = lean_uint8_shift_left(v_a_boxed_117_, v_b_boxed_118_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT lean_object* l_UInt8_shiftRight___boxed(lean_object* v_a_123_, lean_object* v_b_124_){
_start:
{
uint8_t v_a_boxed_125_; uint8_t v_b_boxed_126_; uint8_t v_res_127_; lean_object* v_r_128_; 
v_a_boxed_125_ = lean_unbox(v_a_123_);
v_b_boxed_126_ = lean_unbox(v_b_124_);
v_res_127_ = lean_uint8_shift_right(v_a_boxed_125_, v_b_boxed_126_);
v_r_128_ = lean_box(v_res_127_);
return v_r_128_;
}
}
static lean_object* _init_l_instAddUInt8___closed__0(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_alloc_closure((void*)(l_UInt8_add___boxed), 2, 0);
return v___x_129_;
}
}
static lean_object* _init_l_instAddUInt8(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_instAddUInt8___closed__0, &l_instAddUInt8___closed__0_once, _init_l_instAddUInt8___closed__0);
return v___x_130_;
}
}
static lean_object* _init_l_instSubUInt8___closed__0(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_alloc_closure((void*)(l_UInt8_sub___boxed), 2, 0);
return v___x_131_;
}
}
static lean_object* _init_l_instSubUInt8(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_obj_once(&l_instSubUInt8___closed__0, &l_instSubUInt8___closed__0_once, _init_l_instSubUInt8___closed__0);
return v___x_132_;
}
}
static lean_object* _init_l_instMulUInt8___closed__0(void){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = lean_alloc_closure((void*)(l_UInt8_mul___boxed), 2, 0);
return v___x_133_;
}
}
static lean_object* _init_l_instMulUInt8(void){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = lean_obj_once(&l_instMulUInt8___closed__0, &l_instMulUInt8___closed__0_once, _init_l_instMulUInt8___closed__0);
return v___x_134_;
}
}
static lean_object* _init_l_instPowUInt8Nat___closed__0(void){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_alloc_closure((void*)(l_UInt8_pow___boxed), 2, 0);
return v___x_135_;
}
}
static lean_object* _init_l_instPowUInt8Nat(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lean_obj_once(&l_instPowUInt8Nat___closed__0, &l_instPowUInt8Nat___closed__0_once, _init_l_instPowUInt8Nat___closed__0);
return v___x_136_;
}
}
static lean_object* _init_l_instModUInt8___closed__0(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_alloc_closure((void*)(l_UInt8_mod___boxed), 2, 0);
return v___x_137_;
}
}
static lean_object* _init_l_instModUInt8(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_obj_once(&l_instModUInt8___closed__0, &l_instModUInt8___closed__0_once, _init_l_instModUInt8___closed__0);
return v___x_138_;
}
}
static lean_object* _init_l_instHModUInt8Nat___closed__0(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_alloc_closure((void*)(l_UInt8_modn___boxed), 2, 0);
return v___x_139_;
}
}
static lean_object* _init_l_instHModUInt8Nat(void){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = lean_obj_once(&l_instHModUInt8Nat___closed__0, &l_instHModUInt8Nat___closed__0_once, _init_l_instHModUInt8Nat___closed__0);
return v___x_140_;
}
}
static lean_object* _init_l_instDivUInt8___closed__0(void){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_alloc_closure((void*)(l_UInt8_div___boxed), 2, 0);
return v___x_141_;
}
}
static lean_object* _init_l_instDivUInt8(void){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lean_obj_once(&l_instDivUInt8___closed__0, &l_instDivUInt8___closed__0_once, _init_l_instDivUInt8___closed__0);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_UInt8_complement___boxed(lean_object* v_a_144_){
_start:
{
uint8_t v_a_boxed_145_; uint8_t v_res_146_; lean_object* v_r_147_; 
v_a_boxed_145_ = lean_unbox(v_a_144_);
v_res_146_ = lean_uint8_complement(v_a_boxed_145_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT lean_object* l_UInt8_neg___boxed(lean_object* v_a_149_){
_start:
{
uint8_t v_a_boxed_150_; uint8_t v_res_151_; lean_object* v_r_152_; 
v_a_boxed_150_ = lean_unbox(v_a_149_);
v_res_151_ = lean_uint8_neg(v_a_boxed_150_);
v_r_152_ = lean_box(v_res_151_);
return v_r_152_;
}
}
static lean_object* _init_l_instComplementUInt8___closed__0(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_alloc_closure((void*)(l_UInt8_complement___boxed), 1, 0);
return v___x_153_;
}
}
static lean_object* _init_l_instComplementUInt8(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_obj_once(&l_instComplementUInt8___closed__0, &l_instComplementUInt8___closed__0_once, _init_l_instComplementUInt8___closed__0);
return v___x_154_;
}
}
static lean_object* _init_l_instNegUInt8___closed__0(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_alloc_closure((void*)(l_UInt8_neg___boxed), 1, 0);
return v___x_155_;
}
}
static lean_object* _init_l_instNegUInt8(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_obj_once(&l_instNegUInt8___closed__0, &l_instNegUInt8___closed__0_once, _init_l_instNegUInt8___closed__0);
return v___x_156_;
}
}
static lean_object* _init_l_instAndOpUInt8___closed__0(void){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_alloc_closure((void*)(l_UInt8_land___boxed), 2, 0);
return v___x_157_;
}
}
static lean_object* _init_l_instAndOpUInt8(void){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_instAndOpUInt8___closed__0, &l_instAndOpUInt8___closed__0_once, _init_l_instAndOpUInt8___closed__0);
return v___x_158_;
}
}
static lean_object* _init_l_instOrOpUInt8___closed__0(void){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_alloc_closure((void*)(l_UInt8_lor___boxed), 2, 0);
return v___x_159_;
}
}
static lean_object* _init_l_instOrOpUInt8(void){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_obj_once(&l_instOrOpUInt8___closed__0, &l_instOrOpUInt8___closed__0_once, _init_l_instOrOpUInt8___closed__0);
return v___x_160_;
}
}
static lean_object* _init_l_instXorOpUInt8___closed__0(void){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = lean_alloc_closure((void*)(l_UInt8_xor___boxed), 2, 0);
return v___x_161_;
}
}
static lean_object* _init_l_instXorOpUInt8(void){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_obj_once(&l_instXorOpUInt8___closed__0, &l_instXorOpUInt8___closed__0_once, _init_l_instXorOpUInt8___closed__0);
return v___x_162_;
}
}
static lean_object* _init_l_instShiftLeftUInt8___closed__0(void){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = lean_alloc_closure((void*)(l_UInt8_shiftLeft___boxed), 2, 0);
return v___x_163_;
}
}
static lean_object* _init_l_instShiftLeftUInt8(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_obj_once(&l_instShiftLeftUInt8___closed__0, &l_instShiftLeftUInt8___closed__0_once, _init_l_instShiftLeftUInt8___closed__0);
return v___x_164_;
}
}
static lean_object* _init_l_instShiftRightUInt8___closed__0(void){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = lean_alloc_closure((void*)(l_UInt8_shiftRight___boxed), 2, 0);
return v___x_165_;
}
}
static lean_object* _init_l_instShiftRightUInt8(void){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_obj_once(&l_instShiftRightUInt8___closed__0, &l_instShiftRightUInt8___closed__0_once, _init_l_instShiftRightUInt8___closed__0);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Bool_toUInt8___boxed(lean_object* v_b_168_){
_start:
{
uint8_t v_b_boxed_169_; uint8_t v_res_170_; lean_object* v_r_171_; 
v_b_boxed_169_ = lean_unbox(v_b_168_);
v_res_170_ = lean_bool_to_uint8(v_b_boxed_169_);
v_r_171_ = lean_box(v_res_170_);
return v_r_171_;
}
}
LEAN_EXPORT uint8_t l_instMaxUInt8___lam__0(uint8_t v_x_172_, uint8_t v_y_173_){
_start:
{
uint8_t v___x_174_; 
v___x_174_ = lean_uint8_dec_le(v_x_172_, v_y_173_);
if (v___x_174_ == 0)
{
return v_x_172_;
}
else
{
return v_y_173_;
}
}
}
LEAN_EXPORT lean_object* l_instMaxUInt8___lam__0___boxed(lean_object* v_x_175_, lean_object* v_y_176_){
_start:
{
uint8_t v_x_boxed_177_; uint8_t v_y_boxed_178_; uint8_t v_res_179_; lean_object* v_r_180_; 
v_x_boxed_177_ = lean_unbox(v_x_175_);
v_y_boxed_178_ = lean_unbox(v_y_176_);
v_res_179_ = l_instMaxUInt8___lam__0(v_x_boxed_177_, v_y_boxed_178_);
v_r_180_ = lean_box(v_res_179_);
return v_r_180_;
}
}
static lean_object* _init_l_instMaxUInt8___closed__0(void){
_start:
{
lean_object* v___f_181_; 
v___f_181_ = lean_alloc_closure((void*)(l_instMaxUInt8___lam__0___boxed), 2, 0);
return v___f_181_;
}
}
static lean_object* _init_l_instMaxUInt8(void){
_start:
{
lean_object* v___f_182_; 
v___f_182_ = lean_obj_once(&l_instMaxUInt8___closed__0, &l_instMaxUInt8___closed__0_once, _init_l_instMaxUInt8___closed__0);
return v___f_182_;
}
}
LEAN_EXPORT uint8_t l_instMinUInt8___lam__0(uint8_t v_x_183_, uint8_t v_y_184_){
_start:
{
uint8_t v___x_185_; 
v___x_185_ = lean_uint8_dec_le(v_x_183_, v_y_184_);
if (v___x_185_ == 0)
{
return v_y_184_;
}
else
{
return v_x_183_;
}
}
}
LEAN_EXPORT lean_object* l_instMinUInt8___lam__0___boxed(lean_object* v_x_186_, lean_object* v_y_187_){
_start:
{
uint8_t v_x_boxed_188_; uint8_t v_y_boxed_189_; uint8_t v_res_190_; lean_object* v_r_191_; 
v_x_boxed_188_ = lean_unbox(v_x_186_);
v_y_boxed_189_ = lean_unbox(v_y_187_);
v_res_190_ = l_instMinUInt8___lam__0(v_x_boxed_188_, v_y_boxed_189_);
v_r_191_ = lean_box(v_res_190_);
return v_r_191_;
}
}
static lean_object* _init_l_instMinUInt8___closed__0(void){
_start:
{
lean_object* v___f_192_; 
v___f_192_ = lean_alloc_closure((void*)(l_instMinUInt8___lam__0___boxed), 2, 0);
return v___f_192_;
}
}
static lean_object* _init_l_instMinUInt8(void){
_start:
{
lean_object* v___f_193_; 
v___f_193_ = lean_obj_once(&l_instMinUInt8___closed__0, &l_instMinUInt8___closed__0_once, _init_l_instMinUInt8___closed__0);
return v___f_193_;
}
}
LEAN_EXPORT uint8_t l_UInt8_toAsciiLower(uint8_t v_b_194_){
_start:
{
uint8_t v___y_196_; uint8_t v___x_199_; uint8_t v___x_200_; 
v___x_199_ = 65;
v___x_200_ = lean_uint8_dec_le(v___x_199_, v_b_194_);
if (v___x_200_ == 0)
{
v___y_196_ = v___x_200_;
goto v___jp_195_;
}
else
{
uint8_t v___x_201_; uint8_t v___x_202_; 
v___x_201_ = 90;
v___x_202_ = lean_uint8_dec_le(v_b_194_, v___x_201_);
v___y_196_ = v___x_202_;
goto v___jp_195_;
}
v___jp_195_:
{
if (v___y_196_ == 0)
{
return v_b_194_;
}
else
{
uint8_t v___x_197_; uint8_t v___x_198_; 
v___x_197_ = 32;
v___x_198_ = lean_uint8_add(v_b_194_, v___x_197_);
return v___x_198_;
}
}
}
}
LEAN_EXPORT lean_object* l_UInt8_toAsciiLower___boxed(lean_object* v_b_203_){
_start:
{
uint8_t v_b_boxed_204_; uint8_t v_res_205_; lean_object* v_r_206_; 
v_b_boxed_204_ = lean_unbox(v_b_203_);
v_res_205_ = l_UInt8_toAsciiLower(v_b_boxed_204_);
v_r_206_ = lean_box(v_res_205_);
return v_r_206_;
}
}
LEAN_EXPORT uint16_t l_UInt16_ofFin(lean_object* v_a_207_){
_start:
{
uint16_t v___x_208_; 
v___x_208_ = lean_uint16_of_nat_mk(v_a_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_UInt16_ofFin___boxed(lean_object* v_a_209_){
_start:
{
uint16_t v_res_210_; lean_object* v_r_211_; 
v_res_210_ = l_UInt16_ofFin(v_a_209_);
v_r_211_ = lean_box(v_res_210_);
return v_r_211_;
}
}
static lean_object* _init_l_UInt16_ofInt___closed__0(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_212_ = lean_unsigned_to_nat(16u);
v___x_213_ = lean_obj_once(&l_UInt8_ofInt___closed__0, &l_UInt8_ofInt___closed__0_once, _init_l_UInt8_ofInt___closed__0);
v___x_214_ = l_Int_pow(v___x_213_, v___x_212_);
return v___x_214_;
}
}
LEAN_EXPORT uint16_t l_UInt16_ofInt(lean_object* v_x_215_){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; uint16_t v___x_219_; 
v___x_216_ = lean_obj_once(&l_UInt16_ofInt___closed__0, &l_UInt16_ofInt___closed__0_once, _init_l_UInt16_ofInt___closed__0);
v___x_217_ = lean_int_emod(v_x_215_, v___x_216_);
v___x_218_ = l_Int_toNat(v___x_217_);
lean_dec(v___x_217_);
v___x_219_ = lean_uint16_of_nat(v___x_218_);
lean_dec(v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_UInt16_ofInt___boxed(lean_object* v_x_220_){
_start:
{
uint16_t v_res_221_; lean_object* v_r_222_; 
v_res_221_ = l_UInt16_ofInt(v_x_220_);
lean_dec(v_x_220_);
v_r_222_ = lean_box(v_res_221_);
return v_r_222_;
}
}
LEAN_EXPORT lean_object* l_UInt16_add___boxed(lean_object* v_a_225_, lean_object* v_b_226_){
_start:
{
uint16_t v_a_boxed_227_; uint16_t v_b_boxed_228_; uint16_t v_res_229_; lean_object* v_r_230_; 
v_a_boxed_227_ = lean_unbox(v_a_225_);
v_b_boxed_228_ = lean_unbox(v_b_226_);
v_res_229_ = lean_uint16_add(v_a_boxed_227_, v_b_boxed_228_);
v_r_230_ = lean_box(v_res_229_);
return v_r_230_;
}
}
LEAN_EXPORT lean_object* l_UInt16_sub___boxed(lean_object* v_a_233_, lean_object* v_b_234_){
_start:
{
uint16_t v_a_boxed_235_; uint16_t v_b_boxed_236_; uint16_t v_res_237_; lean_object* v_r_238_; 
v_a_boxed_235_ = lean_unbox(v_a_233_);
v_b_boxed_236_ = lean_unbox(v_b_234_);
v_res_237_ = lean_uint16_sub(v_a_boxed_235_, v_b_boxed_236_);
v_r_238_ = lean_box(v_res_237_);
return v_r_238_;
}
}
LEAN_EXPORT lean_object* l_UInt16_mul___boxed(lean_object* v_a_241_, lean_object* v_b_242_){
_start:
{
uint16_t v_a_boxed_243_; uint16_t v_b_boxed_244_; uint16_t v_res_245_; lean_object* v_r_246_; 
v_a_boxed_243_ = lean_unbox(v_a_241_);
v_b_boxed_244_ = lean_unbox(v_b_242_);
v_res_245_ = lean_uint16_mul(v_a_boxed_243_, v_b_boxed_244_);
v_r_246_ = lean_box(v_res_245_);
return v_r_246_;
}
}
LEAN_EXPORT lean_object* l_UInt16_div___boxed(lean_object* v_a_249_, lean_object* v_b_250_){
_start:
{
uint16_t v_a_boxed_251_; uint16_t v_b_boxed_252_; uint16_t v_res_253_; lean_object* v_r_254_; 
v_a_boxed_251_ = lean_unbox(v_a_249_);
v_b_boxed_252_ = lean_unbox(v_b_250_);
v_res_253_ = lean_uint16_div(v_a_boxed_251_, v_b_boxed_252_);
v_r_254_ = lean_box(v_res_253_);
return v_r_254_;
}
}
LEAN_EXPORT uint16_t l_UInt16_pow(uint16_t v_x_255_, lean_object* v_n_256_){
_start:
{
lean_object* v_zero_257_; uint8_t v_isZero_258_; 
v_zero_257_ = lean_unsigned_to_nat(0u);
v_isZero_258_ = lean_nat_dec_eq(v_n_256_, v_zero_257_);
if (v_isZero_258_ == 1)
{
uint16_t v___x_259_; 
v___x_259_ = 1;
return v___x_259_;
}
else
{
lean_object* v_one_260_; lean_object* v_n_261_; uint16_t v___x_262_; uint16_t v___x_263_; 
v_one_260_ = lean_unsigned_to_nat(1u);
v_n_261_ = lean_nat_sub(v_n_256_, v_one_260_);
v___x_262_ = l_UInt16_pow(v_x_255_, v_n_261_);
lean_dec(v_n_261_);
v___x_263_ = lean_uint16_mul(v___x_262_, v_x_255_);
return v___x_263_;
}
}
}
LEAN_EXPORT lean_object* l_UInt16_pow___boxed(lean_object* v_x_264_, lean_object* v_n_265_){
_start:
{
uint16_t v_x_boxed_266_; uint16_t v_res_267_; lean_object* v_r_268_; 
v_x_boxed_266_ = lean_unbox(v_x_264_);
v_res_267_ = l_UInt16_pow(v_x_boxed_266_, v_n_265_);
lean_dec(v_n_265_);
v_r_268_ = lean_box(v_res_267_);
return v_r_268_;
}
}
LEAN_EXPORT lean_object* l_UInt16_mod___boxed(lean_object* v_a_271_, lean_object* v_b_272_){
_start:
{
uint16_t v_a_boxed_273_; uint16_t v_b_boxed_274_; uint16_t v_res_275_; lean_object* v_r_276_; 
v_a_boxed_273_ = lean_unbox(v_a_271_);
v_b_boxed_274_ = lean_unbox(v_b_272_);
v_res_275_ = lean_uint16_mod(v_a_boxed_273_, v_b_boxed_274_);
v_r_276_ = lean_box(v_res_275_);
return v_r_276_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt16_modn_spec__0(lean_object* v_a_277_){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_unsigned_to_nat(16u);
v___x_279_ = l_BitVec_ofNat(v___x_278_, v_a_277_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt16_modn_spec__0___boxed(lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Nat_cast___at___00UInt16_modn_spec__0(v_a_280_);
lean_dec(v_a_280_);
return v_res_281_;
}
}
LEAN_EXPORT uint16_t l_UInt16_modn(uint16_t v_a_282_, lean_object* v_n_283_){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; uint16_t v___x_287_; 
v___x_284_ = lean_uint16_to_nat(v_a_282_);
v___x_285_ = lean_nat_mod(v___x_284_, v_n_283_);
lean_dec(v___x_284_);
v___x_286_ = l_Nat_cast___at___00UInt16_modn_spec__0(v___x_285_);
lean_dec(v___x_285_);
v___x_287_ = lean_uint16_of_nat_mk(v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_UInt16_modn___boxed(lean_object* v_a_288_, lean_object* v_n_289_){
_start:
{
uint16_t v_a_boxed_290_; uint16_t v_res_291_; lean_object* v_r_292_; 
v_a_boxed_290_ = lean_unbox(v_a_288_);
v_res_291_ = l_UInt16_modn(v_a_boxed_290_, v_n_289_);
lean_dec(v_n_289_);
v_r_292_ = lean_box(v_res_291_);
return v_r_292_;
}
}
LEAN_EXPORT lean_object* l_UInt16_land___boxed(lean_object* v_a_295_, lean_object* v_b_296_){
_start:
{
uint16_t v_a_boxed_297_; uint16_t v_b_boxed_298_; uint16_t v_res_299_; lean_object* v_r_300_; 
v_a_boxed_297_ = lean_unbox(v_a_295_);
v_b_boxed_298_ = lean_unbox(v_b_296_);
v_res_299_ = lean_uint16_land(v_a_boxed_297_, v_b_boxed_298_);
v_r_300_ = lean_box(v_res_299_);
return v_r_300_;
}
}
LEAN_EXPORT lean_object* l_UInt16_lor___boxed(lean_object* v_a_303_, lean_object* v_b_304_){
_start:
{
uint16_t v_a_boxed_305_; uint16_t v_b_boxed_306_; uint16_t v_res_307_; lean_object* v_r_308_; 
v_a_boxed_305_ = lean_unbox(v_a_303_);
v_b_boxed_306_ = lean_unbox(v_b_304_);
v_res_307_ = lean_uint16_lor(v_a_boxed_305_, v_b_boxed_306_);
v_r_308_ = lean_box(v_res_307_);
return v_r_308_;
}
}
LEAN_EXPORT lean_object* l_UInt16_xor___boxed(lean_object* v_a_311_, lean_object* v_b_312_){
_start:
{
uint16_t v_a_boxed_313_; uint16_t v_b_boxed_314_; uint16_t v_res_315_; lean_object* v_r_316_; 
v_a_boxed_313_ = lean_unbox(v_a_311_);
v_b_boxed_314_ = lean_unbox(v_b_312_);
v_res_315_ = lean_uint16_xor(v_a_boxed_313_, v_b_boxed_314_);
v_r_316_ = lean_box(v_res_315_);
return v_r_316_;
}
}
LEAN_EXPORT lean_object* l_UInt16_shiftLeft___boxed(lean_object* v_a_319_, lean_object* v_b_320_){
_start:
{
uint16_t v_a_boxed_321_; uint16_t v_b_boxed_322_; uint16_t v_res_323_; lean_object* v_r_324_; 
v_a_boxed_321_ = lean_unbox(v_a_319_);
v_b_boxed_322_ = lean_unbox(v_b_320_);
v_res_323_ = lean_uint16_shift_left(v_a_boxed_321_, v_b_boxed_322_);
v_r_324_ = lean_box(v_res_323_);
return v_r_324_;
}
}
LEAN_EXPORT lean_object* l_UInt16_shiftRight___boxed(lean_object* v_a_327_, lean_object* v_b_328_){
_start:
{
uint16_t v_a_boxed_329_; uint16_t v_b_boxed_330_; uint16_t v_res_331_; lean_object* v_r_332_; 
v_a_boxed_329_ = lean_unbox(v_a_327_);
v_b_boxed_330_ = lean_unbox(v_b_328_);
v_res_331_ = lean_uint16_shift_right(v_a_boxed_329_, v_b_boxed_330_);
v_r_332_ = lean_box(v_res_331_);
return v_r_332_;
}
}
static lean_object* _init_l_instAddUInt16___closed__0(void){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = lean_alloc_closure((void*)(l_UInt16_add___boxed), 2, 0);
return v___x_333_;
}
}
static lean_object* _init_l_instAddUInt16(void){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = lean_obj_once(&l_instAddUInt16___closed__0, &l_instAddUInt16___closed__0_once, _init_l_instAddUInt16___closed__0);
return v___x_334_;
}
}
static lean_object* _init_l_instSubUInt16___closed__0(void){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_alloc_closure((void*)(l_UInt16_sub___boxed), 2, 0);
return v___x_335_;
}
}
static lean_object* _init_l_instSubUInt16(void){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = lean_obj_once(&l_instSubUInt16___closed__0, &l_instSubUInt16___closed__0_once, _init_l_instSubUInt16___closed__0);
return v___x_336_;
}
}
static lean_object* _init_l_instMulUInt16___closed__0(void){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = lean_alloc_closure((void*)(l_UInt16_mul___boxed), 2, 0);
return v___x_337_;
}
}
static lean_object* _init_l_instMulUInt16(void){
_start:
{
lean_object* v___x_338_; 
v___x_338_ = lean_obj_once(&l_instMulUInt16___closed__0, &l_instMulUInt16___closed__0_once, _init_l_instMulUInt16___closed__0);
return v___x_338_;
}
}
static lean_object* _init_l_instPowUInt16Nat___closed__0(void){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_alloc_closure((void*)(l_UInt16_pow___boxed), 2, 0);
return v___x_339_;
}
}
static lean_object* _init_l_instPowUInt16Nat(void){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = lean_obj_once(&l_instPowUInt16Nat___closed__0, &l_instPowUInt16Nat___closed__0_once, _init_l_instPowUInt16Nat___closed__0);
return v___x_340_;
}
}
static lean_object* _init_l_instModUInt16___closed__0(void){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = lean_alloc_closure((void*)(l_UInt16_mod___boxed), 2, 0);
return v___x_341_;
}
}
static lean_object* _init_l_instModUInt16(void){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = lean_obj_once(&l_instModUInt16___closed__0, &l_instModUInt16___closed__0_once, _init_l_instModUInt16___closed__0);
return v___x_342_;
}
}
static lean_object* _init_l_instHModUInt16Nat___closed__0(void){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = lean_alloc_closure((void*)(l_UInt16_modn___boxed), 2, 0);
return v___x_343_;
}
}
static lean_object* _init_l_instHModUInt16Nat(void){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = lean_obj_once(&l_instHModUInt16Nat___closed__0, &l_instHModUInt16Nat___closed__0_once, _init_l_instHModUInt16Nat___closed__0);
return v___x_344_;
}
}
static lean_object* _init_l_instDivUInt16___closed__0(void){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_alloc_closure((void*)(l_UInt16_div___boxed), 2, 0);
return v___x_345_;
}
}
static lean_object* _init_l_instDivUInt16(void){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = lean_obj_once(&l_instDivUInt16___closed__0, &l_instDivUInt16___closed__0_once, _init_l_instDivUInt16___closed__0);
return v___x_346_;
}
}
static lean_object* _init_l_instLTUInt16(void){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = lean_box(0);
return v___x_347_;
}
}
static lean_object* _init_l_instLEUInt16(void){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = lean_box(0);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_UInt16_complement___boxed(lean_object* v_a_350_){
_start:
{
uint16_t v_a_boxed_351_; uint16_t v_res_352_; lean_object* v_r_353_; 
v_a_boxed_351_ = lean_unbox(v_a_350_);
v_res_352_ = lean_uint16_complement(v_a_boxed_351_);
v_r_353_ = lean_box(v_res_352_);
return v_r_353_;
}
}
LEAN_EXPORT lean_object* l_UInt16_neg___boxed(lean_object* v_a_355_){
_start:
{
uint16_t v_a_boxed_356_; uint16_t v_res_357_; lean_object* v_r_358_; 
v_a_boxed_356_ = lean_unbox(v_a_355_);
v_res_357_ = lean_uint16_neg(v_a_boxed_356_);
v_r_358_ = lean_box(v_res_357_);
return v_r_358_;
}
}
static lean_object* _init_l_instComplementUInt16___closed__0(void){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = lean_alloc_closure((void*)(l_UInt16_complement___boxed), 1, 0);
return v___x_359_;
}
}
static lean_object* _init_l_instComplementUInt16(void){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = lean_obj_once(&l_instComplementUInt16___closed__0, &l_instComplementUInt16___closed__0_once, _init_l_instComplementUInt16___closed__0);
return v___x_360_;
}
}
static lean_object* _init_l_instNegUInt16___closed__0(void){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = lean_alloc_closure((void*)(l_UInt16_neg___boxed), 1, 0);
return v___x_361_;
}
}
static lean_object* _init_l_instNegUInt16(void){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = lean_obj_once(&l_instNegUInt16___closed__0, &l_instNegUInt16___closed__0_once, _init_l_instNegUInt16___closed__0);
return v___x_362_;
}
}
static lean_object* _init_l_instAndOpUInt16___closed__0(void){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = lean_alloc_closure((void*)(l_UInt16_land___boxed), 2, 0);
return v___x_363_;
}
}
static lean_object* _init_l_instAndOpUInt16(void){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = lean_obj_once(&l_instAndOpUInt16___closed__0, &l_instAndOpUInt16___closed__0_once, _init_l_instAndOpUInt16___closed__0);
return v___x_364_;
}
}
static lean_object* _init_l_instOrOpUInt16___closed__0(void){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = lean_alloc_closure((void*)(l_UInt16_lor___boxed), 2, 0);
return v___x_365_;
}
}
static lean_object* _init_l_instOrOpUInt16(void){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = lean_obj_once(&l_instOrOpUInt16___closed__0, &l_instOrOpUInt16___closed__0_once, _init_l_instOrOpUInt16___closed__0);
return v___x_366_;
}
}
static lean_object* _init_l_instXorOpUInt16___closed__0(void){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = lean_alloc_closure((void*)(l_UInt16_xor___boxed), 2, 0);
return v___x_367_;
}
}
static lean_object* _init_l_instXorOpUInt16(void){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = lean_obj_once(&l_instXorOpUInt16___closed__0, &l_instXorOpUInt16___closed__0_once, _init_l_instXorOpUInt16___closed__0);
return v___x_368_;
}
}
static lean_object* _init_l_instShiftLeftUInt16___closed__0(void){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = lean_alloc_closure((void*)(l_UInt16_shiftLeft___boxed), 2, 0);
return v___x_369_;
}
}
static lean_object* _init_l_instShiftLeftUInt16(void){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = lean_obj_once(&l_instShiftLeftUInt16___closed__0, &l_instShiftLeftUInt16___closed__0_once, _init_l_instShiftLeftUInt16___closed__0);
return v___x_370_;
}
}
static lean_object* _init_l_instShiftRightUInt16___closed__0(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lean_alloc_closure((void*)(l_UInt16_shiftRight___boxed), 2, 0);
return v___x_371_;
}
}
static lean_object* _init_l_instShiftRightUInt16(void){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = lean_obj_once(&l_instShiftRightUInt16___closed__0, &l_instShiftRightUInt16___closed__0_once, _init_l_instShiftRightUInt16___closed__0);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Bool_toUInt16___boxed(lean_object* v_b_374_){
_start:
{
uint8_t v_b_boxed_375_; uint16_t v_res_376_; lean_object* v_r_377_; 
v_b_boxed_375_ = lean_unbox(v_b_374_);
v_res_376_ = lean_bool_to_uint16(v_b_boxed_375_);
v_r_377_ = lean_box(v_res_376_);
return v_r_377_;
}
}
LEAN_EXPORT uint8_t l_UInt16_decLt___aux__1(uint16_t v_a_378_, uint16_t v_b_379_){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_380_ = lean_uint16_to_nat(v_a_378_);
v___x_381_ = lean_uint16_to_nat(v_b_379_);
v___x_382_ = lean_nat_dec_lt(v___x_380_, v___x_381_);
lean_dec(v___x_381_);
lean_dec(v___x_380_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_UInt16_decLt___aux__1___boxed(lean_object* v_a_383_, lean_object* v_b_384_){
_start:
{
uint16_t v_a_boxed_385_; uint16_t v_b_boxed_386_; uint8_t v_res_387_; lean_object* v_r_388_; 
v_a_boxed_385_ = lean_unbox(v_a_383_);
v_b_boxed_386_ = lean_unbox(v_b_384_);
v_res_387_ = l_UInt16_decLt___aux__1(v_a_boxed_385_, v_b_boxed_386_);
v_r_388_ = lean_box(v_res_387_);
return v_r_388_;
}
}
LEAN_EXPORT lean_object* l_UInt16_decLt___boxed(lean_object* v_a_391_, lean_object* v_b_392_){
_start:
{
uint16_t v_a_boxed_393_; uint16_t v_b_boxed_394_; uint8_t v_res_395_; lean_object* v_r_396_; 
v_a_boxed_393_ = lean_unbox(v_a_391_);
v_b_boxed_394_ = lean_unbox(v_b_392_);
v_res_395_ = lean_uint16_dec_lt(v_a_boxed_393_, v_b_boxed_394_);
v_r_396_ = lean_box(v_res_395_);
return v_r_396_;
}
}
LEAN_EXPORT uint8_t l_UInt16_decLe___aux__1(uint16_t v_a_397_, uint16_t v_b_398_){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_399_ = lean_uint16_to_nat(v_a_397_);
v___x_400_ = lean_uint16_to_nat(v_b_398_);
v___x_401_ = lean_nat_dec_le(v___x_399_, v___x_400_);
lean_dec(v___x_400_);
lean_dec(v___x_399_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_UInt16_decLe___aux__1___boxed(lean_object* v_a_402_, lean_object* v_b_403_){
_start:
{
uint16_t v_a_boxed_404_; uint16_t v_b_boxed_405_; uint8_t v_res_406_; lean_object* v_r_407_; 
v_a_boxed_404_ = lean_unbox(v_a_402_);
v_b_boxed_405_ = lean_unbox(v_b_403_);
v_res_406_ = l_UInt16_decLe___aux__1(v_a_boxed_404_, v_b_boxed_405_);
v_r_407_ = lean_box(v_res_406_);
return v_r_407_;
}
}
LEAN_EXPORT lean_object* l_UInt16_decLe___boxed(lean_object* v_a_410_, lean_object* v_b_411_){
_start:
{
uint16_t v_a_boxed_412_; uint16_t v_b_boxed_413_; uint8_t v_res_414_; lean_object* v_r_415_; 
v_a_boxed_412_ = lean_unbox(v_a_410_);
v_b_boxed_413_ = lean_unbox(v_b_411_);
v_res_414_ = lean_uint16_dec_le(v_a_boxed_412_, v_b_boxed_413_);
v_r_415_ = lean_box(v_res_414_);
return v_r_415_;
}
}
LEAN_EXPORT uint16_t l_instMaxUInt16___lam__0(uint16_t v_x_416_, uint16_t v_y_417_){
_start:
{
uint8_t v___x_418_; 
v___x_418_ = lean_uint16_dec_le(v_x_416_, v_y_417_);
if (v___x_418_ == 0)
{
return v_x_416_;
}
else
{
return v_y_417_;
}
}
}
LEAN_EXPORT lean_object* l_instMaxUInt16___lam__0___boxed(lean_object* v_x_419_, lean_object* v_y_420_){
_start:
{
uint16_t v_x_boxed_421_; uint16_t v_y_boxed_422_; uint16_t v_res_423_; lean_object* v_r_424_; 
v_x_boxed_421_ = lean_unbox(v_x_419_);
v_y_boxed_422_ = lean_unbox(v_y_420_);
v_res_423_ = l_instMaxUInt16___lam__0(v_x_boxed_421_, v_y_boxed_422_);
v_r_424_ = lean_box(v_res_423_);
return v_r_424_;
}
}
static lean_object* _init_l_instMaxUInt16___closed__0(void){
_start:
{
lean_object* v___f_425_; 
v___f_425_ = lean_alloc_closure((void*)(l_instMaxUInt16___lam__0___boxed), 2, 0);
return v___f_425_;
}
}
static lean_object* _init_l_instMaxUInt16(void){
_start:
{
lean_object* v___f_426_; 
v___f_426_ = lean_obj_once(&l_instMaxUInt16___closed__0, &l_instMaxUInt16___closed__0_once, _init_l_instMaxUInt16___closed__0);
return v___f_426_;
}
}
LEAN_EXPORT uint16_t l_instMinUInt16___lam__0(uint16_t v_x_427_, uint16_t v_y_428_){
_start:
{
uint8_t v___x_429_; 
v___x_429_ = lean_uint16_dec_le(v_x_427_, v_y_428_);
if (v___x_429_ == 0)
{
return v_y_428_;
}
else
{
return v_x_427_;
}
}
}
LEAN_EXPORT lean_object* l_instMinUInt16___lam__0___boxed(lean_object* v_x_430_, lean_object* v_y_431_){
_start:
{
uint16_t v_x_boxed_432_; uint16_t v_y_boxed_433_; uint16_t v_res_434_; lean_object* v_r_435_; 
v_x_boxed_432_ = lean_unbox(v_x_430_);
v_y_boxed_433_ = lean_unbox(v_y_431_);
v_res_434_ = l_instMinUInt16___lam__0(v_x_boxed_432_, v_y_boxed_433_);
v_r_435_ = lean_box(v_res_434_);
return v_r_435_;
}
}
static lean_object* _init_l_instMinUInt16___closed__0(void){
_start:
{
lean_object* v___f_436_; 
v___f_436_ = lean_alloc_closure((void*)(l_instMinUInt16___lam__0___boxed), 2, 0);
return v___f_436_;
}
}
static lean_object* _init_l_instMinUInt16(void){
_start:
{
lean_object* v___f_437_; 
v___f_437_ = lean_obj_once(&l_instMinUInt16___closed__0, &l_instMinUInt16___closed__0_once, _init_l_instMinUInt16___closed__0);
return v___f_437_;
}
}
LEAN_EXPORT uint32_t l_UInt32_ofFin(lean_object* v_a_438_){
_start:
{
uint32_t v___x_439_; 
v___x_439_ = lean_uint32_of_nat_mk(v_a_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_UInt32_ofFin___boxed(lean_object* v_a_440_){
_start:
{
uint32_t v_res_441_; lean_object* v_r_442_; 
v_res_441_ = l_UInt32_ofFin(v_a_440_);
v_r_442_ = lean_box_uint32(v_res_441_);
return v_r_442_;
}
}
static lean_object* _init_l_UInt32_ofInt___closed__0(void){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_443_ = lean_unsigned_to_nat(32u);
v___x_444_ = lean_obj_once(&l_UInt8_ofInt___closed__0, &l_UInt8_ofInt___closed__0_once, _init_l_UInt8_ofInt___closed__0);
v___x_445_ = l_Int_pow(v___x_444_, v___x_443_);
return v___x_445_;
}
}
LEAN_EXPORT uint32_t l_UInt32_ofInt(lean_object* v_x_446_){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; uint32_t v___x_450_; 
v___x_447_ = lean_obj_once(&l_UInt32_ofInt___closed__0, &l_UInt32_ofInt___closed__0_once, _init_l_UInt32_ofInt___closed__0);
v___x_448_ = lean_int_emod(v_x_446_, v___x_447_);
v___x_449_ = l_Int_toNat(v___x_448_);
lean_dec(v___x_448_);
v___x_450_ = lean_uint32_of_nat(v___x_449_);
lean_dec(v___x_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_UInt32_ofInt___boxed(lean_object* v_x_451_){
_start:
{
uint32_t v_res_452_; lean_object* v_r_453_; 
v_res_452_ = l_UInt32_ofInt(v_x_451_);
lean_dec(v_x_451_);
v_r_453_ = lean_box_uint32(v_res_452_);
return v_r_453_;
}
}
LEAN_EXPORT lean_object* l_UInt32_mul___boxed(lean_object* v_a_456_, lean_object* v_b_457_){
_start:
{
uint32_t v_a_boxed_458_; uint32_t v_b_boxed_459_; uint32_t v_res_460_; lean_object* v_r_461_; 
v_a_boxed_458_ = lean_unbox_uint32(v_a_456_);
lean_dec(v_a_456_);
v_b_boxed_459_ = lean_unbox_uint32(v_b_457_);
lean_dec(v_b_457_);
v_res_460_ = lean_uint32_mul(v_a_boxed_458_, v_b_boxed_459_);
v_r_461_ = lean_box_uint32(v_res_460_);
return v_r_461_;
}
}
LEAN_EXPORT lean_object* l_UInt32_div___boxed(lean_object* v_a_464_, lean_object* v_b_465_){
_start:
{
uint32_t v_a_boxed_466_; uint32_t v_b_boxed_467_; uint32_t v_res_468_; lean_object* v_r_469_; 
v_a_boxed_466_ = lean_unbox_uint32(v_a_464_);
lean_dec(v_a_464_);
v_b_boxed_467_ = lean_unbox_uint32(v_b_465_);
lean_dec(v_b_465_);
v_res_468_ = lean_uint32_div(v_a_boxed_466_, v_b_boxed_467_);
v_r_469_ = lean_box_uint32(v_res_468_);
return v_r_469_;
}
}
LEAN_EXPORT uint32_t l_UInt32_pow(uint32_t v_x_470_, lean_object* v_n_471_){
_start:
{
lean_object* v_zero_472_; uint8_t v_isZero_473_; 
v_zero_472_ = lean_unsigned_to_nat(0u);
v_isZero_473_ = lean_nat_dec_eq(v_n_471_, v_zero_472_);
if (v_isZero_473_ == 1)
{
uint32_t v___x_474_; 
v___x_474_ = 1;
return v___x_474_;
}
else
{
lean_object* v_one_475_; lean_object* v_n_476_; uint32_t v___x_477_; uint32_t v___x_478_; 
v_one_475_ = lean_unsigned_to_nat(1u);
v_n_476_ = lean_nat_sub(v_n_471_, v_one_475_);
v___x_477_ = l_UInt32_pow(v_x_470_, v_n_476_);
lean_dec(v_n_476_);
v___x_478_ = lean_uint32_mul(v___x_477_, v_x_470_);
return v___x_478_;
}
}
}
LEAN_EXPORT lean_object* l_UInt32_pow___boxed(lean_object* v_x_479_, lean_object* v_n_480_){
_start:
{
uint32_t v_x_boxed_481_; uint32_t v_res_482_; lean_object* v_r_483_; 
v_x_boxed_481_ = lean_unbox_uint32(v_x_479_);
lean_dec(v_x_479_);
v_res_482_ = l_UInt32_pow(v_x_boxed_481_, v_n_480_);
lean_dec(v_n_480_);
v_r_483_ = lean_box_uint32(v_res_482_);
return v_r_483_;
}
}
LEAN_EXPORT lean_object* l_UInt32_mod___boxed(lean_object* v_a_486_, lean_object* v_b_487_){
_start:
{
uint32_t v_a_boxed_488_; uint32_t v_b_boxed_489_; uint32_t v_res_490_; lean_object* v_r_491_; 
v_a_boxed_488_ = lean_unbox_uint32(v_a_486_);
lean_dec(v_a_486_);
v_b_boxed_489_ = lean_unbox_uint32(v_b_487_);
lean_dec(v_b_487_);
v_res_490_ = lean_uint32_mod(v_a_boxed_488_, v_b_boxed_489_);
v_r_491_ = lean_box_uint32(v_res_490_);
return v_r_491_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt32_modn_spec__0(lean_object* v_a_492_){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = lean_unsigned_to_nat(32u);
v___x_494_ = l_BitVec_ofNat(v___x_493_, v_a_492_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt32_modn_spec__0___boxed(lean_object* v_a_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Nat_cast___at___00UInt32_modn_spec__0(v_a_495_);
lean_dec(v_a_495_);
return v_res_496_;
}
}
LEAN_EXPORT uint32_t l_UInt32_modn(uint32_t v_a_497_, lean_object* v_n_498_){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; uint32_t v___x_502_; 
v___x_499_ = lean_uint32_to_nat(v_a_497_);
v___x_500_ = lean_nat_mod(v___x_499_, v_n_498_);
lean_dec(v___x_499_);
v___x_501_ = l_Nat_cast___at___00UInt32_modn_spec__0(v___x_500_);
lean_dec(v___x_500_);
v___x_502_ = lean_uint32_of_nat_mk(v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_UInt32_modn___boxed(lean_object* v_a_503_, lean_object* v_n_504_){
_start:
{
uint32_t v_a_boxed_505_; uint32_t v_res_506_; lean_object* v_r_507_; 
v_a_boxed_505_ = lean_unbox_uint32(v_a_503_);
lean_dec(v_a_503_);
v_res_506_ = l_UInt32_modn(v_a_boxed_505_, v_n_504_);
lean_dec(v_n_504_);
v_r_507_ = lean_box_uint32(v_res_506_);
return v_r_507_;
}
}
LEAN_EXPORT lean_object* l_UInt32_land___boxed(lean_object* v_a_510_, lean_object* v_b_511_){
_start:
{
uint32_t v_a_boxed_512_; uint32_t v_b_boxed_513_; uint32_t v_res_514_; lean_object* v_r_515_; 
v_a_boxed_512_ = lean_unbox_uint32(v_a_510_);
lean_dec(v_a_510_);
v_b_boxed_513_ = lean_unbox_uint32(v_b_511_);
lean_dec(v_b_511_);
v_res_514_ = lean_uint32_land(v_a_boxed_512_, v_b_boxed_513_);
v_r_515_ = lean_box_uint32(v_res_514_);
return v_r_515_;
}
}
LEAN_EXPORT lean_object* l_UInt32_lor___boxed(lean_object* v_a_518_, lean_object* v_b_519_){
_start:
{
uint32_t v_a_boxed_520_; uint32_t v_b_boxed_521_; uint32_t v_res_522_; lean_object* v_r_523_; 
v_a_boxed_520_ = lean_unbox_uint32(v_a_518_);
lean_dec(v_a_518_);
v_b_boxed_521_ = lean_unbox_uint32(v_b_519_);
lean_dec(v_b_519_);
v_res_522_ = lean_uint32_lor(v_a_boxed_520_, v_b_boxed_521_);
v_r_523_ = lean_box_uint32(v_res_522_);
return v_r_523_;
}
}
LEAN_EXPORT lean_object* l_UInt32_xor___boxed(lean_object* v_a_526_, lean_object* v_b_527_){
_start:
{
uint32_t v_a_boxed_528_; uint32_t v_b_boxed_529_; uint32_t v_res_530_; lean_object* v_r_531_; 
v_a_boxed_528_ = lean_unbox_uint32(v_a_526_);
lean_dec(v_a_526_);
v_b_boxed_529_ = lean_unbox_uint32(v_b_527_);
lean_dec(v_b_527_);
v_res_530_ = lean_uint32_xor(v_a_boxed_528_, v_b_boxed_529_);
v_r_531_ = lean_box_uint32(v_res_530_);
return v_r_531_;
}
}
LEAN_EXPORT lean_object* l_UInt32_shiftLeft___boxed(lean_object* v_a_534_, lean_object* v_b_535_){
_start:
{
uint32_t v_a_boxed_536_; uint32_t v_b_boxed_537_; uint32_t v_res_538_; lean_object* v_r_539_; 
v_a_boxed_536_ = lean_unbox_uint32(v_a_534_);
lean_dec(v_a_534_);
v_b_boxed_537_ = lean_unbox_uint32(v_b_535_);
lean_dec(v_b_535_);
v_res_538_ = lean_uint32_shift_left(v_a_boxed_536_, v_b_boxed_537_);
v_r_539_ = lean_box_uint32(v_res_538_);
return v_r_539_;
}
}
LEAN_EXPORT lean_object* l_UInt32_shiftRight___boxed(lean_object* v_a_542_, lean_object* v_b_543_){
_start:
{
uint32_t v_a_boxed_544_; uint32_t v_b_boxed_545_; uint32_t v_res_546_; lean_object* v_r_547_; 
v_a_boxed_544_ = lean_unbox_uint32(v_a_542_);
lean_dec(v_a_542_);
v_b_boxed_545_ = lean_unbox_uint32(v_b_543_);
lean_dec(v_b_543_);
v_res_546_ = lean_uint32_shift_right(v_a_boxed_544_, v_b_boxed_545_);
v_r_547_ = lean_box_uint32(v_res_546_);
return v_r_547_;
}
}
static lean_object* _init_l_instMulUInt32___closed__0(void){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = lean_alloc_closure((void*)(l_UInt32_mul___boxed), 2, 0);
return v___x_548_;
}
}
static lean_object* _init_l_instMulUInt32(void){
_start:
{
lean_object* v___x_549_; 
v___x_549_ = lean_obj_once(&l_instMulUInt32___closed__0, &l_instMulUInt32___closed__0_once, _init_l_instMulUInt32___closed__0);
return v___x_549_;
}
}
static lean_object* _init_l_instPowUInt32Nat___closed__0(void){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = lean_alloc_closure((void*)(l_UInt32_pow___boxed), 2, 0);
return v___x_550_;
}
}
static lean_object* _init_l_instPowUInt32Nat(void){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = lean_obj_once(&l_instPowUInt32Nat___closed__0, &l_instPowUInt32Nat___closed__0_once, _init_l_instPowUInt32Nat___closed__0);
return v___x_551_;
}
}
static lean_object* _init_l_instModUInt32___closed__0(void){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = lean_alloc_closure((void*)(l_UInt32_mod___boxed), 2, 0);
return v___x_552_;
}
}
static lean_object* _init_l_instModUInt32(void){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = lean_obj_once(&l_instModUInt32___closed__0, &l_instModUInt32___closed__0_once, _init_l_instModUInt32___closed__0);
return v___x_553_;
}
}
static lean_object* _init_l_instHModUInt32Nat___closed__0(void){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = lean_alloc_closure((void*)(l_UInt32_modn___boxed), 2, 0);
return v___x_554_;
}
}
static lean_object* _init_l_instHModUInt32Nat(void){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = lean_obj_once(&l_instHModUInt32Nat___closed__0, &l_instHModUInt32Nat___closed__0_once, _init_l_instHModUInt32Nat___closed__0);
return v___x_555_;
}
}
static lean_object* _init_l_instDivUInt32___closed__0(void){
_start:
{
lean_object* v___x_556_; 
v___x_556_ = lean_alloc_closure((void*)(l_UInt32_div___boxed), 2, 0);
return v___x_556_;
}
}
static lean_object* _init_l_instDivUInt32(void){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = lean_obj_once(&l_instDivUInt32___closed__0, &l_instDivUInt32___closed__0_once, _init_l_instDivUInt32___closed__0);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_UInt32_complement___boxed(lean_object* v_a_559_){
_start:
{
uint32_t v_a_boxed_560_; uint32_t v_res_561_; lean_object* v_r_562_; 
v_a_boxed_560_ = lean_unbox_uint32(v_a_559_);
lean_dec(v_a_559_);
v_res_561_ = lean_uint32_complement(v_a_boxed_560_);
v_r_562_ = lean_box_uint32(v_res_561_);
return v_r_562_;
}
}
LEAN_EXPORT lean_object* l_UInt32_neg___boxed(lean_object* v_a_564_){
_start:
{
uint32_t v_a_boxed_565_; uint32_t v_res_566_; lean_object* v_r_567_; 
v_a_boxed_565_ = lean_unbox_uint32(v_a_564_);
lean_dec(v_a_564_);
v_res_566_ = lean_uint32_neg(v_a_boxed_565_);
v_r_567_ = lean_box_uint32(v_res_566_);
return v_r_567_;
}
}
static lean_object* _init_l_instComplementUInt32___closed__0(void){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = lean_alloc_closure((void*)(l_UInt32_complement___boxed), 1, 0);
return v___x_568_;
}
}
static lean_object* _init_l_instComplementUInt32(void){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = lean_obj_once(&l_instComplementUInt32___closed__0, &l_instComplementUInt32___closed__0_once, _init_l_instComplementUInt32___closed__0);
return v___x_569_;
}
}
static lean_object* _init_l_instNegUInt32___closed__0(void){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = lean_alloc_closure((void*)(l_UInt32_neg___boxed), 1, 0);
return v___x_570_;
}
}
static lean_object* _init_l_instNegUInt32(void){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = lean_obj_once(&l_instNegUInt32___closed__0, &l_instNegUInt32___closed__0_once, _init_l_instNegUInt32___closed__0);
return v___x_571_;
}
}
static lean_object* _init_l_instAndOpUInt32___closed__0(void){
_start:
{
lean_object* v___x_572_; 
v___x_572_ = lean_alloc_closure((void*)(l_UInt32_land___boxed), 2, 0);
return v___x_572_;
}
}
static lean_object* _init_l_instAndOpUInt32(void){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = lean_obj_once(&l_instAndOpUInt32___closed__0, &l_instAndOpUInt32___closed__0_once, _init_l_instAndOpUInt32___closed__0);
return v___x_573_;
}
}
static lean_object* _init_l_instOrOpUInt32___closed__0(void){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = lean_alloc_closure((void*)(l_UInt32_lor___boxed), 2, 0);
return v___x_574_;
}
}
static lean_object* _init_l_instOrOpUInt32(void){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = lean_obj_once(&l_instOrOpUInt32___closed__0, &l_instOrOpUInt32___closed__0_once, _init_l_instOrOpUInt32___closed__0);
return v___x_575_;
}
}
static lean_object* _init_l_instXorOpUInt32___closed__0(void){
_start:
{
lean_object* v___x_576_; 
v___x_576_ = lean_alloc_closure((void*)(l_UInt32_xor___boxed), 2, 0);
return v___x_576_;
}
}
static lean_object* _init_l_instXorOpUInt32(void){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = lean_obj_once(&l_instXorOpUInt32___closed__0, &l_instXorOpUInt32___closed__0_once, _init_l_instXorOpUInt32___closed__0);
return v___x_577_;
}
}
static lean_object* _init_l_instShiftLeftUInt32___closed__0(void){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = lean_alloc_closure((void*)(l_UInt32_shiftLeft___boxed), 2, 0);
return v___x_578_;
}
}
static lean_object* _init_l_instShiftLeftUInt32(void){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = lean_obj_once(&l_instShiftLeftUInt32___closed__0, &l_instShiftLeftUInt32___closed__0_once, _init_l_instShiftLeftUInt32___closed__0);
return v___x_579_;
}
}
static lean_object* _init_l_instShiftRightUInt32___closed__0(void){
_start:
{
lean_object* v___x_580_; 
v___x_580_ = lean_alloc_closure((void*)(l_UInt32_shiftRight___boxed), 2, 0);
return v___x_580_;
}
}
static lean_object* _init_l_instShiftRightUInt32(void){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = lean_obj_once(&l_instShiftRightUInt32___closed__0, &l_instShiftRightUInt32___closed__0_once, _init_l_instShiftRightUInt32___closed__0);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Bool_toUInt32___boxed(lean_object* v_b_583_){
_start:
{
uint8_t v_b_boxed_584_; uint32_t v_res_585_; lean_object* v_r_586_; 
v_b_boxed_584_ = lean_unbox(v_b_583_);
v_res_585_ = lean_bool_to_uint32(v_b_boxed_584_);
v_r_586_ = lean_box_uint32(v_res_585_);
return v_r_586_;
}
}
LEAN_EXPORT uint64_t l_UInt64_ofFin(lean_object* v_a_587_){
_start:
{
uint64_t v___x_588_; 
v___x_588_ = lean_uint64_of_nat_mk(v_a_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_UInt64_ofFin___boxed(lean_object* v_a_589_){
_start:
{
uint64_t v_res_590_; lean_object* v_r_591_; 
v_res_590_ = l_UInt64_ofFin(v_a_589_);
v_r_591_ = lean_box_uint64(v_res_590_);
return v_r_591_;
}
}
static lean_object* _init_l_UInt64_ofInt___closed__0(void){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_592_ = lean_unsigned_to_nat(64u);
v___x_593_ = lean_obj_once(&l_UInt8_ofInt___closed__0, &l_UInt8_ofInt___closed__0_once, _init_l_UInt8_ofInt___closed__0);
v___x_594_ = l_Int_pow(v___x_593_, v___x_592_);
return v___x_594_;
}
}
LEAN_EXPORT uint64_t l_UInt64_ofInt(lean_object* v_x_595_){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; uint64_t v___x_599_; 
v___x_596_ = lean_obj_once(&l_UInt64_ofInt___closed__0, &l_UInt64_ofInt___closed__0_once, _init_l_UInt64_ofInt___closed__0);
v___x_597_ = lean_int_emod(v_x_595_, v___x_596_);
v___x_598_ = l_Int_toNat(v___x_597_);
lean_dec(v___x_597_);
v___x_599_ = lean_uint64_of_nat(v___x_598_);
lean_dec(v___x_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_UInt64_ofInt___boxed(lean_object* v_x_600_){
_start:
{
uint64_t v_res_601_; lean_object* v_r_602_; 
v_res_601_ = l_UInt64_ofInt(v_x_600_);
lean_dec(v_x_600_);
v_r_602_ = lean_box_uint64(v_res_601_);
return v_r_602_;
}
}
LEAN_EXPORT lean_object* l_UInt64_add___boxed(lean_object* v_a_605_, lean_object* v_b_606_){
_start:
{
uint64_t v_a_boxed_607_; uint64_t v_b_boxed_608_; uint64_t v_res_609_; lean_object* v_r_610_; 
v_a_boxed_607_ = lean_unbox_uint64(v_a_605_);
lean_dec_ref(v_a_605_);
v_b_boxed_608_ = lean_unbox_uint64(v_b_606_);
lean_dec_ref(v_b_606_);
v_res_609_ = lean_uint64_add(v_a_boxed_607_, v_b_boxed_608_);
v_r_610_ = lean_box_uint64(v_res_609_);
return v_r_610_;
}
}
LEAN_EXPORT lean_object* l_UInt64_sub___boxed(lean_object* v_a_613_, lean_object* v_b_614_){
_start:
{
uint64_t v_a_boxed_615_; uint64_t v_b_boxed_616_; uint64_t v_res_617_; lean_object* v_r_618_; 
v_a_boxed_615_ = lean_unbox_uint64(v_a_613_);
lean_dec_ref(v_a_613_);
v_b_boxed_616_ = lean_unbox_uint64(v_b_614_);
lean_dec_ref(v_b_614_);
v_res_617_ = lean_uint64_sub(v_a_boxed_615_, v_b_boxed_616_);
v_r_618_ = lean_box_uint64(v_res_617_);
return v_r_618_;
}
}
LEAN_EXPORT lean_object* l_UInt64_mul___boxed(lean_object* v_a_621_, lean_object* v_b_622_){
_start:
{
uint64_t v_a_boxed_623_; uint64_t v_b_boxed_624_; uint64_t v_res_625_; lean_object* v_r_626_; 
v_a_boxed_623_ = lean_unbox_uint64(v_a_621_);
lean_dec_ref(v_a_621_);
v_b_boxed_624_ = lean_unbox_uint64(v_b_622_);
lean_dec_ref(v_b_622_);
v_res_625_ = lean_uint64_mul(v_a_boxed_623_, v_b_boxed_624_);
v_r_626_ = lean_box_uint64(v_res_625_);
return v_r_626_;
}
}
LEAN_EXPORT lean_object* l_UInt64_div___boxed(lean_object* v_a_629_, lean_object* v_b_630_){
_start:
{
uint64_t v_a_boxed_631_; uint64_t v_b_boxed_632_; uint64_t v_res_633_; lean_object* v_r_634_; 
v_a_boxed_631_ = lean_unbox_uint64(v_a_629_);
lean_dec_ref(v_a_629_);
v_b_boxed_632_ = lean_unbox_uint64(v_b_630_);
lean_dec_ref(v_b_630_);
v_res_633_ = lean_uint64_div(v_a_boxed_631_, v_b_boxed_632_);
v_r_634_ = lean_box_uint64(v_res_633_);
return v_r_634_;
}
}
LEAN_EXPORT uint64_t l_UInt64_pow(uint64_t v_x_635_, lean_object* v_n_636_){
_start:
{
lean_object* v_zero_637_; uint8_t v_isZero_638_; 
v_zero_637_ = lean_unsigned_to_nat(0u);
v_isZero_638_ = lean_nat_dec_eq(v_n_636_, v_zero_637_);
if (v_isZero_638_ == 1)
{
uint64_t v___x_639_; 
v___x_639_ = 1ULL;
return v___x_639_;
}
else
{
lean_object* v_one_640_; lean_object* v_n_641_; uint64_t v___x_642_; uint64_t v___x_643_; 
v_one_640_ = lean_unsigned_to_nat(1u);
v_n_641_ = lean_nat_sub(v_n_636_, v_one_640_);
v___x_642_ = l_UInt64_pow(v_x_635_, v_n_641_);
lean_dec(v_n_641_);
v___x_643_ = lean_uint64_mul(v___x_642_, v_x_635_);
return v___x_643_;
}
}
}
LEAN_EXPORT lean_object* l_UInt64_pow___boxed(lean_object* v_x_644_, lean_object* v_n_645_){
_start:
{
uint64_t v_x_boxed_646_; uint64_t v_res_647_; lean_object* v_r_648_; 
v_x_boxed_646_ = lean_unbox_uint64(v_x_644_);
lean_dec_ref(v_x_644_);
v_res_647_ = l_UInt64_pow(v_x_boxed_646_, v_n_645_);
lean_dec(v_n_645_);
v_r_648_ = lean_box_uint64(v_res_647_);
return v_r_648_;
}
}
LEAN_EXPORT lean_object* l_UInt64_mod___boxed(lean_object* v_a_651_, lean_object* v_b_652_){
_start:
{
uint64_t v_a_boxed_653_; uint64_t v_b_boxed_654_; uint64_t v_res_655_; lean_object* v_r_656_; 
v_a_boxed_653_ = lean_unbox_uint64(v_a_651_);
lean_dec_ref(v_a_651_);
v_b_boxed_654_ = lean_unbox_uint64(v_b_652_);
lean_dec_ref(v_b_652_);
v_res_655_ = lean_uint64_mod(v_a_boxed_653_, v_b_boxed_654_);
v_r_656_ = lean_box_uint64(v_res_655_);
return v_r_656_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt64_modn_spec__0(lean_object* v_a_657_){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_658_ = lean_unsigned_to_nat(64u);
v___x_659_ = l_BitVec_ofNat(v___x_658_, v_a_657_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00UInt64_modn_spec__0___boxed(lean_object* v_a_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l_Nat_cast___at___00UInt64_modn_spec__0(v_a_660_);
lean_dec(v_a_660_);
return v_res_661_;
}
}
LEAN_EXPORT uint64_t l_UInt64_modn(uint64_t v_a_662_, lean_object* v_n_663_){
_start:
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; uint64_t v___x_667_; 
v___x_664_ = lean_uint64_to_nat(v_a_662_);
v___x_665_ = lean_nat_mod(v___x_664_, v_n_663_);
lean_dec(v___x_664_);
v___x_666_ = l_Nat_cast___at___00UInt64_modn_spec__0(v___x_665_);
lean_dec(v___x_665_);
v___x_667_ = lean_uint64_of_nat_mk(v___x_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_UInt64_modn___boxed(lean_object* v_a_668_, lean_object* v_n_669_){
_start:
{
uint64_t v_a_boxed_670_; uint64_t v_res_671_; lean_object* v_r_672_; 
v_a_boxed_670_ = lean_unbox_uint64(v_a_668_);
lean_dec_ref(v_a_668_);
v_res_671_ = l_UInt64_modn(v_a_boxed_670_, v_n_669_);
lean_dec(v_n_669_);
v_r_672_ = lean_box_uint64(v_res_671_);
return v_r_672_;
}
}
LEAN_EXPORT lean_object* l_UInt64_land___boxed(lean_object* v_a_675_, lean_object* v_b_676_){
_start:
{
uint64_t v_a_boxed_677_; uint64_t v_b_boxed_678_; uint64_t v_res_679_; lean_object* v_r_680_; 
v_a_boxed_677_ = lean_unbox_uint64(v_a_675_);
lean_dec_ref(v_a_675_);
v_b_boxed_678_ = lean_unbox_uint64(v_b_676_);
lean_dec_ref(v_b_676_);
v_res_679_ = lean_uint64_land(v_a_boxed_677_, v_b_boxed_678_);
v_r_680_ = lean_box_uint64(v_res_679_);
return v_r_680_;
}
}
LEAN_EXPORT lean_object* l_UInt64_lor___boxed(lean_object* v_a_683_, lean_object* v_b_684_){
_start:
{
uint64_t v_a_boxed_685_; uint64_t v_b_boxed_686_; uint64_t v_res_687_; lean_object* v_r_688_; 
v_a_boxed_685_ = lean_unbox_uint64(v_a_683_);
lean_dec_ref(v_a_683_);
v_b_boxed_686_ = lean_unbox_uint64(v_b_684_);
lean_dec_ref(v_b_684_);
v_res_687_ = lean_uint64_lor(v_a_boxed_685_, v_b_boxed_686_);
v_r_688_ = lean_box_uint64(v_res_687_);
return v_r_688_;
}
}
LEAN_EXPORT lean_object* l_UInt64_xor___boxed(lean_object* v_a_691_, lean_object* v_b_692_){
_start:
{
uint64_t v_a_boxed_693_; uint64_t v_b_boxed_694_; uint64_t v_res_695_; lean_object* v_r_696_; 
v_a_boxed_693_ = lean_unbox_uint64(v_a_691_);
lean_dec_ref(v_a_691_);
v_b_boxed_694_ = lean_unbox_uint64(v_b_692_);
lean_dec_ref(v_b_692_);
v_res_695_ = lean_uint64_xor(v_a_boxed_693_, v_b_boxed_694_);
v_r_696_ = lean_box_uint64(v_res_695_);
return v_r_696_;
}
}
LEAN_EXPORT lean_object* l_UInt64_shiftLeft___boxed(lean_object* v_a_699_, lean_object* v_b_700_){
_start:
{
uint64_t v_a_boxed_701_; uint64_t v_b_boxed_702_; uint64_t v_res_703_; lean_object* v_r_704_; 
v_a_boxed_701_ = lean_unbox_uint64(v_a_699_);
lean_dec_ref(v_a_699_);
v_b_boxed_702_ = lean_unbox_uint64(v_b_700_);
lean_dec_ref(v_b_700_);
v_res_703_ = lean_uint64_shift_left(v_a_boxed_701_, v_b_boxed_702_);
v_r_704_ = lean_box_uint64(v_res_703_);
return v_r_704_;
}
}
LEAN_EXPORT lean_object* l_UInt64_shiftRight___boxed(lean_object* v_a_707_, lean_object* v_b_708_){
_start:
{
uint64_t v_a_boxed_709_; uint64_t v_b_boxed_710_; uint64_t v_res_711_; lean_object* v_r_712_; 
v_a_boxed_709_ = lean_unbox_uint64(v_a_707_);
lean_dec_ref(v_a_707_);
v_b_boxed_710_ = lean_unbox_uint64(v_b_708_);
lean_dec_ref(v_b_708_);
v_res_711_ = lean_uint64_shift_right(v_a_boxed_709_, v_b_boxed_710_);
v_r_712_ = lean_box_uint64(v_res_711_);
return v_r_712_;
}
}
static lean_object* _init_l_instAddUInt64___closed__0(void){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = lean_alloc_closure((void*)(l_UInt64_add___boxed), 2, 0);
return v___x_713_;
}
}
static lean_object* _init_l_instAddUInt64(void){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = lean_obj_once(&l_instAddUInt64___closed__0, &l_instAddUInt64___closed__0_once, _init_l_instAddUInt64___closed__0);
return v___x_714_;
}
}
static lean_object* _init_l_instSubUInt64___closed__0(void){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = lean_alloc_closure((void*)(l_UInt64_sub___boxed), 2, 0);
return v___x_715_;
}
}
static lean_object* _init_l_instSubUInt64(void){
_start:
{
lean_object* v___x_716_; 
v___x_716_ = lean_obj_once(&l_instSubUInt64___closed__0, &l_instSubUInt64___closed__0_once, _init_l_instSubUInt64___closed__0);
return v___x_716_;
}
}
static lean_object* _init_l_instMulUInt64___closed__0(void){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = lean_alloc_closure((void*)(l_UInt64_mul___boxed), 2, 0);
return v___x_717_;
}
}
static lean_object* _init_l_instMulUInt64(void){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = lean_obj_once(&l_instMulUInt64___closed__0, &l_instMulUInt64___closed__0_once, _init_l_instMulUInt64___closed__0);
return v___x_718_;
}
}
static lean_object* _init_l_instPowUInt64Nat___closed__0(void){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = lean_alloc_closure((void*)(l_UInt64_pow___boxed), 2, 0);
return v___x_719_;
}
}
static lean_object* _init_l_instPowUInt64Nat(void){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = lean_obj_once(&l_instPowUInt64Nat___closed__0, &l_instPowUInt64Nat___closed__0_once, _init_l_instPowUInt64Nat___closed__0);
return v___x_720_;
}
}
static lean_object* _init_l_instModUInt64___closed__0(void){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = lean_alloc_closure((void*)(l_UInt64_mod___boxed), 2, 0);
return v___x_721_;
}
}
static lean_object* _init_l_instModUInt64(void){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = lean_obj_once(&l_instModUInt64___closed__0, &l_instModUInt64___closed__0_once, _init_l_instModUInt64___closed__0);
return v___x_722_;
}
}
static lean_object* _init_l_instHModUInt64Nat___closed__0(void){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = lean_alloc_closure((void*)(l_UInt64_modn___boxed), 2, 0);
return v___x_723_;
}
}
static lean_object* _init_l_instHModUInt64Nat(void){
_start:
{
lean_object* v___x_724_; 
v___x_724_ = lean_obj_once(&l_instHModUInt64Nat___closed__0, &l_instHModUInt64Nat___closed__0_once, _init_l_instHModUInt64Nat___closed__0);
return v___x_724_;
}
}
static lean_object* _init_l_instDivUInt64___closed__0(void){
_start:
{
lean_object* v___x_725_; 
v___x_725_ = lean_alloc_closure((void*)(l_UInt64_div___boxed), 2, 0);
return v___x_725_;
}
}
static lean_object* _init_l_instDivUInt64(void){
_start:
{
lean_object* v___x_726_; 
v___x_726_ = lean_obj_once(&l_instDivUInt64___closed__0, &l_instDivUInt64___closed__0_once, _init_l_instDivUInt64___closed__0);
return v___x_726_;
}
}
static lean_object* _init_l_instLTUInt64(void){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = lean_box(0);
return v___x_727_;
}
}
static lean_object* _init_l_instLEUInt64(void){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = lean_box(0);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_UInt64_complement___boxed(lean_object* v_a_730_){
_start:
{
uint64_t v_a_boxed_731_; uint64_t v_res_732_; lean_object* v_r_733_; 
v_a_boxed_731_ = lean_unbox_uint64(v_a_730_);
lean_dec_ref(v_a_730_);
v_res_732_ = lean_uint64_complement(v_a_boxed_731_);
v_r_733_ = lean_box_uint64(v_res_732_);
return v_r_733_;
}
}
LEAN_EXPORT lean_object* l_UInt64_neg___boxed(lean_object* v_a_735_){
_start:
{
uint64_t v_a_boxed_736_; uint64_t v_res_737_; lean_object* v_r_738_; 
v_a_boxed_736_ = lean_unbox_uint64(v_a_735_);
lean_dec_ref(v_a_735_);
v_res_737_ = lean_uint64_neg(v_a_boxed_736_);
v_r_738_ = lean_box_uint64(v_res_737_);
return v_r_738_;
}
}
static lean_object* _init_l_instComplementUInt64___closed__0(void){
_start:
{
lean_object* v___x_739_; 
v___x_739_ = lean_alloc_closure((void*)(l_UInt64_complement___boxed), 1, 0);
return v___x_739_;
}
}
static lean_object* _init_l_instComplementUInt64(void){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = lean_obj_once(&l_instComplementUInt64___closed__0, &l_instComplementUInt64___closed__0_once, _init_l_instComplementUInt64___closed__0);
return v___x_740_;
}
}
static lean_object* _init_l_instNegUInt64___closed__0(void){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = lean_alloc_closure((void*)(l_UInt64_neg___boxed), 1, 0);
return v___x_741_;
}
}
static lean_object* _init_l_instNegUInt64(void){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = lean_obj_once(&l_instNegUInt64___closed__0, &l_instNegUInt64___closed__0_once, _init_l_instNegUInt64___closed__0);
return v___x_742_;
}
}
static lean_object* _init_l_instAndOpUInt64___closed__0(void){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = lean_alloc_closure((void*)(l_UInt64_land___boxed), 2, 0);
return v___x_743_;
}
}
static lean_object* _init_l_instAndOpUInt64(void){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = lean_obj_once(&l_instAndOpUInt64___closed__0, &l_instAndOpUInt64___closed__0_once, _init_l_instAndOpUInt64___closed__0);
return v___x_744_;
}
}
static lean_object* _init_l_instOrOpUInt64___closed__0(void){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = lean_alloc_closure((void*)(l_UInt64_lor___boxed), 2, 0);
return v___x_745_;
}
}
static lean_object* _init_l_instOrOpUInt64(void){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = lean_obj_once(&l_instOrOpUInt64___closed__0, &l_instOrOpUInt64___closed__0_once, _init_l_instOrOpUInt64___closed__0);
return v___x_746_;
}
}
static lean_object* _init_l_instXorOpUInt64___closed__0(void){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = lean_alloc_closure((void*)(l_UInt64_xor___boxed), 2, 0);
return v___x_747_;
}
}
static lean_object* _init_l_instXorOpUInt64(void){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = lean_obj_once(&l_instXorOpUInt64___closed__0, &l_instXorOpUInt64___closed__0_once, _init_l_instXorOpUInt64___closed__0);
return v___x_748_;
}
}
static lean_object* _init_l_instShiftLeftUInt64___closed__0(void){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = lean_alloc_closure((void*)(l_UInt64_shiftLeft___boxed), 2, 0);
return v___x_749_;
}
}
static lean_object* _init_l_instShiftLeftUInt64(void){
_start:
{
lean_object* v___x_750_; 
v___x_750_ = lean_obj_once(&l_instShiftLeftUInt64___closed__0, &l_instShiftLeftUInt64___closed__0_once, _init_l_instShiftLeftUInt64___closed__0);
return v___x_750_;
}
}
static lean_object* _init_l_instShiftRightUInt64___closed__0(void){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = lean_alloc_closure((void*)(l_UInt64_shiftRight___boxed), 2, 0);
return v___x_751_;
}
}
static lean_object* _init_l_instShiftRightUInt64(void){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = lean_obj_once(&l_instShiftRightUInt64___closed__0, &l_instShiftRightUInt64___closed__0_once, _init_l_instShiftRightUInt64___closed__0);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Bool_toUInt64___boxed(lean_object* v_b_754_){
_start:
{
uint8_t v_b_boxed_755_; uint64_t v_res_756_; lean_object* v_r_757_; 
v_b_boxed_755_ = lean_unbox(v_b_754_);
v_res_756_ = lean_bool_to_uint64(v_b_boxed_755_);
v_r_757_ = lean_box_uint64(v_res_756_);
return v_r_757_;
}
}
LEAN_EXPORT uint8_t l_UInt64_decLt___aux__1(uint64_t v_a_758_, uint64_t v_b_759_){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; uint8_t v___x_762_; 
v___x_760_ = lean_uint64_to_nat(v_a_758_);
v___x_761_ = lean_uint64_to_nat(v_b_759_);
v___x_762_ = lean_nat_dec_lt(v___x_760_, v___x_761_);
lean_dec(v___x_761_);
lean_dec(v___x_760_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_UInt64_decLt___aux__1___boxed(lean_object* v_a_763_, lean_object* v_b_764_){
_start:
{
uint64_t v_a_boxed_765_; uint64_t v_b_boxed_766_; uint8_t v_res_767_; lean_object* v_r_768_; 
v_a_boxed_765_ = lean_unbox_uint64(v_a_763_);
lean_dec_ref(v_a_763_);
v_b_boxed_766_ = lean_unbox_uint64(v_b_764_);
lean_dec_ref(v_b_764_);
v_res_767_ = l_UInt64_decLt___aux__1(v_a_boxed_765_, v_b_boxed_766_);
v_r_768_ = lean_box(v_res_767_);
return v_r_768_;
}
}
LEAN_EXPORT lean_object* l_UInt64_decLt___boxed(lean_object* v_a_771_, lean_object* v_b_772_){
_start:
{
uint64_t v_a_boxed_773_; uint64_t v_b_boxed_774_; uint8_t v_res_775_; lean_object* v_r_776_; 
v_a_boxed_773_ = lean_unbox_uint64(v_a_771_);
lean_dec_ref(v_a_771_);
v_b_boxed_774_ = lean_unbox_uint64(v_b_772_);
lean_dec_ref(v_b_772_);
v_res_775_ = lean_uint64_dec_lt(v_a_boxed_773_, v_b_boxed_774_);
v_r_776_ = lean_box(v_res_775_);
return v_r_776_;
}
}
LEAN_EXPORT uint8_t l_UInt64_decLe___aux__1(uint64_t v_a_777_, uint64_t v_b_778_){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; uint8_t v___x_781_; 
v___x_779_ = lean_uint64_to_nat(v_a_777_);
v___x_780_ = lean_uint64_to_nat(v_b_778_);
v___x_781_ = lean_nat_dec_le(v___x_779_, v___x_780_);
lean_dec(v___x_780_);
lean_dec(v___x_779_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_UInt64_decLe___aux__1___boxed(lean_object* v_a_782_, lean_object* v_b_783_){
_start:
{
uint64_t v_a_boxed_784_; uint64_t v_b_boxed_785_; uint8_t v_res_786_; lean_object* v_r_787_; 
v_a_boxed_784_ = lean_unbox_uint64(v_a_782_);
lean_dec_ref(v_a_782_);
v_b_boxed_785_ = lean_unbox_uint64(v_b_783_);
lean_dec_ref(v_b_783_);
v_res_786_ = l_UInt64_decLe___aux__1(v_a_boxed_784_, v_b_boxed_785_);
v_r_787_ = lean_box(v_res_786_);
return v_r_787_;
}
}
LEAN_EXPORT lean_object* l_UInt64_decLe___boxed(lean_object* v_a_790_, lean_object* v_b_791_){
_start:
{
uint64_t v_a_boxed_792_; uint64_t v_b_boxed_793_; uint8_t v_res_794_; lean_object* v_r_795_; 
v_a_boxed_792_ = lean_unbox_uint64(v_a_790_);
lean_dec_ref(v_a_790_);
v_b_boxed_793_ = lean_unbox_uint64(v_b_791_);
lean_dec_ref(v_b_791_);
v_res_794_ = lean_uint64_dec_le(v_a_boxed_792_, v_b_boxed_793_);
v_r_795_ = lean_box(v_res_794_);
return v_r_795_;
}
}
LEAN_EXPORT uint64_t l_instMaxUInt64___lam__0(uint64_t v_x_796_, uint64_t v_y_797_){
_start:
{
uint8_t v___x_798_; 
v___x_798_ = lean_uint64_dec_le(v_x_796_, v_y_797_);
if (v___x_798_ == 0)
{
return v_x_796_;
}
else
{
return v_y_797_;
}
}
}
LEAN_EXPORT lean_object* l_instMaxUInt64___lam__0___boxed(lean_object* v_x_799_, lean_object* v_y_800_){
_start:
{
uint64_t v_x_boxed_801_; uint64_t v_y_boxed_802_; uint64_t v_res_803_; lean_object* v_r_804_; 
v_x_boxed_801_ = lean_unbox_uint64(v_x_799_);
lean_dec_ref(v_x_799_);
v_y_boxed_802_ = lean_unbox_uint64(v_y_800_);
lean_dec_ref(v_y_800_);
v_res_803_ = l_instMaxUInt64___lam__0(v_x_boxed_801_, v_y_boxed_802_);
v_r_804_ = lean_box_uint64(v_res_803_);
return v_r_804_;
}
}
static lean_object* _init_l_instMaxUInt64___closed__0(void){
_start:
{
lean_object* v___f_805_; 
v___f_805_ = lean_alloc_closure((void*)(l_instMaxUInt64___lam__0___boxed), 2, 0);
return v___f_805_;
}
}
static lean_object* _init_l_instMaxUInt64(void){
_start:
{
lean_object* v___f_806_; 
v___f_806_ = lean_obj_once(&l_instMaxUInt64___closed__0, &l_instMaxUInt64___closed__0_once, _init_l_instMaxUInt64___closed__0);
return v___f_806_;
}
}
LEAN_EXPORT uint64_t l_instMinUInt64___lam__0(uint64_t v_x_807_, uint64_t v_y_808_){
_start:
{
uint8_t v___x_809_; 
v___x_809_ = lean_uint64_dec_le(v_x_807_, v_y_808_);
if (v___x_809_ == 0)
{
return v_y_808_;
}
else
{
return v_x_807_;
}
}
}
LEAN_EXPORT lean_object* l_instMinUInt64___lam__0___boxed(lean_object* v_x_810_, lean_object* v_y_811_){
_start:
{
uint64_t v_x_boxed_812_; uint64_t v_y_boxed_813_; uint64_t v_res_814_; lean_object* v_r_815_; 
v_x_boxed_812_ = lean_unbox_uint64(v_x_810_);
lean_dec_ref(v_x_810_);
v_y_boxed_813_ = lean_unbox_uint64(v_y_811_);
lean_dec_ref(v_y_811_);
v_res_814_ = l_instMinUInt64___lam__0(v_x_boxed_812_, v_y_boxed_813_);
v_r_815_ = lean_box_uint64(v_res_814_);
return v_r_815_;
}
}
static lean_object* _init_l_instMinUInt64___closed__0(void){
_start:
{
lean_object* v___f_816_; 
v___f_816_ = lean_alloc_closure((void*)(l_instMinUInt64___lam__0___boxed), 2, 0);
return v___f_816_;
}
}
static lean_object* _init_l_instMinUInt64(void){
_start:
{
lean_object* v___f_817_; 
v___f_817_ = lean_obj_once(&l_instMinUInt64___closed__0, &l_instMinUInt64___closed__0_once, _init_l_instMinUInt64___closed__0);
return v___f_817_;
}
}
LEAN_EXPORT size_t l_USize_ofFin(lean_object* v_a_818_){
_start:
{
size_t v___x_819_; 
v___x_819_ = lean_usize_of_nat_mk(v_a_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_USize_ofFin___boxed(lean_object* v_a_820_){
_start:
{
size_t v_res_821_; lean_object* v_r_822_; 
v_res_821_ = l_USize_ofFin(v_a_820_);
v_r_822_ = lean_box_usize(v_res_821_);
return v_r_822_;
}
}
static lean_object* _init_l_USize_ofInt___closed__0(void){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_823_ = l_System_Platform_numBits;
v___x_824_ = lean_obj_once(&l_UInt8_ofInt___closed__0, &l_UInt8_ofInt___closed__0_once, _init_l_UInt8_ofInt___closed__0);
v___x_825_ = l_Int_pow(v___x_824_, v___x_823_);
return v___x_825_;
}
}
LEAN_EXPORT size_t l_USize_ofInt(lean_object* v_x_826_){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; size_t v___x_830_; 
v___x_827_ = lean_obj_once(&l_USize_ofInt___closed__0, &l_USize_ofInt___closed__0_once, _init_l_USize_ofInt___closed__0);
v___x_828_ = lean_int_emod(v_x_826_, v___x_827_);
v___x_829_ = l_Int_toNat(v___x_828_);
lean_dec(v___x_828_);
v___x_830_ = lean_usize_of_nat(v___x_829_);
lean_dec(v___x_829_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_USize_ofInt___boxed(lean_object* v_x_831_){
_start:
{
size_t v_res_832_; lean_object* v_r_833_; 
v_res_832_ = l_USize_ofInt(v_x_831_);
lean_dec(v_x_831_);
v_r_833_ = lean_box_usize(v_res_832_);
return v_r_833_;
}
}
LEAN_EXPORT lean_object* l_USize_mul___boxed(lean_object* v_a_836_, lean_object* v_b_837_){
_start:
{
size_t v_a_boxed_838_; size_t v_b_boxed_839_; size_t v_res_840_; lean_object* v_r_841_; 
v_a_boxed_838_ = lean_unbox_usize(v_a_836_);
lean_dec(v_a_836_);
v_b_boxed_839_ = lean_unbox_usize(v_b_837_);
lean_dec(v_b_837_);
v_res_840_ = lean_usize_mul(v_a_boxed_838_, v_b_boxed_839_);
v_r_841_ = lean_box_usize(v_res_840_);
return v_r_841_;
}
}
LEAN_EXPORT lean_object* l_USize_div___boxed(lean_object* v_a_844_, lean_object* v_b_845_){
_start:
{
size_t v_a_boxed_846_; size_t v_b_boxed_847_; size_t v_res_848_; lean_object* v_r_849_; 
v_a_boxed_846_ = lean_unbox_usize(v_a_844_);
lean_dec(v_a_844_);
v_b_boxed_847_ = lean_unbox_usize(v_b_845_);
lean_dec(v_b_845_);
v_res_848_ = lean_usize_div(v_a_boxed_846_, v_b_boxed_847_);
v_r_849_ = lean_box_usize(v_res_848_);
return v_r_849_;
}
}
LEAN_EXPORT size_t l_USize_pow(size_t v_x_850_, lean_object* v_n_851_){
_start:
{
lean_object* v_zero_852_; uint8_t v_isZero_853_; 
v_zero_852_ = lean_unsigned_to_nat(0u);
v_isZero_853_ = lean_nat_dec_eq(v_n_851_, v_zero_852_);
if (v_isZero_853_ == 1)
{
size_t v___x_854_; 
v___x_854_ = ((size_t)1ULL);
return v___x_854_;
}
else
{
lean_object* v_one_855_; lean_object* v_n_856_; size_t v___x_857_; size_t v___x_858_; 
v_one_855_ = lean_unsigned_to_nat(1u);
v_n_856_ = lean_nat_sub(v_n_851_, v_one_855_);
v___x_857_ = l_USize_pow(v_x_850_, v_n_856_);
lean_dec(v_n_856_);
v___x_858_ = lean_usize_mul(v___x_857_, v_x_850_);
return v___x_858_;
}
}
}
LEAN_EXPORT lean_object* l_USize_pow___boxed(lean_object* v_x_859_, lean_object* v_n_860_){
_start:
{
size_t v_x_boxed_861_; size_t v_res_862_; lean_object* v_r_863_; 
v_x_boxed_861_ = lean_unbox_usize(v_x_859_);
lean_dec(v_x_859_);
v_res_862_ = l_USize_pow(v_x_boxed_861_, v_n_860_);
lean_dec(v_n_860_);
v_r_863_ = lean_box_usize(v_res_862_);
return v_r_863_;
}
}
LEAN_EXPORT lean_object* l_USize_mod___boxed(lean_object* v_a_866_, lean_object* v_b_867_){
_start:
{
size_t v_a_boxed_868_; size_t v_b_boxed_869_; size_t v_res_870_; lean_object* v_r_871_; 
v_a_boxed_868_ = lean_unbox_usize(v_a_866_);
lean_dec(v_a_866_);
v_b_boxed_869_ = lean_unbox_usize(v_b_867_);
lean_dec(v_b_867_);
v_res_870_ = lean_usize_mod(v_a_boxed_868_, v_b_boxed_869_);
v_r_871_ = lean_box_usize(v_res_870_);
return v_r_871_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00USize_modn_spec__0(lean_object* v_a_872_){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_873_ = l_System_Platform_numBits;
v___x_874_ = l_BitVec_ofNat(v___x_873_, v_a_872_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00USize_modn_spec__0___boxed(lean_object* v_a_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Nat_cast___at___00USize_modn_spec__0(v_a_875_);
lean_dec(v_a_875_);
return v_res_876_;
}
}
LEAN_EXPORT size_t l_USize_modn(size_t v_a_877_, lean_object* v_n_878_){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; size_t v___x_882_; 
v___x_879_ = lean_usize_to_nat(v_a_877_);
v___x_880_ = lean_nat_mod(v___x_879_, v_n_878_);
lean_dec(v___x_879_);
v___x_881_ = l_Nat_cast___at___00USize_modn_spec__0(v___x_880_);
lean_dec(v___x_880_);
v___x_882_ = lean_usize_of_nat_mk(v___x_881_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_USize_modn___boxed(lean_object* v_a_883_, lean_object* v_n_884_){
_start:
{
size_t v_a_boxed_885_; size_t v_res_886_; lean_object* v_r_887_; 
v_a_boxed_885_ = lean_unbox_usize(v_a_883_);
lean_dec(v_a_883_);
v_res_886_ = l_USize_modn(v_a_boxed_885_, v_n_884_);
lean_dec(v_n_884_);
v_r_887_ = lean_box_usize(v_res_886_);
return v_r_887_;
}
}
LEAN_EXPORT lean_object* l_USize_land___boxed(lean_object* v_a_890_, lean_object* v_b_891_){
_start:
{
size_t v_a_boxed_892_; size_t v_b_boxed_893_; size_t v_res_894_; lean_object* v_r_895_; 
v_a_boxed_892_ = lean_unbox_usize(v_a_890_);
lean_dec(v_a_890_);
v_b_boxed_893_ = lean_unbox_usize(v_b_891_);
lean_dec(v_b_891_);
v_res_894_ = lean_usize_land(v_a_boxed_892_, v_b_boxed_893_);
v_r_895_ = lean_box_usize(v_res_894_);
return v_r_895_;
}
}
LEAN_EXPORT lean_object* l_USize_lor___boxed(lean_object* v_a_898_, lean_object* v_b_899_){
_start:
{
size_t v_a_boxed_900_; size_t v_b_boxed_901_; size_t v_res_902_; lean_object* v_r_903_; 
v_a_boxed_900_ = lean_unbox_usize(v_a_898_);
lean_dec(v_a_898_);
v_b_boxed_901_ = lean_unbox_usize(v_b_899_);
lean_dec(v_b_899_);
v_res_902_ = lean_usize_lor(v_a_boxed_900_, v_b_boxed_901_);
v_r_903_ = lean_box_usize(v_res_902_);
return v_r_903_;
}
}
LEAN_EXPORT lean_object* l_USize_xor___boxed(lean_object* v_a_906_, lean_object* v_b_907_){
_start:
{
size_t v_a_boxed_908_; size_t v_b_boxed_909_; size_t v_res_910_; lean_object* v_r_911_; 
v_a_boxed_908_ = lean_unbox_usize(v_a_906_);
lean_dec(v_a_906_);
v_b_boxed_909_ = lean_unbox_usize(v_b_907_);
lean_dec(v_b_907_);
v_res_910_ = lean_usize_xor(v_a_boxed_908_, v_b_boxed_909_);
v_r_911_ = lean_box_usize(v_res_910_);
return v_r_911_;
}
}
LEAN_EXPORT lean_object* l_USize_shiftLeft___boxed(lean_object* v_a_914_, lean_object* v_b_915_){
_start:
{
size_t v_a_boxed_916_; size_t v_b_boxed_917_; size_t v_res_918_; lean_object* v_r_919_; 
v_a_boxed_916_ = lean_unbox_usize(v_a_914_);
lean_dec(v_a_914_);
v_b_boxed_917_ = lean_unbox_usize(v_b_915_);
lean_dec(v_b_915_);
v_res_918_ = lean_usize_shift_left(v_a_boxed_916_, v_b_boxed_917_);
v_r_919_ = lean_box_usize(v_res_918_);
return v_r_919_;
}
}
LEAN_EXPORT lean_object* l_USize_shiftRight___boxed(lean_object* v_a_922_, lean_object* v_b_923_){
_start:
{
size_t v_a_boxed_924_; size_t v_b_boxed_925_; size_t v_res_926_; lean_object* v_r_927_; 
v_a_boxed_924_ = lean_unbox_usize(v_a_922_);
lean_dec(v_a_922_);
v_b_boxed_925_ = lean_unbox_usize(v_b_923_);
lean_dec(v_b_923_);
v_res_926_ = lean_usize_shift_right(v_a_boxed_924_, v_b_boxed_925_);
v_r_927_ = lean_box_usize(v_res_926_);
return v_r_927_;
}
}
LEAN_EXPORT lean_object* l_USize_ofNat32___boxed(lean_object* v_n_930_, lean_object* v_h_931_){
_start:
{
size_t v_res_932_; lean_object* v_r_933_; 
v_res_932_ = lean_usize_of_nat(v_n_930_);
lean_dec(v_n_930_);
v_r_933_ = lean_box_usize(v_res_932_);
return v_r_933_;
}
}
LEAN_EXPORT lean_object* l_UInt8_toUSize___boxed(lean_object* v_a_935_){
_start:
{
uint8_t v_a_boxed_936_; size_t v_res_937_; lean_object* v_r_938_; 
v_a_boxed_936_ = lean_unbox(v_a_935_);
v_res_937_ = lean_uint8_to_usize(v_a_boxed_936_);
v_r_938_ = lean_box_usize(v_res_937_);
return v_r_938_;
}
}
LEAN_EXPORT lean_object* l_USize_toUInt8___boxed(lean_object* v_a_940_){
_start:
{
size_t v_a_boxed_941_; uint8_t v_res_942_; lean_object* v_r_943_; 
v_a_boxed_941_ = lean_unbox_usize(v_a_940_);
lean_dec(v_a_940_);
v_res_942_ = lean_usize_to_uint8(v_a_boxed_941_);
v_r_943_ = lean_box(v_res_942_);
return v_r_943_;
}
}
LEAN_EXPORT lean_object* l_UInt16_toUSize___boxed(lean_object* v_a_945_){
_start:
{
uint16_t v_a_boxed_946_; size_t v_res_947_; lean_object* v_r_948_; 
v_a_boxed_946_ = lean_unbox(v_a_945_);
v_res_947_ = lean_uint16_to_usize(v_a_boxed_946_);
v_r_948_ = lean_box_usize(v_res_947_);
return v_r_948_;
}
}
LEAN_EXPORT lean_object* l_USize_toUInt16___boxed(lean_object* v_a_950_){
_start:
{
size_t v_a_boxed_951_; uint16_t v_res_952_; lean_object* v_r_953_; 
v_a_boxed_951_ = lean_unbox_usize(v_a_950_);
lean_dec(v_a_950_);
v_res_952_ = lean_usize_to_uint16(v_a_boxed_951_);
v_r_953_ = lean_box(v_res_952_);
return v_r_953_;
}
}
LEAN_EXPORT lean_object* l_UInt32_toUSize___boxed(lean_object* v_a_955_){
_start:
{
uint32_t v_a_boxed_956_; size_t v_res_957_; lean_object* v_r_958_; 
v_a_boxed_956_ = lean_unbox_uint32(v_a_955_);
lean_dec(v_a_955_);
v_res_957_ = lean_uint32_to_usize(v_a_boxed_956_);
v_r_958_ = lean_box_usize(v_res_957_);
return v_r_958_;
}
}
LEAN_EXPORT lean_object* l_USize_toUInt32___boxed(lean_object* v_a_960_){
_start:
{
size_t v_a_boxed_961_; uint32_t v_res_962_; lean_object* v_r_963_; 
v_a_boxed_961_ = lean_unbox_usize(v_a_960_);
lean_dec(v_a_960_);
v_res_962_ = lean_usize_to_uint32(v_a_boxed_961_);
v_r_963_ = lean_box_uint32(v_res_962_);
return v_r_963_;
}
}
LEAN_EXPORT lean_object* l_UInt64_toUSize___boxed(lean_object* v_a_965_){
_start:
{
uint64_t v_a_boxed_966_; size_t v_res_967_; lean_object* v_r_968_; 
v_a_boxed_966_ = lean_unbox_uint64(v_a_965_);
lean_dec_ref(v_a_965_);
v_res_967_ = lean_uint64_to_usize(v_a_boxed_966_);
v_r_968_ = lean_box_usize(v_res_967_);
return v_r_968_;
}
}
LEAN_EXPORT lean_object* l_USize_toUInt64___boxed(lean_object* v_a_970_){
_start:
{
size_t v_a_boxed_971_; uint64_t v_res_972_; lean_object* v_r_973_; 
v_a_boxed_971_ = lean_unbox_usize(v_a_970_);
lean_dec(v_a_970_);
v_res_972_ = lean_usize_to_uint64(v_a_boxed_971_);
v_r_973_ = lean_box_uint64(v_res_972_);
return v_r_973_;
}
}
static lean_object* _init_l_instMulUSize___closed__0(void){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = lean_alloc_closure((void*)(l_USize_mul___boxed), 2, 0);
return v___x_974_;
}
}
static lean_object* _init_l_instMulUSize(void){
_start:
{
lean_object* v___x_975_; 
v___x_975_ = lean_obj_once(&l_instMulUSize___closed__0, &l_instMulUSize___closed__0_once, _init_l_instMulUSize___closed__0);
return v___x_975_;
}
}
static lean_object* _init_l_instPowUSizeNat___closed__0(void){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = lean_alloc_closure((void*)(l_USize_pow___boxed), 2, 0);
return v___x_976_;
}
}
static lean_object* _init_l_instPowUSizeNat(void){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = lean_obj_once(&l_instPowUSizeNat___closed__0, &l_instPowUSizeNat___closed__0_once, _init_l_instPowUSizeNat___closed__0);
return v___x_977_;
}
}
static lean_object* _init_l_instModUSize___closed__0(void){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = lean_alloc_closure((void*)(l_USize_mod___boxed), 2, 0);
return v___x_978_;
}
}
static lean_object* _init_l_instModUSize(void){
_start:
{
lean_object* v___x_979_; 
v___x_979_ = lean_obj_once(&l_instModUSize___closed__0, &l_instModUSize___closed__0_once, _init_l_instModUSize___closed__0);
return v___x_979_;
}
}
static lean_object* _init_l_instHModUSizeNat___closed__0(void){
_start:
{
lean_object* v___x_980_; 
v___x_980_ = lean_alloc_closure((void*)(l_USize_modn___boxed), 2, 0);
return v___x_980_;
}
}
static lean_object* _init_l_instHModUSizeNat(void){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = lean_obj_once(&l_instHModUSizeNat___closed__0, &l_instHModUSizeNat___closed__0_once, _init_l_instHModUSizeNat___closed__0);
return v___x_981_;
}
}
static lean_object* _init_l_instDivUSize___closed__0(void){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = lean_alloc_closure((void*)(l_USize_div___boxed), 2, 0);
return v___x_982_;
}
}
static lean_object* _init_l_instDivUSize(void){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = lean_obj_once(&l_instDivUSize___closed__0, &l_instDivUSize___closed__0_once, _init_l_instDivUSize___closed__0);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_USize_complement___boxed(lean_object* v_a_985_){
_start:
{
size_t v_a_boxed_986_; size_t v_res_987_; lean_object* v_r_988_; 
v_a_boxed_986_ = lean_unbox_usize(v_a_985_);
lean_dec(v_a_985_);
v_res_987_ = lean_usize_complement(v_a_boxed_986_);
v_r_988_ = lean_box_usize(v_res_987_);
return v_r_988_;
}
}
LEAN_EXPORT lean_object* l_USize_neg___boxed(lean_object* v_a_990_){
_start:
{
size_t v_a_boxed_991_; size_t v_res_992_; lean_object* v_r_993_; 
v_a_boxed_991_ = lean_unbox_usize(v_a_990_);
lean_dec(v_a_990_);
v_res_992_ = lean_usize_neg(v_a_boxed_991_);
v_r_993_ = lean_box_usize(v_res_992_);
return v_r_993_;
}
}
static lean_object* _init_l_instComplementUSize___closed__0(void){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = lean_alloc_closure((void*)(l_USize_complement___boxed), 1, 0);
return v___x_994_;
}
}
static lean_object* _init_l_instComplementUSize(void){
_start:
{
lean_object* v___x_995_; 
v___x_995_ = lean_obj_once(&l_instComplementUSize___closed__0, &l_instComplementUSize___closed__0_once, _init_l_instComplementUSize___closed__0);
return v___x_995_;
}
}
static lean_object* _init_l_instNegUSize___closed__0(void){
_start:
{
lean_object* v___x_996_; 
v___x_996_ = lean_alloc_closure((void*)(l_USize_neg___boxed), 1, 0);
return v___x_996_;
}
}
static lean_object* _init_l_instNegUSize(void){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = lean_obj_once(&l_instNegUSize___closed__0, &l_instNegUSize___closed__0_once, _init_l_instNegUSize___closed__0);
return v___x_997_;
}
}
static lean_object* _init_l_instAndOpUSize___closed__0(void){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = lean_alloc_closure((void*)(l_USize_land___boxed), 2, 0);
return v___x_998_;
}
}
static lean_object* _init_l_instAndOpUSize(void){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = lean_obj_once(&l_instAndOpUSize___closed__0, &l_instAndOpUSize___closed__0_once, _init_l_instAndOpUSize___closed__0);
return v___x_999_;
}
}
static lean_object* _init_l_instOrOpUSize___closed__0(void){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = lean_alloc_closure((void*)(l_USize_lor___boxed), 2, 0);
return v___x_1000_;
}
}
static lean_object* _init_l_instOrOpUSize(void){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = lean_obj_once(&l_instOrOpUSize___closed__0, &l_instOrOpUSize___closed__0_once, _init_l_instOrOpUSize___closed__0);
return v___x_1001_;
}
}
static lean_object* _init_l_instXorOpUSize___closed__0(void){
_start:
{
lean_object* v___x_1002_; 
v___x_1002_ = lean_alloc_closure((void*)(l_USize_xor___boxed), 2, 0);
return v___x_1002_;
}
}
static lean_object* _init_l_instXorOpUSize(void){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = lean_obj_once(&l_instXorOpUSize___closed__0, &l_instXorOpUSize___closed__0_once, _init_l_instXorOpUSize___closed__0);
return v___x_1003_;
}
}
static lean_object* _init_l_instShiftLeftUSize___closed__0(void){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = lean_alloc_closure((void*)(l_USize_shiftLeft___boxed), 2, 0);
return v___x_1004_;
}
}
static lean_object* _init_l_instShiftLeftUSize(void){
_start:
{
lean_object* v___x_1005_; 
v___x_1005_ = lean_obj_once(&l_instShiftLeftUSize___closed__0, &l_instShiftLeftUSize___closed__0_once, _init_l_instShiftLeftUSize___closed__0);
return v___x_1005_;
}
}
static lean_object* _init_l_instShiftRightUSize___closed__0(void){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_alloc_closure((void*)(l_USize_shiftRight___boxed), 2, 0);
return v___x_1006_;
}
}
static lean_object* _init_l_instShiftRightUSize(void){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_obj_once(&l_instShiftRightUSize___closed__0, &l_instShiftRightUSize___closed__0_once, _init_l_instShiftRightUSize___closed__0);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_Bool_toUSize___boxed(lean_object* v_b_1009_){
_start:
{
uint8_t v_b_boxed_1010_; size_t v_res_1011_; lean_object* v_r_1012_; 
v_b_boxed_1010_ = lean_unbox(v_b_1009_);
v_res_1011_ = lean_bool_to_usize(v_b_boxed_1010_);
v_r_1012_ = lean_box_usize(v_res_1011_);
return v_r_1012_;
}
}
LEAN_EXPORT size_t l_instMaxUSize___lam__0(size_t v_x_1013_, size_t v_y_1014_){
_start:
{
uint8_t v___x_1015_; 
v___x_1015_ = lean_usize_dec_le(v_x_1013_, v_y_1014_);
if (v___x_1015_ == 0)
{
return v_x_1013_;
}
else
{
return v_y_1014_;
}
}
}
LEAN_EXPORT lean_object* l_instMaxUSize___lam__0___boxed(lean_object* v_x_1016_, lean_object* v_y_1017_){
_start:
{
size_t v_x_boxed_1018_; size_t v_y_boxed_1019_; size_t v_res_1020_; lean_object* v_r_1021_; 
v_x_boxed_1018_ = lean_unbox_usize(v_x_1016_);
lean_dec(v_x_1016_);
v_y_boxed_1019_ = lean_unbox_usize(v_y_1017_);
lean_dec(v_y_1017_);
v_res_1020_ = l_instMaxUSize___lam__0(v_x_boxed_1018_, v_y_boxed_1019_);
v_r_1021_ = lean_box_usize(v_res_1020_);
return v_r_1021_;
}
}
static lean_object* _init_l_instMaxUSize___closed__0(void){
_start:
{
lean_object* v___f_1022_; 
v___f_1022_ = lean_alloc_closure((void*)(l_instMaxUSize___lam__0___boxed), 2, 0);
return v___f_1022_;
}
}
static lean_object* _init_l_instMaxUSize(void){
_start:
{
lean_object* v___f_1023_; 
v___f_1023_ = lean_obj_once(&l_instMaxUSize___closed__0, &l_instMaxUSize___closed__0_once, _init_l_instMaxUSize___closed__0);
return v___f_1023_;
}
}
LEAN_EXPORT size_t l_instMinUSize___lam__0(size_t v_x_1024_, size_t v_y_1025_){
_start:
{
uint8_t v___x_1026_; 
v___x_1026_ = lean_usize_dec_le(v_x_1024_, v_y_1025_);
if (v___x_1026_ == 0)
{
return v_y_1025_;
}
else
{
return v_x_1024_;
}
}
}
LEAN_EXPORT lean_object* l_instMinUSize___lam__0___boxed(lean_object* v_x_1027_, lean_object* v_y_1028_){
_start:
{
size_t v_x_boxed_1029_; size_t v_y_boxed_1030_; size_t v_res_1031_; lean_object* v_r_1032_; 
v_x_boxed_1029_ = lean_unbox_usize(v_x_1027_);
lean_dec(v_x_1027_);
v_y_boxed_1030_ = lean_unbox_usize(v_y_1028_);
lean_dec(v_y_1028_);
v_res_1031_ = l_instMinUSize___lam__0(v_x_boxed_1029_, v_y_boxed_1030_);
v_r_1032_ = lean_box_usize(v_res_1031_);
return v_r_1032_;
}
}
static lean_object* _init_l_instMinUSize___closed__0(void){
_start:
{
lean_object* v___f_1033_; 
v___f_1033_ = lean_alloc_closure((void*)(l_instMinUSize___lam__0___boxed), 2, 0);
return v___f_1033_;
}
}
static lean_object* _init_l_instMinUSize(void){
_start:
{
lean_object* v___f_1034_; 
v___f_1034_ = lean_obj_once(&l_instMinUSize___closed__0, &l_instMinUSize___closed__0_once, _init_l_instMinUSize___closed__0);
return v___f_1034_;
}
}
lean_object* runtime_initialize_Init_Data_BitVec_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_UInt_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_BitVec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instAddUInt8 = _init_l_instAddUInt8();
lean_mark_persistent(l_instAddUInt8);
l_instSubUInt8 = _init_l_instSubUInt8();
lean_mark_persistent(l_instSubUInt8);
l_instMulUInt8 = _init_l_instMulUInt8();
lean_mark_persistent(l_instMulUInt8);
l_instPowUInt8Nat = _init_l_instPowUInt8Nat();
lean_mark_persistent(l_instPowUInt8Nat);
l_instModUInt8 = _init_l_instModUInt8();
lean_mark_persistent(l_instModUInt8);
l_instHModUInt8Nat = _init_l_instHModUInt8Nat();
lean_mark_persistent(l_instHModUInt8Nat);
l_instDivUInt8 = _init_l_instDivUInt8();
lean_mark_persistent(l_instDivUInt8);
l_instComplementUInt8 = _init_l_instComplementUInt8();
lean_mark_persistent(l_instComplementUInt8);
l_instNegUInt8 = _init_l_instNegUInt8();
lean_mark_persistent(l_instNegUInt8);
l_instAndOpUInt8 = _init_l_instAndOpUInt8();
lean_mark_persistent(l_instAndOpUInt8);
l_instOrOpUInt8 = _init_l_instOrOpUInt8();
lean_mark_persistent(l_instOrOpUInt8);
l_instXorOpUInt8 = _init_l_instXorOpUInt8();
lean_mark_persistent(l_instXorOpUInt8);
l_instShiftLeftUInt8 = _init_l_instShiftLeftUInt8();
lean_mark_persistent(l_instShiftLeftUInt8);
l_instShiftRightUInt8 = _init_l_instShiftRightUInt8();
lean_mark_persistent(l_instShiftRightUInt8);
l_instMaxUInt8 = _init_l_instMaxUInt8();
lean_mark_persistent(l_instMaxUInt8);
l_instMinUInt8 = _init_l_instMinUInt8();
lean_mark_persistent(l_instMinUInt8);
l_instAddUInt16 = _init_l_instAddUInt16();
lean_mark_persistent(l_instAddUInt16);
l_instSubUInt16 = _init_l_instSubUInt16();
lean_mark_persistent(l_instSubUInt16);
l_instMulUInt16 = _init_l_instMulUInt16();
lean_mark_persistent(l_instMulUInt16);
l_instPowUInt16Nat = _init_l_instPowUInt16Nat();
lean_mark_persistent(l_instPowUInt16Nat);
l_instModUInt16 = _init_l_instModUInt16();
lean_mark_persistent(l_instModUInt16);
l_instHModUInt16Nat = _init_l_instHModUInt16Nat();
lean_mark_persistent(l_instHModUInt16Nat);
l_instDivUInt16 = _init_l_instDivUInt16();
lean_mark_persistent(l_instDivUInt16);
l_instLTUInt16 = _init_l_instLTUInt16();
lean_mark_persistent(l_instLTUInt16);
l_instLEUInt16 = _init_l_instLEUInt16();
lean_mark_persistent(l_instLEUInt16);
l_instComplementUInt16 = _init_l_instComplementUInt16();
lean_mark_persistent(l_instComplementUInt16);
l_instNegUInt16 = _init_l_instNegUInt16();
lean_mark_persistent(l_instNegUInt16);
l_instAndOpUInt16 = _init_l_instAndOpUInt16();
lean_mark_persistent(l_instAndOpUInt16);
l_instOrOpUInt16 = _init_l_instOrOpUInt16();
lean_mark_persistent(l_instOrOpUInt16);
l_instXorOpUInt16 = _init_l_instXorOpUInt16();
lean_mark_persistent(l_instXorOpUInt16);
l_instShiftLeftUInt16 = _init_l_instShiftLeftUInt16();
lean_mark_persistent(l_instShiftLeftUInt16);
l_instShiftRightUInt16 = _init_l_instShiftRightUInt16();
lean_mark_persistent(l_instShiftRightUInt16);
l_instMaxUInt16 = _init_l_instMaxUInt16();
lean_mark_persistent(l_instMaxUInt16);
l_instMinUInt16 = _init_l_instMinUInt16();
lean_mark_persistent(l_instMinUInt16);
l_instMulUInt32 = _init_l_instMulUInt32();
lean_mark_persistent(l_instMulUInt32);
l_instPowUInt32Nat = _init_l_instPowUInt32Nat();
lean_mark_persistent(l_instPowUInt32Nat);
l_instModUInt32 = _init_l_instModUInt32();
lean_mark_persistent(l_instModUInt32);
l_instHModUInt32Nat = _init_l_instHModUInt32Nat();
lean_mark_persistent(l_instHModUInt32Nat);
l_instDivUInt32 = _init_l_instDivUInt32();
lean_mark_persistent(l_instDivUInt32);
l_instComplementUInt32 = _init_l_instComplementUInt32();
lean_mark_persistent(l_instComplementUInt32);
l_instNegUInt32 = _init_l_instNegUInt32();
lean_mark_persistent(l_instNegUInt32);
l_instAndOpUInt32 = _init_l_instAndOpUInt32();
lean_mark_persistent(l_instAndOpUInt32);
l_instOrOpUInt32 = _init_l_instOrOpUInt32();
lean_mark_persistent(l_instOrOpUInt32);
l_instXorOpUInt32 = _init_l_instXorOpUInt32();
lean_mark_persistent(l_instXorOpUInt32);
l_instShiftLeftUInt32 = _init_l_instShiftLeftUInt32();
lean_mark_persistent(l_instShiftLeftUInt32);
l_instShiftRightUInt32 = _init_l_instShiftRightUInt32();
lean_mark_persistent(l_instShiftRightUInt32);
l_instAddUInt64 = _init_l_instAddUInt64();
lean_mark_persistent(l_instAddUInt64);
l_instSubUInt64 = _init_l_instSubUInt64();
lean_mark_persistent(l_instSubUInt64);
l_instMulUInt64 = _init_l_instMulUInt64();
lean_mark_persistent(l_instMulUInt64);
l_instPowUInt64Nat = _init_l_instPowUInt64Nat();
lean_mark_persistent(l_instPowUInt64Nat);
l_instModUInt64 = _init_l_instModUInt64();
lean_mark_persistent(l_instModUInt64);
l_instHModUInt64Nat = _init_l_instHModUInt64Nat();
lean_mark_persistent(l_instHModUInt64Nat);
l_instDivUInt64 = _init_l_instDivUInt64();
lean_mark_persistent(l_instDivUInt64);
l_instLTUInt64 = _init_l_instLTUInt64();
lean_mark_persistent(l_instLTUInt64);
l_instLEUInt64 = _init_l_instLEUInt64();
lean_mark_persistent(l_instLEUInt64);
l_instComplementUInt64 = _init_l_instComplementUInt64();
lean_mark_persistent(l_instComplementUInt64);
l_instNegUInt64 = _init_l_instNegUInt64();
lean_mark_persistent(l_instNegUInt64);
l_instAndOpUInt64 = _init_l_instAndOpUInt64();
lean_mark_persistent(l_instAndOpUInt64);
l_instOrOpUInt64 = _init_l_instOrOpUInt64();
lean_mark_persistent(l_instOrOpUInt64);
l_instXorOpUInt64 = _init_l_instXorOpUInt64();
lean_mark_persistent(l_instXorOpUInt64);
l_instShiftLeftUInt64 = _init_l_instShiftLeftUInt64();
lean_mark_persistent(l_instShiftLeftUInt64);
l_instShiftRightUInt64 = _init_l_instShiftRightUInt64();
lean_mark_persistent(l_instShiftRightUInt64);
l_instMaxUInt64 = _init_l_instMaxUInt64();
lean_mark_persistent(l_instMaxUInt64);
l_instMinUInt64 = _init_l_instMinUInt64();
lean_mark_persistent(l_instMinUInt64);
l_instMulUSize = _init_l_instMulUSize();
lean_mark_persistent(l_instMulUSize);
l_instPowUSizeNat = _init_l_instPowUSizeNat();
lean_mark_persistent(l_instPowUSizeNat);
l_instModUSize = _init_l_instModUSize();
lean_mark_persistent(l_instModUSize);
l_instHModUSizeNat = _init_l_instHModUSizeNat();
lean_mark_persistent(l_instHModUSizeNat);
l_instDivUSize = _init_l_instDivUSize();
lean_mark_persistent(l_instDivUSize);
l_instComplementUSize = _init_l_instComplementUSize();
lean_mark_persistent(l_instComplementUSize);
l_instNegUSize = _init_l_instNegUSize();
lean_mark_persistent(l_instNegUSize);
l_instAndOpUSize = _init_l_instAndOpUSize();
lean_mark_persistent(l_instAndOpUSize);
l_instOrOpUSize = _init_l_instOrOpUSize();
lean_mark_persistent(l_instOrOpUSize);
l_instXorOpUSize = _init_l_instXorOpUSize();
lean_mark_persistent(l_instXorOpUSize);
l_instShiftLeftUSize = _init_l_instShiftLeftUSize();
lean_mark_persistent(l_instShiftLeftUSize);
l_instShiftRightUSize = _init_l_instShiftRightUSize();
lean_mark_persistent(l_instShiftRightUSize);
l_instMaxUSize = _init_l_instMaxUSize();
lean_mark_persistent(l_instMaxUSize);
l_instMinUSize = _init_l_instMinUSize();
lean_mark_persistent(l_instMinUSize);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_UInt_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_BitVec_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_UInt_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_BitVec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_UInt_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
