// Lean compiler output
// Module: Lean.Meta.Sym.Simp.SimpM
// Imports: public import Lean.Meta.Sym.Pattern
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
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedConfig_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedConfig;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Simp_Result_isContextDependent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_isContextDependent___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_SimpM_0__Lean_Meta_Sym_Simp_MethodsRefPointed;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__5;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__6;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__7;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__9;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__10;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__12;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__13;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__15;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__16;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__18;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__19;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__21;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__22;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__24;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__25;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__26;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__31;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__32;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__33;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__34;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__35;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__36;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__37;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__38;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__39;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__40;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__41;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__42;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__43;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_unsigned_to_nat(2u);
v___x_2_ = lean_unsigned_to_nat(100000u);
v___x_3_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedConfig_default(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0, &l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedConfig(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = l_Lean_Meta_Sym_Simp_instInhabitedConfig_default;
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx(lean_object* v_x_6_){
_start:
{
if (lean_obj_tag(v_x_6_) == 0)
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(0u);
return v___x_7_;
}
else
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(1u);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx___boxed(lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Meta_Sym_Simp_Result_ctorIdx(v_x_9_);
lean_dec_ref(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
if (lean_obj_tag(v_t_11_) == 0)
{
uint8_t v_done_13_; uint8_t v_contextDependent_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v_done_13_ = lean_ctor_get_uint8(v_t_11_, 0);
v_contextDependent_14_ = lean_ctor_get_uint8(v_t_11_, 1);
lean_dec_ref(v_t_11_);
v___x_15_ = lean_box(v_done_13_);
v___x_16_ = lean_box(v_contextDependent_14_);
v___x_17_ = lean_apply_2(v_k_12_, v___x_15_, v___x_16_);
return v___x_17_;
}
else
{
lean_object* v_e_x27_18_; lean_object* v_proof_19_; uint8_t v_done_20_; uint8_t v_contextDependent_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_e_x27_18_ = lean_ctor_get(v_t_11_, 0);
lean_inc_ref(v_e_x27_18_);
v_proof_19_ = lean_ctor_get(v_t_11_, 1);
lean_inc_ref(v_proof_19_);
v_done_20_ = lean_ctor_get_uint8(v_t_11_, sizeof(void*)*2);
v_contextDependent_21_ = lean_ctor_get_uint8(v_t_11_, sizeof(void*)*2 + 1);
lean_dec_ref(v_t_11_);
v___x_22_ = lean_box(v_done_20_);
v___x_23_ = lean_box(v_contextDependent_21_);
v___x_24_ = lean_apply_4(v_k_12_, v_e_x27_18_, v_proof_19_, v___x_22_, v___x_23_);
return v___x_24_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim(lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_27_, v_k_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___boxed(lean_object* v_motive_31_, lean_object* v_ctorIdx_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_Meta_Sym_Simp_Result_ctorElim(v_motive_31_, v_ctorIdx_32_, v_t_33_, v_h_34_, v_k_35_);
lean_dec(v_ctorIdx_32_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim___redArg(lean_object* v_t_37_, lean_object* v_rfl_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_37_, v_rfl_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim(lean_object* v_motive_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_rfl_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_41_, v_rfl_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim___redArg(lean_object* v_t_45_, lean_object* v_step_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_45_, v_step_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_step_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_49_, v_step_51_);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0(void){
_start:
{
uint8_t v___x_53_; lean_object* v___x_54_; 
v___x_53_ = 0;
v___x_54_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_54_, 0, v___x_53_);
lean_ctor_set_uint8(v___x_54_, 1, v___x_53_);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedResult_default(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0, &l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedResult(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Meta_Sym_Simp_instInhabitedResult_default;
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t v_done_57_, uint8_t v_contextDependent_58_){
_start:
{
if (v_done_57_ == 0)
{
if (v_contextDependent_58_ == 0)
{
lean_object* v___x_59_; 
v___x_59_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_59_, 0, v_contextDependent_58_);
lean_ctor_set_uint8(v___x_59_, 1, v_contextDependent_58_);
return v___x_59_;
}
else
{
lean_object* v___x_60_; 
v___x_60_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_60_, 0, v_done_57_);
lean_ctor_set_uint8(v___x_60_, 1, v_contextDependent_58_);
return v___x_60_;
}
}
else
{
if (v_contextDependent_58_ == 0)
{
lean_object* v___x_61_; 
v___x_61_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_61_, 0, v_done_57_);
lean_ctor_set_uint8(v___x_61_, 1, v_contextDependent_58_);
return v___x_61_;
}
else
{
lean_object* v___x_62_; 
v___x_62_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_62_, 0, v_contextDependent_58_);
lean_ctor_set_uint8(v___x_62_, 1, v_contextDependent_58_);
return v___x_62_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult___boxed(lean_object* v_done_63_, lean_object* v_contextDependent_64_){
_start:
{
uint8_t v_done_boxed_65_; uint8_t v_contextDependent_boxed_66_; lean_object* v_res_67_; 
v_done_boxed_65_ = lean_unbox(v_done_63_);
v_contextDependent_boxed_66_ = lean_unbox(v_contextDependent_64_);
v_res_67_ = l_Lean_Meta_Sym_Simp_mkRflResult(v_done_boxed_65_, v_contextDependent_boxed_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t v_contextDependent_68_){
_start:
{
if (v_contextDependent_68_ == 0)
{
lean_object* v___x_69_; 
v___x_69_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_69_, 0, v_contextDependent_68_);
lean_ctor_set_uint8(v___x_69_, 1, v_contextDependent_68_);
return v___x_69_;
}
else
{
uint8_t v___x_70_; lean_object* v___x_71_; 
v___x_70_ = 0;
v___x_71_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_71_, 0, v___x_70_);
lean_ctor_set_uint8(v___x_71_, 1, v_contextDependent_68_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD___boxed(lean_object* v_contextDependent_72_){
_start:
{
uint8_t v_contextDependent_boxed_73_; lean_object* v_res_74_; 
v_contextDependent_boxed_73_ = lean_unbox(v_contextDependent_72_);
v_res_74_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_contextDependent_boxed_73_);
return v_res_74_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Simp_Result_isContextDependent(lean_object* v_x_75_){
_start:
{
if (lean_obj_tag(v_x_75_) == 0)
{
uint8_t v_contextDependent_76_; 
v_contextDependent_76_ = lean_ctor_get_uint8(v_x_75_, 1);
return v_contextDependent_76_;
}
else
{
uint8_t v_contextDependent_77_; 
v_contextDependent_77_ = lean_ctor_get_uint8(v_x_75_, sizeof(void*)*2 + 1);
return v_contextDependent_77_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_isContextDependent___boxed(lean_object* v_x_78_){
_start:
{
uint8_t v_res_79_; lean_object* v_r_80_; 
v_res_79_ = l_Lean_Meta_Sym_Simp_Result_isContextDependent(v_x_78_);
lean_dec_ref(v_x_78_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object* v_x_81_){
_start:
{
if (lean_obj_tag(v_x_81_) == 0)
{
uint8_t v_done_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_90_; 
v_done_82_ = lean_ctor_get_uint8(v_x_81_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v_x_81_);
if (v_isSharedCheck_90_ == 0)
{
v___x_84_ = v_x_81_;
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
else
{
lean_dec(v_x_81_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
uint8_t v___x_86_; lean_object* v___x_88_; 
v___x_86_ = 1;
if (v_isShared_85_ == 0)
{
v___x_88_ = v___x_84_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v_reuseFailAlloc_89_, 0, v_done_82_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
lean_ctor_set_uint8(v___x_88_, 1, v___x_86_);
return v___x_88_;
}
}
}
else
{
lean_object* v_e_x27_91_; lean_object* v_proof_92_; uint8_t v_done_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_101_; 
v_e_x27_91_ = lean_ctor_get(v_x_81_, 0);
v_proof_92_ = lean_ctor_get(v_x_81_, 1);
v_done_93_ = lean_ctor_get_uint8(v_x_81_, sizeof(void*)*2);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_81_);
if (v_isSharedCheck_101_ == 0)
{
v___x_95_ = v_x_81_;
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_proof_92_);
lean_inc(v_e_x27_91_);
lean_dec(v_x_81_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
uint8_t v___x_97_; lean_object* v___x_99_; 
v___x_97_ = 1;
if (v_isShared_96_ == 0)
{
v___x_99_ = v___x_95_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_e_x27_91_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_proof_92_);
lean_ctor_set_uint8(v_reuseFailAlloc_100_, sizeof(void*)*2, v_done_93_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
lean_ctor_set_uint8(v___x_99_, sizeof(void*)*2 + 1, v___x_97_);
return v___x_99_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_SimpM_0__Lean_Meta_Sym_Simp_MethodsRefPointed(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_box(0);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = l_instMonadEIO(lean_box(0));
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__1(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0);
v___x_105_ = l_StateRefT_x27_instMonad___redArg(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__2(void){
_start:
{
lean_object* v___f_106_; 
v___f_106_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_106_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__3(void){
_start:
{
lean_object* v___f_107_; 
v___f_107_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_107_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__4(void){
_start:
{
lean_object* v___f_108_; 
v___f_108_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_108_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__5(void){
_start:
{
lean_object* v___f_109_; 
v___f_109_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_109_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__6(void){
_start:
{
lean_object* v___x_110_; lean_object* v___f_111_; 
v___x_110_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_111_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_111_, 0, v___x_110_);
return v___f_111_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__7(void){
_start:
{
lean_object* v___x_112_; lean_object* v___f_113_; 
v___x_112_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_113_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_113_, 0, v___x_112_);
return v___f_113_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8(void){
_start:
{
lean_object* v___f_114_; lean_object* v___f_115_; lean_object* v___x_116_; 
v___f_114_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__7, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__7_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__7);
v___f_115_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__6, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__6_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__6);
v___x_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_116_, 0, v___f_115_);
lean_ctor_set(v___x_116_, 1, v___f_114_);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__9(void){
_start:
{
lean_object* v___x_117_; lean_object* v___f_118_; 
v___x_117_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8);
v___f_118_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_118_, 0, v___x_117_);
return v___f_118_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__10(void){
_start:
{
lean_object* v___x_119_; lean_object* v___f_120_; 
v___x_119_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8);
v___f_120_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_120_, 0, v___x_119_);
return v___f_120_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11(void){
_start:
{
lean_object* v___f_121_; lean_object* v___f_122_; lean_object* v___x_123_; 
v___f_121_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__10, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__10_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__10);
v___f_122_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__9, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__9_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__9);
v___x_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_123_, 0, v___f_122_);
lean_ctor_set(v___x_123_, 1, v___f_121_);
return v___x_123_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__12(void){
_start:
{
lean_object* v___x_124_; lean_object* v___f_125_; 
v___x_124_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11);
v___f_125_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_125_, 0, v___x_124_);
return v___f_125_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__13(void){
_start:
{
lean_object* v___x_126_; lean_object* v___f_127_; 
v___x_126_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11);
v___f_127_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_127_, 0, v___x_126_);
return v___f_127_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14(void){
_start:
{
lean_object* v___f_128_; lean_object* v___f_129_; lean_object* v___x_130_; 
v___f_128_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__13, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__13_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__13);
v___f_129_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__12, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__12_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__12);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___f_129_);
lean_ctor_set(v___x_130_, 1, v___f_128_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__15(void){
_start:
{
lean_object* v___x_131_; lean_object* v___f_132_; 
v___x_131_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14);
v___f_132_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_132_, 0, v___x_131_);
return v___f_132_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__16(void){
_start:
{
lean_object* v___x_133_; lean_object* v___f_134_; 
v___x_133_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14);
v___f_134_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_134_, 0, v___x_133_);
return v___f_134_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17(void){
_start:
{
lean_object* v___f_135_; lean_object* v___f_136_; lean_object* v___x_137_; 
v___f_135_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__16, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__16_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__16);
v___f_136_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__15, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__15_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__15);
v___x_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_137_, 0, v___f_136_);
lean_ctor_set(v___x_137_, 1, v___f_135_);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__18(void){
_start:
{
lean_object* v___x_138_; lean_object* v___f_139_; 
v___x_138_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17);
v___f_139_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_139_, 0, v___x_138_);
return v___f_139_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__19(void){
_start:
{
lean_object* v___x_140_; lean_object* v___f_141_; 
v___x_140_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17);
v___f_141_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_141_, 0, v___x_140_);
return v___f_141_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20(void){
_start:
{
lean_object* v___f_142_; lean_object* v___f_143_; lean_object* v___x_144_; 
v___f_142_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__19, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__19_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__19);
v___f_143_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__18, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__18_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__18);
v___x_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_144_, 0, v___f_143_);
lean_ctor_set(v___x_144_, 1, v___f_142_);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__21(void){
_start:
{
lean_object* v___x_145_; lean_object* v___f_146_; 
v___x_145_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20);
v___f_146_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_146_, 0, v___x_145_);
return v___f_146_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__22(void){
_start:
{
lean_object* v___x_147_; lean_object* v___f_148_; 
v___x_147_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20);
v___f_148_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_148_, 0, v___x_147_);
return v___f_148_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23(void){
_start:
{
lean_object* v___f_149_; lean_object* v___f_150_; lean_object* v___x_151_; 
v___f_149_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__22, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__22_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__22);
v___f_150_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__21, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__21_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__21);
v___x_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_151_, 0, v___f_150_);
lean_ctor_set(v___x_151_, 1, v___f_149_);
return v___x_151_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__24(void){
_start:
{
lean_object* v___x_152_; lean_object* v___f_153_; 
v___x_152_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23);
v___f_153_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_153_, 0, v___x_152_);
return v___f_153_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__25(void){
_start:
{
lean_object* v___x_154_; lean_object* v___f_155_; 
v___x_154_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23);
v___f_155_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_155_, 0, v___x_154_);
return v___f_155_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__26(void){
_start:
{
lean_object* v___f_156_; lean_object* v___f_157_; lean_object* v___x_158_; 
v___f_156_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__25, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__25_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__25);
v___f_157_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__24, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__24_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__24);
v___x_158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_158_, 0, v___f_157_);
lean_ctor_set(v___x_158_, 1, v___f_156_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27(void){
_start:
{
lean_object* v___f_159_; 
v___f_159_ = lean_alloc_closure((void*)(l_ReaderT_instMonadFunctor___lam__0), 4, 0);
return v___f_159_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28(void){
_start:
{
lean_object* v___f_160_; 
v___f_160_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___lam__0___boxed), 3, 0);
return v___f_160_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29(void){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadFunctor___aux__1___boxed), 7, 3);
lean_closure_set(v___x_161_, 0, lean_box(0));
lean_closure_set(v___x_161_, 1, lean_box(0));
lean_closure_set(v___x_161_, 2, lean_box(0));
return v___x_161_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30(void){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 3);
lean_closure_set(v___x_162_, 0, lean_box(0));
lean_closure_set(v___x_162_, 1, lean_box(0));
lean_closure_set(v___x_162_, 2, lean_box(0));
return v___x_162_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__31(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_163_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_164_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30);
v___x_165_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29);
v___x_166_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_165_, v___x_164_, v___x_163_);
return v___x_166_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__32(void){
_start:
{
lean_object* v___x_167_; lean_object* v___f_168_; lean_object* v___f_169_; lean_object* v___x_170_; 
v___x_167_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__31, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__31_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__31);
v___f_168_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28);
v___f_169_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27);
v___x_170_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_169_, v___f_168_, v___x_167_);
return v___x_170_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__33(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_171_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__32, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__32_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__32);
v___x_172_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30);
v___x_173_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29);
v___x_174_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_173_, v___x_172_, v___x_171_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__34(void){
_start:
{
lean_object* v___x_175_; lean_object* v___f_176_; lean_object* v___f_177_; lean_object* v___x_178_; 
v___x_175_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__33, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__33_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__33);
v___f_176_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28);
v___f_177_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27);
v___x_178_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_177_, v___f_176_, v___x_175_);
return v___x_178_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__35(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_179_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__34, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__34_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__34);
v___x_180_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30);
v___x_181_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29);
v___x_182_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_181_, v___x_180_, v___x_179_);
return v___x_182_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__36(void){
_start:
{
lean_object* v___x_183_; lean_object* v___f_184_; lean_object* v___f_185_; lean_object* v___x_186_; 
v___x_183_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__35, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__35_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__35);
v___f_184_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28);
v___f_185_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27);
v___x_186_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_185_, v___f_184_, v___x_183_);
return v___x_186_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__37(void){
_start:
{
lean_object* v___x_187_; lean_object* v___f_188_; lean_object* v___f_189_; lean_object* v___x_190_; 
v___x_187_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__36, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__36_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__36);
v___f_188_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28);
v___f_189_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27);
v___x_190_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_189_, v___f_188_, v___x_187_);
return v___x_190_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__38(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___f_193_; 
v___x_191_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30);
v___x_192_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_193_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_193_, 0, v___x_192_);
lean_closure_set(v___f_193_, 1, v___x_191_);
return v___f_193_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__39(void){
_start:
{
lean_object* v___f_194_; lean_object* v___f_195_; lean_object* v___f_196_; 
v___f_194_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28);
v___f_195_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__38, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__38_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__38);
v___f_196_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_196_, 0, v___f_195_);
lean_closure_set(v___f_196_, 1, v___f_194_);
return v___f_196_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__40(void){
_start:
{
lean_object* v___x_197_; lean_object* v___f_198_; lean_object* v___f_199_; 
v___x_197_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30);
v___f_198_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__39, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__39_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__39);
v___f_199_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_199_, 0, v___f_198_);
lean_closure_set(v___f_199_, 1, v___x_197_);
return v___f_199_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__41(void){
_start:
{
lean_object* v___f_200_; lean_object* v___f_201_; lean_object* v___f_202_; 
v___f_200_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28);
v___f_201_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__40, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__40_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__40);
v___f_202_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_202_, 0, v___f_201_);
lean_closure_set(v___f_202_, 1, v___f_200_);
return v___f_202_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__42(void){
_start:
{
lean_object* v___f_203_; lean_object* v___f_204_; lean_object* v___f_205_; 
v___f_203_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28);
v___f_204_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__41, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__41_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__41);
v___f_205_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_205_, 0, v___f_204_);
lean_closure_set(v___f_205_, 1, v___f_203_);
return v___f_205_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__43(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_mk_string_unchecked("<default>", 9, 9);
return v___x_206_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__43, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__43_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__43);
v___x_208_ = l_Lean_stringToMessageData(v___x_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM(lean_object* v_00_u03b1_209_){
_start:
{
lean_object* v___x_210_; lean_object* v_toApplicative_211_; lean_object* v_toFunctor_212_; lean_object* v_toSeq_213_; lean_object* v_toSeqLeft_214_; lean_object* v_toSeqRight_215_; lean_object* v___f_216_; lean_object* v___f_217_; lean_object* v___f_218_; lean_object* v___f_219_; lean_object* v___x_220_; lean_object* v___f_221_; lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v_toApplicative_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_267_; 
v___x_210_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__1, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__1_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__1);
v_toApplicative_211_ = lean_ctor_get(v___x_210_, 0);
v_toFunctor_212_ = lean_ctor_get(v_toApplicative_211_, 0);
v_toSeq_213_ = lean_ctor_get(v_toApplicative_211_, 2);
v_toSeqLeft_214_ = lean_ctor_get(v_toApplicative_211_, 3);
v_toSeqRight_215_ = lean_ctor_get(v_toApplicative_211_, 4);
v___f_216_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__2, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__2_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__2);
v___f_217_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__3, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__3_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__3);
lean_inc_ref_n(v_toFunctor_212_, 2);
v___f_218_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_218_, 0, v_toFunctor_212_);
v___f_219_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_219_, 0, v_toFunctor_212_);
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v___f_218_);
lean_ctor_set(v___x_220_, 1, v___f_219_);
lean_inc(v_toSeqRight_215_);
v___f_221_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_221_, 0, v_toSeqRight_215_);
lean_inc(v_toSeqLeft_214_);
v___f_222_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_222_, 0, v_toSeqLeft_214_);
lean_inc(v_toSeq_213_);
v___f_223_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_223_, 0, v_toSeq_213_);
v___x_224_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_224_, 0, v___x_220_);
lean_ctor_set(v___x_224_, 1, v___f_216_);
lean_ctor_set(v___x_224_, 2, v___f_223_);
lean_ctor_set(v___x_224_, 3, v___f_222_);
lean_ctor_set(v___x_224_, 4, v___f_221_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
lean_ctor_set(v___x_225_, 1, v___f_217_);
v___x_226_ = l_StateRefT_x27_instMonad___redArg(v___x_225_);
v_toApplicative_227_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_267_ == 0)
{
lean_object* v_unused_268_; 
v_unused_268_ = lean_ctor_get(v___x_226_, 1);
lean_dec(v_unused_268_);
v___x_229_ = v___x_226_;
v_isShared_230_ = v_isSharedCheck_267_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_toApplicative_227_);
lean_dec(v___x_226_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_267_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v_toFunctor_231_; lean_object* v_toSeq_232_; lean_object* v_toSeqLeft_233_; lean_object* v_toSeqRight_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_265_; 
v_toFunctor_231_ = lean_ctor_get(v_toApplicative_227_, 0);
v_toSeq_232_ = lean_ctor_get(v_toApplicative_227_, 2);
v_toSeqLeft_233_ = lean_ctor_get(v_toApplicative_227_, 3);
v_toSeqRight_234_ = lean_ctor_get(v_toApplicative_227_, 4);
v_isSharedCheck_265_ = !lean_is_exclusive(v_toApplicative_227_);
if (v_isSharedCheck_265_ == 0)
{
lean_object* v_unused_266_; 
v_unused_266_ = lean_ctor_get(v_toApplicative_227_, 1);
lean_dec(v_unused_266_);
v___x_236_ = v_toApplicative_227_;
v_isShared_237_ = v_isSharedCheck_265_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_toSeqRight_234_);
lean_inc(v_toSeqLeft_233_);
lean_inc(v_toSeq_232_);
lean_inc(v_toFunctor_231_);
lean_dec(v_toApplicative_227_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_265_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___f_238_; lean_object* v___f_239_; lean_object* v___f_240_; lean_object* v___f_241_; lean_object* v___x_242_; lean_object* v___f_243_; lean_object* v___f_244_; lean_object* v___f_245_; lean_object* v___x_247_; 
v___f_238_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__4, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__4_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__4);
v___f_239_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__5, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__5_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__5);
lean_inc_ref(v_toFunctor_231_);
v___f_240_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_240_, 0, v_toFunctor_231_);
v___f_241_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_241_, 0, v_toFunctor_231_);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v___f_240_);
lean_ctor_set(v___x_242_, 1, v___f_241_);
v___f_243_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_243_, 0, v_toSeqRight_234_);
v___f_244_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_244_, 0, v_toSeqLeft_233_);
v___f_245_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_245_, 0, v_toSeq_232_);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 4, v___f_243_);
lean_ctor_set(v___x_236_, 3, v___f_244_);
lean_ctor_set(v___x_236_, 2, v___f_245_);
lean_ctor_set(v___x_236_, 1, v___f_238_);
lean_ctor_set(v___x_236_, 0, v___x_242_);
v___x_247_ = v___x_236_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_242_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v___f_238_);
lean_ctor_set(v_reuseFailAlloc_264_, 2, v___f_245_);
lean_ctor_set(v_reuseFailAlloc_264_, 3, v___f_244_);
lean_ctor_set(v_reuseFailAlloc_264_, 4, v___f_243_);
v___x_247_ = v_reuseFailAlloc_264_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
lean_object* v___x_249_; 
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 1, v___f_239_);
lean_ctor_set(v___x_229_, 0, v___x_247_);
v___x_249_ = v___x_229_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_247_);
lean_ctor_set(v_reuseFailAlloc_263_, 1, v___f_239_);
v___x_249_ = v_reuseFailAlloc_263_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v_toMonadRef_257_; lean_object* v___f_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_250_ = l_StateRefT_x27_instMonad___redArg(v___x_249_);
v___x_251_ = l_ReaderT_instMonad___redArg(v___x_250_);
v___x_252_ = l_StateRefT_x27_instMonad___redArg(v___x_251_);
v___x_253_ = l_ReaderT_instMonad___redArg(v___x_252_);
v___x_254_ = l_ReaderT_instMonad___redArg(v___x_253_);
v___x_255_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__26, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__26_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__26);
v___x_256_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__37, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__37_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__37);
v_toMonadRef_257_ = lean_ctor_get(v___x_256_, 0);
v___f_258_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__42, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__42_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__42);
lean_inc_ref(v___x_254_);
v___x_259_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___f_258_, v___x_254_);
lean_inc_ref(v_toMonadRef_257_);
v___x_260_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_260_, 0, v___x_255_);
lean_ctor_set(v___x_260_, 1, v_toMonadRef_257_);
lean_ctor_set(v___x_260_, 2, v___x_259_);
v___x_261_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44);
v___x_262_ = l_Lean_throwError___redArg(v___x_254_, v___x_260_, v___x_261_);
return v___x_262_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0(lean_object* v_x_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0, &l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0);
v___x_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0___boxed(lean_object* v_x_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0(v_x_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_);
lean_dec(v___y_291_);
lean_dec_ref(v___y_290_);
lean_dec(v___y_289_);
lean_dec_ref(v___y_288_);
lean_dec(v___y_287_);
lean_dec_ref(v___y_286_);
lean_dec(v___y_285_);
lean_dec_ref(v___y_284_);
lean_dec(v___y_283_);
lean_dec_ref(v_x_282_);
return v_res_293_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0(void){
_start:
{
lean_object* v___f_294_; 
v___f_294_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0___boxed), 11, 0);
return v___f_294_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1(void){
_start:
{
lean_object* v___f_295_; lean_object* v___x_296_; 
v___f_295_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0, &l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0);
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v___f_295_);
lean_ctor_set(v___x_296_, 1, v___f_295_);
return v___x_296_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods_default(void){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1, &l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1);
return v___x_297_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods(void){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l_Lean_Meta_Sym_Simp_instInhabitedMethods_default;
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl(lean_object* v_m_299_){
_start:
{
lean_inc_ref(v_m_299_);
return v_m_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl___boxed(lean_object* v_m_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl(v_m_300_);
lean_dec_ref(v_m_300_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl(lean_object* v_m_302_){
_start:
{
lean_inc(v_m_302_);
return v_m_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl___boxed(lean_object* v_m_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl(v_m_303_);
lean_dec(v_m_303_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg(lean_object* v_a_305_){
_start:
{
lean_object* v___x_307_; 
lean_inc(v_a_305_);
v___x_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_307_, 0, v_a_305_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg___boxed(lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Lean_Meta_Sym_Simp_getMethods___redArg(v_a_308_);
lean_dec(v_a_308_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods(lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
lean_object* v___x_321_; 
lean_inc(v_a_311_);
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v_a_311_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___boxed(lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Lean_Meta_Sym_Simp_getMethods(v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_);
lean_dec(v_a_330_);
lean_dec_ref(v_a_329_);
lean_dec(v_a_328_);
lean_dec_ref(v_a_327_);
lean_dec(v_a_326_);
lean_dec_ref(v_a_325_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec(v_a_322_);
return v_res_332_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_333_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0, &l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0);
v___x_335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object* v_x_336_, lean_object* v_methods_337_, lean_object* v_config_338_, lean_object* v_s_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_){
_start:
{
lean_object* v_lctx_347_; lean_object* v_decls_348_; lean_object* v_size_349_; lean_object* v___x_350_; lean_object* v_persistentCache_351_; lean_object* v_funext_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_383_; 
v_lctx_347_ = lean_ctor_get(v_a_342_, 2);
v_decls_348_ = lean_ctor_get(v_lctx_347_, 1);
v_size_349_ = lean_ctor_get(v_decls_348_, 2);
v___x_350_ = lean_st_ref_get(v_a_345_);
lean_dec(v___x_350_);
v_persistentCache_351_ = lean_ctor_get(v_s_339_, 1);
v_funext_352_ = lean_ctor_get(v_s_339_, 3);
v_isSharedCheck_383_ = !lean_is_exclusive(v_s_339_);
if (v_isSharedCheck_383_ == 0)
{
lean_object* v_unused_384_; lean_object* v_unused_385_; 
v_unused_384_ = lean_ctor_get(v_s_339_, 2);
lean_dec(v_unused_384_);
v_unused_385_ = lean_ctor_get(v_s_339_, 0);
lean_dec(v_unused_385_);
v___x_354_ = v_s_339_;
v_isShared_355_ = v_isSharedCheck_383_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_funext_352_);
lean_inc(v_persistentCache_351_);
lean_dec(v_s_339_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_383_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_360_; 
v___x_356_ = lean_unsigned_to_nat(0u);
lean_inc(v_size_349_);
v___x_357_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_357_, 0, v_config_338_);
lean_ctor_set(v___x_357_, 1, v_size_349_);
lean_ctor_set(v___x_357_, 2, v___x_356_);
v___x_358_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1, &l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 2, v___x_358_);
lean_ctor_set(v___x_354_, 0, v___x_356_);
v___x_360_ = v___x_354_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_356_);
lean_ctor_set(v_reuseFailAlloc_382_, 1, v_persistentCache_351_);
lean_ctor_set(v_reuseFailAlloc_382_, 2, v___x_358_);
lean_ctor_set(v_reuseFailAlloc_382_, 3, v_funext_352_);
v___x_360_ = v_reuseFailAlloc_382_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = lean_st_mk_ref(v___x_360_);
lean_inc(v_a_345_);
lean_inc_ref(v_a_344_);
lean_inc(v_a_343_);
lean_inc_ref(v_a_342_);
lean_inc(v_a_341_);
lean_inc_ref(v_a_340_);
lean_inc(v___x_361_);
v___x_362_ = lean_apply_10(v_x_336_, v_methods_337_, v___x_357_, v___x_361_, v_a_340_, v_a_341_, v_a_342_, v_a_343_, v_a_344_, v_a_345_, lean_box(0));
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_373_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_373_ == 0)
{
v___x_365_ = v___x_362_;
v_isShared_366_ = v_isSharedCheck_373_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v___x_362_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_373_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_371_; 
v___x_367_ = lean_st_ref_get(v_a_345_);
lean_dec(v___x_367_);
v___x_368_ = lean_st_ref_get(v___x_361_);
lean_dec(v___x_361_);
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v_a_363_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 0, v___x_369_);
v___x_371_ = v___x_365_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
else
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_381_; 
lean_dec(v___x_361_);
v_a_374_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_381_ == 0)
{
v___x_376_ = v___x_362_;
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_362_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_379_; 
if (v_isShared_377_ == 0)
{
v___x_379_ = v___x_376_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_a_374_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___boxed(lean_object* v_x_386_, lean_object* v_methods_387_, lean_object* v_config_388_, lean_object* v_s_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v_x_386_, v_methods_387_, v_config_388_, v_s_389_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_);
lean_dec(v_a_395_);
lean_dec_ref(v_a_394_);
lean_dec(v_a_393_);
lean_dec_ref(v_a_392_);
lean_dec(v_a_391_);
lean_dec_ref(v_a_390_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run(lean_object* v_00_u03b1_398_, lean_object* v_x_399_, lean_object* v_methods_400_, lean_object* v_config_401_, lean_object* v_s_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v_x_399_, v_methods_400_, v_config_401_, v_s_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___boxed(lean_object* v_00_u03b1_411_, lean_object* v_x_412_, lean_object* v_methods_413_, lean_object* v_config_414_, lean_object* v_s_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_Meta_Sym_Simp_SimpM_run(v_00_u03b1_411_, v_x_412_, v_methods_413_, v_config_414_, v_s_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
lean_dec(v_a_421_);
lean_dec_ref(v_a_420_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
lean_dec(v_a_417_);
lean_dec_ref(v_a_416_);
return v_res_423_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_424_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1, &l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1);
v___x_425_ = lean_unsigned_to_nat(0u);
v___x_426_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
lean_ctor_set(v___x_426_, 1, v___x_424_);
lean_ctor_set(v___x_426_, 2, v___x_424_);
lean_ctor_set(v___x_426_, 3, v___x_424_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object* v_x_427_, lean_object* v_methods_428_, lean_object* v_config_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_){
_start:
{
lean_object* v_lctx_437_; lean_object* v_decls_438_; lean_object* v_size_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v_lctx_437_ = lean_ctor_get(v_a_432_, 2);
v_decls_438_ = lean_ctor_get(v_lctx_437_, 1);
v_size_439_ = lean_ctor_get(v_decls_438_, 2);
v___x_440_ = lean_unsigned_to_nat(0u);
lean_inc(v_size_439_);
v___x_441_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_441_, 0, v_config_429_);
lean_ctor_set(v___x_441_, 1, v_size_439_);
lean_ctor_set(v___x_441_, 2, v___x_440_);
v___x_442_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0, &l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0);
v___x_443_ = lean_st_ref_get(v_a_435_);
lean_dec(v___x_443_);
v___x_444_ = lean_st_mk_ref(v___x_442_);
lean_inc(v_a_435_);
lean_inc_ref(v_a_434_);
lean_inc(v_a_433_);
lean_inc_ref(v_a_432_);
lean_inc(v_a_431_);
lean_inc_ref(v_a_430_);
lean_inc(v___x_444_);
v___x_445_ = lean_apply_10(v_x_427_, v_methods_428_, v___x_441_, v___x_444_, v_a_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, lean_box(0));
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_455_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_455_ == 0)
{
v___x_448_ = v___x_445_;
v_isShared_449_ = v_isSharedCheck_455_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_445_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_455_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_453_; 
v___x_450_ = lean_st_ref_get(v_a_435_);
lean_dec(v___x_450_);
v___x_451_ = lean_st_ref_get(v___x_444_);
lean_dec(v___x_444_);
lean_dec(v___x_451_);
if (v_isShared_449_ == 0)
{
v___x_453_ = v___x_448_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_446_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
else
{
lean_dec(v___x_444_);
return v___x_445_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___boxed(lean_object* v_x_456_, lean_object* v_methods_457_, lean_object* v_config_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v_x_456_, v_methods_457_, v_config_458_, v_a_459_, v_a_460_, v_a_461_, v_a_462_, v_a_463_, v_a_464_);
lean_dec(v_a_464_);
lean_dec_ref(v_a_463_);
lean_dec(v_a_462_);
lean_dec_ref(v_a_461_);
lean_dec(v_a_460_);
lean_dec_ref(v_a_459_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27(lean_object* v_00_u03b1_467_, lean_object* v_x_468_, lean_object* v_methods_469_, lean_object* v_config_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v_x_468_, v_methods_469_, v_config_470_, v_a_471_, v_a_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___boxed(lean_object* v_00_u03b1_479_, lean_object* v_x_480_, lean_object* v_methods_481_, lean_object* v_config_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27(v_00_u03b1_479_, v_x_480_, v_methods_481_, v_config_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_);
lean_dec(v_a_488_);
lean_dec_ref(v_a_487_);
lean_dec(v_a_486_);
lean_dec_ref(v_a_485_);
lean_dec(v_a_484_);
lean_dec_ref(v_a_483_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object* v_a_00___x40___internal___hyg_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_00___x40___internal___hyg_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = lean_sym_simp(v_a_00___x40___internal___hyg_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg(lean_object* v_a_514_){
_start:
{
lean_object* v_config_516_; lean_object* v___x_517_; 
v_config_516_ = lean_ctor_get(v_a_514_, 0);
lean_inc_ref(v_config_516_);
v___x_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_517_, 0, v_config_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg___boxed(lean_object* v_a_518_, lean_object* v_a_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Lean_Meta_Sym_Simp_getConfig___redArg(v_a_518_);
lean_dec_ref(v_a_518_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig(lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_Meta_Sym_Simp_getConfig___redArg(v_a_522_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___boxed(lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Lean_Meta_Sym_Simp_getConfig(v_a_532_, v_a_533_, v_a_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
lean_dec(v_a_540_);
lean_dec_ref(v_a_539_);
lean_dec(v_a_538_);
lean_dec_ref(v_a_537_);
lean_dec(v_a_536_);
lean_dec_ref(v_a_535_);
lean_dec(v_a_534_);
lean_dec_ref(v_a_533_);
lean_dec(v_a_532_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre(lean_object* v_e_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_){
_start:
{
lean_object* v_pre_554_; lean_object* v___x_555_; 
v_pre_554_ = lean_ctor_get(v_a_544_, 0);
lean_inc_ref(v_pre_554_);
lean_inc(v_a_552_);
lean_inc_ref(v_a_551_);
lean_inc(v_a_550_);
lean_inc_ref(v_a_549_);
lean_inc(v_a_548_);
lean_inc_ref(v_a_547_);
lean_inc(v_a_546_);
lean_inc_ref(v_a_545_);
lean_inc(v_a_544_);
v___x_555_ = lean_apply_11(v_pre_554_, v_e_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_, v_a_550_, v_a_551_, v_a_552_, lean_box(0));
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre___boxed(lean_object* v_e_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lean_Meta_Sym_Simp_pre(v_e_556_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_, v_a_563_, v_a_564_, v_a_565_);
lean_dec(v_a_565_);
lean_dec_ref(v_a_564_);
lean_dec(v_a_563_);
lean_dec_ref(v_a_562_);
lean_dec(v_a_561_);
lean_dec_ref(v_a_560_);
lean_dec(v_a_559_);
lean_dec_ref(v_a_558_);
lean_dec(v_a_557_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post(lean_object* v_e_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_){
_start:
{
lean_object* v_post_579_; lean_object* v___x_580_; 
v_post_579_ = lean_ctor_get(v_a_569_, 1);
lean_inc_ref(v_post_579_);
lean_inc(v_a_577_);
lean_inc_ref(v_a_576_);
lean_inc(v_a_575_);
lean_inc_ref(v_a_574_);
lean_inc(v_a_573_);
lean_inc_ref(v_a_572_);
lean_inc(v_a_571_);
lean_inc_ref(v_a_570_);
lean_inc(v_a_569_);
v___x_580_ = lean_apply_11(v_post_579_, v_e_568_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_, lean_box(0));
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post___boxed(lean_object* v_e_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_Meta_Sym_Simp_post(v_e_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_, v_a_587_, v_a_588_, v_a_589_, v_a_590_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_589_);
lean_dec(v_a_588_);
lean_dec_ref(v_a_587_);
lean_dec(v_a_586_);
lean_dec_ref(v_a_585_);
lean_dec(v_a_584_);
lean_dec_ref(v_a_583_);
lean_dec(v_a_582_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_persistentCache_595_, lean_object* v_transientCache_596_, lean_object* v_funext_597_, lean_object* v_a_x3f_598_){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v_numSteps_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_612_; 
v___x_600_ = lean_st_ref_get(v_a_593_);
lean_dec(v___x_600_);
v___x_601_ = lean_st_ref_take(v_a_594_);
v_numSteps_602_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_612_ == 0)
{
lean_object* v_unused_613_; lean_object* v_unused_614_; lean_object* v_unused_615_; 
v_unused_613_ = lean_ctor_get(v___x_601_, 3);
lean_dec(v_unused_613_);
v_unused_614_ = lean_ctor_get(v___x_601_, 2);
lean_dec(v_unused_614_);
v_unused_615_ = lean_ctor_get(v___x_601_, 1);
lean_dec(v_unused_615_);
v___x_604_ = v___x_601_;
v_isShared_605_ = v_isSharedCheck_612_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_numSteps_602_);
lean_dec(v___x_601_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_612_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 3, v_funext_597_);
lean_ctor_set(v___x_604_, 2, v_transientCache_596_);
lean_ctor_set(v___x_604_, 1, v_persistentCache_595_);
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_numSteps_602_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v_persistentCache_595_);
lean_ctor_set(v_reuseFailAlloc_611_, 2, v_transientCache_596_);
lean_ctor_set(v_reuseFailAlloc_611_, 3, v_funext_597_);
v___x_607_ = v_reuseFailAlloc_611_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_608_ = lean_st_ref_set(v_a_594_, v___x_607_);
v___x_609_ = lean_box(0);
v___x_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
return v___x_610_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0___boxed(lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_persistentCache_618_, lean_object* v_transientCache_619_, lean_object* v_funext_620_, lean_object* v_a_x3f_621_, lean_object* v___y_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_616_, v_a_617_, v_persistentCache_618_, v_transientCache_619_, v_funext_620_, v_a_x3f_621_);
lean_dec(v_a_x3f_621_);
lean_dec(v_a_617_);
lean_dec(v_a_616_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg(lean_object* v_k_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v_persistentCache_641_; lean_object* v_transientCache_642_; lean_object* v_funext_643_; lean_object* v_r_644_; 
v___x_635_ = lean_st_ref_get(v_a_633_);
lean_dec(v___x_635_);
v___x_636_ = lean_st_ref_get(v_a_627_);
v___x_637_ = lean_st_ref_get(v_a_633_);
lean_dec(v___x_637_);
v___x_638_ = lean_st_ref_get(v_a_627_);
v___x_639_ = lean_st_ref_get(v_a_633_);
lean_dec(v___x_639_);
v___x_640_ = lean_st_ref_get(v_a_627_);
v_persistentCache_641_ = lean_ctor_get(v___x_636_, 1);
lean_inc_ref(v_persistentCache_641_);
lean_dec(v___x_636_);
v_transientCache_642_ = lean_ctor_get(v___x_638_, 2);
lean_inc_ref(v_transientCache_642_);
lean_dec(v___x_638_);
v_funext_643_ = lean_ctor_get(v___x_640_, 3);
lean_inc_ref(v_funext_643_);
lean_dec(v___x_640_);
lean_inc(v_a_633_);
lean_inc_ref(v_a_632_);
lean_inc(v_a_631_);
lean_inc_ref(v_a_630_);
lean_inc(v_a_629_);
lean_inc_ref(v_a_628_);
lean_inc(v_a_627_);
lean_inc_ref(v_a_626_);
lean_inc(v_a_625_);
v_r_644_ = lean_apply_10(v_k_624_, v_a_625_, v_a_626_, v_a_627_, v_a_628_, v_a_629_, v_a_630_, v_a_631_, v_a_632_, v_a_633_, lean_box(0));
if (lean_obj_tag(v_r_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_661_; 
v_a_645_ = lean_ctor_get(v_r_644_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v_r_644_);
if (v_isSharedCheck_661_ == 0)
{
v___x_647_ = v_r_644_;
v_isShared_648_ = v_isSharedCheck_661_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v_r_644_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_661_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
lean_inc(v_a_645_);
if (v_isShared_648_ == 0)
{
lean_ctor_set_tag(v___x_647_, 1);
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_660_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v___x_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
v___x_651_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_633_, v_a_627_, v_persistentCache_641_, v_transientCache_642_, v_funext_643_, v___x_650_);
lean_dec_ref(v___x_650_);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_658_ == 0)
{
lean_object* v_unused_659_; 
v_unused_659_ = lean_ctor_get(v___x_651_, 0);
lean_dec(v_unused_659_);
v___x_653_ = v___x_651_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_dec(v___x_651_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_656_; 
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 0, v_a_645_);
v___x_656_ = v___x_653_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_645_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
v_a_662_ = lean_ctor_get(v_r_644_, 0);
lean_inc(v_a_662_);
lean_dec_ref(v_r_644_);
v___x_663_ = lean_box(0);
v___x_664_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_633_, v_a_627_, v_persistentCache_641_, v_transientCache_642_, v_funext_643_, v___x_663_);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_671_ == 0)
{
lean_object* v_unused_672_; 
v_unused_672_ = lean_ctor_get(v___x_664_, 0);
lean_dec(v_unused_672_);
v___x_666_ = v___x_664_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_dec(v___x_664_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
lean_ctor_set_tag(v___x_666_, 1);
lean_ctor_set(v___x_666_, 0, v_a_662_);
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_662_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___boxed(lean_object* v_k_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg(v_k_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
lean_dec(v_a_682_);
lean_dec_ref(v_a_681_);
lean_dec(v_a_680_);
lean_dec_ref(v_a_679_);
lean_dec(v_a_678_);
lean_dec_ref(v_a_677_);
lean_dec(v_a_676_);
lean_dec_ref(v_a_675_);
lean_dec(v_a_674_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache(lean_object* v_00_u03b1_685_, lean_object* v_k_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v_persistentCache_703_; lean_object* v_transientCache_704_; lean_object* v_funext_705_; lean_object* v_r_706_; 
v___x_697_ = lean_st_ref_get(v_a_695_);
lean_dec(v___x_697_);
v___x_698_ = lean_st_ref_get(v_a_689_);
v___x_699_ = lean_st_ref_get(v_a_695_);
lean_dec(v___x_699_);
v___x_700_ = lean_st_ref_get(v_a_689_);
v___x_701_ = lean_st_ref_get(v_a_695_);
lean_dec(v___x_701_);
v___x_702_ = lean_st_ref_get(v_a_689_);
v_persistentCache_703_ = lean_ctor_get(v___x_698_, 1);
lean_inc_ref(v_persistentCache_703_);
lean_dec(v___x_698_);
v_transientCache_704_ = lean_ctor_get(v___x_700_, 2);
lean_inc_ref(v_transientCache_704_);
lean_dec(v___x_700_);
v_funext_705_ = lean_ctor_get(v___x_702_, 3);
lean_inc_ref(v_funext_705_);
lean_dec(v___x_702_);
lean_inc(v_a_695_);
lean_inc_ref(v_a_694_);
lean_inc(v_a_693_);
lean_inc_ref(v_a_692_);
lean_inc(v_a_691_);
lean_inc_ref(v_a_690_);
lean_inc(v_a_689_);
lean_inc_ref(v_a_688_);
lean_inc(v_a_687_);
v_r_706_ = lean_apply_10(v_k_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_, lean_box(0));
if (lean_obj_tag(v_r_706_) == 0)
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_723_; 
v_a_707_ = lean_ctor_get(v_r_706_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v_r_706_);
if (v_isSharedCheck_723_ == 0)
{
v___x_709_ = v_r_706_;
v_isShared_710_ = v_isSharedCheck_723_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v_r_706_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_723_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
lean_inc(v_a_707_);
if (v_isShared_710_ == 0)
{
lean_ctor_set_tag(v___x_709_, 1);
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_707_);
v___x_712_ = v_reuseFailAlloc_722_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
lean_object* v___x_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
v___x_713_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_695_, v_a_689_, v_persistentCache_703_, v_transientCache_704_, v_funext_705_, v___x_712_);
lean_dec_ref(v___x_712_);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_720_ == 0)
{
lean_object* v_unused_721_; 
v_unused_721_ = lean_ctor_get(v___x_713_, 0);
lean_dec(v_unused_721_);
v___x_715_ = v___x_713_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_dec(v___x_713_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 0, v_a_707_);
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_707_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
}
else
{
lean_object* v_a_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
v_a_724_ = lean_ctor_get(v_r_706_, 0);
lean_inc(v_a_724_);
lean_dec_ref(v_r_706_);
v___x_725_ = lean_box(0);
v___x_726_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_695_, v_a_689_, v_persistentCache_703_, v_transientCache_704_, v_funext_705_, v___x_725_);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_733_ == 0)
{
lean_object* v_unused_734_; 
v_unused_734_ = lean_ctor_get(v___x_726_, 0);
lean_dec(v_unused_734_);
v___x_728_ = v___x_726_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_dec(v___x_726_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
lean_ctor_set_tag(v___x_728_, 1);
lean_ctor_set(v___x_728_, 0, v_a_724_);
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_724_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___boxed(lean_object* v_00_u03b1_735_, lean_object* v_k_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache(v_00_u03b1_735_, v_k_736_, v_a_737_, v_a_738_, v_a_739_, v_a_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_);
lean_dec(v_a_745_);
lean_dec_ref(v_a_744_);
lean_dec(v_a_743_);
lean_dec_ref(v_a_742_);
lean_dec(v_a_741_);
lean_dec_ref(v_a_740_);
lean_dec(v_a_739_);
lean_dec_ref(v_a_738_);
lean_dec(v_a_737_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_transientCache_750_, lean_object* v_funext_751_, lean_object* v_a_x3f_752_){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v_numSteps_756_; lean_object* v_persistentCache_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_767_; 
v___x_754_ = lean_st_ref_get(v_a_748_);
lean_dec(v___x_754_);
v___x_755_ = lean_st_ref_take(v_a_749_);
v_numSteps_756_ = lean_ctor_get(v___x_755_, 0);
v_persistentCache_757_ = lean_ctor_get(v___x_755_, 1);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_767_ == 0)
{
lean_object* v_unused_768_; lean_object* v_unused_769_; 
v_unused_768_ = lean_ctor_get(v___x_755_, 3);
lean_dec(v_unused_768_);
v_unused_769_ = lean_ctor_get(v___x_755_, 2);
lean_dec(v_unused_769_);
v___x_759_ = v___x_755_;
v_isShared_760_ = v_isSharedCheck_767_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_persistentCache_757_);
lean_inc(v_numSteps_756_);
lean_dec(v___x_755_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_767_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 3, v_funext_751_);
lean_ctor_set(v___x_759_, 2, v_transientCache_750_);
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_numSteps_756_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v_persistentCache_757_);
lean_ctor_set(v_reuseFailAlloc_766_, 2, v_transientCache_750_);
lean_ctor_set(v_reuseFailAlloc_766_, 3, v_funext_751_);
v___x_762_ = v_reuseFailAlloc_766_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_763_ = lean_st_ref_set(v_a_749_, v___x_762_);
v___x_764_ = lean_box(0);
v___x_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
return v___x_765_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0___boxed(lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_transientCache_772_, lean_object* v_funext_773_, lean_object* v_a_x3f_774_, lean_object* v___y_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_770_, v_a_771_, v_transientCache_772_, v_funext_773_, v_a_x3f_774_);
lean_dec(v_a_x3f_774_);
lean_dec(v_a_771_);
lean_dec(v_a_770_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg(lean_object* v_k_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v_transientCache_792_; lean_object* v_funext_793_; lean_object* v_r_794_; 
v___x_788_ = lean_st_ref_get(v_a_786_);
lean_dec(v___x_788_);
v___x_789_ = lean_st_ref_get(v_a_780_);
v___x_790_ = lean_st_ref_get(v_a_786_);
lean_dec(v___x_790_);
v___x_791_ = lean_st_ref_get(v_a_780_);
v_transientCache_792_ = lean_ctor_get(v___x_789_, 2);
lean_inc_ref(v_transientCache_792_);
lean_dec(v___x_789_);
v_funext_793_ = lean_ctor_get(v___x_791_, 3);
lean_inc_ref(v_funext_793_);
lean_dec(v___x_791_);
lean_inc(v_a_786_);
lean_inc_ref(v_a_785_);
lean_inc(v_a_784_);
lean_inc_ref(v_a_783_);
lean_inc(v_a_782_);
lean_inc_ref(v_a_781_);
lean_inc(v_a_780_);
lean_inc_ref(v_a_779_);
lean_inc(v_a_778_);
v_r_794_ = lean_apply_10(v_k_777_, v_a_778_, v_a_779_, v_a_780_, v_a_781_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, lean_box(0));
if (lean_obj_tag(v_r_794_) == 0)
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_811_; 
v_a_795_ = lean_ctor_get(v_r_794_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v_r_794_);
if (v_isSharedCheck_811_ == 0)
{
v___x_797_ = v_r_794_;
v_isShared_798_ = v_isSharedCheck_811_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v_r_794_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_811_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
lean_inc(v_a_795_);
if (v_isShared_798_ == 0)
{
lean_ctor_set_tag(v___x_797_, 1);
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_810_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
lean_object* v___x_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
v___x_801_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_786_, v_a_780_, v_transientCache_792_, v_funext_793_, v___x_800_);
lean_dec_ref(v___x_800_);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_808_ == 0)
{
lean_object* v_unused_809_; 
v_unused_809_ = lean_ctor_get(v___x_801_, 0);
lean_dec(v_unused_809_);
v___x_803_ = v___x_801_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_dec(v___x_801_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 0, v_a_795_);
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_a_795_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
}
}
else
{
lean_object* v_a_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
v_a_812_ = lean_ctor_get(v_r_794_, 0);
lean_inc(v_a_812_);
lean_dec_ref(v_r_794_);
v___x_813_ = lean_box(0);
v___x_814_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_786_, v_a_780_, v_transientCache_792_, v_funext_793_, v___x_813_);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_821_ == 0)
{
lean_object* v_unused_822_; 
v_unused_822_ = lean_ctor_get(v___x_814_, 0);
lean_dec(v_unused_822_);
v___x_816_ = v___x_814_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_dec(v___x_814_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
lean_ctor_set_tag(v___x_816_, 1);
lean_ctor_set(v___x_816_, 0, v_a_812_);
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_812_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___boxed(lean_object* v_k_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg(v_k_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_, v_a_831_, v_a_832_);
lean_dec(v_a_832_);
lean_dec_ref(v_a_831_);
lean_dec(v_a_830_);
lean_dec_ref(v_a_829_);
lean_dec(v_a_828_);
lean_dec_ref(v_a_827_);
lean_dec(v_a_826_);
lean_dec_ref(v_a_825_);
lean_dec(v_a_824_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache(lean_object* v_00_u03b1_835_, lean_object* v_k_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v_transientCache_851_; lean_object* v_funext_852_; lean_object* v_r_853_; 
v___x_847_ = lean_st_ref_get(v_a_845_);
lean_dec(v___x_847_);
v___x_848_ = lean_st_ref_get(v_a_839_);
v___x_849_ = lean_st_ref_get(v_a_845_);
lean_dec(v___x_849_);
v___x_850_ = lean_st_ref_get(v_a_839_);
v_transientCache_851_ = lean_ctor_get(v___x_848_, 2);
lean_inc_ref(v_transientCache_851_);
lean_dec(v___x_848_);
v_funext_852_ = lean_ctor_get(v___x_850_, 3);
lean_inc_ref(v_funext_852_);
lean_dec(v___x_850_);
lean_inc(v_a_845_);
lean_inc_ref(v_a_844_);
lean_inc(v_a_843_);
lean_inc_ref(v_a_842_);
lean_inc(v_a_841_);
lean_inc_ref(v_a_840_);
lean_inc(v_a_839_);
lean_inc_ref(v_a_838_);
lean_inc(v_a_837_);
v_r_853_ = lean_apply_10(v_k_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_, v_a_845_, lean_box(0));
if (lean_obj_tag(v_r_853_) == 0)
{
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_870_; 
v_a_854_ = lean_ctor_get(v_r_853_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v_r_853_);
if (v_isSharedCheck_870_ == 0)
{
v___x_856_ = v_r_853_;
v_isShared_857_ = v_isSharedCheck_870_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v_r_853_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_870_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
lean_inc(v_a_854_);
if (v_isShared_857_ == 0)
{
lean_ctor_set_tag(v___x_856_, 1);
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_854_);
v___x_859_ = v_reuseFailAlloc_869_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
lean_object* v___x_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_867_; 
v___x_860_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_845_, v_a_839_, v_transientCache_851_, v_funext_852_, v___x_859_);
lean_dec_ref(v___x_859_);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_867_ == 0)
{
lean_object* v_unused_868_; 
v_unused_868_ = lean_ctor_get(v___x_860_, 0);
lean_dec(v_unused_868_);
v___x_862_ = v___x_860_;
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
else
{
lean_dec(v___x_860_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v_a_854_);
v___x_865_ = v___x_862_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_a_854_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
}
}
else
{
lean_object* v_a_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_880_; 
v_a_871_ = lean_ctor_get(v_r_853_, 0);
lean_inc(v_a_871_);
lean_dec_ref(v_r_853_);
v___x_872_ = lean_box(0);
v___x_873_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_845_, v_a_839_, v_transientCache_851_, v_funext_852_, v___x_872_);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_880_ == 0)
{
lean_object* v_unused_881_; 
v_unused_881_ = lean_ctor_get(v___x_873_, 0);
lean_dec(v_unused_881_);
v___x_875_ = v___x_873_;
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
else
{
lean_dec(v___x_873_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
lean_ctor_set_tag(v___x_875_, 1);
lean_ctor_set(v___x_875_, 0, v_a_871_);
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_871_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___boxed(lean_object* v_00_u03b1_882_, lean_object* v_k_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache(v_00_u03b1_882_, v_k_883_, v_a_884_, v_a_885_, v_a_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
lean_dec(v_a_892_);
lean_dec_ref(v_a_891_);
lean_dec(v_a_890_);
lean_dec_ref(v_a_889_);
lean_dec(v_a_888_);
lean_dec_ref(v_a_887_);
lean_dec(v_a_886_);
lean_dec_ref(v_a_885_);
lean_dec(v_a_884_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp(lean_object* v_e_895_, lean_object* v_methods_896_, lean_object* v_config_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_905_, 0, v_e_895_);
v___x_906_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v___x_905_, v_methods_896_, v_config_897_, v_a_898_, v_a_899_, v_a_900_, v_a_901_, v_a_902_, v_a_903_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp___boxed(lean_object* v_e_907_, lean_object* v_methods_908_, lean_object* v_config_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Lean_Meta_Sym_simp(v_e_907_, v_methods_908_, v_config_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_);
lean_dec(v_a_915_);
lean_dec_ref(v_a_914_);
lean_dec(v_a_913_);
lean_dec_ref(v_a_912_);
lean_dec(v_a_911_);
lean_dec_ref(v_a_910_);
return v_res_917_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_Simp_instInhabitedConfig_default = _init_l_Lean_Meta_Sym_Simp_instInhabitedConfig_default();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedConfig_default);
l_Lean_Meta_Sym_Simp_instInhabitedConfig = _init_l_Lean_Meta_Sym_Simp_instInhabitedConfig();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedConfig);
l_Lean_Meta_Sym_Simp_instInhabitedResult_default = _init_l_Lean_Meta_Sym_Simp_instInhabitedResult_default();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedResult_default);
l_Lean_Meta_Sym_Simp_instInhabitedResult = _init_l_Lean_Meta_Sym_Simp_instInhabitedResult();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedResult);
l___private_Lean_Meta_Sym_Simp_SimpM_0__Lean_Meta_Sym_Simp_MethodsRefPointed = _init_l___private_Lean_Meta_Sym_Simp_SimpM_0__Lean_Meta_Sym_Simp_MethodsRefPointed();
l_Lean_Meta_Sym_Simp_instInhabitedMethods_default = _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods_default();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedMethods_default);
l_Lean_Meta_Sym_Simp_instInhabitedMethods = _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedMethods);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
}
#ifdef __cplusplus
}
#endif
