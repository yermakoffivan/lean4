// Lean compiler output
// Module: Lean.Elab.Tactic.Meta
// Imports: public import Lean.Elab.SyntheticMVars
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
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkAuxDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLocalContext_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_LocalContext_mkLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
lean_object* lean_sharecommon_quick(lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_pruneSolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__0;
static lean_once_cell_t l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__1;
static lean_once_cell_t l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__2;
static lean_once_cell_t l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__3;
static lean_once_cell_t l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__4;
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__8_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__0(lean_object* v_tacticCode_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_Elab_Tactic_evalTactic(v_tacticCode_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_12_; 
lean_dec_ref(v___x_11_);
v___x_12_ = l_Lean_Elab_Tactic_pruneSolvedGoals(v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_);
return v___x_12_;
}
else
{
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__0___boxed(lean_object* v_tacticCode_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Elab_runTactic___lam__0(v_tacticCode_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
lean_dec(v___y_17_);
lean_dec_ref(v___y_16_);
lean_dec(v___y_15_);
lean_dec_ref(v___y_14_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__1(lean_object* v___x_24_, uint8_t v___x_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_24_, v___x_25_, v___y_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__1___boxed(lean_object* v___x_34_, lean_object* v___x_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
uint8_t v___x_5271__boxed_43_; lean_object* v_res_44_; 
v___x_5271__boxed_43_ = lean_unbox(v___x_35_);
v_res_44_ = l_Lean_Elab_runTactic___lam__1(v___x_34_, v___x_5271__boxed_43_, v___y_36_, v___y_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
lean_dec(v___y_37_);
lean_dec_ref(v___y_36_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(lean_object* v_e_45_, lean_object* v___y_46_, lean_object* v___y_47_){
_start:
{
uint8_t v___x_49_; 
v___x_49_ = l_Lean_Expr_hasMVar(v_e_45_);
if (v___x_49_ == 0)
{
lean_object* v___x_50_; 
v___x_50_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_50_, 0, v_e_45_);
return v___x_50_;
}
else
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v_mctx_53_; lean_object* v___x_54_; lean_object* v_fst_55_; lean_object* v_snd_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v_cache_59_; lean_object* v_zetaDeltaFVarIds_60_; lean_object* v_postponed_61_; lean_object* v_diag_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_71_; 
v___x_51_ = lean_st_ref_get(v___y_47_);
lean_dec(v___x_51_);
v___x_52_ = lean_st_ref_get(v___y_46_);
v_mctx_53_ = lean_ctor_get(v___x_52_, 0);
lean_inc_ref(v_mctx_53_);
lean_dec(v___x_52_);
v___x_54_ = l_Lean_instantiateMVarsCore(v_mctx_53_, v_e_45_);
v_fst_55_ = lean_ctor_get(v___x_54_, 0);
lean_inc(v_fst_55_);
v_snd_56_ = lean_ctor_get(v___x_54_, 1);
lean_inc(v_snd_56_);
lean_dec_ref(v___x_54_);
v___x_57_ = lean_st_ref_get(v___y_47_);
lean_dec(v___x_57_);
v___x_58_ = lean_st_ref_take(v___y_46_);
v_cache_59_ = lean_ctor_get(v___x_58_, 1);
v_zetaDeltaFVarIds_60_ = lean_ctor_get(v___x_58_, 2);
v_postponed_61_ = lean_ctor_get(v___x_58_, 3);
v_diag_62_ = lean_ctor_get(v___x_58_, 4);
v_isSharedCheck_71_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_71_ == 0)
{
lean_object* v_unused_72_; 
v_unused_72_ = lean_ctor_get(v___x_58_, 0);
lean_dec(v_unused_72_);
v___x_64_ = v___x_58_;
v_isShared_65_ = v_isSharedCheck_71_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_diag_62_);
lean_inc(v_postponed_61_);
lean_inc(v_zetaDeltaFVarIds_60_);
lean_inc(v_cache_59_);
lean_dec(v___x_58_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_71_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v___x_67_; 
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 0, v_snd_56_);
v___x_67_ = v___x_64_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v_snd_56_);
lean_ctor_set(v_reuseFailAlloc_70_, 1, v_cache_59_);
lean_ctor_set(v_reuseFailAlloc_70_, 2, v_zetaDeltaFVarIds_60_);
lean_ctor_set(v_reuseFailAlloc_70_, 3, v_postponed_61_);
lean_ctor_set(v_reuseFailAlloc_70_, 4, v_diag_62_);
v___x_67_ = v_reuseFailAlloc_70_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_st_ref_set(v___y_46_, v___x_67_);
v___x_69_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_69_, 0, v_fst_55_);
return v___x_69_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg___boxed(lean_object* v_e_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_e_73_, v___y_74_, v___y_75_);
lean_dec(v___y_75_);
lean_dec(v___y_74_);
return v_res_77_;
}
}
static lean_object* _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_instMonadEIO(lean_box(0));
return v___x_78_;
}
}
static lean_object* _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__1(void){
_start:
{
lean_object* v___f_79_; 
v___f_79_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_79_;
}
}
static lean_object* _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__2(void){
_start:
{
lean_object* v___f_80_; 
v___f_80_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_80_;
}
}
static lean_object* _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__3(void){
_start:
{
lean_object* v___f_81_; 
v___f_81_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_81_;
}
}
static lean_object* _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__4(void){
_start:
{
lean_object* v___f_82_; 
v___f_82_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_82_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2(lean_object* v_msg_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v_toApplicative_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_152_; 
v___x_89_ = lean_obj_once(&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__0, &l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__0_once, _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__0);
v___x_90_ = l_StateRefT_x27_instMonad___redArg(v___x_89_);
v_toApplicative_91_ = lean_ctor_get(v___x_90_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_90_);
if (v_isSharedCheck_152_ == 0)
{
lean_object* v_unused_153_; 
v_unused_153_ = lean_ctor_get(v___x_90_, 1);
lean_dec(v_unused_153_);
v___x_93_ = v___x_90_;
v_isShared_94_ = v_isSharedCheck_152_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_toApplicative_91_);
lean_dec(v___x_90_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_152_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v_toFunctor_95_; lean_object* v_toSeq_96_; lean_object* v_toSeqLeft_97_; lean_object* v_toSeqRight_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_150_; 
v_toFunctor_95_ = lean_ctor_get(v_toApplicative_91_, 0);
v_toSeq_96_ = lean_ctor_get(v_toApplicative_91_, 2);
v_toSeqLeft_97_ = lean_ctor_get(v_toApplicative_91_, 3);
v_toSeqRight_98_ = lean_ctor_get(v_toApplicative_91_, 4);
v_isSharedCheck_150_ = !lean_is_exclusive(v_toApplicative_91_);
if (v_isSharedCheck_150_ == 0)
{
lean_object* v_unused_151_; 
v_unused_151_ = lean_ctor_get(v_toApplicative_91_, 1);
lean_dec(v_unused_151_);
v___x_100_ = v_toApplicative_91_;
v_isShared_101_ = v_isSharedCheck_150_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_toSeqRight_98_);
lean_inc(v_toSeqLeft_97_);
lean_inc(v_toSeq_96_);
lean_inc(v_toFunctor_95_);
lean_dec(v_toApplicative_91_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_150_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___f_102_; lean_object* v___f_103_; lean_object* v___f_104_; lean_object* v___f_105_; lean_object* v___x_106_; lean_object* v___f_107_; lean_object* v___f_108_; lean_object* v___f_109_; lean_object* v___x_111_; 
v___f_102_ = lean_obj_once(&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__1, &l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__1_once, _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__1);
v___f_103_ = lean_obj_once(&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__2, &l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__2_once, _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__2);
lean_inc_ref(v_toFunctor_95_);
v___f_104_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_104_, 0, v_toFunctor_95_);
v___f_105_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_105_, 0, v_toFunctor_95_);
v___x_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_106_, 0, v___f_104_);
lean_ctor_set(v___x_106_, 1, v___f_105_);
v___f_107_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_107_, 0, v_toSeqRight_98_);
v___f_108_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_108_, 0, v_toSeqLeft_97_);
v___f_109_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_109_, 0, v_toSeq_96_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 4, v___f_107_);
lean_ctor_set(v___x_100_, 3, v___f_108_);
lean_ctor_set(v___x_100_, 2, v___f_109_);
lean_ctor_set(v___x_100_, 1, v___f_102_);
lean_ctor_set(v___x_100_, 0, v___x_106_);
v___x_111_ = v___x_100_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v___x_106_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v___f_102_);
lean_ctor_set(v_reuseFailAlloc_149_, 2, v___f_109_);
lean_ctor_set(v_reuseFailAlloc_149_, 3, v___f_108_);
lean_ctor_set(v_reuseFailAlloc_149_, 4, v___f_107_);
v___x_111_ = v_reuseFailAlloc_149_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
lean_object* v___x_113_; 
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 1, v___f_103_);
lean_ctor_set(v___x_93_, 0, v___x_111_);
v___x_113_ = v___x_93_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_111_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v___f_103_);
v___x_113_ = v_reuseFailAlloc_148_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
lean_object* v___x_114_; lean_object* v_toApplicative_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_146_; 
v___x_114_ = l_StateRefT_x27_instMonad___redArg(v___x_113_);
v_toApplicative_115_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_146_ == 0)
{
lean_object* v_unused_147_; 
v_unused_147_ = lean_ctor_get(v___x_114_, 1);
lean_dec(v_unused_147_);
v___x_117_ = v___x_114_;
v_isShared_118_ = v_isSharedCheck_146_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_toApplicative_115_);
lean_dec(v___x_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_146_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v_toFunctor_119_; lean_object* v_toSeq_120_; lean_object* v_toSeqLeft_121_; lean_object* v_toSeqRight_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_144_; 
v_toFunctor_119_ = lean_ctor_get(v_toApplicative_115_, 0);
v_toSeq_120_ = lean_ctor_get(v_toApplicative_115_, 2);
v_toSeqLeft_121_ = lean_ctor_get(v_toApplicative_115_, 3);
v_toSeqRight_122_ = lean_ctor_get(v_toApplicative_115_, 4);
v_isSharedCheck_144_ = !lean_is_exclusive(v_toApplicative_115_);
if (v_isSharedCheck_144_ == 0)
{
lean_object* v_unused_145_; 
v_unused_145_ = lean_ctor_get(v_toApplicative_115_, 1);
lean_dec(v_unused_145_);
v___x_124_ = v_toApplicative_115_;
v_isShared_125_ = v_isSharedCheck_144_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_toSeqRight_122_);
lean_inc(v_toSeqLeft_121_);
lean_inc(v_toSeq_120_);
lean_inc(v_toFunctor_119_);
lean_dec(v_toApplicative_115_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_144_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___f_126_; lean_object* v___f_127_; lean_object* v___f_128_; lean_object* v___f_129_; lean_object* v___x_130_; lean_object* v___f_131_; lean_object* v___f_132_; lean_object* v___f_133_; lean_object* v___x_135_; 
v___f_126_ = lean_obj_once(&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__3, &l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__3_once, _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__3);
v___f_127_ = lean_obj_once(&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__4, &l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__4_once, _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___closed__4);
lean_inc_ref(v_toFunctor_119_);
v___f_128_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_128_, 0, v_toFunctor_119_);
v___f_129_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_129_, 0, v_toFunctor_119_);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___f_128_);
lean_ctor_set(v___x_130_, 1, v___f_129_);
v___f_131_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_131_, 0, v_toSeqRight_122_);
v___f_132_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_132_, 0, v_toSeqLeft_121_);
v___f_133_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_133_, 0, v_toSeq_120_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 4, v___f_131_);
lean_ctor_set(v___x_124_, 3, v___f_132_);
lean_ctor_set(v___x_124_, 2, v___f_133_);
lean_ctor_set(v___x_124_, 1, v___f_126_);
lean_ctor_set(v___x_124_, 0, v___x_130_);
v___x_135_ = v___x_124_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v___x_130_);
lean_ctor_set(v_reuseFailAlloc_143_, 1, v___f_126_);
lean_ctor_set(v_reuseFailAlloc_143_, 2, v___f_133_);
lean_ctor_set(v_reuseFailAlloc_143_, 3, v___f_132_);
lean_ctor_set(v_reuseFailAlloc_143_, 4, v___f_131_);
v___x_135_ = v_reuseFailAlloc_143_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
lean_object* v___x_137_; 
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 1, v___f_127_);
lean_ctor_set(v___x_117_, 0, v___x_135_);
v___x_137_ = v___x_117_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v___x_135_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v___f_127_);
v___x_137_ = v_reuseFailAlloc_142_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_2573__overap_140_; lean_object* v___x_141_; 
v___x_138_ = l_Lean_instInhabitedLocalContext_default;
v___x_139_ = l_instInhabitedOfMonad___redArg(v___x_137_, v___x_138_);
v___x_2573__overap_140_ = lean_panic_fn_borrowed(v___x_139_, v_msg_83_);
lean_dec(v___x_139_);
lean_inc(v___y_87_);
lean_inc_ref(v___y_86_);
lean_inc(v___y_85_);
lean_inc_ref(v___y_84_);
v___x_141_ = lean_apply_5(v___x_2573__overap_140_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, lean_box(0));
return v___x_141_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___boxed(lean_object* v_msg_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2(v_msg_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___redArg(lean_object* v_t_161_, lean_object* v_k_162_){
_start:
{
if (lean_obj_tag(v_t_161_) == 0)
{
lean_object* v_k_163_; lean_object* v_v_164_; lean_object* v_l_165_; lean_object* v_r_166_; uint8_t v___x_167_; 
v_k_163_ = lean_ctor_get(v_t_161_, 1);
v_v_164_ = lean_ctor_get(v_t_161_, 2);
v_l_165_ = lean_ctor_get(v_t_161_, 3);
v_r_166_ = lean_ctor_get(v_t_161_, 4);
v___x_167_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_162_, v_k_163_);
switch(v___x_167_)
{
case 0:
{
v_t_161_ = v_l_165_;
goto _start;
}
case 1:
{
lean_object* v___x_169_; 
lean_inc(v_v_164_);
v___x_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_169_, 0, v_v_164_);
return v___x_169_;
}
default: 
{
v_t_161_ = v_r_166_;
goto _start;
}
}
}
else
{
lean_object* v___x_171_; 
v___x_171_ = lean_box(0);
return v___x_171_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_t_172_, lean_object* v_k_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___redArg(v_t_172_, v_k_173_);
lean_dec(v_k_173_);
lean_dec(v_t_172_);
return v_res_174_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__0(void){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = lean_mk_string_unchecked("Lean.MetavarContext", 19, 19);
return v___x_175_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__1(void){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_mk_string_unchecked("Lean.instantiateLCtxMVars", 25, 25);
return v___x_176_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__2(void){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lean_mk_string_unchecked("Invalid auxiliary declaration found in local context: ", 54, 54);
return v___x_177_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__3(void){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = lean_mk_string_unchecked(" does not have an associated full name.", 39, 39);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(lean_object* v_auxDeclToFullName_179_, lean_object* v_as_180_, size_t v_i_181_, size_t v_stop_182_, lean_object* v_b_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_a_190_; uint8_t v___x_194_; 
v___x_194_ = lean_usize_dec_eq(v_i_181_, v_stop_182_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
v___x_195_ = lean_array_uget_borrowed(v_as_180_, v_i_181_);
if (lean_obj_tag(v___x_195_) == 0)
{
v_a_190_ = v_b_183_;
goto v___jp_189_;
}
else
{
lean_object* v_val_196_; 
v_val_196_ = lean_ctor_get(v___x_195_, 0);
if (lean_obj_tag(v_val_196_) == 0)
{
uint8_t v_kind_197_; 
v_kind_197_ = lean_ctor_get_uint8(v_val_196_, sizeof(void*)*4 + 1);
if (v_kind_197_ == 2)
{
lean_object* v_fvarId_198_; lean_object* v_userName_199_; lean_object* v_type_200_; lean_object* v___x_201_; 
v_fvarId_198_ = lean_ctor_get(v_val_196_, 1);
v_userName_199_ = lean_ctor_get(v_val_196_, 2);
v_type_200_ = lean_ctor_get(v_val_196_, 3);
lean_inc_ref(v_type_200_);
v___x_201_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_type_200_, v___y_185_, v___y_187_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; lean_object* v___x_203_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_a_202_);
lean_dec_ref(v___x_201_);
v___x_203_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___redArg(v_auxDeclToFullName_179_, v_fvarId_198_);
if (lean_obj_tag(v___x_203_) == 1)
{
lean_object* v_val_204_; lean_object* v___x_205_; 
v_val_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_val_204_);
lean_dec_ref(v___x_203_);
lean_inc(v_userName_199_);
lean_inc(v_fvarId_198_);
v___x_205_ = l_Lean_LocalContext_mkAuxDecl(v_b_183_, v_fvarId_198_, v_userName_199_, v_a_202_, v_val_204_);
v_a_190_ = v___x_205_;
goto v___jp_189_;
}
else
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
lean_dec(v___x_203_);
lean_dec(v_a_202_);
lean_dec_ref(v_b_183_);
v___x_206_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__0);
v___x_207_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__1);
v___x_208_ = lean_unsigned_to_nat(635u);
v___x_209_ = lean_unsigned_to_nat(12u);
v___x_210_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__2);
v___x_211_ = 1;
lean_inc(v_userName_199_);
v___x_212_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_userName_199_, v___x_211_);
v___x_213_ = lean_string_append(v___x_210_, v___x_212_);
lean_dec_ref(v___x_212_);
v___x_214_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___closed__3);
v___x_215_ = lean_string_append(v___x_213_, v___x_214_);
v___x_216_ = l_mkPanicMessageWithDecl(v___x_206_, v___x_207_, v___x_208_, v___x_209_, v___x_215_);
lean_dec_ref(v___x_215_);
v___x_217_ = l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2(v___x_216_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v_a_218_; 
v_a_218_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_a_218_);
lean_dec_ref(v___x_217_);
v_a_190_ = v_a_218_;
goto v___jp_189_;
}
else
{
return v___x_217_;
}
}
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_226_; 
lean_dec_ref(v_b_183_);
v_a_219_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_226_ == 0)
{
v___x_221_ = v___x_201_;
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_201_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_224_; 
if (v_isShared_222_ == 0)
{
v___x_224_ = v___x_221_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_219_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
else
{
lean_object* v_fvarId_227_; lean_object* v_userName_228_; lean_object* v_type_229_; uint8_t v_bi_230_; lean_object* v___x_231_; 
v_fvarId_227_ = lean_ctor_get(v_val_196_, 1);
v_userName_228_ = lean_ctor_get(v_val_196_, 2);
v_type_229_ = lean_ctor_get(v_val_196_, 3);
v_bi_230_ = lean_ctor_get_uint8(v_val_196_, sizeof(void*)*4);
lean_inc_ref(v_type_229_);
v___x_231_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_type_229_, v___y_185_, v___y_187_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v_a_232_; lean_object* v___x_233_; 
v_a_232_ = lean_ctor_get(v___x_231_, 0);
lean_inc(v_a_232_);
lean_dec_ref(v___x_231_);
lean_inc(v_userName_228_);
lean_inc(v_fvarId_227_);
v___x_233_ = l_Lean_LocalContext_mkLocalDecl(v_b_183_, v_fvarId_227_, v_userName_228_, v_a_232_, v_bi_230_, v_kind_197_);
v_a_190_ = v___x_233_;
goto v___jp_189_;
}
else
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_241_; 
lean_dec_ref(v_b_183_);
v_a_234_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_241_ == 0)
{
v___x_236_ = v___x_231_;
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_a_234_);
lean_dec(v___x_231_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
if (v_isShared_237_ == 0)
{
v___x_239_ = v___x_236_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_a_234_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
}
}
else
{
lean_object* v_fvarId_242_; lean_object* v_userName_243_; lean_object* v_type_244_; lean_object* v_value_245_; uint8_t v_nondep_246_; uint8_t v_kind_247_; lean_object* v___x_248_; 
v_fvarId_242_ = lean_ctor_get(v_val_196_, 1);
v_userName_243_ = lean_ctor_get(v_val_196_, 2);
v_type_244_ = lean_ctor_get(v_val_196_, 3);
v_value_245_ = lean_ctor_get(v_val_196_, 4);
v_nondep_246_ = lean_ctor_get_uint8(v_val_196_, sizeof(void*)*5);
v_kind_247_ = lean_ctor_get_uint8(v_val_196_, sizeof(void*)*5 + 1);
lean_inc_ref(v_type_244_);
v___x_248_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_type_244_, v___y_185_, v___y_187_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_250_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
lean_inc(v_a_249_);
lean_dec_ref(v___x_248_);
lean_inc_ref(v_value_245_);
v___x_250_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_value_245_, v___y_185_, v___y_187_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v_a_251_; lean_object* v___x_252_; 
v_a_251_ = lean_ctor_get(v___x_250_, 0);
lean_inc(v_a_251_);
lean_dec_ref(v___x_250_);
lean_inc(v_userName_243_);
lean_inc(v_fvarId_242_);
v___x_252_ = l_Lean_LocalContext_mkLetDecl(v_b_183_, v_fvarId_242_, v_userName_243_, v_a_249_, v_a_251_, v_nondep_246_, v_kind_247_);
v_a_190_ = v___x_252_;
goto v___jp_189_;
}
else
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_260_; 
lean_dec(v_a_249_);
lean_dec_ref(v_b_183_);
v_a_253_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_260_ == 0)
{
v___x_255_ = v___x_250_;
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_250_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_258_; 
if (v_isShared_256_ == 0)
{
v___x_258_ = v___x_255_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_253_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
else
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
lean_dec_ref(v_b_183_);
v_a_261_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_268_ == 0)
{
v___x_263_ = v___x_248_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_248_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_261_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
}
}
else
{
lean_object* v___x_269_; 
v___x_269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_269_, 0, v_b_183_);
return v___x_269_;
}
v___jp_189_:
{
size_t v___x_191_; size_t v___x_192_; 
v___x_191_ = ((size_t)1ULL);
v___x_192_ = lean_usize_add(v_i_181_, v___x_191_);
v_i_181_ = v___x_192_;
v_b_183_ = v_a_190_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8___boxed(lean_object* v_auxDeclToFullName_270_, lean_object* v_as_271_, lean_object* v_i_272_, lean_object* v_stop_273_, lean_object* v_b_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
size_t v_i_boxed_280_; size_t v_stop_boxed_281_; lean_object* v_res_282_; 
v_i_boxed_280_ = lean_unbox_usize(v_i_272_);
lean_dec(v_i_272_);
v_stop_boxed_281_ = lean_unbox_usize(v_stop_273_);
lean_dec(v_stop_273_);
v_res_282_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(v_auxDeclToFullName_270_, v_as_271_, v_i_boxed_280_, v_stop_boxed_281_, v_b_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
lean_dec(v___y_276_);
lean_dec_ref(v___y_275_);
lean_dec_ref(v_as_271_);
lean_dec(v_auxDeclToFullName_270_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__9(lean_object* v_auxDeclToFullName_283_, lean_object* v_x_284_, lean_object* v_x_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
if (lean_obj_tag(v_x_284_) == 0)
{
lean_object* v_cs_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_311_; 
v_cs_291_ = lean_ctor_get(v_x_284_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v_x_284_);
if (v_isSharedCheck_311_ == 0)
{
v___x_293_ = v_x_284_;
v_isShared_294_ = v_isSharedCheck_311_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_cs_291_);
lean_dec(v_x_284_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_311_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_295_ = lean_unsigned_to_nat(0u);
v___x_296_ = lean_array_get_size(v_cs_291_);
v___x_297_ = lean_nat_dec_lt(v___x_295_, v___x_296_);
if (v___x_297_ == 0)
{
lean_object* v___x_299_; 
lean_dec_ref(v_cs_291_);
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 0, v_x_285_);
v___x_299_ = v___x_293_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_x_285_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
else
{
uint8_t v___x_301_; 
v___x_301_ = lean_nat_dec_le(v___x_296_, v___x_296_);
if (v___x_301_ == 0)
{
if (v___x_297_ == 0)
{
lean_object* v___x_303_; 
lean_dec_ref(v_cs_291_);
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 0, v_x_285_);
v___x_303_ = v___x_293_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_x_285_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
else
{
size_t v___x_305_; size_t v___x_306_; lean_object* v___x_307_; 
lean_del_object(v___x_293_);
v___x_305_ = ((size_t)0ULL);
v___x_306_ = lean_usize_of_nat(v___x_296_);
v___x_307_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7_spec__9(v_auxDeclToFullName_283_, v_cs_291_, v___x_305_, v___x_306_, v_x_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_);
lean_dec_ref(v_cs_291_);
return v___x_307_;
}
}
else
{
size_t v___x_308_; size_t v___x_309_; lean_object* v___x_310_; 
lean_del_object(v___x_293_);
v___x_308_ = ((size_t)0ULL);
v___x_309_ = lean_usize_of_nat(v___x_296_);
v___x_310_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7_spec__9(v_auxDeclToFullName_283_, v_cs_291_, v___x_308_, v___x_309_, v_x_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_);
lean_dec_ref(v_cs_291_);
return v___x_310_;
}
}
}
}
else
{
lean_object* v_vs_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_332_; 
v_vs_312_ = lean_ctor_get(v_x_284_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v_x_284_);
if (v_isSharedCheck_332_ == 0)
{
v___x_314_ = v_x_284_;
v_isShared_315_ = v_isSharedCheck_332_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_vs_312_);
lean_dec(v_x_284_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_332_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_316_ = lean_unsigned_to_nat(0u);
v___x_317_ = lean_array_get_size(v_vs_312_);
v___x_318_ = lean_nat_dec_lt(v___x_316_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_320_; 
lean_dec_ref(v_vs_312_);
if (v_isShared_315_ == 0)
{
lean_ctor_set_tag(v___x_314_, 0);
lean_ctor_set(v___x_314_, 0, v_x_285_);
v___x_320_ = v___x_314_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_x_285_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
else
{
uint8_t v___x_322_; 
v___x_322_ = lean_nat_dec_le(v___x_317_, v___x_317_);
if (v___x_322_ == 0)
{
if (v___x_318_ == 0)
{
lean_object* v___x_324_; 
lean_dec_ref(v_vs_312_);
if (v_isShared_315_ == 0)
{
lean_ctor_set_tag(v___x_314_, 0);
lean_ctor_set(v___x_314_, 0, v_x_285_);
v___x_324_ = v___x_314_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_x_285_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
else
{
size_t v___x_326_; size_t v___x_327_; lean_object* v___x_328_; 
lean_del_object(v___x_314_);
v___x_326_ = ((size_t)0ULL);
v___x_327_ = lean_usize_of_nat(v___x_317_);
v___x_328_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(v_auxDeclToFullName_283_, v_vs_312_, v___x_326_, v___x_327_, v_x_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_);
lean_dec_ref(v_vs_312_);
return v___x_328_;
}
}
else
{
size_t v___x_329_; size_t v___x_330_; lean_object* v___x_331_; 
lean_del_object(v___x_314_);
v___x_329_ = ((size_t)0ULL);
v___x_330_ = lean_usize_of_nat(v___x_317_);
v___x_331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(v_auxDeclToFullName_283_, v_vs_312_, v___x_329_, v___x_330_, v_x_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_);
lean_dec_ref(v_vs_312_);
return v___x_331_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7_spec__9(lean_object* v_auxDeclToFullName_333_, lean_object* v_as_334_, size_t v_i_335_, size_t v_stop_336_, lean_object* v_b_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
uint8_t v___x_343_; 
v___x_343_ = lean_usize_dec_eq(v_i_335_, v_stop_336_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = lean_array_uget_borrowed(v_as_334_, v_i_335_);
lean_inc(v___x_344_);
v___x_345_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__9(v_auxDeclToFullName_333_, v___x_344_, v_b_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; size_t v___x_347_; size_t v___x_348_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_a_346_);
lean_dec_ref(v___x_345_);
v___x_347_ = ((size_t)1ULL);
v___x_348_ = lean_usize_add(v_i_335_, v___x_347_);
v_i_335_ = v___x_348_;
v_b_337_ = v_a_346_;
goto _start;
}
else
{
return v___x_345_;
}
}
else
{
lean_object* v___x_350_; 
v___x_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_350_, 0, v_b_337_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7_spec__9___boxed(lean_object* v_auxDeclToFullName_351_, lean_object* v_as_352_, lean_object* v_i_353_, lean_object* v_stop_354_, lean_object* v_b_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
size_t v_i_boxed_361_; size_t v_stop_boxed_362_; lean_object* v_res_363_; 
v_i_boxed_361_ = lean_unbox_usize(v_i_353_);
lean_dec(v_i_353_);
v_stop_boxed_362_ = lean_unbox_usize(v_stop_354_);
lean_dec(v_stop_354_);
v_res_363_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7_spec__9(v_auxDeclToFullName_351_, v_as_352_, v_i_boxed_361_, v_stop_boxed_362_, v_b_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec_ref(v_as_352_);
lean_dec(v_auxDeclToFullName_351_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__9___boxed(lean_object* v_auxDeclToFullName_364_, lean_object* v_x_365_, lean_object* v_x_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__9(v_auxDeclToFullName_364_, v_x_365_, v_x_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
lean_dec(v_auxDeclToFullName_364_);
return v_res_372_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7___closed__0(void){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_instInhabitedPersistentArrayNode_default(lean_box(0));
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7(lean_object* v_auxDeclToFullName_374_, lean_object* v_x_375_, size_t v_x_376_, size_t v_x_377_, lean_object* v_x_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
if (lean_obj_tag(v_x_375_) == 0)
{
lean_object* v_cs_384_; lean_object* v___x_385_; size_t v___x_386_; lean_object* v_j_387_; lean_object* v___x_388_; size_t v___x_389_; size_t v___x_390_; size_t v___x_391_; size_t v___x_392_; size_t v___x_393_; size_t v___x_394_; lean_object* v___x_395_; 
v_cs_384_ = lean_ctor_get(v_x_375_, 0);
lean_inc_ref(v_cs_384_);
lean_dec_ref(v_x_375_);
v___x_385_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7___closed__0);
v___x_386_ = lean_usize_shift_right(v_x_376_, v_x_377_);
v_j_387_ = lean_usize_to_nat(v___x_386_);
v___x_388_ = lean_array_get_borrowed(v___x_385_, v_cs_384_, v_j_387_);
v___x_389_ = ((size_t)1ULL);
v___x_390_ = lean_usize_shift_left(v___x_389_, v_x_377_);
v___x_391_ = lean_usize_sub(v___x_390_, v___x_389_);
v___x_392_ = lean_usize_land(v_x_376_, v___x_391_);
v___x_393_ = ((size_t)5ULL);
v___x_394_ = lean_usize_sub(v_x_377_, v___x_393_);
lean_inc(v___x_388_);
v___x_395_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7(v_auxDeclToFullName_374_, v___x_388_, v___x_392_, v___x_394_, v_x_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v_a_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; uint8_t v___x_400_; 
v_a_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_a_396_);
v___x_397_ = lean_unsigned_to_nat(1u);
v___x_398_ = lean_nat_add(v_j_387_, v___x_397_);
lean_dec(v_j_387_);
v___x_399_ = lean_array_get_size(v_cs_384_);
v___x_400_ = lean_nat_dec_lt(v___x_398_, v___x_399_);
if (v___x_400_ == 0)
{
lean_dec(v___x_398_);
lean_dec(v_a_396_);
lean_dec_ref(v_cs_384_);
return v___x_395_;
}
else
{
uint8_t v___x_401_; 
v___x_401_ = lean_nat_dec_le(v___x_399_, v___x_399_);
if (v___x_401_ == 0)
{
if (v___x_400_ == 0)
{
lean_dec(v___x_398_);
lean_dec(v_a_396_);
lean_dec_ref(v_cs_384_);
return v___x_395_;
}
else
{
size_t v___x_402_; size_t v___x_403_; lean_object* v___x_404_; 
lean_dec_ref(v___x_395_);
v___x_402_ = lean_usize_of_nat(v___x_398_);
lean_dec(v___x_398_);
v___x_403_ = lean_usize_of_nat(v___x_399_);
v___x_404_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7_spec__9(v_auxDeclToFullName_374_, v_cs_384_, v___x_402_, v___x_403_, v_a_396_, v___y_379_, v___y_380_, v___y_381_, v___y_382_);
lean_dec_ref(v_cs_384_);
return v___x_404_;
}
}
else
{
size_t v___x_405_; size_t v___x_406_; lean_object* v___x_407_; 
lean_dec_ref(v___x_395_);
v___x_405_ = lean_usize_of_nat(v___x_398_);
lean_dec(v___x_398_);
v___x_406_ = lean_usize_of_nat(v___x_399_);
v___x_407_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7_spec__9(v_auxDeclToFullName_374_, v_cs_384_, v___x_405_, v___x_406_, v_a_396_, v___y_379_, v___y_380_, v___y_381_, v___y_382_);
lean_dec_ref(v_cs_384_);
return v___x_407_;
}
}
}
else
{
lean_dec(v_j_387_);
lean_dec_ref(v_cs_384_);
return v___x_395_;
}
}
else
{
lean_object* v_vs_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_428_; 
v_vs_408_ = lean_ctor_get(v_x_375_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v_x_375_);
if (v_isSharedCheck_428_ == 0)
{
v___x_410_ = v_x_375_;
v_isShared_411_ = v_isSharedCheck_428_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_vs_408_);
lean_dec(v_x_375_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_428_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_412_; lean_object* v___x_413_; uint8_t v___x_414_; 
v___x_412_ = lean_usize_to_nat(v_x_376_);
v___x_413_ = lean_array_get_size(v_vs_408_);
v___x_414_ = lean_nat_dec_lt(v___x_412_, v___x_413_);
if (v___x_414_ == 0)
{
lean_object* v___x_416_; 
lean_dec(v___x_412_);
lean_dec_ref(v_vs_408_);
if (v_isShared_411_ == 0)
{
lean_ctor_set_tag(v___x_410_, 0);
lean_ctor_set(v___x_410_, 0, v_x_378_);
v___x_416_ = v___x_410_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_x_378_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
else
{
uint8_t v___x_418_; 
v___x_418_ = lean_nat_dec_le(v___x_413_, v___x_413_);
if (v___x_418_ == 0)
{
if (v___x_414_ == 0)
{
lean_object* v___x_420_; 
lean_dec(v___x_412_);
lean_dec_ref(v_vs_408_);
if (v_isShared_411_ == 0)
{
lean_ctor_set_tag(v___x_410_, 0);
lean_ctor_set(v___x_410_, 0, v_x_378_);
v___x_420_ = v___x_410_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_x_378_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
else
{
size_t v___x_422_; size_t v___x_423_; lean_object* v___x_424_; 
lean_del_object(v___x_410_);
v___x_422_ = lean_usize_of_nat(v___x_412_);
lean_dec(v___x_412_);
v___x_423_ = lean_usize_of_nat(v___x_413_);
v___x_424_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(v_auxDeclToFullName_374_, v_vs_408_, v___x_422_, v___x_423_, v_x_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_);
lean_dec_ref(v_vs_408_);
return v___x_424_;
}
}
else
{
size_t v___x_425_; size_t v___x_426_; lean_object* v___x_427_; 
lean_del_object(v___x_410_);
v___x_425_ = lean_usize_of_nat(v___x_412_);
lean_dec(v___x_412_);
v___x_426_ = lean_usize_of_nat(v___x_413_);
v___x_427_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(v_auxDeclToFullName_374_, v_vs_408_, v___x_425_, v___x_426_, v_x_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_);
lean_dec_ref(v_vs_408_);
return v___x_427_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7___boxed(lean_object* v_auxDeclToFullName_429_, lean_object* v_x_430_, lean_object* v_x_431_, lean_object* v_x_432_, lean_object* v_x_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
size_t v_x_5834__boxed_439_; size_t v_x_5835__boxed_440_; lean_object* v_res_441_; 
v_x_5834__boxed_439_ = lean_unbox_usize(v_x_431_);
lean_dec(v_x_431_);
v_x_5835__boxed_440_ = lean_unbox_usize(v_x_432_);
lean_dec(v_x_432_);
v_res_441_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7(v_auxDeclToFullName_429_, v_x_430_, v_x_5834__boxed_439_, v_x_5835__boxed_440_, v_x_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
lean_dec(v___y_437_);
lean_dec_ref(v___y_436_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v_auxDeclToFullName_429_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5(lean_object* v_auxDeclToFullName_442_, lean_object* v_t_443_, lean_object* v_init_444_, lean_object* v_start_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v___x_451_; uint8_t v___x_452_; 
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = lean_nat_dec_eq(v_start_445_, v___x_451_);
if (v___x_452_ == 0)
{
lean_object* v_root_453_; lean_object* v_tail_454_; size_t v_shift_455_; lean_object* v_tailOff_456_; uint8_t v___x_457_; 
v_root_453_ = lean_ctor_get(v_t_443_, 0);
lean_inc_ref(v_root_453_);
v_tail_454_ = lean_ctor_get(v_t_443_, 1);
lean_inc_ref(v_tail_454_);
v_shift_455_ = lean_ctor_get_usize(v_t_443_, 4);
v_tailOff_456_ = lean_ctor_get(v_t_443_, 3);
lean_inc(v_tailOff_456_);
lean_dec_ref(v_t_443_);
v___x_457_ = lean_nat_dec_le(v_tailOff_456_, v_start_445_);
if (v___x_457_ == 0)
{
size_t v___x_458_; lean_object* v___x_459_; 
lean_dec(v_tailOff_456_);
v___x_458_ = lean_usize_of_nat(v_start_445_);
v___x_459_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__7(v_auxDeclToFullName_442_, v_root_453_, v___x_458_, v_shift_455_, v_init_444_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
if (lean_obj_tag(v___x_459_) == 0)
{
lean_object* v_a_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v_a_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc(v_a_460_);
v___x_461_ = lean_array_get_size(v_tail_454_);
v___x_462_ = lean_nat_dec_lt(v___x_451_, v___x_461_);
if (v___x_462_ == 0)
{
lean_dec(v_a_460_);
lean_dec_ref(v_tail_454_);
return v___x_459_;
}
else
{
uint8_t v___x_463_; 
v___x_463_ = lean_nat_dec_le(v___x_461_, v___x_461_);
if (v___x_463_ == 0)
{
if (v___x_462_ == 0)
{
lean_dec(v_a_460_);
lean_dec_ref(v_tail_454_);
return v___x_459_;
}
else
{
size_t v___x_464_; size_t v___x_465_; lean_object* v___x_466_; 
lean_dec_ref(v___x_459_);
v___x_464_ = ((size_t)0ULL);
v___x_465_ = lean_usize_of_nat(v___x_461_);
v___x_466_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(v_auxDeclToFullName_442_, v_tail_454_, v___x_464_, v___x_465_, v_a_460_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
lean_dec_ref(v_tail_454_);
return v___x_466_;
}
}
else
{
size_t v___x_467_; size_t v___x_468_; lean_object* v___x_469_; 
lean_dec_ref(v___x_459_);
v___x_467_ = ((size_t)0ULL);
v___x_468_ = lean_usize_of_nat(v___x_461_);
v___x_469_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(v_auxDeclToFullName_442_, v_tail_454_, v___x_467_, v___x_468_, v_a_460_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
lean_dec_ref(v_tail_454_);
return v___x_469_;
}
}
}
else
{
lean_dec_ref(v_tail_454_);
return v___x_459_;
}
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
lean_dec_ref(v_root_453_);
v___x_470_ = lean_nat_sub(v_start_445_, v_tailOff_456_);
lean_dec(v_tailOff_456_);
v___x_471_ = lean_array_get_size(v_tail_454_);
v___x_472_ = lean_nat_dec_lt(v___x_470_, v___x_471_);
if (v___x_472_ == 0)
{
lean_object* v___x_473_; 
lean_dec(v___x_470_);
lean_dec_ref(v_tail_454_);
v___x_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_473_, 0, v_init_444_);
return v___x_473_;
}
else
{
uint8_t v___x_474_; 
v___x_474_ = lean_nat_dec_le(v___x_471_, v___x_471_);
if (v___x_474_ == 0)
{
if (v___x_472_ == 0)
{
lean_object* v___x_475_; 
lean_dec(v___x_470_);
lean_dec_ref(v_tail_454_);
v___x_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_475_, 0, v_init_444_);
return v___x_475_;
}
else
{
size_t v___x_476_; size_t v___x_477_; lean_object* v___x_478_; 
v___x_476_ = lean_usize_of_nat(v___x_470_);
lean_dec(v___x_470_);
v___x_477_ = lean_usize_of_nat(v___x_471_);
v___x_478_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(v_auxDeclToFullName_442_, v_tail_454_, v___x_476_, v___x_477_, v_init_444_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
lean_dec_ref(v_tail_454_);
return v___x_478_;
}
}
else
{
size_t v___x_479_; size_t v___x_480_; lean_object* v___x_481_; 
v___x_479_ = lean_usize_of_nat(v___x_470_);
lean_dec(v___x_470_);
v___x_480_ = lean_usize_of_nat(v___x_471_);
v___x_481_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(v_auxDeclToFullName_442_, v_tail_454_, v___x_479_, v___x_480_, v_init_444_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
lean_dec_ref(v_tail_454_);
return v___x_481_;
}
}
}
}
else
{
lean_object* v_root_482_; lean_object* v_tail_483_; lean_object* v___x_484_; 
v_root_482_ = lean_ctor_get(v_t_443_, 0);
lean_inc_ref(v_root_482_);
v_tail_483_ = lean_ctor_get(v_t_443_, 1);
lean_inc_ref(v_tail_483_);
lean_dec_ref(v_t_443_);
v___x_484_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__9(v_auxDeclToFullName_442_, v_root_482_, v_init_444_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_a_485_);
v___x_486_ = lean_array_get_size(v_tail_483_);
v___x_487_ = lean_nat_dec_lt(v___x_451_, v___x_486_);
if (v___x_487_ == 0)
{
lean_dec(v_a_485_);
lean_dec_ref(v_tail_483_);
return v___x_484_;
}
else
{
uint8_t v___x_488_; 
v___x_488_ = lean_nat_dec_le(v___x_486_, v___x_486_);
if (v___x_488_ == 0)
{
if (v___x_487_ == 0)
{
lean_dec(v_a_485_);
lean_dec_ref(v_tail_483_);
return v___x_484_;
}
else
{
size_t v___x_489_; size_t v___x_490_; lean_object* v___x_491_; 
lean_dec_ref(v___x_484_);
v___x_489_ = ((size_t)0ULL);
v___x_490_ = lean_usize_of_nat(v___x_486_);
v___x_491_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(v_auxDeclToFullName_442_, v_tail_483_, v___x_489_, v___x_490_, v_a_485_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
lean_dec_ref(v_tail_483_);
return v___x_491_;
}
}
else
{
size_t v___x_492_; size_t v___x_493_; lean_object* v___x_494_; 
lean_dec_ref(v___x_484_);
v___x_492_ = ((size_t)0ULL);
v___x_493_ = lean_usize_of_nat(v___x_486_);
v___x_494_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5_spec__8(v_auxDeclToFullName_442_, v_tail_483_, v___x_492_, v___x_493_, v_a_485_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
lean_dec_ref(v_tail_483_);
return v___x_494_;
}
}
}
else
{
lean_dec_ref(v_tail_483_);
return v___x_484_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5___boxed(lean_object* v_auxDeclToFullName_495_, lean_object* v_t_496_, lean_object* v_init_497_, lean_object* v_start_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5(v_auxDeclToFullName_495_, v_t_496_, v_init_497_, v_start_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
lean_dec(v___y_502_);
lean_dec_ref(v___y_501_);
lean_dec(v___y_500_);
lean_dec_ref(v___y_499_);
lean_dec(v_start_498_);
lean_dec(v_auxDeclToFullName_495_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3(lean_object* v_auxDeclToFullName_505_, lean_object* v_lctx_506_, lean_object* v_init_507_, lean_object* v_start_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_decls_514_; lean_object* v___x_515_; 
v_decls_514_ = lean_ctor_get(v_lctx_506_, 1);
lean_inc_ref(v_decls_514_);
lean_dec_ref(v_lctx_506_);
v___x_515_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3_spec__5(v_auxDeclToFullName_505_, v_decls_514_, v_init_507_, v_start_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3___boxed(lean_object* v_auxDeclToFullName_516_, lean_object* v_lctx_517_, lean_object* v_init_518_, lean_object* v_start_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3(v_auxDeclToFullName_516_, v_lctx_517_, v_init_518_, v_start_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_);
lean_dec(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v_start_519_);
lean_dec(v_auxDeclToFullName_516_);
return v_res_525_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_526_; 
v___x_526_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_526_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_527_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0);
v___x_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
return v___x_528_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lean_unsigned_to_nat(32u);
v___x_530_ = lean_mk_empty_array_with_capacity(v___x_529_);
v___x_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
return v___x_531_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_532_ = ((size_t)5ULL);
v___x_533_ = lean_unsigned_to_nat(0u);
v___x_534_ = lean_unsigned_to_nat(32u);
v___x_535_ = lean_mk_empty_array_with_capacity(v___x_534_);
v___x_536_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2);
v___x_537_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_537_, 0, v___x_536_);
lean_ctor_set(v___x_537_, 1, v___x_535_);
lean_ctor_set(v___x_537_, 2, v___x_533_);
lean_ctor_set(v___x_537_, 3, v___x_533_);
lean_ctor_set_usize(v___x_537_, 4, v___x_532_);
return v___x_537_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_538_ = lean_box(1);
v___x_539_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3);
v___x_540_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1);
v___x_541_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
lean_ctor_set(v___x_541_, 1, v___x_539_);
lean_ctor_set(v___x_541_, 2, v___x_538_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0(lean_object* v_lctx_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_auxDeclToFullName_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v_auxDeclToFullName_548_ = lean_ctor_get(v_lctx_542_, 2);
lean_inc(v_auxDeclToFullName_548_);
v___x_549_ = lean_unsigned_to_nat(0u);
v___x_550_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4);
v___x_551_ = l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__3(v_auxDeclToFullName_548_, v_lctx_542_, v___x_550_, v___x_549_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
lean_dec(v_auxDeclToFullName_548_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___boxed(lean_object* v_lctx_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0(v_lctx_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__8_spec__12___redArg(lean_object* v_x_559_, lean_object* v_x_560_, lean_object* v_x_561_, lean_object* v_x_562_){
_start:
{
lean_object* v_ks_563_; lean_object* v_vs_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_588_; 
v_ks_563_ = lean_ctor_get(v_x_559_, 0);
v_vs_564_ = lean_ctor_get(v_x_559_, 1);
v_isSharedCheck_588_ = !lean_is_exclusive(v_x_559_);
if (v_isSharedCheck_588_ == 0)
{
v___x_566_ = v_x_559_;
v_isShared_567_ = v_isSharedCheck_588_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_vs_564_);
lean_inc(v_ks_563_);
lean_dec(v_x_559_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_588_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_568_; uint8_t v___x_569_; 
v___x_568_ = lean_array_get_size(v_ks_563_);
v___x_569_ = lean_nat_dec_lt(v_x_560_, v___x_568_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
lean_dec(v_x_560_);
v___x_570_ = lean_array_push(v_ks_563_, v_x_561_);
v___x_571_ = lean_array_push(v_vs_564_, v_x_562_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 1, v___x_571_);
lean_ctor_set(v___x_566_, 0, v___x_570_);
v___x_573_ = v___x_566_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_570_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v___x_571_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
else
{
lean_object* v_k_x27_575_; uint8_t v___x_576_; 
v_k_x27_575_ = lean_array_fget_borrowed(v_ks_563_, v_x_560_);
v___x_576_ = l_Lean_instBEqMVarId_beq(v_x_561_, v_k_x27_575_);
if (v___x_576_ == 0)
{
lean_object* v___x_578_; 
if (v_isShared_567_ == 0)
{
v___x_578_ = v___x_566_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_ks_563_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_vs_564_);
v___x_578_ = v_reuseFailAlloc_582_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = lean_unsigned_to_nat(1u);
v___x_580_ = lean_nat_add(v_x_560_, v___x_579_);
lean_dec(v_x_560_);
v_x_559_ = v___x_578_;
v_x_560_ = v___x_580_;
goto _start;
}
}
else
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_586_; 
v___x_583_ = lean_array_fset(v_ks_563_, v_x_560_, v_x_561_);
v___x_584_ = lean_array_fset(v_vs_564_, v_x_560_, v_x_562_);
lean_dec(v_x_560_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 1, v___x_584_);
lean_ctor_set(v___x_566_, 0, v___x_583_);
v___x_586_ = v___x_566_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_583_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v___x_584_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__8___redArg(lean_object* v_n_589_, lean_object* v_k_590_, lean_object* v_v_591_){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = lean_unsigned_to_nat(0u);
v___x_593_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__8_spec__12___redArg(v_n_589_, v___x_592_, v_k_590_, v_v_591_);
return v___x_593_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__0(void){
_start:
{
size_t v___x_594_; size_t v___x_595_; size_t v___x_596_; 
v___x_594_ = ((size_t)5ULL);
v___x_595_ = ((size_t)1ULL);
v___x_596_ = lean_usize_shift_left(v___x_595_, v___x_594_);
return v___x_596_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__1(void){
_start:
{
size_t v___x_597_; size_t v___x_598_; size_t v___x_599_; 
v___x_597_ = ((size_t)1ULL);
v___x_598_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__0);
v___x_599_ = lean_usize_sub(v___x_598_, v___x_597_);
return v___x_599_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg(lean_object* v_x_601_, size_t v_x_602_, size_t v_x_603_, lean_object* v_x_604_, lean_object* v_x_605_){
_start:
{
if (lean_obj_tag(v_x_601_) == 0)
{
lean_object* v_es_606_; size_t v___x_607_; size_t v___x_608_; size_t v___x_609_; size_t v___x_610_; lean_object* v_j_611_; lean_object* v___x_612_; uint8_t v___x_613_; 
v_es_606_ = lean_ctor_get(v_x_601_, 0);
v___x_607_ = ((size_t)5ULL);
v___x_608_ = ((size_t)1ULL);
v___x_609_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__1);
v___x_610_ = lean_usize_land(v_x_602_, v___x_609_);
v_j_611_ = lean_usize_to_nat(v___x_610_);
v___x_612_ = lean_array_get_size(v_es_606_);
v___x_613_ = lean_nat_dec_lt(v_j_611_, v___x_612_);
if (v___x_613_ == 0)
{
lean_dec(v_j_611_);
lean_dec(v_x_605_);
lean_dec(v_x_604_);
return v_x_601_;
}
else
{
lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_650_; 
lean_inc_ref(v_es_606_);
v_isSharedCheck_650_ = !lean_is_exclusive(v_x_601_);
if (v_isSharedCheck_650_ == 0)
{
lean_object* v_unused_651_; 
v_unused_651_ = lean_ctor_get(v_x_601_, 0);
lean_dec(v_unused_651_);
v___x_615_ = v_x_601_;
v_isShared_616_ = v_isSharedCheck_650_;
goto v_resetjp_614_;
}
else
{
lean_dec(v_x_601_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_650_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v_v_617_; lean_object* v___x_618_; lean_object* v_xs_x27_619_; lean_object* v___y_621_; 
v_v_617_ = lean_array_fget(v_es_606_, v_j_611_);
v___x_618_ = lean_box(0);
v_xs_x27_619_ = lean_array_fset(v_es_606_, v_j_611_, v___x_618_);
switch(lean_obj_tag(v_v_617_))
{
case 0:
{
lean_object* v_key_626_; lean_object* v_val_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_637_; 
v_key_626_ = lean_ctor_get(v_v_617_, 0);
v_val_627_ = lean_ctor_get(v_v_617_, 1);
v_isSharedCheck_637_ = !lean_is_exclusive(v_v_617_);
if (v_isSharedCheck_637_ == 0)
{
v___x_629_ = v_v_617_;
v_isShared_630_ = v_isSharedCheck_637_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_val_627_);
lean_inc(v_key_626_);
lean_dec(v_v_617_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_637_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
uint8_t v___x_631_; 
v___x_631_ = l_Lean_instBEqMVarId_beq(v_x_604_, v_key_626_);
if (v___x_631_ == 0)
{
lean_object* v___x_632_; lean_object* v___x_633_; 
lean_del_object(v___x_629_);
v___x_632_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_626_, v_val_627_, v_x_604_, v_x_605_);
v___x_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
v___y_621_ = v___x_633_;
goto v___jp_620_;
}
else
{
lean_object* v___x_635_; 
lean_dec(v_val_627_);
lean_dec(v_key_626_);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 1, v_x_605_);
lean_ctor_set(v___x_629_, 0, v_x_604_);
v___x_635_ = v___x_629_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_x_604_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v_x_605_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
v___y_621_ = v___x_635_;
goto v___jp_620_;
}
}
}
}
case 1:
{
lean_object* v_node_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_648_; 
v_node_638_ = lean_ctor_get(v_v_617_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v_v_617_);
if (v_isSharedCheck_648_ == 0)
{
v___x_640_ = v_v_617_;
v_isShared_641_ = v_isSharedCheck_648_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_node_638_);
lean_dec(v_v_617_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_648_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
size_t v___x_642_; size_t v___x_643_; lean_object* v___x_644_; lean_object* v___x_646_; 
v___x_642_ = lean_usize_shift_right(v_x_602_, v___x_607_);
v___x_643_ = lean_usize_add(v_x_603_, v___x_608_);
v___x_644_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg(v_node_638_, v___x_642_, v___x_643_, v_x_604_, v_x_605_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 0, v___x_644_);
v___x_646_ = v___x_640_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_644_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
v___y_621_ = v___x_646_;
goto v___jp_620_;
}
}
}
default: 
{
lean_object* v___x_649_; 
v___x_649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_649_, 0, v_x_604_);
lean_ctor_set(v___x_649_, 1, v_x_605_);
v___y_621_ = v___x_649_;
goto v___jp_620_;
}
}
v___jp_620_:
{
lean_object* v___x_622_; lean_object* v___x_624_; 
v___x_622_ = lean_array_fset(v_xs_x27_619_, v_j_611_, v___y_621_);
lean_dec(v_j_611_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 0, v___x_622_);
v___x_624_ = v___x_615_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_622_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
}
}
else
{
lean_object* v_ks_652_; lean_object* v_vs_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_673_; 
v_ks_652_ = lean_ctor_get(v_x_601_, 0);
v_vs_653_ = lean_ctor_get(v_x_601_, 1);
v_isSharedCheck_673_ = !lean_is_exclusive(v_x_601_);
if (v_isSharedCheck_673_ == 0)
{
v___x_655_ = v_x_601_;
v_isShared_656_ = v_isSharedCheck_673_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_vs_653_);
lean_inc(v_ks_652_);
lean_dec(v_x_601_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_673_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_ks_652_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v_vs_653_);
v___x_658_ = v_reuseFailAlloc_672_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
lean_object* v_newNode_659_; uint8_t v___y_661_; size_t v___x_667_; uint8_t v___x_668_; 
v_newNode_659_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__8___redArg(v___x_658_, v_x_604_, v_x_605_);
v___x_667_ = ((size_t)7ULL);
v___x_668_ = lean_usize_dec_le(v___x_667_, v_x_603_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v___x_669_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_659_);
v___x_670_ = lean_unsigned_to_nat(4u);
v___x_671_ = lean_nat_dec_lt(v___x_669_, v___x_670_);
lean_dec(v___x_669_);
v___y_661_ = v___x_671_;
goto v___jp_660_;
}
else
{
v___y_661_ = v___x_668_;
goto v___jp_660_;
}
v___jp_660_:
{
if (v___y_661_ == 0)
{
lean_object* v_ks_662_; lean_object* v_vs_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v_ks_662_ = lean_ctor_get(v_newNode_659_, 0);
lean_inc_ref(v_ks_662_);
v_vs_663_ = lean_ctor_get(v_newNode_659_, 1);
lean_inc_ref(v_vs_663_);
lean_dec_ref(v_newNode_659_);
v___x_664_ = lean_unsigned_to_nat(0u);
v___x_665_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___closed__2);
v___x_666_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__9___redArg(v_x_603_, v_ks_662_, v_vs_663_, v___x_664_, v___x_665_);
lean_dec_ref(v_vs_663_);
lean_dec_ref(v_ks_662_);
return v___x_666_;
}
else
{
return v_newNode_659_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__9___redArg(size_t v_depth_674_, lean_object* v_keys_675_, lean_object* v_vals_676_, lean_object* v_i_677_, lean_object* v_entries_678_){
_start:
{
lean_object* v___x_679_; uint8_t v___x_680_; 
v___x_679_ = lean_array_get_size(v_keys_675_);
v___x_680_ = lean_nat_dec_lt(v_i_677_, v___x_679_);
if (v___x_680_ == 0)
{
lean_dec(v_i_677_);
return v_entries_678_;
}
else
{
lean_object* v_k_681_; lean_object* v_v_682_; uint64_t v___x_683_; size_t v_h_684_; size_t v___x_685_; lean_object* v___x_686_; size_t v___x_687_; size_t v___x_688_; size_t v___x_689_; size_t v_h_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v_k_681_ = lean_array_fget_borrowed(v_keys_675_, v_i_677_);
v_v_682_ = lean_array_fget_borrowed(v_vals_676_, v_i_677_);
v___x_683_ = l_Lean_instHashableMVarId_hash(v_k_681_);
v_h_684_ = lean_uint64_to_usize(v___x_683_);
v___x_685_ = ((size_t)5ULL);
v___x_686_ = lean_unsigned_to_nat(1u);
v___x_687_ = ((size_t)1ULL);
v___x_688_ = lean_usize_sub(v_depth_674_, v___x_687_);
v___x_689_ = lean_usize_mul(v___x_685_, v___x_688_);
v_h_690_ = lean_usize_shift_right(v_h_684_, v___x_689_);
v___x_691_ = lean_nat_add(v_i_677_, v___x_686_);
lean_dec(v_i_677_);
lean_inc(v_v_682_);
lean_inc(v_k_681_);
v___x_692_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg(v_entries_678_, v_h_690_, v_depth_674_, v_k_681_, v_v_682_);
v_i_677_ = v___x_691_;
v_entries_678_ = v___x_692_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__9___redArg___boxed(lean_object* v_depth_694_, lean_object* v_keys_695_, lean_object* v_vals_696_, lean_object* v_i_697_, lean_object* v_entries_698_){
_start:
{
size_t v_depth_boxed_699_; lean_object* v_res_700_; 
v_depth_boxed_699_ = lean_unbox_usize(v_depth_694_);
lean_dec(v_depth_694_);
v_res_700_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__9___redArg(v_depth_boxed_699_, v_keys_695_, v_vals_696_, v_i_697_, v_entries_698_);
lean_dec_ref(v_vals_696_);
lean_dec_ref(v_keys_695_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_x_701_, lean_object* v_x_702_, lean_object* v_x_703_, lean_object* v_x_704_, lean_object* v_x_705_){
_start:
{
size_t v_x_6220__boxed_706_; size_t v_x_6221__boxed_707_; lean_object* v_res_708_; 
v_x_6220__boxed_706_ = lean_unbox_usize(v_x_702_);
lean_dec(v_x_702_);
v_x_6221__boxed_707_ = lean_unbox_usize(v_x_703_);
lean_dec(v_x_703_);
v_res_708_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg(v_x_701_, v_x_6220__boxed_706_, v_x_6221__boxed_707_, v_x_704_, v_x_705_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2___redArg(lean_object* v_x_709_, lean_object* v_x_710_, lean_object* v_x_711_){
_start:
{
uint64_t v___x_712_; size_t v___x_713_; size_t v___x_714_; lean_object* v___x_715_; 
v___x_712_ = l_Lean_instHashableMVarId_hash(v_x_710_);
v___x_713_ = lean_uint64_to_usize(v___x_712_);
v___x_714_ = ((size_t)1ULL);
v___x_715_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg(v_x_709_, v___x_713_, v___x_714_, v_x_710_, v_x_711_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0(lean_object* v_mvarId_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v_mctx_724_; lean_object* v_mvarDecl_725_; lean_object* v_userName_726_; lean_object* v_lctx_727_; lean_object* v_type_728_; lean_object* v_depth_729_; lean_object* v_localInstances_730_; uint8_t v_kind_731_; lean_object* v_numScopeArgs_732_; lean_object* v_index_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_797_; 
v___x_722_ = lean_st_ref_get(v___y_720_);
lean_dec(v___x_722_);
v___x_723_ = lean_st_ref_get(v___y_718_);
v_mctx_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc_ref(v_mctx_724_);
lean_dec(v___x_723_);
lean_inc(v_mvarId_716_);
v_mvarDecl_725_ = l_Lean_MetavarContext_getDecl(v_mctx_724_, v_mvarId_716_);
lean_dec_ref(v_mctx_724_);
v_userName_726_ = lean_ctor_get(v_mvarDecl_725_, 0);
v_lctx_727_ = lean_ctor_get(v_mvarDecl_725_, 1);
v_type_728_ = lean_ctor_get(v_mvarDecl_725_, 2);
v_depth_729_ = lean_ctor_get(v_mvarDecl_725_, 3);
v_localInstances_730_ = lean_ctor_get(v_mvarDecl_725_, 4);
v_kind_731_ = lean_ctor_get_uint8(v_mvarDecl_725_, sizeof(void*)*7);
v_numScopeArgs_732_ = lean_ctor_get(v_mvarDecl_725_, 5);
v_index_733_ = lean_ctor_get(v_mvarDecl_725_, 6);
v_isSharedCheck_797_ = !lean_is_exclusive(v_mvarDecl_725_);
if (v_isSharedCheck_797_ == 0)
{
v___x_735_ = v_mvarDecl_725_;
v_isShared_736_ = v_isSharedCheck_797_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_index_733_);
lean_inc(v_numScopeArgs_732_);
lean_inc(v_localInstances_730_);
lean_inc(v_depth_729_);
lean_inc(v_type_728_);
lean_inc(v_lctx_727_);
lean_inc(v_userName_726_);
lean_dec(v_mvarDecl_725_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_797_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_737_; 
v___x_737_ = l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0(v_lctx_727_, v___y_717_, v___y_718_, v___y_719_, v___y_720_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_739_; lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_788_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref(v___x_737_);
v___x_739_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_type_728_, v___y_718_, v___y_720_);
v_a_740_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_788_ == 0)
{
v___x_742_ = v___x_739_;
v_isShared_743_ = v_isSharedCheck_788_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_739_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_788_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v_fst_746_; lean_object* v_snd_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v_mctx_750_; lean_object* v_cache_751_; lean_object* v_zetaDeltaFVarIds_752_; lean_object* v_postponed_753_; lean_object* v_diag_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_787_; 
v___x_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_744_, 0, v_a_738_);
lean_ctor_set(v___x_744_, 1, v_a_740_);
v___x_745_ = lean_sharecommon_quick(v___x_744_);
lean_dec_ref(v___x_744_);
v_fst_746_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_fst_746_);
v_snd_747_ = lean_ctor_get(v___x_745_, 1);
lean_inc(v_snd_747_);
lean_dec(v___x_745_);
v___x_748_ = lean_st_ref_get(v___y_720_);
lean_dec(v___x_748_);
v___x_749_ = lean_st_ref_take(v___y_718_);
v_mctx_750_ = lean_ctor_get(v___x_749_, 0);
v_cache_751_ = lean_ctor_get(v___x_749_, 1);
v_zetaDeltaFVarIds_752_ = lean_ctor_get(v___x_749_, 2);
v_postponed_753_ = lean_ctor_get(v___x_749_, 3);
v_diag_754_ = lean_ctor_get(v___x_749_, 4);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_787_ == 0)
{
v___x_756_ = v___x_749_;
v_isShared_757_ = v_isSharedCheck_787_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_diag_754_);
lean_inc(v_postponed_753_);
lean_inc(v_zetaDeltaFVarIds_752_);
lean_inc(v_cache_751_);
lean_inc(v_mctx_750_);
lean_dec(v___x_749_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_787_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v_depth_758_; lean_object* v_levelAssignDepth_759_; lean_object* v_lmvarCounter_760_; lean_object* v_mvarCounter_761_; lean_object* v_lDecls_762_; lean_object* v_decls_763_; lean_object* v_userNames_764_; lean_object* v_lAssignment_765_; lean_object* v_eAssignment_766_; lean_object* v_dAssignment_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_786_; 
v_depth_758_ = lean_ctor_get(v_mctx_750_, 0);
v_levelAssignDepth_759_ = lean_ctor_get(v_mctx_750_, 1);
v_lmvarCounter_760_ = lean_ctor_get(v_mctx_750_, 2);
v_mvarCounter_761_ = lean_ctor_get(v_mctx_750_, 3);
v_lDecls_762_ = lean_ctor_get(v_mctx_750_, 4);
v_decls_763_ = lean_ctor_get(v_mctx_750_, 5);
v_userNames_764_ = lean_ctor_get(v_mctx_750_, 6);
v_lAssignment_765_ = lean_ctor_get(v_mctx_750_, 7);
v_eAssignment_766_ = lean_ctor_get(v_mctx_750_, 8);
v_dAssignment_767_ = lean_ctor_get(v_mctx_750_, 9);
v_isSharedCheck_786_ = !lean_is_exclusive(v_mctx_750_);
if (v_isSharedCheck_786_ == 0)
{
v___x_769_ = v_mctx_750_;
v_isShared_770_ = v_isSharedCheck_786_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_dAssignment_767_);
lean_inc(v_eAssignment_766_);
lean_inc(v_lAssignment_765_);
lean_inc(v_userNames_764_);
lean_inc(v_decls_763_);
lean_inc(v_lDecls_762_);
lean_inc(v_mvarCounter_761_);
lean_inc(v_lmvarCounter_760_);
lean_inc(v_levelAssignDepth_759_);
lean_inc(v_depth_758_);
lean_dec(v_mctx_750_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_786_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 2, v_snd_747_);
lean_ctor_set(v___x_735_, 1, v_fst_746_);
v___x_772_ = v___x_735_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_userName_726_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_fst_746_);
lean_ctor_set(v_reuseFailAlloc_785_, 2, v_snd_747_);
lean_ctor_set(v_reuseFailAlloc_785_, 3, v_depth_729_);
lean_ctor_set(v_reuseFailAlloc_785_, 4, v_localInstances_730_);
lean_ctor_set(v_reuseFailAlloc_785_, 5, v_numScopeArgs_732_);
lean_ctor_set(v_reuseFailAlloc_785_, 6, v_index_733_);
lean_ctor_set_uint8(v_reuseFailAlloc_785_, sizeof(void*)*7, v_kind_731_);
v___x_772_ = v_reuseFailAlloc_785_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
lean_object* v___x_773_; lean_object* v___x_775_; 
v___x_773_ = l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2___redArg(v_decls_763_, v_mvarId_716_, v___x_772_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 5, v___x_773_);
v___x_775_ = v___x_769_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_depth_758_);
lean_ctor_set(v_reuseFailAlloc_784_, 1, v_levelAssignDepth_759_);
lean_ctor_set(v_reuseFailAlloc_784_, 2, v_lmvarCounter_760_);
lean_ctor_set(v_reuseFailAlloc_784_, 3, v_mvarCounter_761_);
lean_ctor_set(v_reuseFailAlloc_784_, 4, v_lDecls_762_);
lean_ctor_set(v_reuseFailAlloc_784_, 5, v___x_773_);
lean_ctor_set(v_reuseFailAlloc_784_, 6, v_userNames_764_);
lean_ctor_set(v_reuseFailAlloc_784_, 7, v_lAssignment_765_);
lean_ctor_set(v_reuseFailAlloc_784_, 8, v_eAssignment_766_);
lean_ctor_set(v_reuseFailAlloc_784_, 9, v_dAssignment_767_);
v___x_775_ = v_reuseFailAlloc_784_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
lean_object* v___x_777_; 
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 0, v___x_775_);
v___x_777_ = v___x_756_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_783_, 1, v_cache_751_);
lean_ctor_set(v_reuseFailAlloc_783_, 2, v_zetaDeltaFVarIds_752_);
lean_ctor_set(v_reuseFailAlloc_783_, 3, v_postponed_753_);
lean_ctor_set(v_reuseFailAlloc_783_, 4, v_diag_754_);
v___x_777_ = v_reuseFailAlloc_783_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_778_ = lean_st_ref_set(v___y_718_, v___x_777_);
v___x_779_ = lean_box(0);
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 0, v___x_779_);
v___x_781_ = v___x_742_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
lean_del_object(v___x_735_);
lean_dec(v_index_733_);
lean_dec(v_numScopeArgs_732_);
lean_dec_ref(v_localInstances_730_);
lean_dec(v_depth_729_);
lean_dec_ref(v_type_728_);
lean_dec(v_userName_726_);
lean_dec(v_mvarId_716_);
v_a_789_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_737_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_737_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_789_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0___boxed(lean_object* v_mvarId_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0(v_mvarId_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic(lean_object* v_mvarId_805_, lean_object* v_tacticCode_806_, lean_object* v_ctx_807_, lean_object* v_s_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_){
_start:
{
lean_object* v___x_814_; 
lean_inc(v_mvarId_805_);
v___x_814_ = l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0(v_mvarId_805_, v_a_809_, v_a_810_, v_a_811_, v_a_812_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v___f_815_; lean_object* v___x_816_; uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v___f_819_; lean_object* v___x_820_; 
lean_dec_ref(v___x_814_);
v___f_815_ = lean_alloc_closure((void*)(l_Lean_Elab_runTactic___lam__0___boxed), 10, 1);
lean_closure_set(v___f_815_, 0, v_tacticCode_806_);
v___x_816_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_run___boxed), 9, 2);
lean_closure_set(v___x_816_, 0, v_mvarId_805_);
lean_closure_set(v___x_816_, 1, v___f_815_);
v___x_817_ = 1;
v___x_818_ = lean_box(v___x_817_);
v___f_819_ = lean_alloc_closure((void*)(l_Lean_Elab_runTactic___lam__1___boxed), 9, 2);
lean_closure_set(v___f_819_, 0, v___x_816_);
lean_closure_set(v___f_819_, 1, v___x_818_);
v___x_820_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___f_819_, v_ctx_807_, v_s_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_);
return v___x_820_;
}
else
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_828_; 
lean_dec_ref(v_s_808_);
lean_dec_ref(v_ctx_807_);
lean_dec(v_tacticCode_806_);
lean_dec(v_mvarId_805_);
v_a_821_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_828_ == 0)
{
v___x_823_ = v___x_814_;
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_814_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_826_; 
if (v_isShared_824_ == 0)
{
v___x_826_ = v___x_823_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_821_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___boxed(lean_object* v_mvarId_829_, lean_object* v_tacticCode_830_, lean_object* v_ctx_831_, lean_object* v_s_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Lean_Elab_runTactic(v_mvarId_829_, v_tacticCode_830_, v_ctx_831_, v_s_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_);
lean_dec(v_a_836_);
lean_dec_ref(v_a_835_);
lean_dec(v_a_834_);
lean_dec_ref(v_a_833_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1(lean_object* v_e_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_e_839_, v___y_841_, v___y_843_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___boxed(lean_object* v_e_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1(v_e_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2(lean_object* v_00_u03b2_853_, lean_object* v_x_854_, lean_object* v_x_855_, lean_object* v_x_856_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2___redArg(v_x_854_, v_x_855_, v_x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1(lean_object* v_00_u03b4_858_, lean_object* v_t_859_, lean_object* v_k_860_){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___redArg(v_t_859_, v_k_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b4_862_, lean_object* v_t_863_, lean_object* v_k_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1(v_00_u03b4_862_, v_t_863_, v_k_864_);
lean_dec(v_k_864_);
lean_dec(v_t_863_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_866_, lean_object* v_x_867_, size_t v_x_868_, size_t v_x_869_, lean_object* v_x_870_, lean_object* v_x_871_){
_start:
{
lean_object* v___x_872_; 
v___x_872_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___redArg(v_x_867_, v_x_868_, v_x_869_, v_x_870_, v_x_871_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_873_, lean_object* v_x_874_, lean_object* v_x_875_, lean_object* v_x_876_, lean_object* v_x_877_, lean_object* v_x_878_){
_start:
{
size_t v_x_6575__boxed_879_; size_t v_x_6576__boxed_880_; lean_object* v_res_881_; 
v_x_6575__boxed_879_ = lean_unbox_usize(v_x_875_);
lean_dec(v_x_875_);
v_x_6576__boxed_880_ = lean_unbox_usize(v_x_876_);
lean_dec(v_x_876_);
v_res_881_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6(v_00_u03b2_873_, v_x_874_, v_x_6575__boxed_879_, v_x_6576__boxed_880_, v_x_877_, v_x_878_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__8(lean_object* v_00_u03b2_882_, lean_object* v_n_883_, lean_object* v_k_884_, lean_object* v_v_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__8___redArg(v_n_883_, v_k_884_, v_v_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__9(lean_object* v_00_u03b2_887_, size_t v_depth_888_, lean_object* v_keys_889_, lean_object* v_vals_890_, lean_object* v_heq_891_, lean_object* v_i_892_, lean_object* v_entries_893_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__9___redArg(v_depth_888_, v_keys_889_, v_vals_890_, v_i_892_, v_entries_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__9___boxed(lean_object* v_00_u03b2_895_, lean_object* v_depth_896_, lean_object* v_keys_897_, lean_object* v_vals_898_, lean_object* v_heq_899_, lean_object* v_i_900_, lean_object* v_entries_901_){
_start:
{
size_t v_depth_boxed_902_; lean_object* v_res_903_; 
v_depth_boxed_902_ = lean_unbox_usize(v_depth_896_);
lean_dec(v_depth_896_);
v_res_903_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__9(v_00_u03b2_895_, v_depth_boxed_902_, v_keys_897_, v_vals_898_, v_heq_899_, v_i_900_, v_entries_901_);
lean_dec_ref(v_vals_898_);
lean_dec_ref(v_keys_897_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__8_spec__12(lean_object* v_00_u03b2_904_, lean_object* v_x_905_, lean_object* v_x_906_, lean_object* v_x_907_, lean_object* v_x_908_){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__6_spec__8_spec__12___redArg(v_x_905_, v_x_906_, v_x_907_, v_x_908_);
return v___x_909_;
}
}
lean_object* runtime_initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Meta(builtin);
}
#ifdef __cplusplus
}
#endif
