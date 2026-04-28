// Lean compiler output
// Module: Lean.Compiler.IR.ToIR
// Imports: public import Lean.Compiler.IR.CompilerM public import Lean.Compiler.IR.ToIRType
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instInhabitedArg_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_IR_toIRType(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_uint64_to_nat(uint64_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instInhabitedFnBody_default__1;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_IR_nameToIRType(lean_object*);
extern lean_object* l_Lean_IR_declMapExt;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_IR_mkDummyExternDecl(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_once_cell_t l_Lean_IR_ToIR_M_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_M_run___redArg___closed__0;
static lean_once_cell_t l_Lean_IR_ToIR_M_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_M_run___redArg___closed__1;
static lean_once_cell_t l_Lean_IR_ToIR_M_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_M_run___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0_spec__1(lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_ToIR_addDecl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_addDecl___redArg___closed__0;
static lean_once_cell_t l_Lean_IR_ToIR_addDecl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_addDecl___redArg___closed__1;
static lean_once_cell_t l_Lean_IR_ToIR_addDecl___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_addDecl___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLitValue(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerCtorInfo(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__0;
static lean_once_cell_t l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__1;
static lean_once_cell_t l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__2;
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__2;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__1;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__0;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__3;
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerAlt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__4;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__5;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__6;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__7;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__8;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__9;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__10;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__11;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__12;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__13;
static lean_once_cell_t l_Lean_IR_ToIR_lowerCode___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_ToIR_lowerCode___closed__14;
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerCode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_toIR_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_toIR_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_toIR___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_toIR___closed__0;
LEAN_EXPORT lean_object* l_Lean_IR_toIR(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_toIR___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_IR_ToIR_M_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_M_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_IR_ToIR_M_run___redArg___closed__0, &l_Lean_IR_ToIR_M_run___redArg___closed__0_once, _init_l_Lean_IR_ToIR_M_run___redArg___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_M_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_unsigned_to_nat(1u);
v___x_8_ = lean_obj_once(&l_Lean_IR_ToIR_M_run___redArg___closed__1, &l_Lean_IR_ToIR_M_run___redArg___closed__1_once, _init_l_Lean_IR_ToIR_M_run___redArg___closed__1);
v___x_9_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_8_);
lean_ctor_set(v___x_9_, 2, v___x_7_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run___redArg(lean_object* v_x_10_, lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_14_ = lean_st_ref_get(v_a_12_);
lean_dec(v___x_14_);
v___x_15_ = lean_obj_once(&l_Lean_IR_ToIR_M_run___redArg___closed__2, &l_Lean_IR_ToIR_M_run___redArg___closed__2_once, _init_l_Lean_IR_ToIR_M_run___redArg___closed__2);
v___x_16_ = lean_st_mk_ref(v___x_15_);
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v___x_16_);
v___x_17_ = lean_apply_4(v_x_10_, v___x_16_, v_a_11_, v_a_12_, lean_box(0));
if (lean_obj_tag(v___x_17_) == 0)
{
lean_object* v_a_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_27_; 
v_a_18_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_27_ == 0)
{
v___x_20_ = v___x_17_;
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_a_18_);
lean_dec(v___x_17_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_25_; 
v___x_22_ = lean_st_ref_get(v_a_12_);
lean_dec(v___x_22_);
v___x_23_ = lean_st_ref_get(v___x_16_);
lean_dec(v___x_16_);
lean_dec(v___x_23_);
if (v_isShared_21_ == 0)
{
v___x_25_ = v___x_20_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_18_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
else
{
lean_dec(v___x_16_);
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run___redArg___boxed(lean_object* v_x_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_IR_ToIR_M_run___redArg(v_x_28_, v_a_29_, v_a_30_);
lean_dec(v_a_30_);
lean_dec_ref(v_a_29_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run(lean_object* v_00_u03b1_33_, lean_object* v_x_34_, lean_object* v_a_35_, lean_object* v_a_36_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_IR_ToIR_M_run___redArg(v_x_34_, v_a_35_, v_a_36_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_M_run___boxed(lean_object* v_00_u03b1_39_, lean_object* v_x_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lean_IR_ToIR_M_run(v_00_u03b1_39_, v_x_40_, v_a_41_, v_a_42_);
lean_dec(v_a_42_);
lean_dec_ref(v_a_41_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0_spec__1(lean_object* v_msg_45_){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = l_Lean_IR_instInhabitedArg_default;
v___x_47_ = lean_panic_fn_borrowed(v___x_46_, v_msg_45_);
return v___x_47_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_mk_string_unchecked("Std.Data.DHashMap.Internal.AssocList.Basic", 42, 42);
return v___x_48_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_mk_string_unchecked("Std.DHashMap.Internal.AssocList.get!", 36, 36);
return v___x_49_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_mk_string_unchecked("key is not present in hash table", 32, 32);
return v___x_50_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_51_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__2, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__2_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__2);
v___x_52_ = lean_unsigned_to_nat(11u);
v___x_53_ = lean_unsigned_to_nat(163u);
v___x_54_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__1, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__1_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__1);
v___x_55_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__0, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__0);
v___x_56_ = l_mkPanicMessageWithDecl(v___x_55_, v___x_54_, v___x_53_, v___x_52_, v___x_51_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0(lean_object* v_a_57_, lean_object* v_x_58_){
_start:
{
if (lean_obj_tag(v_x_58_) == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3);
v___x_60_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0_spec__1(v___x_59_);
return v___x_60_;
}
else
{
lean_object* v_key_61_; lean_object* v_value_62_; lean_object* v_tail_63_; uint8_t v___x_64_; 
v_key_61_ = lean_ctor_get(v_x_58_, 0);
v_value_62_ = lean_ctor_get(v_x_58_, 1);
v_tail_63_ = lean_ctor_get(v_x_58_, 2);
v___x_64_ = l_Lean_instBEqFVarId_beq(v_key_61_, v_a_57_);
if (v___x_64_ == 0)
{
v_x_58_ = v_tail_63_;
goto _start;
}
else
{
lean_inc(v_value_62_);
return v_value_62_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___boxed(lean_object* v_a_66_, lean_object* v_x_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0(v_a_66_, v_x_67_);
lean_dec(v_x_67_);
lean_dec(v_a_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0(lean_object* v_m_69_, lean_object* v_a_70_){
_start:
{
lean_object* v_buckets_71_; lean_object* v___x_72_; uint64_t v___x_73_; uint64_t v___x_74_; uint64_t v___x_75_; uint64_t v_fold_76_; uint64_t v___x_77_; uint64_t v___x_78_; uint64_t v___x_79_; size_t v___x_80_; size_t v___x_81_; size_t v___x_82_; size_t v___x_83_; size_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_buckets_71_ = lean_ctor_get(v_m_69_, 1);
v___x_72_ = lean_array_get_size(v_buckets_71_);
v___x_73_ = l_Lean_instHashableFVarId_hash(v_a_70_);
v___x_74_ = 32ULL;
v___x_75_ = lean_uint64_shift_right(v___x_73_, v___x_74_);
v_fold_76_ = lean_uint64_xor(v___x_73_, v___x_75_);
v___x_77_ = 16ULL;
v___x_78_ = lean_uint64_shift_right(v_fold_76_, v___x_77_);
v___x_79_ = lean_uint64_xor(v_fold_76_, v___x_78_);
v___x_80_ = lean_uint64_to_usize(v___x_79_);
v___x_81_ = lean_usize_of_nat(v___x_72_);
v___x_82_ = ((size_t)1ULL);
v___x_83_ = lean_usize_sub(v___x_81_, v___x_82_);
v___x_84_ = lean_usize_land(v___x_80_, v___x_83_);
v___x_85_ = lean_array_uget_borrowed(v_buckets_71_, v___x_84_);
v___x_86_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0(v_a_70_, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0___boxed(lean_object* v_m_87_, lean_object* v_a_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0(v_m_87_, v_a_88_);
lean_dec(v_a_88_);
lean_dec_ref(v_m_87_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue___redArg(lean_object* v_fvarId_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v_vars_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_94_ = lean_st_ref_get(v_a_92_);
lean_dec(v___x_94_);
v___x_95_ = lean_st_ref_get(v_a_91_);
v_vars_96_ = lean_ctor_get(v___x_95_, 0);
lean_inc_ref(v_vars_96_);
lean_dec(v___x_95_);
v___x_97_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0(v_vars_96_, v_fvarId_90_);
lean_dec_ref(v_vars_96_);
v___x_98_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue___redArg___boxed(lean_object* v_fvarId_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_99_, v_a_100_, v_a_101_);
lean_dec(v_a_101_);
lean_dec(v_a_100_);
lean_dec(v_fvarId_99_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue(lean_object* v_fvarId_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_104_, v_a_105_, v_a_107_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getFVarValue___boxed(lean_object* v_fvarId_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lean_IR_ToIR_getFVarValue(v_fvarId_110_, v_a_111_, v_a_112_, v_a_113_);
lean_dec(v_a_113_);
lean_dec_ref(v_a_112_);
lean_dec(v_a_111_);
lean_dec(v_fvarId_110_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0_spec__1(lean_object* v_msg_116_){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_panic_fn_borrowed(v___x_117_, v_msg_116_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0(lean_object* v_a_119_, lean_object* v_x_120_){
_start:
{
if (lean_obj_tag(v_x_120_) == 0)
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getFVarValue_spec__0_spec__0___closed__3);
v___x_122_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0_spec__1(v___x_121_);
return v___x_122_;
}
else
{
lean_object* v_key_123_; lean_object* v_value_124_; lean_object* v_tail_125_; uint8_t v___x_126_; 
v_key_123_ = lean_ctor_get(v_x_120_, 0);
v_value_124_ = lean_ctor_get(v_x_120_, 1);
v_tail_125_ = lean_ctor_get(v_x_120_, 2);
v___x_126_ = l_Lean_instBEqFVarId_beq(v_key_123_, v_a_119_);
if (v___x_126_ == 0)
{
v_x_120_ = v_tail_125_;
goto _start;
}
else
{
lean_inc(v_value_124_);
return v_value_124_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0___boxed(lean_object* v_a_128_, lean_object* v_x_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0(v_a_128_, v_x_129_);
lean_dec(v_x_129_);
lean_dec(v_a_128_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0(lean_object* v_m_131_, lean_object* v_a_132_){
_start:
{
lean_object* v_buckets_133_; lean_object* v___x_134_; uint64_t v___x_135_; uint64_t v___x_136_; uint64_t v___x_137_; uint64_t v_fold_138_; uint64_t v___x_139_; uint64_t v___x_140_; uint64_t v___x_141_; size_t v___x_142_; size_t v___x_143_; size_t v___x_144_; size_t v___x_145_; size_t v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v_buckets_133_ = lean_ctor_get(v_m_131_, 1);
v___x_134_ = lean_array_get_size(v_buckets_133_);
v___x_135_ = l_Lean_instHashableFVarId_hash(v_a_132_);
v___x_136_ = 32ULL;
v___x_137_ = lean_uint64_shift_right(v___x_135_, v___x_136_);
v_fold_138_ = lean_uint64_xor(v___x_135_, v___x_137_);
v___x_139_ = 16ULL;
v___x_140_ = lean_uint64_shift_right(v_fold_138_, v___x_139_);
v___x_141_ = lean_uint64_xor(v_fold_138_, v___x_140_);
v___x_142_ = lean_uint64_to_usize(v___x_141_);
v___x_143_ = lean_usize_of_nat(v___x_134_);
v___x_144_ = ((size_t)1ULL);
v___x_145_ = lean_usize_sub(v___x_143_, v___x_144_);
v___x_146_ = lean_usize_land(v___x_142_, v___x_145_);
v___x_147_ = lean_array_uget_borrowed(v_buckets_133_, v___x_146_);
v___x_148_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0_spec__0(v_a_132_, v___x_147_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0___boxed(lean_object* v_m_149_, lean_object* v_a_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0(v_m_149_, v_a_150_);
lean_dec(v_a_150_);
lean_dec_ref(v_m_149_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue___redArg(lean_object* v_fvarId_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_joinPoints_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_156_ = lean_st_ref_get(v_a_154_);
lean_dec(v___x_156_);
v___x_157_ = lean_st_ref_get(v_a_153_);
v_joinPoints_158_ = lean_ctor_get(v___x_157_, 1);
lean_inc_ref(v_joinPoints_158_);
lean_dec(v___x_157_);
v___x_159_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_IR_ToIR_getJoinPointValue_spec__0(v_joinPoints_158_, v_fvarId_152_);
lean_dec_ref(v_joinPoints_158_);
v___x_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue___redArg___boxed(lean_object* v_fvarId_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Lean_IR_ToIR_getJoinPointValue___redArg(v_fvarId_161_, v_a_162_, v_a_163_);
lean_dec(v_a_163_);
lean_dec(v_a_162_);
lean_dec(v_fvarId_161_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue(lean_object* v_fvarId_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_Lean_IR_ToIR_getJoinPointValue___redArg(v_fvarId_166_, v_a_167_, v_a_169_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_getJoinPointValue___boxed(lean_object* v_fvarId_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lean_IR_ToIR_getJoinPointValue(v_fvarId_172_, v_a_173_, v_a_174_, v_a_175_);
lean_dec(v_a_175_);
lean_dec_ref(v_a_174_);
lean_dec(v_a_173_);
lean_dec(v_fvarId_172_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_178_, lean_object* v_x_179_){
_start:
{
if (lean_obj_tag(v_x_179_) == 0)
{
return v_x_178_;
}
else
{
lean_object* v_key_180_; lean_object* v_value_181_; lean_object* v_tail_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_205_; 
v_key_180_ = lean_ctor_get(v_x_179_, 0);
v_value_181_ = lean_ctor_get(v_x_179_, 1);
v_tail_182_ = lean_ctor_get(v_x_179_, 2);
v_isSharedCheck_205_ = !lean_is_exclusive(v_x_179_);
if (v_isSharedCheck_205_ == 0)
{
v___x_184_ = v_x_179_;
v_isShared_185_ = v_isSharedCheck_205_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_tail_182_);
lean_inc(v_value_181_);
lean_inc(v_key_180_);
lean_dec(v_x_179_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_205_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_186_; uint64_t v___x_187_; uint64_t v___x_188_; uint64_t v___x_189_; uint64_t v_fold_190_; uint64_t v___x_191_; uint64_t v___x_192_; uint64_t v___x_193_; size_t v___x_194_; size_t v___x_195_; size_t v___x_196_; size_t v___x_197_; size_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_201_; 
v___x_186_ = lean_array_get_size(v_x_178_);
v___x_187_ = l_Lean_instHashableFVarId_hash(v_key_180_);
v___x_188_ = 32ULL;
v___x_189_ = lean_uint64_shift_right(v___x_187_, v___x_188_);
v_fold_190_ = lean_uint64_xor(v___x_187_, v___x_189_);
v___x_191_ = 16ULL;
v___x_192_ = lean_uint64_shift_right(v_fold_190_, v___x_191_);
v___x_193_ = lean_uint64_xor(v_fold_190_, v___x_192_);
v___x_194_ = lean_uint64_to_usize(v___x_193_);
v___x_195_ = lean_usize_of_nat(v___x_186_);
v___x_196_ = ((size_t)1ULL);
v___x_197_ = lean_usize_sub(v___x_195_, v___x_196_);
v___x_198_ = lean_usize_land(v___x_194_, v___x_197_);
v___x_199_ = lean_array_uget_borrowed(v_x_178_, v___x_198_);
lean_inc(v___x_199_);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 2, v___x_199_);
v___x_201_ = v___x_184_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_key_180_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v_value_181_);
lean_ctor_set(v_reuseFailAlloc_204_, 2, v___x_199_);
v___x_201_ = v_reuseFailAlloc_204_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
lean_object* v___x_202_; 
v___x_202_ = lean_array_uset(v_x_178_, v___x_198_, v___x_201_);
v_x_178_ = v___x_202_;
v_x_179_ = v_tail_182_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2___redArg(lean_object* v_i_206_, lean_object* v_source_207_, lean_object* v_target_208_){
_start:
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = lean_array_get_size(v_source_207_);
v___x_210_ = lean_nat_dec_lt(v_i_206_, v___x_209_);
if (v___x_210_ == 0)
{
lean_dec_ref(v_source_207_);
lean_dec(v_i_206_);
return v_target_208_;
}
else
{
lean_object* v_es_211_; lean_object* v___x_212_; lean_object* v_source_213_; lean_object* v_target_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v_es_211_ = lean_array_fget(v_source_207_, v_i_206_);
v___x_212_ = lean_box(0);
v_source_213_ = lean_array_fset(v_source_207_, v_i_206_, v___x_212_);
v_target_214_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2_spec__3___redArg(v_target_208_, v_es_211_);
v___x_215_ = lean_unsigned_to_nat(1u);
v___x_216_ = lean_nat_add(v_i_206_, v___x_215_);
lean_dec(v_i_206_);
v_i_206_ = v___x_216_;
v_source_207_ = v_source_213_;
v_target_208_ = v_target_214_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1___redArg(lean_object* v_data_218_){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v_nbuckets_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_219_ = lean_array_get_size(v_data_218_);
v___x_220_ = lean_unsigned_to_nat(2u);
v_nbuckets_221_ = lean_nat_mul(v___x_219_, v___x_220_);
v___x_222_ = lean_unsigned_to_nat(0u);
v___x_223_ = lean_box(0);
v___x_224_ = lean_mk_array(v_nbuckets_221_, v___x_223_);
v___x_225_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2___redArg(v___x_222_, v_data_218_, v___x_224_);
return v___x_225_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg(lean_object* v_a_226_, lean_object* v_x_227_){
_start:
{
if (lean_obj_tag(v_x_227_) == 0)
{
uint8_t v___x_228_; 
v___x_228_ = 0;
return v___x_228_;
}
else
{
lean_object* v_key_229_; lean_object* v_tail_230_; uint8_t v___x_231_; 
v_key_229_ = lean_ctor_get(v_x_227_, 0);
v_tail_230_ = lean_ctor_get(v_x_227_, 2);
v___x_231_ = l_Lean_instBEqFVarId_beq(v_key_229_, v_a_226_);
if (v___x_231_ == 0)
{
v_x_227_ = v_tail_230_;
goto _start;
}
else
{
return v___x_231_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg___boxed(lean_object* v_a_233_, lean_object* v_x_234_){
_start:
{
uint8_t v_res_235_; lean_object* v_r_236_; 
v_res_235_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg(v_a_233_, v_x_234_);
lean_dec(v_x_234_);
lean_dec(v_a_233_);
v_r_236_ = lean_box(v_res_235_);
return v_r_236_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0___redArg(lean_object* v_m_237_, lean_object* v_a_238_, lean_object* v_b_239_){
_start:
{
lean_object* v_size_240_; lean_object* v_buckets_241_; lean_object* v___x_242_; uint64_t v___x_243_; uint64_t v___x_244_; uint64_t v___x_245_; uint64_t v_fold_246_; uint64_t v___x_247_; uint64_t v___x_248_; uint64_t v___x_249_; size_t v___x_250_; size_t v___x_251_; size_t v___x_252_; size_t v___x_253_; size_t v___x_254_; lean_object* v_bkt_255_; uint8_t v___x_256_; 
v_size_240_ = lean_ctor_get(v_m_237_, 0);
v_buckets_241_ = lean_ctor_get(v_m_237_, 1);
v___x_242_ = lean_array_get_size(v_buckets_241_);
v___x_243_ = l_Lean_instHashableFVarId_hash(v_a_238_);
v___x_244_ = 32ULL;
v___x_245_ = lean_uint64_shift_right(v___x_243_, v___x_244_);
v_fold_246_ = lean_uint64_xor(v___x_243_, v___x_245_);
v___x_247_ = 16ULL;
v___x_248_ = lean_uint64_shift_right(v_fold_246_, v___x_247_);
v___x_249_ = lean_uint64_xor(v_fold_246_, v___x_248_);
v___x_250_ = lean_uint64_to_usize(v___x_249_);
v___x_251_ = lean_usize_of_nat(v___x_242_);
v___x_252_ = ((size_t)1ULL);
v___x_253_ = lean_usize_sub(v___x_251_, v___x_252_);
v___x_254_ = lean_usize_land(v___x_250_, v___x_253_);
v_bkt_255_ = lean_array_uget_borrowed(v_buckets_241_, v___x_254_);
v___x_256_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg(v_a_238_, v_bkt_255_);
if (v___x_256_ == 0)
{
lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_277_; 
lean_inc_ref(v_buckets_241_);
lean_inc(v_size_240_);
v_isSharedCheck_277_ = !lean_is_exclusive(v_m_237_);
if (v_isSharedCheck_277_ == 0)
{
lean_object* v_unused_278_; lean_object* v_unused_279_; 
v_unused_278_ = lean_ctor_get(v_m_237_, 1);
lean_dec(v_unused_278_);
v_unused_279_ = lean_ctor_get(v_m_237_, 0);
lean_dec(v_unused_279_);
v___x_258_ = v_m_237_;
v_isShared_259_ = v_isSharedCheck_277_;
goto v_resetjp_257_;
}
else
{
lean_dec(v_m_237_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_277_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_260_; lean_object* v_size_x27_261_; lean_object* v___x_262_; lean_object* v_buckets_x27_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_260_ = lean_unsigned_to_nat(1u);
v_size_x27_261_ = lean_nat_add(v_size_240_, v___x_260_);
lean_dec(v_size_240_);
lean_inc(v_bkt_255_);
v___x_262_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_262_, 0, v_a_238_);
lean_ctor_set(v___x_262_, 1, v_b_239_);
lean_ctor_set(v___x_262_, 2, v_bkt_255_);
v_buckets_x27_263_ = lean_array_uset(v_buckets_241_, v___x_254_, v___x_262_);
v___x_264_ = lean_unsigned_to_nat(4u);
v___x_265_ = lean_nat_mul(v_size_x27_261_, v___x_264_);
v___x_266_ = lean_unsigned_to_nat(3u);
v___x_267_ = lean_nat_div(v___x_265_, v___x_266_);
lean_dec(v___x_265_);
v___x_268_ = lean_array_get_size(v_buckets_x27_263_);
v___x_269_ = lean_nat_dec_le(v___x_267_, v___x_268_);
lean_dec(v___x_267_);
if (v___x_269_ == 0)
{
lean_object* v_val_270_; lean_object* v___x_272_; 
v_val_270_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1___redArg(v_buckets_x27_263_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 1, v_val_270_);
lean_ctor_set(v___x_258_, 0, v_size_x27_261_);
v___x_272_ = v___x_258_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_size_x27_261_);
lean_ctor_set(v_reuseFailAlloc_273_, 1, v_val_270_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
else
{
lean_object* v___x_275_; 
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 1, v_buckets_x27_263_);
lean_ctor_set(v___x_258_, 0, v_size_x27_261_);
v___x_275_ = v___x_258_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v_size_x27_261_);
lean_ctor_set(v_reuseFailAlloc_276_, 1, v_buckets_x27_263_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
}
else
{
lean_dec(v_b_239_);
lean_dec(v_a_238_);
return v_m_237_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar___redArg(lean_object* v_fvarId_280_, lean_object* v_a_281_, lean_object* v_a_282_){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v_vars_286_; lean_object* v_joinPoints_287_; lean_object* v_nextId_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_301_; 
v___x_284_ = lean_st_ref_get(v_a_282_);
lean_dec(v___x_284_);
v___x_285_ = lean_st_ref_take(v_a_281_);
v_vars_286_ = lean_ctor_get(v___x_285_, 0);
v_joinPoints_287_ = lean_ctor_get(v___x_285_, 1);
v_nextId_288_ = lean_ctor_get(v___x_285_, 2);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_301_ == 0)
{
v___x_290_ = v___x_285_;
v_isShared_291_ = v_isSharedCheck_301_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_nextId_288_);
lean_inc(v_joinPoints_287_);
lean_inc(v_vars_286_);
lean_dec(v___x_285_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_301_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_297_; 
lean_inc(v_nextId_288_);
v___x_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_292_, 0, v_nextId_288_);
v___x_293_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0___redArg(v_vars_286_, v_fvarId_280_, v___x_292_);
v___x_294_ = lean_unsigned_to_nat(1u);
v___x_295_ = lean_nat_add(v_nextId_288_, v___x_294_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 2, v___x_295_);
lean_ctor_set(v___x_290_, 0, v___x_293_);
v___x_297_ = v___x_290_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_293_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v_joinPoints_287_);
lean_ctor_set(v_reuseFailAlloc_300_, 2, v___x_295_);
v___x_297_ = v_reuseFailAlloc_300_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_st_ref_set(v_a_281_, v___x_297_);
v___x_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_299_, 0, v_nextId_288_);
return v___x_299_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar___redArg___boxed(lean_object* v_fvarId_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_IR_ToIR_bindVar___redArg(v_fvarId_302_, v_a_303_, v_a_304_);
lean_dec(v_a_304_);
lean_dec(v_a_303_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar(lean_object* v_fvarId_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = l_Lean_IR_ToIR_bindVar___redArg(v_fvarId_307_, v_a_308_, v_a_310_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindVar___boxed(lean_object* v_fvarId_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_IR_ToIR_bindVar(v_fvarId_313_, v_a_314_, v_a_315_, v_a_316_);
lean_dec(v_a_316_);
lean_dec_ref(v_a_315_);
lean_dec(v_a_314_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0(lean_object* v_00_u03b2_319_, lean_object* v_m_320_, lean_object* v_a_321_, lean_object* v_b_322_){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0___redArg(v_m_320_, v_a_321_, v_b_322_);
return v___x_323_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0(lean_object* v_00_u03b2_324_, lean_object* v_a_325_, lean_object* v_x_326_){
_start:
{
uint8_t v___x_327_; 
v___x_327_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___redArg(v_a_325_, v_x_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0___boxed(lean_object* v_00_u03b2_328_, lean_object* v_a_329_, lean_object* v_x_330_){
_start:
{
uint8_t v_res_331_; lean_object* v_r_332_; 
v_res_331_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__0(v_00_u03b2_328_, v_a_329_, v_x_330_);
lean_dec(v_x_330_);
lean_dec(v_a_329_);
v_r_332_ = lean_box(v_res_331_);
return v_r_332_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1(lean_object* v_00_u03b2_333_, lean_object* v_data_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1___redArg(v_data_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_336_, lean_object* v_i_337_, lean_object* v_source_338_, lean_object* v_target_339_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2___redArg(v_i_337_, v_source_338_, v_target_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_341_, lean_object* v_x_342_, lean_object* v_x_343_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0_spec__1_spec__2_spec__3___redArg(v_x_342_, v_x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint___redArg(lean_object* v_fvarId_345_, lean_object* v_a_346_, lean_object* v_a_347_){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v_vars_351_; lean_object* v_joinPoints_352_; lean_object* v_nextId_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_365_; 
v___x_349_ = lean_st_ref_get(v_a_347_);
lean_dec(v___x_349_);
v___x_350_ = lean_st_ref_take(v_a_346_);
v_vars_351_ = lean_ctor_get(v___x_350_, 0);
v_joinPoints_352_ = lean_ctor_get(v___x_350_, 1);
v_nextId_353_ = lean_ctor_get(v___x_350_, 2);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_365_ == 0)
{
v___x_355_ = v___x_350_;
v_isShared_356_ = v_isSharedCheck_365_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_nextId_353_);
lean_inc(v_joinPoints_352_);
lean_inc(v_vars_351_);
lean_dec(v___x_350_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_365_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_361_; 
lean_inc(v_nextId_353_);
v___x_357_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0___redArg(v_joinPoints_352_, v_fvarId_345_, v_nextId_353_);
v___x_358_ = lean_unsigned_to_nat(1u);
v___x_359_ = lean_nat_add(v_nextId_353_, v___x_358_);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 2, v___x_359_);
lean_ctor_set(v___x_355_, 1, v___x_357_);
v___x_361_ = v___x_355_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_vars_351_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v___x_357_);
lean_ctor_set(v_reuseFailAlloc_364_, 2, v___x_359_);
v___x_361_ = v_reuseFailAlloc_364_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_st_ref_set(v_a_346_, v___x_361_);
v___x_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_363_, 0, v_nextId_353_);
return v___x_363_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint___redArg___boxed(lean_object* v_fvarId_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lean_IR_ToIR_bindJoinPoint___redArg(v_fvarId_366_, v_a_367_, v_a_368_);
lean_dec(v_a_368_);
lean_dec(v_a_367_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint(lean_object* v_fvarId_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l_Lean_IR_ToIR_bindJoinPoint___redArg(v_fvarId_371_, v_a_372_, v_a_374_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindJoinPoint___boxed(lean_object* v_fvarId_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Lean_IR_ToIR_bindJoinPoint(v_fvarId_377_, v_a_378_, v_a_379_, v_a_380_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
lean_dec(v_a_378_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased___redArg(lean_object* v_fvarId_383_, lean_object* v_a_384_, lean_object* v_a_385_){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v_vars_389_; lean_object* v_joinPoints_390_; lean_object* v_nextId_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_403_; 
v___x_387_ = lean_st_ref_get(v_a_385_);
lean_dec(v___x_387_);
v___x_388_ = lean_st_ref_take(v_a_384_);
v_vars_389_ = lean_ctor_get(v___x_388_, 0);
v_joinPoints_390_ = lean_ctor_get(v___x_388_, 1);
v_nextId_391_ = lean_ctor_get(v___x_388_, 2);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_403_ == 0)
{
v___x_393_ = v___x_388_;
v_isShared_394_ = v_isSharedCheck_403_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_nextId_391_);
lean_inc(v_joinPoints_390_);
lean_inc(v_vars_389_);
lean_dec(v___x_388_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_403_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_398_; 
v___x_395_ = lean_box(1);
v___x_396_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_IR_ToIR_bindVar_spec__0___redArg(v_vars_389_, v_fvarId_383_, v___x_395_);
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 0, v___x_396_);
v___x_398_ = v___x_393_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v___x_396_);
lean_ctor_set(v_reuseFailAlloc_402_, 1, v_joinPoints_390_);
lean_ctor_set(v_reuseFailAlloc_402_, 2, v_nextId_391_);
v___x_398_ = v_reuseFailAlloc_402_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_399_ = lean_st_ref_set(v_a_384_, v___x_398_);
v___x_400_ = lean_box(0);
v___x_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
return v___x_401_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased___redArg___boxed(lean_object* v_fvarId_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lean_IR_ToIR_bindErased___redArg(v_fvarId_404_, v_a_405_, v_a_406_);
lean_dec(v_a_406_);
lean_dec(v_a_405_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased(lean_object* v_fvarId_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lean_IR_ToIR_bindErased___redArg(v_fvarId_409_, v_a_410_, v_a_412_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_bindErased___boxed(lean_object* v_fvarId_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lean_IR_ToIR_bindErased(v_fvarId_415_, v_a_416_, v_a_417_, v_a_418_);
lean_dec(v_a_418_);
lean_dec_ref(v_a_417_);
lean_dec(v_a_416_);
return v_res_420_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_addDecl___redArg___closed__0(void){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_421_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_addDecl___redArg___closed__1(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = lean_obj_once(&l_Lean_IR_ToIR_addDecl___redArg___closed__0, &l_Lean_IR_ToIR_addDecl___redArg___closed__0_once, _init_l_Lean_IR_ToIR_addDecl___redArg___closed__0);
v___x_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
return v___x_423_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_addDecl___redArg___closed__2(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = lean_obj_once(&l_Lean_IR_ToIR_addDecl___redArg___closed__1, &l_Lean_IR_ToIR_addDecl___redArg___closed__1_once, _init_l_Lean_IR_ToIR_addDecl___redArg___closed__1);
v___x_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
lean_ctor_set(v___x_425_, 1, v___x_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl___redArg(lean_object* v_d_426_, lean_object* v_a_427_){
_start:
{
lean_object* v___x_429_; lean_object* v_env_430_; lean_object* v_nextMacroScope_431_; lean_object* v_ngen_432_; lean_object* v_auxDeclNGen_433_; lean_object* v_traceState_434_; lean_object* v_messages_435_; lean_object* v_infoState_436_; lean_object* v_snapshotTasks_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_453_; 
v___x_429_ = lean_st_ref_take(v_a_427_);
v_env_430_ = lean_ctor_get(v___x_429_, 0);
v_nextMacroScope_431_ = lean_ctor_get(v___x_429_, 1);
v_ngen_432_ = lean_ctor_get(v___x_429_, 2);
v_auxDeclNGen_433_ = lean_ctor_get(v___x_429_, 3);
v_traceState_434_ = lean_ctor_get(v___x_429_, 4);
v_messages_435_ = lean_ctor_get(v___x_429_, 6);
v_infoState_436_ = lean_ctor_get(v___x_429_, 7);
v_snapshotTasks_437_ = lean_ctor_get(v___x_429_, 8);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_453_ == 0)
{
lean_object* v_unused_454_; 
v_unused_454_ = lean_ctor_get(v___x_429_, 5);
lean_dec(v_unused_454_);
v___x_439_ = v___x_429_;
v_isShared_440_ = v_isSharedCheck_453_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_snapshotTasks_437_);
lean_inc(v_infoState_436_);
lean_inc(v_messages_435_);
lean_inc(v_traceState_434_);
lean_inc(v_auxDeclNGen_433_);
lean_inc(v_ngen_432_);
lean_inc(v_nextMacroScope_431_);
lean_inc(v_env_430_);
lean_dec(v___x_429_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_453_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_441_; lean_object* v_toEnvExtension_442_; lean_object* v_asyncMode_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_441_ = l_Lean_IR_declMapExt;
v_toEnvExtension_442_ = lean_ctor_get(v___x_441_, 0);
v_asyncMode_443_ = lean_ctor_get(v_toEnvExtension_442_, 2);
v___x_444_ = lean_box(0);
v___x_445_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_441_, v_env_430_, v_d_426_, v_asyncMode_443_, v___x_444_);
v___x_446_ = lean_obj_once(&l_Lean_IR_ToIR_addDecl___redArg___closed__2, &l_Lean_IR_ToIR_addDecl___redArg___closed__2_once, _init_l_Lean_IR_ToIR_addDecl___redArg___closed__2);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 5, v___x_446_);
lean_ctor_set(v___x_439_, 0, v___x_445_);
v___x_448_ = v___x_439_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v___x_445_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_nextMacroScope_431_);
lean_ctor_set(v_reuseFailAlloc_452_, 2, v_ngen_432_);
lean_ctor_set(v_reuseFailAlloc_452_, 3, v_auxDeclNGen_433_);
lean_ctor_set(v_reuseFailAlloc_452_, 4, v_traceState_434_);
lean_ctor_set(v_reuseFailAlloc_452_, 5, v___x_446_);
lean_ctor_set(v_reuseFailAlloc_452_, 6, v_messages_435_);
lean_ctor_set(v_reuseFailAlloc_452_, 7, v_infoState_436_);
lean_ctor_set(v_reuseFailAlloc_452_, 8, v_snapshotTasks_437_);
v___x_448_ = v_reuseFailAlloc_452_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_st_ref_set(v_a_427_, v___x_448_);
v___x_450_ = lean_box(0);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl___redArg___boxed(lean_object* v_d_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Lean_IR_ToIR_addDecl___redArg(v_d_455_, v_a_456_);
lean_dec(v_a_456_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl(lean_object* v_d_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l_Lean_IR_ToIR_addDecl___redArg(v_d_459_, v_a_462_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_addDecl___boxed(lean_object* v_d_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lean_IR_ToIR_addDecl(v_d_465_, v_a_466_, v_a_467_, v_a_468_);
lean_dec(v_a_468_);
lean_dec_ref(v_a_467_);
lean_dec(v_a_466_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLitValue(lean_object* v_v_471_){
_start:
{
switch(lean_obj_tag(v_v_471_))
{
case 0:
{
lean_object* v_val_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_486_; 
v_val_472_ = lean_ctor_get(v_v_471_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v_v_471_);
if (v_isSharedCheck_486_ == 0)
{
v___x_474_ = v_v_471_;
v_isShared_475_ = v_isSharedCheck_486_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_val_472_);
lean_dec(v_v_471_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_486_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___y_477_; lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = lean_cstr_to_nat("4294967296");
v___x_483_ = lean_nat_dec_lt(v_val_472_, v___x_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; 
v___x_484_ = lean_box(8);
v___y_477_ = v___x_484_;
goto v___jp_476_;
}
else
{
lean_object* v___x_485_; 
v___x_485_ = lean_box(12);
v___y_477_ = v___x_485_;
goto v___jp_476_;
}
v___jp_476_:
{
lean_object* v___x_479_; 
if (v_isShared_475_ == 0)
{
v___x_479_ = v___x_474_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_val_472_);
v___x_479_ = v_reuseFailAlloc_481_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
lean_object* v___x_480_; 
lean_inc(v___y_477_);
v___x_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set(v___x_480_, 1, v___y_477_);
return v___x_480_;
}
}
}
}
case 1:
{
lean_object* v_val_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_496_; 
v_val_487_ = lean_ctor_get(v_v_471_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v_v_471_);
if (v_isSharedCheck_496_ == 0)
{
v___x_489_ = v_v_471_;
v_isShared_490_ = v_isSharedCheck_496_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_val_487_);
lean_dec(v_v_471_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_496_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_492_; 
if (v_isShared_490_ == 0)
{
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_val_487_);
v___x_492_ = v_reuseFailAlloc_495_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = lean_box(7);
v___x_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_492_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
return v___x_494_;
}
}
}
case 2:
{
uint8_t v_val_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v_val_497_ = lean_ctor_get_uint8(v_v_471_, 0);
lean_dec_ref(v_v_471_);
v___x_498_ = lean_uint8_to_nat(v_val_497_);
v___x_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
v___x_500_ = lean_box(1);
v___x_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_499_);
lean_ctor_set(v___x_501_, 1, v___x_500_);
return v___x_501_;
}
case 3:
{
uint16_t v_val_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_val_502_ = lean_ctor_get_uint16(v_v_471_, 0);
lean_dec_ref(v_v_471_);
v___x_503_ = lean_uint16_to_nat(v_val_502_);
v___x_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
v___x_505_ = lean_box(2);
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_504_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
return v___x_506_;
}
case 4:
{
uint32_t v_val_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v_val_507_ = lean_ctor_get_uint32(v_v_471_, 0);
lean_dec_ref(v_v_471_);
v___x_508_ = lean_uint32_to_nat(v_val_507_);
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
v___x_510_ = lean_box(3);
v___x_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_509_);
lean_ctor_set(v___x_511_, 1, v___x_510_);
return v___x_511_;
}
case 5:
{
uint64_t v_val_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v_val_512_ = lean_ctor_get_uint64(v_v_471_, 0);
lean_dec_ref(v_v_471_);
v___x_513_ = lean_uint64_to_nat(v_val_512_);
v___x_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
v___x_515_ = lean_box(4);
v___x_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_514_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
return v___x_516_;
}
default: 
{
uint64_t v_val_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v_val_517_ = lean_ctor_get_uint64(v_v_471_, 0);
lean_dec_ref(v_v_471_);
v___x_518_ = lean_uint64_to_nat(v_val_517_);
v___x_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
v___x_520_ = lean_box(5);
v___x_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_519_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
return v___x_521_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg___redArg(lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_){
_start:
{
if (lean_obj_tag(v_a_522_) == 0)
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = lean_box(1);
v___x_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
return v___x_527_;
}
else
{
lean_object* v_fvarId_528_; lean_object* v___x_529_; 
v_fvarId_528_ = lean_ctor_get(v_a_522_, 0);
v___x_529_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_528_, v_a_523_, v_a_524_);
return v___x_529_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg___redArg___boxed(lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lean_IR_ToIR_lowerArg___redArg(v_a_530_, v_a_531_, v_a_532_);
lean_dec(v_a_532_);
lean_dec(v_a_531_);
lean_dec(v_a_530_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg(lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = l_Lean_IR_ToIR_lowerArg___redArg(v_a_535_, v_a_536_, v_a_538_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerArg___boxed(lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_IR_ToIR_lowerArg(v_a_541_, v_a_542_, v_a_543_, v_a_544_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec(v_a_541_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam___redArg(lean_object* v_p_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v_fvarId_551_; lean_object* v_type_552_; uint8_t v_borrow_553_; lean_object* v___x_554_; lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_564_; 
v_fvarId_551_ = lean_ctor_get(v_p_547_, 0);
lean_inc(v_fvarId_551_);
v_type_552_ = lean_ctor_get(v_p_547_, 2);
lean_inc_ref(v_type_552_);
v_borrow_553_ = lean_ctor_get_uint8(v_p_547_, sizeof(void*)*3);
lean_dec_ref(v_p_547_);
v___x_554_ = l_Lean_IR_ToIR_bindVar___redArg(v_fvarId_551_, v_a_548_, v_a_549_);
v_a_555_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_564_ == 0)
{
v___x_557_ = v___x_554_;
v_isShared_558_ = v_isSharedCheck_564_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_554_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_564_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_562_; 
v___x_559_ = l_Lean_IR_toIRType(v_type_552_);
lean_dec_ref(v_type_552_);
v___x_560_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_560_, 0, v_a_555_);
lean_ctor_set(v___x_560_, 1, v___x_559_);
lean_ctor_set_uint8(v___x_560_, sizeof(void*)*2, v_borrow_553_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 0, v___x_560_);
v___x_562_ = v___x_557_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_560_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam___redArg___boxed(lean_object* v_p_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lean_IR_ToIR_lowerParam___redArg(v_p_565_, v_a_566_, v_a_567_);
lean_dec(v_a_567_);
lean_dec(v_a_566_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam(lean_object* v_p_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = l_Lean_IR_ToIR_lowerParam___redArg(v_p_570_, v_a_571_, v_a_573_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerParam___boxed(lean_object* v_p_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Lean_IR_ToIR_lowerParam(v_p_576_, v_a_577_, v_a_578_, v_a_579_);
lean_dec(v_a_579_);
lean_dec_ref(v_a_578_);
lean_dec(v_a_577_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerCtorInfo(lean_object* v_i_582_){
_start:
{
lean_object* v_name_583_; lean_object* v_cidx_584_; lean_object* v_size_585_; lean_object* v_usize_586_; lean_object* v_ssize_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
v_name_583_ = lean_ctor_get(v_i_582_, 0);
v_cidx_584_ = lean_ctor_get(v_i_582_, 1);
v_size_585_ = lean_ctor_get(v_i_582_, 2);
v_usize_586_ = lean_ctor_get(v_i_582_, 3);
v_ssize_587_ = lean_ctor_get(v_i_582_, 4);
v_isSharedCheck_594_ = !lean_is_exclusive(v_i_582_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v_i_582_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_ssize_587_);
lean_inc(v_usize_586_);
lean_inc(v_size_585_);
lean_inc(v_cidx_584_);
lean_inc(v_name_583_);
lean_dec(v_i_582_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_name_583_);
lean_ctor_set(v_reuseFailAlloc_593_, 1, v_cidx_584_);
lean_ctor_set(v_reuseFailAlloc_593_, 2, v_size_585_);
lean_ctor_set(v_reuseFailAlloc_593_, 3, v_usize_586_);
lean_ctor_set(v_reuseFailAlloc_593_, 4, v_ssize_587_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg(size_t v_sz_595_, size_t v_i_596_, lean_object* v_bs_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
uint8_t v___x_601_; 
v___x_601_ = lean_usize_dec_lt(v_i_596_, v_sz_595_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; 
v___x_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_602_, 0, v_bs_597_);
return v___x_602_;
}
else
{
lean_object* v_v_603_; lean_object* v___x_604_; 
v_v_603_ = lean_array_uget_borrowed(v_bs_597_, v_i_596_);
lean_inc(v_v_603_);
v___x_604_ = l_Lean_IR_ToIR_lowerParam___redArg(v_v_603_, v___y_598_, v___y_599_);
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v_a_605_; lean_object* v___x_606_; lean_object* v_bs_x27_607_; size_t v___x_608_; size_t v___x_609_; lean_object* v___x_610_; 
v_a_605_ = lean_ctor_get(v___x_604_, 0);
lean_inc(v_a_605_);
lean_dec_ref(v___x_604_);
v___x_606_ = lean_unsigned_to_nat(0u);
v_bs_x27_607_ = lean_array_uset(v_bs_597_, v_i_596_, v___x_606_);
v___x_608_ = ((size_t)1ULL);
v___x_609_ = lean_usize_add(v_i_596_, v___x_608_);
v___x_610_ = lean_array_uset(v_bs_x27_607_, v_i_596_, v_a_605_);
v_i_596_ = v___x_609_;
v_bs_597_ = v___x_610_;
goto _start;
}
else
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
lean_dec_ref(v_bs_597_);
v_a_612_ = lean_ctor_get(v___x_604_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v___x_604_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_604_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_a_612_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg___boxed(lean_object* v_sz_620_, lean_object* v_i_621_, lean_object* v_bs_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_){
_start:
{
size_t v_sz_boxed_626_; size_t v_i_boxed_627_; lean_object* v_res_628_; 
v_sz_boxed_626_ = lean_unbox_usize(v_sz_620_);
lean_dec(v_sz_620_);
v_i_boxed_627_ = lean_unbox_usize(v_i_621_);
lean_dec(v_i_621_);
v_res_628_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg(v_sz_boxed_626_, v_i_boxed_627_, v_bs_622_, v___y_623_, v___y_624_);
lean_dec(v___y_624_);
lean_dec(v___y_623_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(size_t v_sz_629_, size_t v_i_630_, lean_object* v_bs_631_, lean_object* v___y_632_, lean_object* v___y_633_){
_start:
{
uint8_t v___x_635_; 
v___x_635_ = lean_usize_dec_lt(v_i_630_, v_sz_629_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; 
v___x_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_636_, 0, v_bs_631_);
return v___x_636_;
}
else
{
lean_object* v_v_637_; lean_object* v___x_638_; 
v_v_637_ = lean_array_uget_borrowed(v_bs_631_, v_i_630_);
v___x_638_ = l_Lean_IR_ToIR_lowerArg___redArg(v_v_637_, v___y_632_, v___y_633_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v___x_640_; lean_object* v_bs_x27_641_; size_t v___x_642_; size_t v___x_643_; lean_object* v___x_644_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
lean_inc(v_a_639_);
lean_dec_ref(v___x_638_);
v___x_640_ = lean_unsigned_to_nat(0u);
v_bs_x27_641_ = lean_array_uset(v_bs_631_, v_i_630_, v___x_640_);
v___x_642_ = ((size_t)1ULL);
v___x_643_ = lean_usize_add(v_i_630_, v___x_642_);
v___x_644_ = lean_array_uset(v_bs_x27_641_, v_i_630_, v_a_639_);
v_i_630_ = v___x_643_;
v_bs_631_ = v___x_644_;
goto _start;
}
else
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
lean_dec_ref(v_bs_631_);
v_a_646_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_638_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_638_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg___boxed(lean_object* v_sz_654_, lean_object* v_i_655_, lean_object* v_bs_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
size_t v_sz_boxed_660_; size_t v_i_boxed_661_; lean_object* v_res_662_; 
v_sz_boxed_660_ = lean_unbox_usize(v_sz_654_);
lean_dec(v_sz_654_);
v_i_boxed_661_ = lean_unbox_usize(v_i_655_);
lean_dec(v_i_655_);
v_res_662_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(v_sz_boxed_660_, v_i_boxed_661_, v_bs_656_, v___y_657_, v___y_658_);
lean_dec(v___y_658_);
lean_dec(v___y_657_);
return v_res_662_;
}
}
static lean_object* _init_l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__0(void){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = l_instMonadEIO(lean_box(0));
return v___x_663_;
}
}
static lean_object* _init_l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__1(void){
_start:
{
lean_object* v___f_664_; 
v___f_664_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_664_;
}
}
static lean_object* _init_l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__2(void){
_start:
{
lean_object* v___f_665_; 
v___f_665_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_665_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(lean_object* v_msg_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v_toApplicative_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_705_; 
v___x_671_ = lean_obj_once(&l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__0, &l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__0_once, _init_l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__0);
v___x_672_ = l_StateRefT_x27_instMonad___redArg(v___x_671_);
v_toApplicative_673_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_705_ == 0)
{
lean_object* v_unused_706_; 
v_unused_706_ = lean_ctor_get(v___x_672_, 1);
lean_dec(v_unused_706_);
v___x_675_ = v___x_672_;
v_isShared_676_ = v_isSharedCheck_705_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_toApplicative_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_705_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v_toFunctor_677_; lean_object* v_toSeq_678_; lean_object* v_toSeqLeft_679_; lean_object* v_toSeqRight_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_703_; 
v_toFunctor_677_ = lean_ctor_get(v_toApplicative_673_, 0);
v_toSeq_678_ = lean_ctor_get(v_toApplicative_673_, 2);
v_toSeqLeft_679_ = lean_ctor_get(v_toApplicative_673_, 3);
v_toSeqRight_680_ = lean_ctor_get(v_toApplicative_673_, 4);
v_isSharedCheck_703_ = !lean_is_exclusive(v_toApplicative_673_);
if (v_isSharedCheck_703_ == 0)
{
lean_object* v_unused_704_; 
v_unused_704_ = lean_ctor_get(v_toApplicative_673_, 1);
lean_dec(v_unused_704_);
v___x_682_ = v_toApplicative_673_;
v_isShared_683_ = v_isSharedCheck_703_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_toSeqRight_680_);
lean_inc(v_toSeqLeft_679_);
lean_inc(v_toSeq_678_);
lean_inc(v_toFunctor_677_);
lean_dec(v_toApplicative_673_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_703_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___f_684_; lean_object* v___f_685_; lean_object* v___f_686_; lean_object* v___f_687_; lean_object* v___x_688_; lean_object* v___f_689_; lean_object* v___f_690_; lean_object* v___f_691_; lean_object* v___x_693_; 
v___f_684_ = lean_obj_once(&l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__1, &l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__1_once, _init_l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__1);
v___f_685_ = lean_obj_once(&l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__2, &l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__2_once, _init_l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___closed__2);
lean_inc_ref(v_toFunctor_677_);
v___f_686_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_686_, 0, v_toFunctor_677_);
v___f_687_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_687_, 0, v_toFunctor_677_);
v___x_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_688_, 0, v___f_686_);
lean_ctor_set(v___x_688_, 1, v___f_687_);
v___f_689_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_689_, 0, v_toSeqRight_680_);
v___f_690_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_690_, 0, v_toSeqLeft_679_);
v___f_691_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_691_, 0, v_toSeq_678_);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 4, v___f_689_);
lean_ctor_set(v___x_682_, 3, v___f_690_);
lean_ctor_set(v___x_682_, 2, v___f_691_);
lean_ctor_set(v___x_682_, 1, v___f_684_);
lean_ctor_set(v___x_682_, 0, v___x_688_);
v___x_693_ = v___x_682_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v___f_684_);
lean_ctor_set(v_reuseFailAlloc_702_, 2, v___f_691_);
lean_ctor_set(v_reuseFailAlloc_702_, 3, v___f_690_);
lean_ctor_set(v_reuseFailAlloc_702_, 4, v___f_689_);
v___x_693_ = v_reuseFailAlloc_702_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
lean_object* v___x_695_; 
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 1, v___f_685_);
lean_ctor_set(v___x_675_, 0, v___x_693_);
v___x_695_ = v___x_675_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v___x_693_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v___f_685_);
v___x_695_ = v_reuseFailAlloc_701_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_8612__overap_699_; lean_object* v___x_700_; 
v___x_696_ = l_StateRefT_x27_instMonad___redArg(v___x_695_);
v___x_697_ = l_Lean_IR_instInhabitedFnBody_default__1;
v___x_698_ = l_instInhabitedOfMonad___redArg(v___x_696_, v___x_697_);
v___x_8612__overap_699_ = lean_panic_fn_borrowed(v___x_698_, v_msg_666_);
lean_dec(v___x_698_);
lean_inc(v___y_669_);
lean_inc_ref(v___y_668_);
lean_inc(v___y_667_);
v___x_700_ = lean_apply_4(v___x_8612__overap_699_, v___y_667_, v___y_668_, v___y_669_, lean_box(0));
return v___x_700_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1___boxed(lean_object* v_msg_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v_msg_707_, v___y_708_, v___y_709_, v___y_710_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec(v___y_708_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__2(lean_object* v_i_713_, lean_object* v_continueLet_714_, lean_object* v_var_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_720_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_720_, 0, v_i_713_);
lean_ctor_set(v___x_720_, 1, v_var_715_);
lean_inc(v___y_718_);
lean_inc_ref(v___y_717_);
lean_inc(v___y_716_);
v___x_721_ = lean_apply_5(v_continueLet_714_, v___x_720_, v___y_716_, v___y_717_, v___y_718_, lean_box(0));
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__2___boxed(lean_object* v_i_722_, lean_object* v_continueLet_723_, lean_object* v_var_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lean_IR_ToIR_lowerLet___lam__2(v_i_722_, v_continueLet_723_, v_var_724_, v___y_725_, v___y_726_, v___y_727_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
lean_dec(v___y_725_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__5(lean_object* v_n_730_, lean_object* v_continueLet_731_, lean_object* v_var_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_737_, 0, v_n_730_);
lean_ctor_set(v___x_737_, 1, v_var_732_);
lean_inc(v___y_735_);
lean_inc_ref(v___y_734_);
lean_inc(v___y_733_);
v___x_738_ = lean_apply_5(v_continueLet_731_, v___x_737_, v___y_733_, v___y_734_, v___y_735_, lean_box(0));
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__5___boxed(lean_object* v_n_739_, lean_object* v_continueLet_740_, lean_object* v_var_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Lean_IR_ToIR_lowerLet___lam__5(v_n_739_, v_continueLet_740_, v_var_741_, v___y_742_, v___y_743_, v___y_744_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
lean_dec(v___y_742_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__6(lean_object* v_args_747_, lean_object* v_i_748_, uint8_t v_updateHeader_749_, lean_object* v_continueLet_750_, lean_object* v_var_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
size_t v_sz_756_; size_t v___x_757_; lean_object* v___x_758_; 
v_sz_756_ = lean_array_size(v_args_747_);
v___x_757_ = ((size_t)0ULL);
v___x_758_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(v_sz_756_, v___x_757_, v_args_747_, v___y_752_, v___y_754_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v_name_760_; lean_object* v_cidx_761_; lean_object* v_size_762_; lean_object* v_usize_763_; lean_object* v_ssize_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_773_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref(v___x_758_);
v_name_760_ = lean_ctor_get(v_i_748_, 0);
v_cidx_761_ = lean_ctor_get(v_i_748_, 1);
v_size_762_ = lean_ctor_get(v_i_748_, 2);
v_usize_763_ = lean_ctor_get(v_i_748_, 3);
v_ssize_764_ = lean_ctor_get(v_i_748_, 4);
v_isSharedCheck_773_ = !lean_is_exclusive(v_i_748_);
if (v_isSharedCheck_773_ == 0)
{
v___x_766_ = v_i_748_;
v_isShared_767_ = v_isSharedCheck_773_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_ssize_764_);
lean_inc(v_usize_763_);
lean_inc(v_size_762_);
lean_inc(v_cidx_761_);
lean_inc(v_name_760_);
lean_dec(v_i_748_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_773_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_name_760_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_cidx_761_);
lean_ctor_set(v_reuseFailAlloc_772_, 2, v_size_762_);
lean_ctor_set(v_reuseFailAlloc_772_, 3, v_usize_763_);
lean_ctor_set(v_reuseFailAlloc_772_, 4, v_ssize_764_);
v___x_769_ = v_reuseFailAlloc_772_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(v___x_770_, 0, v_var_751_);
lean_ctor_set(v___x_770_, 1, v___x_769_);
lean_ctor_set(v___x_770_, 2, v_a_759_);
lean_ctor_set_uint8(v___x_770_, sizeof(void*)*3, v_updateHeader_749_);
lean_inc(v___y_754_);
lean_inc_ref(v___y_753_);
lean_inc(v___y_752_);
v___x_771_ = lean_apply_5(v_continueLet_750_, v___x_770_, v___y_752_, v___y_753_, v___y_754_, lean_box(0));
return v___x_771_;
}
}
}
else
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_781_; 
lean_dec(v_var_751_);
lean_dec_ref(v_continueLet_750_);
lean_dec_ref(v_i_748_);
v_a_774_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_781_ == 0)
{
v___x_776_ = v___x_758_;
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_758_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_777_ == 0)
{
v___x_779_ = v___x_776_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_a_774_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__6___boxed(lean_object* v_args_782_, lean_object* v_i_783_, lean_object* v_updateHeader_784_, lean_object* v_continueLet_785_, lean_object* v_var_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
uint8_t v_updateHeader_9582__boxed_791_; lean_object* v_res_792_; 
v_updateHeader_9582__boxed_791_ = lean_unbox(v_updateHeader_784_);
v_res_792_ = l_Lean_IR_ToIR_lowerLet___lam__6(v_args_782_, v_i_783_, v_updateHeader_9582__boxed_791_, v_continueLet_785_, v_var_786_, v___y_787_, v___y_788_, v___y_789_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__3(lean_object* v_i_793_, lean_object* v_continueLet_794_, lean_object* v_var_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_){
_start:
{
lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_800_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_800_, 0, v_i_793_);
lean_ctor_set(v___x_800_, 1, v_var_795_);
lean_inc(v___y_798_);
lean_inc_ref(v___y_797_);
lean_inc(v___y_796_);
v___x_801_ = lean_apply_5(v_continueLet_794_, v___x_800_, v___y_796_, v___y_797_, v___y_798_, lean_box(0));
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__3___boxed(lean_object* v_i_802_, lean_object* v_continueLet_803_, lean_object* v_var_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_Lean_IR_ToIR_lowerLet___lam__3(v_i_802_, v_continueLet_803_, v_var_804_, v___y_805_, v___y_806_, v___y_807_);
lean_dec(v___y_807_);
lean_dec_ref(v___y_806_);
lean_dec(v___y_805_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__1(lean_object* v_args_810_, lean_object* v_continueLet_811_, lean_object* v_id_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
size_t v_sz_817_; size_t v___x_818_; lean_object* v___x_819_; 
v_sz_817_ = lean_array_size(v_args_810_);
v___x_818_ = ((size_t)0ULL);
v___x_819_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(v_sz_817_, v___x_818_, v_args_810_, v___y_813_, v___y_815_);
if (lean_obj_tag(v___x_819_) == 0)
{
lean_object* v_a_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_a_820_ = lean_ctor_get(v___x_819_, 0);
lean_inc(v_a_820_);
lean_dec_ref(v___x_819_);
v___x_821_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_821_, 0, v_id_812_);
lean_ctor_set(v___x_821_, 1, v_a_820_);
lean_inc(v___y_815_);
lean_inc_ref(v___y_814_);
lean_inc(v___y_813_);
v___x_822_ = lean_apply_5(v_continueLet_811_, v___x_821_, v___y_813_, v___y_814_, v___y_815_, lean_box(0));
return v___x_822_;
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
lean_dec(v_id_812_);
lean_dec_ref(v_continueLet_811_);
v_a_823_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_819_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_819_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__1___boxed(lean_object* v_args_831_, lean_object* v_continueLet_832_, lean_object* v_id_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Lean_IR_ToIR_lowerLet___lam__1(v_args_831_, v_continueLet_832_, v_id_833_, v___y_834_, v___y_835_, v___y_836_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v___y_834_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__8(lean_object* v_continueLet_839_, lean_object* v_var_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v___x_845_, 0, v_var_840_);
lean_inc(v___y_843_);
lean_inc_ref(v___y_842_);
lean_inc(v___y_841_);
v___x_846_ = lean_apply_5(v_continueLet_839_, v___x_845_, v___y_841_, v___y_842_, v___y_843_, lean_box(0));
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__8___boxed(lean_object* v_continueLet_847_, lean_object* v_var_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lean_IR_ToIR_lowerLet___lam__8(v_continueLet_847_, v_var_848_, v___y_849_, v___y_850_, v___y_851_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v___y_849_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__9(lean_object* v_continueLet_854_, lean_object* v_var_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(v___x_860_, 0, v_var_855_);
lean_inc(v___y_858_);
lean_inc_ref(v___y_857_);
lean_inc(v___y_856_);
v___x_861_ = lean_apply_5(v_continueLet_854_, v___x_860_, v___y_856_, v___y_857_, v___y_858_, lean_box(0));
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__9___boxed(lean_object* v_continueLet_862_, lean_object* v_var_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lean_IR_ToIR_lowerLet___lam__9(v_continueLet_862_, v_var_863_, v___y_864_, v___y_865_, v___y_866_);
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__4(lean_object* v_n_869_, lean_object* v_offset_870_, lean_object* v_continueLet_871_, lean_object* v_var_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_877_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v___x_877_, 0, v_n_869_);
lean_ctor_set(v___x_877_, 1, v_offset_870_);
lean_ctor_set(v___x_877_, 2, v_var_872_);
lean_inc(v___y_875_);
lean_inc_ref(v___y_874_);
lean_inc(v___y_873_);
v___x_878_ = lean_apply_5(v_continueLet_871_, v___x_877_, v___y_873_, v___y_874_, v___y_875_, lean_box(0));
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__4___boxed(lean_object* v_n_879_, lean_object* v_offset_880_, lean_object* v_continueLet_881_, lean_object* v_var_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_Lean_IR_ToIR_lowerLet___lam__4(v_n_879_, v_offset_880_, v_continueLet_881_, v_var_882_, v___y_883_, v___y_884_, v___y_885_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec(v___y_883_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__7(lean_object* v_ty_888_, lean_object* v_continueLet_889_, lean_object* v_var_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_895_ = l_Lean_IR_toIRType(v_ty_888_);
v___x_896_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
lean_ctor_set(v___x_896_, 1, v_var_890_);
lean_inc(v___y_893_);
lean_inc_ref(v___y_892_);
lean_inc(v___y_891_);
v___x_897_ = lean_apply_5(v_continueLet_889_, v___x_896_, v___y_891_, v___y_892_, v___y_893_, lean_box(0));
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__7___boxed(lean_object* v_ty_898_, lean_object* v_continueLet_899_, lean_object* v_var_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l_Lean_IR_ToIR_lowerLet___lam__7(v_ty_898_, v_continueLet_899_, v_var_900_, v___y_901_, v___y_902_, v___y_903_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
lean_dec(v___y_901_);
lean_dec_ref(v_ty_898_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__0(lean_object* v_fvarId_906_, lean_object* v_k_907_, lean_object* v_type_908_, lean_object* v_e_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_Lean_IR_ToIR_bindVar___redArg(v_fvarId_906_, v___y_910_, v___y_912_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v_a_915_; lean_object* v___x_916_; 
v_a_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_a_915_);
lean_dec_ref(v___x_914_);
v___x_916_ = l_Lean_IR_ToIR_lowerCode(v_k_907_, v___y_910_, v___y_911_, v___y_912_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_925_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_925_ == 0)
{
v___x_919_ = v___x_916_;
v_isShared_920_ = v_isSharedCheck_925_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_916_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_925_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_921_; lean_object* v___x_923_; 
v___x_921_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_921_, 0, v_a_915_);
lean_ctor_set(v___x_921_, 1, v_type_908_);
lean_ctor_set(v___x_921_, 2, v_e_909_);
lean_ctor_set(v___x_921_, 3, v_a_917_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___x_921_);
v___x_923_ = v___x_919_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_921_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
else
{
lean_dec(v_a_915_);
lean_dec_ref(v_e_909_);
lean_dec(v_type_908_);
return v___x_916_;
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_dec_ref(v_e_909_);
lean_dec(v_type_908_);
lean_dec_ref(v_k_907_);
v_a_926_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_914_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_914_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___lam__0___boxed(lean_object* v_fvarId_934_, lean_object* v_k_935_, lean_object* v_type_936_, lean_object* v_e_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_IR_ToIR_lowerLet___lam__0(v_fvarId_934_, v_k_935_, v_type_936_, v_e_937_, v___y_938_, v___y_939_, v___y_940_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec(v___y_938_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(lean_object* v_decl_943_, lean_object* v_k_944_, lean_object* v_fvarId_945_, lean_object* v_f_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_945_, v_a_947_, v_a_949_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v_a_952_; 
v_a_952_ = lean_ctor_get(v___x_951_, 0);
lean_inc(v_a_952_);
lean_dec_ref(v___x_951_);
if (lean_obj_tag(v_a_952_) == 0)
{
lean_object* v_id_953_; lean_object* v___x_954_; 
lean_dec_ref(v_k_944_);
lean_dec_ref(v_decl_943_);
v_id_953_ = lean_ctor_get(v_a_952_, 0);
lean_inc(v_id_953_);
lean_dec_ref(v_a_952_);
lean_inc(v_a_949_);
lean_inc_ref(v_a_948_);
lean_inc(v_a_947_);
v___x_954_ = lean_apply_5(v_f_946_, v_id_953_, v_a_947_, v_a_948_, v_a_949_, lean_box(0));
return v___x_954_;
}
else
{
lean_object* v___x_955_; 
lean_dec_ref(v_f_946_);
v___x_955_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg(v_decl_943_, v_k_944_, v_a_947_, v_a_948_, v_a_949_);
return v___x_955_;
}
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_dec_ref(v_f_946_);
lean_dec_ref(v_k_944_);
lean_dec_ref(v_decl_943_);
v_a_956_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_951_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_951_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet(lean_object* v_decl_964_, lean_object* v_k_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_){
_start:
{
lean_object* v_fvarId_970_; lean_object* v_type_971_; lean_object* v_value_972_; lean_object* v_type_973_; lean_object* v_continueLet_974_; 
v_fvarId_970_ = lean_ctor_get(v_decl_964_, 0);
v_type_971_ = lean_ctor_get(v_decl_964_, 2);
v_value_972_ = lean_ctor_get(v_decl_964_, 3);
lean_inc(v_value_972_);
v_type_973_ = l_Lean_IR_toIRType(v_type_971_);
lean_inc(v_type_973_);
lean_inc_ref(v_k_965_);
lean_inc(v_fvarId_970_);
v_continueLet_974_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__0___boxed), 8, 3);
lean_closure_set(v_continueLet_974_, 0, v_fvarId_970_);
lean_closure_set(v_continueLet_974_, 1, v_k_965_);
lean_closure_set(v_continueLet_974_, 2, v_type_973_);
switch(lean_obj_tag(v_value_972_))
{
case 0:
{
lean_object* v_value_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_985_; 
lean_inc(v_fvarId_970_);
lean_dec_ref(v_continueLet_974_);
lean_dec_ref(v_decl_964_);
v_value_975_ = lean_ctor_get(v_value_972_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v_value_972_);
if (v_isSharedCheck_985_ == 0)
{
v___x_977_ = v_value_972_;
v_isShared_978_ = v_isSharedCheck_985_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_value_975_);
lean_dec(v_value_972_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_985_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_979_; lean_object* v_fst_980_; lean_object* v___x_982_; 
v___x_979_ = l_Lean_IR_ToIR_lowerLitValue(v_value_975_);
v_fst_980_ = lean_ctor_get(v___x_979_, 0);
lean_inc(v_fst_980_);
lean_dec_ref(v___x_979_);
if (v_isShared_978_ == 0)
{
lean_ctor_set_tag(v___x_977_, 11);
lean_ctor_set(v___x_977_, 0, v_fst_980_);
v___x_982_ = v___x_977_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_fst_980_);
v___x_982_ = v_reuseFailAlloc_984_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_983_; 
v___x_983_ = l_Lean_IR_ToIR_lowerLet___lam__0(v_fvarId_970_, v_k_965_, v_type_973_, v___x_982_, v_a_966_, v_a_967_, v_a_968_);
return v___x_983_;
}
}
}
case 1:
{
lean_object* v___x_986_; 
lean_dec_ref(v_continueLet_974_);
lean_dec(v_type_973_);
v___x_986_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg(v_decl_964_, v_k_965_, v_a_966_, v_a_967_, v_a_968_);
return v___x_986_;
}
case 4:
{
lean_object* v_fvarId_987_; lean_object* v_args_988_; lean_object* v___f_989_; lean_object* v___x_990_; 
lean_dec(v_type_973_);
v_fvarId_987_ = lean_ctor_get(v_value_972_, 0);
lean_inc(v_fvarId_987_);
v_args_988_ = lean_ctor_get(v_value_972_, 1);
lean_inc_ref(v_args_988_);
lean_dec_ref(v_value_972_);
v___f_989_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__1___boxed), 7, 2);
lean_closure_set(v___f_989_, 0, v_args_988_);
lean_closure_set(v___f_989_, 1, v_continueLet_974_);
v___x_990_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_964_, v_k_965_, v_fvarId_987_, v___f_989_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_fvarId_987_);
return v___x_990_;
}
case 5:
{
lean_object* v_i_991_; lean_object* v_args_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1024_; 
lean_inc(v_fvarId_970_);
lean_dec_ref(v_continueLet_974_);
lean_dec_ref(v_decl_964_);
v_i_991_ = lean_ctor_get(v_value_972_, 0);
v_args_992_ = lean_ctor_get(v_value_972_, 1);
v_isSharedCheck_1024_ = !lean_is_exclusive(v_value_972_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_994_ = v_value_972_;
v_isShared_995_ = v_isSharedCheck_1024_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_args_992_);
lean_inc(v_i_991_);
lean_dec(v_value_972_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1024_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
size_t v_sz_996_; size_t v___x_997_; lean_object* v___x_998_; 
v_sz_996_ = lean_array_size(v_args_992_);
v___x_997_ = ((size_t)0ULL);
v___x_998_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(v_sz_996_, v___x_997_, v_args_992_, v_a_966_, v_a_968_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; lean_object* v_name_1000_; lean_object* v_cidx_1001_; lean_object* v_size_1002_; lean_object* v_usize_1003_; lean_object* v_ssize_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1015_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
lean_inc(v_a_999_);
lean_dec_ref(v___x_998_);
v_name_1000_ = lean_ctor_get(v_i_991_, 0);
v_cidx_1001_ = lean_ctor_get(v_i_991_, 1);
v_size_1002_ = lean_ctor_get(v_i_991_, 2);
v_usize_1003_ = lean_ctor_get(v_i_991_, 3);
v_ssize_1004_ = lean_ctor_get(v_i_991_, 4);
v_isSharedCheck_1015_ = !lean_is_exclusive(v_i_991_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1006_ = v_i_991_;
v_isShared_1007_ = v_isSharedCheck_1015_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_ssize_1004_);
lean_inc(v_usize_1003_);
lean_inc(v_size_1002_);
lean_inc(v_cidx_1001_);
lean_inc(v_name_1000_);
lean_dec(v_i_991_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1015_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_name_1000_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v_cidx_1001_);
lean_ctor_set(v_reuseFailAlloc_1014_, 2, v_size_1002_);
lean_ctor_set(v_reuseFailAlloc_1014_, 3, v_usize_1003_);
lean_ctor_set(v_reuseFailAlloc_1014_, 4, v_ssize_1004_);
v___x_1009_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
lean_object* v___x_1011_; 
if (v_isShared_995_ == 0)
{
lean_ctor_set_tag(v___x_994_, 0);
lean_ctor_set(v___x_994_, 1, v_a_999_);
lean_ctor_set(v___x_994_, 0, v___x_1009_);
v___x_1011_ = v___x_994_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1013_, 1, v_a_999_);
v___x_1011_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
lean_object* v___x_1012_; 
v___x_1012_ = l_Lean_IR_ToIR_lowerLet___lam__0(v_fvarId_970_, v_k_965_, v_type_973_, v___x_1011_, v_a_966_, v_a_967_, v_a_968_);
return v___x_1012_;
}
}
}
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
lean_del_object(v___x_994_);
lean_dec_ref(v_i_991_);
lean_dec(v_type_973_);
lean_dec(v_fvarId_970_);
lean_dec_ref(v_k_965_);
v_a_1016_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_998_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_998_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
case 6:
{
lean_object* v_i_1025_; lean_object* v_var_1026_; lean_object* v___f_1027_; lean_object* v___x_1028_; 
lean_dec(v_type_973_);
v_i_1025_ = lean_ctor_get(v_value_972_, 0);
lean_inc(v_i_1025_);
v_var_1026_ = lean_ctor_get(v_value_972_, 1);
lean_inc(v_var_1026_);
lean_dec_ref(v_value_972_);
v___f_1027_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__2___boxed), 7, 2);
lean_closure_set(v___f_1027_, 0, v_i_1025_);
lean_closure_set(v___f_1027_, 1, v_continueLet_974_);
v___x_1028_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_964_, v_k_965_, v_var_1026_, v___f_1027_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_var_1026_);
return v___x_1028_;
}
case 7:
{
lean_object* v_i_1029_; lean_object* v_var_1030_; lean_object* v___f_1031_; lean_object* v___x_1032_; 
lean_dec(v_type_973_);
v_i_1029_ = lean_ctor_get(v_value_972_, 0);
lean_inc(v_i_1029_);
v_var_1030_ = lean_ctor_get(v_value_972_, 1);
lean_inc(v_var_1030_);
lean_dec_ref(v_value_972_);
v___f_1031_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__3___boxed), 7, 2);
lean_closure_set(v___f_1031_, 0, v_i_1029_);
lean_closure_set(v___f_1031_, 1, v_continueLet_974_);
v___x_1032_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_964_, v_k_965_, v_var_1030_, v___f_1031_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_var_1030_);
return v___x_1032_;
}
case 8:
{
lean_object* v_n_1033_; lean_object* v_offset_1034_; lean_object* v_var_1035_; lean_object* v___f_1036_; lean_object* v___x_1037_; 
lean_dec(v_type_973_);
v_n_1033_ = lean_ctor_get(v_value_972_, 0);
lean_inc(v_n_1033_);
v_offset_1034_ = lean_ctor_get(v_value_972_, 1);
lean_inc(v_offset_1034_);
v_var_1035_ = lean_ctor_get(v_value_972_, 2);
lean_inc(v_var_1035_);
lean_dec_ref(v_value_972_);
v___f_1036_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__4___boxed), 8, 3);
lean_closure_set(v___f_1036_, 0, v_n_1033_);
lean_closure_set(v___f_1036_, 1, v_offset_1034_);
lean_closure_set(v___f_1036_, 2, v_continueLet_974_);
v___x_1037_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_964_, v_k_965_, v_var_1035_, v___f_1036_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_var_1035_);
return v___x_1037_;
}
case 9:
{
lean_object* v_fn_1038_; lean_object* v_args_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1059_; 
lean_inc(v_fvarId_970_);
lean_dec_ref(v_continueLet_974_);
lean_dec_ref(v_decl_964_);
v_fn_1038_ = lean_ctor_get(v_value_972_, 0);
v_args_1039_ = lean_ctor_get(v_value_972_, 1);
v_isSharedCheck_1059_ = !lean_is_exclusive(v_value_972_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1041_ = v_value_972_;
v_isShared_1042_ = v_isSharedCheck_1059_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_args_1039_);
lean_inc(v_fn_1038_);
lean_dec(v_value_972_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1059_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
size_t v_sz_1043_; size_t v___x_1044_; lean_object* v___x_1045_; 
v_sz_1043_ = lean_array_size(v_args_1039_);
v___x_1044_ = ((size_t)0ULL);
v___x_1045_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(v_sz_1043_, v___x_1044_, v_args_1039_, v_a_966_, v_a_968_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v_a_1046_; lean_object* v___x_1048_; 
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
lean_inc(v_a_1046_);
lean_dec_ref(v___x_1045_);
if (v_isShared_1042_ == 0)
{
lean_ctor_set_tag(v___x_1041_, 6);
lean_ctor_set(v___x_1041_, 1, v_a_1046_);
v___x_1048_ = v___x_1041_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_fn_1038_);
lean_ctor_set(v_reuseFailAlloc_1050_, 1, v_a_1046_);
v___x_1048_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
lean_object* v___x_1049_; 
v___x_1049_ = l_Lean_IR_ToIR_lowerLet___lam__0(v_fvarId_970_, v_k_965_, v_type_973_, v___x_1048_, v_a_966_, v_a_967_, v_a_968_);
return v___x_1049_;
}
}
else
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
lean_del_object(v___x_1041_);
lean_dec(v_fn_1038_);
lean_dec(v_type_973_);
lean_dec(v_fvarId_970_);
lean_dec_ref(v_k_965_);
v_a_1051_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1045_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1045_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
}
}
case 10:
{
lean_object* v_fn_1060_; lean_object* v_args_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1081_; 
lean_inc(v_fvarId_970_);
lean_dec_ref(v_continueLet_974_);
lean_dec_ref(v_decl_964_);
v_fn_1060_ = lean_ctor_get(v_value_972_, 0);
v_args_1061_ = lean_ctor_get(v_value_972_, 1);
v_isSharedCheck_1081_ = !lean_is_exclusive(v_value_972_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1063_ = v_value_972_;
v_isShared_1064_ = v_isSharedCheck_1081_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_args_1061_);
lean_inc(v_fn_1060_);
lean_dec(v_value_972_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1081_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
size_t v_sz_1065_; size_t v___x_1066_; lean_object* v___x_1067_; 
v_sz_1065_ = lean_array_size(v_args_1061_);
v___x_1066_ = ((size_t)0ULL);
v___x_1067_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(v_sz_1065_, v___x_1066_, v_args_1061_, v_a_966_, v_a_968_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; lean_object* v___x_1070_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref(v___x_1067_);
if (v_isShared_1064_ == 0)
{
lean_ctor_set_tag(v___x_1063_, 7);
lean_ctor_set(v___x_1063_, 1, v_a_1068_);
v___x_1070_ = v___x_1063_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_fn_1060_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v_a_1068_);
v___x_1070_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lean_IR_ToIR_lowerLet___lam__0(v_fvarId_970_, v_k_965_, v_type_973_, v___x_1070_, v_a_966_, v_a_967_, v_a_968_);
return v___x_1071_;
}
}
else
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1080_; 
lean_del_object(v___x_1063_);
lean_dec(v_fn_1060_);
lean_dec(v_type_973_);
lean_dec(v_fvarId_970_);
lean_dec_ref(v_k_965_);
v_a_1073_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1075_ = v___x_1067_;
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1067_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1078_; 
if (v_isShared_1076_ == 0)
{
v___x_1078_ = v___x_1075_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1073_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
}
}
case 11:
{
lean_object* v_n_1082_; lean_object* v_var_1083_; lean_object* v___f_1084_; lean_object* v___x_1085_; 
lean_dec(v_type_973_);
v_n_1082_ = lean_ctor_get(v_value_972_, 0);
lean_inc(v_n_1082_);
v_var_1083_ = lean_ctor_get(v_value_972_, 1);
lean_inc(v_var_1083_);
lean_dec_ref(v_value_972_);
v___f_1084_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__5___boxed), 7, 2);
lean_closure_set(v___f_1084_, 0, v_n_1082_);
lean_closure_set(v___f_1084_, 1, v_continueLet_974_);
v___x_1085_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_964_, v_k_965_, v_var_1083_, v___f_1084_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_var_1083_);
return v___x_1085_;
}
case 12:
{
lean_object* v_var_1086_; lean_object* v_i_1087_; uint8_t v_updateHeader_1088_; lean_object* v_args_1089_; lean_object* v___x_1090_; lean_object* v___f_1091_; lean_object* v___x_1092_; 
lean_dec(v_type_973_);
v_var_1086_ = lean_ctor_get(v_value_972_, 0);
lean_inc(v_var_1086_);
v_i_1087_ = lean_ctor_get(v_value_972_, 1);
lean_inc_ref(v_i_1087_);
v_updateHeader_1088_ = lean_ctor_get_uint8(v_value_972_, sizeof(void*)*3);
v_args_1089_ = lean_ctor_get(v_value_972_, 2);
lean_inc_ref(v_args_1089_);
lean_dec_ref(v_value_972_);
v___x_1090_ = lean_box(v_updateHeader_1088_);
v___f_1091_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__6___boxed), 9, 4);
lean_closure_set(v___f_1091_, 0, v_args_1089_);
lean_closure_set(v___f_1091_, 1, v_i_1087_);
lean_closure_set(v___f_1091_, 2, v___x_1090_);
lean_closure_set(v___f_1091_, 3, v_continueLet_974_);
v___x_1092_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_964_, v_k_965_, v_var_1086_, v___f_1091_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_var_1086_);
return v___x_1092_;
}
case 13:
{
lean_object* v_ty_1093_; lean_object* v_fvarId_1094_; lean_object* v___f_1095_; lean_object* v___x_1096_; 
lean_dec(v_type_973_);
v_ty_1093_ = lean_ctor_get(v_value_972_, 0);
lean_inc_ref(v_ty_1093_);
v_fvarId_1094_ = lean_ctor_get(v_value_972_, 1);
lean_inc(v_fvarId_1094_);
lean_dec_ref(v_value_972_);
v___f_1095_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__7___boxed), 7, 2);
lean_closure_set(v___f_1095_, 0, v_ty_1093_);
lean_closure_set(v___f_1095_, 1, v_continueLet_974_);
v___x_1096_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_964_, v_k_965_, v_fvarId_1094_, v___f_1095_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_fvarId_1094_);
return v___x_1096_;
}
case 14:
{
lean_object* v_fvarId_1097_; lean_object* v___f_1098_; lean_object* v___x_1099_; 
lean_dec(v_type_973_);
v_fvarId_1097_ = lean_ctor_get(v_value_972_, 0);
lean_inc(v_fvarId_1097_);
lean_dec_ref(v_value_972_);
v___f_1098_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__8___boxed), 6, 1);
lean_closure_set(v___f_1098_, 0, v_continueLet_974_);
v___x_1099_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_964_, v_k_965_, v_fvarId_1097_, v___f_1098_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_fvarId_1097_);
return v___x_1099_;
}
default: 
{
lean_object* v_fvarId_1100_; lean_object* v___f_1101_; lean_object* v___x_1102_; 
lean_dec(v_type_973_);
v_fvarId_1100_ = lean_ctor_get(v_value_972_, 0);
lean_inc(v_fvarId_1100_);
lean_dec_ref(v_value_972_);
v___f_1101_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerLet___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1101_, 0, v_continueLet_974_);
v___x_1102_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_964_, v_k_965_, v_fvarId_1100_, v___f_1101_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_fvarId_1100_);
return v___x_1102_;
}
}
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__2(void){
_start:
{
lean_object* v___x_1103_; 
v___x_1103_ = lean_mk_string_unchecked("all local functions should be λ-lifted", 39, 38);
return v___x_1103_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__1(void){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = lean_mk_string_unchecked("Lean.IR.ToIR.lowerCode", 22, 22);
return v___x_1104_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__0(void){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = lean_mk_string_unchecked("Lean.Compiler.IR.ToIR", 21, 21);
return v___x_1105_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__3(void){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1106_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__2, &l_Lean_IR_ToIR_lowerCode___closed__2_once, _init_l_Lean_IR_ToIR_lowerCode___closed__2);
v___x_1107_ = lean_unsigned_to_nat(15u);
v___x_1108_ = lean_unsigned_to_nat(128u);
v___x_1109_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__1, &l_Lean_IR_ToIR_lowerCode___closed__1_once, _init_l_Lean_IR_ToIR_lowerCode___closed__1);
v___x_1110_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__0, &l_Lean_IR_ToIR_lowerCode___closed__0_once, _init_l_Lean_IR_ToIR_lowerCode___closed__0);
v___x_1111_ = l_mkPanicMessageWithDecl(v___x_1110_, v___x_1109_, v___x_1108_, v___x_1107_, v___x_1106_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerAlt(lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_){
_start:
{
if (lean_obj_tag(v_a_1112_) == 1)
{
lean_object* v_info_1117_; lean_object* v_code_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1154_; 
v_info_1117_ = lean_ctor_get(v_a_1112_, 0);
v_code_1118_ = lean_ctor_get(v_a_1112_, 1);
v_isSharedCheck_1154_ = !lean_is_exclusive(v_a_1112_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1120_ = v_a_1112_;
v_isShared_1121_ = v_isSharedCheck_1154_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_code_1118_);
lean_inc(v_info_1117_);
lean_dec(v_a_1112_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1154_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1122_; 
v___x_1122_ = l_Lean_IR_ToIR_lowerCode(v_code_1118_, v_a_1113_, v_a_1114_, v_a_1115_);
if (lean_obj_tag(v___x_1122_) == 0)
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1145_; 
v_a_1123_ = lean_ctor_get(v___x_1122_, 0);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1125_ = v___x_1122_;
v_isShared_1126_ = v_isSharedCheck_1145_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1122_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1145_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v_name_1127_; lean_object* v_cidx_1128_; lean_object* v_size_1129_; lean_object* v_usize_1130_; lean_object* v_ssize_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1144_; 
v_name_1127_ = lean_ctor_get(v_info_1117_, 0);
v_cidx_1128_ = lean_ctor_get(v_info_1117_, 1);
v_size_1129_ = lean_ctor_get(v_info_1117_, 2);
v_usize_1130_ = lean_ctor_get(v_info_1117_, 3);
v_ssize_1131_ = lean_ctor_get(v_info_1117_, 4);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_info_1117_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1133_ = v_info_1117_;
v_isShared_1134_ = v_isSharedCheck_1144_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_ssize_1131_);
lean_inc(v_usize_1130_);
lean_inc(v_size_1129_);
lean_inc(v_cidx_1128_);
lean_inc(v_name_1127_);
lean_dec(v_info_1117_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1144_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_name_1127_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v_cidx_1128_);
lean_ctor_set(v_reuseFailAlloc_1143_, 2, v_size_1129_);
lean_ctor_set(v_reuseFailAlloc_1143_, 3, v_usize_1130_);
lean_ctor_set(v_reuseFailAlloc_1143_, 4, v_ssize_1131_);
v___x_1136_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
lean_object* v___x_1138_; 
if (v_isShared_1121_ == 0)
{
lean_ctor_set_tag(v___x_1120_, 0);
lean_ctor_set(v___x_1120_, 1, v_a_1123_);
lean_ctor_set(v___x_1120_, 0, v___x_1136_);
v___x_1138_ = v___x_1120_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v___x_1136_);
lean_ctor_set(v_reuseFailAlloc_1142_, 1, v_a_1123_);
v___x_1138_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
lean_object* v___x_1140_; 
if (v_isShared_1126_ == 0)
{
lean_ctor_set(v___x_1125_, 0, v___x_1138_);
v___x_1140_ = v___x_1125_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v___x_1138_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
}
}
else
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
lean_del_object(v___x_1120_);
lean_dec_ref(v_info_1117_);
v_a_1146_ = lean_ctor_get(v___x_1122_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___x_1122_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1122_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
}
else
{
lean_object* v_code_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1179_; 
v_code_1155_ = lean_ctor_get(v_a_1112_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v_a_1112_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1157_ = v_a_1112_;
v_isShared_1158_ = v_isSharedCheck_1179_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_code_1155_);
lean_dec(v_a_1112_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1179_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
lean_object* v___x_1159_; 
v___x_1159_ = l_Lean_IR_ToIR_lowerCode(v_code_1155_, v_a_1113_, v_a_1114_, v_a_1115_);
if (lean_obj_tag(v___x_1159_) == 0)
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1170_; 
v_a_1160_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1162_ = v___x_1159_;
v_isShared_1163_ = v_isSharedCheck_1170_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___x_1159_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1170_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1165_; 
if (v_isShared_1158_ == 0)
{
lean_ctor_set_tag(v___x_1157_, 1);
lean_ctor_set(v___x_1157_, 0, v_a_1160_);
v___x_1165_ = v___x_1157_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_a_1160_);
v___x_1165_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1167_; 
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v___x_1165_);
v___x_1167_ = v___x_1162_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v___x_1165_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1178_; 
lean_del_object(v___x_1157_);
v_a_1171_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1173_ = v___x_1159_;
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1159_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1176_; 
if (v_isShared_1174_ == 0)
{
v___x_1176_ = v___x_1173_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_a_1171_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__4(size_t v_sz_1180_, size_t v_i_1181_, lean_object* v_bs_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
uint8_t v___x_1187_; 
v___x_1187_ = lean_usize_dec_lt(v_i_1181_, v_sz_1180_);
if (v___x_1187_ == 0)
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1188_, 0, v_bs_1182_);
return v___x_1188_;
}
else
{
lean_object* v_v_1189_; lean_object* v___x_1190_; 
v_v_1189_ = lean_array_uget_borrowed(v_bs_1182_, v_i_1181_);
lean_inc(v_v_1189_);
v___x_1190_ = l_Lean_IR_ToIR_lowerAlt(v_v_1189_, v___y_1183_, v___y_1184_, v___y_1185_);
if (lean_obj_tag(v___x_1190_) == 0)
{
lean_object* v_a_1191_; lean_object* v___x_1192_; lean_object* v_bs_x27_1193_; size_t v___x_1194_; size_t v___x_1195_; lean_object* v___x_1196_; 
v_a_1191_ = lean_ctor_get(v___x_1190_, 0);
lean_inc(v_a_1191_);
lean_dec_ref(v___x_1190_);
v___x_1192_ = lean_unsigned_to_nat(0u);
v_bs_x27_1193_ = lean_array_uset(v_bs_1182_, v_i_1181_, v___x_1192_);
v___x_1194_ = ((size_t)1ULL);
v___x_1195_ = lean_usize_add(v_i_1181_, v___x_1194_);
v___x_1196_ = lean_array_uset(v_bs_x27_1193_, v_i_1181_, v_a_1191_);
v_i_1181_ = v___x_1195_;
v_bs_1182_ = v___x_1196_;
goto _start;
}
else
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
lean_dec_ref(v_bs_1182_);
v_a_1198_ = lean_ctor_get(v___x_1190_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1190_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1190_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1203_; 
if (v_isShared_1201_ == 0)
{
v___x_1203_ = v___x_1200_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1198_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__4(void){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_1206_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__5(void){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1207_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__4, &l_Lean_IR_ToIR_lowerCode___closed__4_once, _init_l_Lean_IR_ToIR_lowerCode___closed__4);
v___x_1208_ = lean_unsigned_to_nat(53u);
v___x_1209_ = lean_unsigned_to_nat(95u);
v___x_1210_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__1, &l_Lean_IR_ToIR_lowerCode___closed__1_once, _init_l_Lean_IR_ToIR_lowerCode___closed__1);
v___x_1211_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__0, &l_Lean_IR_ToIR_lowerCode___closed__0_once, _init_l_Lean_IR_ToIR_lowerCode___closed__0);
v___x_1212_ = l_mkPanicMessageWithDecl(v___x_1211_, v___x_1210_, v___x_1209_, v___x_1208_, v___x_1207_);
return v___x_1212_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__6(void){
_start:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1213_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__4, &l_Lean_IR_ToIR_lowerCode___closed__4_once, _init_l_Lean_IR_ToIR_lowerCode___closed__4);
v___x_1214_ = lean_unsigned_to_nat(44u);
v___x_1215_ = lean_unsigned_to_nat(106u);
v___x_1216_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__1, &l_Lean_IR_ToIR_lowerCode___closed__1_once, _init_l_Lean_IR_ToIR_lowerCode___closed__1);
v___x_1217_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__0, &l_Lean_IR_ToIR_lowerCode___closed__0_once, _init_l_Lean_IR_ToIR_lowerCode___closed__0);
v___x_1218_ = l_mkPanicMessageWithDecl(v___x_1217_, v___x_1216_, v___x_1215_, v___x_1214_, v___x_1213_);
return v___x_1218_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__7(void){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1219_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__4, &l_Lean_IR_ToIR_lowerCode___closed__4_once, _init_l_Lean_IR_ToIR_lowerCode___closed__4);
v___x_1220_ = lean_unsigned_to_nat(44u);
v___x_1221_ = lean_unsigned_to_nat(114u);
v___x_1222_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__1, &l_Lean_IR_ToIR_lowerCode___closed__1_once, _init_l_Lean_IR_ToIR_lowerCode___closed__1);
v___x_1223_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__0, &l_Lean_IR_ToIR_lowerCode___closed__0_once, _init_l_Lean_IR_ToIR_lowerCode___closed__0);
v___x_1224_ = l_mkPanicMessageWithDecl(v___x_1223_, v___x_1222_, v___x_1221_, v___x_1220_, v___x_1219_);
return v___x_1224_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__8(void){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1225_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__4, &l_Lean_IR_ToIR_lowerCode___closed__4_once, _init_l_Lean_IR_ToIR_lowerCode___closed__4);
v___x_1226_ = lean_unsigned_to_nat(34u);
v___x_1227_ = lean_unsigned_to_nat(113u);
v___x_1228_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__1, &l_Lean_IR_ToIR_lowerCode___closed__1_once, _init_l_Lean_IR_ToIR_lowerCode___closed__1);
v___x_1229_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__0, &l_Lean_IR_ToIR_lowerCode___closed__0_once, _init_l_Lean_IR_ToIR_lowerCode___closed__0);
v___x_1230_ = l_mkPanicMessageWithDecl(v___x_1229_, v___x_1228_, v___x_1227_, v___x_1226_, v___x_1225_);
return v___x_1230_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__9(void){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1231_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__4, &l_Lean_IR_ToIR_lowerCode___closed__4_once, _init_l_Lean_IR_ToIR_lowerCode___closed__4);
v___x_1232_ = lean_unsigned_to_nat(44u);
v___x_1233_ = lean_unsigned_to_nat(110u);
v___x_1234_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__1, &l_Lean_IR_ToIR_lowerCode___closed__1_once, _init_l_Lean_IR_ToIR_lowerCode___closed__1);
v___x_1235_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__0, &l_Lean_IR_ToIR_lowerCode___closed__0_once, _init_l_Lean_IR_ToIR_lowerCode___closed__0);
v___x_1236_ = l_mkPanicMessageWithDecl(v___x_1235_, v___x_1234_, v___x_1233_, v___x_1232_, v___x_1231_);
return v___x_1236_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__10(void){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1237_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__4, &l_Lean_IR_ToIR_lowerCode___closed__4_once, _init_l_Lean_IR_ToIR_lowerCode___closed__4);
v___x_1238_ = lean_unsigned_to_nat(34u);
v___x_1239_ = lean_unsigned_to_nat(109u);
v___x_1240_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__1, &l_Lean_IR_ToIR_lowerCode___closed__1_once, _init_l_Lean_IR_ToIR_lowerCode___closed__1);
v___x_1241_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__0, &l_Lean_IR_ToIR_lowerCode___closed__0_once, _init_l_Lean_IR_ToIR_lowerCode___closed__0);
v___x_1242_ = l_mkPanicMessageWithDecl(v___x_1241_, v___x_1240_, v___x_1239_, v___x_1238_, v___x_1237_);
return v___x_1242_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__11(void){
_start:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1243_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__4, &l_Lean_IR_ToIR_lowerCode___closed__4_once, _init_l_Lean_IR_ToIR_lowerCode___closed__4);
v___x_1244_ = lean_unsigned_to_nat(41u);
v___x_1245_ = lean_unsigned_to_nat(117u);
v___x_1246_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__1, &l_Lean_IR_ToIR_lowerCode___closed__1_once, _init_l_Lean_IR_ToIR_lowerCode___closed__1);
v___x_1247_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__0, &l_Lean_IR_ToIR_lowerCode___closed__0_once, _init_l_Lean_IR_ToIR_lowerCode___closed__0);
v___x_1248_ = l_mkPanicMessageWithDecl(v___x_1247_, v___x_1246_, v___x_1245_, v___x_1244_, v___x_1243_);
return v___x_1248_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__12(void){
_start:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1249_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__4, &l_Lean_IR_ToIR_lowerCode___closed__4_once, _init_l_Lean_IR_ToIR_lowerCode___closed__4);
v___x_1250_ = lean_unsigned_to_nat(41u);
v___x_1251_ = lean_unsigned_to_nat(120u);
v___x_1252_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__1, &l_Lean_IR_ToIR_lowerCode___closed__1_once, _init_l_Lean_IR_ToIR_lowerCode___closed__1);
v___x_1253_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__0, &l_Lean_IR_ToIR_lowerCode___closed__0_once, _init_l_Lean_IR_ToIR_lowerCode___closed__0);
v___x_1254_ = l_mkPanicMessageWithDecl(v___x_1253_, v___x_1252_, v___x_1251_, v___x_1250_, v___x_1249_);
return v___x_1254_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__13(void){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1255_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__4, &l_Lean_IR_ToIR_lowerCode___closed__4_once, _init_l_Lean_IR_ToIR_lowerCode___closed__4);
v___x_1256_ = lean_unsigned_to_nat(41u);
v___x_1257_ = lean_unsigned_to_nat(123u);
v___x_1258_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__1, &l_Lean_IR_ToIR_lowerCode___closed__1_once, _init_l_Lean_IR_ToIR_lowerCode___closed__1);
v___x_1259_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__0, &l_Lean_IR_ToIR_lowerCode___closed__0_once, _init_l_Lean_IR_ToIR_lowerCode___closed__0);
v___x_1260_ = l_mkPanicMessageWithDecl(v___x_1259_, v___x_1258_, v___x_1257_, v___x_1256_, v___x_1255_);
return v___x_1260_;
}
}
static lean_object* _init_l_Lean_IR_ToIR_lowerCode___closed__14(void){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1261_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__4, &l_Lean_IR_ToIR_lowerCode___closed__4_once, _init_l_Lean_IR_ToIR_lowerCode___closed__4);
v___x_1262_ = lean_unsigned_to_nat(41u);
v___x_1263_ = lean_unsigned_to_nat(126u);
v___x_1264_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__1, &l_Lean_IR_ToIR_lowerCode___closed__1_once, _init_l_Lean_IR_ToIR_lowerCode___closed__1);
v___x_1265_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__0, &l_Lean_IR_ToIR_lowerCode___closed__0_once, _init_l_Lean_IR_ToIR_lowerCode___closed__0);
v___x_1266_ = l_mkPanicMessageWithDecl(v___x_1265_, v___x_1264_, v___x_1263_, v___x_1262_, v___x_1261_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerCode(lean_object* v_c_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_){
_start:
{
switch(lean_obj_tag(v_c_1267_))
{
case 0:
{
lean_object* v_decl_1272_; lean_object* v_k_1273_; lean_object* v___x_1274_; 
v_decl_1272_ = lean_ctor_get(v_c_1267_, 0);
lean_inc_ref(v_decl_1272_);
v_k_1273_ = lean_ctor_get(v_c_1267_, 1);
lean_inc_ref(v_k_1273_);
lean_dec_ref(v_c_1267_);
v___x_1274_ = l_Lean_IR_ToIR_lowerLet(v_decl_1272_, v_k_1273_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1274_;
}
case 1:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
lean_dec_ref(v_c_1267_);
v___x_1275_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__3, &l_Lean_IR_ToIR_lowerCode___closed__3_once, _init_l_Lean_IR_ToIR_lowerCode___closed__3);
v___x_1276_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1275_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1276_;
}
case 2:
{
lean_object* v_decl_1277_; lean_object* v_k_1278_; lean_object* v_fvarId_1279_; lean_object* v_params_1280_; lean_object* v_value_1281_; lean_object* v___x_1282_; 
v_decl_1277_ = lean_ctor_get(v_c_1267_, 0);
lean_inc_ref(v_decl_1277_);
v_k_1278_ = lean_ctor_get(v_c_1267_, 1);
lean_inc_ref(v_k_1278_);
lean_dec_ref(v_c_1267_);
v_fvarId_1279_ = lean_ctor_get(v_decl_1277_, 0);
lean_inc(v_fvarId_1279_);
v_params_1280_ = lean_ctor_get(v_decl_1277_, 2);
lean_inc_ref(v_params_1280_);
v_value_1281_ = lean_ctor_get(v_decl_1277_, 4);
lean_inc_ref(v_value_1281_);
lean_dec_ref(v_decl_1277_);
v___x_1282_ = l_Lean_IR_ToIR_bindJoinPoint___redArg(v_fvarId_1279_, v_a_1268_, v_a_1270_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; size_t v_sz_1284_; size_t v___x_1285_; lean_object* v___x_1286_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_a_1283_);
lean_dec_ref(v___x_1282_);
v_sz_1284_ = lean_array_size(v_params_1280_);
v___x_1285_ = ((size_t)0ULL);
v___x_1286_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg(v_sz_1284_, v___x_1285_, v_params_1280_, v_a_1268_, v_a_1270_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; lean_object* v___x_1288_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_a_1287_);
lean_dec_ref(v___x_1286_);
v___x_1288_ = l_Lean_IR_ToIR_lowerCode(v_value_1281_, v_a_1268_, v_a_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1288_) == 0)
{
lean_object* v_a_1289_; lean_object* v___x_1290_; 
v_a_1289_ = lean_ctor_get(v___x_1288_, 0);
lean_inc(v_a_1289_);
lean_dec_ref(v___x_1288_);
v___x_1290_ = l_Lean_IR_ToIR_lowerCode(v_k_1278_, v_a_1268_, v_a_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1299_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1293_ = v___x_1290_;
v_isShared_1294_ = v_isSharedCheck_1299_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1290_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1299_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1295_; lean_object* v___x_1297_; 
v___x_1295_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1295_, 0, v_a_1283_);
lean_ctor_set(v___x_1295_, 1, v_a_1287_);
lean_ctor_set(v___x_1295_, 2, v_a_1289_);
lean_ctor_set(v___x_1295_, 3, v_a_1291_);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 0, v___x_1295_);
v___x_1297_ = v___x_1293_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
else
{
lean_dec(v_a_1289_);
lean_dec(v_a_1287_);
lean_dec(v_a_1283_);
return v___x_1290_;
}
}
else
{
lean_dec(v_a_1287_);
lean_dec(v_a_1283_);
lean_dec_ref(v_k_1278_);
return v___x_1288_;
}
}
else
{
lean_object* v_a_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1307_; 
lean_dec(v_a_1283_);
lean_dec_ref(v_value_1281_);
lean_dec_ref(v_k_1278_);
v_a_1300_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1302_ = v___x_1286_;
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_a_1300_);
lean_dec(v___x_1286_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v___x_1305_; 
if (v_isShared_1303_ == 0)
{
v___x_1305_ = v___x_1302_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_a_1300_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
}
else
{
lean_object* v_a_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1315_; 
lean_dec_ref(v_value_1281_);
lean_dec_ref(v_params_1280_);
lean_dec_ref(v_k_1278_);
v_a_1308_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1315_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1310_ = v___x_1282_;
v_isShared_1311_ = v_isSharedCheck_1315_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_a_1308_);
lean_dec(v___x_1282_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1315_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v___x_1313_; 
if (v_isShared_1311_ == 0)
{
v___x_1313_ = v___x_1310_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_a_1308_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_1316_; lean_object* v_args_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1353_; 
v_fvarId_1316_ = lean_ctor_get(v_c_1267_, 0);
v_args_1317_ = lean_ctor_get(v_c_1267_, 1);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_c_1267_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1319_ = v_c_1267_;
v_isShared_1320_ = v_isSharedCheck_1353_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_args_1317_);
lean_inc(v_fvarId_1316_);
lean_dec(v_c_1267_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1353_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1321_; 
v___x_1321_ = l_Lean_IR_ToIR_getJoinPointValue___redArg(v_fvarId_1316_, v_a_1268_, v_a_1270_);
lean_dec(v_fvarId_1316_);
if (lean_obj_tag(v___x_1321_) == 0)
{
lean_object* v_a_1322_; size_t v_sz_1323_; size_t v___x_1324_; lean_object* v___x_1325_; 
v_a_1322_ = lean_ctor_get(v___x_1321_, 0);
lean_inc(v_a_1322_);
lean_dec_ref(v___x_1321_);
v_sz_1323_ = lean_array_size(v_args_1317_);
v___x_1324_ = ((size_t)0ULL);
v___x_1325_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(v_sz_1323_, v___x_1324_, v_args_1317_, v_a_1268_, v_a_1270_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1336_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1328_ = v___x_1325_;
v_isShared_1329_ = v_isSharedCheck_1336_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1325_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1336_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1331_; 
if (v_isShared_1320_ == 0)
{
lean_ctor_set_tag(v___x_1319_, 11);
lean_ctor_set(v___x_1319_, 1, v_a_1326_);
lean_ctor_set(v___x_1319_, 0, v_a_1322_);
v___x_1331_ = v___x_1319_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1322_);
lean_ctor_set(v_reuseFailAlloc_1335_, 1, v_a_1326_);
v___x_1331_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
lean_object* v___x_1333_; 
if (v_isShared_1329_ == 0)
{
lean_ctor_set(v___x_1328_, 0, v___x_1331_);
v___x_1333_ = v___x_1328_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1331_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1344_; 
lean_dec(v_a_1322_);
lean_del_object(v___x_1319_);
v_a_1337_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1339_ = v___x_1325_;
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1325_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1342_; 
if (v_isShared_1340_ == 0)
{
v___x_1342_ = v___x_1339_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_a_1337_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
}
}
else
{
lean_object* v_a_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1352_; 
lean_del_object(v___x_1319_);
lean_dec_ref(v_args_1317_);
v_a_1345_ = lean_ctor_get(v___x_1321_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1321_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1347_ = v___x_1321_;
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_a_1345_);
lean_dec(v___x_1321_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1350_; 
if (v_isShared_1348_ == 0)
{
v___x_1350_ = v___x_1347_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_a_1345_);
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
}
case 4:
{
lean_object* v_cases_1354_; lean_object* v_typeName_1355_; lean_object* v_discr_1356_; lean_object* v_alts_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1397_; 
v_cases_1354_ = lean_ctor_get(v_c_1267_, 0);
lean_inc_ref(v_cases_1354_);
lean_dec_ref(v_c_1267_);
v_typeName_1355_ = lean_ctor_get(v_cases_1354_, 0);
v_discr_1356_ = lean_ctor_get(v_cases_1354_, 2);
v_alts_1357_ = lean_ctor_get(v_cases_1354_, 3);
v_isSharedCheck_1397_ = !lean_is_exclusive(v_cases_1354_);
if (v_isSharedCheck_1397_ == 0)
{
lean_object* v_unused_1398_; 
v_unused_1398_ = lean_ctor_get(v_cases_1354_, 1);
lean_dec(v_unused_1398_);
v___x_1359_ = v_cases_1354_;
v_isShared_1360_ = v_isSharedCheck_1397_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_alts_1357_);
lean_inc(v_discr_1356_);
lean_inc(v_typeName_1355_);
lean_dec(v_cases_1354_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1397_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1361_; 
v___x_1361_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_discr_1356_, v_a_1268_, v_a_1270_);
lean_dec(v_discr_1356_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1362_);
lean_dec_ref(v___x_1361_);
if (lean_obj_tag(v_a_1362_) == 0)
{
lean_object* v_id_1363_; size_t v_sz_1364_; size_t v___x_1365_; lean_object* v___x_1366_; 
v_id_1363_ = lean_ctor_get(v_a_1362_, 0);
lean_inc(v_id_1363_);
lean_dec_ref(v_a_1362_);
v_sz_1364_ = lean_array_size(v_alts_1357_);
v___x_1365_ = ((size_t)0ULL);
v___x_1366_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__4(v_sz_1364_, v___x_1365_, v_alts_1357_, v_a_1268_, v_a_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1378_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1369_ = v___x_1366_;
v_isShared_1370_ = v_isSharedCheck_1378_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1366_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1378_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1371_; lean_object* v___x_1373_; 
v___x_1371_ = l_Lean_IR_nameToIRType(v_typeName_1355_);
if (v_isShared_1360_ == 0)
{
lean_ctor_set_tag(v___x_1359_, 9);
lean_ctor_set(v___x_1359_, 3, v_a_1367_);
lean_ctor_set(v___x_1359_, 2, v___x_1371_);
lean_ctor_set(v___x_1359_, 1, v_id_1363_);
v___x_1373_ = v___x_1359_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(9, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_typeName_1355_);
lean_ctor_set(v_reuseFailAlloc_1377_, 1, v_id_1363_);
lean_ctor_set(v_reuseFailAlloc_1377_, 2, v___x_1371_);
lean_ctor_set(v_reuseFailAlloc_1377_, 3, v_a_1367_);
v___x_1373_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
lean_object* v___x_1375_; 
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 0, v___x_1373_);
v___x_1375_ = v___x_1369_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v___x_1373_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
return v___x_1375_;
}
}
}
}
else
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1386_; 
lean_dec(v_id_1363_);
lean_del_object(v___x_1359_);
lean_dec(v_typeName_1355_);
v_a_1379_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1381_ = v___x_1366_;
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v___x_1366_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1384_; 
if (v_isShared_1382_ == 0)
{
v___x_1384_ = v___x_1381_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_a_1379_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
else
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
lean_dec(v_a_1362_);
lean_del_object(v___x_1359_);
lean_dec_ref(v_alts_1357_);
lean_dec(v_typeName_1355_);
v___x_1387_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__5, &l_Lean_IR_ToIR_lowerCode___closed__5_once, _init_l_Lean_IR_ToIR_lowerCode___closed__5);
v___x_1388_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1387_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1388_;
}
}
else
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1396_; 
lean_del_object(v___x_1359_);
lean_dec_ref(v_alts_1357_);
lean_dec(v_typeName_1355_);
v_a_1389_ = lean_ctor_get(v___x_1361_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1391_ = v___x_1361_;
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1361_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1394_; 
if (v_isShared_1392_ == 0)
{
v___x_1394_ = v___x_1391_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_a_1389_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
}
}
case 5:
{
lean_object* v_fvarId_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1423_; 
v_fvarId_1399_ = lean_ctor_get(v_c_1267_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v_c_1267_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1401_ = v_c_1267_;
v_isShared_1402_ = v_isSharedCheck_1423_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_fvarId_1399_);
lean_dec(v_c_1267_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1423_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1403_; 
v___x_1403_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1399_, v_a_1268_, v_a_1270_);
lean_dec(v_fvarId_1399_);
if (lean_obj_tag(v___x_1403_) == 0)
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1414_; 
v_a_1404_ = lean_ctor_get(v___x_1403_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1406_ = v___x_1403_;
v_isShared_1407_ = v_isSharedCheck_1414_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1403_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1414_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1402_ == 0)
{
lean_ctor_set_tag(v___x_1401_, 10);
lean_ctor_set(v___x_1401_, 0, v_a_1404_);
v___x_1409_ = v___x_1401_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
lean_object* v___x_1411_; 
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 0, v___x_1409_);
v___x_1411_ = v___x_1406_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1409_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
lean_del_object(v___x_1401_);
v_a_1415_ = lean_ctor_get(v___x_1403_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___x_1403_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1403_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
}
case 6:
{
lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1431_; 
v_isSharedCheck_1431_ = !lean_is_exclusive(v_c_1267_);
if (v_isSharedCheck_1431_ == 0)
{
lean_object* v_unused_1432_; 
v_unused_1432_ = lean_ctor_get(v_c_1267_, 0);
lean_dec(v_unused_1432_);
v___x_1425_ = v_c_1267_;
v_isShared_1426_ = v_isSharedCheck_1431_;
goto v_resetjp_1424_;
}
else
{
lean_dec(v_c_1267_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1431_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1427_; lean_object* v___x_1429_; 
v___x_1427_ = lean_box(12);
if (v_isShared_1426_ == 0)
{
lean_ctor_set_tag(v___x_1425_, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1427_);
v___x_1429_ = v___x_1425_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v___x_1427_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
}
case 7:
{
lean_object* v_fvarId_1433_; lean_object* v_i_1434_; lean_object* v_y_1435_; lean_object* v_k_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1475_; 
v_fvarId_1433_ = lean_ctor_get(v_c_1267_, 0);
v_i_1434_ = lean_ctor_get(v_c_1267_, 1);
v_y_1435_ = lean_ctor_get(v_c_1267_, 2);
v_k_1436_ = lean_ctor_get(v_c_1267_, 3);
v_isSharedCheck_1475_ = !lean_is_exclusive(v_c_1267_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1438_ = v_c_1267_;
v_isShared_1439_ = v_isSharedCheck_1475_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_k_1436_);
lean_inc(v_y_1435_);
lean_inc(v_i_1434_);
lean_inc(v_fvarId_1433_);
lean_dec(v_c_1267_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1475_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1440_; 
v___x_1440_ = l_Lean_IR_ToIR_lowerArg___redArg(v_y_1435_, v_a_1268_, v_a_1270_);
lean_dec(v_y_1435_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1442_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref(v___x_1440_);
v___x_1442_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1433_, v_a_1268_, v_a_1270_);
lean_dec(v_fvarId_1433_);
if (lean_obj_tag(v___x_1442_) == 0)
{
lean_object* v_a_1443_; 
v_a_1443_ = lean_ctor_get(v___x_1442_, 0);
lean_inc(v_a_1443_);
lean_dec_ref(v___x_1442_);
if (lean_obj_tag(v_a_1443_) == 0)
{
lean_object* v_id_1444_; lean_object* v___x_1445_; 
v_id_1444_ = lean_ctor_get(v_a_1443_, 0);
lean_inc(v_id_1444_);
lean_dec_ref(v_a_1443_);
v___x_1445_ = l_Lean_IR_ToIR_lowerCode(v_k_1436_, v_a_1268_, v_a_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1456_; 
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1448_ = v___x_1445_;
v_isShared_1449_ = v_isSharedCheck_1456_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1445_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1456_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1439_ == 0)
{
lean_ctor_set_tag(v___x_1438_, 2);
lean_ctor_set(v___x_1438_, 3, v_a_1446_);
lean_ctor_set(v___x_1438_, 2, v_a_1441_);
lean_ctor_set(v___x_1438_, 0, v_id_1444_);
v___x_1451_ = v___x_1438_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_id_1444_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v_i_1434_);
lean_ctor_set(v_reuseFailAlloc_1455_, 2, v_a_1441_);
lean_ctor_set(v_reuseFailAlloc_1455_, 3, v_a_1446_);
v___x_1451_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
lean_object* v___x_1453_; 
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v___x_1451_);
v___x_1453_ = v___x_1448_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1451_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
else
{
lean_dec(v_id_1444_);
lean_dec(v_a_1441_);
lean_del_object(v___x_1438_);
lean_dec(v_i_1434_);
return v___x_1445_;
}
}
else
{
lean_object* v___x_1457_; lean_object* v___x_1458_; 
lean_dec(v_a_1443_);
lean_dec(v_a_1441_);
lean_del_object(v___x_1438_);
lean_dec_ref(v_k_1436_);
lean_dec(v_i_1434_);
v___x_1457_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__6, &l_Lean_IR_ToIR_lowerCode___closed__6_once, _init_l_Lean_IR_ToIR_lowerCode___closed__6);
v___x_1458_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1457_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1458_;
}
}
else
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1466_; 
lean_dec(v_a_1441_);
lean_del_object(v___x_1438_);
lean_dec_ref(v_k_1436_);
lean_dec(v_i_1434_);
v_a_1459_ = lean_ctor_get(v___x_1442_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1442_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1461_ = v___x_1442_;
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1442_);
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
else
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1474_; 
lean_del_object(v___x_1438_);
lean_dec_ref(v_k_1436_);
lean_dec(v_i_1434_);
lean_dec(v_fvarId_1433_);
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
case 8:
{
lean_object* v_fvarId_1476_; lean_object* v_i_1477_; lean_object* v_y_1478_; lean_object* v_k_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1521_; 
v_fvarId_1476_ = lean_ctor_get(v_c_1267_, 0);
v_i_1477_ = lean_ctor_get(v_c_1267_, 1);
v_y_1478_ = lean_ctor_get(v_c_1267_, 2);
v_k_1479_ = lean_ctor_get(v_c_1267_, 3);
v_isSharedCheck_1521_ = !lean_is_exclusive(v_c_1267_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1481_ = v_c_1267_;
v_isShared_1482_ = v_isSharedCheck_1521_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_k_1479_);
lean_inc(v_y_1478_);
lean_inc(v_i_1477_);
lean_inc(v_fvarId_1476_);
lean_dec(v_c_1267_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1521_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1483_; 
v___x_1483_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_y_1478_, v_a_1268_, v_a_1270_);
lean_dec(v_y_1478_);
if (lean_obj_tag(v___x_1483_) == 0)
{
lean_object* v_a_1484_; 
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
lean_inc(v_a_1484_);
lean_dec_ref(v___x_1483_);
if (lean_obj_tag(v_a_1484_) == 0)
{
lean_object* v_id_1485_; lean_object* v___x_1486_; 
v_id_1485_ = lean_ctor_get(v_a_1484_, 0);
lean_inc(v_id_1485_);
lean_dec_ref(v_a_1484_);
v___x_1486_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1476_, v_a_1268_, v_a_1270_);
lean_dec(v_fvarId_1476_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_a_1487_);
lean_dec_ref(v___x_1486_);
if (lean_obj_tag(v_a_1487_) == 0)
{
lean_object* v_id_1488_; lean_object* v___x_1489_; 
v_id_1488_ = lean_ctor_get(v_a_1487_, 0);
lean_inc(v_id_1488_);
lean_dec_ref(v_a_1487_);
v___x_1489_ = l_Lean_IR_ToIR_lowerCode(v_k_1479_, v_a_1268_, v_a_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1489_) == 0)
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1500_; 
v_a_1490_ = lean_ctor_get(v___x_1489_, 0);
v_isSharedCheck_1500_ = !lean_is_exclusive(v___x_1489_);
if (v_isSharedCheck_1500_ == 0)
{
v___x_1492_ = v___x_1489_;
v_isShared_1493_ = v_isSharedCheck_1500_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1489_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1500_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1495_; 
if (v_isShared_1482_ == 0)
{
lean_ctor_set_tag(v___x_1481_, 4);
lean_ctor_set(v___x_1481_, 3, v_a_1490_);
lean_ctor_set(v___x_1481_, 2, v_id_1485_);
lean_ctor_set(v___x_1481_, 0, v_id_1488_);
v___x_1495_ = v___x_1481_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_id_1488_);
lean_ctor_set(v_reuseFailAlloc_1499_, 1, v_i_1477_);
lean_ctor_set(v_reuseFailAlloc_1499_, 2, v_id_1485_);
lean_ctor_set(v_reuseFailAlloc_1499_, 3, v_a_1490_);
v___x_1495_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
lean_object* v___x_1497_; 
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 0, v___x_1495_);
v___x_1497_ = v___x_1492_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v___x_1495_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
}
else
{
lean_dec(v_id_1488_);
lean_dec(v_id_1485_);
lean_del_object(v___x_1481_);
lean_dec(v_i_1477_);
return v___x_1489_;
}
}
else
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
lean_dec(v_a_1487_);
lean_dec(v_id_1485_);
lean_del_object(v___x_1481_);
lean_dec_ref(v_k_1479_);
lean_dec(v_i_1477_);
v___x_1501_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__7, &l_Lean_IR_ToIR_lowerCode___closed__7_once, _init_l_Lean_IR_ToIR_lowerCode___closed__7);
v___x_1502_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1501_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1502_;
}
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
lean_dec(v_id_1485_);
lean_del_object(v___x_1481_);
lean_dec_ref(v_k_1479_);
lean_dec(v_i_1477_);
v_a_1503_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1486_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1486_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
}
else
{
lean_object* v___x_1511_; lean_object* v___x_1512_; 
lean_dec(v_a_1484_);
lean_del_object(v___x_1481_);
lean_dec_ref(v_k_1479_);
lean_dec(v_i_1477_);
lean_dec(v_fvarId_1476_);
v___x_1511_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__8, &l_Lean_IR_ToIR_lowerCode___closed__8_once, _init_l_Lean_IR_ToIR_lowerCode___closed__8);
v___x_1512_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1511_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1512_;
}
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
lean_del_object(v___x_1481_);
lean_dec_ref(v_k_1479_);
lean_dec(v_i_1477_);
lean_dec(v_fvarId_1476_);
v_a_1513_ = lean_ctor_get(v___x_1483_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1483_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1483_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
}
case 9:
{
lean_object* v_fvarId_1522_; lean_object* v_i_1523_; lean_object* v_offset_1524_; lean_object* v_y_1525_; lean_object* v_ty_1526_; lean_object* v_k_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1570_; 
v_fvarId_1522_ = lean_ctor_get(v_c_1267_, 0);
v_i_1523_ = lean_ctor_get(v_c_1267_, 1);
v_offset_1524_ = lean_ctor_get(v_c_1267_, 2);
v_y_1525_ = lean_ctor_get(v_c_1267_, 3);
v_ty_1526_ = lean_ctor_get(v_c_1267_, 4);
v_k_1527_ = lean_ctor_get(v_c_1267_, 5);
v_isSharedCheck_1570_ = !lean_is_exclusive(v_c_1267_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1529_ = v_c_1267_;
v_isShared_1530_ = v_isSharedCheck_1570_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_k_1527_);
lean_inc(v_ty_1526_);
lean_inc(v_y_1525_);
lean_inc(v_offset_1524_);
lean_inc(v_i_1523_);
lean_inc(v_fvarId_1522_);
lean_dec(v_c_1267_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1570_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v___x_1531_; 
v___x_1531_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_y_1525_, v_a_1268_, v_a_1270_);
lean_dec(v_y_1525_);
if (lean_obj_tag(v___x_1531_) == 0)
{
lean_object* v_a_1532_; 
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
lean_inc(v_a_1532_);
lean_dec_ref(v___x_1531_);
if (lean_obj_tag(v_a_1532_) == 0)
{
lean_object* v_id_1533_; lean_object* v___x_1534_; 
v_id_1533_ = lean_ctor_get(v_a_1532_, 0);
lean_inc(v_id_1533_);
lean_dec_ref(v_a_1532_);
v___x_1534_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1522_, v_a_1268_, v_a_1270_);
lean_dec(v_fvarId_1522_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; 
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1535_);
lean_dec_ref(v___x_1534_);
if (lean_obj_tag(v_a_1535_) == 0)
{
lean_object* v_id_1536_; lean_object* v___x_1537_; 
v_id_1536_ = lean_ctor_get(v_a_1535_, 0);
lean_inc(v_id_1536_);
lean_dec_ref(v_a_1535_);
v___x_1537_ = l_Lean_IR_ToIR_lowerCode(v_k_1527_, v_a_1268_, v_a_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1549_; 
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
v_isSharedCheck_1549_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1549_ == 0)
{
v___x_1540_ = v___x_1537_;
v_isShared_1541_ = v_isSharedCheck_1549_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1537_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1549_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1542_; lean_object* v___x_1544_; 
v___x_1542_ = l_Lean_IR_toIRType(v_ty_1526_);
lean_dec_ref(v_ty_1526_);
if (v_isShared_1530_ == 0)
{
lean_ctor_set_tag(v___x_1529_, 5);
lean_ctor_set(v___x_1529_, 5, v_a_1538_);
lean_ctor_set(v___x_1529_, 4, v___x_1542_);
lean_ctor_set(v___x_1529_, 3, v_id_1533_);
lean_ctor_set(v___x_1529_, 0, v_id_1536_);
v___x_1544_ = v___x_1529_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(5, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_id_1536_);
lean_ctor_set(v_reuseFailAlloc_1548_, 1, v_i_1523_);
lean_ctor_set(v_reuseFailAlloc_1548_, 2, v_offset_1524_);
lean_ctor_set(v_reuseFailAlloc_1548_, 3, v_id_1533_);
lean_ctor_set(v_reuseFailAlloc_1548_, 4, v___x_1542_);
lean_ctor_set(v_reuseFailAlloc_1548_, 5, v_a_1538_);
v___x_1544_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
lean_object* v___x_1546_; 
if (v_isShared_1541_ == 0)
{
lean_ctor_set(v___x_1540_, 0, v___x_1544_);
v___x_1546_ = v___x_1540_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v___x_1544_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
}
else
{
lean_dec(v_id_1536_);
lean_dec(v_id_1533_);
lean_del_object(v___x_1529_);
lean_dec_ref(v_ty_1526_);
lean_dec(v_offset_1524_);
lean_dec(v_i_1523_);
return v___x_1537_;
}
}
else
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
lean_dec(v_a_1535_);
lean_dec(v_id_1533_);
lean_del_object(v___x_1529_);
lean_dec_ref(v_k_1527_);
lean_dec_ref(v_ty_1526_);
lean_dec(v_offset_1524_);
lean_dec(v_i_1523_);
v___x_1550_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__9, &l_Lean_IR_ToIR_lowerCode___closed__9_once, _init_l_Lean_IR_ToIR_lowerCode___closed__9);
v___x_1551_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1550_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1551_;
}
}
else
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1559_; 
lean_dec(v_id_1533_);
lean_del_object(v___x_1529_);
lean_dec_ref(v_k_1527_);
lean_dec_ref(v_ty_1526_);
lean_dec(v_offset_1524_);
lean_dec(v_i_1523_);
v_a_1552_ = lean_ctor_get(v___x_1534_, 0);
v_isSharedCheck_1559_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1554_ = v___x_1534_;
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v___x_1534_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1557_; 
if (v_isShared_1555_ == 0)
{
v___x_1557_ = v___x_1554_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v_a_1552_);
v___x_1557_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
return v___x_1557_;
}
}
}
}
else
{
lean_object* v___x_1560_; lean_object* v___x_1561_; 
lean_dec(v_a_1532_);
lean_del_object(v___x_1529_);
lean_dec_ref(v_k_1527_);
lean_dec_ref(v_ty_1526_);
lean_dec(v_offset_1524_);
lean_dec(v_i_1523_);
lean_dec(v_fvarId_1522_);
v___x_1560_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__10, &l_Lean_IR_ToIR_lowerCode___closed__10_once, _init_l_Lean_IR_ToIR_lowerCode___closed__10);
v___x_1561_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1560_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1561_;
}
}
else
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1569_; 
lean_del_object(v___x_1529_);
lean_dec_ref(v_k_1527_);
lean_dec_ref(v_ty_1526_);
lean_dec(v_offset_1524_);
lean_dec(v_i_1523_);
lean_dec(v_fvarId_1522_);
v_a_1562_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1564_ = v___x_1531_;
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v___x_1531_);
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
case 10:
{
lean_object* v_fvarId_1571_; lean_object* v_cidx_1572_; lean_object* v_k_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1602_; 
v_fvarId_1571_ = lean_ctor_get(v_c_1267_, 0);
v_cidx_1572_ = lean_ctor_get(v_c_1267_, 1);
v_k_1573_ = lean_ctor_get(v_c_1267_, 2);
v_isSharedCheck_1602_ = !lean_is_exclusive(v_c_1267_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1575_ = v_c_1267_;
v_isShared_1576_ = v_isSharedCheck_1602_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_k_1573_);
lean_inc(v_cidx_1572_);
lean_inc(v_fvarId_1571_);
lean_dec(v_c_1267_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1602_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1577_; 
v___x_1577_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1571_, v_a_1268_, v_a_1270_);
lean_dec(v_fvarId_1571_);
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_object* v_a_1578_; 
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
lean_inc(v_a_1578_);
lean_dec_ref(v___x_1577_);
if (lean_obj_tag(v_a_1578_) == 0)
{
lean_object* v_id_1579_; lean_object* v___x_1580_; 
v_id_1579_ = lean_ctor_get(v_a_1578_, 0);
lean_inc(v_id_1579_);
lean_dec_ref(v_a_1578_);
v___x_1580_ = l_Lean_IR_ToIR_lowerCode(v_k_1573_, v_a_1268_, v_a_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1591_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1583_ = v___x_1580_;
v_isShared_1584_ = v_isSharedCheck_1591_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1580_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1591_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1586_; 
if (v_isShared_1576_ == 0)
{
lean_ctor_set_tag(v___x_1575_, 3);
lean_ctor_set(v___x_1575_, 2, v_a_1581_);
lean_ctor_set(v___x_1575_, 0, v_id_1579_);
v___x_1586_ = v___x_1575_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_id_1579_);
lean_ctor_set(v_reuseFailAlloc_1590_, 1, v_cidx_1572_);
lean_ctor_set(v_reuseFailAlloc_1590_, 2, v_a_1581_);
v___x_1586_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
lean_object* v___x_1588_; 
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 0, v___x_1586_);
v___x_1588_ = v___x_1583_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1586_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
}
else
{
lean_dec(v_id_1579_);
lean_del_object(v___x_1575_);
lean_dec(v_cidx_1572_);
return v___x_1580_;
}
}
else
{
lean_object* v___x_1592_; lean_object* v___x_1593_; 
lean_dec(v_a_1578_);
lean_del_object(v___x_1575_);
lean_dec_ref(v_k_1573_);
lean_dec(v_cidx_1572_);
v___x_1592_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__11, &l_Lean_IR_ToIR_lowerCode___closed__11_once, _init_l_Lean_IR_ToIR_lowerCode___closed__11);
v___x_1593_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1592_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1593_;
}
}
else
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1601_; 
lean_del_object(v___x_1575_);
lean_dec_ref(v_k_1573_);
lean_dec(v_cidx_1572_);
v_a_1594_ = lean_ctor_get(v___x_1577_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1596_ = v___x_1577_;
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1577_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1599_; 
if (v_isShared_1597_ == 0)
{
v___x_1599_ = v___x_1596_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_a_1594_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
}
case 11:
{
lean_object* v_fvarId_1603_; lean_object* v_n_1604_; uint8_t v_check_1605_; uint8_t v_persistent_1606_; lean_object* v_k_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1636_; 
v_fvarId_1603_ = lean_ctor_get(v_c_1267_, 0);
v_n_1604_ = lean_ctor_get(v_c_1267_, 1);
v_check_1605_ = lean_ctor_get_uint8(v_c_1267_, sizeof(void*)*3);
v_persistent_1606_ = lean_ctor_get_uint8(v_c_1267_, sizeof(void*)*3 + 1);
v_k_1607_ = lean_ctor_get(v_c_1267_, 2);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_c_1267_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1609_ = v_c_1267_;
v_isShared_1610_ = v_isSharedCheck_1636_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_k_1607_);
lean_inc(v_n_1604_);
lean_inc(v_fvarId_1603_);
lean_dec(v_c_1267_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1636_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1611_; 
v___x_1611_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1603_, v_a_1268_, v_a_1270_);
lean_dec(v_fvarId_1603_);
if (lean_obj_tag(v___x_1611_) == 0)
{
lean_object* v_a_1612_; 
v_a_1612_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_a_1612_);
lean_dec_ref(v___x_1611_);
if (lean_obj_tag(v_a_1612_) == 0)
{
lean_object* v_id_1613_; lean_object* v___x_1614_; 
v_id_1613_ = lean_ctor_get(v_a_1612_, 0);
lean_inc(v_id_1613_);
lean_dec_ref(v_a_1612_);
v___x_1614_ = l_Lean_IR_ToIR_lowerCode(v_k_1607_, v_a_1268_, v_a_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1614_) == 0)
{
lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1625_; 
v_a_1615_ = lean_ctor_get(v___x_1614_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1614_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1617_ = v___x_1614_;
v_isShared_1618_ = v_isSharedCheck_1625_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_dec(v___x_1614_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1625_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1620_; 
if (v_isShared_1610_ == 0)
{
lean_ctor_set_tag(v___x_1609_, 6);
lean_ctor_set(v___x_1609_, 2, v_a_1615_);
lean_ctor_set(v___x_1609_, 0, v_id_1613_);
v___x_1620_ = v___x_1609_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(6, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_id_1613_);
lean_ctor_set(v_reuseFailAlloc_1624_, 1, v_n_1604_);
lean_ctor_set(v_reuseFailAlloc_1624_, 2, v_a_1615_);
lean_ctor_set_uint8(v_reuseFailAlloc_1624_, sizeof(void*)*3, v_check_1605_);
lean_ctor_set_uint8(v_reuseFailAlloc_1624_, sizeof(void*)*3 + 1, v_persistent_1606_);
v___x_1620_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
lean_object* v___x_1622_; 
if (v_isShared_1618_ == 0)
{
lean_ctor_set(v___x_1617_, 0, v___x_1620_);
v___x_1622_ = v___x_1617_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v___x_1620_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
}
else
{
lean_dec(v_id_1613_);
lean_del_object(v___x_1609_);
lean_dec(v_n_1604_);
return v___x_1614_;
}
}
else
{
lean_object* v___x_1626_; lean_object* v___x_1627_; 
lean_dec(v_a_1612_);
lean_del_object(v___x_1609_);
lean_dec_ref(v_k_1607_);
lean_dec(v_n_1604_);
v___x_1626_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__12, &l_Lean_IR_ToIR_lowerCode___closed__12_once, _init_l_Lean_IR_ToIR_lowerCode___closed__12);
v___x_1627_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1626_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1627_;
}
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
lean_del_object(v___x_1609_);
lean_dec_ref(v_k_1607_);
lean_dec(v_n_1604_);
v_a_1628_ = lean_ctor_get(v___x_1611_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1611_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1611_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1611_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
}
case 12:
{
lean_object* v_fvarId_1637_; lean_object* v_n_1638_; uint8_t v_check_1639_; uint8_t v_persistent_1640_; lean_object* v_k_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1670_; 
v_fvarId_1637_ = lean_ctor_get(v_c_1267_, 0);
v_n_1638_ = lean_ctor_get(v_c_1267_, 1);
v_check_1639_ = lean_ctor_get_uint8(v_c_1267_, sizeof(void*)*3);
v_persistent_1640_ = lean_ctor_get_uint8(v_c_1267_, sizeof(void*)*3 + 1);
v_k_1641_ = lean_ctor_get(v_c_1267_, 2);
v_isSharedCheck_1670_ = !lean_is_exclusive(v_c_1267_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1643_ = v_c_1267_;
v_isShared_1644_ = v_isSharedCheck_1670_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_k_1641_);
lean_inc(v_n_1638_);
lean_inc(v_fvarId_1637_);
lean_dec(v_c_1267_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1670_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1645_; 
v___x_1645_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1637_, v_a_1268_, v_a_1270_);
lean_dec(v_fvarId_1637_);
if (lean_obj_tag(v___x_1645_) == 0)
{
lean_object* v_a_1646_; 
v_a_1646_ = lean_ctor_get(v___x_1645_, 0);
lean_inc(v_a_1646_);
lean_dec_ref(v___x_1645_);
if (lean_obj_tag(v_a_1646_) == 0)
{
lean_object* v_id_1647_; lean_object* v___x_1648_; 
v_id_1647_ = lean_ctor_get(v_a_1646_, 0);
lean_inc(v_id_1647_);
lean_dec_ref(v_a_1646_);
v___x_1648_ = l_Lean_IR_ToIR_lowerCode(v_k_1641_, v_a_1268_, v_a_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1659_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1651_ = v___x_1648_;
v_isShared_1652_ = v_isSharedCheck_1659_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1648_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1659_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1644_ == 0)
{
lean_ctor_set_tag(v___x_1643_, 7);
lean_ctor_set(v___x_1643_, 2, v_a_1649_);
lean_ctor_set(v___x_1643_, 0, v_id_1647_);
v___x_1654_ = v___x_1643_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(7, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_id_1647_);
lean_ctor_set(v_reuseFailAlloc_1658_, 1, v_n_1638_);
lean_ctor_set(v_reuseFailAlloc_1658_, 2, v_a_1649_);
lean_ctor_set_uint8(v_reuseFailAlloc_1658_, sizeof(void*)*3, v_check_1639_);
lean_ctor_set_uint8(v_reuseFailAlloc_1658_, sizeof(void*)*3 + 1, v_persistent_1640_);
v___x_1654_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
lean_object* v___x_1656_; 
if (v_isShared_1652_ == 0)
{
lean_ctor_set(v___x_1651_, 0, v___x_1654_);
v___x_1656_ = v___x_1651_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v___x_1654_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
}
else
{
lean_dec(v_id_1647_);
lean_del_object(v___x_1643_);
lean_dec(v_n_1638_);
return v___x_1648_;
}
}
else
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
lean_dec(v_a_1646_);
lean_del_object(v___x_1643_);
lean_dec_ref(v_k_1641_);
lean_dec(v_n_1638_);
v___x_1660_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__13, &l_Lean_IR_ToIR_lowerCode___closed__13_once, _init_l_Lean_IR_ToIR_lowerCode___closed__13);
v___x_1661_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1660_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1661_;
}
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_del_object(v___x_1643_);
lean_dec_ref(v_k_1641_);
lean_dec(v_n_1638_);
v_a_1662_ = lean_ctor_get(v___x_1645_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1645_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1645_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1645_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
}
}
default: 
{
lean_object* v_fvarId_1671_; lean_object* v_k_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1701_; 
v_fvarId_1671_ = lean_ctor_get(v_c_1267_, 0);
v_k_1672_ = lean_ctor_get(v_c_1267_, 1);
v_isSharedCheck_1701_ = !lean_is_exclusive(v_c_1267_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1674_ = v_c_1267_;
v_isShared_1675_ = v_isSharedCheck_1701_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_k_1672_);
lean_inc(v_fvarId_1671_);
lean_dec(v_c_1267_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1701_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1676_; 
v___x_1676_ = l_Lean_IR_ToIR_getFVarValue___redArg(v_fvarId_1671_, v_a_1268_, v_a_1270_);
lean_dec(v_fvarId_1671_);
if (lean_obj_tag(v___x_1676_) == 0)
{
lean_object* v_a_1677_; 
v_a_1677_ = lean_ctor_get(v___x_1676_, 0);
lean_inc(v_a_1677_);
lean_dec_ref(v___x_1676_);
if (lean_obj_tag(v_a_1677_) == 0)
{
lean_object* v_id_1678_; lean_object* v___x_1679_; 
v_id_1678_ = lean_ctor_get(v_a_1677_, 0);
lean_inc(v_id_1678_);
lean_dec_ref(v_a_1677_);
v___x_1679_ = l_Lean_IR_ToIR_lowerCode(v_k_1672_, v_a_1268_, v_a_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1690_; 
v_a_1680_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1682_ = v___x_1679_;
v_isShared_1683_ = v_isSharedCheck_1690_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1679_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1690_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1685_; 
if (v_isShared_1675_ == 0)
{
lean_ctor_set_tag(v___x_1674_, 8);
lean_ctor_set(v___x_1674_, 1, v_a_1680_);
lean_ctor_set(v___x_1674_, 0, v_id_1678_);
v___x_1685_ = v___x_1674_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_id_1678_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v_a_1680_);
v___x_1685_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v___x_1687_; 
if (v_isShared_1683_ == 0)
{
lean_ctor_set(v___x_1682_, 0, v___x_1685_);
v___x_1687_ = v___x_1682_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v___x_1685_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
}
else
{
lean_dec(v_id_1678_);
lean_del_object(v___x_1674_);
return v___x_1679_;
}
}
else
{
lean_object* v___x_1691_; lean_object* v___x_1692_; 
lean_dec(v_a_1677_);
lean_del_object(v___x_1674_);
lean_dec_ref(v_k_1672_);
v___x_1691_ = lean_obj_once(&l_Lean_IR_ToIR_lowerCode___closed__14, &l_Lean_IR_ToIR_lowerCode___closed__14_once, _init_l_Lean_IR_ToIR_lowerCode___closed__14);
v___x_1692_ = l_panic___at___00Lean_IR_ToIR_lowerCode_spec__1(v___x_1691_, v_a_1268_, v_a_1269_, v_a_1270_);
return v___x_1692_;
}
}
else
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
lean_del_object(v___x_1674_);
lean_dec_ref(v_k_1672_);
v_a_1693_ = lean_ctor_get(v___x_1676_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1676_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1695_ = v___x_1676_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1676_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_a_1693_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg(lean_object* v_decl_1702_, lean_object* v_k_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_){
_start:
{
lean_object* v_fvarId_1708_; lean_object* v___x_1709_; 
v_fvarId_1708_ = lean_ctor_get(v_decl_1702_, 0);
lean_inc(v_fvarId_1708_);
lean_dec_ref(v_decl_1702_);
v___x_1709_ = l_Lean_IR_ToIR_bindErased___redArg(v_fvarId_1708_, v_a_1704_, v_a_1706_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v___x_1710_; 
lean_dec_ref(v___x_1709_);
v___x_1710_ = l_Lean_IR_ToIR_lowerCode(v_k_1703_, v_a_1704_, v_a_1705_, v_a_1706_);
return v___x_1710_;
}
else
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1718_; 
lean_dec_ref(v_k_1703_);
v_a_1711_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1713_ = v___x_1709_;
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1709_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_a_1711_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg___boxed(lean_object* v_decl_1719_, lean_object* v_k_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v_res_1725_; 
v_res_1725_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg(v_decl_1719_, v_k_1720_, v_a_1721_, v_a_1722_, v_a_1723_);
lean_dec(v_a_1723_);
lean_dec_ref(v_a_1722_);
lean_dec(v_a_1721_);
return v_res_1725_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue___boxed(lean_object* v_decl_1726_, lean_object* v_k_1727_, lean_object* v_fvarId_1728_, lean_object* v_f_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_){
_start:
{
lean_object* v_res_1734_; 
v_res_1734_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_withGetFVarValue(v_decl_1726_, v_k_1727_, v_fvarId_1728_, v_f_1729_, v_a_1730_, v_a_1731_, v_a_1732_);
lean_dec(v_a_1732_);
lean_dec_ref(v_a_1731_);
lean_dec(v_a_1730_);
lean_dec(v_fvarId_1728_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__4___boxed(lean_object* v_sz_1735_, lean_object* v_i_1736_, lean_object* v_bs_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_){
_start:
{
size_t v_sz_boxed_1742_; size_t v_i_boxed_1743_; lean_object* v_res_1744_; 
v_sz_boxed_1742_ = lean_unbox_usize(v_sz_1735_);
lean_dec(v_sz_1735_);
v_i_boxed_1743_ = lean_unbox_usize(v_i_1736_);
lean_dec(v_i_1736_);
v_res_1744_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__4(v_sz_boxed_1742_, v_i_boxed_1743_, v_bs_1737_, v___y_1738_, v___y_1739_, v___y_1740_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerAlt___boxed(lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l_Lean_IR_ToIR_lowerAlt(v_a_1745_, v_a_1746_, v_a_1747_, v_a_1748_);
lean_dec(v_a_1748_);
lean_dec_ref(v_a_1747_);
lean_dec(v_a_1746_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerLet___boxed(lean_object* v_decl_1751_, lean_object* v_k_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l_Lean_IR_ToIR_lowerLet(v_decl_1751_, v_k_1752_, v_a_1753_, v_a_1754_, v_a_1755_);
lean_dec(v_a_1755_);
lean_dec_ref(v_a_1754_);
lean_dec(v_a_1753_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerCode___boxed(lean_object* v_c_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_){
_start:
{
lean_object* v_res_1763_; 
v_res_1763_ = l_Lean_IR_ToIR_lowerCode(v_c_1758_, v_a_1759_, v_a_1760_, v_a_1761_);
lean_dec(v_a_1761_);
lean_dec_ref(v_a_1760_);
lean_dec(v_a_1759_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased(lean_object* v_decl_1764_, lean_object* v_k_1765_, lean_object* v_x_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_){
_start:
{
lean_object* v___x_1771_; 
v___x_1771_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___redArg(v_decl_1764_, v_k_1765_, v_a_1767_, v_a_1768_, v_a_1769_);
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased___boxed(lean_object* v_decl_1772_, lean_object* v_k_1773_, lean_object* v_x_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_){
_start:
{
lean_object* v_res_1779_; 
v_res_1779_ = l___private_Lean_Compiler_IR_ToIR_0__Lean_IR_ToIR_lowerLet_mkErased(v_decl_1772_, v_k_1773_, v_x_1774_, v_a_1775_, v_a_1776_, v_a_1777_);
lean_dec(v_a_1777_);
lean_dec_ref(v_a_1776_);
lean_dec(v_a_1775_);
return v_res_1779_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2(size_t v_sz_1780_, size_t v_i_1781_, lean_object* v_bs_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_){
_start:
{
lean_object* v___x_1787_; 
v___x_1787_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg(v_sz_1780_, v_i_1781_, v_bs_1782_, v___y_1783_, v___y_1785_);
return v___x_1787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___boxed(lean_object* v_sz_1788_, lean_object* v_i_1789_, lean_object* v_bs_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_){
_start:
{
size_t v_sz_boxed_1795_; size_t v_i_boxed_1796_; lean_object* v_res_1797_; 
v_sz_boxed_1795_ = lean_unbox_usize(v_sz_1788_);
lean_dec(v_sz_1788_);
v_i_boxed_1796_ = lean_unbox_usize(v_i_1789_);
lean_dec(v_i_1789_);
v_res_1797_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2(v_sz_boxed_1795_, v_i_boxed_1796_, v_bs_1790_, v___y_1791_, v___y_1792_, v___y_1793_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec(v___y_1791_);
return v_res_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3(size_t v_sz_1798_, size_t v_i_1799_, lean_object* v_bs_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___redArg(v_sz_1798_, v_i_1799_, v_bs_1800_, v___y_1801_, v___y_1803_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3___boxed(lean_object* v_sz_1806_, lean_object* v_i_1807_, lean_object* v_bs_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_){
_start:
{
size_t v_sz_boxed_1813_; size_t v_i_boxed_1814_; lean_object* v_res_1815_; 
v_sz_boxed_1813_ = lean_unbox_usize(v_sz_1806_);
lean_dec(v_sz_1806_);
v_i_boxed_1814_ = lean_unbox_usize(v_i_1807_);
lean_dec(v_i_1807_);
v_res_1815_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__3(v_sz_boxed_1813_, v_i_boxed_1814_, v_bs_1808_, v___y_1809_, v___y_1810_, v___y_1811_);
lean_dec(v___y_1811_);
lean_dec_ref(v___y_1810_);
lean_dec(v___y_1809_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerDecl(lean_object* v_d_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_){
_start:
{
lean_object* v_toSignature_1821_; lean_object* v_value_1822_; lean_object* v_name_1823_; lean_object* v_type_1824_; lean_object* v_params_1825_; size_t v_sz_1826_; size_t v___x_1827_; lean_object* v___x_1828_; 
v_toSignature_1821_ = lean_ctor_get(v_d_1816_, 0);
lean_inc_ref(v_toSignature_1821_);
v_value_1822_ = lean_ctor_get(v_d_1816_, 1);
lean_inc_ref(v_value_1822_);
lean_dec_ref(v_d_1816_);
v_name_1823_ = lean_ctor_get(v_toSignature_1821_, 0);
lean_inc(v_name_1823_);
v_type_1824_ = lean_ctor_get(v_toSignature_1821_, 2);
lean_inc_ref(v_type_1824_);
v_params_1825_ = lean_ctor_get(v_toSignature_1821_, 3);
lean_inc_ref(v_params_1825_);
lean_dec_ref(v_toSignature_1821_);
v_sz_1826_ = lean_array_size(v_params_1825_);
v___x_1827_ = ((size_t)0ULL);
v___x_1828_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_IR_ToIR_lowerCode_spec__2___redArg(v_sz_1826_, v___x_1827_, v_params_1825_, v_a_1817_, v_a_1819_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1885_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1831_ = v___x_1828_;
v_isShared_1832_ = v_isSharedCheck_1885_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1828_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1885_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1833_; 
v___x_1833_ = l_Lean_IR_toIRType(v_type_1824_);
lean_dec_ref(v_type_1824_);
if (lean_obj_tag(v_value_1822_) == 0)
{
lean_object* v_code_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1860_; 
lean_del_object(v___x_1831_);
v_code_1834_ = lean_ctor_get(v_value_1822_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v_value_1822_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1836_ = v_value_1822_;
v_isShared_1837_ = v_isSharedCheck_1860_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_code_1834_);
lean_dec(v_value_1822_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1860_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1838_; 
v___x_1838_ = l_Lean_IR_ToIR_lowerCode(v_code_1834_, v_a_1817_, v_a_1818_, v_a_1819_);
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_object* v_a_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1851_; 
v_a_1839_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1841_ = v___x_1838_;
v_isShared_1842_ = v_isSharedCheck_1851_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_a_1839_);
lean_dec(v___x_1838_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1851_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1846_; 
v___x_1843_ = lean_box(0);
v___x_1844_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1844_, 0, v_name_1823_);
lean_ctor_set(v___x_1844_, 1, v_a_1829_);
lean_ctor_set(v___x_1844_, 2, v___x_1833_);
lean_ctor_set(v___x_1844_, 3, v_a_1839_);
lean_ctor_set(v___x_1844_, 4, v___x_1843_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set_tag(v___x_1836_, 1);
lean_ctor_set(v___x_1836_, 0, v___x_1844_);
v___x_1846_ = v___x_1836_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v___x_1844_);
v___x_1846_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
lean_object* v___x_1848_; 
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 0, v___x_1846_);
v___x_1848_ = v___x_1841_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v___x_1846_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
}
else
{
lean_object* v_a_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1859_; 
lean_del_object(v___x_1836_);
lean_dec(v___x_1833_);
lean_dec(v_a_1829_);
lean_dec(v_name_1823_);
v_a_1852_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1854_ = v___x_1838_;
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_a_1852_);
lean_dec(v___x_1838_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1857_; 
if (v_isShared_1855_ == 0)
{
v___x_1857_ = v___x_1854_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_a_1852_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
}
}
else
{
lean_object* v_externAttrData_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1884_; 
v_externAttrData_1861_ = lean_ctor_get(v_value_1822_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v_value_1822_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1863_ = v_value_1822_;
v_isShared_1864_ = v_isSharedCheck_1884_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_externAttrData_1861_);
lean_dec(v_value_1822_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1884_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
uint8_t v___x_1865_; 
v___x_1865_ = l_List_isEmpty___redArg(v_externAttrData_1861_);
if (v___x_1865_ == 0)
{
lean_object* v___x_1866_; lean_object* v___x_1868_; 
v___x_1866_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1866_, 0, v_name_1823_);
lean_ctor_set(v___x_1866_, 1, v_a_1829_);
lean_ctor_set(v___x_1866_, 2, v___x_1833_);
lean_ctor_set(v___x_1866_, 3, v_externAttrData_1861_);
if (v_isShared_1864_ == 0)
{
lean_ctor_set(v___x_1863_, 0, v___x_1866_);
v___x_1868_ = v___x_1863_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v___x_1866_);
v___x_1868_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
lean_object* v___x_1870_; 
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 0, v___x_1868_);
v___x_1870_ = v___x_1831_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v___x_1868_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
else
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1882_; 
lean_del_object(v___x_1863_);
lean_dec(v_externAttrData_1861_);
lean_del_object(v___x_1831_);
v___x_1873_ = l_Lean_IR_mkDummyExternDecl(v_name_1823_, v_a_1829_, v___x_1833_);
v___x_1874_ = l_Lean_IR_ToIR_addDecl___redArg(v___x_1873_, v_a_1819_);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1882_ == 0)
{
lean_object* v_unused_1883_; 
v_unused_1883_ = lean_ctor_get(v___x_1874_, 0);
lean_dec(v_unused_1883_);
v___x_1876_ = v___x_1874_;
v_isShared_1877_ = v_isSharedCheck_1882_;
goto v_resetjp_1875_;
}
else
{
lean_dec(v___x_1874_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1882_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1878_; lean_object* v___x_1880_; 
v___x_1878_ = lean_box(0);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v___x_1878_);
v___x_1880_ = v___x_1876_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1878_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_dec_ref(v_type_1824_);
lean_dec(v_name_1823_);
lean_dec_ref(v_value_1822_);
v_a_1886_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1828_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1828_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ToIR_lowerDecl___boxed(lean_object* v_d_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Lean_IR_ToIR_lowerDecl(v_d_1894_, v_a_1895_, v_a_1896_, v_a_1897_);
lean_dec(v_a_1897_);
lean_dec_ref(v_a_1896_);
lean_dec(v_a_1895_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_toIR_spec__0(lean_object* v_as_1900_, size_t v_sz_1901_, size_t v_i_1902_, lean_object* v_b_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_){
_start:
{
uint8_t v___x_1907_; 
v___x_1907_ = lean_usize_dec_lt(v_i_1902_, v_sz_1901_);
if (v___x_1907_ == 0)
{
lean_object* v___x_1908_; 
v___x_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1908_, 0, v_b_1903_);
return v___x_1908_;
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v_a_1909_ = lean_array_uget_borrowed(v_as_1900_, v_i_1902_);
lean_inc(v_a_1909_);
v___x_1910_ = lean_alloc_closure((void*)(l_Lean_IR_ToIR_lowerDecl___boxed), 5, 1);
lean_closure_set(v___x_1910_, 0, v_a_1909_);
v___x_1911_ = l_Lean_IR_ToIR_M_run___redArg(v___x_1910_, v___y_1904_, v___y_1905_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v_a_1914_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref(v___x_1911_);
if (lean_obj_tag(v_a_1912_) == 1)
{
lean_object* v_val_1918_; lean_object* v___x_1919_; 
v_val_1918_ = lean_ctor_get(v_a_1912_, 0);
lean_inc(v_val_1918_);
lean_dec_ref(v_a_1912_);
v___x_1919_ = lean_array_push(v_b_1903_, v_val_1918_);
v_a_1914_ = v___x_1919_;
goto v___jp_1913_;
}
else
{
lean_dec(v_a_1912_);
v_a_1914_ = v_b_1903_;
goto v___jp_1913_;
}
v___jp_1913_:
{
size_t v___x_1915_; size_t v___x_1916_; 
v___x_1915_ = ((size_t)1ULL);
v___x_1916_ = lean_usize_add(v_i_1902_, v___x_1915_);
v_i_1902_ = v___x_1916_;
v_b_1903_ = v_a_1914_;
goto _start;
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
lean_dec_ref(v_b_1903_);
v_a_1920_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1911_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1911_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_toIR_spec__0___boxed(lean_object* v_as_1928_, lean_object* v_sz_1929_, lean_object* v_i_1930_, lean_object* v_b_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_){
_start:
{
size_t v_sz_boxed_1935_; size_t v_i_boxed_1936_; lean_object* v_res_1937_; 
v_sz_boxed_1935_ = lean_unbox_usize(v_sz_1929_);
lean_dec(v_sz_1929_);
v_i_boxed_1936_ = lean_unbox_usize(v_i_1930_);
lean_dec(v_i_1930_);
v_res_1937_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_toIR_spec__0(v_as_1928_, v_sz_boxed_1935_, v_i_boxed_1936_, v_b_1931_, v___y_1932_, v___y_1933_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
lean_dec_ref(v_as_1928_);
return v_res_1937_;
}
}
static lean_object* _init_l_Lean_IR_toIR___closed__0(void){
_start:
{
lean_object* v___x_1938_; lean_object* v_irDecls_1939_; 
v___x_1938_ = lean_unsigned_to_nat(0u);
v_irDecls_1939_ = lean_mk_empty_array_with_capacity(v___x_1938_);
return v_irDecls_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_toIR(lean_object* v_decls_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_){
_start:
{
lean_object* v_irDecls_1944_; size_t v_sz_1945_; size_t v___x_1946_; lean_object* v___x_1947_; 
v_irDecls_1944_ = lean_obj_once(&l_Lean_IR_toIR___closed__0, &l_Lean_IR_toIR___closed__0_once, _init_l_Lean_IR_toIR___closed__0);
v_sz_1945_ = lean_array_size(v_decls_1940_);
v___x_1946_ = ((size_t)0ULL);
v___x_1947_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_toIR_spec__0(v_decls_1940_, v_sz_1945_, v___x_1946_, v_irDecls_1944_, v_a_1941_, v_a_1942_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_toIR___boxed(lean_object* v_decls_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_){
_start:
{
lean_object* v_res_1952_; 
v_res_1952_ = l_Lean_IR_toIR(v_decls_1948_, v_a_1949_, v_a_1950_);
lean_dec(v_a_1950_);
lean_dec_ref(v_a_1949_);
lean_dec_ref(v_decls_1948_);
return v_res_1952_;
}
}
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR_ToIRType(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_IR_ToIR(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_ToIRType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_IR_ToIR(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_IR_ToIRType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_ToIR(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_ToIRType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_ToIR(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_IR_ToIR(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_IR_ToIR(builtin);
}
#ifdef __cplusplus
}
#endif
