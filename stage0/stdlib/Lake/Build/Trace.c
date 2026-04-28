// Lean compiler output
// Module: Lake.Build.Trace
// Imports: public import Lean.Data.Json import Init.Data.Nat.Fold meta import Init.Data.Nat.Fold public import Lake.Util.String public import Init.Data.String.Search public import Init.Data.String.Extra import Init.Data.Option.Coe
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_IO_FS_instReprSystemTime_repr___redArg(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_io_metadata(lean_object*);
uint8_t l_IO_FS_instOrdSystemTime_ord(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_lowerHexUInt64(uint64_t);
lean_object* l_IO_FS_readBinFile(lean_object*);
uint64_t lean_byte_array_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_String_crlfToLf(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint8_t lean_uint8_sub(uint8_t, uint8_t);
uint64_t lean_uint8_to_uint64(uint8_t);
uint64_t lean_uint64_add(uint64_t, uint64_t);
uint8_t l_Lake_isHex(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_System_FilePath_pathExists___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_instMonadLiftT___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_List_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_IO_FS_instBEqSystemTime_beq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instCheckExistsFilePath___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instCheckExistsFilePath___closed__0;
LEAN_EXPORT lean_object* l_Lake_instCheckExistsFilePath;
LEAN_EXPORT lean_object* l_Lake_computeTrace___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mixTraceList___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mixTraceList(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mixTraceArray___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_mixTraceArray___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_mixTraceArray___redArg___closed__0;
static lean_once_cell_t l_Lake_mixTraceArray___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_mixTraceArray___redArg___closed__1;
static lean_once_cell_t l_Lake_mixTraceArray___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_mixTraceArray___redArg___closed__2;
static lean_once_cell_t l_Lake_mixTraceArray___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_mixTraceArray___redArg___closed__3;
static lean_once_cell_t l_Lake_mixTraceArray___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_mixTraceArray___redArg___closed__4;
static lean_once_cell_t l_Lake_mixTraceArray___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_mixTraceArray___redArg___closed__5;
static lean_once_cell_t l_Lake_mixTraceArray___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_mixTraceArray___redArg___closed__6;
static lean_once_cell_t l_Lake_mixTraceArray___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_mixTraceArray___redArg___closed__7;
static lean_once_cell_t l_Lake_mixTraceArray___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_mixTraceArray___redArg___closed__8;
static lean_once_cell_t l_Lake_mixTraceArray___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_mixTraceArray___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lake_mixTraceArray___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mixTraceArray(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeListTrace___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeListTrace___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeListTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeListTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instComputeTraceListOfMonad___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instComputeTraceListOfMonad___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_instComputeTraceListOfMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceListOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceArrayOfMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceArrayOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprHash_repr_spec__0(lean_object*);
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__0;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__1;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__2;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__3;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__4;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__5;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__6;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__7;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__8;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__9;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__10;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__11;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__12;
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr___redArg(uint64_t);
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instReprHash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash___closed__0;
LEAN_EXPORT lean_object* l_Lake_instReprHash;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqHash_decEq(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqHash_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqHash(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqHash___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_instHashable___lam__0(uint64_t);
LEAN_EXPORT lean_object* l_Lake_Hash_instHashable___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lake_Hash_instHashable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_instHashable___closed__0;
LEAN_EXPORT lean_object* l_Lake_Hash_instHashable;
LEAN_EXPORT uint64_t l_Lake_Hash_nil;
LEAN_EXPORT uint64_t l_Lake_Hash_instNilTrace;
LEAN_EXPORT uint64_t l_Lake_Hash_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofNat___boxed(lean_object*);
static lean_once_cell_t l_Lake_Hash_ofJsonNumber_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_ofJsonNumber_x3f___closed__0;
static lean_once_cell_t l_Lake_Hash_ofJsonNumber_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_ofJsonNumber_x3f___closed__1;
static lean_once_cell_t l_Lake_Hash_ofJsonNumber_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_ofJsonNumber_x3f___closed__2;
static lean_once_cell_t l_Lake_Hash_ofJsonNumber_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_ofJsonNumber_x3f___closed__3;
static lean_once_cell_t l_Lake_Hash_ofJsonNumber_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_ofJsonNumber_x3f___closed__4;
static lean_once_cell_t l_Lake_Hash_ofJsonNumber_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_ofJsonNumber_x3f___closed__5;
LEAN_EXPORT lean_object* l_Lake_Hash_ofJsonNumber_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofJsonNumber_x3f___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofHex(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofHex___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofHex_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofHex_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_hex(uint64_t);
LEAN_EXPORT lean_object* l_Lake_Hash_hex___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofDecimal_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofString_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_load_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_load_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_mix(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lake_Hash_mix___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Hash_instMixTrace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_instMixTrace___closed__0;
LEAN_EXPORT lean_object* l_Lake_Hash_instMixTrace;
LEAN_EXPORT lean_object* l_Lake_Hash_toString(uint64_t);
LEAN_EXPORT lean_object* l_Lake_Hash_toString___boxed(lean_object*);
static lean_once_cell_t l_Lake_Hash_instToString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_instToString___closed__0;
LEAN_EXPORT lean_object* l_Lake_Hash_instToString;
LEAN_EXPORT uint64_t l_Lake_Hash_ofHashable___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofHashable___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofHashable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofHashable___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofString___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofText(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofText___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofByteArray(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofByteArray___boxed(lean_object*);
static lean_once_cell_t l_Lake_Hash_ofBool___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_Hash_ofBool___closed__0;
static lean_once_cell_t l_Lake_Hash_ofBool___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_Hash_ofBool___closed__1;
LEAN_EXPORT uint64_t l_Lake_Hash_ofBool(uint8_t);
LEAN_EXPORT lean_object* l_Lake_Hash_ofBool___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_toJson(uint64_t);
LEAN_EXPORT lean_object* l_Lake_Hash_toJson___boxed(lean_object*);
static lean_once_cell_t l_Lake_Hash_instToJson___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_instToJson___closed__0;
LEAN_EXPORT lean_object* l_Lake_Hash_instToJson;
static lean_once_cell_t l_Lake_Hash_fromJson_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_fromJson_x3f___closed__0;
static lean_once_cell_t l_Lake_Hash_fromJson_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_fromJson_x3f___closed__1;
static lean_once_cell_t l_Lake_Hash_fromJson_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_fromJson_x3f___closed__2;
static lean_once_cell_t l_Lake_Hash_fromJson_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_fromJson_x3f___closed__3;
static lean_once_cell_t l_Lake_Hash_fromJson_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_fromJson_x3f___closed__4;
static lean_once_cell_t l_Lake_Hash_fromJson_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_fromJson_x3f___closed__5;
static lean_once_cell_t l_Lake_Hash_fromJson_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_fromJson_x3f___closed__6;
LEAN_EXPORT lean_object* l_Lake_Hash_fromJson_x3f(lean_object*);
static lean_once_cell_t l_Lake_Hash_instFromJson___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_instFromJson___closed__0;
LEAN_EXPORT lean_object* l_Lake_Hash_instFromJson;
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_pureHash___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_pureHash___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_pureHash(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_pureHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeHash___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeHash(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashIdOfHashable___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashIdOfHashable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeBinFileHash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeBinFileHash___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instComputeHashFilePathIO___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instComputeHashFilePathIO___closed__0;
LEAN_EXPORT lean_object* l_Lake_instComputeHashFilePathIO;
LEAN_EXPORT lean_object* l_Lake_computeTextFileHash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeTextFileHash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lake_instCoeTextFilePathFilePath___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instCoeTextFilePathFilePath___closed__0;
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath;
static lean_once_cell_t l_Lake_instComputeHashTextFilePathIO___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instComputeHashTextFilePathIO___closed__0;
LEAN_EXPORT lean_object* l_Lake_instComputeHashTextFilePathIO;
LEAN_EXPORT lean_object* l_Lake_instToStringTextFilePath;
LEAN_EXPORT lean_object* l_Lake_computeFileHash(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_computeFileHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__0(uint64_t, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashArrayOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashArrayOfMonad(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_MTime_instOfNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_MTime_instOfNat___closed__0;
LEAN_EXPORT lean_object* l_Lake_MTime_instOfNat;
LEAN_EXPORT uint8_t l_Lake_MTime_instBEq___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instBEq___aux__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_MTime_instBEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_MTime_instBEq___closed__0;
LEAN_EXPORT lean_object* l_Lake_MTime_instBEq;
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr___aux__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr___aux__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_MTime_instRepr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_MTime_instRepr___closed__0;
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr;
LEAN_EXPORT uint8_t l_Lake_MTime_instOrd___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instOrd___aux__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_MTime_instOrd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_MTime_instOrd___closed__0;
LEAN_EXPORT lean_object* l_Lake_MTime_instOrd;
LEAN_EXPORT lean_object* l_Lake_MTime_instLT;
LEAN_EXPORT lean_object* l_Lake_MTime_instLE;
LEAN_EXPORT lean_object* l_Lake_MTime_instMin___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instMin___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_MTime_instMin___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_MTime_instMin___closed__0;
LEAN_EXPORT lean_object* l_Lake_MTime_instMin;
LEAN_EXPORT lean_object* l_Lake_MTime_instMax___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instMax___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_MTime_instMax___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_MTime_instMax___closed__0;
LEAN_EXPORT lean_object* l_Lake_MTime_instMax;
LEAN_EXPORT lean_object* l_Lake_MTime_instNilTrace;
LEAN_EXPORT lean_object* l_Lake_MTime_instMixTrace;
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getFileMTime(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getFileMTime___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instGetMTimeFilePath___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instGetMTimeFilePath___closed__0;
LEAN_EXPORT lean_object* l_Lake_instGetMTimeFilePath;
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instGetMTimeTextFilePath___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instGetMTimeTextFilePath___closed__0;
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath;
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__0;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__1;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__2;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__3;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__4;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__1;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__5;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__6;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__7;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__6;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__7;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__4;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__8;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__9;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__10;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0(lean_object*);
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__8;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__9;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__10;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__11;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__12;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace_repr___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instReprBuildTrace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace___closed__0;
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_withCaption(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_BuildTrace_withoutInputs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildTrace_withoutInputs___closed__0;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_withoutInputs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofHash(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofHash___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_BuildTrace_instCoeHash___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildTrace_instCoeHash___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash___lam__0(uint64_t);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lake_BuildTrace_instCoeHash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildTrace_instCoeHash___closed__0;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofMTime(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_BuildTrace_instCoeMTime___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildTrace_instCoeMTime___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeMTime___lam__0(lean_object*);
static lean_once_cell_t l_Lake_BuildTrace_instCoeMTime___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildTrace_instCoeMTime___closed__0;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeMTime;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_nil(lean_object*);
static lean_once_cell_t l_Lake_BuildTrace_instNilTrace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildTrace_instNilTrace___closed__0;
static lean_once_cell_t l_Lake_BuildTrace_instNilTrace___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildTrace_instNilTrace___closed__1;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instNilTrace;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_mix(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_BuildTrace_instMixTrace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildTrace_instMixTrace___closed__0;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instMixTrace;
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstHash___redArg(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstHash(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstTime___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstTime(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lake_instCheckExistsFilePath___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_alloc_closure((void*)(l_System_FilePath_pathExists___boxed), 2, 0);
return v___x_1_;
}
}
static lean_object* _init_l_Lake_instCheckExistsFilePath(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_once(&l_Lake_instCheckExistsFilePath___closed__0, &l_Lake_instCheckExistsFilePath___closed__0_once, _init_l_Lake_instCheckExistsFilePath___closed__0);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeTrace___redArg(lean_object* v_inst_3_, lean_object* v_inst_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_apply_1(v_inst_3_, v_a_5_);
v___x_7_ = lean_apply_2(v_inst_4_, lean_box(0), v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeTrace(lean_object* v_00_u03b1_8_, lean_object* v_m_9_, lean_object* v_00_u03c4_10_, lean_object* v_n_11_, lean_object* v_inst_12_, lean_object* v_inst_13_, lean_object* v_a_14_){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_apply_1(v_inst_12_, v_a_14_);
v___x_16_ = lean_apply_2(v_inst_13_, lean_box(0), v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___redArg(lean_object* v_inst_17_){
_start:
{
lean_inc(v_inst_17_);
return v_inst_17_;
}
}
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___redArg___boxed(lean_object* v_inst_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = l_Lake_inhabitedOfNilTrace___redArg(v_inst_18_);
lean_dec(v_inst_18_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace(lean_object* v_00_u03b1_20_, lean_object* v_inst_21_){
_start:
{
lean_inc(v_inst_21_);
return v_inst_21_;
}
}
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___boxed(lean_object* v_00_u03b1_22_, lean_object* v_inst_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lake_inhabitedOfNilTrace(v_00_u03b1_22_, v_inst_23_);
lean_dec(v_inst_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceList___redArg(lean_object* v_inst_25_, lean_object* v_inst_26_, lean_object* v_traces_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_List_foldl___redArg(v_inst_25_, v_inst_26_, v_traces_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceList(lean_object* v_00_u03c4_29_, lean_object* v_inst_30_, lean_object* v_inst_31_, lean_object* v_traces_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_List_foldl___redArg(v_inst_30_, v_inst_31_, v_traces_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceArray___redArg___lam__0(lean_object* v_inst_34_, lean_object* v_x1_35_, lean_object* v_x2_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_apply_2(v_inst_34_, v_x1_35_, v_x2_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Lake_mixTraceArray___redArg___closed__0(void){
_start:
{
lean_object* v___f_38_; 
v___f_38_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_38_;
}
}
static lean_object* _init_l_Lake_mixTraceArray___redArg___closed__1(void){
_start:
{
lean_object* v___f_39_; 
v___f_39_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_39_;
}
}
static lean_object* _init_l_Lake_mixTraceArray___redArg___closed__2(void){
_start:
{
lean_object* v___f_40_; 
v___f_40_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_40_;
}
}
static lean_object* _init_l_Lake_mixTraceArray___redArg___closed__3(void){
_start:
{
lean_object* v___f_41_; 
v___f_41_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_41_;
}
}
static lean_object* _init_l_Lake_mixTraceArray___redArg___closed__4(void){
_start:
{
lean_object* v___f_42_; 
v___f_42_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_42_;
}
}
static lean_object* _init_l_Lake_mixTraceArray___redArg___closed__5(void){
_start:
{
lean_object* v___f_43_; 
v___f_43_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_43_;
}
}
static lean_object* _init_l_Lake_mixTraceArray___redArg___closed__6(void){
_start:
{
lean_object* v___f_44_; 
v___f_44_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_44_;
}
}
static lean_object* _init_l_Lake_mixTraceArray___redArg___closed__7(void){
_start:
{
lean_object* v___f_45_; lean_object* v___f_46_; lean_object* v___x_47_; 
v___f_45_ = lean_obj_once(&l_Lake_mixTraceArray___redArg___closed__1, &l_Lake_mixTraceArray___redArg___closed__1_once, _init_l_Lake_mixTraceArray___redArg___closed__1);
v___f_46_ = lean_obj_once(&l_Lake_mixTraceArray___redArg___closed__0, &l_Lake_mixTraceArray___redArg___closed__0_once, _init_l_Lake_mixTraceArray___redArg___closed__0);
v___x_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_47_, 0, v___f_46_);
lean_ctor_set(v___x_47_, 1, v___f_45_);
return v___x_47_;
}
}
static lean_object* _init_l_Lake_mixTraceArray___redArg___closed__8(void){
_start:
{
lean_object* v___f_48_; lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___f_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___f_48_ = lean_obj_once(&l_Lake_mixTraceArray___redArg___closed__5, &l_Lake_mixTraceArray___redArg___closed__5_once, _init_l_Lake_mixTraceArray___redArg___closed__5);
v___f_49_ = lean_obj_once(&l_Lake_mixTraceArray___redArg___closed__4, &l_Lake_mixTraceArray___redArg___closed__4_once, _init_l_Lake_mixTraceArray___redArg___closed__4);
v___f_50_ = lean_obj_once(&l_Lake_mixTraceArray___redArg___closed__3, &l_Lake_mixTraceArray___redArg___closed__3_once, _init_l_Lake_mixTraceArray___redArg___closed__3);
v___f_51_ = lean_obj_once(&l_Lake_mixTraceArray___redArg___closed__2, &l_Lake_mixTraceArray___redArg___closed__2_once, _init_l_Lake_mixTraceArray___redArg___closed__2);
v___x_52_ = lean_obj_once(&l_Lake_mixTraceArray___redArg___closed__7, &l_Lake_mixTraceArray___redArg___closed__7_once, _init_l_Lake_mixTraceArray___redArg___closed__7);
v___x_53_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v___f_51_);
lean_ctor_set(v___x_53_, 2, v___f_50_);
lean_ctor_set(v___x_53_, 3, v___f_49_);
lean_ctor_set(v___x_53_, 4, v___f_48_);
return v___x_53_;
}
}
static lean_object* _init_l_Lake_mixTraceArray___redArg___closed__9(void){
_start:
{
lean_object* v___f_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___f_54_ = lean_obj_once(&l_Lake_mixTraceArray___redArg___closed__6, &l_Lake_mixTraceArray___redArg___closed__6_once, _init_l_Lake_mixTraceArray___redArg___closed__6);
v___x_55_ = lean_obj_once(&l_Lake_mixTraceArray___redArg___closed__8, &l_Lake_mixTraceArray___redArg___closed__8_once, _init_l_Lake_mixTraceArray___redArg___closed__8);
v___x_56_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v___f_54_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceArray___redArg(lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_traces_59_){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; uint8_t v___x_63_; 
v___x_60_ = lean_unsigned_to_nat(0u);
v___x_61_ = lean_array_get_size(v_traces_59_);
v___x_62_ = lean_obj_once(&l_Lake_mixTraceArray___redArg___closed__9, &l_Lake_mixTraceArray___redArg___closed__9_once, _init_l_Lake_mixTraceArray___redArg___closed__9);
v___x_63_ = lean_nat_dec_lt(v___x_60_, v___x_61_);
if (v___x_63_ == 0)
{
lean_dec_ref(v_traces_59_);
lean_dec(v_inst_57_);
return v_inst_58_;
}
else
{
lean_object* v___f_64_; uint8_t v___x_65_; 
v___f_64_ = lean_alloc_closure((void*)(l_Lake_mixTraceArray___redArg___lam__0), 3, 1);
lean_closure_set(v___f_64_, 0, v_inst_57_);
v___x_65_ = lean_nat_dec_le(v___x_61_, v___x_61_);
if (v___x_65_ == 0)
{
if (v___x_63_ == 0)
{
lean_dec_ref(v___f_64_);
lean_dec_ref(v_traces_59_);
return v_inst_58_;
}
else
{
size_t v___x_66_; size_t v___x_67_; lean_object* v___x_68_; 
v___x_66_ = ((size_t)0ULL);
v___x_67_ = lean_usize_of_nat(v___x_61_);
v___x_68_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_62_, v___f_64_, v_traces_59_, v___x_66_, v___x_67_, v_inst_58_);
return v___x_68_;
}
}
else
{
size_t v___x_69_; size_t v___x_70_; lean_object* v___x_71_; 
v___x_69_ = ((size_t)0ULL);
v___x_70_ = lean_usize_of_nat(v___x_61_);
v___x_71_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_62_, v___f_64_, v_traces_59_, v___x_69_, v___x_70_, v_inst_58_);
return v___x_71_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceArray(lean_object* v_00_u03c4_72_, lean_object* v_inst_73_, lean_object* v_inst_74_, lean_object* v_traces_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lake_mixTraceArray___redArg(v_inst_73_, v_inst_74_, v_traces_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeListTrace___redArg___lam__0(lean_object* v_inst_77_, lean_object* v_ts_78_, lean_object* v_toPure_79_, lean_object* v_____do__lift_80_){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_apply_2(v_inst_77_, v_ts_78_, v_____do__lift_80_);
v___x_82_ = lean_apply_2(v_toPure_79_, lean_box(0), v___x_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeListTrace___redArg___lam__1(lean_object* v_inst_83_, lean_object* v_toPure_84_, lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_toBind_87_, lean_object* v_ts_88_, lean_object* v_t_89_){
_start:
{
lean_object* v___f_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___f_90_ = lean_alloc_closure((void*)(l_Lake_computeListTrace___redArg___lam__0), 4, 3);
lean_closure_set(v___f_90_, 0, v_inst_83_);
lean_closure_set(v___f_90_, 1, v_ts_88_);
lean_closure_set(v___f_90_, 2, v_toPure_84_);
v___x_91_ = lean_apply_1(v_inst_85_, v_t_89_);
v___x_92_ = lean_apply_2(v_inst_86_, lean_box(0), v___x_91_);
v___x_93_ = lean_apply_4(v_toBind_87_, lean_box(0), lean_box(0), v___x_92_, v___f_90_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeListTrace___redArg(lean_object* v_inst_94_, lean_object* v_inst_95_, lean_object* v_inst_96_, lean_object* v_inst_97_, lean_object* v_inst_98_, lean_object* v_as_99_){
_start:
{
lean_object* v_toApplicative_100_; lean_object* v_toBind_101_; lean_object* v_toPure_102_; lean_object* v___f_103_; lean_object* v___x_104_; 
v_toApplicative_100_ = lean_ctor_get(v_inst_98_, 0);
v_toBind_101_ = lean_ctor_get(v_inst_98_, 1);
v_toPure_102_ = lean_ctor_get(v_toApplicative_100_, 1);
lean_inc(v_toBind_101_);
lean_inc(v_toPure_102_);
v___f_103_ = lean_alloc_closure((void*)(l_Lake_computeListTrace___redArg___lam__1), 7, 5);
lean_closure_set(v___f_103_, 0, v_inst_94_);
lean_closure_set(v___f_103_, 1, v_toPure_102_);
lean_closure_set(v___f_103_, 2, v_inst_96_);
lean_closure_set(v___f_103_, 3, v_inst_97_);
lean_closure_set(v___f_103_, 4, v_toBind_101_);
v___x_104_ = l_List_foldlM___redArg(v_inst_98_, v___f_103_, v_inst_95_, v_as_99_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeListTrace(lean_object* v_00_u03c4_105_, lean_object* v_00_u03b1_106_, lean_object* v_m_107_, lean_object* v_inst_108_, lean_object* v_inst_109_, lean_object* v_inst_110_, lean_object* v_n_111_, lean_object* v_inst_112_, lean_object* v_inst_113_, lean_object* v_as_114_){
_start:
{
lean_object* v_toApplicative_115_; lean_object* v_toBind_116_; lean_object* v_toPure_117_; lean_object* v___f_118_; lean_object* v___x_119_; 
v_toApplicative_115_ = lean_ctor_get(v_inst_113_, 0);
v_toBind_116_ = lean_ctor_get(v_inst_113_, 1);
v_toPure_117_ = lean_ctor_get(v_toApplicative_115_, 1);
lean_inc(v_toBind_116_);
lean_inc(v_toPure_117_);
v___f_118_ = lean_alloc_closure((void*)(l_Lake_computeListTrace___redArg___lam__1), 7, 5);
lean_closure_set(v___f_118_, 0, v_inst_108_);
lean_closure_set(v___f_118_, 1, v_toPure_117_);
lean_closure_set(v___f_118_, 2, v_inst_110_);
lean_closure_set(v___f_118_, 3, v_inst_112_);
lean_closure_set(v___f_118_, 4, v_toBind_116_);
v___x_119_ = l_List_foldlM___redArg(v_inst_113_, v___f_118_, v_inst_109_, v_as_114_);
return v___x_119_;
}
}
static lean_object* _init_l_Lake_instComputeTraceListOfMonad___redArg___closed__0(void){
_start:
{
lean_object* v___f_120_; 
v___f_120_ = lean_alloc_closure((void*)(l_instMonadLiftT___lam__0___boxed), 2, 0);
return v___f_120_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceListOfMonad___redArg(lean_object* v_inst_121_, lean_object* v_inst_122_, lean_object* v_inst_123_, lean_object* v_inst_124_){
_start:
{
lean_object* v___f_125_; lean_object* v___x_126_; 
v___f_125_ = lean_obj_once(&l_Lake_instComputeTraceListOfMonad___redArg___closed__0, &l_Lake_instComputeTraceListOfMonad___redArg___closed__0_once, _init_l_Lake_instComputeTraceListOfMonad___redArg___closed__0);
v___x_126_ = lean_alloc_closure((void*)(l_Lake_computeListTrace), 10, 9);
lean_closure_set(v___x_126_, 0, lean_box(0));
lean_closure_set(v___x_126_, 1, lean_box(0));
lean_closure_set(v___x_126_, 2, lean_box(0));
lean_closure_set(v___x_126_, 3, v_inst_121_);
lean_closure_set(v___x_126_, 4, v_inst_122_);
lean_closure_set(v___x_126_, 5, v_inst_123_);
lean_closure_set(v___x_126_, 6, lean_box(0));
lean_closure_set(v___x_126_, 7, v___f_125_);
lean_closure_set(v___x_126_, 8, v_inst_124_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceListOfMonad(lean_object* v_00_u03c4_127_, lean_object* v_00_u03b1_128_, lean_object* v_m_129_, lean_object* v_inst_130_, lean_object* v_inst_131_, lean_object* v_inst_132_, lean_object* v_inst_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lake_instComputeTraceListOfMonad___redArg(v_inst_130_, v_inst_131_, v_inst_132_, v_inst_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace___redArg(lean_object* v_inst_135_, lean_object* v_inst_136_, lean_object* v_inst_137_, lean_object* v_inst_138_, lean_object* v_inst_139_, lean_object* v_as_140_){
_start:
{
lean_object* v_toApplicative_141_; lean_object* v_toBind_142_; lean_object* v_toPure_143_; lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; 
v_toApplicative_141_ = lean_ctor_get(v_inst_139_, 0);
v_toBind_142_ = lean_ctor_get(v_inst_139_, 1);
v_toPure_143_ = lean_ctor_get(v_toApplicative_141_, 1);
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = lean_array_get_size(v_as_140_);
v___x_146_ = lean_nat_dec_lt(v___x_144_, v___x_145_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; 
lean_inc(v_toPure_143_);
lean_dec_ref(v_as_140_);
lean_dec_ref(v_inst_139_);
lean_dec(v_inst_138_);
lean_dec(v_inst_137_);
lean_dec(v_inst_135_);
v___x_147_ = lean_apply_2(v_toPure_143_, lean_box(0), v_inst_136_);
return v___x_147_;
}
else
{
lean_object* v___f_148_; uint8_t v___x_149_; 
lean_inc(v_toBind_142_);
lean_inc(v_toPure_143_);
v___f_148_ = lean_alloc_closure((void*)(l_Lake_computeListTrace___redArg___lam__1), 7, 5);
lean_closure_set(v___f_148_, 0, v_inst_135_);
lean_closure_set(v___f_148_, 1, v_toPure_143_);
lean_closure_set(v___f_148_, 2, v_inst_137_);
lean_closure_set(v___f_148_, 3, v_inst_138_);
lean_closure_set(v___f_148_, 4, v_toBind_142_);
v___x_149_ = lean_nat_dec_le(v___x_145_, v___x_145_);
if (v___x_149_ == 0)
{
if (v___x_146_ == 0)
{
lean_object* v___x_150_; 
lean_inc(v_toPure_143_);
lean_dec_ref(v___f_148_);
lean_dec_ref(v_as_140_);
lean_dec_ref(v_inst_139_);
v___x_150_ = lean_apply_2(v_toPure_143_, lean_box(0), v_inst_136_);
return v___x_150_;
}
else
{
size_t v___x_151_; size_t v___x_152_; lean_object* v___x_153_; 
v___x_151_ = ((size_t)0ULL);
v___x_152_ = lean_usize_of_nat(v___x_145_);
v___x_153_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_139_, v___f_148_, v_as_140_, v___x_151_, v___x_152_, v_inst_136_);
return v___x_153_;
}
}
else
{
size_t v___x_154_; size_t v___x_155_; lean_object* v___x_156_; 
v___x_154_ = ((size_t)0ULL);
v___x_155_ = lean_usize_of_nat(v___x_145_);
v___x_156_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_139_, v___f_148_, v_as_140_, v___x_154_, v___x_155_, v_inst_136_);
return v___x_156_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace(lean_object* v_00_u03c4_157_, lean_object* v_00_u03b1_158_, lean_object* v_m_159_, lean_object* v_inst_160_, lean_object* v_inst_161_, lean_object* v_inst_162_, lean_object* v_n_163_, lean_object* v_inst_164_, lean_object* v_inst_165_, lean_object* v_as_166_){
_start:
{
lean_object* v_toApplicative_167_; lean_object* v_toBind_168_; lean_object* v_toPure_169_; lean_object* v___x_170_; lean_object* v___x_171_; uint8_t v___x_172_; 
v_toApplicative_167_ = lean_ctor_get(v_inst_165_, 0);
v_toBind_168_ = lean_ctor_get(v_inst_165_, 1);
v_toPure_169_ = lean_ctor_get(v_toApplicative_167_, 1);
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = lean_array_get_size(v_as_166_);
v___x_172_ = lean_nat_dec_lt(v___x_170_, v___x_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; 
lean_inc(v_toPure_169_);
lean_dec_ref(v_as_166_);
lean_dec_ref(v_inst_165_);
lean_dec(v_inst_164_);
lean_dec(v_inst_162_);
lean_dec(v_inst_160_);
v___x_173_ = lean_apply_2(v_toPure_169_, lean_box(0), v_inst_161_);
return v___x_173_;
}
else
{
lean_object* v___f_174_; uint8_t v___x_175_; 
lean_inc(v_toBind_168_);
lean_inc(v_toPure_169_);
v___f_174_ = lean_alloc_closure((void*)(l_Lake_computeListTrace___redArg___lam__1), 7, 5);
lean_closure_set(v___f_174_, 0, v_inst_160_);
lean_closure_set(v___f_174_, 1, v_toPure_169_);
lean_closure_set(v___f_174_, 2, v_inst_162_);
lean_closure_set(v___f_174_, 3, v_inst_164_);
lean_closure_set(v___f_174_, 4, v_toBind_168_);
v___x_175_ = lean_nat_dec_le(v___x_171_, v___x_171_);
if (v___x_175_ == 0)
{
if (v___x_172_ == 0)
{
lean_object* v___x_176_; 
lean_inc(v_toPure_169_);
lean_dec_ref(v___f_174_);
lean_dec_ref(v_as_166_);
lean_dec_ref(v_inst_165_);
v___x_176_ = lean_apply_2(v_toPure_169_, lean_box(0), v_inst_161_);
return v___x_176_;
}
else
{
size_t v___x_177_; size_t v___x_178_; lean_object* v___x_179_; 
v___x_177_ = ((size_t)0ULL);
v___x_178_ = lean_usize_of_nat(v___x_171_);
v___x_179_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_165_, v___f_174_, v_as_166_, v___x_177_, v___x_178_, v_inst_161_);
return v___x_179_;
}
}
else
{
size_t v___x_180_; size_t v___x_181_; lean_object* v___x_182_; 
v___x_180_ = ((size_t)0ULL);
v___x_181_ = lean_usize_of_nat(v___x_171_);
v___x_182_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_165_, v___f_174_, v_as_166_, v___x_180_, v___x_181_, v_inst_161_);
return v___x_182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceArrayOfMonad___redArg(lean_object* v_inst_183_, lean_object* v_inst_184_, lean_object* v_inst_185_, lean_object* v_inst_186_){
_start:
{
lean_object* v___f_187_; lean_object* v___x_188_; 
v___f_187_ = lean_obj_once(&l_Lake_instComputeTraceListOfMonad___redArg___closed__0, &l_Lake_instComputeTraceListOfMonad___redArg___closed__0_once, _init_l_Lake_instComputeTraceListOfMonad___redArg___closed__0);
v___x_188_ = lean_alloc_closure((void*)(l_Lake_computeArrayTrace), 10, 9);
lean_closure_set(v___x_188_, 0, lean_box(0));
lean_closure_set(v___x_188_, 1, lean_box(0));
lean_closure_set(v___x_188_, 2, lean_box(0));
lean_closure_set(v___x_188_, 3, v_inst_183_);
lean_closure_set(v___x_188_, 4, v_inst_184_);
lean_closure_set(v___x_188_, 5, v_inst_185_);
lean_closure_set(v___x_188_, 6, lean_box(0));
lean_closure_set(v___x_188_, 7, v___f_187_);
lean_closure_set(v___x_188_, 8, v_inst_186_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceArrayOfMonad(lean_object* v_00_u03c4_189_, lean_object* v_00_u03b1_190_, lean_object* v_m_191_, lean_object* v_inst_192_, lean_object* v_inst_193_, lean_object* v_inst_194_, lean_object* v_inst_195_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_Lake_instComputeTraceArrayOfMonad___redArg(v_inst_192_, v_inst_193_, v_inst_194_, v_inst_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprHash_repr_spec__0(lean_object* v_a_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_nat_to_int(v_a_197_);
return v___x_198_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__0(void){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lean_mk_string_unchecked("{ ", 2, 2);
return v___x_199_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__1(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_mk_string_unchecked("val", 3, 3);
return v___x_200_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__1, &l_Lake_instReprHash_repr___redArg___closed__1_once, _init_l_Lake_instReprHash_repr___redArg___closed__1);
v___x_202_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
return v___x_202_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_203_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__2, &l_Lake_instReprHash_repr___redArg___closed__2_once, _init_l_Lake_instReprHash_repr___redArg___closed__2);
v___x_204_ = lean_box(0);
v___x_205_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
lean_ctor_set(v___x_205_, 1, v___x_203_);
return v___x_205_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_mk_string_unchecked(" := ", 4, 4);
return v___x_206_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__4, &l_Lake_instReprHash_repr___redArg___closed__4_once, _init_l_Lake_instReprHash_repr___redArg___closed__4);
v___x_208_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_209_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__5, &l_Lake_instReprHash_repr___redArg___closed__5_once, _init_l_Lake_instReprHash_repr___redArg___closed__5);
v___x_210_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__3, &l_Lake_instReprHash_repr___redArg___closed__3_once, _init_l_Lake_instReprHash_repr___redArg___closed__3);
v___x_211_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
lean_ctor_set(v___x_211_, 1, v___x_209_);
return v___x_211_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_unsigned_to_nat(7u);
v___x_213_ = lean_nat_to_int(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_mk_string_unchecked(" }", 2, 2);
return v___x_214_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__0, &l_Lake_instReprHash_repr___redArg___closed__0_once, _init_l_Lake_instReprHash_repr___redArg___closed__0);
v___x_216_ = lean_string_length(v___x_215_);
return v___x_216_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__9, &l_Lake_instReprHash_repr___redArg___closed__9_once, _init_l_Lake_instReprHash_repr___redArg___closed__9);
v___x_218_ = lean_nat_to_int(v___x_217_);
return v___x_218_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__0, &l_Lake_instReprHash_repr___redArg___closed__0_once, _init_l_Lake_instReprHash_repr___redArg___closed__0);
v___x_220_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
return v___x_220_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_221_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__8, &l_Lake_instReprHash_repr___redArg___closed__8_once, _init_l_Lake_instReprHash_repr___redArg___closed__8);
v___x_222_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr___redArg(uint64_t v_x_223_){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; uint8_t v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_224_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__6, &l_Lake_instReprHash_repr___redArg___closed__6_once, _init_l_Lake_instReprHash_repr___redArg___closed__6);
v___x_225_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__7, &l_Lake_instReprHash_repr___redArg___closed__7_once, _init_l_Lake_instReprHash_repr___redArg___closed__7);
v___x_226_ = lean_uint64_to_nat(v_x_223_);
v___x_227_ = l_Nat_reprFast(v___x_226_);
v___x_228_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
v___x_229_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_225_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = 0;
v___x_231_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set_uint8(v___x_231_, sizeof(void*)*1, v___x_230_);
v___x_232_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_224_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__10, &l_Lake_instReprHash_repr___redArg___closed__10_once, _init_l_Lake_instReprHash_repr___redArg___closed__10);
v___x_234_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__11, &l_Lake_instReprHash_repr___redArg___closed__11_once, _init_l_Lake_instReprHash_repr___redArg___closed__11);
v___x_235_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
lean_ctor_set(v___x_235_, 1, v___x_232_);
v___x_236_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__12, &l_Lake_instReprHash_repr___redArg___closed__12_once, _init_l_Lake_instReprHash_repr___redArg___closed__12);
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_233_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_239_, 0, v___x_238_);
lean_ctor_set_uint8(v___x_239_, sizeof(void*)*1, v___x_230_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr___redArg___boxed(lean_object* v_x_240_){
_start:
{
uint64_t v_x_147__boxed_241_; lean_object* v_res_242_; 
v_x_147__boxed_241_ = lean_unbox_uint64(v_x_240_);
lean_dec_ref(v_x_240_);
v_res_242_ = l_Lake_instReprHash_repr___redArg(v_x_147__boxed_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr(uint64_t v_x_243_, lean_object* v_prec_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l_Lake_instReprHash_repr___redArg(v_x_243_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr___boxed(lean_object* v_x_246_, lean_object* v_prec_247_){
_start:
{
uint64_t v_x_206__boxed_248_; lean_object* v_res_249_; 
v_x_206__boxed_248_ = lean_unbox_uint64(v_x_246_);
lean_dec_ref(v_x_246_);
v_res_249_ = l_Lake_instReprHash_repr(v_x_206__boxed_248_, v_prec_247_);
lean_dec(v_prec_247_);
return v_res_249_;
}
}
static lean_object* _init_l_Lake_instReprHash___closed__0(void){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = lean_alloc_closure((void*)(l_Lake_instReprHash_repr___boxed), 2, 0);
return v___x_250_;
}
}
static lean_object* _init_l_Lake_instReprHash(void){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = lean_obj_once(&l_Lake_instReprHash___closed__0, &l_Lake_instReprHash___closed__0_once, _init_l_Lake_instReprHash___closed__0);
return v___x_251_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqHash_decEq(uint64_t v_x_252_, uint64_t v_x_253_){
_start:
{
uint8_t v___x_254_; 
v___x_254_ = lean_uint64_dec_eq(v_x_252_, v_x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqHash_decEq___boxed(lean_object* v_x_255_, lean_object* v_x_256_){
_start:
{
uint64_t v_x_25__boxed_257_; uint64_t v_x_26__boxed_258_; uint8_t v_res_259_; lean_object* v_r_260_; 
v_x_25__boxed_257_ = lean_unbox_uint64(v_x_255_);
lean_dec_ref(v_x_255_);
v_x_26__boxed_258_ = lean_unbox_uint64(v_x_256_);
lean_dec_ref(v_x_256_);
v_res_259_ = l_Lake_instDecidableEqHash_decEq(v_x_25__boxed_257_, v_x_26__boxed_258_);
v_r_260_ = lean_box(v_res_259_);
return v_r_260_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqHash(uint64_t v_x_261_, uint64_t v_x_262_){
_start:
{
uint8_t v___x_263_; 
v___x_263_ = lean_uint64_dec_eq(v_x_261_, v_x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqHash___boxed(lean_object* v_x_264_, lean_object* v_x_265_){
_start:
{
uint64_t v_x_6__boxed_266_; uint64_t v_x_7__boxed_267_; uint8_t v_res_268_; lean_object* v_r_269_; 
v_x_6__boxed_266_ = lean_unbox_uint64(v_x_264_);
lean_dec_ref(v_x_264_);
v_x_7__boxed_267_ = lean_unbox_uint64(v_x_265_);
lean_dec_ref(v_x_265_);
v_res_268_ = l_Lake_instDecidableEqHash(v_x_6__boxed_266_, v_x_7__boxed_267_);
v_r_269_ = lean_box(v_res_268_);
return v_r_269_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_instHashable___lam__0(uint64_t v_self_270_){
_start:
{
return v_self_270_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_instHashable___lam__0___boxed(lean_object* v_self_271_){
_start:
{
uint64_t v_self_boxed_272_; uint64_t v_res_273_; lean_object* v_r_274_; 
v_self_boxed_272_ = lean_unbox_uint64(v_self_271_);
lean_dec_ref(v_self_271_);
v_res_273_ = l_Lake_Hash_instHashable___lam__0(v_self_boxed_272_);
v_r_274_ = lean_box_uint64(v_res_273_);
return v_r_274_;
}
}
static lean_object* _init_l_Lake_Hash_instHashable___closed__0(void){
_start:
{
lean_object* v___f_275_; 
v___f_275_ = lean_alloc_closure((void*)(l_Lake_Hash_instHashable___lam__0___boxed), 1, 0);
return v___f_275_;
}
}
static lean_object* _init_l_Lake_Hash_instHashable(void){
_start:
{
lean_object* v___f_276_; 
v___f_276_ = lean_obj_once(&l_Lake_Hash_instHashable___closed__0, &l_Lake_Hash_instHashable___closed__0_once, _init_l_Lake_Hash_instHashable___closed__0);
return v___f_276_;
}
}
static uint64_t _init_l_Lake_Hash_nil(void){
_start:
{
uint64_t v___x_277_; 
v___x_277_ = 1723ULL;
return v___x_277_;
}
}
static uint64_t _init_l_Lake_Hash_instNilTrace(void){
_start:
{
uint64_t v___x_278_; 
v___x_278_ = 1723ULL;
return v___x_278_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofNat(lean_object* v_n_279_){
_start:
{
uint64_t v___x_280_; 
v___x_280_ = lean_uint64_of_nat(v_n_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofNat___boxed(lean_object* v_n_281_){
_start:
{
uint64_t v_res_282_; lean_object* v_r_283_; 
v_res_282_ = l_Lake_Hash_ofNat(v_n_281_);
lean_dec(v_n_281_);
v_r_283_ = lean_box_uint64(v_res_282_);
return v_r_283_;
}
}
static lean_object* _init_l_Lake_Hash_ofJsonNumber_x3f___closed__0(void){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = lean_mk_string_unchecked("number is not a natural", 23, 23);
return v___x_284_;
}
}
static lean_object* _init_l_Lake_Hash_ofJsonNumber_x3f___closed__1(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_obj_once(&l_Lake_Hash_ofJsonNumber_x3f___closed__0, &l_Lake_Hash_ofJsonNumber_x3f___closed__0_once, _init_l_Lake_Hash_ofJsonNumber_x3f___closed__0);
v___x_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
return v___x_286_;
}
}
static lean_object* _init_l_Lake_Hash_ofJsonNumber_x3f___closed__2(void){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = lean_cstr_to_nat("18446744073709551616");
return v___x_287_;
}
}
static lean_object* _init_l_Lake_Hash_ofJsonNumber_x3f___closed__3(void){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = lean_mk_string_unchecked("number too big", 14, 14);
return v___x_288_;
}
}
static lean_object* _init_l_Lake_Hash_ofJsonNumber_x3f___closed__4(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_obj_once(&l_Lake_Hash_ofJsonNumber_x3f___closed__3, &l_Lake_Hash_ofJsonNumber_x3f___closed__3_once, _init_l_Lake_Hash_ofJsonNumber_x3f___closed__3);
v___x_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
return v___x_290_;
}
}
static lean_object* _init_l_Lake_Hash_ofJsonNumber_x3f___closed__5(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = lean_nat_to_int(v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofJsonNumber_x3f(lean_object* v_n_293_){
_start:
{
lean_object* v_mantissa_294_; lean_object* v_exponent_295_; uint8_t v___y_297_; lean_object* v___x_306_; uint8_t v___x_307_; 
v_mantissa_294_ = lean_ctor_get(v_n_293_, 0);
v_exponent_295_ = lean_ctor_get(v_n_293_, 1);
v___x_306_ = lean_unsigned_to_nat(0u);
v___x_307_ = lean_nat_dec_eq(v_exponent_295_, v___x_306_);
if (v___x_307_ == 0)
{
v___y_297_ = v___x_307_;
goto v___jp_296_;
}
else
{
lean_object* v___x_308_; uint8_t v___x_309_; 
v___x_308_ = lean_obj_once(&l_Lake_Hash_ofJsonNumber_x3f___closed__5, &l_Lake_Hash_ofJsonNumber_x3f___closed__5_once, _init_l_Lake_Hash_ofJsonNumber_x3f___closed__5);
v___x_309_ = lean_int_dec_le(v___x_308_, v_mantissa_294_);
v___y_297_ = v___x_309_;
goto v___jp_296_;
}
v___jp_296_:
{
if (v___y_297_ == 0)
{
lean_object* v___x_298_; 
v___x_298_ = lean_obj_once(&l_Lake_Hash_ofJsonNumber_x3f___closed__1, &l_Lake_Hash_ofJsonNumber_x3f___closed__1_once, _init_l_Lake_Hash_ofJsonNumber_x3f___closed__1);
return v___x_298_;
}
else
{
lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_299_ = l_Int_toNat(v_mantissa_294_);
v___x_300_ = lean_obj_once(&l_Lake_Hash_ofJsonNumber_x3f___closed__2, &l_Lake_Hash_ofJsonNumber_x3f___closed__2_once, _init_l_Lake_Hash_ofJsonNumber_x3f___closed__2);
v___x_301_ = lean_nat_dec_lt(v___x_299_, v___x_300_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; 
lean_dec(v___x_299_);
v___x_302_ = lean_obj_once(&l_Lake_Hash_ofJsonNumber_x3f___closed__4, &l_Lake_Hash_ofJsonNumber_x3f___closed__4_once, _init_l_Lake_Hash_ofJsonNumber_x3f___closed__4);
return v___x_302_;
}
else
{
uint64_t v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_303_ = lean_uint64_of_nat(v___x_299_);
lean_dec(v___x_299_);
v___x_304_ = lean_box_uint64(v___x_303_);
v___x_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
return v___x_305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofJsonNumber_x3f___boxed(lean_object* v_n_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_310_);
lean_dec_ref(v_n_310_);
return v_res_311_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg(lean_object* v_s_312_, lean_object* v_n_313_, lean_object* v_j_314_, uint64_t v_a_315_){
_start:
{
lean_object* v_zero_316_; uint8_t v_isZero_317_; 
v_zero_316_ = lean_unsigned_to_nat(0u);
v_isZero_317_ = lean_nat_dec_eq(v_j_314_, v_zero_316_);
if (v_isZero_317_ == 1)
{
lean_dec(v_j_314_);
return v_a_315_;
}
else
{
lean_object* v_one_318_; lean_object* v_n_319_; lean_object* v___x_320_; uint8_t v_c_321_; uint8_t v___x_322_; uint8_t v___x_323_; 
v_one_318_ = lean_unsigned_to_nat(1u);
v_n_319_ = lean_nat_sub(v_j_314_, v_one_318_);
v___x_320_ = lean_nat_sub(v_n_313_, v_j_314_);
lean_dec(v_j_314_);
v_c_321_ = lean_string_get_byte_fast(v_s_312_, v___x_320_);
v___x_322_ = 57;
v___x_323_ = lean_uint8_dec_le(v_c_321_, v___x_322_);
if (v___x_323_ == 0)
{
uint8_t v___x_324_; uint8_t v___x_325_; 
v___x_324_ = 97;
v___x_325_ = lean_uint8_dec_le(v___x_324_, v_c_321_);
if (v___x_325_ == 0)
{
uint64_t v___x_326_; uint64_t v___x_327_; uint8_t v___x_328_; uint8_t v___x_329_; uint64_t v___x_330_; uint64_t v___x_331_; 
v___x_326_ = 4ULL;
v___x_327_ = lean_uint64_shift_left(v_a_315_, v___x_326_);
v___x_328_ = 55;
v___x_329_ = lean_uint8_sub(v_c_321_, v___x_328_);
v___x_330_ = lean_uint8_to_uint64(v___x_329_);
v___x_331_ = lean_uint64_add(v___x_327_, v___x_330_);
v_j_314_ = v_n_319_;
v_a_315_ = v___x_331_;
goto _start;
}
else
{
uint64_t v___x_333_; uint64_t v___x_334_; uint8_t v___x_335_; uint8_t v___x_336_; uint64_t v___x_337_; uint64_t v___x_338_; 
v___x_333_ = 4ULL;
v___x_334_ = lean_uint64_shift_left(v_a_315_, v___x_333_);
v___x_335_ = 87;
v___x_336_ = lean_uint8_sub(v_c_321_, v___x_335_);
v___x_337_ = lean_uint8_to_uint64(v___x_336_);
v___x_338_ = lean_uint64_add(v___x_334_, v___x_337_);
v_j_314_ = v_n_319_;
v_a_315_ = v___x_338_;
goto _start;
}
}
else
{
uint64_t v___x_340_; uint64_t v___x_341_; uint8_t v___x_342_; uint8_t v___x_343_; uint64_t v___x_344_; uint64_t v___x_345_; 
v___x_340_ = 4ULL;
v___x_341_ = lean_uint64_shift_left(v_a_315_, v___x_340_);
v___x_342_ = 48;
v___x_343_ = lean_uint8_sub(v_c_321_, v___x_342_);
v___x_344_ = lean_uint8_to_uint64(v___x_343_);
v___x_345_ = lean_uint64_add(v___x_341_, v___x_344_);
v_j_314_ = v_n_319_;
v_a_315_ = v___x_345_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg___boxed(lean_object* v_s_347_, lean_object* v_n_348_, lean_object* v_j_349_, lean_object* v_a_350_){
_start:
{
uint64_t v_a_252__boxed_351_; uint64_t v_res_352_; lean_object* v_r_353_; 
v_a_252__boxed_351_ = lean_unbox_uint64(v_a_350_);
lean_dec_ref(v_a_350_);
v_res_352_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg(v_s_347_, v_n_348_, v_j_349_, v_a_252__boxed_351_);
lean_dec(v_n_348_);
lean_dec_ref(v_s_347_);
v_r_353_ = lean_box_uint64(v_res_352_);
return v_r_353_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofHex(lean_object* v_s_354_){
_start:
{
lean_object* v___x_355_; uint64_t v___x_356_; uint64_t v___x_357_; 
v___x_355_ = lean_string_utf8_byte_size(v_s_354_);
v___x_356_ = 0ULL;
v___x_357_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg(v_s_354_, v___x_355_, v___x_355_, v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofHex___boxed(lean_object* v_s_358_){
_start:
{
uint64_t v_res_359_; lean_object* v_r_360_; 
v_res_359_ = l_Lake_Hash_ofHex(v_s_358_);
lean_dec_ref(v_s_358_);
v_r_360_ = lean_box_uint64(v_res_359_);
return v_r_360_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0(lean_object* v_s_361_, lean_object* v_n_362_, lean_object* v_j_363_, lean_object* v_a_364_, uint64_t v_a_365_){
_start:
{
uint64_t v___x_366_; 
v___x_366_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg(v_s_361_, v_n_362_, v_j_363_, v_a_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___boxed(lean_object* v_s_367_, lean_object* v_n_368_, lean_object* v_j_369_, lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
uint64_t v_a_316__boxed_372_; uint64_t v_res_373_; lean_object* v_r_374_; 
v_a_316__boxed_372_ = lean_unbox_uint64(v_a_371_);
lean_dec_ref(v_a_371_);
v_res_373_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0(v_s_367_, v_n_368_, v_j_369_, v_a_370_, v_a_316__boxed_372_);
lean_dec(v_n_368_);
lean_dec_ref(v_s_367_);
v_r_374_ = lean_box_uint64(v_res_373_);
return v_r_374_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofHex_x3f(lean_object* v_s_375_){
_start:
{
uint8_t v___y_377_; lean_object* v___x_382_; lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_382_ = lean_string_utf8_byte_size(v_s_375_);
v___x_383_ = lean_unsigned_to_nat(16u);
v___x_384_ = lean_nat_dec_eq(v___x_382_, v___x_383_);
if (v___x_384_ == 0)
{
v___y_377_ = v___x_384_;
goto v___jp_376_;
}
else
{
uint8_t v___x_385_; 
v___x_385_ = l_Lake_isHex(v_s_375_);
v___y_377_ = v___x_385_;
goto v___jp_376_;
}
v___jp_376_:
{
if (v___y_377_ == 0)
{
lean_object* v___x_378_; 
v___x_378_ = lean_box(0);
return v___x_378_;
}
else
{
uint64_t v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_379_ = l_Lake_Hash_ofHex(v_s_375_);
v___x_380_ = lean_box_uint64(v___x_379_);
v___x_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofHex_x3f___boxed(lean_object* v_s_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lake_Hash_ofHex_x3f(v_s_386_);
lean_dec_ref(v_s_386_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_hex(uint64_t v_self_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lake_lowerHexUInt64(v_self_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_hex___boxed(lean_object* v_self_390_){
_start:
{
uint64_t v_self_boxed_391_; lean_object* v_res_392_; 
v_self_boxed_391_ = lean_unbox_uint64(v_self_390_);
lean_dec_ref(v_self_390_);
v_res_392_ = l_Lake_Hash_hex(v_self_boxed_391_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofDecimal_x3f(lean_object* v_s_393_){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lean_string_utf8_byte_size(v_s_393_);
v___x_396_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_396_, 0, v_s_393_);
lean_ctor_set(v___x_396_, 1, v___x_394_);
lean_ctor_set(v___x_396_, 2, v___x_395_);
v___x_397_ = l_String_Slice_toNat_x3f(v___x_396_);
lean_dec_ref(v___x_396_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v___x_398_; 
v___x_398_ = lean_box(0);
return v___x_398_;
}
else
{
lean_object* v_val_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_408_; 
v_val_399_ = lean_ctor_get(v___x_397_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_408_ == 0)
{
v___x_401_ = v___x_397_;
v_isShared_402_ = v_isSharedCheck_408_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_val_399_);
lean_dec(v___x_397_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_408_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
uint64_t v___x_403_; lean_object* v___x_404_; lean_object* v___x_406_; 
v___x_403_ = lean_uint64_of_nat(v_val_399_);
lean_dec(v_val_399_);
v___x_404_ = lean_box_uint64(v___x_403_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 0, v___x_404_);
v___x_406_ = v___x_401_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_404_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofString_x3f(lean_object* v_s_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_Lake_Hash_ofHex_x3f(v_s_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofString_x3f___boxed(lean_object* v_s_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Lake_Hash_ofString_x3f(v_s_411_);
lean_dec_ref(v_s_411_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_load_x3f(lean_object* v_hashFile_413_){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = l_IO_FS_readFile(v_hashFile_413_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___x_417_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_a_416_);
lean_dec_ref(v___x_415_);
v___x_417_ = l_Lake_Hash_ofHex_x3f(v_a_416_);
lean_dec(v_a_416_);
return v___x_417_;
}
else
{
lean_object* v___x_418_; 
lean_dec_ref(v___x_415_);
v___x_418_ = lean_box(0);
return v___x_418_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_load_x3f___boxed(lean_object* v_hashFile_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lake_Hash_load_x3f(v_hashFile_419_);
lean_dec_ref(v_hashFile_419_);
return v_res_421_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_mix(uint64_t v_h1_422_, uint64_t v_h2_423_){
_start:
{
uint64_t v___x_424_; 
v___x_424_ = lean_uint64_mix_hash(v_h1_422_, v_h2_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_mix___boxed(lean_object* v_h1_425_, lean_object* v_h2_426_){
_start:
{
uint64_t v_h1_boxed_427_; uint64_t v_h2_boxed_428_; uint64_t v_res_429_; lean_object* v_r_430_; 
v_h1_boxed_427_ = lean_unbox_uint64(v_h1_425_);
lean_dec_ref(v_h1_425_);
v_h2_boxed_428_ = lean_unbox_uint64(v_h2_426_);
lean_dec_ref(v_h2_426_);
v_res_429_ = l_Lake_Hash_mix(v_h1_boxed_427_, v_h2_boxed_428_);
v_r_430_ = lean_box_uint64(v_res_429_);
return v_r_430_;
}
}
static lean_object* _init_l_Lake_Hash_instMixTrace___closed__0(void){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = lean_alloc_closure((void*)(l_Lake_Hash_mix___boxed), 2, 0);
return v___x_431_;
}
}
static lean_object* _init_l_Lake_Hash_instMixTrace(void){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = lean_obj_once(&l_Lake_Hash_instMixTrace___closed__0, &l_Lake_Hash_instMixTrace___closed__0_once, _init_l_Lake_Hash_instMixTrace___closed__0);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_toString(uint64_t v_self_433_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l_Lake_lowerHexUInt64(v_self_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_toString___boxed(lean_object* v_self_435_){
_start:
{
uint64_t v_self_boxed_436_; lean_object* v_res_437_; 
v_self_boxed_436_ = lean_unbox_uint64(v_self_435_);
lean_dec_ref(v_self_435_);
v_res_437_ = l_Lake_Hash_toString(v_self_boxed_436_);
return v_res_437_;
}
}
static lean_object* _init_l_Lake_Hash_instToString___closed__0(void){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = lean_alloc_closure((void*)(l_Lake_Hash_toString___boxed), 1, 0);
return v___x_438_;
}
}
static lean_object* _init_l_Lake_Hash_instToString(void){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = lean_obj_once(&l_Lake_Hash_instToString___closed__0, &l_Lake_Hash_instToString___closed__0_once, _init_l_Lake_Hash_instToString___closed__0);
return v___x_439_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofHashable___redArg(lean_object* v_inst_440_, lean_object* v_a_441_){
_start:
{
uint64_t v___x_442_; lean_object* v___x_443_; uint64_t v___x_444_; uint64_t v___x_445_; 
v___x_442_ = 1723ULL;
v___x_443_ = lean_apply_1(v_inst_440_, v_a_441_);
v___x_444_ = lean_unbox_uint64(v___x_443_);
lean_dec_ref(v___x_443_);
v___x_445_ = lean_uint64_mix_hash(v___x_442_, v___x_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofHashable___redArg___boxed(lean_object* v_inst_446_, lean_object* v_a_447_){
_start:
{
uint64_t v_res_448_; lean_object* v_r_449_; 
v_res_448_ = l_Lake_Hash_ofHashable___redArg(v_inst_446_, v_a_447_);
v_r_449_ = lean_box_uint64(v_res_448_);
return v_r_449_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofHashable(lean_object* v_00_u03b1_450_, lean_object* v_inst_451_, lean_object* v_a_452_){
_start:
{
uint64_t v___x_453_; lean_object* v___x_454_; uint64_t v___x_455_; uint64_t v___x_456_; 
v___x_453_ = 1723ULL;
v___x_454_ = lean_apply_1(v_inst_451_, v_a_452_);
v___x_455_ = lean_unbox_uint64(v___x_454_);
lean_dec_ref(v___x_454_);
v___x_456_ = lean_uint64_mix_hash(v___x_453_, v___x_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofHashable___boxed(lean_object* v_00_u03b1_457_, lean_object* v_inst_458_, lean_object* v_a_459_){
_start:
{
uint64_t v_res_460_; lean_object* v_r_461_; 
v_res_460_ = l_Lake_Hash_ofHashable(v_00_u03b1_457_, v_inst_458_, v_a_459_);
v_r_461_ = lean_box_uint64(v_res_460_);
return v_r_461_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofString(lean_object* v_str_462_){
_start:
{
uint64_t v___x_463_; uint64_t v___x_464_; uint64_t v___x_465_; 
v___x_463_ = 1723ULL;
v___x_464_ = lean_string_hash(v_str_462_);
v___x_465_ = lean_uint64_mix_hash(v___x_463_, v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofString___boxed(lean_object* v_str_466_){
_start:
{
uint64_t v_res_467_; lean_object* v_r_468_; 
v_res_467_ = l_Lake_Hash_ofString(v_str_466_);
lean_dec_ref(v_str_466_);
v_r_468_ = lean_box_uint64(v_res_467_);
return v_r_468_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofText(lean_object* v_str_469_){
_start:
{
lean_object* v___x_470_; uint64_t v___x_471_; uint64_t v___x_472_; uint64_t v___x_473_; 
v___x_470_ = l_String_crlfToLf(v_str_469_);
v___x_471_ = 1723ULL;
v___x_472_ = lean_string_hash(v___x_470_);
lean_dec_ref(v___x_470_);
v___x_473_ = lean_uint64_mix_hash(v___x_471_, v___x_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofText___boxed(lean_object* v_str_474_){
_start:
{
uint64_t v_res_475_; lean_object* v_r_476_; 
v_res_475_ = l_Lake_Hash_ofText(v_str_474_);
lean_dec_ref(v_str_474_);
v_r_476_ = lean_box_uint64(v_res_475_);
return v_r_476_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofByteArray(lean_object* v_bytes_477_){
_start:
{
uint64_t v___x_478_; uint64_t v___x_479_; uint64_t v___x_480_; 
v___x_478_ = 1723ULL;
v___x_479_ = lean_byte_array_hash(v_bytes_477_);
v___x_480_ = lean_uint64_mix_hash(v___x_478_, v___x_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofByteArray___boxed(lean_object* v_bytes_481_){
_start:
{
uint64_t v_res_482_; lean_object* v_r_483_; 
v_res_482_ = l_Lake_Hash_ofByteArray(v_bytes_481_);
lean_dec_ref(v_bytes_481_);
v_r_483_ = lean_box_uint64(v_res_482_);
return v_r_483_;
}
}
static uint64_t _init_l_Lake_Hash_ofBool___closed__0(void){
_start:
{
uint64_t v___x_484_; uint64_t v___x_485_; uint64_t v___x_486_; 
v___x_484_ = 13ULL;
v___x_485_ = 1723ULL;
v___x_486_ = lean_uint64_mix_hash(v___x_485_, v___x_484_);
return v___x_486_;
}
}
static uint64_t _init_l_Lake_Hash_ofBool___closed__1(void){
_start:
{
uint64_t v___x_487_; uint64_t v___x_488_; uint64_t v___x_489_; 
v___x_487_ = 11ULL;
v___x_488_ = 1723ULL;
v___x_489_ = lean_uint64_mix_hash(v___x_488_, v___x_487_);
return v___x_489_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofBool(uint8_t v_b_490_){
_start:
{
if (v_b_490_ == 0)
{
uint64_t v___x_491_; 
v___x_491_ = lean_uint64_once(&l_Lake_Hash_ofBool___closed__0, &l_Lake_Hash_ofBool___closed__0_once, _init_l_Lake_Hash_ofBool___closed__0);
return v___x_491_;
}
else
{
uint64_t v___x_492_; 
v___x_492_ = lean_uint64_once(&l_Lake_Hash_ofBool___closed__1, &l_Lake_Hash_ofBool___closed__1_once, _init_l_Lake_Hash_ofBool___closed__1);
return v___x_492_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofBool___boxed(lean_object* v_b_493_){
_start:
{
uint8_t v_b_boxed_494_; uint64_t v_res_495_; lean_object* v_r_496_; 
v_b_boxed_494_ = lean_unbox(v_b_493_);
v_res_495_ = l_Lake_Hash_ofBool(v_b_boxed_494_);
v_r_496_ = lean_box_uint64(v_res_495_);
return v_r_496_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_toJson(uint64_t v_self_497_){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = l_Lake_lowerHexUInt64(v_self_497_);
v___x_499_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_toJson___boxed(lean_object* v_self_500_){
_start:
{
uint64_t v_self_boxed_501_; lean_object* v_res_502_; 
v_self_boxed_501_ = lean_unbox_uint64(v_self_500_);
lean_dec_ref(v_self_500_);
v_res_502_ = l_Lake_Hash_toJson(v_self_boxed_501_);
return v_res_502_;
}
}
static lean_object* _init_l_Lake_Hash_instToJson___closed__0(void){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = lean_alloc_closure((void*)(l_Lake_Hash_toJson___boxed), 1, 0);
return v___x_503_;
}
}
static lean_object* _init_l_Lake_Hash_instToJson(void){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = lean_obj_once(&l_Lake_Hash_instToJson___closed__0, &l_Lake_Hash_instToJson___closed__0_once, _init_l_Lake_Hash_instToJson___closed__0);
return v___x_504_;
}
}
static lean_object* _init_l_Lake_Hash_fromJson_x3f___closed__0(void){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = lean_mk_string_unchecked("invalid hash: expected hexadecimal string", 41, 41);
return v___x_505_;
}
}
static lean_object* _init_l_Lake_Hash_fromJson_x3f___closed__1(void){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = lean_obj_once(&l_Lake_Hash_fromJson_x3f___closed__0, &l_Lake_Hash_fromJson_x3f___closed__0_once, _init_l_Lake_Hash_fromJson_x3f___closed__0);
v___x_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_507_, 0, v___x_506_);
return v___x_507_;
}
}
static lean_object* _init_l_Lake_Hash_fromJson_x3f___closed__2(void){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = lean_mk_string_unchecked("invalid hash: expected hexadecimal string of length 16", 54, 54);
return v___x_508_;
}
}
static lean_object* _init_l_Lake_Hash_fromJson_x3f___closed__3(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = lean_obj_once(&l_Lake_Hash_fromJson_x3f___closed__2, &l_Lake_Hash_fromJson_x3f___closed__2_once, _init_l_Lake_Hash_fromJson_x3f___closed__2);
v___x_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
return v___x_510_;
}
}
static lean_object* _init_l_Lake_Hash_fromJson_x3f___closed__4(void){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = lean_mk_string_unchecked("invalid hash: ", 14, 14);
return v___x_511_;
}
}
static lean_object* _init_l_Lake_Hash_fromJson_x3f___closed__5(void){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = lean_mk_string_unchecked("invalid hash: expected string or number", 39, 39);
return v___x_512_;
}
}
static lean_object* _init_l_Lake_Hash_fromJson_x3f___closed__6(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_obj_once(&l_Lake_Hash_fromJson_x3f___closed__5, &l_Lake_Hash_fromJson_x3f___closed__5_once, _init_l_Lake_Hash_fromJson_x3f___closed__5);
v___x_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_fromJson_x3f(lean_object* v_json_515_){
_start:
{
switch(lean_obj_tag(v_json_515_))
{
case 3:
{
lean_object* v_s_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_531_; 
v_s_516_ = lean_ctor_get(v_json_515_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v_json_515_);
if (v_isSharedCheck_531_ == 0)
{
v___x_518_ = v_json_515_;
v_isShared_519_ = v_isSharedCheck_531_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_s_516_);
lean_dec(v_json_515_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_531_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
uint8_t v___x_520_; 
v___x_520_ = l_Lake_isHex(v_s_516_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; 
lean_del_object(v___x_518_);
lean_dec_ref(v_s_516_);
v___x_521_ = lean_obj_once(&l_Lake_Hash_fromJson_x3f___closed__1, &l_Lake_Hash_fromJson_x3f___closed__1_once, _init_l_Lake_Hash_fromJson_x3f___closed__1);
return v___x_521_;
}
else
{
lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_522_ = lean_string_utf8_byte_size(v_s_516_);
v___x_523_ = lean_unsigned_to_nat(16u);
v___x_524_ = lean_nat_dec_eq(v___x_522_, v___x_523_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; 
lean_del_object(v___x_518_);
lean_dec_ref(v_s_516_);
v___x_525_ = lean_obj_once(&l_Lake_Hash_fromJson_x3f___closed__3, &l_Lake_Hash_fromJson_x3f___closed__3_once, _init_l_Lake_Hash_fromJson_x3f___closed__3);
return v___x_525_;
}
else
{
uint64_t v___x_526_; lean_object* v___x_527_; lean_object* v___x_529_; 
v___x_526_ = l_Lake_Hash_ofHex(v_s_516_);
lean_dec_ref(v_s_516_);
v___x_527_ = lean_box_uint64(v___x_526_);
if (v_isShared_519_ == 0)
{
lean_ctor_set_tag(v___x_518_, 1);
lean_ctor_set(v___x_518_, 0, v___x_527_);
v___x_529_ = v___x_518_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_527_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
}
case 2:
{
lean_object* v_n_532_; lean_object* v___x_533_; 
v_n_532_ = lean_ctor_get(v_json_515_, 0);
lean_inc_ref(v_n_532_);
lean_dec_ref(v_json_515_);
v___x_533_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_532_);
lean_dec_ref(v_n_532_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_543_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_543_ == 0)
{
v___x_536_ = v___x_533_;
v_isShared_537_ = v_isSharedCheck_543_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_533_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_543_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_541_; 
v___x_538_ = lean_obj_once(&l_Lake_Hash_fromJson_x3f___closed__4, &l_Lake_Hash_fromJson_x3f___closed__4_once, _init_l_Lake_Hash_fromJson_x3f___closed__4);
v___x_539_ = lean_string_append(v___x_538_, v_a_534_);
lean_dec(v_a_534_);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 0, v___x_539_);
v___x_541_ = v___x_536_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v___x_539_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
else
{
return v___x_533_;
}
}
default: 
{
lean_object* v___x_544_; 
lean_dec(v_json_515_);
v___x_544_ = lean_obj_once(&l_Lake_Hash_fromJson_x3f___closed__6, &l_Lake_Hash_fromJson_x3f___closed__6_once, _init_l_Lake_Hash_fromJson_x3f___closed__6);
return v___x_544_;
}
}
}
}
static lean_object* _init_l_Lake_Hash_instFromJson___closed__0(void){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = lean_alloc_closure((void*)(l_Lake_Hash_fromJson_x3f), 1, 0);
return v___x_545_;
}
}
static lean_object* _init_l_Lake_Hash_instFromJson(void){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = lean_obj_once(&l_Lake_Hash_instFromJson___closed__0, &l_Lake_Hash_instFromJson___closed__0_once, _init_l_Lake_Hash_instFromJson___closed__0);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___redArg(lean_object* v_inst_547_){
_start:
{
lean_inc(v_inst_547_);
return v_inst_547_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___redArg___boxed(lean_object* v_inst_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Lake_instComputeTraceHashOfComputeHash___redArg(v_inst_548_);
lean_dec(v_inst_548_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash(lean_object* v_00_u03b1_550_, lean_object* v_m_551_, lean_object* v_inst_552_){
_start:
{
lean_inc(v_inst_552_);
return v_inst_552_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___boxed(lean_object* v_00_u03b1_553_, lean_object* v_m_554_, lean_object* v_inst_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lake_instComputeTraceHashOfComputeHash(v_00_u03b1_553_, v_m_554_, v_inst_555_);
lean_dec(v_inst_555_);
return v_res_556_;
}
}
LEAN_EXPORT uint64_t l_Lake_pureHash___redArg(lean_object* v_inst_557_, lean_object* v_a_558_){
_start:
{
lean_object* v___x_559_; uint64_t v___x_560_; 
v___x_559_ = lean_apply_1(v_inst_557_, v_a_558_);
v___x_560_ = lean_unbox_uint64(v___x_559_);
lean_dec_ref(v___x_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lake_pureHash___redArg___boxed(lean_object* v_inst_561_, lean_object* v_a_562_){
_start:
{
uint64_t v_res_563_; lean_object* v_r_564_; 
v_res_563_ = l_Lake_pureHash___redArg(v_inst_561_, v_a_562_);
v_r_564_ = lean_box_uint64(v_res_563_);
return v_r_564_;
}
}
LEAN_EXPORT uint64_t l_Lake_pureHash(lean_object* v_00_u03b1_565_, lean_object* v_inst_566_, lean_object* v_a_567_){
_start:
{
lean_object* v___x_568_; uint64_t v___x_569_; 
v___x_568_ = lean_apply_1(v_inst_566_, v_a_567_);
v___x_569_ = lean_unbox_uint64(v___x_568_);
lean_dec_ref(v___x_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lake_pureHash___boxed(lean_object* v_00_u03b1_570_, lean_object* v_inst_571_, lean_object* v_a_572_){
_start:
{
uint64_t v_res_573_; lean_object* v_r_574_; 
v_res_573_ = l_Lake_pureHash(v_00_u03b1_570_, v_inst_571_, v_a_572_);
v_r_574_ = lean_box_uint64(v_res_573_);
return v_r_574_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeHash___redArg(lean_object* v_inst_575_, lean_object* v_inst_576_, lean_object* v_a_577_){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_578_ = lean_apply_1(v_inst_575_, v_a_577_);
v___x_579_ = lean_apply_2(v_inst_576_, lean_box(0), v___x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeHash(lean_object* v_00_u03b1_580_, lean_object* v_m_581_, lean_object* v_n_582_, lean_object* v_inst_583_, lean_object* v_inst_584_, lean_object* v_a_585_){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_apply_1(v_inst_583_, v_a_585_);
v___x_587_ = lean_apply_2(v_inst_584_, lean_box(0), v___x_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashIdOfHashable___redArg(lean_object* v_inst_588_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = lean_alloc_closure((void*)(l_Lake_Hash_ofHashable___boxed), 3, 2);
lean_closure_set(v___x_589_, 0, lean_box(0));
lean_closure_set(v___x_589_, 1, v_inst_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashIdOfHashable(lean_object* v_00_u03b1_590_, lean_object* v_inst_591_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = lean_alloc_closure((void*)(l_Lake_Hash_ofHashable___boxed), 3, 2);
lean_closure_set(v___x_592_, 0, lean_box(0));
lean_closure_set(v___x_592_, 1, v_inst_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeBinFileHash(lean_object* v_file_593_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_IO_FS_readBinFile(v_file_593_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_607_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_607_ == 0)
{
v___x_598_ = v___x_595_;
v_isShared_599_ = v_isSharedCheck_607_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_595_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_607_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
uint64_t v___x_600_; uint64_t v___x_601_; uint64_t v___x_602_; lean_object* v___x_603_; lean_object* v___x_605_; 
v___x_600_ = 1723ULL;
v___x_601_ = lean_byte_array_hash(v_a_596_);
lean_dec(v_a_596_);
v___x_602_ = lean_uint64_mix_hash(v___x_600_, v___x_601_);
v___x_603_ = lean_box_uint64(v___x_602_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v___x_603_);
v___x_605_ = v___x_598_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_603_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
else
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_615_; 
v_a_608_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_615_ == 0)
{
v___x_610_ = v___x_595_;
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_595_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_a_608_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeBinFileHash___boxed(lean_object* v_file_616_, lean_object* v_a_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lake_computeBinFileHash(v_file_616_);
lean_dec_ref(v_file_616_);
return v_res_618_;
}
}
static lean_object* _init_l_Lake_instComputeHashFilePathIO___closed__0(void){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = lean_alloc_closure((void*)(l_Lake_computeBinFileHash___boxed), 2, 0);
return v___x_619_;
}
}
static lean_object* _init_l_Lake_instComputeHashFilePathIO(void){
_start:
{
lean_object* v___x_620_; 
v___x_620_ = lean_obj_once(&l_Lake_instComputeHashFilePathIO___closed__0, &l_Lake_instComputeHashFilePathIO___closed__0_once, _init_l_Lake_instComputeHashFilePathIO___closed__0);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeTextFileHash(lean_object* v_file_621_){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = l_IO_FS_readFile(v_file_621_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_636_; 
v_a_624_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_636_ == 0)
{
v___x_626_ = v___x_623_;
v_isShared_627_ = v_isSharedCheck_636_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_623_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_636_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; uint64_t v___x_629_; uint64_t v___x_630_; uint64_t v___x_631_; lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_628_ = l_String_crlfToLf(v_a_624_);
lean_dec(v_a_624_);
v___x_629_ = 1723ULL;
v___x_630_ = lean_string_hash(v___x_628_);
lean_dec_ref(v___x_628_);
v___x_631_ = lean_uint64_mix_hash(v___x_629_, v___x_630_);
v___x_632_ = lean_box_uint64(v___x_631_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 0, v___x_632_);
v___x_634_ = v___x_626_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v___x_632_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
else
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
v_a_637_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_623_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_623_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeTextFileHash___boxed(lean_object* v_file_645_, lean_object* v_a_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lake_computeTextFileHash(v_file_645_);
lean_dec_ref(v_file_645_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath___lam__0(lean_object* v_x_648_){
_start:
{
lean_inc_ref(v_x_648_);
return v_x_648_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath___lam__0___boxed(lean_object* v_x_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lake_instCoeTextFilePathFilePath___lam__0(v_x_649_);
lean_dec_ref(v_x_649_);
return v_res_650_;
}
}
static lean_object* _init_l_Lake_instCoeTextFilePathFilePath___closed__0(void){
_start:
{
lean_object* v___f_651_; 
v___f_651_ = lean_alloc_closure((void*)(l_Lake_instCoeTextFilePathFilePath___lam__0___boxed), 1, 0);
return v___f_651_;
}
}
static lean_object* _init_l_Lake_instCoeTextFilePathFilePath(void){
_start:
{
lean_object* v___f_652_; 
v___f_652_ = lean_obj_once(&l_Lake_instCoeTextFilePathFilePath___closed__0, &l_Lake_instCoeTextFilePathFilePath___closed__0_once, _init_l_Lake_instCoeTextFilePathFilePath___closed__0);
return v___f_652_;
}
}
static lean_object* _init_l_Lake_instComputeHashTextFilePathIO___closed__0(void){
_start:
{
lean_object* v___f_653_; 
v___f_653_ = lean_alloc_closure((void*)(l_Lake_computeTextFileHash___boxed), 2, 0);
return v___f_653_;
}
}
static lean_object* _init_l_Lake_instComputeHashTextFilePathIO(void){
_start:
{
lean_object* v___f_654_; 
v___f_654_ = lean_obj_once(&l_Lake_instComputeHashTextFilePathIO___closed__0, &l_Lake_instComputeHashTextFilePathIO___closed__0_once, _init_l_Lake_instComputeHashTextFilePathIO___closed__0);
return v___f_654_;
}
}
static lean_object* _init_l_Lake_instToStringTextFilePath(void){
_start:
{
lean_object* v___f_655_; 
v___f_655_ = lean_obj_once(&l_Lake_instCoeTextFilePathFilePath___closed__0, &l_Lake_instCoeTextFilePathFilePath___closed__0_once, _init_l_Lake_instCoeTextFilePathFilePath___closed__0);
return v___f_655_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeFileHash(lean_object* v_file_656_, uint8_t v_text_657_){
_start:
{
if (v_text_657_ == 0)
{
lean_object* v___x_659_; 
v___x_659_ = l_Lake_computeBinFileHash(v_file_656_);
return v___x_659_;
}
else
{
lean_object* v___x_660_; 
v___x_660_ = l_Lake_computeTextFileHash(v_file_656_);
return v___x_660_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeFileHash___boxed(lean_object* v_file_661_, lean_object* v_text_662_, lean_object* v_a_663_){
_start:
{
uint8_t v_text_boxed_664_; lean_object* v_res_665_; 
v_text_boxed_664_ = lean_unbox(v_text_662_);
v_res_665_ = l_Lake_computeFileHash(v_file_661_, v_text_boxed_664_);
lean_dec_ref(v_file_661_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__0(uint64_t v_ts_666_, lean_object* v_toPure_667_, uint64_t v_____do__lift_668_){
_start:
{
uint64_t v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_669_ = lean_uint64_mix_hash(v_ts_666_, v_____do__lift_668_);
v___x_670_ = lean_box_uint64(v___x_669_);
v___x_671_ = lean_apply_2(v_toPure_667_, lean_box(0), v___x_670_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__0___boxed(lean_object* v_ts_672_, lean_object* v_toPure_673_, lean_object* v_____do__lift_674_){
_start:
{
uint64_t v_ts_boxed_675_; uint64_t v_____do__lift_97__boxed_676_; lean_object* v_res_677_; 
v_ts_boxed_675_ = lean_unbox_uint64(v_ts_672_);
lean_dec_ref(v_ts_672_);
v_____do__lift_97__boxed_676_ = lean_unbox_uint64(v_____do__lift_674_);
lean_dec_ref(v_____do__lift_674_);
v_res_677_ = l_Lake_computeArrayHash___redArg___lam__0(v_ts_boxed_675_, v_toPure_673_, v_____do__lift_97__boxed_676_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__1(lean_object* v_toPure_678_, lean_object* v_inst_679_, lean_object* v_toBind_680_, uint64_t v_ts_681_, lean_object* v_t_682_){
_start:
{
lean_object* v___x_683_; lean_object* v___f_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_683_ = lean_box_uint64(v_ts_681_);
v___f_684_ = lean_alloc_closure((void*)(l_Lake_computeArrayHash___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_684_, 0, v___x_683_);
lean_closure_set(v___f_684_, 1, v_toPure_678_);
v___x_685_ = lean_apply_1(v_inst_679_, v_t_682_);
v___x_686_ = lean_apply_4(v_toBind_680_, lean_box(0), lean_box(0), v___x_685_, v___f_684_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__1___boxed(lean_object* v_toPure_687_, lean_object* v_inst_688_, lean_object* v_toBind_689_, lean_object* v_ts_690_, lean_object* v_t_691_){
_start:
{
uint64_t v_ts_boxed_692_; lean_object* v_res_693_; 
v_ts_boxed_692_ = lean_unbox_uint64(v_ts_690_);
lean_dec_ref(v_ts_690_);
v_res_693_ = l_Lake_computeArrayHash___redArg___lam__1(v_toPure_687_, v_inst_688_, v_toBind_689_, v_ts_boxed_692_, v_t_691_);
return v_res_693_;
}
}
static lean_object* _init_l_Lake_computeArrayHash___redArg___boxed__const__1(void){
_start:
{
uint64_t v___x_694_; lean_object* v___x_695_; 
v___x_694_ = 1723ULL;
v___x_695_ = lean_box_uint64(v___x_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg(lean_object* v_inst_696_, lean_object* v_inst_697_, lean_object* v_as_698_){
_start:
{
lean_object* v_toApplicative_699_; lean_object* v_toBind_700_; lean_object* v_toPure_701_; lean_object* v___x_702_; lean_object* v___x_703_; uint8_t v___x_704_; 
v_toApplicative_699_ = lean_ctor_get(v_inst_697_, 0);
v_toBind_700_ = lean_ctor_get(v_inst_697_, 1);
v_toPure_701_ = lean_ctor_get(v_toApplicative_699_, 1);
v___x_702_ = lean_unsigned_to_nat(0u);
v___x_703_ = lean_array_get_size(v_as_698_);
v___x_704_ = lean_nat_dec_lt(v___x_702_, v___x_703_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; lean_object* v___x_706_; 
lean_inc(v_toPure_701_);
lean_dec_ref(v_as_698_);
lean_dec_ref(v_inst_697_);
lean_dec(v_inst_696_);
v___x_705_ = l_Lake_computeArrayHash___redArg___boxed__const__1;
v___x_706_ = lean_apply_2(v_toPure_701_, lean_box(0), v___x_705_);
return v___x_706_;
}
else
{
lean_object* v___f_707_; uint8_t v___x_708_; 
lean_inc(v_toBind_700_);
lean_inc(v_toPure_701_);
v___f_707_ = lean_alloc_closure((void*)(l_Lake_computeArrayHash___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_707_, 0, v_toPure_701_);
lean_closure_set(v___f_707_, 1, v_inst_696_);
lean_closure_set(v___f_707_, 2, v_toBind_700_);
v___x_708_ = lean_nat_dec_le(v___x_703_, v___x_703_);
if (v___x_708_ == 0)
{
if (v___x_704_ == 0)
{
lean_object* v___x_709_; lean_object* v___x_710_; 
lean_inc(v_toPure_701_);
lean_dec_ref(v___f_707_);
lean_dec_ref(v_as_698_);
lean_dec_ref(v_inst_697_);
v___x_709_ = l_Lake_computeArrayHash___redArg___boxed__const__1;
v___x_710_ = lean_apply_2(v_toPure_701_, lean_box(0), v___x_709_);
return v___x_710_;
}
else
{
size_t v___x_711_; size_t v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_711_ = ((size_t)0ULL);
v___x_712_ = lean_usize_of_nat(v___x_703_);
v___x_713_ = l_Lake_computeArrayHash___redArg___boxed__const__1;
v___x_714_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_697_, v___f_707_, v_as_698_, v___x_711_, v___x_712_, v___x_713_);
return v___x_714_;
}
}
else
{
size_t v___x_715_; size_t v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_715_ = ((size_t)0ULL);
v___x_716_ = lean_usize_of_nat(v___x_703_);
v___x_717_ = l_Lake_computeArrayHash___redArg___boxed__const__1;
v___x_718_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_697_, v___f_707_, v_as_698_, v___x_715_, v___x_716_, v___x_717_);
return v___x_718_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash(lean_object* v_00_u03b1_719_, lean_object* v_m_720_, lean_object* v_inst_721_, lean_object* v_inst_722_, lean_object* v_as_723_){
_start:
{
lean_object* v_toApplicative_724_; lean_object* v_toBind_725_; lean_object* v_toPure_726_; lean_object* v___x_727_; lean_object* v___x_728_; uint8_t v___x_729_; 
v_toApplicative_724_ = lean_ctor_get(v_inst_722_, 0);
v_toBind_725_ = lean_ctor_get(v_inst_722_, 1);
v_toPure_726_ = lean_ctor_get(v_toApplicative_724_, 1);
v___x_727_ = lean_unsigned_to_nat(0u);
v___x_728_ = lean_array_get_size(v_as_723_);
v___x_729_ = lean_nat_dec_lt(v___x_727_, v___x_728_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; lean_object* v___x_731_; 
lean_inc(v_toPure_726_);
lean_dec_ref(v_as_723_);
lean_dec_ref(v_inst_722_);
lean_dec(v_inst_721_);
v___x_730_ = l_Lake_computeArrayHash___redArg___boxed__const__1;
v___x_731_ = lean_apply_2(v_toPure_726_, lean_box(0), v___x_730_);
return v___x_731_;
}
else
{
lean_object* v___f_732_; uint8_t v___x_733_; 
lean_inc(v_toBind_725_);
lean_inc(v_toPure_726_);
v___f_732_ = lean_alloc_closure((void*)(l_Lake_computeArrayHash___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_732_, 0, v_toPure_726_);
lean_closure_set(v___f_732_, 1, v_inst_721_);
lean_closure_set(v___f_732_, 2, v_toBind_725_);
v___x_733_ = lean_nat_dec_le(v___x_728_, v___x_728_);
if (v___x_733_ == 0)
{
if (v___x_729_ == 0)
{
lean_object* v___x_734_; lean_object* v___x_735_; 
lean_inc(v_toPure_726_);
lean_dec_ref(v___f_732_);
lean_dec_ref(v_as_723_);
lean_dec_ref(v_inst_722_);
v___x_734_ = l_Lake_computeArrayHash___redArg___boxed__const__1;
v___x_735_ = lean_apply_2(v_toPure_726_, lean_box(0), v___x_734_);
return v___x_735_;
}
else
{
size_t v___x_736_; size_t v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_736_ = ((size_t)0ULL);
v___x_737_ = lean_usize_of_nat(v___x_728_);
v___x_738_ = l_Lake_computeArrayHash___redArg___boxed__const__1;
v___x_739_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_722_, v___f_732_, v_as_723_, v___x_736_, v___x_737_, v___x_738_);
return v___x_739_;
}
}
else
{
size_t v___x_740_; size_t v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_740_ = ((size_t)0ULL);
v___x_741_ = lean_usize_of_nat(v___x_728_);
v___x_742_ = l_Lake_computeArrayHash___redArg___boxed__const__1;
v___x_743_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_722_, v___f_732_, v_as_723_, v___x_740_, v___x_741_, v___x_742_);
return v___x_743_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashArrayOfMonad___redArg(lean_object* v_inst_744_, lean_object* v_inst_745_){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = lean_alloc_closure((void*)(l_Lake_computeArrayHash), 5, 4);
lean_closure_set(v___x_746_, 0, lean_box(0));
lean_closure_set(v___x_746_, 1, lean_box(0));
lean_closure_set(v___x_746_, 2, v_inst_744_);
lean_closure_set(v___x_746_, 3, v_inst_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashArrayOfMonad(lean_object* v_00_u03b1_747_, lean_object* v_m_748_, lean_object* v_inst_749_, lean_object* v_inst_750_){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = lean_alloc_closure((void*)(l_Lake_computeArrayHash), 5, 4);
lean_closure_set(v___x_751_, 0, lean_box(0));
lean_closure_set(v___x_751_, 1, lean_box(0));
lean_closure_set(v___x_751_, 2, v_inst_749_);
lean_closure_set(v___x_751_, 3, v_inst_750_);
return v___x_751_;
}
}
static lean_object* _init_l_Lake_MTime_instOfNat___closed__0(void){
_start:
{
uint32_t v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_752_ = 0;
v___x_753_ = lean_obj_once(&l_Lake_Hash_ofJsonNumber_x3f___closed__5, &l_Lake_Hash_ofJsonNumber_x3f___closed__5_once, _init_l_Lake_Hash_ofJsonNumber_x3f___closed__5);
v___x_754_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_754_, 0, v___x_753_);
lean_ctor_set_uint32(v___x_754_, sizeof(void*)*1, v___x_752_);
return v___x_754_;
}
}
static lean_object* _init_l_Lake_MTime_instOfNat(void){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = lean_obj_once(&l_Lake_MTime_instOfNat___closed__0, &l_Lake_MTime_instOfNat___closed__0_once, _init_l_Lake_MTime_instOfNat___closed__0);
return v___x_755_;
}
}
LEAN_EXPORT uint8_t l_Lake_MTime_instBEq___aux__1(lean_object* v_x_756_, lean_object* v_x_757_){
_start:
{
uint8_t v___x_758_; 
v___x_758_ = l_IO_FS_instBEqSystemTime_beq(v_x_756_, v_x_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instBEq___aux__1___boxed(lean_object* v_x_759_, lean_object* v_x_760_){
_start:
{
uint8_t v_res_761_; lean_object* v_r_762_; 
v_res_761_ = l_Lake_MTime_instBEq___aux__1(v_x_759_, v_x_760_);
lean_dec_ref(v_x_760_);
lean_dec_ref(v_x_759_);
v_r_762_ = lean_box(v_res_761_);
return v_r_762_;
}
}
static lean_object* _init_l_Lake_MTime_instBEq___closed__0(void){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = lean_alloc_closure((void*)(l_Lake_MTime_instBEq___aux__1___boxed), 2, 0);
return v___x_763_;
}
}
static lean_object* _init_l_Lake_MTime_instBEq(void){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = lean_obj_once(&l_Lake_MTime_instBEq___closed__0, &l_Lake_MTime_instBEq___closed__0_once, _init_l_Lake_MTime_instBEq___closed__0);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr___aux__1___redArg(lean_object* v_x_765_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_IO_FS_instReprSystemTime_repr___redArg(v_x_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr___aux__1___redArg___boxed(lean_object* v_x_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Lake_MTime_instRepr___aux__1___redArg(v_x_767_);
lean_dec_ref(v_x_767_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr___aux__1(lean_object* v_x_769_, lean_object* v_prec_770_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_IO_FS_instReprSystemTime_repr___redArg(v_x_769_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr___aux__1___boxed(lean_object* v_x_772_, lean_object* v_prec_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lake_MTime_instRepr___aux__1(v_x_772_, v_prec_773_);
lean_dec(v_prec_773_);
lean_dec_ref(v_x_772_);
return v_res_774_;
}
}
static lean_object* _init_l_Lake_MTime_instRepr___closed__0(void){
_start:
{
lean_object* v___x_775_; 
v___x_775_ = lean_alloc_closure((void*)(l_Lake_MTime_instRepr___aux__1___boxed), 2, 0);
return v___x_775_;
}
}
static lean_object* _init_l_Lake_MTime_instRepr(void){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = lean_obj_once(&l_Lake_MTime_instRepr___closed__0, &l_Lake_MTime_instRepr___closed__0_once, _init_l_Lake_MTime_instRepr___closed__0);
return v___x_776_;
}
}
LEAN_EXPORT uint8_t l_Lake_MTime_instOrd___aux__1(lean_object* v_x_777_, lean_object* v_x_778_){
_start:
{
uint8_t v___x_779_; 
v___x_779_ = l_IO_FS_instOrdSystemTime_ord(v_x_777_, v_x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instOrd___aux__1___boxed(lean_object* v_x_780_, lean_object* v_x_781_){
_start:
{
uint8_t v_res_782_; lean_object* v_r_783_; 
v_res_782_ = l_Lake_MTime_instOrd___aux__1(v_x_780_, v_x_781_);
lean_dec_ref(v_x_781_);
lean_dec_ref(v_x_780_);
v_r_783_ = lean_box(v_res_782_);
return v_r_783_;
}
}
static lean_object* _init_l_Lake_MTime_instOrd___closed__0(void){
_start:
{
lean_object* v___x_784_; 
v___x_784_ = lean_alloc_closure((void*)(l_Lake_MTime_instOrd___aux__1___boxed), 2, 0);
return v___x_784_;
}
}
static lean_object* _init_l_Lake_MTime_instOrd(void){
_start:
{
lean_object* v___x_785_; 
v___x_785_ = lean_obj_once(&l_Lake_MTime_instOrd___closed__0, &l_Lake_MTime_instOrd___closed__0_once, _init_l_Lake_MTime_instOrd___closed__0);
return v___x_785_;
}
}
static lean_object* _init_l_Lake_MTime_instLT(void){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = lean_box(0);
return v___x_786_;
}
}
static lean_object* _init_l_Lake_MTime_instLE(void){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = lean_box(0);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMin___lam__0(lean_object* v_x_788_, lean_object* v_y_789_){
_start:
{
uint8_t v___x_790_; 
v___x_790_ = l_IO_FS_instOrdSystemTime_ord(v_x_788_, v_y_789_);
if (v___x_790_ == 2)
{
lean_inc_ref(v_y_789_);
return v_y_789_;
}
else
{
lean_inc_ref(v_x_788_);
return v_x_788_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMin___lam__0___boxed(lean_object* v_x_791_, lean_object* v_y_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l_Lake_MTime_instMin___lam__0(v_x_791_, v_y_792_);
lean_dec_ref(v_y_792_);
lean_dec_ref(v_x_791_);
return v_res_793_;
}
}
static lean_object* _init_l_Lake_MTime_instMin___closed__0(void){
_start:
{
lean_object* v___f_794_; 
v___f_794_ = lean_alloc_closure((void*)(l_Lake_MTime_instMin___lam__0___boxed), 2, 0);
return v___f_794_;
}
}
static lean_object* _init_l_Lake_MTime_instMin(void){
_start:
{
lean_object* v___f_795_; 
v___f_795_ = lean_obj_once(&l_Lake_MTime_instMin___closed__0, &l_Lake_MTime_instMin___closed__0_once, _init_l_Lake_MTime_instMin___closed__0);
return v___f_795_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMax___lam__0(lean_object* v_x_796_, lean_object* v_y_797_){
_start:
{
uint8_t v___x_798_; 
v___x_798_ = l_IO_FS_instOrdSystemTime_ord(v_x_796_, v_y_797_);
if (v___x_798_ == 2)
{
lean_inc_ref(v_x_796_);
return v_x_796_;
}
else
{
lean_inc_ref(v_y_797_);
return v_y_797_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMax___lam__0___boxed(lean_object* v_x_799_, lean_object* v_y_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lake_MTime_instMax___lam__0(v_x_799_, v_y_800_);
lean_dec_ref(v_y_800_);
lean_dec_ref(v_x_799_);
return v_res_801_;
}
}
static lean_object* _init_l_Lake_MTime_instMax___closed__0(void){
_start:
{
lean_object* v___f_802_; 
v___f_802_ = lean_alloc_closure((void*)(l_Lake_MTime_instMax___lam__0___boxed), 2, 0);
return v___f_802_;
}
}
static lean_object* _init_l_Lake_MTime_instMax(void){
_start:
{
lean_object* v___f_803_; 
v___f_803_ = lean_obj_once(&l_Lake_MTime_instMax___closed__0, &l_Lake_MTime_instMax___closed__0_once, _init_l_Lake_MTime_instMax___closed__0);
return v___f_803_;
}
}
static lean_object* _init_l_Lake_MTime_instNilTrace(void){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = lean_obj_once(&l_Lake_MTime_instOfNat___closed__0, &l_Lake_MTime_instOfNat___closed__0_once, _init_l_Lake_MTime_instOfNat___closed__0);
return v___x_804_;
}
}
static lean_object* _init_l_Lake_MTime_instMixTrace(void){
_start:
{
lean_object* v___f_805_; 
v___f_805_ = lean_obj_once(&l_Lake_MTime_instMax___closed__0, &l_Lake_MTime_instMax___closed__0_once, _init_l_Lake_MTime_instMax___closed__0);
return v___f_805_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___redArg(lean_object* v_inst_806_){
_start:
{
lean_inc_ref(v_inst_806_);
return v_inst_806_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___redArg___boxed(lean_object* v_inst_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___redArg(v_inst_807_);
lean_dec_ref(v_inst_807_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime(lean_object* v_00_u03b1_809_, lean_object* v_inst_810_){
_start:
{
lean_inc_ref(v_inst_810_);
return v_inst_810_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___boxed(lean_object* v_00_u03b1_811_, lean_object* v_inst_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime(v_00_u03b1_811_, v_inst_812_);
lean_dec_ref(v_inst_812_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Lake_getFileMTime(lean_object* v_file_814_){
_start:
{
lean_object* v___x_816_; 
v___x_816_ = lean_io_metadata(v_file_814_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v_a_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_825_; 
v_a_817_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_825_ == 0)
{
v___x_819_ = v___x_816_;
v_isShared_820_ = v_isSharedCheck_825_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_a_817_);
lean_dec(v___x_816_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_825_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v_modified_821_; lean_object* v___x_823_; 
v_modified_821_ = lean_ctor_get(v_a_817_, 1);
lean_inc_ref(v_modified_821_);
lean_dec(v_a_817_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v_modified_821_);
v___x_823_ = v___x_819_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_modified_821_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
else
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_833_; 
v_a_826_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_833_ == 0)
{
v___x_828_ = v___x_816_;
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_816_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_831_; 
if (v_isShared_829_ == 0)
{
v___x_831_ = v___x_828_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_a_826_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getFileMTime___boxed(lean_object* v_file_834_, lean_object* v_a_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_Lake_getFileMTime(v_file_834_);
lean_dec_ref(v_file_834_);
return v_res_836_;
}
}
static lean_object* _init_l_Lake_instGetMTimeFilePath___closed__0(void){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = lean_alloc_closure((void*)(l_Lake_getFileMTime___boxed), 2, 0);
return v___x_837_;
}
}
static lean_object* _init_l_Lake_instGetMTimeFilePath(void){
_start:
{
lean_object* v___x_838_; 
v___x_838_ = lean_obj_once(&l_Lake_instGetMTimeFilePath___closed__0, &l_Lake_instGetMTimeFilePath___closed__0_once, _init_l_Lake_instGetMTimeFilePath___closed__0);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath___lam__0(lean_object* v_x_839_){
_start:
{
lean_object* v___x_841_; 
v___x_841_ = lean_io_metadata(v_x_839_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_850_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_850_ == 0)
{
v___x_844_ = v___x_841_;
v_isShared_845_ = v_isSharedCheck_850_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_841_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_850_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v_modified_846_; lean_object* v___x_848_; 
v_modified_846_ = lean_ctor_get(v_a_842_, 1);
lean_inc_ref(v_modified_846_);
lean_dec(v_a_842_);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 0, v_modified_846_);
v___x_848_ = v___x_844_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_modified_846_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
else
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_858_; 
v_a_851_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_858_ == 0)
{
v___x_853_ = v___x_841_;
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_841_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_851_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath___lam__0___boxed(lean_object* v_x_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lake_instGetMTimeTextFilePath___lam__0(v_x_859_);
lean_dec_ref(v_x_859_);
return v_res_861_;
}
}
static lean_object* _init_l_Lake_instGetMTimeTextFilePath___closed__0(void){
_start:
{
lean_object* v___f_862_; 
v___f_862_ = lean_alloc_closure((void*)(l_Lake_instGetMTimeTextFilePath___lam__0___boxed), 2, 0);
return v___f_862_;
}
}
static lean_object* _init_l_Lake_instGetMTimeTextFilePath(void){
_start:
{
lean_object* v___f_863_; 
v___f_863_ = lean_obj_once(&l_Lake_instGetMTimeTextFilePath___closed__0, &l_Lake_instGetMTimeTextFilePath___closed__0_once, _init_l_Lake_instGetMTimeTextFilePath___closed__0);
return v___f_863_;
}
}
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___redArg(lean_object* v_inst_864_, lean_object* v_info_865_, lean_object* v_self_866_){
_start:
{
lean_object* v___x_868_; 
v___x_868_ = lean_apply_2(v_inst_864_, v_info_865_, lean_box(0));
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; uint8_t v___x_870_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_a_869_);
lean_dec_ref(v___x_868_);
v___x_870_ = l_IO_FS_instOrdSystemTime_ord(v_self_866_, v_a_869_);
lean_dec(v_a_869_);
if (v___x_870_ == 0)
{
uint8_t v___x_871_; 
v___x_871_ = 1;
return v___x_871_;
}
else
{
uint8_t v___x_872_; 
v___x_872_ = 0;
return v___x_872_;
}
}
else
{
uint8_t v___x_873_; 
lean_dec_ref(v___x_868_);
v___x_873_ = 0;
return v___x_873_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___redArg___boxed(lean_object* v_inst_874_, lean_object* v_info_875_, lean_object* v_self_876_, lean_object* v_a_877_){
_start:
{
uint8_t v_res_878_; lean_object* v_r_879_; 
v_res_878_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_874_, v_info_875_, v_self_876_);
lean_dec_ref(v_self_876_);
v_r_879_ = lean_box(v_res_878_);
return v_r_879_;
}
}
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate(lean_object* v_i_880_, lean_object* v_inst_881_, lean_object* v_info_882_, lean_object* v_self_883_){
_start:
{
uint8_t v___x_885_; 
v___x_885_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_881_, v_info_882_, v_self_883_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___boxed(lean_object* v_i_886_, lean_object* v_inst_887_, lean_object* v_info_888_, lean_object* v_self_889_, lean_object* v_a_890_){
_start:
{
uint8_t v_res_891_; lean_object* v_r_892_; 
v_res_891_ = l_Lake_MTime_checkUpToDate(v_i_886_, v_inst_887_, v_info_888_, v_self_889_);
lean_dec_ref(v_self_889_);
v_r_892_ = lean_box(v_res_891_);
return v_r_892_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__0(void){
_start:
{
lean_object* v___x_893_; 
v___x_893_ = lean_mk_string_unchecked("caption", 7, 7);
return v___x_893_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__1(void){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__0, &l_Lake_instReprBuildTrace_repr___redArg___closed__0_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__0);
v___x_895_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
return v___x_895_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_896_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__1, &l_Lake_instReprBuildTrace_repr___redArg___closed__1_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__1);
v___x_897_ = lean_box(0);
v___x_898_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
lean_ctor_set(v___x_898_, 1, v___x_896_);
return v___x_898_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_899_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__5, &l_Lake_instReprHash_repr___redArg___closed__5_once, _init_l_Lake_instReprHash_repr___redArg___closed__5);
v___x_900_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__2, &l_Lake_instReprBuildTrace_repr___redArg___closed__2_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__2);
v___x_901_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_900_);
lean_ctor_set(v___x_901_, 1, v___x_899_);
return v___x_901_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = lean_unsigned_to_nat(11u);
v___x_903_ = lean_nat_to_int(v___x_902_);
return v___x_903_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__1(void){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = lean_mk_string_unchecked(",", 1, 1);
return v___x_904_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__1, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__1_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__1);
v___x_906_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
return v___x_906_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = lean_mk_string_unchecked("inputs", 6, 6);
return v___x_907_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_908_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__5, &l_Lake_instReprBuildTrace_repr___redArg___closed__5_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__5);
v___x_909_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
return v___x_909_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = lean_unsigned_to_nat(10u);
v___x_911_ = lean_nat_to_int(v___x_910_);
return v___x_911_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_912_ = lean_box(1);
v___x_913_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2);
v___x_914_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_913_);
lean_ctor_set(v___x_914_, 1, v___x_912_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0_spec__1(lean_object* v_x_915_, lean_object* v_x_916_, lean_object* v_x_917_){
_start:
{
if (lean_obj_tag(v_x_917_) == 0)
{
lean_dec(v_x_915_);
return v_x_916_;
}
else
{
lean_object* v_head_918_; lean_object* v_tail_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_929_; 
v_head_918_ = lean_ctor_get(v_x_917_, 0);
v_tail_919_ = lean_ctor_get(v_x_917_, 1);
v_isSharedCheck_929_ = !lean_is_exclusive(v_x_917_);
if (v_isSharedCheck_929_ == 0)
{
v___x_921_ = v_x_917_;
v_isShared_922_ = v_isSharedCheck_929_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_tail_919_);
lean_inc(v_head_918_);
lean_dec(v_x_917_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_929_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_924_; 
lean_inc(v_x_915_);
if (v_isShared_922_ == 0)
{
lean_ctor_set_tag(v___x_921_, 5);
lean_ctor_set(v___x_921_, 1, v_x_915_);
lean_ctor_set(v___x_921_, 0, v_x_916_);
v___x_924_ = v___x_921_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_x_916_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_x_915_);
v___x_924_ = v_reuseFailAlloc_928_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_925_ = l_Lake_instReprBuildTrace_repr___redArg(v_head_918_);
v___x_926_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_926_, 0, v___x_924_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
v___x_927_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0_spec__1_spec__2(v_x_915_, v___x_926_, v_tail_919_);
return v___x_927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0(lean_object* v_x_930_, lean_object* v_x_931_){
_start:
{
if (lean_obj_tag(v_x_930_) == 0)
{
lean_object* v___x_932_; 
lean_dec(v_x_931_);
v___x_932_ = lean_box(0);
return v___x_932_;
}
else
{
lean_object* v_tail_933_; 
v_tail_933_ = lean_ctor_get(v_x_930_, 1);
if (lean_obj_tag(v_tail_933_) == 0)
{
lean_object* v_head_934_; lean_object* v___x_935_; 
lean_dec(v_x_931_);
v_head_934_ = lean_ctor_get(v_x_930_, 0);
lean_inc(v_head_934_);
lean_dec_ref(v_x_930_);
v___x_935_ = l_Lake_instReprBuildTrace_repr___redArg(v_head_934_);
return v___x_935_;
}
else
{
lean_object* v_head_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
lean_inc(v_tail_933_);
v_head_936_ = lean_ctor_get(v_x_930_, 0);
lean_inc(v_head_936_);
lean_dec_ref(v_x_930_);
v___x_937_ = l_Lake_instReprBuildTrace_repr___redArg(v_head_936_);
v___x_938_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0_spec__1(v_x_931_, v___x_937_, v_tail_933_);
return v___x_938_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0(void){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = lean_mk_string_unchecked("#[", 2, 2);
return v___x_939_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__5(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0);
v___x_941_ = lean_string_length(v___x_940_);
return v___x_941_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__6(void){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__5, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__5_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__5);
v___x_943_ = lean_nat_to_int(v___x_942_);
return v___x_943_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__7(void){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0);
v___x_945_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
return v___x_945_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__4(void){
_start:
{
lean_object* v___x_946_; 
v___x_946_ = lean_mk_string_unchecked("]", 1, 1);
return v___x_946_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__8(void){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_947_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__4, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__4_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__4);
v___x_948_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_948_, 0, v___x_947_);
return v___x_948_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__9(void){
_start:
{
lean_object* v___x_949_; 
v___x_949_ = lean_mk_string_unchecked("#[]", 3, 3);
return v___x_949_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__10(void){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__9, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__9_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__9);
v___x_951_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_951_, 0, v___x_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0(lean_object* v_xs_952_){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; uint8_t v___x_955_; 
v___x_953_ = lean_array_get_size(v_xs_952_);
v___x_954_ = lean_unsigned_to_nat(0u);
v___x_955_ = lean_nat_dec_eq(v___x_953_, v___x_954_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_956_ = lean_array_to_list(v_xs_952_);
v___x_957_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__3, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__3);
v___x_958_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0(v___x_956_, v___x_957_);
v___x_959_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__6, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__6);
v___x_960_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__7, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__7_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__7);
v___x_961_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
lean_ctor_set(v___x_961_, 1, v___x_958_);
v___x_962_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__8, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__8_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__8);
v___x_963_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_961_);
lean_ctor_set(v___x_963_, 1, v___x_962_);
v___x_964_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_959_);
lean_ctor_set(v___x_964_, 1, v___x_963_);
v___x_965_ = l_Std_Format_fill(v___x_964_);
return v___x_965_;
}
else
{
lean_object* v___x_966_; 
lean_dec_ref(v_xs_952_);
v___x_966_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__10, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__10_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__10);
return v___x_966_;
}
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_967_; 
v___x_967_ = lean_mk_string_unchecked("hash", 4, 4);
return v___x_967_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__8, &l_Lake_instReprBuildTrace_repr___redArg___closed__8_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__8);
v___x_969_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
return v___x_969_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_unsigned_to_nat(8u);
v___x_971_ = lean_nat_to_int(v___x_970_);
return v___x_971_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_972_; 
v___x_972_ = lean_mk_string_unchecked("mtime", 5, 5);
return v___x_972_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_973_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__11, &l_Lake_instReprBuildTrace_repr___redArg___closed__11_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__11);
v___x_974_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_974_, 0, v___x_973_);
return v___x_974_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = lean_unsigned_to_nat(9u);
v___x_976_ = lean_nat_to_int(v___x_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace_repr___redArg(lean_object* v_x_977_){
_start:
{
lean_object* v_caption_978_; lean_object* v_inputs_979_; uint64_t v_hash_980_; lean_object* v_mtime_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; uint8_t v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v_caption_978_ = lean_ctor_get(v_x_977_, 0);
lean_inc_ref(v_caption_978_);
v_inputs_979_ = lean_ctor_get(v_x_977_, 1);
lean_inc_ref(v_inputs_979_);
v_hash_980_ = lean_ctor_get_uint64(v_x_977_, sizeof(void*)*3);
v_mtime_981_ = lean_ctor_get(v_x_977_, 2);
lean_inc_ref(v_mtime_981_);
lean_dec_ref(v_x_977_);
v___x_982_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__5, &l_Lake_instReprHash_repr___redArg___closed__5_once, _init_l_Lake_instReprHash_repr___redArg___closed__5);
v___x_983_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__3, &l_Lake_instReprBuildTrace_repr___redArg___closed__3_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__3);
v___x_984_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__4, &l_Lake_instReprBuildTrace_repr___redArg___closed__4_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__4);
v___x_985_ = l_String_quote(v_caption_978_);
v___x_986_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
v___x_987_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_984_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = 0;
v___x_989_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_989_, 0, v___x_987_);
lean_ctor_set_uint8(v___x_989_, sizeof(void*)*1, v___x_988_);
v___x_990_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_983_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2);
v___x_992_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_990_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___x_993_ = lean_box(1);
v___x_994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_992_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__6, &l_Lake_instReprBuildTrace_repr___redArg___closed__6_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__6);
v___x_996_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_994_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_996_);
lean_ctor_set(v___x_997_, 1, v___x_982_);
v___x_998_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__7, &l_Lake_instReprBuildTrace_repr___redArg___closed__7_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__7);
v___x_999_ = l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0(v_inputs_979_);
v___x_1000_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1001_, 0, v___x_1000_);
lean_ctor_set_uint8(v___x_1001_, sizeof(void*)*1, v___x_988_);
v___x_1002_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_997_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
v___x_1003_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1002_);
lean_ctor_set(v___x_1003_, 1, v___x_991_);
v___x_1004_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
lean_ctor_set(v___x_1004_, 1, v___x_993_);
v___x_1005_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__9, &l_Lake_instReprBuildTrace_repr___redArg___closed__9_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__9);
v___x_1006_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
lean_ctor_set(v___x_1007_, 1, v___x_982_);
v___x_1008_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__10, &l_Lake_instReprBuildTrace_repr___redArg___closed__10_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__10);
v___x_1009_ = l_Lake_instReprHash_repr___redArg(v_hash_980_);
v___x_1010_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1008_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
lean_ctor_set_uint8(v___x_1011_, sizeof(void*)*1, v___x_988_);
v___x_1012_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1007_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
v___x_1013_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1012_);
lean_ctor_set(v___x_1013_, 1, v___x_991_);
v___x_1014_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
lean_ctor_set(v___x_1014_, 1, v___x_993_);
v___x_1015_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__12, &l_Lake_instReprBuildTrace_repr___redArg___closed__12_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__12);
v___x_1016_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1014_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
lean_ctor_set(v___x_1017_, 1, v___x_982_);
v___x_1018_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__13, &l_Lake_instReprBuildTrace_repr___redArg___closed__13_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__13);
v___x_1019_ = l_IO_FS_instReprSystemTime_repr___redArg(v_mtime_981_);
lean_dec_ref(v_mtime_981_);
v___x_1020_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1018_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1021_, 0, v___x_1020_);
lean_ctor_set_uint8(v___x_1021_, sizeof(void*)*1, v___x_988_);
v___x_1022_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1017_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__10, &l_Lake_instReprHash_repr___redArg___closed__10_once, _init_l_Lake_instReprHash_repr___redArg___closed__10);
v___x_1024_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__11, &l_Lake_instReprHash_repr___redArg___closed__11_once, _init_l_Lake_instReprHash_repr___redArg___closed__11);
v___x_1025_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
lean_ctor_set(v___x_1025_, 1, v___x_1022_);
v___x_1026_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__12, &l_Lake_instReprHash_repr___redArg___closed__12_once, _init_l_Lake_instReprHash_repr___redArg___closed__12);
v___x_1027_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1025_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
v___x_1028_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1023_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
lean_ctor_set_uint8(v___x_1029_, sizeof(void*)*1, v___x_988_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_1030_, lean_object* v_x_1031_, lean_object* v_x_1032_){
_start:
{
if (lean_obj_tag(v_x_1032_) == 0)
{
lean_dec(v_x_1030_);
return v_x_1031_;
}
else
{
lean_object* v_head_1033_; lean_object* v_tail_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1044_; 
v_head_1033_ = lean_ctor_get(v_x_1032_, 0);
v_tail_1034_ = lean_ctor_get(v_x_1032_, 1);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_x_1032_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1036_ = v_x_1032_;
v_isShared_1037_ = v_isSharedCheck_1044_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_tail_1034_);
lean_inc(v_head_1033_);
lean_dec(v_x_1032_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1044_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v___x_1039_; 
lean_inc(v_x_1030_);
if (v_isShared_1037_ == 0)
{
lean_ctor_set_tag(v___x_1036_, 5);
lean_ctor_set(v___x_1036_, 1, v_x_1030_);
lean_ctor_set(v___x_1036_, 0, v_x_1031_);
v___x_1039_ = v___x_1036_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_x_1031_);
lean_ctor_set(v_reuseFailAlloc_1043_, 1, v_x_1030_);
v___x_1039_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = l_Lake_instReprBuildTrace_repr___redArg(v_head_1033_);
v___x_1041_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1039_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v_x_1031_ = v___x_1041_;
v_x_1032_ = v_tail_1034_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace_repr(lean_object* v_x_1045_, lean_object* v_prec_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lake_instReprBuildTrace_repr___redArg(v_x_1045_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace_repr___boxed(lean_object* v_x_1048_, lean_object* v_prec_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Lake_instReprBuildTrace_repr(v_x_1048_, v_prec_1049_);
lean_dec(v_prec_1049_);
return v_res_1050_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace___closed__0(void){
_start:
{
lean_object* v___x_1051_; 
v___x_1051_ = lean_alloc_closure((void*)(l_Lake_instReprBuildTrace_repr___boxed), 2, 0);
return v___x_1051_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace(void){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = lean_obj_once(&l_Lake_instReprBuildTrace___closed__0, &l_Lake_instReprBuildTrace___closed__0_once, _init_l_Lake_instReprBuildTrace___closed__0);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_withCaption(lean_object* v_caption_1053_, lean_object* v_self_1054_){
_start:
{
lean_object* v_inputs_1055_; uint64_t v_hash_1056_; lean_object* v_mtime_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1064_; 
v_inputs_1055_ = lean_ctor_get(v_self_1054_, 1);
v_hash_1056_ = lean_ctor_get_uint64(v_self_1054_, sizeof(void*)*3);
v_mtime_1057_ = lean_ctor_get(v_self_1054_, 2);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_self_1054_);
if (v_isSharedCheck_1064_ == 0)
{
lean_object* v_unused_1065_; 
v_unused_1065_ = lean_ctor_get(v_self_1054_, 0);
lean_dec(v_unused_1065_);
v___x_1059_ = v_self_1054_;
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_mtime_1057_);
lean_inc(v_inputs_1055_);
lean_dec(v_self_1054_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1062_; 
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v_caption_1053_);
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_caption_1053_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v_inputs_1055_);
lean_ctor_set(v_reuseFailAlloc_1063_, 2, v_mtime_1057_);
lean_ctor_set_uint64(v_reuseFailAlloc_1063_, sizeof(void*)*3, v_hash_1056_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
}
static lean_object* _init_l_Lake_BuildTrace_withoutInputs___closed__0(void){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = lean_unsigned_to_nat(0u);
v___x_1067_ = lean_mk_empty_array_with_capacity(v___x_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_withoutInputs(lean_object* v_self_1068_){
_start:
{
lean_object* v_caption_1069_; uint64_t v_hash_1070_; lean_object* v_mtime_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1079_; 
v_caption_1069_ = lean_ctor_get(v_self_1068_, 0);
v_hash_1070_ = lean_ctor_get_uint64(v_self_1068_, sizeof(void*)*3);
v_mtime_1071_ = lean_ctor_get(v_self_1068_, 2);
v_isSharedCheck_1079_ = !lean_is_exclusive(v_self_1068_);
if (v_isSharedCheck_1079_ == 0)
{
lean_object* v_unused_1080_; 
v_unused_1080_ = lean_ctor_get(v_self_1068_, 1);
lean_dec(v_unused_1080_);
v___x_1073_ = v_self_1068_;
v_isShared_1074_ = v_isSharedCheck_1079_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_mtime_1071_);
lean_inc(v_caption_1069_);
lean_dec(v_self_1068_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1079_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1075_; lean_object* v___x_1077_; 
v___x_1075_ = lean_obj_once(&l_Lake_BuildTrace_withoutInputs___closed__0, &l_Lake_BuildTrace_withoutInputs___closed__0_once, _init_l_Lake_BuildTrace_withoutInputs___closed__0);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 1, v___x_1075_);
v___x_1077_ = v___x_1073_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_caption_1069_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v_mtime_1071_);
lean_ctor_set_uint64(v_reuseFailAlloc_1078_, sizeof(void*)*3, v_hash_1070_);
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
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofHash(uint64_t v_hash_1081_, lean_object* v_caption_1082_){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1083_ = lean_obj_once(&l_Lake_BuildTrace_withoutInputs___closed__0, &l_Lake_BuildTrace_withoutInputs___closed__0_once, _init_l_Lake_BuildTrace_withoutInputs___closed__0);
v___x_1084_ = lean_obj_once(&l_Lake_MTime_instOfNat___closed__0, &l_Lake_MTime_instOfNat___closed__0_once, _init_l_Lake_MTime_instOfNat___closed__0);
v___x_1085_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1085_, 0, v_caption_1082_);
lean_ctor_set(v___x_1085_, 1, v___x_1083_);
lean_ctor_set(v___x_1085_, 2, v___x_1084_);
lean_ctor_set_uint64(v___x_1085_, sizeof(void*)*3, v_hash_1081_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofHash___boxed(lean_object* v_hash_1086_, lean_object* v_caption_1087_){
_start:
{
uint64_t v_hash_boxed_1088_; lean_object* v_res_1089_; 
v_hash_boxed_1088_ = lean_unbox_uint64(v_hash_1086_);
lean_dec_ref(v_hash_1086_);
v_res_1089_ = l_Lake_BuildTrace_ofHash(v_hash_boxed_1088_, v_caption_1087_);
return v_res_1089_;
}
}
static lean_object* _init_l_Lake_BuildTrace_instCoeHash___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = lean_mk_string_unchecked("<hash>", 6, 6);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash___lam__0(uint64_t v_hash_1091_){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1092_ = lean_obj_once(&l_Lake_BuildTrace_instCoeHash___lam__0___closed__0, &l_Lake_BuildTrace_instCoeHash___lam__0___closed__0_once, _init_l_Lake_BuildTrace_instCoeHash___lam__0___closed__0);
v___x_1093_ = lean_obj_once(&l_Lake_BuildTrace_withoutInputs___closed__0, &l_Lake_BuildTrace_withoutInputs___closed__0_once, _init_l_Lake_BuildTrace_withoutInputs___closed__0);
v___x_1094_ = lean_obj_once(&l_Lake_MTime_instOfNat___closed__0, &l_Lake_MTime_instOfNat___closed__0_once, _init_l_Lake_MTime_instOfNat___closed__0);
v___x_1095_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1095_, 0, v___x_1092_);
lean_ctor_set(v___x_1095_, 1, v___x_1093_);
lean_ctor_set(v___x_1095_, 2, v___x_1094_);
lean_ctor_set_uint64(v___x_1095_, sizeof(void*)*3, v_hash_1091_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash___lam__0___boxed(lean_object* v_hash_1096_){
_start:
{
uint64_t v_hash_boxed_1097_; lean_object* v_res_1098_; 
v_hash_boxed_1097_ = lean_unbox_uint64(v_hash_1096_);
lean_dec_ref(v_hash_1096_);
v_res_1098_ = l_Lake_BuildTrace_instCoeHash___lam__0(v_hash_boxed_1097_);
return v_res_1098_;
}
}
static lean_object* _init_l_Lake_BuildTrace_instCoeHash___closed__0(void){
_start:
{
lean_object* v___f_1099_; 
v___f_1099_ = lean_alloc_closure((void*)(l_Lake_BuildTrace_instCoeHash___lam__0___boxed), 1, 0);
return v___f_1099_;
}
}
static lean_object* _init_l_Lake_BuildTrace_instCoeHash(void){
_start:
{
lean_object* v___f_1100_; 
v___f_1100_ = lean_obj_once(&l_Lake_BuildTrace_instCoeHash___closed__0, &l_Lake_BuildTrace_instCoeHash___closed__0_once, _init_l_Lake_BuildTrace_instCoeHash___closed__0);
return v___f_1100_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofMTime(lean_object* v_mtime_1101_, lean_object* v_caption_1102_){
_start:
{
lean_object* v___x_1103_; uint64_t v___x_1104_; lean_object* v___x_1105_; 
v___x_1103_ = lean_obj_once(&l_Lake_BuildTrace_withoutInputs___closed__0, &l_Lake_BuildTrace_withoutInputs___closed__0_once, _init_l_Lake_BuildTrace_withoutInputs___closed__0);
v___x_1104_ = 1723ULL;
v___x_1105_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1105_, 0, v_caption_1102_);
lean_ctor_set(v___x_1105_, 1, v___x_1103_);
lean_ctor_set(v___x_1105_, 2, v_mtime_1101_);
lean_ctor_set_uint64(v___x_1105_, sizeof(void*)*3, v___x_1104_);
return v___x_1105_;
}
}
static lean_object* _init_l_Lake_BuildTrace_instCoeMTime___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1106_; 
v___x_1106_ = lean_mk_string_unchecked("<mtime>", 7, 7);
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeMTime___lam__0(lean_object* v_mtime_1107_){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; uint64_t v___x_1110_; lean_object* v___x_1111_; 
v___x_1108_ = lean_obj_once(&l_Lake_BuildTrace_instCoeMTime___lam__0___closed__0, &l_Lake_BuildTrace_instCoeMTime___lam__0___closed__0_once, _init_l_Lake_BuildTrace_instCoeMTime___lam__0___closed__0);
v___x_1109_ = lean_obj_once(&l_Lake_BuildTrace_withoutInputs___closed__0, &l_Lake_BuildTrace_withoutInputs___closed__0_once, _init_l_Lake_BuildTrace_withoutInputs___closed__0);
v___x_1110_ = 1723ULL;
v___x_1111_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1111_, 0, v___x_1108_);
lean_ctor_set(v___x_1111_, 1, v___x_1109_);
lean_ctor_set(v___x_1111_, 2, v_mtime_1107_);
lean_ctor_set_uint64(v___x_1111_, sizeof(void*)*3, v___x_1110_);
return v___x_1111_;
}
}
static lean_object* _init_l_Lake_BuildTrace_instCoeMTime___closed__0(void){
_start:
{
lean_object* v___f_1112_; 
v___f_1112_ = lean_alloc_closure((void*)(l_Lake_BuildTrace_instCoeMTime___lam__0), 1, 0);
return v___f_1112_;
}
}
static lean_object* _init_l_Lake_BuildTrace_instCoeMTime(void){
_start:
{
lean_object* v___f_1113_; 
v___f_1113_ = lean_obj_once(&l_Lake_BuildTrace_instCoeMTime___closed__0, &l_Lake_BuildTrace_instCoeMTime___closed__0_once, _init_l_Lake_BuildTrace_instCoeMTime___closed__0);
return v___f_1113_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_nil(lean_object* v_caption_1114_){
_start:
{
lean_object* v___x_1115_; uint64_t v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1115_ = lean_obj_once(&l_Lake_BuildTrace_withoutInputs___closed__0, &l_Lake_BuildTrace_withoutInputs___closed__0_once, _init_l_Lake_BuildTrace_withoutInputs___closed__0);
v___x_1116_ = 1723ULL;
v___x_1117_ = lean_obj_once(&l_Lake_MTime_instOfNat___closed__0, &l_Lake_MTime_instOfNat___closed__0_once, _init_l_Lake_MTime_instOfNat___closed__0);
v___x_1118_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1118_, 0, v_caption_1114_);
lean_ctor_set(v___x_1118_, 1, v___x_1115_);
lean_ctor_set(v___x_1118_, 2, v___x_1117_);
lean_ctor_set_uint64(v___x_1118_, sizeof(void*)*3, v___x_1116_);
return v___x_1118_;
}
}
static lean_object* _init_l_Lake_BuildTrace_instNilTrace___closed__0(void){
_start:
{
lean_object* v___x_1119_; 
v___x_1119_ = lean_mk_string_unchecked("<nil>", 5, 5);
return v___x_1119_;
}
}
static lean_object* _init_l_Lake_BuildTrace_instNilTrace___closed__1(void){
_start:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1120_ = lean_obj_once(&l_Lake_BuildTrace_instNilTrace___closed__0, &l_Lake_BuildTrace_instNilTrace___closed__0_once, _init_l_Lake_BuildTrace_instNilTrace___closed__0);
v___x_1121_ = l_Lake_BuildTrace_nil(v___x_1120_);
return v___x_1121_;
}
}
static lean_object* _init_l_Lake_BuildTrace_instNilTrace(void){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = lean_obj_once(&l_Lake_BuildTrace_instNilTrace___closed__1, &l_Lake_BuildTrace_instNilTrace___closed__1_once, _init_l_Lake_BuildTrace_instNilTrace___closed__1);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___redArg(lean_object* v_inst_1123_, lean_object* v_inst_1124_, lean_object* v_inst_1125_, lean_object* v_inst_1126_, lean_object* v_info_1127_){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
lean_inc(v_info_1127_);
v___x_1129_ = lean_apply_1(v_inst_1124_, v_info_1127_);
v___x_1130_ = lean_apply_3(v_inst_1125_, lean_box(0), v___x_1129_, lean_box(0));
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v_a_1131_; lean_object* v___x_1132_; 
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_a_1131_);
lean_dec_ref(v___x_1130_);
lean_inc(v_info_1127_);
v___x_1132_ = lean_apply_2(v_inst_1126_, v_info_1127_, lean_box(0));
if (lean_obj_tag(v___x_1132_) == 0)
{
lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1144_; 
v_a_1133_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1135_ = v___x_1132_;
v_isShared_1136_ = v_isSharedCheck_1144_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1133_);
lean_dec(v___x_1132_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1144_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; uint64_t v___x_1140_; lean_object* v___x_1142_; 
v___x_1137_ = lean_apply_1(v_inst_1123_, v_info_1127_);
v___x_1138_ = lean_obj_once(&l_Lake_BuildTrace_withoutInputs___closed__0, &l_Lake_BuildTrace_withoutInputs___closed__0_once, _init_l_Lake_BuildTrace_withoutInputs___closed__0);
v___x_1139_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1139_, 0, v___x_1137_);
lean_ctor_set(v___x_1139_, 1, v___x_1138_);
lean_ctor_set(v___x_1139_, 2, v_a_1133_);
v___x_1140_ = lean_unbox_uint64(v_a_1131_);
lean_dec(v_a_1131_);
lean_ctor_set_uint64(v___x_1139_, sizeof(void*)*3, v___x_1140_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 0, v___x_1139_);
v___x_1142_ = v___x_1135_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1139_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
else
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
lean_dec(v_a_1131_);
lean_dec(v_info_1127_);
lean_dec_ref(v_inst_1123_);
v_a_1145_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1132_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1132_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
else
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1160_; 
lean_dec(v_info_1127_);
lean_dec_ref(v_inst_1126_);
lean_dec_ref(v_inst_1123_);
v_a_1153_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1155_ = v___x_1130_;
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1130_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1153_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___redArg___boxed(lean_object* v_inst_1161_, lean_object* v_inst_1162_, lean_object* v_inst_1163_, lean_object* v_inst_1164_, lean_object* v_info_1165_, lean_object* v_a_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lake_BuildTrace_compute___redArg(v_inst_1161_, v_inst_1162_, v_inst_1163_, v_inst_1164_, v_info_1165_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute(lean_object* v_00_u03b1_1168_, lean_object* v_m_1169_, lean_object* v_inst_1170_, lean_object* v_inst_1171_, lean_object* v_inst_1172_, lean_object* v_inst_1173_, lean_object* v_info_1174_){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = l_Lake_BuildTrace_compute___redArg(v_inst_1170_, v_inst_1171_, v_inst_1172_, v_inst_1173_, v_info_1174_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___boxed(lean_object* v_00_u03b1_1177_, lean_object* v_m_1178_, lean_object* v_inst_1179_, lean_object* v_inst_1180_, lean_object* v_inst_1181_, lean_object* v_inst_1182_, lean_object* v_info_1183_, lean_object* v_a_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l_Lake_BuildTrace_compute(v_00_u03b1_1177_, v_m_1178_, v_inst_1179_, v_inst_1180_, v_inst_1181_, v_inst_1182_, v_info_1183_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime___redArg(lean_object* v_inst_1186_, lean_object* v_inst_1187_, lean_object* v_inst_1188_, lean_object* v_inst_1189_){
_start:
{
lean_object* v___x_1190_; 
v___x_1190_ = lean_alloc_closure((void*)(l_Lake_BuildTrace_compute___boxed), 8, 6);
lean_closure_set(v___x_1190_, 0, lean_box(0));
lean_closure_set(v___x_1190_, 1, lean_box(0));
lean_closure_set(v___x_1190_, 2, v_inst_1186_);
lean_closure_set(v___x_1190_, 3, v_inst_1187_);
lean_closure_set(v___x_1190_, 4, v_inst_1188_);
lean_closure_set(v___x_1190_, 5, v_inst_1189_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime(lean_object* v_00_u03b1_1191_, lean_object* v_m_1192_, lean_object* v_inst_1193_, lean_object* v_inst_1194_, lean_object* v_inst_1195_, lean_object* v_inst_1196_){
_start:
{
lean_object* v___x_1197_; 
v___x_1197_ = lean_alloc_closure((void*)(l_Lake_BuildTrace_compute___boxed), 8, 6);
lean_closure_set(v___x_1197_, 0, lean_box(0));
lean_closure_set(v___x_1197_, 1, lean_box(0));
lean_closure_set(v___x_1197_, 2, v_inst_1193_);
lean_closure_set(v___x_1197_, 3, v_inst_1194_);
lean_closure_set(v___x_1197_, 4, v_inst_1195_);
lean_closure_set(v___x_1197_, 5, v_inst_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_mix(lean_object* v_t1_1198_, lean_object* v_t2_1199_){
_start:
{
lean_object* v_caption_1200_; lean_object* v_inputs_1201_; uint64_t v_hash_1202_; lean_object* v_mtime_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1218_; 
v_caption_1200_ = lean_ctor_get(v_t1_1198_, 0);
v_inputs_1201_ = lean_ctor_get(v_t1_1198_, 1);
v_hash_1202_ = lean_ctor_get_uint64(v_t1_1198_, sizeof(void*)*3);
v_mtime_1203_ = lean_ctor_get(v_t1_1198_, 2);
v_isSharedCheck_1218_ = !lean_is_exclusive(v_t1_1198_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1205_ = v_t1_1198_;
v_isShared_1206_ = v_isSharedCheck_1218_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_mtime_1203_);
lean_inc(v_inputs_1201_);
lean_inc(v_caption_1200_);
lean_dec(v_t1_1198_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1218_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
uint64_t v_hash_1207_; lean_object* v_mtime_1208_; lean_object* v___x_1209_; uint64_t v___x_1210_; uint8_t v___x_1211_; 
v_hash_1207_ = lean_ctor_get_uint64(v_t2_1199_, sizeof(void*)*3);
v_mtime_1208_ = lean_ctor_get(v_t2_1199_, 2);
lean_inc_ref(v_mtime_1208_);
v___x_1209_ = lean_array_push(v_inputs_1201_, v_t2_1199_);
v___x_1210_ = lean_uint64_mix_hash(v_hash_1202_, v_hash_1207_);
v___x_1211_ = l_IO_FS_instOrdSystemTime_ord(v_mtime_1203_, v_mtime_1208_);
if (v___x_1211_ == 2)
{
lean_object* v___x_1213_; 
lean_dec_ref(v_mtime_1208_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 1, v___x_1209_);
v___x_1213_ = v___x_1205_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_caption_1200_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1214_, 2, v_mtime_1203_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
lean_ctor_set_uint64(v___x_1213_, sizeof(void*)*3, v___x_1210_);
return v___x_1213_;
}
}
else
{
lean_object* v___x_1216_; 
lean_dec_ref(v_mtime_1203_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 2, v_mtime_1208_);
lean_ctor_set(v___x_1205_, 1, v___x_1209_);
v___x_1216_ = v___x_1205_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_caption_1200_);
lean_ctor_set(v_reuseFailAlloc_1217_, 1, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1217_, 2, v_mtime_1208_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
lean_ctor_set_uint64(v___x_1216_, sizeof(void*)*3, v___x_1210_);
return v___x_1216_;
}
}
}
}
}
static lean_object* _init_l_Lake_BuildTrace_instMixTrace___closed__0(void){
_start:
{
lean_object* v___x_1219_; 
v___x_1219_ = lean_alloc_closure((void*)(l_Lake_BuildTrace_mix), 2, 0);
return v___x_1219_;
}
}
static lean_object* _init_l_Lake_BuildTrace_instMixTrace(void){
_start:
{
lean_object* v___x_1220_; 
v___x_1220_ = lean_obj_once(&l_Lake_BuildTrace_instMixTrace___closed__0, &l_Lake_BuildTrace_instMixTrace___closed__0_once, _init_l_Lake_BuildTrace_instMixTrace___closed__0);
return v___x_1220_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstHash___redArg(lean_object* v_inst_1221_, lean_object* v_info_1222_, uint64_t v_hash_1223_, lean_object* v_self_1224_){
_start:
{
uint64_t v_hash_1226_; uint8_t v___x_1227_; 
v_hash_1226_ = lean_ctor_get_uint64(v_self_1224_, sizeof(void*)*3);
v___x_1227_ = lean_uint64_dec_eq(v_hash_1223_, v_hash_1226_);
if (v___x_1227_ == 0)
{
lean_dec(v_info_1222_);
lean_dec_ref(v_inst_1221_);
return v___x_1227_;
}
else
{
lean_object* v___x_1228_; uint8_t v___x_1229_; 
v___x_1228_ = lean_apply_2(v_inst_1221_, v_info_1222_, lean_box(0));
v___x_1229_ = lean_unbox(v___x_1228_);
return v___x_1229_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash___redArg___boxed(lean_object* v_inst_1230_, lean_object* v_info_1231_, lean_object* v_hash_1232_, lean_object* v_self_1233_, lean_object* v_a_1234_){
_start:
{
uint64_t v_hash_boxed_1235_; uint8_t v_res_1236_; lean_object* v_r_1237_; 
v_hash_boxed_1235_ = lean_unbox_uint64(v_hash_1232_);
lean_dec_ref(v_hash_1232_);
v_res_1236_ = l_Lake_BuildTrace_checkAgainstHash___redArg(v_inst_1230_, v_info_1231_, v_hash_boxed_1235_, v_self_1233_);
lean_dec_ref(v_self_1233_);
v_r_1237_ = lean_box(v_res_1236_);
return v_r_1237_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstHash(lean_object* v_i_1238_, lean_object* v_inst_1239_, lean_object* v_info_1240_, uint64_t v_hash_1241_, lean_object* v_self_1242_){
_start:
{
uint8_t v___x_1244_; 
v___x_1244_ = l_Lake_BuildTrace_checkAgainstHash___redArg(v_inst_1239_, v_info_1240_, v_hash_1241_, v_self_1242_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash___boxed(lean_object* v_i_1245_, lean_object* v_inst_1246_, lean_object* v_info_1247_, lean_object* v_hash_1248_, lean_object* v_self_1249_, lean_object* v_a_1250_){
_start:
{
uint64_t v_hash_boxed_1251_; uint8_t v_res_1252_; lean_object* v_r_1253_; 
v_hash_boxed_1251_ = lean_unbox_uint64(v_hash_1248_);
lean_dec_ref(v_hash_1248_);
v_res_1252_ = l_Lake_BuildTrace_checkAgainstHash(v_i_1245_, v_inst_1246_, v_info_1247_, v_hash_boxed_1251_, v_self_1249_);
lean_dec_ref(v_self_1249_);
v_r_1253_ = lean_box(v_res_1252_);
return v_r_1253_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstTime___redArg(lean_object* v_inst_1254_, lean_object* v_info_1255_, lean_object* v_self_1256_){
_start:
{
lean_object* v_mtime_1258_; uint8_t v___x_1259_; 
v_mtime_1258_ = lean_ctor_get(v_self_1256_, 2);
v___x_1259_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_1254_, v_info_1255_, v_mtime_1258_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime___redArg___boxed(lean_object* v_inst_1260_, lean_object* v_info_1261_, lean_object* v_self_1262_, lean_object* v_a_1263_){
_start:
{
uint8_t v_res_1264_; lean_object* v_r_1265_; 
v_res_1264_ = l_Lake_BuildTrace_checkAgainstTime___redArg(v_inst_1260_, v_info_1261_, v_self_1262_);
lean_dec_ref(v_self_1262_);
v_r_1265_ = lean_box(v_res_1264_);
return v_r_1265_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstTime(lean_object* v_i_1266_, lean_object* v_inst_1267_, lean_object* v_info_1268_, lean_object* v_self_1269_){
_start:
{
lean_object* v_mtime_1271_; uint8_t v___x_1272_; 
v_mtime_1271_ = lean_ctor_get(v_self_1269_, 2);
v___x_1272_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_1267_, v_info_1268_, v_mtime_1271_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime___boxed(lean_object* v_i_1273_, lean_object* v_inst_1274_, lean_object* v_info_1275_, lean_object* v_self_1276_, lean_object* v_a_1277_){
_start:
{
uint8_t v_res_1278_; lean_object* v_r_1279_; 
v_res_1278_ = l_Lake_BuildTrace_checkAgainstTime(v_i_1273_, v_inst_1274_, v_info_1275_, v_self_1276_);
lean_dec_ref(v_self_1276_);
v_r_1279_ = lean_box(v_res_1278_);
return v_r_1279_;
}
}
lean_object* runtime_initialize_Lean_Data_Json(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Fold(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_String(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Extra(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Trace(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instCheckExistsFilePath = _init_l_Lake_instCheckExistsFilePath();
lean_mark_persistent(l_Lake_instCheckExistsFilePath);
l_Lake_instReprHash = _init_l_Lake_instReprHash();
lean_mark_persistent(l_Lake_instReprHash);
l_Lake_Hash_instHashable = _init_l_Lake_Hash_instHashable();
lean_mark_persistent(l_Lake_Hash_instHashable);
l_Lake_Hash_nil = _init_l_Lake_Hash_nil();
l_Lake_Hash_instNilTrace = _init_l_Lake_Hash_instNilTrace();
l_Lake_Hash_instMixTrace = _init_l_Lake_Hash_instMixTrace();
lean_mark_persistent(l_Lake_Hash_instMixTrace);
l_Lake_Hash_instToString = _init_l_Lake_Hash_instToString();
lean_mark_persistent(l_Lake_Hash_instToString);
l_Lake_Hash_instToJson = _init_l_Lake_Hash_instToJson();
lean_mark_persistent(l_Lake_Hash_instToJson);
l_Lake_Hash_instFromJson = _init_l_Lake_Hash_instFromJson();
lean_mark_persistent(l_Lake_Hash_instFromJson);
l_Lake_instComputeHashFilePathIO = _init_l_Lake_instComputeHashFilePathIO();
lean_mark_persistent(l_Lake_instComputeHashFilePathIO);
l_Lake_instCoeTextFilePathFilePath = _init_l_Lake_instCoeTextFilePathFilePath();
lean_mark_persistent(l_Lake_instCoeTextFilePathFilePath);
l_Lake_instComputeHashTextFilePathIO = _init_l_Lake_instComputeHashTextFilePathIO();
lean_mark_persistent(l_Lake_instComputeHashTextFilePathIO);
l_Lake_instToStringTextFilePath = _init_l_Lake_instToStringTextFilePath();
lean_mark_persistent(l_Lake_instToStringTextFilePath);
l_Lake_computeArrayHash___redArg___boxed__const__1 = _init_l_Lake_computeArrayHash___redArg___boxed__const__1();
lean_mark_persistent(l_Lake_computeArrayHash___redArg___boxed__const__1);
l_Lake_MTime_instOfNat = _init_l_Lake_MTime_instOfNat();
lean_mark_persistent(l_Lake_MTime_instOfNat);
l_Lake_MTime_instBEq = _init_l_Lake_MTime_instBEq();
lean_mark_persistent(l_Lake_MTime_instBEq);
l_Lake_MTime_instRepr = _init_l_Lake_MTime_instRepr();
lean_mark_persistent(l_Lake_MTime_instRepr);
l_Lake_MTime_instOrd = _init_l_Lake_MTime_instOrd();
lean_mark_persistent(l_Lake_MTime_instOrd);
l_Lake_MTime_instLT = _init_l_Lake_MTime_instLT();
lean_mark_persistent(l_Lake_MTime_instLT);
l_Lake_MTime_instLE = _init_l_Lake_MTime_instLE();
lean_mark_persistent(l_Lake_MTime_instLE);
l_Lake_MTime_instMin = _init_l_Lake_MTime_instMin();
lean_mark_persistent(l_Lake_MTime_instMin);
l_Lake_MTime_instMax = _init_l_Lake_MTime_instMax();
lean_mark_persistent(l_Lake_MTime_instMax);
l_Lake_MTime_instNilTrace = _init_l_Lake_MTime_instNilTrace();
lean_mark_persistent(l_Lake_MTime_instNilTrace);
l_Lake_MTime_instMixTrace = _init_l_Lake_MTime_instMixTrace();
lean_mark_persistent(l_Lake_MTime_instMixTrace);
l_Lake_instGetMTimeFilePath = _init_l_Lake_instGetMTimeFilePath();
lean_mark_persistent(l_Lake_instGetMTimeFilePath);
l_Lake_instGetMTimeTextFilePath = _init_l_Lake_instGetMTimeTextFilePath();
lean_mark_persistent(l_Lake_instGetMTimeTextFilePath);
l_Lake_instReprBuildTrace = _init_l_Lake_instReprBuildTrace();
lean_mark_persistent(l_Lake_instReprBuildTrace);
l_Lake_BuildTrace_instCoeHash = _init_l_Lake_BuildTrace_instCoeHash();
lean_mark_persistent(l_Lake_BuildTrace_instCoeHash);
l_Lake_BuildTrace_instCoeMTime = _init_l_Lake_BuildTrace_instCoeMTime();
lean_mark_persistent(l_Lake_BuildTrace_instCoeMTime);
l_Lake_BuildTrace_instNilTrace = _init_l_Lake_BuildTrace_instNilTrace();
lean_mark_persistent(l_Lake_BuildTrace_instNilTrace);
l_Lake_BuildTrace_instMixTrace = _init_l_Lake_BuildTrace_instMixTrace();
lean_mark_persistent(l_Lake_BuildTrace_instMixTrace);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_Nat_Fold(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Trace(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Fold(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Fold(uint8_t builtin);
lean_object* initialize_Lake_Util_String(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Extra(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Trace(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Trace(builtin);
}
#ifdef __cplusplus
}
#endif
