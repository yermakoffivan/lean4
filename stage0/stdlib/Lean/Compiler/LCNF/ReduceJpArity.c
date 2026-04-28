// Lean compiler output
// Module: Lean.Compiler.LCNF.ReduceJpArity
// Imports: public import Lean.Compiler.LCNF.InferType
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
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
lean_object* l_Lean_Compiler_LCNF_Code_collectUsed(uint8_t, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectType(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkForallParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_instInhabitedPass;
lean_object* l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__3___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_reduceJpArity___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_reduceJpArity___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceJpArity(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceJpArity___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0_spec__0___redArg(lean_object* v_a_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
lean_object* v_key_4_; lean_object* v_tail_5_; uint8_t v___x_6_; 
v_key_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v___x_6_ = l_Lean_instBEqFVarId_beq(v_key_4_, v_a_1_);
if (v___x_6_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0_spec__0___redArg___boxed(lean_object* v_a_8_, lean_object* v_x_9_){
_start:
{
uint8_t v_res_10_; lean_object* v_r_11_; 
v_res_10_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0_spec__0___redArg(v_a_8_, v_x_9_);
lean_dec(v_x_9_);
lean_dec(v_a_8_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg(lean_object* v_m_12_, lean_object* v_a_13_){
_start:
{
lean_object* v_buckets_14_; lean_object* v___x_15_; uint64_t v___x_16_; uint64_t v___x_17_; uint64_t v___x_18_; uint64_t v_fold_19_; uint64_t v___x_20_; uint64_t v___x_21_; uint64_t v___x_22_; size_t v___x_23_; size_t v___x_24_; size_t v___x_25_; size_t v___x_26_; size_t v___x_27_; lean_object* v___x_28_; uint8_t v___x_29_; 
v_buckets_14_ = lean_ctor_get(v_m_12_, 1);
v___x_15_ = lean_array_get_size(v_buckets_14_);
v___x_16_ = l_Lean_instHashableFVarId_hash(v_a_13_);
v___x_17_ = 32ULL;
v___x_18_ = lean_uint64_shift_right(v___x_16_, v___x_17_);
v_fold_19_ = lean_uint64_xor(v___x_16_, v___x_18_);
v___x_20_ = 16ULL;
v___x_21_ = lean_uint64_shift_right(v_fold_19_, v___x_20_);
v___x_22_ = lean_uint64_xor(v_fold_19_, v___x_21_);
v___x_23_ = lean_uint64_to_usize(v___x_22_);
v___x_24_ = lean_usize_of_nat(v___x_15_);
v___x_25_ = ((size_t)1ULL);
v___x_26_ = lean_usize_sub(v___x_24_, v___x_25_);
v___x_27_ = lean_usize_land(v___x_23_, v___x_26_);
v___x_28_ = lean_array_uget_borrowed(v_buckets_14_, v___x_27_);
v___x_29_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0_spec__0___redArg(v_a_13_, v___x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg___boxed(lean_object* v_m_30_, lean_object* v_a_31_){
_start:
{
uint8_t v_res_32_; lean_object* v_r_33_; 
v_res_32_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg(v_m_30_, v_a_31_);
lean_dec(v_a_31_);
lean_dec_ref(v_m_30_);
v_r_33_ = lean_box(v_res_32_);
return v_r_33_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg(lean_object* v_as_34_, size_t v_sz_35_, size_t v_i_36_, lean_object* v_b_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v_a_42_; uint8_t v___x_46_; 
v___x_46_ = lean_usize_dec_lt(v_i_36_, v_sz_35_);
if (v___x_46_ == 0)
{
lean_object* v___x_47_; 
v___x_47_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_47_, 0, v_b_37_);
return v___x_47_;
}
else
{
lean_object* v_snd_48_; lean_object* v_fst_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_91_; 
v_snd_48_ = lean_ctor_get(v_b_37_, 1);
v_fst_49_ = lean_ctor_get(v_b_37_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v_b_37_);
if (v_isSharedCheck_91_ == 0)
{
v___x_51_ = v_b_37_;
v_isShared_52_ = v_isSharedCheck_91_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_snd_48_);
lean_inc(v_fst_49_);
lean_dec(v_b_37_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_91_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v_fst_53_; lean_object* v_snd_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_90_; 
v_fst_53_ = lean_ctor_get(v_snd_48_, 0);
v_snd_54_ = lean_ctor_get(v_snd_48_, 1);
v_isSharedCheck_90_ = !lean_is_exclusive(v_snd_48_);
if (v_isSharedCheck_90_ == 0)
{
v___x_56_ = v_snd_48_;
v_isShared_57_ = v_isSharedCheck_90_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_snd_54_);
lean_inc(v_fst_53_);
lean_dec(v_snd_48_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_90_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v_a_58_; lean_object* v_fvarId_59_; lean_object* v_type_60_; uint8_t v___x_61_; 
v_a_58_ = lean_array_uget_borrowed(v_as_34_, v_i_36_);
v_fvarId_59_ = lean_ctor_get(v_a_58_, 0);
v_type_60_ = lean_ctor_get(v_a_58_, 2);
v___x_61_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg(v_fst_49_, v_fvarId_59_);
if (v___x_61_ == 0)
{
uint8_t v___x_62_; lean_object* v___x_63_; 
v___x_62_ = 0;
v___x_63_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v___x_62_, v_a_58_, v___y_38_, v___y_39_);
if (lean_obj_tag(v___x_63_) == 0)
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_67_; 
lean_dec_ref(v___x_63_);
v___x_64_ = lean_box(v___x_61_);
v___x_65_ = lean_array_push(v_fst_53_, v___x_64_);
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 0, v___x_65_);
v___x_67_ = v___x_56_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_65_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_snd_54_);
v___x_67_ = v_reuseFailAlloc_71_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
lean_object* v___x_69_; 
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 1, v___x_67_);
v___x_69_ = v___x_51_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v_fst_49_);
lean_ctor_set(v_reuseFailAlloc_70_, 1, v___x_67_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
v_a_42_ = v___x_69_;
goto v___jp_41_;
}
}
}
else
{
lean_object* v_a_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_79_; 
lean_del_object(v___x_56_);
lean_dec(v_snd_54_);
lean_dec(v_fst_53_);
lean_del_object(v___x_51_);
lean_dec(v_fst_49_);
v_a_72_ = lean_ctor_get(v___x_63_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v___x_63_);
if (v_isSharedCheck_79_ == 0)
{
v___x_74_ = v___x_63_;
v_isShared_75_ = v_isSharedCheck_79_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_a_72_);
lean_dec(v___x_63_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_79_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___x_77_; 
if (v_isShared_75_ == 0)
{
v___x_77_ = v___x_74_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_a_72_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
}
else
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_85_; 
lean_inc_ref(v_type_60_);
v___x_80_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_collectType(v_type_60_, v_fst_49_);
v___x_81_ = lean_box(v___x_61_);
v___x_82_ = lean_array_push(v_fst_53_, v___x_81_);
lean_inc(v_a_58_);
v___x_83_ = lean_array_push(v_snd_54_, v_a_58_);
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 1, v___x_83_);
lean_ctor_set(v___x_56_, 0, v___x_82_);
v___x_85_ = v___x_56_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_82_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v___x_83_);
v___x_85_ = v_reuseFailAlloc_89_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
lean_object* v___x_87_; 
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 1, v___x_85_);
lean_ctor_set(v___x_51_, 0, v___x_80_);
v___x_87_ = v___x_51_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v___x_80_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v___x_85_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
v_a_42_ = v___x_87_;
goto v___jp_41_;
}
}
}
}
}
}
v___jp_41_:
{
size_t v___x_43_; size_t v___x_44_; 
v___x_43_ = ((size_t)1ULL);
v___x_44_ = lean_usize_add(v_i_36_, v___x_43_);
v_i_36_ = v___x_44_;
v_b_37_ = v_a_42_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg___boxed(lean_object* v_as_92_, lean_object* v_sz_93_, lean_object* v_i_94_, lean_object* v_b_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
size_t v_sz_boxed_99_; size_t v_i_boxed_100_; lean_object* v_res_101_; 
v_sz_boxed_99_ = lean_unbox_usize(v_sz_93_);
lean_dec(v_sz_93_);
v_i_boxed_100_ = lean_unbox_usize(v_i_94_);
lean_dec(v_i_94_);
v_res_101_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg(v_as_92_, v_sz_boxed_99_, v_i_boxed_100_, v_b_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v_as_92_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__3___redArg(lean_object* v_as_102_, size_t v_sz_103_, size_t v_i_104_, lean_object* v_b_105_){
_start:
{
lean_object* v_a_108_; uint8_t v___x_112_; 
v___x_112_ = lean_usize_dec_lt(v_i_104_, v_sz_103_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; 
v___x_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_113_, 0, v_b_105_);
return v___x_113_;
}
else
{
lean_object* v_snd_114_; lean_object* v_fst_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_149_; 
v_snd_114_ = lean_ctor_get(v_b_105_, 1);
v_fst_115_ = lean_ctor_get(v_b_105_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v_b_105_);
if (v_isSharedCheck_149_ == 0)
{
v___x_117_ = v_b_105_;
v_isShared_118_ = v_isSharedCheck_149_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_snd_114_);
lean_inc(v_fst_115_);
lean_dec(v_b_105_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_149_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v_array_119_; lean_object* v_start_120_; lean_object* v_stop_121_; uint8_t v___x_122_; 
v_array_119_ = lean_ctor_get(v_snd_114_, 0);
v_start_120_ = lean_ctor_get(v_snd_114_, 1);
v_stop_121_ = lean_ctor_get(v_snd_114_, 2);
v___x_122_ = lean_nat_dec_lt(v_start_120_, v_stop_121_);
if (v___x_122_ == 0)
{
lean_object* v___x_124_; 
if (v_isShared_118_ == 0)
{
v___x_124_ = v___x_117_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_fst_115_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v_snd_114_);
v___x_124_ = v_reuseFailAlloc_126_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
lean_object* v___x_125_; 
v___x_125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
return v___x_125_;
}
}
else
{
lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_145_; 
lean_inc(v_stop_121_);
lean_inc(v_start_120_);
lean_inc_ref(v_array_119_);
v_isSharedCheck_145_ = !lean_is_exclusive(v_snd_114_);
if (v_isSharedCheck_145_ == 0)
{
lean_object* v_unused_146_; lean_object* v_unused_147_; lean_object* v_unused_148_; 
v_unused_146_ = lean_ctor_get(v_snd_114_, 2);
lean_dec(v_unused_146_);
v_unused_147_ = lean_ctor_get(v_snd_114_, 1);
lean_dec(v_unused_147_);
v_unused_148_ = lean_ctor_get(v_snd_114_, 0);
lean_dec(v_unused_148_);
v___x_128_ = v_snd_114_;
v_isShared_129_ = v_isSharedCheck_145_;
goto v_resetjp_127_;
}
else
{
lean_dec(v_snd_114_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_145_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v_a_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_135_; 
v_a_130_ = lean_array_uget_borrowed(v_as_102_, v_i_104_);
v___x_131_ = lean_array_fget(v_array_119_, v_start_120_);
v___x_132_ = lean_unsigned_to_nat(1u);
v___x_133_ = lean_nat_add(v_start_120_, v___x_132_);
lean_dec(v_start_120_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 1, v___x_133_);
v___x_135_ = v___x_128_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_array_119_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v___x_133_);
lean_ctor_set(v_reuseFailAlloc_144_, 2, v_stop_121_);
v___x_135_ = v_reuseFailAlloc_144_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
uint8_t v___x_136_; 
v___x_136_ = lean_unbox(v_a_130_);
if (v___x_136_ == 0)
{
lean_object* v___x_138_; 
lean_dec(v___x_131_);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 1, v___x_135_);
v___x_138_ = v___x_117_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_fst_115_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v___x_135_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
v_a_108_ = v___x_138_;
goto v___jp_107_;
}
}
else
{
lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_140_ = lean_array_push(v_fst_115_, v___x_131_);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 1, v___x_135_);
lean_ctor_set(v___x_117_, 0, v___x_140_);
v___x_142_ = v___x_117_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v___x_140_);
lean_ctor_set(v_reuseFailAlloc_143_, 1, v___x_135_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
v_a_108_ = v___x_142_;
goto v___jp_107_;
}
}
}
}
}
}
}
v___jp_107_:
{
size_t v___x_109_; size_t v___x_110_; 
v___x_109_ = ((size_t)1ULL);
v___x_110_ = lean_usize_add(v_i_104_, v___x_109_);
v_i_104_ = v___x_110_;
v_b_105_ = v_a_108_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__3___redArg___boxed(lean_object* v_as_150_, lean_object* v_sz_151_, lean_object* v_i_152_, lean_object* v_b_153_, lean_object* v___y_154_){
_start:
{
size_t v_sz_boxed_155_; size_t v_i_boxed_156_; lean_object* v_res_157_; 
v_sz_boxed_155_ = lean_unbox_usize(v_sz_151_);
lean_dec(v_sz_151_);
v_i_boxed_156_ = lean_unbox_usize(v_i_152_);
lean_dec(v_i_152_);
v_res_157_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__3___redArg(v_as_150_, v_sz_boxed_155_, v_i_boxed_156_, v_b_153_);
lean_dec_ref(v_as_150_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2___redArg(lean_object* v_t_158_, lean_object* v_k_159_){
_start:
{
if (lean_obj_tag(v_t_158_) == 0)
{
lean_object* v_k_160_; lean_object* v_v_161_; lean_object* v_l_162_; lean_object* v_r_163_; uint8_t v___x_164_; 
v_k_160_ = lean_ctor_get(v_t_158_, 1);
v_v_161_ = lean_ctor_get(v_t_158_, 2);
v_l_162_ = lean_ctor_get(v_t_158_, 3);
v_r_163_ = lean_ctor_get(v_t_158_, 4);
v___x_164_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_159_, v_k_160_);
switch(v___x_164_)
{
case 0:
{
v_t_158_ = v_l_162_;
goto _start;
}
case 1:
{
lean_object* v___x_166_; 
lean_inc(v_v_161_);
v___x_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_166_, 0, v_v_161_);
return v___x_166_;
}
default: 
{
v_t_158_ = v_r_163_;
goto _start;
}
}
}
else
{
lean_object* v___x_168_; 
v___x_168_ = lean_box(0);
return v___x_168_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2___redArg___boxed(lean_object* v_t_169_, lean_object* v_k_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2___redArg(v_t_169_, v_k_170_);
lean_dec(v_k_170_);
lean_dec(v_t_169_);
return v_res_171_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__0(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_unsigned_to_nat(0u);
v___x_173_ = lean_mk_empty_array_with_capacity(v___x_172_);
return v___x_173_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__1(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_obj_once(&l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__0, &l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__0_once, _init_l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__0);
v___x_175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
lean_ctor_set(v___x_175_, 1, v___x_174_);
return v___x_175_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__2(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = lean_mk_empty_array_with_capacity(v___x_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce(lean_object* v_code_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_){
_start:
{
switch(lean_obj_tag(v_code_178_))
{
case 0:
{
lean_object* v_decl_185_; lean_object* v_k_186_; lean_object* v___x_187_; 
v_decl_185_ = lean_ctor_get(v_code_178_, 0);
v_k_186_ = lean_ctor_get(v_code_178_, 1);
lean_inc_ref(v_k_186_);
v___x_187_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_k_186_, v_a_179_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_214_; 
v_a_188_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_214_ == 0)
{
v___x_190_ = v___x_187_;
v_isShared_191_ = v_isSharedCheck_214_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_187_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_214_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
uint8_t v___y_193_; size_t v___x_209_; size_t v___x_210_; uint8_t v___x_211_; 
v___x_209_ = lean_ptr_addr(v_k_186_);
v___x_210_ = lean_ptr_addr(v_a_188_);
v___x_211_ = lean_usize_dec_eq(v___x_209_, v___x_210_);
if (v___x_211_ == 0)
{
v___y_193_ = v___x_211_;
goto v___jp_192_;
}
else
{
size_t v___x_212_; uint8_t v___x_213_; 
v___x_212_ = lean_ptr_addr(v_decl_185_);
v___x_213_ = lean_usize_dec_eq(v___x_212_, v___x_212_);
v___y_193_ = v___x_213_;
goto v___jp_192_;
}
v___jp_192_:
{
if (v___y_193_ == 0)
{
lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_203_; 
lean_inc_ref(v_decl_185_);
v_isSharedCheck_203_ = !lean_is_exclusive(v_code_178_);
if (v_isSharedCheck_203_ == 0)
{
lean_object* v_unused_204_; lean_object* v_unused_205_; 
v_unused_204_ = lean_ctor_get(v_code_178_, 1);
lean_dec(v_unused_204_);
v_unused_205_ = lean_ctor_get(v_code_178_, 0);
lean_dec(v_unused_205_);
v___x_195_ = v_code_178_;
v_isShared_196_ = v_isSharedCheck_203_;
goto v_resetjp_194_;
}
else
{
lean_dec(v_code_178_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_203_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_198_; 
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 1, v_a_188_);
v___x_198_ = v___x_195_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_decl_185_);
lean_ctor_set(v_reuseFailAlloc_202_, 1, v_a_188_);
v___x_198_ = v_reuseFailAlloc_202_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
lean_object* v___x_200_; 
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v___x_198_);
v___x_200_ = v___x_190_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v___x_198_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
}
else
{
lean_object* v___x_207_; 
lean_dec(v_a_188_);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v_code_178_);
v___x_207_ = v___x_190_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_code_178_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
}
else
{
lean_dec_ref(v_code_178_);
return v___x_187_;
}
}
case 1:
{
lean_object* v_decl_215_; lean_object* v_k_216_; lean_object* v_params_217_; lean_object* v_type_218_; lean_object* v_value_219_; lean_object* v___x_220_; 
v_decl_215_ = lean_ctor_get(v_code_178_, 0);
v_k_216_ = lean_ctor_get(v_code_178_, 1);
v_params_217_ = lean_ctor_get(v_decl_215_, 2);
v_type_218_ = lean_ctor_get(v_decl_215_, 3);
v_value_219_ = lean_ctor_get(v_decl_215_, 4);
lean_inc_ref(v_value_219_);
v___x_220_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_value_219_, v_a_179_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v_a_221_; uint8_t v___x_222_; lean_object* v___x_223_; 
v_a_221_ = lean_ctor_get(v___x_220_, 0);
lean_inc(v_a_221_);
lean_dec_ref(v___x_220_);
v___x_222_ = 0;
lean_inc_ref(v_params_217_);
lean_inc_ref(v_type_218_);
lean_inc_ref(v_decl_215_);
v___x_223_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_222_, v_decl_215_, v_type_218_, v_params_217_, v_a_221_, v_a_181_, v_a_183_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v_a_224_; lean_object* v___x_225_; 
v_a_224_ = lean_ctor_get(v___x_223_, 0);
lean_inc(v_a_224_);
lean_dec_ref(v___x_223_);
lean_inc_ref(v_k_216_);
v___x_225_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_k_216_, v_a_179_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v_a_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_253_; 
v_a_226_ = lean_ctor_get(v___x_225_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_225_);
if (v_isSharedCheck_253_ == 0)
{
v___x_228_ = v___x_225_;
v_isShared_229_ = v_isSharedCheck_253_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_a_226_);
lean_dec(v___x_225_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_253_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
uint8_t v___y_231_; size_t v___x_247_; size_t v___x_248_; uint8_t v___x_249_; 
v___x_247_ = lean_ptr_addr(v_k_216_);
v___x_248_ = lean_ptr_addr(v_a_226_);
v___x_249_ = lean_usize_dec_eq(v___x_247_, v___x_248_);
if (v___x_249_ == 0)
{
v___y_231_ = v___x_249_;
goto v___jp_230_;
}
else
{
size_t v___x_250_; size_t v___x_251_; uint8_t v___x_252_; 
v___x_250_ = lean_ptr_addr(v_decl_215_);
v___x_251_ = lean_ptr_addr(v_a_224_);
v___x_252_ = lean_usize_dec_eq(v___x_250_, v___x_251_);
v___y_231_ = v___x_252_;
goto v___jp_230_;
}
v___jp_230_:
{
if (v___y_231_ == 0)
{
lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_241_; 
v_isSharedCheck_241_ = !lean_is_exclusive(v_code_178_);
if (v_isSharedCheck_241_ == 0)
{
lean_object* v_unused_242_; lean_object* v_unused_243_; 
v_unused_242_ = lean_ctor_get(v_code_178_, 1);
lean_dec(v_unused_242_);
v_unused_243_ = lean_ctor_get(v_code_178_, 0);
lean_dec(v_unused_243_);
v___x_233_ = v_code_178_;
v_isShared_234_ = v_isSharedCheck_241_;
goto v_resetjp_232_;
}
else
{
lean_dec(v_code_178_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_241_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 1, v_a_226_);
lean_ctor_set(v___x_233_, 0, v_a_224_);
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_a_224_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v_a_226_);
v___x_236_ = v_reuseFailAlloc_240_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_238_; 
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 0, v___x_236_);
v___x_238_ = v___x_228_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
else
{
lean_object* v___x_245_; 
lean_dec(v_a_226_);
lean_dec(v_a_224_);
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 0, v_code_178_);
v___x_245_ = v___x_228_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_code_178_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
}
}
else
{
lean_dec(v_a_224_);
lean_dec_ref(v_code_178_);
return v___x_225_;
}
}
else
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
lean_dec_ref(v_code_178_);
v_a_254_ = lean_ctor_get(v___x_223_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_261_ == 0)
{
v___x_256_ = v___x_223_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_223_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_254_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
else
{
lean_dec_ref(v_code_178_);
return v___x_220_;
}
}
case 2:
{
lean_object* v_decl_262_; lean_object* v_k_263_; lean_object* v_params_264_; lean_object* v_type_265_; lean_object* v_value_266_; lean_object* v___x_267_; 
v_decl_262_ = lean_ctor_get(v_code_178_, 0);
v_k_263_ = lean_ctor_get(v_code_178_, 1);
v_params_264_ = lean_ctor_get(v_decl_262_, 2);
v_type_265_ = lean_ctor_get(v_decl_262_, 3);
v_value_266_ = lean_ctor_get(v_decl_262_, 4);
lean_inc_ref(v_value_266_);
v___x_267_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_value_266_, v_a_179_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_269_; uint8_t v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; size_t v_sz_275_; size_t v___x_276_; lean_object* v___x_277_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
lean_inc_n(v_a_268_, 2);
lean_dec_ref(v___x_267_);
v___x_269_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_270_ = 0;
v___x_271_ = l_Lean_Compiler_LCNF_Code_collectUsed(v___x_270_, v_a_268_, v___x_269_);
lean_inc_ref(v_params_264_);
v___x_272_ = l_Array_reverse___redArg(v_params_264_);
v___x_273_ = lean_obj_once(&l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__1, &l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__1_once, _init_l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__1);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_271_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v_sz_275_ = lean_array_size(v___x_272_);
v___x_276_ = ((size_t)0ULL);
v___x_277_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg(v___x_272_, v_sz_275_, v___x_276_, v___x_274_, v_a_181_, v_a_183_);
lean_dec_ref(v___x_272_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v_a_278_; lean_object* v_snd_279_; lean_object* v_fst_280_; lean_object* v_snd_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; 
v_a_278_ = lean_ctor_get(v___x_277_, 0);
lean_inc(v_a_278_);
lean_dec_ref(v___x_277_);
v_snd_279_ = lean_ctor_get(v_a_278_, 1);
lean_inc(v_snd_279_);
lean_dec(v_a_278_);
v_fst_280_ = lean_ctor_get(v_snd_279_, 0);
lean_inc(v_fst_280_);
v_snd_281_ = lean_ctor_get(v_snd_279_, 1);
lean_inc(v_snd_281_);
lean_dec(v_snd_279_);
v___x_282_ = l_Array_reverse___redArg(v_snd_281_);
v___x_283_ = lean_array_get_size(v___x_282_);
v___x_284_ = lean_array_get_size(v_params_264_);
v___x_285_ = lean_nat_dec_eq(v___x_283_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_334_; 
lean_inc_ref(v_k_263_);
lean_inc_ref(v_decl_262_);
v_isSharedCheck_334_ = !lean_is_exclusive(v_code_178_);
if (v_isSharedCheck_334_ == 0)
{
lean_object* v_unused_335_; lean_object* v_unused_336_; 
v_unused_335_ = lean_ctor_get(v_code_178_, 1);
lean_dec(v_unused_335_);
v_unused_336_ = lean_ctor_get(v_code_178_, 0);
lean_dec(v_unused_336_);
v___x_287_ = v_code_178_;
v_isShared_288_ = v_isSharedCheck_334_;
goto v_resetjp_286_;
}
else
{
lean_dec(v_code_178_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_334_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_289_; 
lean_inc(v_a_268_);
v___x_289_ = l_Lean_Compiler_LCNF_Code_inferType(v___x_270_, v_a_268_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v_a_290_; lean_object* v___x_291_; 
v_a_290_ = lean_ctor_get(v___x_289_, 0);
lean_inc(v_a_290_);
lean_dec_ref(v___x_289_);
lean_inc_ref(v___x_282_);
v___x_291_ = l_Lean_Compiler_LCNF_mkForallParams(v___x_270_, v___x_282_, v_a_290_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
lean_dec(v_a_290_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v_a_292_; lean_object* v___x_293_; 
v_a_292_ = lean_ctor_get(v___x_291_, 0);
lean_inc(v_a_292_);
lean_dec_ref(v___x_291_);
v___x_293_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_270_, v_decl_262_, v_a_292_, v___x_282_, v_a_268_, v_a_181_, v_a_183_);
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v_a_294_; lean_object* v_fvarId_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_a_294_ = lean_ctor_get(v___x_293_, 0);
lean_inc(v_a_294_);
lean_dec_ref(v___x_293_);
v_fvarId_295_ = lean_ctor_get(v_a_294_, 0);
v___x_296_ = l_Array_reverse___redArg(v_fst_280_);
lean_inc(v_a_179_);
lean_inc(v_fvarId_295_);
v___x_297_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_295_, v___x_296_, v_a_179_);
v___x_298_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_k_263_, v___x_297_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
lean_dec(v___x_297_);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_309_; 
v_a_299_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_309_ == 0)
{
v___x_301_ = v___x_298_;
v_isShared_302_ = v_isSharedCheck_309_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v___x_298_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_309_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_304_; 
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 1, v_a_299_);
lean_ctor_set(v___x_287_, 0, v_a_294_);
v___x_304_ = v___x_287_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_a_294_);
lean_ctor_set(v_reuseFailAlloc_308_, 1, v_a_299_);
v___x_304_ = v_reuseFailAlloc_308_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
lean_object* v___x_306_; 
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v___x_304_);
v___x_306_ = v___x_301_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_304_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
else
{
lean_dec(v_a_294_);
lean_del_object(v___x_287_);
return v___x_298_;
}
}
else
{
lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_317_; 
lean_del_object(v___x_287_);
lean_dec(v_fst_280_);
lean_dec_ref(v_k_263_);
v_a_310_ = lean_ctor_get(v___x_293_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_317_ == 0)
{
v___x_312_ = v___x_293_;
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_293_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_310_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
}
else
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_325_; 
lean_del_object(v___x_287_);
lean_dec_ref(v___x_282_);
lean_dec(v_fst_280_);
lean_dec(v_a_268_);
lean_dec_ref(v_k_263_);
lean_dec_ref(v_decl_262_);
v_a_318_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_325_ == 0)
{
v___x_320_ = v___x_291_;
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_291_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
else
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
lean_del_object(v___x_287_);
lean_dec_ref(v___x_282_);
lean_dec(v_fst_280_);
lean_dec(v_a_268_);
lean_dec_ref(v_k_263_);
lean_dec_ref(v_decl_262_);
v_a_326_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_333_ == 0)
{
v___x_328_ = v___x_289_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_289_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_331_; 
if (v_isShared_329_ == 0)
{
v___x_331_ = v___x_328_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_a_326_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
}
else
{
lean_object* v___x_337_; 
lean_dec_ref(v___x_282_);
lean_dec(v_fst_280_);
lean_inc_ref(v_params_264_);
lean_inc_ref(v_type_265_);
lean_inc_ref(v_decl_262_);
v___x_337_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_270_, v_decl_262_, v_type_265_, v_params_264_, v_a_268_, v_a_181_, v_a_183_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_339_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_a_338_);
lean_dec_ref(v___x_337_);
lean_inc_ref(v_k_263_);
v___x_339_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_k_263_, v_a_179_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_367_; 
v_a_340_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_367_ == 0)
{
v___x_342_ = v___x_339_;
v_isShared_343_ = v_isSharedCheck_367_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_339_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_367_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
uint8_t v___y_345_; size_t v___x_361_; size_t v___x_362_; uint8_t v___x_363_; 
v___x_361_ = lean_ptr_addr(v_k_263_);
v___x_362_ = lean_ptr_addr(v_a_340_);
v___x_363_ = lean_usize_dec_eq(v___x_361_, v___x_362_);
if (v___x_363_ == 0)
{
v___y_345_ = v___x_363_;
goto v___jp_344_;
}
else
{
size_t v___x_364_; size_t v___x_365_; uint8_t v___x_366_; 
v___x_364_ = lean_ptr_addr(v_decl_262_);
v___x_365_ = lean_ptr_addr(v_a_338_);
v___x_366_ = lean_usize_dec_eq(v___x_364_, v___x_365_);
v___y_345_ = v___x_366_;
goto v___jp_344_;
}
v___jp_344_:
{
if (v___y_345_ == 0)
{
lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_355_; 
v_isSharedCheck_355_ = !lean_is_exclusive(v_code_178_);
if (v_isSharedCheck_355_ == 0)
{
lean_object* v_unused_356_; lean_object* v_unused_357_; 
v_unused_356_ = lean_ctor_get(v_code_178_, 1);
lean_dec(v_unused_356_);
v_unused_357_ = lean_ctor_get(v_code_178_, 0);
lean_dec(v_unused_357_);
v___x_347_ = v_code_178_;
v_isShared_348_ = v_isSharedCheck_355_;
goto v_resetjp_346_;
}
else
{
lean_dec(v_code_178_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_355_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 1, v_a_340_);
lean_ctor_set(v___x_347_, 0, v_a_338_);
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_338_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v_a_340_);
v___x_350_ = v_reuseFailAlloc_354_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
lean_object* v___x_352_; 
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 0, v___x_350_);
v___x_352_ = v___x_342_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v___x_350_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
else
{
lean_object* v___x_359_; 
lean_dec(v_a_340_);
lean_dec(v_a_338_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 0, v_code_178_);
v___x_359_ = v___x_342_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_code_178_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
else
{
lean_dec(v_a_338_);
lean_dec_ref(v_code_178_);
return v___x_339_;
}
}
else
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
lean_dec_ref(v_code_178_);
v_a_368_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_375_ == 0)
{
v___x_370_ = v___x_337_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_337_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_dec(v_a_268_);
lean_dec_ref(v_code_178_);
v_a_376_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_277_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_277_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
else
{
lean_dec_ref(v_code_178_);
return v___x_267_;
}
}
case 3:
{
lean_object* v_fvarId_384_; lean_object* v_args_385_; lean_object* v___x_386_; 
v_fvarId_384_ = lean_ctor_get(v_code_178_, 0);
v_args_385_ = lean_ctor_get(v_code_178_, 1);
v___x_386_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2___redArg(v_a_179_, v_fvarId_384_);
if (lean_obj_tag(v___x_386_) == 1)
{
lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_419_; 
lean_inc_ref(v_args_385_);
lean_inc(v_fvarId_384_);
v_isSharedCheck_419_ = !lean_is_exclusive(v_code_178_);
if (v_isSharedCheck_419_ == 0)
{
lean_object* v_unused_420_; lean_object* v_unused_421_; 
v_unused_420_ = lean_ctor_get(v_code_178_, 1);
lean_dec(v_unused_420_);
v_unused_421_ = lean_ctor_get(v_code_178_, 0);
lean_dec(v_unused_421_);
v___x_388_ = v_code_178_;
v_isShared_389_ = v_isSharedCheck_419_;
goto v_resetjp_387_;
}
else
{
lean_dec(v_code_178_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_419_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v_val_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; size_t v_sz_396_; size_t v___x_397_; lean_object* v___x_398_; 
v_val_390_ = lean_ctor_get(v___x_386_, 0);
lean_inc(v_val_390_);
lean_dec_ref(v___x_386_);
v___x_391_ = lean_unsigned_to_nat(0u);
v___x_392_ = lean_obj_once(&l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__2, &l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__2_once, _init_l_Lean_Compiler_LCNF_ReduceJpArity_reduce___closed__2);
v___x_393_ = lean_array_get_size(v_args_385_);
v___x_394_ = l_Array_toSubarray___redArg(v_args_385_, v___x_391_, v___x_393_);
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_392_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v_sz_396_ = lean_array_size(v_val_390_);
v___x_397_ = ((size_t)0ULL);
v___x_398_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__3___redArg(v_val_390_, v_sz_396_, v___x_397_, v___x_395_);
lean_dec(v_val_390_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_410_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_410_ == 0)
{
v___x_401_ = v___x_398_;
v_isShared_402_ = v_isSharedCheck_410_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_398_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_410_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v_fst_403_; lean_object* v___x_405_; 
v_fst_403_ = lean_ctor_get(v_a_399_, 0);
lean_inc(v_fst_403_);
lean_dec(v_a_399_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 1, v_fst_403_);
v___x_405_ = v___x_388_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_fvarId_384_);
lean_ctor_set(v_reuseFailAlloc_409_, 1, v_fst_403_);
v___x_405_ = v_reuseFailAlloc_409_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
lean_object* v___x_407_; 
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 0, v___x_405_);
v___x_407_ = v___x_401_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_405_);
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
lean_object* v_a_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_418_; 
lean_del_object(v___x_388_);
lean_dec(v_fvarId_384_);
v_a_411_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_418_ == 0)
{
v___x_413_ = v___x_398_;
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_a_411_);
lean_dec(v___x_398_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_416_; 
if (v_isShared_414_ == 0)
{
v___x_416_ = v___x_413_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_a_411_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
}
}
else
{
lean_object* v___x_422_; 
lean_dec(v___x_386_);
v___x_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_422_, 0, v_code_178_);
return v___x_422_;
}
}
case 4:
{
lean_object* v_cases_423_; lean_object* v_typeName_424_; lean_object* v_resultType_425_; lean_object* v_discr_426_; lean_object* v_alts_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_466_; 
v_cases_423_ = lean_ctor_get(v_code_178_, 0);
lean_inc_ref(v_cases_423_);
v_typeName_424_ = lean_ctor_get(v_cases_423_, 0);
v_resultType_425_ = lean_ctor_get(v_cases_423_, 1);
v_discr_426_ = lean_ctor_get(v_cases_423_, 2);
v_alts_427_ = lean_ctor_get(v_cases_423_, 3);
v_isSharedCheck_466_ = !lean_is_exclusive(v_cases_423_);
if (v_isSharedCheck_466_ == 0)
{
v___x_429_ = v_cases_423_;
v_isShared_430_ = v_isSharedCheck_466_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_alts_427_);
lean_inc(v_discr_426_);
lean_inc(v_resultType_425_);
lean_inc(v_typeName_424_);
lean_dec(v_cases_423_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_466_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_431_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_427_);
v___x_432_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__4(v___x_431_, v_alts_427_, v_a_179_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_457_; 
v_a_433_ = lean_ctor_get(v___x_432_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_457_ == 0)
{
v___x_435_ = v___x_432_;
v_isShared_436_ = v_isSharedCheck_457_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_432_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_457_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
size_t v___x_437_; size_t v___x_438_; uint8_t v___x_439_; 
v___x_437_ = lean_ptr_addr(v_alts_427_);
lean_dec_ref(v_alts_427_);
v___x_438_ = lean_ptr_addr(v_a_433_);
v___x_439_ = lean_usize_dec_eq(v___x_437_, v___x_438_);
if (v___x_439_ == 0)
{
lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_452_; 
v_isSharedCheck_452_ = !lean_is_exclusive(v_code_178_);
if (v_isSharedCheck_452_ == 0)
{
lean_object* v_unused_453_; 
v_unused_453_ = lean_ctor_get(v_code_178_, 0);
lean_dec(v_unused_453_);
v___x_441_ = v_code_178_;
v_isShared_442_ = v_isSharedCheck_452_;
goto v_resetjp_440_;
}
else
{
lean_dec(v_code_178_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_452_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 3, v_a_433_);
v___x_444_ = v___x_429_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_typeName_424_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v_resultType_425_);
lean_ctor_set(v_reuseFailAlloc_451_, 2, v_discr_426_);
lean_ctor_set(v_reuseFailAlloc_451_, 3, v_a_433_);
v___x_444_ = v_reuseFailAlloc_451_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
lean_object* v___x_446_; 
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v___x_444_);
v___x_446_ = v___x_441_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v___x_444_);
v___x_446_ = v_reuseFailAlloc_450_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
lean_object* v___x_448_; 
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 0, v___x_446_);
v___x_448_ = v___x_435_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
}
else
{
lean_object* v___x_455_; 
lean_dec(v_a_433_);
lean_del_object(v___x_429_);
lean_dec(v_discr_426_);
lean_dec_ref(v_resultType_425_);
lean_dec(v_typeName_424_);
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 0, v_code_178_);
v___x_455_ = v___x_435_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_code_178_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
lean_del_object(v___x_429_);
lean_dec_ref(v_alts_427_);
lean_dec(v_discr_426_);
lean_dec_ref(v_resultType_425_);
lean_dec(v_typeName_424_);
lean_dec_ref(v_code_178_);
v_a_458_ = lean_ctor_get(v___x_432_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_432_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_432_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
}
default: 
{
lean_object* v___x_467_; 
v___x_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_467_, 0, v_code_178_);
return v___x_467_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__4(lean_object* v_i_468_, lean_object* v_as_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_476_ = lean_array_get_size(v_as_469_);
v___x_477_ = lean_nat_dec_lt(v_i_468_, v___x_476_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; 
lean_dec(v_i_468_);
v___x_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_478_, 0, v_as_469_);
return v___x_478_;
}
else
{
lean_object* v_a_479_; lean_object* v___y_481_; 
v_a_479_ = lean_array_fget_borrowed(v_as_469_, v_i_468_);
switch(lean_obj_tag(v_a_479_))
{
case 0:
{
lean_object* v_code_503_; 
v_code_503_ = lean_ctor_get(v_a_479_, 2);
lean_inc_ref(v_code_503_);
v___y_481_ = v_code_503_;
goto v___jp_480_;
}
case 1:
{
lean_object* v_code_504_; 
v_code_504_ = lean_ctor_get(v_a_479_, 1);
lean_inc_ref(v_code_504_);
v___y_481_ = v_code_504_;
goto v___jp_480_;
}
default: 
{
lean_object* v_code_505_; 
v_code_505_ = lean_ctor_get(v_a_479_, 0);
lean_inc_ref(v_code_505_);
v___y_481_ = v_code_505_;
goto v___jp_480_;
}
}
v___jp_480_:
{
lean_object* v___x_482_; 
v___x_482_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v___y_481_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; lean_object* v___x_484_; size_t v___x_485_; size_t v___x_486_; uint8_t v___x_487_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_a_483_);
lean_dec_ref(v___x_482_);
lean_inc(v_a_479_);
v___x_484_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_479_, v_a_483_);
v___x_485_ = lean_ptr_addr(v_a_479_);
v___x_486_ = lean_ptr_addr(v___x_484_);
v___x_487_ = lean_usize_dec_eq(v___x_485_, v___x_486_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = lean_unsigned_to_nat(1u);
v___x_489_ = lean_nat_add(v_i_468_, v___x_488_);
v___x_490_ = lean_array_fset(v_as_469_, v_i_468_, v___x_484_);
lean_dec(v_i_468_);
v_i_468_ = v___x_489_;
v_as_469_ = v___x_490_;
goto _start;
}
else
{
lean_object* v___x_492_; lean_object* v___x_493_; 
lean_dec_ref(v___x_484_);
v___x_492_ = lean_unsigned_to_nat(1u);
v___x_493_ = lean_nat_add(v_i_468_, v___x_492_);
lean_dec(v_i_468_);
v_i_468_ = v___x_493_;
goto _start;
}
}
else
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_502_; 
lean_dec_ref(v_as_469_);
lean_dec(v_i_468_);
v_a_495_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_502_ == 0)
{
v___x_497_ = v___x_482_;
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v___x_482_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_495_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__4___boxed(lean_object* v_i_506_, lean_object* v_as_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__4(v_i_506_, v_as_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v___y_508_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ReduceJpArity_reduce___boxed(lean_object* v_code_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lean_Compiler_LCNF_ReduceJpArity_reduce(v_code_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_);
lean_dec(v_a_520_);
lean_dec_ref(v_a_519_);
lean_dec(v_a_518_);
lean_dec_ref(v_a_517_);
lean_dec(v_a_516_);
return v_res_522_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0(lean_object* v_00_u03b2_523_, lean_object* v_m_524_, lean_object* v_a_525_){
_start:
{
uint8_t v___x_526_; 
v___x_526_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___redArg(v_m_524_, v_a_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0___boxed(lean_object* v_00_u03b2_527_, lean_object* v_m_528_, lean_object* v_a_529_){
_start:
{
uint8_t v_res_530_; lean_object* v_r_531_; 
v_res_530_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0(v_00_u03b2_527_, v_m_528_, v_a_529_);
lean_dec(v_a_529_);
lean_dec_ref(v_m_528_);
v_r_531_ = lean_box(v_res_530_);
return v_r_531_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1(lean_object* v_as_532_, size_t v_sz_533_, size_t v_i_534_, lean_object* v_b_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___redArg(v_as_532_, v_sz_533_, v_i_534_, v_b_535_, v___y_538_, v___y_540_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1___boxed(lean_object* v_as_543_, lean_object* v_sz_544_, lean_object* v_i_545_, lean_object* v_b_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_){
_start:
{
size_t v_sz_boxed_553_; size_t v_i_boxed_554_; lean_object* v_res_555_; 
v_sz_boxed_553_ = lean_unbox_usize(v_sz_544_);
lean_dec(v_sz_544_);
v_i_boxed_554_ = lean_unbox_usize(v_i_545_);
lean_dec(v_i_545_);
v_res_555_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__1(v_as_543_, v_sz_boxed_553_, v_i_boxed_554_, v_b_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_);
lean_dec(v___y_551_);
lean_dec_ref(v___y_550_);
lean_dec(v___y_549_);
lean_dec_ref(v___y_548_);
lean_dec(v___y_547_);
lean_dec_ref(v_as_543_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2(lean_object* v_00_u03b4_556_, lean_object* v_t_557_, lean_object* v_k_558_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2___redArg(v_t_557_, v_k_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2___boxed(lean_object* v_00_u03b4_560_, lean_object* v_t_561_, lean_object* v_k_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__2(v_00_u03b4_560_, v_t_561_, v_k_562_);
lean_dec(v_k_562_);
lean_dec(v_t_561_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__3(lean_object* v_as_564_, size_t v_sz_565_, size_t v_i_566_, lean_object* v_b_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__3___redArg(v_as_564_, v_sz_565_, v_i_566_, v_b_567_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__3___boxed(lean_object* v_as_575_, lean_object* v_sz_576_, lean_object* v_i_577_, lean_object* v_b_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
size_t v_sz_boxed_585_; size_t v_i_boxed_586_; lean_object* v_res_587_; 
v_sz_boxed_585_ = lean_unbox_usize(v_sz_576_);
lean_dec(v_sz_576_);
v_i_boxed_586_ = lean_unbox_usize(v_i_577_);
lean_dec(v_i_577_);
v_res_587_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__3(v_as_575_, v_sz_boxed_585_, v_i_boxed_586_, v_b_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
lean_dec_ref(v_as_575_);
return v_res_587_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0_spec__0(lean_object* v_00_u03b2_588_, lean_object* v_a_589_, lean_object* v_x_590_){
_start:
{
uint8_t v___x_591_; 
v___x_591_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0_spec__0___redArg(v_a_589_, v_x_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0_spec__0___boxed(lean_object* v_00_u03b2_592_, lean_object* v_a_593_, lean_object* v_x_594_){
_start:
{
uint8_t v_res_595_; lean_object* v_r_596_; 
v_res_595_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_ReduceJpArity_reduce_spec__0_spec__0(v_00_u03b2_592_, v_a_593_, v_x_594_);
lean_dec(v_x_594_);
lean_dec(v_a_593_);
v_r_596_ = lean_box(v_res_595_);
return v_r_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg(lean_object* v_f_597_, lean_object* v_v_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
if (lean_obj_tag(v_v_598_) == 0)
{
lean_object* v_code_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_629_; 
v_code_605_ = lean_ctor_get(v_v_598_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v_v_598_);
if (v_isSharedCheck_629_ == 0)
{
v___x_607_ = v_v_598_;
v_isShared_608_ = v_isSharedCheck_629_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_code_605_);
lean_dec(v_v_598_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_629_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; 
lean_inc(v___y_603_);
lean_inc_ref(v___y_602_);
lean_inc(v___y_601_);
lean_inc_ref(v___y_600_);
lean_inc(v___y_599_);
v___x_609_ = lean_apply_7(v_f_597_, v_code_605_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, lean_box(0));
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_620_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_620_ == 0)
{
v___x_612_ = v___x_609_;
v_isShared_613_ = v_isSharedCheck_620_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_609_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_620_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v_a_610_);
v___x_615_ = v___x_607_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_619_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
lean_object* v___x_617_; 
if (v_isShared_613_ == 0)
{
lean_ctor_set(v___x_612_, 0, v___x_615_);
v___x_617_ = v___x_612_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_615_);
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
else
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
lean_del_object(v___x_607_);
v_a_621_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_609_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_609_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
}
else
{
lean_object* v___x_630_; 
lean_dec_ref(v_f_597_);
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v_v_598_);
return v___x_630_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg___boxed(lean_object* v_f_631_, lean_object* v_v_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg(v_f_631_, v_v_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
lean_dec(v___y_637_);
lean_dec_ref(v___y_636_);
lean_dec(v___y_635_);
lean_dec_ref(v___y_634_);
lean_dec(v___y_633_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0(uint8_t v_pu_640_, lean_object* v_f_641_, lean_object* v_v_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg(v_f_641_, v_v_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_, v___y_647_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___boxed(lean_object* v_pu_650_, lean_object* v_f_651_, lean_object* v_v_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
uint8_t v_pu_boxed_659_; lean_object* v_res_660_; 
v_pu_boxed_659_ = lean_unbox(v_pu_650_);
v_res_660_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0(v_pu_boxed_659_, v_f_651_, v_v_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
return v_res_660_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_reduceJpArity___closed__0(void){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ReduceJpArity_reduce___boxed), 7, 0);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceJpArity(lean_object* v_decl_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_toSignature_668_; lean_object* v_value_669_; uint8_t v_recursive_670_; lean_object* v_inlineAttr_x3f_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_697_; 
v_toSignature_668_ = lean_ctor_get(v_decl_662_, 0);
v_value_669_ = lean_ctor_get(v_decl_662_, 1);
v_recursive_670_ = lean_ctor_get_uint8(v_decl_662_, sizeof(void*)*3);
v_inlineAttr_x3f_671_ = lean_ctor_get(v_decl_662_, 2);
v_isSharedCheck_697_ = !lean_is_exclusive(v_decl_662_);
if (v_isSharedCheck_697_ == 0)
{
v___x_673_ = v_decl_662_;
v_isShared_674_ = v_isSharedCheck_697_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_inlineAttr_x3f_671_);
lean_inc(v_value_669_);
lean_inc(v_toSignature_668_);
lean_dec(v_decl_662_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_697_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_675_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_reduceJpArity___closed__0, &l_Lean_Compiler_LCNF_Decl_reduceJpArity___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_reduceJpArity___closed__0);
v___x_676_ = lean_box(1);
v___x_677_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceJpArity_spec__0___redArg(v___x_675_, v_value_669_, v___x_676_, v_a_663_, v_a_664_, v_a_665_, v_a_666_);
if (lean_obj_tag(v___x_677_) == 0)
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_688_; 
v_a_678_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_688_ == 0)
{
v___x_680_ = v___x_677_;
v_isShared_681_ = v_isSharedCheck_688_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_677_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_688_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 1, v_a_678_);
v___x_683_ = v___x_673_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_toSignature_668_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v_a_678_);
lean_ctor_set(v_reuseFailAlloc_687_, 2, v_inlineAttr_x3f_671_);
lean_ctor_set_uint8(v_reuseFailAlloc_687_, sizeof(void*)*3, v_recursive_670_);
v___x_683_ = v_reuseFailAlloc_687_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
lean_object* v___x_685_; 
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 0, v___x_683_);
v___x_685_ = v___x_680_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_683_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
lean_del_object(v___x_673_);
lean_dec(v_inlineAttr_x3f_671_);
lean_dec_ref(v_toSignature_668_);
v_a_689_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___x_677_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_677_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_689_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceJpArity___boxed(lean_object* v_decl_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lean_Compiler_LCNF_Decl_reduceJpArity(v_decl_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
lean_dec(v_a_702_);
lean_dec_ref(v_a_701_);
lean_dec(v_a_700_);
lean_dec_ref(v_a_699_);
return v_res_704_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0(void){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = lean_mk_string_unchecked("reduceJpArity", 13, 13);
return v___x_705_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__1(void){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = lean_obj_once(&l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0, &l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0);
v___x_707_ = l_Lean_Name_mkStr1(v___x_706_);
return v___x_707_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__2(void){
_start:
{
lean_object* v___x_708_; 
v___x_708_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_reduceJpArity___boxed), 6, 0);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0(uint8_t v_phase_709_, lean_object* v_h_710_){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_711_ = lean_obj_once(&l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__1, &l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__1_once, _init_l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__1);
v___x_712_ = lean_obj_once(&l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__2, &l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__2_once, _init_l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__2);
v___x_713_ = lean_unsigned_to_nat(0u);
v___x_714_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_711_, v_phase_709_, v___x_712_, v___x_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity___lam__0___boxed(lean_object* v_phase_715_, lean_object* v_h_716_){
_start:
{
uint8_t v_phase_boxed_717_; lean_object* v_res_718_; 
v_phase_boxed_717_ = lean_unbox(v_phase_715_);
v_res_718_ = l_Lean_Compiler_LCNF_reduceJpArity___lam__0(v_phase_boxed_717_, v_h_716_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity(uint8_t v_phase_719_){
_start:
{
lean_object* v___x_720_; lean_object* v___f_721_; lean_object* v___x_722_; uint8_t v___x_723_; lean_object* v___x_724_; 
v___x_720_ = lean_box(v_phase_719_);
v___f_721_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_reduceJpArity___lam__0___boxed), 2, 1);
lean_closure_set(v___f_721_, 0, v___x_720_);
v___x_722_ = l_Lean_Compiler_LCNF_instInhabitedPass;
v___x_723_ = 0;
v___x_724_ = l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(v___x_722_, v_phase_719_, v___x_723_, v___f_721_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceJpArity___boxed(lean_object* v_phase_725_){
_start:
{
uint8_t v_phase_boxed_726_; lean_object* v_res_727_; 
v_phase_boxed_726_ = lean_unbox(v_phase_725_);
v_res_727_ = l_Lean_Compiler_LCNF_reduceJpArity(v_phase_boxed_726_);
return v_res_727_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = lean_mk_string_unchecked("Compiler", 8, 8);
return v___x_728_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_729_ = lean_obj_once(&l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0, &l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_reduceJpArity___lam__0___closed__0);
v___x_730_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_731_ = l_Lean_Name_mkStr2(v___x_730_, v___x_729_);
return v___x_731_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_732_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_733_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_734_ = lean_box(0);
v___x_735_ = l_Lean_Name_str___override(v___x_734_, v___x_733_);
return v___x_735_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_736_; 
v___x_736_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_736_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_737_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_738_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_739_ = l_Lean_Name_str___override(v___x_738_, v___x_737_);
return v___x_739_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_740_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_741_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_742_ = l_Lean_Name_str___override(v___x_741_, v___x_740_);
return v___x_742_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = lean_mk_string_unchecked("LCNF", 4, 4);
return v___x_743_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_744_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_745_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_746_ = l_Lean_Name_str___override(v___x_745_, v___x_744_);
return v___x_746_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = lean_mk_string_unchecked("ReduceJpArity", 13, 13);
return v___x_747_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_748_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_749_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_750_ = l_Lean_Name_str___override(v___x_749_, v___x_748_);
return v___x_750_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_751_ = lean_unsigned_to_nat(0u);
v___x_752_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_753_ = l_Lean_Name_num___override(v___x_752_, v___x_751_);
return v___x_753_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_754_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_755_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_756_ = l_Lean_Name_str___override(v___x_755_, v___x_754_);
return v___x_756_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_757_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_758_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_759_ = l_Lean_Name_str___override(v___x_758_, v___x_757_);
return v___x_759_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_760_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_761_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_762_ = l_Lean_Name_str___override(v___x_761_, v___x_760_);
return v___x_762_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_763_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_764_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_765_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_766_ = l_Lean_Name_str___override(v___x_765_, v___x_764_);
return v___x_766_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_767_; 
v___x_767_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_767_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_768_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_769_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_770_ = l_Lean_Name_str___override(v___x_769_, v___x_768_);
return v___x_770_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_771_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_772_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_773_ = l_Lean_Name_str___override(v___x_772_, v___x_771_);
return v___x_773_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_774_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_775_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_776_ = l_Lean_Name_str___override(v___x_775_, v___x_774_);
return v___x_776_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_777_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_778_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_779_ = l_Lean_Name_str___override(v___x_778_, v___x_777_);
return v___x_779_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_780_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_781_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_782_ = l_Lean_Name_str___override(v___x_781_, v___x_780_);
return v___x_782_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_783_ = lean_unsigned_to_nat(2781867148u);
v___x_784_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_785_ = l_Lean_Name_num___override(v___x_784_, v___x_783_);
return v___x_785_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_786_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_787_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_788_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_789_ = l_Lean_Name_str___override(v___x_788_, v___x_787_);
return v___x_789_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_790_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_791_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_792_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_793_ = l_Lean_Name_str___override(v___x_792_, v___x_791_);
return v___x_793_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_794_ = lean_unsigned_to_nat(2u);
v___x_795_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_796_ = l_Lean_Name_num___override(v___x_795_, v___x_794_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_798_; uint8_t v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_798_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_799_ = 1;
v___x_800_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_);
v___x_801_ = l_Lean_registerTraceClass(v___x_798_, v___x_799_, v___x_800_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2____boxed(lean_object* v_a_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_();
return v_res_803_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ReduceJpArity(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ReduceJpArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceJpArity_2781867148____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ReduceJpArity(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ReduceJpArity(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ReduceJpArity(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ReduceJpArity(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ReduceJpArity(builtin);
}
#ifdef __cplusplus
}
#endif
