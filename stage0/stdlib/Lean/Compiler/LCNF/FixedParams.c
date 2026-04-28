// Lean compiler output
// Module: Lean.Compiler.LCNF.FixedParams
// Imports: public import Lean.Compiler.LCNF.Basic
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
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue;
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash___boxed(lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7;
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9;
static lean_once_cell_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___closed__0;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalCode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFixedParamsMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx(lean_object* v_x_1_){
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
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx(v_x_5_);
lean_dec(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 2)
{
lean_object* v_i_9_; lean_object* v___x_10_; 
v_i_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_i_9_);
lean_dec_ref(v_t_7_);
v___x_10_ = lean_apply_1(v_k_8_, v_i_9_);
return v___x_10_;
}
else
{
lean_dec(v_t_7_);
return v_k_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim___redArg(lean_object* v_t_23_, lean_object* v_top_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_23_, v_top_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_top_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_27_, v_top_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim___redArg(lean_object* v_t_31_, lean_object* v_erased_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_31_, v_erased_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_erased_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_35_, v_erased_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim___redArg(lean_object* v_t_39_, lean_object* v_val_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_39_, v_val_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_val_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_43_, v_val_45_);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_box(0);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_box(0);
return v___x_48_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(lean_object* v_x_49_, lean_object* v_x_50_){
_start:
{
switch(lean_obj_tag(v_x_49_))
{
case 0:
{
if (lean_obj_tag(v_x_50_) == 0)
{
uint8_t v___x_51_; 
v___x_51_ = 1;
return v___x_51_;
}
else
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
}
case 1:
{
if (lean_obj_tag(v_x_50_) == 1)
{
uint8_t v___x_53_; 
v___x_53_ = 1;
return v___x_53_;
}
else
{
uint8_t v___x_54_; 
v___x_54_ = 0;
return v___x_54_;
}
}
default: 
{
if (lean_obj_tag(v_x_50_) == 2)
{
lean_object* v_i_55_; lean_object* v_i_56_; uint8_t v___x_57_; 
v_i_55_ = lean_ctor_get(v_x_49_, 0);
v_i_56_ = lean_ctor_get(v_x_50_, 0);
v___x_57_ = lean_nat_dec_eq(v_i_55_, v_i_56_);
return v___x_57_;
}
else
{
uint8_t v___x_58_; 
v___x_58_ = 0;
return v___x_58_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq___boxed(lean_object* v_x_59_, lean_object* v_x_60_){
_start:
{
uint8_t v_res_61_; lean_object* v_r_62_; 
v_res_61_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v_x_59_, v_x_60_);
lean_dec(v_x_60_);
lean_dec(v_x_59_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0(void){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq___boxed), 2, 0);
return v___x_63_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue(void){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0, &l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0_once, _init_l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0);
return v___x_64_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(lean_object* v_x_65_){
_start:
{
switch(lean_obj_tag(v_x_65_))
{
case 0:
{
uint64_t v___x_66_; 
v___x_66_ = 0ULL;
return v___x_66_;
}
case 1:
{
uint64_t v___x_67_; 
v___x_67_ = 1ULL;
return v___x_67_;
}
default: 
{
lean_object* v_i_68_; uint64_t v___x_69_; uint64_t v___x_70_; uint64_t v___x_71_; 
v_i_68_ = lean_ctor_get(v_x_65_, 0);
v___x_69_ = 2ULL;
v___x_70_ = lean_uint64_of_nat(v_i_68_);
v___x_71_ = lean_uint64_mix_hash(v___x_69_, v___x_70_);
return v___x_71_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash___boxed(lean_object* v_x_72_){
_start:
{
uint64_t v_res_73_; lean_object* v_r_74_; 
v_res_73_ = l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(v_x_72_);
lean_dec(v_x_72_);
v_r_74_ = lean_box_uint64(v_res_73_);
return v_r_74_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash___boxed), 1, 0);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue(void){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0, &l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0_once, _init_l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0);
return v___x_76_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0(uint8_t v_x_77_){
_start:
{
uint8_t v___x_78_; 
v___x_78_ = 0;
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0___boxed(lean_object* v_x_79_){
_start:
{
uint8_t v_x_273__boxed_80_; uint8_t v_res_81_; lean_object* v_r_82_; 
v_x_273__boxed_80_ = lean_unbox(v_x_79_);
v_res_81_ = l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0(v_x_273__boxed_80_);
v_r_82_ = lean_box(v_res_81_);
return v_r_82_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0(void){
_start:
{
lean_object* v___f_83_; 
v___f_83_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0___boxed), 1, 0);
return v___f_83_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1(void){
_start:
{
lean_object* v___f_84_; 
v___f_84_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_84_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2(void){
_start:
{
lean_object* v___f_85_; 
v___f_85_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_85_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3(void){
_start:
{
lean_object* v___f_86_; 
v___f_86_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_86_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4(void){
_start:
{
lean_object* v___f_87_; 
v___f_87_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_87_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5(void){
_start:
{
lean_object* v___f_88_; 
v___f_88_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_88_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6(void){
_start:
{
lean_object* v___f_89_; 
v___f_89_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_89_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7(void){
_start:
{
lean_object* v___f_90_; 
v___f_90_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_90_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8(void){
_start:
{
lean_object* v___f_91_; lean_object* v___f_92_; lean_object* v___x_93_; 
v___f_91_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2);
v___f_92_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1);
v___x_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_93_, 0, v___f_92_);
lean_ctor_set(v___x_93_, 1, v___f_91_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9(void){
_start:
{
lean_object* v___f_94_; lean_object* v___f_95_; lean_object* v___f_96_; lean_object* v___f_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___f_94_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6);
v___f_95_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5);
v___f_96_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4);
v___f_97_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3);
v___x_98_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8);
v___x_99_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v___f_97_);
lean_ctor_set(v___x_99_, 2, v___f_96_);
lean_ctor_set(v___x_99_, 3, v___f_95_);
lean_ctor_set(v___x_99_, 4, v___f_94_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10(void){
_start:
{
lean_object* v___f_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___f_100_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7);
v___x_101_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9);
v___x_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v___f_100_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg(lean_object* v_a_103_){
_start:
{
lean_object* v_visited_104_; lean_object* v_fixed_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_119_; 
v_visited_104_ = lean_ctor_get(v_a_103_, 0);
v_fixed_105_ = lean_ctor_get(v_a_103_, 1);
v_isSharedCheck_119_ = !lean_is_exclusive(v_a_103_);
if (v_isSharedCheck_119_ == 0)
{
v___x_107_ = v_a_103_;
v_isShared_108_ = v_isSharedCheck_119_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_fixed_105_);
lean_inc(v_visited_104_);
lean_dec(v_a_103_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_119_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___f_109_; lean_object* v___x_110_; size_t v_sz_111_; size_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_115_; 
v___f_109_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0);
v___x_110_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10);
v_sz_111_ = lean_array_size(v_fixed_105_);
v___x_112_ = ((size_t)0ULL);
v___x_113_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_110_, v___f_109_, v_sz_111_, v___x_112_, v_fixed_105_);
if (v_isShared_108_ == 0)
{
lean_ctor_set(v___x_107_, 1, v___x_113_);
v___x_115_ = v___x_107_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_visited_104_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v___x_113_);
v___x_115_ = v_reuseFailAlloc_118_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_box(0);
v___x_117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_115_);
return v___x_117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort(lean_object* v_00_u03b1_120_, lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
lean_object* v_visited_123_; lean_object* v_fixed_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_138_; 
v_visited_123_ = lean_ctor_get(v_a_122_, 0);
v_fixed_124_ = lean_ctor_get(v_a_122_, 1);
v_isSharedCheck_138_ = !lean_is_exclusive(v_a_122_);
if (v_isSharedCheck_138_ == 0)
{
v___x_126_ = v_a_122_;
v_isShared_127_ = v_isSharedCheck_138_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_fixed_124_);
lean_inc(v_visited_123_);
lean_dec(v_a_122_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_138_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___f_128_; lean_object* v___x_129_; size_t v_sz_130_; size_t v___x_131_; lean_object* v___x_132_; lean_object* v___x_134_; 
v___f_128_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0);
v___x_129_ = lean_obj_once(&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10, &l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10_once, _init_l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10);
v_sz_130_ = lean_array_size(v_fixed_124_);
v___x_131_ = ((size_t)0ULL);
v___x_132_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_129_, v___f_128_, v_sz_130_, v___x_131_, v_fixed_124_);
if (v_isShared_127_ == 0)
{
lean_ctor_set(v___x_126_, 1, v___x_132_);
v___x_134_ = v___x_126_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_visited_123_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v___x_132_);
v___x_134_ = v_reuseFailAlloc_137_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_box(0);
v___x_136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v___x_134_);
return v___x_136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___boxed(lean_object* v_00_u03b1_139_, lean_object* v_a_140_, lean_object* v_a_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_Compiler_LCNF_FixedParams_abort(v_00_u03b1_139_, v_a_140_, v_a_141_);
lean_dec_ref(v_a_140_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(lean_object* v_t_143_, lean_object* v_k_144_){
_start:
{
if (lean_obj_tag(v_t_143_) == 0)
{
lean_object* v_k_145_; lean_object* v_v_146_; lean_object* v_l_147_; lean_object* v_r_148_; uint8_t v___x_149_; 
v_k_145_ = lean_ctor_get(v_t_143_, 1);
v_v_146_ = lean_ctor_get(v_t_143_, 2);
v_l_147_ = lean_ctor_get(v_t_143_, 3);
v_r_148_ = lean_ctor_get(v_t_143_, 4);
v___x_149_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_144_, v_k_145_);
switch(v___x_149_)
{
case 0:
{
v_t_143_ = v_l_147_;
goto _start;
}
case 1:
{
lean_object* v___x_151_; 
lean_inc(v_v_146_);
v___x_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_151_, 0, v_v_146_);
return v___x_151_;
}
default: 
{
v_t_143_ = v_r_148_;
goto _start;
}
}
}
else
{
lean_object* v___x_153_; 
v___x_153_ = lean_box(0);
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg___boxed(lean_object* v_t_154_, lean_object* v_k_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(v_t_154_, v_k_155_);
lean_dec(v_k_155_);
lean_dec(v_t_154_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar(lean_object* v_fvarId_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
lean_object* v_assignment_160_; lean_object* v___x_161_; 
v_assignment_160_ = lean_ctor_get(v_a_158_, 2);
v___x_161_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(v_assignment_160_, v_fvarId_157_);
if (lean_obj_tag(v___x_161_) == 1)
{
lean_object* v_val_162_; lean_object* v___x_163_; 
v_val_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc(v_val_162_);
lean_dec_ref(v___x_161_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v_val_162_);
lean_ctor_set(v___x_163_, 1, v_a_159_);
return v___x_163_;
}
else
{
lean_object* v___x_164_; lean_object* v___x_165_; 
lean_dec(v___x_161_);
v___x_164_ = lean_box(0);
v___x_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v_a_159_);
return v___x_165_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar___boxed(lean_object* v_fvarId_166_, lean_object* v_a_167_, lean_object* v_a_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_Compiler_LCNF_FixedParams_evalFVar(v_fvarId_166_, v_a_167_, v_a_168_);
lean_dec_ref(v_a_167_);
lean_dec(v_fvarId_166_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0(lean_object* v_00_u03b4_170_, lean_object* v_t_171_, lean_object* v_k_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(v_t_171_, v_k_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___boxed(lean_object* v_00_u03b4_174_, lean_object* v_t_175_, lean_object* v_k_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0(v_00_u03b4_174_, v_t_175_, v_k_176_);
lean_dec(v_k_176_);
lean_dec(v_t_175_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg(lean_object* v_arg_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
switch(lean_obj_tag(v_arg_178_))
{
case 0:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_box(1);
v___x_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set(v___x_182_, 1, v_a_180_);
return v___x_182_;
}
case 1:
{
lean_object* v_fvarId_183_; lean_object* v___x_184_; 
v_fvarId_183_ = lean_ctor_get(v_arg_178_, 0);
v___x_184_ = l_Lean_Compiler_LCNF_FixedParams_evalFVar(v_fvarId_183_, v_a_179_, v_a_180_);
return v___x_184_;
}
default: 
{
lean_object* v_expr_185_; 
v_expr_185_ = lean_ctor_get(v_arg_178_, 0);
if (lean_obj_tag(v_expr_185_) == 1)
{
lean_object* v_fvarId_186_; lean_object* v___x_187_; 
v_fvarId_186_ = lean_ctor_get(v_expr_185_, 0);
v___x_187_ = l_Lean_Compiler_LCNF_FixedParams_evalFVar(v_fvarId_186_, v_a_179_, v_a_180_);
return v___x_187_;
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_box(0);
v___x_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
lean_ctor_set(v___x_189_, 1, v_a_180_);
return v___x_189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg___boxed(lean_object* v_arg_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lean_Compiler_LCNF_FixedParams_evalArg(v_arg_190_, v_a_191_, v_a_192_);
lean_dec_ref(v_a_191_);
lean_dec(v_arg_190_);
return v_res_193_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(lean_object* v_declName_194_, lean_object* v_as_195_, size_t v_i_196_, size_t v_stop_197_){
_start:
{
uint8_t v___x_198_; 
v___x_198_ = lean_usize_dec_eq(v_i_196_, v_stop_197_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; lean_object* v_toSignature_200_; lean_object* v_name_201_; uint8_t v___x_202_; 
v___x_199_ = lean_array_uget_borrowed(v_as_195_, v_i_196_);
v_toSignature_200_ = lean_ctor_get(v___x_199_, 0);
v_name_201_ = lean_ctor_get(v_toSignature_200_, 0);
v___x_202_ = lean_name_eq(v_name_201_, v_declName_194_);
if (v___x_202_ == 0)
{
size_t v___x_203_; size_t v___x_204_; 
v___x_203_ = ((size_t)1ULL);
v___x_204_ = lean_usize_add(v_i_196_, v___x_203_);
v_i_196_ = v___x_204_;
goto _start;
}
else
{
return v___x_202_;
}
}
else
{
uint8_t v___x_206_; 
v___x_206_ = 0;
return v___x_206_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0___boxed(lean_object* v_declName_207_, lean_object* v_as_208_, lean_object* v_i_209_, lean_object* v_stop_210_){
_start:
{
size_t v_i_boxed_211_; size_t v_stop_boxed_212_; uint8_t v_res_213_; lean_object* v_r_214_; 
v_i_boxed_211_ = lean_unbox_usize(v_i_209_);
lean_dec(v_i_209_);
v_stop_boxed_212_ = lean_unbox_usize(v_stop_210_);
lean_dec(v_stop_210_);
v_res_213_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(v_declName_207_, v_as_208_, v_i_boxed_211_, v_stop_boxed_212_);
lean_dec_ref(v_as_208_);
lean_dec(v_declName_207_);
v_r_214_ = lean_box(v_res_213_);
return v_r_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock(lean_object* v_declName_215_, lean_object* v_a_216_, lean_object* v_a_217_){
_start:
{
lean_object* v_decls_218_; lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v_decls_218_ = lean_ctor_get(v_a_216_, 0);
v___x_219_ = lean_unsigned_to_nat(0u);
v___x_220_ = lean_array_get_size(v_decls_218_);
v___x_221_ = lean_nat_dec_lt(v___x_219_, v___x_220_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = lean_box(v___x_221_);
v___x_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v_a_217_);
return v___x_223_;
}
else
{
if (v___x_221_ == 0)
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_box(v___x_221_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
lean_ctor_set(v___x_225_, 1, v_a_217_);
return v___x_225_;
}
else
{
size_t v___x_226_; size_t v___x_227_; uint8_t v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_226_ = ((size_t)0ULL);
v___x_227_ = lean_usize_of_nat(v___x_220_);
v___x_228_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(v_declName_215_, v_decls_218_, v___x_226_, v___x_227_);
v___x_229_ = lean_box(v___x_228_);
v___x_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
lean_ctor_set(v___x_230_, 1, v_a_217_);
return v___x_230_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock___boxed(lean_object* v_declName_231_, lean_object* v_a_232_, lean_object* v_a_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lean_Compiler_LCNF_FixedParams_inMutualBlock(v_declName_231_, v_a_232_, v_a_233_);
lean_dec_ref(v_a_232_);
lean_dec(v_declName_231_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(lean_object* v_as_235_, size_t v_sz_236_, size_t v_i_237_, lean_object* v_b_238_){
_start:
{
uint8_t v___x_239_; 
v___x_239_ = lean_usize_dec_lt(v_i_237_, v_sz_236_);
if (v___x_239_ == 0)
{
return v_b_238_;
}
else
{
lean_object* v_snd_240_; lean_object* v_fst_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_274_; 
v_snd_240_ = lean_ctor_get(v_b_238_, 1);
v_fst_241_ = lean_ctor_get(v_b_238_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v_b_238_);
if (v_isSharedCheck_274_ == 0)
{
v___x_243_ = v_b_238_;
v_isShared_244_ = v_isSharedCheck_274_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_snd_240_);
lean_inc(v_fst_241_);
lean_dec(v_b_238_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_274_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v_array_245_; lean_object* v_start_246_; lean_object* v_stop_247_; uint8_t v___x_248_; 
v_array_245_ = lean_ctor_get(v_snd_240_, 0);
v_start_246_ = lean_ctor_get(v_snd_240_, 1);
v_stop_247_ = lean_ctor_get(v_snd_240_, 2);
v___x_248_ = lean_nat_dec_lt(v_start_246_, v_stop_247_);
if (v___x_248_ == 0)
{
lean_object* v___x_250_; 
if (v_isShared_244_ == 0)
{
v___x_250_ = v___x_243_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_fst_241_);
lean_ctor_set(v_reuseFailAlloc_251_, 1, v_snd_240_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
else
{
lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_270_; 
lean_inc(v_stop_247_);
lean_inc(v_start_246_);
lean_inc_ref(v_array_245_);
v_isSharedCheck_270_ = !lean_is_exclusive(v_snd_240_);
if (v_isSharedCheck_270_ == 0)
{
lean_object* v_unused_271_; lean_object* v_unused_272_; lean_object* v_unused_273_; 
v_unused_271_ = lean_ctor_get(v_snd_240_, 2);
lean_dec(v_unused_271_);
v_unused_272_ = lean_ctor_get(v_snd_240_, 1);
lean_dec(v_unused_272_);
v_unused_273_ = lean_ctor_get(v_snd_240_, 0);
lean_dec(v_unused_273_);
v___x_253_ = v_snd_240_;
v_isShared_254_ = v_isSharedCheck_270_;
goto v_resetjp_252_;
}
else
{
lean_dec(v_snd_240_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_270_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v_a_255_; lean_object* v_fvarId_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
v_a_255_ = lean_array_uget_borrowed(v_as_235_, v_i_237_);
v_fvarId_256_ = lean_ctor_get(v_a_255_, 0);
v___x_257_ = lean_array_fget(v_array_245_, v_start_246_);
v___x_258_ = lean_unsigned_to_nat(1u);
v___x_259_ = lean_nat_add(v_start_246_, v___x_258_);
lean_dec(v_start_246_);
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 1, v___x_259_);
v___x_261_ = v___x_253_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_array_245_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v___x_259_);
lean_ctor_set(v_reuseFailAlloc_269_, 2, v_stop_247_);
v___x_261_ = v_reuseFailAlloc_269_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
lean_object* v___x_262_; lean_object* v___x_264_; 
lean_inc(v_fvarId_256_);
v___x_262_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_256_, v___x_257_, v_fst_241_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 1, v___x_261_);
lean_ctor_set(v___x_243_, 0, v___x_262_);
v___x_264_ = v___x_243_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v___x_261_);
v___x_264_ = v_reuseFailAlloc_268_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
size_t v___x_265_; size_t v___x_266_; 
v___x_265_ = ((size_t)1ULL);
v___x_266_ = lean_usize_add(v_i_237_, v___x_265_);
v_i_237_ = v___x_266_;
v_b_238_ = v___x_264_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0___boxed(lean_object* v_as_275_, lean_object* v_sz_276_, lean_object* v_i_277_, lean_object* v_b_278_){
_start:
{
size_t v_sz_boxed_279_; size_t v_i_boxed_280_; lean_object* v_res_281_; 
v_sz_boxed_279_ = lean_unbox_usize(v_sz_276_);
lean_dec(v_sz_276_);
v_i_boxed_280_ = lean_unbox_usize(v_i_277_);
lean_dec(v_i_277_);
v_res_281_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(v_as_275_, v_sz_boxed_279_, v_i_boxed_280_, v_b_278_);
lean_dec_ref(v_as_275_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment(lean_object* v_decl_282_, lean_object* v_values_283_){
_start:
{
lean_object* v_toSignature_284_; lean_object* v_params_285_; lean_object* v___x_286_; lean_object* v_assignment_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; size_t v_sz_291_; size_t v___x_292_; lean_object* v___x_293_; lean_object* v_fst_294_; 
v_toSignature_284_ = lean_ctor_get(v_decl_282_, 0);
v_params_285_ = lean_ctor_get(v_toSignature_284_, 3);
v___x_286_ = lean_array_get_size(v_values_283_);
v_assignment_287_ = lean_box(1);
v___x_288_ = lean_unsigned_to_nat(0u);
v___x_289_ = l_Array_toSubarray___redArg(v_values_283_, v___x_288_, v___x_286_);
v___x_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_290_, 0, v_assignment_287_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v_sz_291_ = lean_array_size(v_params_285_);
v___x_292_ = ((size_t)0ULL);
v___x_293_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(v_params_285_, v_sz_291_, v___x_292_, v___x_290_);
v_fst_294_ = lean_ctor_get(v___x_293_, 0);
lean_inc(v_fst_294_);
lean_dec_ref(v___x_293_);
return v_fst_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment___boxed(lean_object* v_decl_295_, lean_object* v_values_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_Compiler_LCNF_FixedParams_mkAssignment(v_decl_295_, v_values_296_);
lean_dec_ref(v_decl_295_);
return v_res_297_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_298_ = lean_box(0);
v___x_299_ = lean_box(0);
v___x_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
lean_ctor_set(v___x_300_, 1, v___x_298_);
return v___x_300_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = lean_box(0);
v___x_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
return v___x_302_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_303_ = lean_box(0);
v___x_304_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1);
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v___x_303_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(lean_object* v_params_306_, lean_object* v_args_307_, uint8_t v___x_308_, lean_object* v_range_309_, lean_object* v_b_310_, lean_object* v_i_311_, lean_object* v___y_312_){
_start:
{
lean_object* v_stop_313_; lean_object* v_step_314_; uint8_t v___x_315_; 
v_stop_313_ = lean_ctor_get(v_range_309_, 1);
v_step_314_ = lean_ctor_get(v_range_309_, 2);
v___x_315_ = lean_nat_dec_lt(v_i_311_, v_stop_313_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; 
lean_dec(v_i_311_);
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v_b_310_);
lean_ctor_set(v___x_316_, 1, v___y_312_);
return v___x_316_;
}
else
{
lean_object* v___x_317_; lean_object* v_fvarId_318_; lean_object* v___x_319_; lean_object* v_a_321_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; uint8_t v___x_327_; 
lean_dec_ref(v_b_310_);
v___x_317_ = lean_array_fget_borrowed(v_params_306_, v_i_311_);
v_fvarId_318_ = lean_ctor_get(v___x_317_, 0);
v___x_319_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0);
v___x_324_ = lean_box(0);
v___x_325_ = lean_array_get_borrowed(v___x_324_, v_args_307_, v_i_311_);
lean_inc(v_fvarId_318_);
v___x_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_326_, 0, v_fvarId_318_);
v___x_327_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_325_, v___x_326_);
lean_dec_ref(v___x_326_);
if (v___x_327_ == 0)
{
if (v___x_308_ == 0)
{
v_a_321_ = v___y_312_;
goto v___jp_320_;
}
else
{
uint8_t v___x_328_; 
v___x_328_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_325_, v___x_324_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; lean_object* v___x_330_; 
lean_dec(v_i_311_);
v___x_329_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2);
v___x_330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
lean_ctor_set(v___x_330_, 1, v___y_312_);
return v___x_330_;
}
else
{
v_a_321_ = v___y_312_;
goto v___jp_320_;
}
}
}
else
{
v_a_321_ = v___y_312_;
goto v___jp_320_;
}
v___jp_320_:
{
lean_object* v___x_322_; 
v___x_322_ = lean_nat_add(v_i_311_, v_step_314_);
lean_dec(v_i_311_);
v_b_310_ = v___x_319_;
v_i_311_ = v___x_322_;
v___y_312_ = v_a_321_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___boxed(lean_object* v_params_331_, lean_object* v_args_332_, lean_object* v___x_333_, lean_object* v_range_334_, lean_object* v_b_335_, lean_object* v_i_336_, lean_object* v___y_337_){
_start:
{
uint8_t v___x_3934__boxed_338_; lean_object* v_res_339_; 
v___x_3934__boxed_338_ = lean_unbox(v___x_333_);
v_res_339_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(v_params_331_, v_args_332_, v___x_3934__boxed_338_, v_range_334_, v_b_335_, v_i_336_, v___y_337_);
lean_dec_ref(v_range_334_);
lean_dec_ref(v_args_332_);
lean_dec_ref(v_params_331_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(lean_object* v_decl_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
lean_object* v___y_344_; lean_object* v___y_348_; lean_object* v_value_351_; 
v_value_351_ = lean_ctor_get(v_decl_340_, 4);
lean_inc_ref(v_value_351_);
if (lean_obj_tag(v_value_351_) == 0)
{
lean_object* v_decl_352_; lean_object* v_value_353_; 
v_decl_352_ = lean_ctor_get(v_value_351_, 0);
lean_inc_ref(v_decl_352_);
v_value_353_ = lean_ctor_get(v_decl_352_, 3);
lean_inc(v_value_353_);
if (lean_obj_tag(v_value_353_) == 4)
{
lean_object* v_params_354_; lean_object* v_k_355_; lean_object* v_fvarId_356_; lean_object* v_fvarId_357_; lean_object* v_args_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_416_; 
v_params_354_ = lean_ctor_get(v_decl_340_, 2);
lean_inc_ref(v_params_354_);
lean_dec_ref(v_decl_340_);
v_k_355_ = lean_ctor_get(v_value_351_, 1);
lean_inc_ref(v_k_355_);
lean_dec_ref(v_value_351_);
v_fvarId_356_ = lean_ctor_get(v_decl_352_, 0);
lean_inc(v_fvarId_356_);
lean_dec_ref(v_decl_352_);
v_fvarId_357_ = lean_ctor_get(v_value_353_, 0);
v_args_358_ = lean_ctor_get(v_value_353_, 1);
v_isSharedCheck_416_ = !lean_is_exclusive(v_value_353_);
if (v_isSharedCheck_416_ == 0)
{
v___x_360_ = v_value_353_;
v_isShared_361_ = v_isSharedCheck_416_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_args_358_);
lean_inc(v_fvarId_357_);
lean_dec(v_value_353_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_416_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_362_ = lean_array_get_size(v_args_358_);
v___x_363_ = lean_array_get_size(v_params_354_);
v___x_364_ = lean_nat_dec_eq(v___x_362_, v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_367_; 
lean_dec_ref(v_args_358_);
lean_dec(v_fvarId_357_);
lean_dec(v_fvarId_356_);
lean_dec_ref(v_k_355_);
lean_dec_ref(v_params_354_);
v___x_365_ = lean_box(0);
if (v_isShared_361_ == 0)
{
lean_ctor_set_tag(v___x_360_, 0);
lean_ctor_set(v___x_360_, 1, v_a_342_);
lean_ctor_set(v___x_360_, 0, v___x_365_);
v___x_367_ = v___x_360_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_365_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v_a_342_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
else
{
if (lean_obj_tag(v_k_355_) == 5)
{
lean_object* v_fvarId_369_; uint8_t v___x_370_; 
v_fvarId_369_ = lean_ctor_get(v_k_355_, 0);
lean_inc(v_fvarId_369_);
lean_dec_ref(v_k_355_);
v___x_370_ = l_Lean_instBEqFVarId_beq(v_fvarId_369_, v_fvarId_356_);
lean_dec(v_fvarId_356_);
lean_dec(v_fvarId_369_);
if (v___x_370_ == 0)
{
lean_object* v___x_371_; lean_object* v___x_373_; 
lean_dec_ref(v_args_358_);
lean_dec(v_fvarId_357_);
lean_dec_ref(v_params_354_);
v___x_371_ = lean_box(0);
if (v_isShared_361_ == 0)
{
lean_ctor_set_tag(v___x_360_, 0);
lean_ctor_set(v___x_360_, 1, v_a_342_);
lean_ctor_set(v___x_360_, 0, v___x_371_);
v___x_373_ = v___x_360_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_371_);
lean_ctor_set(v_reuseFailAlloc_374_, 1, v_a_342_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
else
{
lean_object* v_assignment_375_; lean_object* v___x_376_; 
lean_del_object(v___x_360_);
v_assignment_375_ = lean_ctor_get(v_a_341_, 2);
v___x_376_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(v_assignment_375_, v_fvarId_357_);
lean_dec(v_fvarId_357_);
if (lean_obj_tag(v___x_376_) == 1)
{
lean_object* v_val_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_411_; 
v_val_377_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_411_ == 0)
{
v___x_379_ = v___x_376_;
v_isShared_380_ = v_isSharedCheck_411_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_val_377_);
lean_dec(v___x_376_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_411_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
if (lean_obj_tag(v_val_377_) == 2)
{
lean_object* v_i_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v_a_387_; lean_object* v_fst_388_; 
v_i_381_ = lean_ctor_get(v_val_377_, 0);
lean_inc(v_i_381_);
lean_dec_ref(v_val_377_);
v___x_382_ = lean_unsigned_to_nat(0u);
v___x_383_ = lean_unsigned_to_nat(1u);
v___x_384_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_384_, 0, v___x_382_);
lean_ctor_set(v___x_384_, 1, v___x_363_);
lean_ctor_set(v___x_384_, 2, v___x_383_);
v___x_385_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0);
v___x_386_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(v_params_354_, v_args_358_, v___x_370_, v___x_384_, v___x_385_, v___x_382_, v_a_342_);
lean_dec_ref(v___x_384_);
lean_dec_ref(v_args_358_);
lean_dec_ref(v_params_354_);
v_a_387_ = lean_ctor_get(v___x_386_, 0);
lean_inc(v_a_387_);
v_fst_388_ = lean_ctor_get(v_a_387_, 0);
lean_inc(v_fst_388_);
lean_dec(v_a_387_);
if (lean_obj_tag(v_fst_388_) == 0)
{
lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_399_; 
v_a_389_ = lean_ctor_get(v___x_386_, 1);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_386_);
if (v_isSharedCheck_399_ == 0)
{
lean_object* v_unused_400_; 
v_unused_400_ = lean_ctor_get(v___x_386_, 0);
lean_dec(v_unused_400_);
v___x_391_ = v___x_386_;
v_isShared_392_ = v_isSharedCheck_399_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_dec(v___x_386_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_399_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_394_; 
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v_i_381_);
v___x_394_ = v___x_379_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_i_381_);
v___x_394_ = v_reuseFailAlloc_398_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
lean_object* v___x_396_; 
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 0, v___x_394_);
v___x_396_ = v___x_391_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v___x_394_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_a_389_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
else
{
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_409_; 
lean_dec(v_i_381_);
lean_del_object(v___x_379_);
v_a_401_ = lean_ctor_get(v___x_386_, 1);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_386_);
if (v_isSharedCheck_409_ == 0)
{
lean_object* v_unused_410_; 
v_unused_410_ = lean_ctor_get(v___x_386_, 0);
lean_dec(v_unused_410_);
v___x_403_ = v___x_386_;
v_isShared_404_ = v_isSharedCheck_409_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_386_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_409_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v_val_405_; lean_object* v___x_407_; 
v_val_405_ = lean_ctor_get(v_fst_388_, 0);
lean_inc(v_val_405_);
lean_dec_ref(v_fst_388_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v_val_405_);
v___x_407_ = v___x_403_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_val_405_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_a_401_);
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
else
{
lean_del_object(v___x_379_);
lean_dec(v_val_377_);
lean_dec_ref(v_args_358_);
lean_dec_ref(v_params_354_);
v___y_348_ = v_a_342_;
goto v___jp_347_;
}
}
}
else
{
lean_dec(v___x_376_);
lean_dec_ref(v_args_358_);
lean_dec_ref(v_params_354_);
v___y_348_ = v_a_342_;
goto v___jp_347_;
}
}
}
else
{
lean_object* v___x_412_; lean_object* v___x_414_; 
lean_dec_ref(v_args_358_);
lean_dec(v_fvarId_357_);
lean_dec(v_fvarId_356_);
lean_dec_ref(v_k_355_);
lean_dec_ref(v_params_354_);
v___x_412_ = lean_box(0);
if (v_isShared_361_ == 0)
{
lean_ctor_set_tag(v___x_360_, 0);
lean_ctor_set(v___x_360_, 1, v_a_342_);
lean_ctor_set(v___x_360_, 0, v___x_412_);
v___x_414_ = v___x_360_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_412_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v_a_342_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
}
else
{
lean_dec(v_value_353_);
lean_dec_ref(v_value_351_);
lean_dec_ref(v_decl_352_);
lean_dec_ref(v_decl_340_);
v___y_344_ = v_a_342_;
goto v___jp_343_;
}
}
else
{
lean_dec_ref(v_value_351_);
lean_dec_ref(v_decl_340_);
v___y_344_ = v_a_342_;
goto v___jp_343_;
}
v___jp_343_:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_box(0);
v___x_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
lean_ctor_set(v___x_346_, 1, v___y_344_);
return v___x_346_;
}
v___jp_347_:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = lean_box(0);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
lean_ctor_set(v___x_350_, 1, v___y_348_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f___boxed(lean_object* v_decl_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(v_decl_417_, v_a_418_, v_a_419_);
lean_dec_ref(v_a_418_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0(lean_object* v_params_421_, lean_object* v_args_422_, uint8_t v___x_423_, lean_object* v_range_424_, lean_object* v_b_425_, lean_object* v_i_426_, lean_object* v_hs_427_, lean_object* v_hl_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(v_params_421_, v_args_422_, v___x_423_, v_range_424_, v_b_425_, v_i_426_, v___y_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___boxed(lean_object* v_params_432_, lean_object* v_args_433_, lean_object* v___x_434_, lean_object* v_range_435_, lean_object* v_b_436_, lean_object* v_i_437_, lean_object* v_hs_438_, lean_object* v_hl_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
uint8_t v___x_4138__boxed_442_; lean_object* v_res_443_; 
v___x_4138__boxed_442_ = lean_unbox(v___x_434_);
v_res_443_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0(v_params_432_, v_args_433_, v___x_4138__boxed_442_, v_range_435_, v_b_436_, v_i_437_, v_hs_438_, v_hl_439_, v___y_440_, v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec_ref(v_range_435_);
lean_dec_ref(v_args_433_);
lean_dec_ref(v_params_432_);
return v_res_443_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(uint8_t v_a_444_, lean_object* v_as_445_, size_t v_i_446_, size_t v_stop_447_){
_start:
{
uint8_t v___x_452_; 
v___x_452_ = lean_usize_dec_eq(v_i_446_, v_stop_447_);
if (v___x_452_ == 0)
{
uint8_t v___x_453_; lean_object* v___x_454_; 
v___x_453_ = 1;
v___x_454_ = lean_array_uget_borrowed(v_as_445_, v_i_446_);
if (v_a_444_ == 0)
{
uint8_t v___x_455_; 
v___x_455_ = lean_unbox(v___x_454_);
if (v___x_455_ == 0)
{
return v___x_453_;
}
else
{
goto v___jp_448_;
}
}
else
{
uint8_t v___x_456_; 
v___x_456_ = lean_unbox(v___x_454_);
if (v___x_456_ == 0)
{
goto v___jp_448_;
}
else
{
return v___x_453_;
}
}
}
else
{
uint8_t v___x_457_; 
v___x_457_ = 0;
return v___x_457_;
}
v___jp_448_:
{
size_t v___x_449_; size_t v___x_450_; 
v___x_449_ = ((size_t)1ULL);
v___x_450_ = lean_usize_add(v_i_446_, v___x_449_);
v_i_446_ = v___x_450_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9___boxed(lean_object* v_a_458_, lean_object* v_as_459_, lean_object* v_i_460_, lean_object* v_stop_461_){
_start:
{
uint8_t v_a_boxed_462_; size_t v_i_boxed_463_; size_t v_stop_boxed_464_; uint8_t v_res_465_; lean_object* v_r_466_; 
v_a_boxed_462_ = lean_unbox(v_a_458_);
v_i_boxed_463_ = lean_unbox_usize(v_i_460_);
lean_dec(v_i_460_);
v_stop_boxed_464_ = lean_unbox_usize(v_stop_461_);
lean_dec(v_stop_461_);
v_res_465_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(v_a_boxed_462_, v_as_459_, v_i_boxed_463_, v_stop_boxed_464_);
lean_dec_ref(v_as_459_);
v_r_466_ = lean_box(v_res_465_);
return v_r_466_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(lean_object* v_as_467_, uint8_t v_a_468_){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_469_ = lean_unsigned_to_nat(0u);
v___x_470_ = lean_array_get_size(v_as_467_);
v___x_471_ = lean_nat_dec_lt(v___x_469_, v___x_470_);
if (v___x_471_ == 0)
{
return v___x_471_;
}
else
{
if (v___x_471_ == 0)
{
return v___x_471_;
}
else
{
size_t v___x_472_; size_t v___x_473_; uint8_t v___x_474_; 
v___x_472_ = ((size_t)0ULL);
v___x_473_ = lean_usize_of_nat(v___x_470_);
v___x_474_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(v_a_468_, v_as_467_, v___x_472_, v___x_473_);
return v___x_474_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6___boxed(lean_object* v_as_475_, lean_object* v_a_476_){
_start:
{
uint8_t v_a_boxed_477_; uint8_t v_res_478_; lean_object* v_r_479_; 
v_a_boxed_477_ = lean_unbox(v_a_476_);
v_res_478_ = l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(v_as_475_, v_a_boxed_477_);
lean_dec_ref(v_as_475_);
v_r_479_ = lean_box(v_res_478_);
return v_r_479_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(lean_object* v_upperBound_480_, lean_object* v_args_481_, lean_object* v_a_482_, lean_object* v_b_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_a_487_; lean_object* v_a_488_; uint8_t v___x_492_; 
v___x_492_ = lean_nat_dec_lt(v_a_482_, v_upperBound_480_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; 
lean_dec(v_a_482_);
v___x_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_493_, 0, v_b_483_);
lean_ctor_set(v___x_493_, 1, v___y_485_);
return v___x_493_;
}
else
{
lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v___x_494_ = lean_box(0);
v___x_495_ = lean_array_get_size(v_args_481_);
v___x_496_ = lean_nat_dec_lt(v_a_482_, v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v_visited_497_; lean_object* v_fixed_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_507_; 
v_visited_497_ = lean_ctor_get(v___y_485_, 0);
v_fixed_498_ = lean_ctor_get(v___y_485_, 1);
v_isSharedCheck_507_ = !lean_is_exclusive(v___y_485_);
if (v_isSharedCheck_507_ == 0)
{
v___x_500_ = v___y_485_;
v_isShared_501_ = v_isSharedCheck_507_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_fixed_498_);
lean_inc(v_visited_497_);
lean_dec(v___y_485_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_507_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_502_ = lean_box(v___x_496_);
v___x_503_ = lean_array_set(v_fixed_498_, v_a_482_, v___x_502_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 1, v___x_503_);
v___x_505_ = v___x_500_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_visited_497_);
lean_ctor_set(v_reuseFailAlloc_506_, 1, v___x_503_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
v_a_487_ = v___x_494_;
v_a_488_ = v___x_505_;
goto v___jp_486_;
}
}
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_array_fget_borrowed(v_args_481_, v_a_482_);
v___x_509_ = l_Lean_Compiler_LCNF_FixedParams_evalArg(v___x_508_, v___y_484_, v___y_485_);
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v_a_510_; lean_object* v_a_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v_a_510_ = lean_ctor_get(v___x_509_, 0);
lean_inc(v_a_510_);
v_a_511_ = lean_ctor_get(v___x_509_, 1);
lean_inc(v_a_511_);
lean_dec_ref(v___x_509_);
lean_inc(v_a_482_);
v___x_512_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_512_, 0, v_a_482_);
v___x_513_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v_a_510_, v___x_512_);
lean_dec_ref(v___x_512_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; uint8_t v___x_515_; 
v___x_514_ = lean_box(1);
v___x_515_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v_a_510_, v___x_514_);
lean_dec(v_a_510_);
if (v___x_515_ == 0)
{
lean_object* v_visited_516_; lean_object* v_fixed_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_526_; 
v_visited_516_ = lean_ctor_get(v_a_511_, 0);
v_fixed_517_ = lean_ctor_get(v_a_511_, 1);
v_isSharedCheck_526_ = !lean_is_exclusive(v_a_511_);
if (v_isSharedCheck_526_ == 0)
{
v___x_519_ = v_a_511_;
v_isShared_520_ = v_isSharedCheck_526_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_fixed_517_);
lean_inc(v_visited_516_);
lean_dec(v_a_511_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_526_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_524_; 
v___x_521_ = lean_box(v___x_515_);
v___x_522_ = lean_array_set(v_fixed_517_, v_a_482_, v___x_521_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 1, v___x_522_);
v___x_524_ = v___x_519_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_visited_516_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v___x_522_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
v_a_487_ = v___x_494_;
v_a_488_ = v___x_524_;
goto v___jp_486_;
}
}
}
else
{
v_a_487_ = v___x_494_;
v_a_488_ = v_a_511_;
goto v___jp_486_;
}
}
else
{
lean_dec(v_a_510_);
v_a_487_ = v___x_494_;
v_a_488_ = v_a_511_;
goto v___jp_486_;
}
}
else
{
lean_object* v_a_527_; lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_535_; 
lean_dec(v_a_482_);
v_a_527_ = lean_ctor_get(v___x_509_, 0);
v_a_528_ = lean_ctor_get(v___x_509_, 1);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_535_ == 0)
{
v___x_530_ = v___x_509_;
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_inc(v_a_527_);
lean_dec(v___x_509_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_533_; 
if (v_isShared_531_ == 0)
{
v___x_533_ = v___x_530_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_527_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_a_528_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
}
v___jp_486_:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = lean_unsigned_to_nat(1u);
v___x_490_ = lean_nat_add(v_a_482_, v___x_489_);
lean_dec(v_a_482_);
v_a_482_ = v___x_490_;
v_b_483_ = v_a_487_;
v___y_485_ = v_a_488_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg___boxed(lean_object* v_upperBound_536_, lean_object* v_args_537_, lean_object* v_a_538_, lean_object* v_b_539_, lean_object* v___y_540_, lean_object* v___y_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(v_upperBound_536_, v_args_537_, v_a_538_, v_b_539_, v___y_540_, v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec_ref(v_args_537_);
lean_dec(v_upperBound_536_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(lean_object* v_f_543_, lean_object* v_v_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
if (lean_obj_tag(v_v_544_) == 0)
{
lean_object* v_code_547_; lean_object* v___x_548_; 
v_code_547_ = lean_ctor_get(v_v_544_, 0);
lean_inc_ref(v_code_547_);
lean_dec_ref(v_v_544_);
lean_inc_ref(v___y_545_);
v___x_548_ = lean_apply_3(v_f_543_, v_code_547_, v___y_545_, v___y_546_);
return v___x_548_;
}
else
{
lean_object* v___x_549_; lean_object* v___x_550_; 
lean_dec_ref(v_v_544_);
lean_dec_ref(v_f_543_);
v___x_549_ = lean_box(0);
v___x_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set(v___x_550_, 1, v___y_546_);
return v___x_550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg___boxed(lean_object* v_f_551_, lean_object* v_v_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(v_f_551_, v_v_552_, v___y_553_, v___y_554_);
lean_dec_ref(v___y_553_);
return v_res_555_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(lean_object* v_xs_556_, lean_object* v_ys_557_, lean_object* v_x_558_){
_start:
{
lean_object* v_zero_559_; uint8_t v_isZero_560_; 
v_zero_559_ = lean_unsigned_to_nat(0u);
v_isZero_560_ = lean_nat_dec_eq(v_x_558_, v_zero_559_);
if (v_isZero_560_ == 1)
{
lean_dec(v_x_558_);
return v_isZero_560_;
}
else
{
lean_object* v_one_561_; lean_object* v_n_562_; lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; 
v_one_561_ = lean_unsigned_to_nat(1u);
v_n_562_ = lean_nat_sub(v_x_558_, v_one_561_);
lean_dec(v_x_558_);
v___x_563_ = lean_array_fget_borrowed(v_xs_556_, v_n_562_);
v___x_564_ = lean_array_fget_borrowed(v_ys_557_, v_n_562_);
v___x_565_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v___x_563_, v___x_564_);
if (v___x_565_ == 0)
{
lean_dec(v_n_562_);
return v___x_565_;
}
else
{
v_x_558_ = v_n_562_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_xs_567_, lean_object* v_ys_568_, lean_object* v_x_569_){
_start:
{
uint8_t v_res_570_; lean_object* v_r_571_; 
v_res_570_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(v_xs_567_, v_ys_568_, v_x_569_);
lean_dec_ref(v_ys_568_);
lean_dec_ref(v_xs_567_);
v_r_571_ = lean_box(v_res_570_);
return v_r_571_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(lean_object* v_a_572_, lean_object* v_x_573_){
_start:
{
if (lean_obj_tag(v_x_573_) == 0)
{
uint8_t v___x_574_; 
v___x_574_ = 0;
return v___x_574_;
}
else
{
lean_object* v_key_575_; lean_object* v_tail_576_; uint8_t v___y_578_; lean_object* v_fst_580_; lean_object* v_snd_581_; lean_object* v_fst_582_; lean_object* v_snd_583_; uint8_t v___x_584_; 
v_key_575_ = lean_ctor_get(v_x_573_, 0);
v_tail_576_ = lean_ctor_get(v_x_573_, 2);
v_fst_580_ = lean_ctor_get(v_key_575_, 0);
v_snd_581_ = lean_ctor_get(v_key_575_, 1);
v_fst_582_ = lean_ctor_get(v_a_572_, 0);
v_snd_583_ = lean_ctor_get(v_a_572_, 1);
v___x_584_ = lean_name_eq(v_fst_580_, v_fst_582_);
if (v___x_584_ == 0)
{
v___y_578_ = v___x_584_;
goto v___jp_577_;
}
else
{
lean_object* v___x_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v___x_585_ = lean_array_get_size(v_snd_581_);
v___x_586_ = lean_array_get_size(v_snd_583_);
v___x_587_ = lean_nat_dec_eq(v___x_585_, v___x_586_);
if (v___x_587_ == 0)
{
v_x_573_ = v_tail_576_;
goto _start;
}
else
{
uint8_t v___x_589_; 
v___x_589_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(v_snd_581_, v_snd_583_, v___x_585_);
v___y_578_ = v___x_589_;
goto v___jp_577_;
}
}
v___jp_577_:
{
if (v___y_578_ == 0)
{
v_x_573_ = v_tail_576_;
goto _start;
}
else
{
return v___y_578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg___boxed(lean_object* v_a_590_, lean_object* v_x_591_){
_start:
{
uint8_t v_res_592_; lean_object* v_r_593_; 
v_res_592_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_590_, v_x_591_);
lean_dec(v_x_591_);
lean_dec_ref(v_a_590_);
v_r_593_ = lean_box(v_res_592_);
return v_r_593_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(lean_object* v_as_594_, size_t v_i_595_, size_t v_stop_596_, uint64_t v_b_597_){
_start:
{
uint8_t v___x_598_; 
v___x_598_ = lean_usize_dec_eq(v_i_595_, v_stop_596_);
if (v___x_598_ == 0)
{
lean_object* v___x_599_; uint64_t v___x_600_; uint64_t v___x_601_; size_t v___x_602_; size_t v___x_603_; 
v___x_599_ = lean_array_uget_borrowed(v_as_594_, v_i_595_);
v___x_600_ = l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(v___x_599_);
v___x_601_ = lean_uint64_mix_hash(v_b_597_, v___x_600_);
v___x_602_ = ((size_t)1ULL);
v___x_603_ = lean_usize_add(v_i_595_, v___x_602_);
v_i_595_ = v___x_603_;
v_b_597_ = v___x_601_;
goto _start;
}
else
{
return v_b_597_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2___boxed(lean_object* v_as_605_, lean_object* v_i_606_, lean_object* v_stop_607_, lean_object* v_b_608_){
_start:
{
size_t v_i_boxed_609_; size_t v_stop_boxed_610_; uint64_t v_b_boxed_611_; uint64_t v_res_612_; lean_object* v_r_613_; 
v_i_boxed_609_ = lean_unbox_usize(v_i_606_);
lean_dec(v_i_606_);
v_stop_boxed_610_ = lean_unbox_usize(v_stop_607_);
lean_dec(v_stop_607_);
v_b_boxed_611_ = lean_unbox_uint64(v_b_608_);
lean_dec_ref(v_b_608_);
v_res_612_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_as_605_, v_i_boxed_609_, v_stop_boxed_610_, v_b_boxed_611_);
lean_dec_ref(v_as_605_);
v_r_613_ = lean_box_uint64(v_res_612_);
return v_r_613_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_614_; uint64_t v___x_615_; 
v___x_614_ = lean_unsigned_to_nat(1723u);
v___x_615_ = lean_uint64_of_nat(v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(lean_object* v_m_616_, lean_object* v_a_617_){
_start:
{
lean_object* v_buckets_618_; lean_object* v_fst_619_; lean_object* v_snd_620_; lean_object* v___x_621_; uint64_t v___y_623_; uint64_t v___y_624_; uint64_t v___y_640_; 
v_buckets_618_ = lean_ctor_get(v_m_616_, 1);
v_fst_619_ = lean_ctor_get(v_a_617_, 0);
v_snd_620_ = lean_ctor_get(v_a_617_, 1);
v___x_621_ = lean_array_get_size(v_buckets_618_);
if (lean_obj_tag(v_fst_619_) == 0)
{
uint64_t v___x_652_; 
v___x_652_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___closed__0);
v___y_640_ = v___x_652_;
goto v___jp_639_;
}
else
{
uint64_t v_hash_653_; 
v_hash_653_ = lean_ctor_get_uint64(v_fst_619_, sizeof(void*)*2);
v___y_640_ = v_hash_653_;
goto v___jp_639_;
}
v___jp_622_:
{
uint64_t v___x_625_; uint64_t v___x_626_; uint64_t v___x_627_; uint64_t v_fold_628_; uint64_t v___x_629_; uint64_t v___x_630_; uint64_t v___x_631_; size_t v___x_632_; size_t v___x_633_; size_t v___x_634_; size_t v___x_635_; size_t v___x_636_; lean_object* v___x_637_; uint8_t v___x_638_; 
v___x_625_ = lean_uint64_mix_hash(v___y_623_, v___y_624_);
v___x_626_ = 32ULL;
v___x_627_ = lean_uint64_shift_right(v___x_625_, v___x_626_);
v_fold_628_ = lean_uint64_xor(v___x_625_, v___x_627_);
v___x_629_ = 16ULL;
v___x_630_ = lean_uint64_shift_right(v_fold_628_, v___x_629_);
v___x_631_ = lean_uint64_xor(v_fold_628_, v___x_630_);
v___x_632_ = lean_uint64_to_usize(v___x_631_);
v___x_633_ = lean_usize_of_nat(v___x_621_);
v___x_634_ = ((size_t)1ULL);
v___x_635_ = lean_usize_sub(v___x_633_, v___x_634_);
v___x_636_ = lean_usize_land(v___x_632_, v___x_635_);
v___x_637_ = lean_array_uget_borrowed(v_buckets_618_, v___x_636_);
v___x_638_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_617_, v___x_637_);
return v___x_638_;
}
v___jp_639_:
{
uint64_t v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_641_ = 7ULL;
v___x_642_ = lean_unsigned_to_nat(0u);
v___x_643_ = lean_array_get_size(v_snd_620_);
v___x_644_ = lean_nat_dec_lt(v___x_642_, v___x_643_);
if (v___x_644_ == 0)
{
v___y_623_ = v___y_640_;
v___y_624_ = v___x_641_;
goto v___jp_622_;
}
else
{
uint8_t v___x_645_; 
v___x_645_ = lean_nat_dec_le(v___x_643_, v___x_643_);
if (v___x_645_ == 0)
{
if (v___x_644_ == 0)
{
v___y_623_ = v___y_640_;
v___y_624_ = v___x_641_;
goto v___jp_622_;
}
else
{
size_t v___x_646_; size_t v___x_647_; uint64_t v___x_648_; 
v___x_646_ = ((size_t)0ULL);
v___x_647_ = lean_usize_of_nat(v___x_643_);
v___x_648_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_620_, v___x_646_, v___x_647_, v___x_641_);
v___y_623_ = v___y_640_;
v___y_624_ = v___x_648_;
goto v___jp_622_;
}
}
else
{
size_t v___x_649_; size_t v___x_650_; uint64_t v___x_651_; 
v___x_649_ = ((size_t)0ULL);
v___x_650_ = lean_usize_of_nat(v___x_643_);
v___x_651_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_620_, v___x_649_, v___x_650_, v___x_641_);
v___y_623_ = v___y_640_;
v___y_624_ = v___x_651_;
goto v___jp_622_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___boxed(lean_object* v_m_654_, lean_object* v_a_655_){
_start:
{
uint8_t v_res_656_; lean_object* v_r_657_; 
v_res_656_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(v_m_654_, v_a_655_);
lean_dec_ref(v_a_655_);
lean_dec_ref(v_m_654_);
v_r_657_ = lean_box(v_res_656_);
return v_r_657_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(lean_object* v_upperBound_658_, lean_object* v_args_659_, lean_object* v_a_660_, lean_object* v_b_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
lean_object* v_a_665_; lean_object* v_a_666_; uint8_t v___x_670_; 
v___x_670_ = lean_nat_dec_lt(v_a_660_, v_upperBound_658_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; 
lean_dec(v_a_660_);
v___x_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_671_, 0, v_b_661_);
lean_ctor_set(v___x_671_, 1, v___y_663_);
return v___x_671_;
}
else
{
lean_object* v___x_672_; uint8_t v___x_673_; 
v___x_672_ = lean_array_get_size(v_args_659_);
v___x_673_ = lean_nat_dec_lt(v_a_660_, v___x_672_);
if (v___x_673_ == 0)
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = lean_box(0);
v___x_675_ = lean_array_push(v_b_661_, v___x_674_);
v_a_665_ = v___x_675_;
v_a_666_ = v___y_663_;
goto v___jp_664_;
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = lean_array_fget_borrowed(v_args_659_, v_a_660_);
v___x_677_ = l_Lean_Compiler_LCNF_FixedParams_evalArg(v___x_676_, v___y_662_, v___y_663_);
if (lean_obj_tag(v___x_677_) == 0)
{
lean_object* v_a_678_; lean_object* v_a_679_; lean_object* v___x_680_; 
v_a_678_ = lean_ctor_get(v___x_677_, 0);
lean_inc(v_a_678_);
v_a_679_ = lean_ctor_get(v___x_677_, 1);
lean_inc(v_a_679_);
lean_dec_ref(v___x_677_);
v___x_680_ = lean_array_push(v_b_661_, v_a_678_);
v_a_665_ = v___x_680_;
v_a_666_ = v_a_679_;
goto v___jp_664_;
}
else
{
lean_object* v_a_681_; lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
lean_dec_ref(v_b_661_);
lean_dec(v_a_660_);
v_a_681_ = lean_ctor_get(v___x_677_, 0);
v_a_682_ = lean_ctor_get(v___x_677_, 1);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v___x_677_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_inc(v_a_681_);
lean_dec(v___x_677_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_681_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v_a_682_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
}
v___jp_664_:
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = lean_unsigned_to_nat(1u);
v___x_668_ = lean_nat_add(v_a_660_, v___x_667_);
lean_dec(v_a_660_);
v_a_660_ = v___x_668_;
v_b_661_ = v_a_665_;
v___y_663_ = v_a_666_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg___boxed(lean_object* v_upperBound_690_, lean_object* v_args_691_, lean_object* v_a_692_, lean_object* v_b_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(v_upperBound_690_, v_args_691_, v_a_692_, v_b_693_, v___y_694_, v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec_ref(v_args_691_);
lean_dec(v_upperBound_690_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(lean_object* v_x_697_, lean_object* v_x_698_){
_start:
{
if (lean_obj_tag(v_x_698_) == 0)
{
return v_x_697_;
}
else
{
lean_object* v_key_699_; lean_object* v_value_700_; lean_object* v_tail_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_744_; 
v_key_699_ = lean_ctor_get(v_x_698_, 0);
v_value_700_ = lean_ctor_get(v_x_698_, 1);
v_tail_701_ = lean_ctor_get(v_x_698_, 2);
v_isSharedCheck_744_ = !lean_is_exclusive(v_x_698_);
if (v_isSharedCheck_744_ == 0)
{
v___x_703_ = v_x_698_;
v_isShared_704_ = v_isSharedCheck_744_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_tail_701_);
lean_inc(v_value_700_);
lean_inc(v_key_699_);
lean_dec(v_x_698_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_744_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v_fst_705_; lean_object* v_snd_706_; lean_object* v___x_707_; uint64_t v___y_709_; uint64_t v___y_710_; uint64_t v___y_730_; 
v_fst_705_ = lean_ctor_get(v_key_699_, 0);
v_snd_706_ = lean_ctor_get(v_key_699_, 1);
v___x_707_ = lean_array_get_size(v_x_697_);
if (lean_obj_tag(v_fst_705_) == 0)
{
uint64_t v___x_742_; 
v___x_742_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___closed__0);
v___y_730_ = v___x_742_;
goto v___jp_729_;
}
else
{
uint64_t v_hash_743_; 
v_hash_743_ = lean_ctor_get_uint64(v_fst_705_, sizeof(void*)*2);
v___y_730_ = v_hash_743_;
goto v___jp_729_;
}
v___jp_708_:
{
uint64_t v___x_711_; uint64_t v___x_712_; uint64_t v___x_713_; uint64_t v_fold_714_; uint64_t v___x_715_; uint64_t v___x_716_; uint64_t v___x_717_; size_t v___x_718_; size_t v___x_719_; size_t v___x_720_; size_t v___x_721_; size_t v___x_722_; lean_object* v___x_723_; lean_object* v___x_725_; 
v___x_711_ = lean_uint64_mix_hash(v___y_709_, v___y_710_);
v___x_712_ = 32ULL;
v___x_713_ = lean_uint64_shift_right(v___x_711_, v___x_712_);
v_fold_714_ = lean_uint64_xor(v___x_711_, v___x_713_);
v___x_715_ = 16ULL;
v___x_716_ = lean_uint64_shift_right(v_fold_714_, v___x_715_);
v___x_717_ = lean_uint64_xor(v_fold_714_, v___x_716_);
v___x_718_ = lean_uint64_to_usize(v___x_717_);
v___x_719_ = lean_usize_of_nat(v___x_707_);
v___x_720_ = ((size_t)1ULL);
v___x_721_ = lean_usize_sub(v___x_719_, v___x_720_);
v___x_722_ = lean_usize_land(v___x_718_, v___x_721_);
v___x_723_ = lean_array_uget_borrowed(v_x_697_, v___x_722_);
lean_inc(v___x_723_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 2, v___x_723_);
v___x_725_ = v___x_703_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_key_699_);
lean_ctor_set(v_reuseFailAlloc_728_, 1, v_value_700_);
lean_ctor_set(v_reuseFailAlloc_728_, 2, v___x_723_);
v___x_725_ = v_reuseFailAlloc_728_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
lean_object* v___x_726_; 
v___x_726_ = lean_array_uset(v_x_697_, v___x_722_, v___x_725_);
v_x_697_ = v___x_726_;
v_x_698_ = v_tail_701_;
goto _start;
}
}
v___jp_729_:
{
uint64_t v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; uint8_t v___x_734_; 
v___x_731_ = 7ULL;
v___x_732_ = lean_unsigned_to_nat(0u);
v___x_733_ = lean_array_get_size(v_snd_706_);
v___x_734_ = lean_nat_dec_lt(v___x_732_, v___x_733_);
if (v___x_734_ == 0)
{
v___y_709_ = v___y_730_;
v___y_710_ = v___x_731_;
goto v___jp_708_;
}
else
{
uint8_t v___x_735_; 
v___x_735_ = lean_nat_dec_le(v___x_733_, v___x_733_);
if (v___x_735_ == 0)
{
if (v___x_734_ == 0)
{
v___y_709_ = v___y_730_;
v___y_710_ = v___x_731_;
goto v___jp_708_;
}
else
{
size_t v___x_736_; size_t v___x_737_; uint64_t v___x_738_; 
v___x_736_ = ((size_t)0ULL);
v___x_737_ = lean_usize_of_nat(v___x_733_);
v___x_738_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_706_, v___x_736_, v___x_737_, v___x_731_);
v___y_709_ = v___y_730_;
v___y_710_ = v___x_738_;
goto v___jp_708_;
}
}
else
{
size_t v___x_739_; size_t v___x_740_; uint64_t v___x_741_; 
v___x_739_ = ((size_t)0ULL);
v___x_740_ = lean_usize_of_nat(v___x_733_);
v___x_741_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_706_, v___x_739_, v___x_740_, v___x_731_);
v___y_709_ = v___y_730_;
v___y_710_ = v___x_741_;
goto v___jp_708_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(lean_object* v_i_745_, lean_object* v_source_746_, lean_object* v_target_747_){
_start:
{
lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_748_ = lean_array_get_size(v_source_746_);
v___x_749_ = lean_nat_dec_lt(v_i_745_, v___x_748_);
if (v___x_749_ == 0)
{
lean_dec_ref(v_source_746_);
lean_dec(v_i_745_);
return v_target_747_;
}
else
{
lean_object* v_es_750_; lean_object* v___x_751_; lean_object* v_source_752_; lean_object* v_target_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v_es_750_ = lean_array_fget(v_source_746_, v_i_745_);
v___x_751_ = lean_box(0);
v_source_752_ = lean_array_fset(v_source_746_, v_i_745_, v___x_751_);
v_target_753_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(v_target_747_, v_es_750_);
v___x_754_ = lean_unsigned_to_nat(1u);
v___x_755_ = lean_nat_add(v_i_745_, v___x_754_);
lean_dec(v_i_745_);
v_i_745_ = v___x_755_;
v_source_746_ = v_source_752_;
v_target_747_ = v_target_753_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(lean_object* v_data_757_){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v_nbuckets_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_758_ = lean_array_get_size(v_data_757_);
v___x_759_ = lean_unsigned_to_nat(2u);
v_nbuckets_760_ = lean_nat_mul(v___x_758_, v___x_759_);
v___x_761_ = lean_unsigned_to_nat(0u);
v___x_762_ = lean_box(0);
v___x_763_ = lean_mk_array(v_nbuckets_760_, v___x_762_);
v___x_764_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(v___x_761_, v_data_757_, v___x_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(lean_object* v_m_765_, lean_object* v_a_766_, lean_object* v_b_767_){
_start:
{
lean_object* v_size_768_; lean_object* v_buckets_769_; lean_object* v_fst_770_; lean_object* v_snd_771_; lean_object* v___x_772_; uint64_t v___y_774_; uint64_t v___y_775_; uint64_t v___y_814_; 
v_size_768_ = lean_ctor_get(v_m_765_, 0);
v_buckets_769_ = lean_ctor_get(v_m_765_, 1);
v_fst_770_ = lean_ctor_get(v_a_766_, 0);
v_snd_771_ = lean_ctor_get(v_a_766_, 1);
v___x_772_ = lean_array_get_size(v_buckets_769_);
if (lean_obj_tag(v_fst_770_) == 0)
{
uint64_t v___x_826_; 
v___x_826_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___closed__0);
v___y_814_ = v___x_826_;
goto v___jp_813_;
}
else
{
uint64_t v_hash_827_; 
v_hash_827_ = lean_ctor_get_uint64(v_fst_770_, sizeof(void*)*2);
v___y_814_ = v_hash_827_;
goto v___jp_813_;
}
v___jp_773_:
{
uint64_t v___x_776_; uint64_t v___x_777_; uint64_t v___x_778_; uint64_t v_fold_779_; uint64_t v___x_780_; uint64_t v___x_781_; uint64_t v___x_782_; size_t v___x_783_; size_t v___x_784_; size_t v___x_785_; size_t v___x_786_; size_t v___x_787_; lean_object* v_bkt_788_; uint8_t v___x_789_; 
v___x_776_ = lean_uint64_mix_hash(v___y_774_, v___y_775_);
v___x_777_ = 32ULL;
v___x_778_ = lean_uint64_shift_right(v___x_776_, v___x_777_);
v_fold_779_ = lean_uint64_xor(v___x_776_, v___x_778_);
v___x_780_ = 16ULL;
v___x_781_ = lean_uint64_shift_right(v_fold_779_, v___x_780_);
v___x_782_ = lean_uint64_xor(v_fold_779_, v___x_781_);
v___x_783_ = lean_uint64_to_usize(v___x_782_);
v___x_784_ = lean_usize_of_nat(v___x_772_);
v___x_785_ = ((size_t)1ULL);
v___x_786_ = lean_usize_sub(v___x_784_, v___x_785_);
v___x_787_ = lean_usize_land(v___x_783_, v___x_786_);
v_bkt_788_ = lean_array_uget_borrowed(v_buckets_769_, v___x_787_);
v___x_789_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_766_, v_bkt_788_);
if (v___x_789_ == 0)
{
lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_810_; 
lean_inc_ref(v_buckets_769_);
lean_inc(v_size_768_);
v_isSharedCheck_810_ = !lean_is_exclusive(v_m_765_);
if (v_isSharedCheck_810_ == 0)
{
lean_object* v_unused_811_; lean_object* v_unused_812_; 
v_unused_811_ = lean_ctor_get(v_m_765_, 1);
lean_dec(v_unused_811_);
v_unused_812_ = lean_ctor_get(v_m_765_, 0);
lean_dec(v_unused_812_);
v___x_791_ = v_m_765_;
v_isShared_792_ = v_isSharedCheck_810_;
goto v_resetjp_790_;
}
else
{
lean_dec(v_m_765_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_810_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_793_; lean_object* v_size_x27_794_; lean_object* v___x_795_; lean_object* v_buckets_x27_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; uint8_t v___x_802_; 
v___x_793_ = lean_unsigned_to_nat(1u);
v_size_x27_794_ = lean_nat_add(v_size_768_, v___x_793_);
lean_dec(v_size_768_);
lean_inc(v_bkt_788_);
v___x_795_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_795_, 0, v_a_766_);
lean_ctor_set(v___x_795_, 1, v_b_767_);
lean_ctor_set(v___x_795_, 2, v_bkt_788_);
v_buckets_x27_796_ = lean_array_uset(v_buckets_769_, v___x_787_, v___x_795_);
v___x_797_ = lean_unsigned_to_nat(4u);
v___x_798_ = lean_nat_mul(v_size_x27_794_, v___x_797_);
v___x_799_ = lean_unsigned_to_nat(3u);
v___x_800_ = lean_nat_div(v___x_798_, v___x_799_);
lean_dec(v___x_798_);
v___x_801_ = lean_array_get_size(v_buckets_x27_796_);
v___x_802_ = lean_nat_dec_le(v___x_800_, v___x_801_);
lean_dec(v___x_800_);
if (v___x_802_ == 0)
{
lean_object* v_val_803_; lean_object* v___x_805_; 
v_val_803_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(v_buckets_x27_796_);
if (v_isShared_792_ == 0)
{
lean_ctor_set(v___x_791_, 1, v_val_803_);
lean_ctor_set(v___x_791_, 0, v_size_x27_794_);
v___x_805_ = v___x_791_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_size_x27_794_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v_val_803_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
else
{
lean_object* v___x_808_; 
if (v_isShared_792_ == 0)
{
lean_ctor_set(v___x_791_, 1, v_buckets_x27_796_);
lean_ctor_set(v___x_791_, 0, v_size_x27_794_);
v___x_808_ = v___x_791_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_size_x27_794_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v_buckets_x27_796_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
}
else
{
lean_dec(v_b_767_);
lean_dec_ref(v_a_766_);
return v_m_765_;
}
}
v___jp_813_:
{
uint64_t v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; uint8_t v___x_818_; 
v___x_815_ = 7ULL;
v___x_816_ = lean_unsigned_to_nat(0u);
v___x_817_ = lean_array_get_size(v_snd_771_);
v___x_818_ = lean_nat_dec_lt(v___x_816_, v___x_817_);
if (v___x_818_ == 0)
{
v___y_774_ = v___y_814_;
v___y_775_ = v___x_815_;
goto v___jp_773_;
}
else
{
uint8_t v___x_819_; 
v___x_819_ = lean_nat_dec_le(v___x_817_, v___x_817_);
if (v___x_819_ == 0)
{
if (v___x_818_ == 0)
{
v___y_774_ = v___y_814_;
v___y_775_ = v___x_815_;
goto v___jp_773_;
}
else
{
size_t v___x_820_; size_t v___x_821_; uint64_t v___x_822_; 
v___x_820_ = ((size_t)0ULL);
v___x_821_ = lean_usize_of_nat(v___x_817_);
v___x_822_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_771_, v___x_820_, v___x_821_, v___x_815_);
v___y_774_ = v___y_814_;
v___y_775_ = v___x_822_;
goto v___jp_773_;
}
}
else
{
size_t v___x_823_; size_t v___x_824_; uint64_t v___x_825_; 
v___x_823_ = ((size_t)0ULL);
v___x_824_ = lean_usize_of_nat(v___x_817_);
v___x_825_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_771_, v___x_823_, v___x_824_, v___x_815_);
v___y_774_ = v___y_814_;
v___y_775_ = v___x_825_;
goto v___jp_773_;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0(void){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = lean_unsigned_to_nat(0u);
v___x_829_ = lean_mk_empty_array_with_capacity(v___x_828_);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0___boxed(lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_c_832_, lean_object* v___y_833_, lean_object* v___y_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0(v_a_830_, v_a_831_, v_c_832_, v___y_833_, v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec_ref(v_a_830_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(lean_object* v_declName_836_, lean_object* v_args_837_, lean_object* v_as_838_, size_t v_sz_839_, size_t v_i_840_, lean_object* v_b_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v_a_845_; lean_object* v_a_846_; uint8_t v___x_850_; 
v___x_850_ = lean_usize_dec_lt(v_i_840_, v_sz_839_);
if (v___x_850_ == 0)
{
lean_object* v___x_851_; 
lean_dec(v_declName_836_);
v___x_851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_851_, 0, v_b_841_);
lean_ctor_set(v___x_851_, 1, v___y_843_);
return v___x_851_;
}
else
{
lean_object* v_a_852_; lean_object* v_toSignature_853_; lean_object* v_value_854_; lean_object* v_name_855_; lean_object* v_params_856_; lean_object* v___x_857_; uint8_t v___x_858_; 
v_a_852_ = lean_array_uget_borrowed(v_as_838_, v_i_840_);
v_toSignature_853_ = lean_ctor_get(v_a_852_, 0);
v_value_854_ = lean_ctor_get(v_a_852_, 1);
v_name_855_ = lean_ctor_get(v_toSignature_853_, 0);
v_params_856_ = lean_ctor_get(v_toSignature_853_, 3);
v___x_857_ = lean_box(0);
v___x_858_ = lean_name_eq(v_declName_836_, v_name_855_);
if (v___x_858_ == 0)
{
v_a_845_ = v___x_857_;
v_a_846_ = v___y_843_;
goto v___jp_844_;
}
else
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_859_ = lean_array_get_size(v_params_856_);
v___x_860_ = lean_unsigned_to_nat(0u);
v___x_861_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0);
v___x_862_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(v___x_859_, v_args_837_, v___x_860_, v___x_861_, v___y_842_, v___y_843_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v_a_864_; lean_object* v_visited_865_; lean_object* v_fixed_866_; lean_object* v___x_867_; uint8_t v___x_868_; 
v_a_863_ = lean_ctor_get(v___x_862_, 1);
lean_inc(v_a_863_);
v_a_864_ = lean_ctor_get(v___x_862_, 0);
lean_inc_n(v_a_864_, 2);
lean_dec_ref(v___x_862_);
v_visited_865_ = lean_ctor_get(v_a_863_, 0);
v_fixed_866_ = lean_ctor_get(v_a_863_, 1);
lean_inc(v_declName_836_);
v___x_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_867_, 0, v_declName_836_);
lean_ctor_set(v___x_867_, 1, v_a_864_);
v___x_868_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(v_visited_865_, v___x_867_);
if (v___x_868_ == 0)
{
lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_879_; 
lean_inc_ref(v_fixed_866_);
lean_inc_ref(v_visited_865_);
v_isSharedCheck_879_ = !lean_is_exclusive(v_a_863_);
if (v_isSharedCheck_879_ == 0)
{
lean_object* v_unused_880_; lean_object* v_unused_881_; 
v_unused_880_ = lean_ctor_get(v_a_863_, 1);
lean_dec(v_unused_880_);
v_unused_881_ = lean_ctor_get(v_a_863_, 0);
lean_dec(v_unused_881_);
v___x_870_ = v_a_863_;
v_isShared_871_ = v_isSharedCheck_879_;
goto v_resetjp_869_;
}
else
{
lean_dec(v_a_863_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_879_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___f_872_; lean_object* v___x_873_; lean_object* v___x_875_; 
lean_inc(v_a_852_);
v___f_872_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0___boxed), 5, 2);
lean_closure_set(v___f_872_, 0, v_a_852_);
lean_closure_set(v___f_872_, 1, v_a_864_);
v___x_873_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(v_visited_865_, v___x_867_, v___x_857_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 0, v___x_873_);
v___x_875_ = v___x_870_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_873_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v_fixed_866_);
v___x_875_ = v_reuseFailAlloc_878_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
lean_object* v___x_876_; 
lean_inc_ref(v_value_854_);
v___x_876_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(v___f_872_, v_value_854_, v___y_842_, v___x_875_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; 
v_a_877_ = lean_ctor_get(v___x_876_, 1);
lean_inc(v_a_877_);
lean_dec_ref(v___x_876_);
v_a_845_ = v___x_857_;
v_a_846_ = v_a_877_;
goto v___jp_844_;
}
else
{
lean_dec(v_declName_836_);
return v___x_876_;
}
}
}
}
else
{
lean_dec_ref(v___x_867_);
lean_dec(v_a_864_);
v_a_845_ = v___x_857_;
v_a_846_ = v_a_863_;
goto v___jp_844_;
}
}
else
{
lean_object* v_a_882_; lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_890_; 
lean_dec(v_declName_836_);
v_a_882_ = lean_ctor_get(v___x_862_, 0);
v_a_883_ = lean_ctor_get(v___x_862_, 1);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_890_ == 0)
{
v___x_885_ = v___x_862_;
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_inc(v_a_882_);
lean_dec(v___x_862_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_a_882_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v_a_883_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
}
v___jp_844_:
{
size_t v___x_847_; size_t v___x_848_; 
v___x_847_ = ((size_t)1ULL);
v___x_848_ = lean_usize_add(v_i_840_, v___x_847_);
v_i_840_ = v___x_848_;
v_b_841_ = v_a_845_;
v___y_843_ = v_a_846_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp(lean_object* v_declName_891_, lean_object* v_args_892_, lean_object* v_a_893_, lean_object* v_a_894_){
_start:
{
lean_object* v___y_896_; lean_object* v_decls_897_; lean_object* v___y_898_; lean_object* v_main_912_; lean_object* v_toSignature_913_; lean_object* v_decls_914_; lean_object* v_name_915_; lean_object* v_params_916_; uint8_t v___x_917_; 
v_main_912_ = lean_ctor_get(v_a_893_, 1);
v_toSignature_913_ = lean_ctor_get(v_main_912_, 0);
v_decls_914_ = lean_ctor_get(v_a_893_, 0);
v_name_915_ = lean_ctor_get(v_toSignature_913_, 0);
v_params_916_ = lean_ctor_get(v_toSignature_913_, 3);
v___x_917_ = lean_name_eq(v_declName_891_, v_name_915_);
if (v___x_917_ == 0)
{
v___y_896_ = v_a_893_;
v_decls_897_ = v_decls_914_;
v___y_898_ = v_a_894_;
goto v___jp_895_;
}
else
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_918_ = lean_array_get_size(v_params_916_);
v___x_919_ = lean_unsigned_to_nat(0u);
v___x_920_ = lean_box(0);
v___x_921_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(v___x_918_, v_args_892_, v___x_919_, v___x_920_, v_a_893_, v_a_894_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_931_; 
v_a_922_ = lean_ctor_get(v___x_921_, 1);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_931_ == 0)
{
lean_object* v_unused_932_; 
v_unused_932_ = lean_ctor_get(v___x_921_, 0);
lean_dec(v_unused_932_);
v___x_924_ = v___x_921_;
v_isShared_925_ = v_isSharedCheck_931_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_921_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_931_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v_fixed_926_; uint8_t v___x_927_; 
v_fixed_926_ = lean_ctor_get(v_a_922_, 1);
v___x_927_ = l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(v_fixed_926_, v___x_917_);
if (v___x_927_ == 0)
{
lean_object* v___x_929_; 
lean_dec(v_declName_891_);
if (v_isShared_925_ == 0)
{
lean_ctor_set_tag(v___x_924_, 1);
lean_ctor_set(v___x_924_, 0, v___x_920_);
v___x_929_ = v___x_924_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v___x_920_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v_a_922_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
else
{
lean_del_object(v___x_924_);
v___y_896_ = v_a_893_;
v_decls_897_ = v_decls_914_;
v___y_898_ = v_a_922_;
goto v___jp_895_;
}
}
}
else
{
lean_dec(v_declName_891_);
return v___x_921_;
}
}
v___jp_895_:
{
lean_object* v___x_899_; size_t v_sz_900_; size_t v___x_901_; lean_object* v___x_902_; 
v___x_899_ = lean_box(0);
v_sz_900_ = lean_array_size(v_decls_897_);
v___x_901_ = ((size_t)0ULL);
v___x_902_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(v_declName_891_, v_args_892_, v_decls_897_, v_sz_900_, v___x_901_, v___x_899_, v___y_896_, v___y_898_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
v_a_903_ = lean_ctor_get(v___x_902_, 1);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_910_ == 0)
{
lean_object* v_unused_911_; 
v_unused_911_ = lean_ctor_get(v___x_902_, 0);
lean_dec(v_unused_911_);
v___x_905_ = v___x_902_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_902_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
lean_ctor_set(v___x_905_, 0, v___x_899_);
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_899_);
lean_ctor_set(v_reuseFailAlloc_909_, 1, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
else
{
return v___x_902_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue(lean_object* v_e_933_, lean_object* v_a_934_, lean_object* v_a_935_){
_start:
{
if (lean_obj_tag(v_e_933_) == 3)
{
lean_object* v_declName_936_; lean_object* v_args_937_; lean_object* v___x_938_; 
v_declName_936_ = lean_ctor_get(v_e_933_, 0);
lean_inc(v_declName_936_);
v_args_937_ = lean_ctor_get(v_e_933_, 2);
lean_inc_ref(v_args_937_);
lean_dec_ref(v_e_933_);
v___x_938_ = l_Lean_Compiler_LCNF_FixedParams_evalApp(v_declName_936_, v_args_937_, v_a_934_, v_a_935_);
lean_dec_ref(v_args_937_);
return v___x_938_;
}
else
{
lean_object* v___x_939_; lean_object* v___x_940_; 
lean_dec(v_e_933_);
v___x_939_ = lean_box(0);
v___x_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
lean_ctor_set(v___x_940_, 1, v_a_935_);
return v___x_940_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(lean_object* v_as_941_, size_t v_i_942_, size_t v_stop_943_, lean_object* v_b_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v___y_948_; uint8_t v___x_955_; 
v___x_955_ = lean_usize_dec_eq(v_i_942_, v_stop_943_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; 
v___x_956_ = lean_array_uget_borrowed(v_as_941_, v_i_942_);
switch(lean_obj_tag(v___x_956_))
{
case 0:
{
lean_object* v_code_957_; 
v_code_957_ = lean_ctor_get(v___x_956_, 2);
lean_inc_ref(v_code_957_);
v___y_948_ = v_code_957_;
goto v___jp_947_;
}
case 1:
{
lean_object* v_code_958_; 
v_code_958_ = lean_ctor_get(v___x_956_, 1);
lean_inc_ref(v_code_958_);
v___y_948_ = v_code_958_;
goto v___jp_947_;
}
default: 
{
lean_object* v_code_959_; 
v_code_959_ = lean_ctor_get(v___x_956_, 0);
lean_inc_ref(v_code_959_);
v___y_948_ = v_code_959_;
goto v___jp_947_;
}
}
}
else
{
lean_object* v___x_960_; 
v___x_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_960_, 0, v_b_944_);
lean_ctor_set(v___x_960_, 1, v___y_946_);
return v___x_960_;
}
v___jp_947_:
{
lean_object* v___x_949_; 
lean_inc_ref(v___y_945_);
v___x_949_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v___y_948_, v___y_945_, v___y_946_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v_a_951_; size_t v___x_952_; size_t v___x_953_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
lean_inc(v_a_950_);
v_a_951_ = lean_ctor_get(v___x_949_, 1);
lean_inc(v_a_951_);
lean_dec_ref(v___x_949_);
v___x_952_ = ((size_t)1ULL);
v___x_953_ = lean_usize_add(v_i_942_, v___x_952_);
v_i_942_ = v___x_953_;
v_b_944_ = v_a_950_;
v___y_946_ = v_a_951_;
goto _start;
}
else
{
return v___x_949_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalCode(lean_object* v_code_961_, lean_object* v_a_962_, lean_object* v_a_963_){
_start:
{
switch(lean_obj_tag(v_code_961_))
{
case 0:
{
lean_object* v_decl_964_; lean_object* v_k_965_; lean_object* v_value_966_; lean_object* v___x_967_; 
v_decl_964_ = lean_ctor_get(v_code_961_, 0);
lean_inc_ref(v_decl_964_);
v_k_965_ = lean_ctor_get(v_code_961_, 1);
lean_inc_ref(v_k_965_);
lean_dec_ref(v_code_961_);
v_value_966_ = lean_ctor_get(v_decl_964_, 3);
lean_inc(v_value_966_);
lean_dec_ref(v_decl_964_);
v___x_967_ = l_Lean_Compiler_LCNF_FixedParams_evalLetValue(v_value_966_, v_a_962_, v_a_963_);
if (lean_obj_tag(v___x_967_) == 0)
{
lean_object* v_a_968_; 
v_a_968_ = lean_ctor_get(v___x_967_, 1);
lean_inc(v_a_968_);
lean_dec_ref(v___x_967_);
v_code_961_ = v_k_965_;
v_a_963_ = v_a_968_;
goto _start;
}
else
{
lean_dec_ref(v_k_965_);
lean_dec_ref(v_a_962_);
return v___x_967_;
}
}
case 1:
{
lean_object* v_decl_970_; lean_object* v_k_971_; lean_object* v___x_972_; 
v_decl_970_ = lean_ctor_get(v_code_961_, 0);
lean_inc_ref_n(v_decl_970_, 2);
v_k_971_ = lean_ctor_get(v_code_961_, 1);
lean_inc_ref(v_k_971_);
lean_dec_ref(v_code_961_);
v___x_972_ = l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(v_decl_970_, v_a_962_, v_a_963_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
if (lean_obj_tag(v_a_973_) == 1)
{
lean_object* v_a_974_; lean_object* v_val_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_989_; 
v_a_974_ = lean_ctor_get(v___x_972_, 1);
lean_inc(v_a_974_);
lean_dec_ref(v___x_972_);
v_val_975_ = lean_ctor_get(v_a_973_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v_a_973_);
if (v_isSharedCheck_989_ == 0)
{
v___x_977_ = v_a_973_;
v_isShared_978_ = v_isSharedCheck_989_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_val_975_);
lean_dec(v_a_973_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_989_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v_fvarId_979_; lean_object* v_decls_980_; lean_object* v_main_981_; lean_object* v_assignment_982_; lean_object* v___x_984_; 
v_fvarId_979_ = lean_ctor_get(v_decl_970_, 0);
lean_inc(v_fvarId_979_);
lean_dec_ref(v_decl_970_);
v_decls_980_ = lean_ctor_get(v_a_962_, 0);
lean_inc_ref(v_decls_980_);
v_main_981_ = lean_ctor_get(v_a_962_, 1);
lean_inc_ref(v_main_981_);
v_assignment_982_ = lean_ctor_get(v_a_962_, 2);
lean_inc(v_assignment_982_);
lean_dec_ref(v_a_962_);
if (v_isShared_978_ == 0)
{
lean_ctor_set_tag(v___x_977_, 2);
v___x_984_ = v___x_977_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_val_975_);
v___x_984_ = v_reuseFailAlloc_988_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_979_, v___x_984_, v_assignment_982_);
v___x_986_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_986_, 0, v_decls_980_);
lean_ctor_set(v___x_986_, 1, v_main_981_);
lean_ctor_set(v___x_986_, 2, v___x_985_);
v_code_961_ = v_k_971_;
v_a_962_ = v___x_986_;
v_a_963_ = v_a_974_;
goto _start;
}
}
}
else
{
lean_object* v_a_990_; lean_object* v_value_991_; lean_object* v___x_992_; 
lean_dec(v_a_973_);
v_a_990_ = lean_ctor_get(v___x_972_, 1);
lean_inc(v_a_990_);
lean_dec_ref(v___x_972_);
v_value_991_ = lean_ctor_get(v_decl_970_, 4);
lean_inc_ref(v_value_991_);
lean_dec_ref(v_decl_970_);
lean_inc_ref(v_a_962_);
v___x_992_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_value_991_, v_a_962_, v_a_990_);
if (lean_obj_tag(v___x_992_) == 0)
{
lean_object* v_a_993_; 
v_a_993_ = lean_ctor_get(v___x_992_, 1);
lean_inc(v_a_993_);
lean_dec_ref(v___x_992_);
v_code_961_ = v_k_971_;
v_a_963_ = v_a_993_;
goto _start;
}
else
{
lean_dec_ref(v_k_971_);
lean_dec_ref(v_a_962_);
return v___x_992_;
}
}
}
else
{
lean_object* v_a_995_; lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
lean_dec_ref(v_k_971_);
lean_dec_ref(v_decl_970_);
lean_dec_ref(v_a_962_);
v_a_995_ = lean_ctor_get(v___x_972_, 0);
v_a_996_ = lean_ctor_get(v___x_972_, 1);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_972_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_inc(v_a_995_);
lean_dec(v___x_972_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_995_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
case 2:
{
lean_object* v_decl_1004_; lean_object* v_k_1005_; lean_object* v_value_1006_; lean_object* v___x_1007_; 
v_decl_1004_ = lean_ctor_get(v_code_961_, 0);
lean_inc_ref(v_decl_1004_);
v_k_1005_ = lean_ctor_get(v_code_961_, 1);
lean_inc_ref(v_k_1005_);
lean_dec_ref(v_code_961_);
v_value_1006_ = lean_ctor_get(v_decl_1004_, 4);
lean_inc_ref(v_value_1006_);
lean_dec_ref(v_decl_1004_);
lean_inc_ref(v_a_962_);
v___x_1007_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_value_1006_, v_a_962_, v_a_963_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 1);
lean_inc(v_a_1008_);
lean_dec_ref(v___x_1007_);
v_code_961_ = v_k_1005_;
v_a_963_ = v_a_1008_;
goto _start;
}
else
{
lean_dec_ref(v_k_1005_);
lean_dec_ref(v_a_962_);
return v___x_1007_;
}
}
case 3:
{
lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1017_; 
lean_dec_ref(v_a_962_);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_code_961_);
if (v_isSharedCheck_1017_ == 0)
{
lean_object* v_unused_1018_; lean_object* v_unused_1019_; 
v_unused_1018_ = lean_ctor_get(v_code_961_, 1);
lean_dec(v_unused_1018_);
v_unused_1019_ = lean_ctor_get(v_code_961_, 0);
lean_dec(v_unused_1019_);
v___x_1011_ = v_code_961_;
v_isShared_1012_ = v_isSharedCheck_1017_;
goto v_resetjp_1010_;
}
else
{
lean_dec(v_code_961_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1017_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1013_; lean_object* v___x_1015_; 
v___x_1013_ = lean_box(0);
if (v_isShared_1012_ == 0)
{
lean_ctor_set_tag(v___x_1011_, 0);
lean_ctor_set(v___x_1011_, 1, v_a_963_);
lean_ctor_set(v___x_1011_, 0, v___x_1013_);
v___x_1015_ = v___x_1011_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v___x_1013_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v_a_963_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
case 4:
{
lean_object* v_cases_1020_; lean_object* v_alts_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; uint8_t v___x_1025_; 
v_cases_1020_ = lean_ctor_get(v_code_961_, 0);
lean_inc_ref(v_cases_1020_);
lean_dec_ref(v_code_961_);
v_alts_1021_ = lean_ctor_get(v_cases_1020_, 3);
lean_inc_ref(v_alts_1021_);
lean_dec_ref(v_cases_1020_);
v___x_1022_ = lean_unsigned_to_nat(0u);
v___x_1023_ = lean_array_get_size(v_alts_1021_);
v___x_1024_ = lean_box(0);
v___x_1025_ = lean_nat_dec_lt(v___x_1022_, v___x_1023_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; 
lean_dec_ref(v_alts_1021_);
lean_dec_ref(v_a_962_);
v___x_1026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v_a_963_);
return v___x_1026_;
}
else
{
uint8_t v___x_1027_; 
v___x_1027_ = lean_nat_dec_le(v___x_1023_, v___x_1023_);
if (v___x_1027_ == 0)
{
if (v___x_1025_ == 0)
{
lean_object* v___x_1028_; 
lean_dec_ref(v_alts_1021_);
lean_dec_ref(v_a_962_);
v___x_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1024_);
lean_ctor_set(v___x_1028_, 1, v_a_963_);
return v___x_1028_;
}
else
{
size_t v___x_1029_; size_t v___x_1030_; lean_object* v___x_1031_; 
v___x_1029_ = ((size_t)0ULL);
v___x_1030_ = lean_usize_of_nat(v___x_1023_);
v___x_1031_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(v_alts_1021_, v___x_1029_, v___x_1030_, v___x_1024_, v_a_962_, v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec_ref(v_alts_1021_);
return v___x_1031_;
}
}
else
{
size_t v___x_1032_; size_t v___x_1033_; lean_object* v___x_1034_; 
v___x_1032_ = ((size_t)0ULL);
v___x_1033_ = lean_usize_of_nat(v___x_1023_);
v___x_1034_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(v_alts_1021_, v___x_1032_, v___x_1033_, v___x_1024_, v_a_962_, v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec_ref(v_alts_1021_);
return v___x_1034_;
}
}
}
default: 
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
lean_dec_ref(v_a_962_);
lean_dec_ref(v_code_961_);
v___x_1035_ = lean_box(0);
v___x_1036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1035_);
lean_ctor_set(v___x_1036_, 1, v_a_963_);
return v___x_1036_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0(lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_c_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_){
_start:
{
lean_object* v_decls_1042_; lean_object* v_main_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; 
v_decls_1042_ = lean_ctor_get(v___y_1040_, 0);
v_main_1043_ = lean_ctor_get(v___y_1040_, 1);
v___x_1044_ = l_Lean_Compiler_LCNF_FixedParams_mkAssignment(v_a_1037_, v_a_1038_);
lean_inc_ref(v_main_1043_);
lean_inc_ref(v_decls_1042_);
v___x_1045_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1045_, 0, v_decls_1042_);
lean_ctor_set(v___x_1045_, 1, v_main_1043_);
lean_ctor_set(v___x_1045_, 2, v___x_1044_);
v___x_1046_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_c_1039_, v___x_1045_, v___y_1041_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue___boxed(lean_object* v_e_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Lean_Compiler_LCNF_FixedParams_evalLetValue(v_e_1047_, v_a_1048_, v_a_1049_);
lean_dec_ref(v_a_1048_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9___boxed(lean_object* v_as_1051_, lean_object* v_i_1052_, lean_object* v_stop_1053_, lean_object* v_b_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
size_t v_i_boxed_1057_; size_t v_stop_boxed_1058_; lean_object* v_res_1059_; 
v_i_boxed_1057_ = lean_unbox_usize(v_i_1052_);
lean_dec(v_i_1052_);
v_stop_boxed_1058_ = lean_unbox_usize(v_stop_1053_);
lean_dec(v_stop_1053_);
v_res_1059_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(v_as_1051_, v_i_boxed_1057_, v_stop_boxed_1058_, v_b_1054_, v___y_1055_, v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec_ref(v_as_1051_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp___boxed(lean_object* v_declName_1060_, lean_object* v_args_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_Compiler_LCNF_FixedParams_evalApp(v_declName_1060_, v_args_1061_, v_a_1062_, v_a_1063_);
lean_dec_ref(v_a_1062_);
lean_dec_ref(v_args_1061_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___boxed(lean_object* v_declName_1065_, lean_object* v_args_1066_, lean_object* v_as_1067_, lean_object* v_sz_1068_, lean_object* v_i_1069_, lean_object* v_b_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
size_t v_sz_boxed_1073_; size_t v_i_boxed_1074_; lean_object* v_res_1075_; 
v_sz_boxed_1073_ = lean_unbox_usize(v_sz_1068_);
lean_dec(v_sz_1068_);
v_i_boxed_1074_ = lean_unbox_usize(v_i_1069_);
lean_dec(v_i_1069_);
v_res_1075_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(v_declName_1065_, v_args_1066_, v_as_1067_, v_sz_boxed_1073_, v_i_boxed_1074_, v_b_1070_, v___y_1071_, v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec_ref(v_as_1067_);
lean_dec_ref(v_args_1066_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3(uint8_t v_pu_1076_, lean_object* v_f_1077_, lean_object* v_v_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(v_f_1077_, v_v_1078_, v___y_1079_, v___y_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___boxed(lean_object* v_pu_1082_, lean_object* v_f_1083_, lean_object* v_v_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_){
_start:
{
uint8_t v_pu_boxed_1087_; lean_object* v_res_1088_; 
v_pu_boxed_1087_ = lean_unbox(v_pu_1082_);
v_res_1088_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3(v_pu_boxed_1087_, v_f_1083_, v_v_1084_, v___y_1085_, v___y_1086_);
lean_dec_ref(v___y_1085_);
return v_res_1088_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1(lean_object* v_00_u03b2_1089_, lean_object* v_m_1090_, lean_object* v_a_1091_){
_start:
{
uint8_t v___x_1092_; 
v___x_1092_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(v_m_1090_, v_a_1091_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___boxed(lean_object* v_00_u03b2_1093_, lean_object* v_m_1094_, lean_object* v_a_1095_){
_start:
{
uint8_t v_res_1096_; lean_object* v_r_1097_; 
v_res_1096_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1(v_00_u03b2_1093_, v_m_1094_, v_a_1095_);
lean_dec_ref(v_a_1095_);
lean_dec_ref(v_m_1094_);
v_r_1097_ = lean_box(v_res_1096_);
return v_r_1097_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2(lean_object* v_00_u03b2_1098_, lean_object* v_m_1099_, lean_object* v_a_1100_, lean_object* v_b_1101_){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(v_m_1099_, v_a_1100_, v_b_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4(lean_object* v_upperBound_1103_, lean_object* v_args_1104_, lean_object* v_inst_1105_, lean_object* v_R_1106_, lean_object* v_a_1107_, lean_object* v_b_1108_, lean_object* v_c_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(v_upperBound_1103_, v_args_1104_, v_a_1107_, v_b_1108_, v___y_1110_, v___y_1111_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___boxed(lean_object* v_upperBound_1113_, lean_object* v_args_1114_, lean_object* v_inst_1115_, lean_object* v_R_1116_, lean_object* v_a_1117_, lean_object* v_b_1118_, lean_object* v_c_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4(v_upperBound_1113_, v_args_1114_, v_inst_1115_, v_R_1116_, v_a_1117_, v_b_1118_, v_c_1119_, v___y_1120_, v___y_1121_);
lean_dec_ref(v___y_1120_);
lean_dec_ref(v_args_1114_);
lean_dec(v_upperBound_1113_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7(lean_object* v_upperBound_1123_, lean_object* v_args_1124_, lean_object* v_inst_1125_, lean_object* v_R_1126_, lean_object* v_a_1127_, lean_object* v_b_1128_, lean_object* v_c_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(v_upperBound_1123_, v_args_1124_, v_a_1127_, v_b_1128_, v___y_1130_, v___y_1131_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___boxed(lean_object* v_upperBound_1133_, lean_object* v_args_1134_, lean_object* v_inst_1135_, lean_object* v_R_1136_, lean_object* v_a_1137_, lean_object* v_b_1138_, lean_object* v_c_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7(v_upperBound_1133_, v_args_1134_, v_inst_1135_, v_R_1136_, v_a_1137_, v_b_1138_, v_c_1139_, v___y_1140_, v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec_ref(v_args_1134_);
lean_dec(v_upperBound_1133_);
return v_res_1142_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1(lean_object* v_00_u03b2_1143_, lean_object* v_a_1144_, lean_object* v_x_1145_){
_start:
{
uint8_t v___x_1146_; 
v___x_1146_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_1144_, v_x_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1147_, lean_object* v_a_1148_, lean_object* v_x_1149_){
_start:
{
uint8_t v_res_1150_; lean_object* v_r_1151_; 
v_res_1150_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1(v_00_u03b2_1147_, v_a_1148_, v_x_1149_);
lean_dec(v_x_1149_);
lean_dec_ref(v_a_1148_);
v_r_1151_ = lean_box(v_res_1150_);
return v_r_1151_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4(lean_object* v_00_u03b2_1152_, lean_object* v_data_1153_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(v_data_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4(lean_object* v_xs_1155_, lean_object* v_ys_1156_, lean_object* v_hsz_1157_, lean_object* v_x_1158_, lean_object* v_x_1159_){
_start:
{
uint8_t v___x_1160_; 
v___x_1160_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(v_xs_1155_, v_ys_1156_, v_x_1158_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___boxed(lean_object* v_xs_1161_, lean_object* v_ys_1162_, lean_object* v_hsz_1163_, lean_object* v_x_1164_, lean_object* v_x_1165_){
_start:
{
uint8_t v_res_1166_; lean_object* v_r_1167_; 
v_res_1166_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4(v_xs_1161_, v_ys_1162_, v_hsz_1163_, v_x_1164_, v_x_1165_);
lean_dec_ref(v_ys_1162_);
lean_dec_ref(v_xs_1161_);
v_r_1167_ = lean_box(v_res_1166_);
return v_r_1167_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_1168_, lean_object* v_i_1169_, lean_object* v_source_1170_, lean_object* v_target_1171_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(v_i_1169_, v_source_1170_, v_target_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14(lean_object* v_00_u03b2_1173_, lean_object* v_x_1174_, lean_object* v_x_1175_){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(v_x_1174_, v_x_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(lean_object* v_upperBound_1177_, lean_object* v_a_1178_, lean_object* v_b_1179_){
_start:
{
uint8_t v___x_1180_; 
v___x_1180_ = lean_nat_dec_lt(v_a_1178_, v_upperBound_1177_);
if (v___x_1180_ == 0)
{
lean_dec(v_a_1178_);
return v_b_1179_;
}
else
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
lean_inc(v_a_1178_);
v___x_1181_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1181_, 0, v_a_1178_);
v___x_1182_ = lean_array_push(v_b_1179_, v___x_1181_);
v___x_1183_ = lean_unsigned_to_nat(1u);
v___x_1184_ = lean_nat_add(v_a_1178_, v___x_1183_);
lean_dec(v_a_1178_);
v_a_1178_ = v___x_1184_;
v_b_1179_ = v___x_1182_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg___boxed(lean_object* v_upperBound_1186_, lean_object* v_a_1187_, lean_object* v_b_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(v_upperBound_1186_, v_a_1187_, v_b_1188_);
lean_dec(v_upperBound_1186_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(lean_object* v_numParams_1190_){
_start:
{
lean_object* v___x_1191_; lean_object* v_values_1192_; lean_object* v___x_1193_; 
v___x_1191_ = lean_unsigned_to_nat(0u);
v_values_1192_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0);
v___x_1193_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(v_numParams_1190_, v___x_1191_, v_values_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues___boxed(lean_object* v_numParams_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(v_numParams_1194_);
lean_dec(v_numParams_1194_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0(lean_object* v_upperBound_1196_, lean_object* v_inst_1197_, lean_object* v_R_1198_, lean_object* v_a_1199_, lean_object* v_b_1200_, lean_object* v_c_1201_){
_start:
{
lean_object* v___x_1202_; 
v___x_1202_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(v_upperBound_1196_, v_a_1199_, v_b_1200_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___boxed(lean_object* v_upperBound_1203_, lean_object* v_inst_1204_, lean_object* v_R_1205_, lean_object* v_a_1206_, lean_object* v_b_1207_, lean_object* v_c_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0(v_upperBound_1203_, v_inst_1204_, v_R_1205_, v_a_1206_, v_b_1207_, v_c_1208_);
lean_dec(v_upperBound_1203_);
return v_res_1209_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1210_ = lean_box(0);
v___x_1211_ = lean_unsigned_to_nat(16u);
v___x_1212_ = lean_mk_array(v___x_1211_, v___x_1210_);
return v___x_1212_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1213_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0);
v___x_1214_ = lean_unsigned_to_nat(0u);
v___x_1215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1214_);
lean_ctor_set(v___x_1215_, 1, v___x_1213_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(lean_object* v_decls_1216_, lean_object* v_as_1217_, size_t v_sz_1218_, size_t v_i_1219_, lean_object* v_b_1220_){
_start:
{
lean_object* v_a_1222_; uint8_t v___x_1226_; 
v___x_1226_ = lean_usize_dec_lt(v_i_1219_, v_sz_1218_);
if (v___x_1226_ == 0)
{
lean_dec_ref(v_decls_1216_);
return v_b_1220_;
}
else
{
lean_object* v_a_1227_; lean_object* v_toSignature_1228_; lean_object* v_value_1229_; lean_object* v_name_1230_; lean_object* v_params_1231_; lean_object* v_s_1233_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v_a_1227_ = lean_array_uget_borrowed(v_as_1217_, v_i_1219_);
v_toSignature_1228_ = lean_ctor_get(v_a_1227_, 0);
v_value_1229_ = lean_ctor_get(v_a_1227_, 1);
v_name_1230_ = lean_ctor_get(v_toSignature_1228_, 0);
v_params_1231_ = lean_ctor_get(v_toSignature_1228_, 3);
v___x_1236_ = lean_array_get_size(v_params_1231_);
v___x_1237_ = l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(v___x_1236_);
v___x_1238_ = lean_box(v___x_1226_);
v___x_1239_ = lean_mk_array(v___x_1236_, v___x_1238_);
if (lean_obj_tag(v_value_1229_) == 0)
{
lean_object* v_code_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v_a_1246_; 
v_code_1240_ = lean_ctor_get(v_value_1229_, 0);
v___x_1241_ = l_Lean_Compiler_LCNF_FixedParams_mkAssignment(v_a_1227_, v___x_1237_);
lean_inc(v_a_1227_);
lean_inc_ref(v_decls_1216_);
v___x_1242_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1242_, 0, v_decls_1216_);
lean_ctor_set(v___x_1242_, 1, v_a_1227_);
lean_ctor_set(v___x_1242_, 2, v___x_1241_);
v___x_1243_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1);
v___x_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1243_);
lean_ctor_set(v___x_1244_, 1, v___x_1239_);
lean_inc_ref(v_code_1240_);
v___x_1245_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_code_1240_, v___x_1242_, v___x_1244_);
v_a_1246_ = lean_ctor_get(v___x_1245_, 1);
lean_inc(v_a_1246_);
lean_dec_ref(v___x_1245_);
v_s_1233_ = v_a_1246_;
goto v___jp_1232_;
}
else
{
lean_object* v___x_1247_; 
lean_dec_ref(v___x_1237_);
lean_inc(v_name_1230_);
v___x_1247_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1230_, v___x_1239_, v_b_1220_);
v_a_1222_ = v___x_1247_;
goto v___jp_1221_;
}
v___jp_1232_:
{
lean_object* v_fixed_1234_; lean_object* v___x_1235_; 
v_fixed_1234_ = lean_ctor_get(v_s_1233_, 1);
lean_inc_ref(v_fixed_1234_);
lean_dec_ref(v_s_1233_);
lean_inc(v_name_1230_);
v___x_1235_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1230_, v_fixed_1234_, v_b_1220_);
v_a_1222_ = v___x_1235_;
goto v___jp_1221_;
}
}
v___jp_1221_:
{
size_t v___x_1223_; size_t v___x_1224_; 
v___x_1223_ = ((size_t)1ULL);
v___x_1224_ = lean_usize_add(v_i_1219_, v___x_1223_);
v_i_1219_ = v___x_1224_;
v_b_1220_ = v_a_1222_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___boxed(lean_object* v_decls_1248_, lean_object* v_as_1249_, lean_object* v_sz_1250_, lean_object* v_i_1251_, lean_object* v_b_1252_){
_start:
{
size_t v_sz_boxed_1253_; size_t v_i_boxed_1254_; lean_object* v_res_1255_; 
v_sz_boxed_1253_ = lean_unbox_usize(v_sz_1250_);
lean_dec(v_sz_1250_);
v_i_boxed_1254_ = lean_unbox_usize(v_i_1251_);
lean_dec(v_i_1251_);
v_res_1255_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(v_decls_1248_, v_as_1249_, v_sz_boxed_1253_, v_i_boxed_1254_, v_b_1252_);
lean_dec_ref(v_as_1249_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFixedParamsMap(lean_object* v_decls_1256_){
_start:
{
lean_object* v_result_1257_; size_t v_sz_1258_; size_t v___x_1259_; lean_object* v___x_1260_; 
v_result_1257_ = lean_box(1);
v_sz_1258_ = lean_array_size(v_decls_1256_);
v___x_1259_ = ((size_t)0ULL);
lean_inc_ref(v_decls_1256_);
v___x_1260_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(v_decls_1256_, v_decls_1256_, v_sz_1258_, v___x_1259_, v_result_1257_);
lean_dec_ref(v_decls_1256_);
return v___x_1260_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default = _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default);
l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue = _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue();
lean_mark_persistent(l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue);
l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue = _init_l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue();
lean_mark_persistent(l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue);
l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue = _init_l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue();
lean_mark_persistent(l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_FixedParams(builtin);
}
#ifdef __cplusplus
}
#endif
