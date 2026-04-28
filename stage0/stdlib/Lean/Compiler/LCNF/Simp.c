// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp
// Imports: public import Lean.Compiler.LCNF.ReduceJpArity public import Lean.Compiler.LCNF.Simp.Basic public import Lean.Compiler.LCNF.Simp.FunDeclInfo public import Lean.Compiler.LCNF.Simp.JpCases public import Lean.Compiler.LCNF.Simp.Config public import Lean.Compiler.LCNF.Simp.InlineCandidate public import Lean.Compiler.LCNF.Simp.SimpM public import Lean.Compiler.LCNF.Simp.Main public import Lean.Compiler.LCNF.Simp.InlineProj public import Lean.Compiler.LCNF.Simp.DefaultAlt public import Lean.Compiler.LCNF.Simp.SimpValue public import Lean.Compiler.LCNF.Simp.Used
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_isTemplateLike___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_reduceJpArity(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_size(uint8_t, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_applyRenaming(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_ppCode(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_ppDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_format(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_instInhabitedPass;
lean_object* l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(lean_object*, uint8_t, uint8_t, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__2;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__7;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__9;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__10;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__11;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__12;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__13;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__14;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__15;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__16;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__17;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__18;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__19;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__20;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__21;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__22;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__23;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__24;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__25;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__26;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__27;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__0;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__2;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__3;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__4;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_simp___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_simp___lam__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simp___lam__1(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simp___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simp(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simp___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__1, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__1);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_5_);
lean_ctor_set(v___x_6_, 2, v___x_5_);
lean_ctor_set(v___x_6_, 3, v___x_5_);
lean_ctor_set(v___x_6_, 4, v___x_4_);
lean_ctor_set(v___x_6_, 5, v___x_4_);
lean_ctor_set(v___x_6_, 6, v___x_4_);
lean_ctor_set(v___x_6_, 7, v___x_4_);
lean_ctor_set(v___x_6_, 8, v___x_4_);
lean_ctor_set(v___x_6_, 9, v___x_4_);
return v___x_6_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_7_; double v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_float_of_nat(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_mk_string_unchecked("", 0, 0);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_mk_empty_array_with_capacity(v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg(lean_object* v_cls_12_, lean_object* v_msg_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_options_19_; lean_object* v_ref_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_options_19_ = lean_ctor_get(v___y_16_, 2);
v_ref_20_ = lean_ctor_get(v___y_16_, 5);
v___x_21_ = lean_st_ref_get(v___y_17_);
v___x_22_ = lean_st_ref_get(v___y_17_);
lean_dec(v___x_22_);
v___x_23_ = lean_st_ref_get(v___y_15_);
v___x_24_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_14_);
if (lean_obj_tag(v___x_24_) == 0)
{
lean_object* v_a_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_83_; 
v_a_25_ = lean_ctor_get(v___x_24_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v___x_24_);
if (v_isSharedCheck_83_ == 0)
{
v___x_27_ = v___x_24_;
v_isShared_28_ = v_isSharedCheck_83_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_a_25_);
lean_dec(v___x_24_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_83_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v_env_29_; lean_object* v_lctx_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_81_; 
v_env_29_ = lean_ctor_get(v___x_21_, 0);
lean_inc_ref(v_env_29_);
lean_dec(v___x_21_);
v_lctx_30_ = lean_ctor_get(v___x_23_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_81_ == 0)
{
lean_object* v_unused_82_; 
v_unused_82_ = lean_ctor_get(v___x_23_, 1);
lean_dec(v_unused_82_);
v___x_32_ = v___x_23_;
v_isShared_33_ = v_isSharedCheck_81_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_lctx_30_);
lean_dec(v___x_23_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_81_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v_traceState_36_; lean_object* v_env_37_; lean_object* v_nextMacroScope_38_; lean_object* v_ngen_39_; lean_object* v_auxDeclNGen_40_; lean_object* v_cache_41_; lean_object* v_messages_42_; lean_object* v_infoState_43_; lean_object* v_snapshotTasks_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_80_; 
v___x_34_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__2, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__2);
v___x_35_ = lean_st_ref_take(v___y_17_);
v_traceState_36_ = lean_ctor_get(v___x_35_, 4);
v_env_37_ = lean_ctor_get(v___x_35_, 0);
v_nextMacroScope_38_ = lean_ctor_get(v___x_35_, 1);
v_ngen_39_ = lean_ctor_get(v___x_35_, 2);
v_auxDeclNGen_40_ = lean_ctor_get(v___x_35_, 3);
v_cache_41_ = lean_ctor_get(v___x_35_, 5);
v_messages_42_ = lean_ctor_get(v___x_35_, 6);
v_infoState_43_ = lean_ctor_get(v___x_35_, 7);
v_snapshotTasks_44_ = lean_ctor_get(v___x_35_, 8);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_35_);
if (v_isSharedCheck_80_ == 0)
{
v___x_46_ = v___x_35_;
v_isShared_47_ = v_isSharedCheck_80_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_snapshotTasks_44_);
lean_inc(v_infoState_43_);
lean_inc(v_messages_42_);
lean_inc(v_cache_41_);
lean_inc(v_traceState_36_);
lean_inc(v_auxDeclNGen_40_);
lean_inc(v_ngen_39_);
lean_inc(v_nextMacroScope_38_);
lean_inc(v_env_37_);
lean_dec(v___x_35_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_80_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
uint64_t v_tid_48_; lean_object* v_traces_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_79_; 
v_tid_48_ = lean_ctor_get_uint64(v_traceState_36_, sizeof(void*)*1);
v_traces_49_ = lean_ctor_get(v_traceState_36_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v_traceState_36_);
if (v_isSharedCheck_79_ == 0)
{
v___x_51_ = v_traceState_36_;
v_isShared_52_ = v_isSharedCheck_79_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_traces_49_);
lean_dec(v_traceState_36_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_79_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
uint8_t v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_57_; 
v___x_53_ = lean_unbox(v_a_25_);
lean_dec(v_a_25_);
v___x_54_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_30_, v___x_53_);
lean_dec_ref(v_lctx_30_);
lean_inc_ref(v_options_19_);
v___x_55_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_55_, 0, v_env_29_);
lean_ctor_set(v___x_55_, 1, v___x_34_);
lean_ctor_set(v___x_55_, 2, v___x_54_);
lean_ctor_set(v___x_55_, 3, v_options_19_);
if (v_isShared_33_ == 0)
{
lean_ctor_set_tag(v___x_32_, 3);
lean_ctor_set(v___x_32_, 1, v_msg_13_);
lean_ctor_set(v___x_32_, 0, v___x_55_);
v___x_57_ = v___x_32_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v___x_55_);
lean_ctor_set(v_reuseFailAlloc_78_, 1, v_msg_13_);
v___x_57_ = v_reuseFailAlloc_78_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
lean_object* v___x_58_; double v___x_59_; uint8_t v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_68_; 
v___x_58_ = lean_box(0);
v___x_59_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__3, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__3_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__3);
v___x_60_ = 0;
v___x_61_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__4, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__4_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__4);
v___x_62_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_62_, 0, v_cls_12_);
lean_ctor_set(v___x_62_, 1, v___x_58_);
lean_ctor_set(v___x_62_, 2, v___x_61_);
lean_ctor_set_float(v___x_62_, sizeof(void*)*3, v___x_59_);
lean_ctor_set_float(v___x_62_, sizeof(void*)*3 + 8, v___x_59_);
lean_ctor_set_uint8(v___x_62_, sizeof(void*)*3 + 16, v___x_60_);
v___x_63_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__5, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__5_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___closed__5);
v___x_64_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_64_, 0, v___x_62_);
lean_ctor_set(v___x_64_, 1, v___x_57_);
lean_ctor_set(v___x_64_, 2, v___x_63_);
lean_inc(v_ref_20_);
v___x_65_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_65_, 0, v_ref_20_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
v___x_66_ = l_Lean_PersistentArray_push___redArg(v_traces_49_, v___x_65_);
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 0, v___x_66_);
v___x_68_ = v___x_51_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v___x_66_);
lean_ctor_set_uint64(v_reuseFailAlloc_77_, sizeof(void*)*1, v_tid_48_);
v___x_68_ = v_reuseFailAlloc_77_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
lean_object* v___x_70_; 
if (v_isShared_47_ == 0)
{
lean_ctor_set(v___x_46_, 4, v___x_68_);
v___x_70_ = v___x_46_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_env_37_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v_nextMacroScope_38_);
lean_ctor_set(v_reuseFailAlloc_76_, 2, v_ngen_39_);
lean_ctor_set(v_reuseFailAlloc_76_, 3, v_auxDeclNGen_40_);
lean_ctor_set(v_reuseFailAlloc_76_, 4, v___x_68_);
lean_ctor_set(v_reuseFailAlloc_76_, 5, v_cache_41_);
lean_ctor_set(v_reuseFailAlloc_76_, 6, v_messages_42_);
lean_ctor_set(v_reuseFailAlloc_76_, 7, v_infoState_43_);
lean_ctor_set(v_reuseFailAlloc_76_, 8, v_snapshotTasks_44_);
v___x_70_ = v_reuseFailAlloc_76_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_74_; 
v___x_71_ = lean_st_ref_set(v___y_17_, v___x_70_);
v___x_72_ = lean_box(0);
if (v_isShared_28_ == 0)
{
lean_ctor_set(v___x_27_, 0, v___x_72_);
v___x_74_ = v___x_27_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v___x_72_);
v___x_74_ = v_reuseFailAlloc_75_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
return v___x_74_;
}
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
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_91_; 
lean_dec(v___x_23_);
lean_dec(v___x_21_);
lean_dec_ref(v_msg_13_);
lean_dec(v_cls_12_);
v_a_84_ = lean_ctor_get(v___x_24_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_24_);
if (v_isSharedCheck_91_ == 0)
{
v___x_86_ = v___x_24_;
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_24_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_89_; 
if (v_isShared_87_ == 0)
{
v___x_89_ = v___x_86_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_a_84_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg___boxed(lean_object* v_cls_92_, lean_object* v_msg_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg(v_cls_92_, v_msg_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0(lean_object* v_cls_100_, lean_object* v_msg_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg(v_cls_100_, v_msg_101_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___boxed(lean_object* v_cls_111_, lean_object* v_msg_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0(v_cls_111_, v_msg_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_);
lean_dec(v___y_119_);
lean_dec_ref(v___y_118_);
lean_dec(v___y_117_);
lean_dec_ref(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
return v_res_121_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lean_mk_string_unchecked("Compiler", 8, 8);
return v___x_122_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lean_mk_string_unchecked("simp", 4, 4);
return v___x_123_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__2(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_mk_string_unchecked("stat", 4, 4);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__3(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_125_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__2, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__2_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__2);
v___x_126_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1);
v___x_127_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0);
v___x_128_ = l_Lean_Name_mkStr3(v___x_127_, v___x_126_, v___x_125_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__4(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_129_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__4, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__4_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__4);
v___x_131_ = l_Lean_Name_mkStr1(v___x_130_);
return v___x_131_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__6(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_132_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__3, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__3_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__3);
v___x_133_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5);
v___x_134_ = l_Lean_Name_append(v___x_133_, v___x_132_);
return v___x_134_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__7(void){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_mk_string_unchecked(", size: ", 8, 8);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__8(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__7, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__7_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__7);
v___x_137_ = l_Lean_stringToMessageData(v___x_136_);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__9(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_mk_string_unchecked(", # visited: ", 13, 13);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__10(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__9, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__9_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__9);
v___x_140_ = l_Lean_stringToMessageData(v___x_139_);
return v___x_140_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__11(void){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_mk_string_unchecked(", # inline: ", 12, 12);
return v___x_141_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__12(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_142_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__11, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__11_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__11);
v___x_143_ = l_Lean_stringToMessageData(v___x_142_);
return v___x_143_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__13(void){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lean_mk_string_unchecked(", # inline local: ", 18, 18);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__14(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__13, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__13_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__13);
v___x_146_ = l_Lean_stringToMessageData(v___x_145_);
return v___x_146_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__15(void){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_mk_string_unchecked("new", 3, 3);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__16(void){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_mk_string_unchecked(" :=\n", 4, 4);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__17(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__16, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__16_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__16);
v___x_150_ = l_Lean_stringToMessageData(v___x_149_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__18(void){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lean_mk_string_unchecked("step", 4, 4);
return v___x_151_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__19(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_152_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__18, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__18_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__18);
v___x_153_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1);
v___x_154_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0);
v___x_155_ = l_Lean_Name_mkStr3(v___x_154_, v___x_153_, v___x_152_);
return v___x_155_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__20(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__19, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__19_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__19);
v___x_157_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5);
v___x_158_ = l_Lean_Name_append(v___x_157_, v___x_156_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__21(void){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_mk_string_unchecked("inline", 6, 6);
return v___x_159_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__22(void){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_mk_string_unchecked("info", 4, 4);
return v___x_160_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__23(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_161_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__22, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__22_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__22);
v___x_162_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__21, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__21_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__21);
v___x_163_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1);
v___x_164_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0);
v___x_165_ = l_Lean_Name_mkStr4(v___x_164_, v___x_163_, v___x_162_, v___x_161_);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__24(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_166_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__23, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__23_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__23);
v___x_167_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5);
v___x_168_ = l_Lean_Name_append(v___x_167_, v___x_166_);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__25(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_mk_string_unchecked(":", 1, 1);
return v___x_169_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__26(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__25, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__25_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__25);
v___x_171_ = l_Lean_stringToMessageData(v___x_170_);
return v___x_171_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__27(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_unsigned_to_nat(2u);
v___x_173_ = lean_nat_to_int(v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f(lean_object* v_decl_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_){
_start:
{
lean_object* v_toSignature_183_; lean_object* v_value_184_; uint8_t v_recursive_185_; lean_object* v_inlineAttr_x3f_186_; lean_object* v___y_188_; lean_object* v___y_189_; lean_object* v___y_190_; lean_object* v___y_191_; lean_object* v___y_192_; lean_object* v___y_193_; 
v_toSignature_183_ = lean_ctor_get(v_decl_174_, 0);
lean_inc_ref(v_toSignature_183_);
v_value_184_ = lean_ctor_get(v_decl_174_, 1);
lean_inc_ref(v_value_184_);
v_recursive_185_ = lean_ctor_get_uint8(v_decl_174_, sizeof(void*)*3);
v_inlineAttr_x3f_186_ = lean_ctor_get(v_decl_174_, 2);
lean_inc(v_inlineAttr_x3f_186_);
if (lean_obj_tag(v_value_184_) == 0)
{
lean_object* v_code_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_433_; 
v_code_248_ = lean_ctor_get(v_value_184_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v_value_184_);
if (v_isSharedCheck_433_ == 0)
{
v___x_250_ = v_value_184_;
v_isShared_251_ = v_isSharedCheck_433_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_code_248_);
lean_dec(v_value_184_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_433_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
uint8_t v___x_252_; lean_object* v___x_253_; 
v___x_252_ = 0;
lean_inc_ref(v_code_248_);
v___x_253_ = l_Lean_Compiler_LCNF_Simp_updateFunDeclInfo___redArg(v_code_248_, v___x_252_, v_a_176_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
if (lean_obj_tag(v___x_253_) == 0)
{
lean_object* v_options_254_; lean_object* v_inheritedTraceOptions_255_; uint8_t v_hasTrace_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___y_260_; uint8_t v___y_261_; lean_object* v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; uint8_t v___y_307_; lean_object* v___y_308_; 
lean_dec_ref(v___x_253_);
v_options_254_ = lean_ctor_get(v_a_180_, 2);
v_inheritedTraceOptions_255_ = lean_ctor_get(v_a_180_, 13);
v_hasTrace_256_ = lean_ctor_get_uint8(v_options_254_, sizeof(void*)*1);
v___x_257_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0);
v___x_258_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1);
if (v_hasTrace_256_ == 0)
{
goto v___jp_366_;
}
else
{
lean_object* v___x_392_; lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_392_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__23, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__23_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__23);
v___x_393_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__24, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__24_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__24);
v___x_394_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_255_, v_options_254_, v___x_393_);
if (v___x_394_ == 0)
{
goto v___jp_366_;
}
else
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v_funDeclInfoMap_397_; lean_object* v___x_398_; 
v___x_395_ = lean_st_ref_get(v_a_181_);
lean_dec(v___x_395_);
v___x_396_ = lean_st_ref_get(v_a_176_);
v_funDeclInfoMap_397_ = lean_ctor_get(v___x_396_, 3);
lean_inc_ref(v_funDeclInfoMap_397_);
lean_dec(v___x_396_);
v___x_398_ = l_Lean_Compiler_LCNF_Simp_FunDeclInfoMap_format(v_funDeclInfoMap_397_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
lean_dec_ref(v_funDeclInfoMap_397_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v_name_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
lean_inc(v_a_399_);
lean_dec_ref(v___x_398_);
v_name_400_ = lean_ctor_get(v_toSignature_183_, 0);
lean_inc(v_name_400_);
v___x_401_ = l_Lean_MessageData_ofName(v_name_400_);
v___x_402_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__26, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__26_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__26);
v___x_403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_401_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
v___x_404_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__27, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__27_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__27);
v___x_405_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v_a_399_);
v___x_406_ = l_Lean_MessageData_ofFormat(v___x_405_);
v___x_407_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_403_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
v___x_408_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg(v___x_392_, v___x_407_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_dec_ref(v___x_408_);
goto v___jp_366_;
}
else
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_416_; 
lean_del_object(v___x_250_);
lean_dec_ref(v_code_248_);
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_toSignature_183_);
lean_dec_ref(v_decl_174_);
v_a_409_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_416_ == 0)
{
v___x_411_ = v___x_408_;
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_408_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_409_);
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
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_del_object(v___x_250_);
lean_dec_ref(v_code_248_);
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_toSignature_183_);
lean_dec_ref(v_decl_174_);
v_a_417_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_398_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_398_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
v___jp_259_:
{
if (v_hasTrace_256_ == 0)
{
lean_dec(v___y_264_);
lean_dec(v___y_262_);
lean_dec(v___y_260_);
lean_del_object(v___x_250_);
v___y_188_ = v___y_263_;
v___y_189_ = v_a_176_;
v___y_190_ = v_a_178_;
v___y_191_ = v_a_179_;
v___y_192_ = v_a_180_;
v___y_193_ = v_a_181_;
goto v___jp_187_;
}
else
{
lean_object* v___x_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_265_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__3, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__3_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__3);
v___x_266_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__6, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__6_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__6);
v___x_267_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_255_, v_options_254_, v___x_266_);
if (v___x_267_ == 0)
{
lean_dec(v___y_264_);
lean_dec(v___y_262_);
lean_dec(v___y_260_);
lean_del_object(v___x_250_);
v___y_188_ = v___y_263_;
v___y_189_ = v_a_176_;
v___y_190_ = v_a_178_;
v___y_191_ = v_a_179_;
v___y_192_ = v_a_180_;
v___y_193_ = v_a_181_;
goto v___jp_187_;
}
else
{
lean_object* v_name_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_275_; 
v_name_268_ = lean_ctor_get(v_toSignature_183_, 0);
lean_inc(v_name_268_);
v___x_269_ = l_Lean_MessageData_ofName(v_name_268_);
v___x_270_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__8, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__8_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__8);
v___x_271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_269_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
v___x_272_ = l_Lean_Compiler_LCNF_Code_size(v___y_261_, v___y_263_);
v___x_273_ = l_Nat_reprFast(v___x_272_);
if (v_isShared_251_ == 0)
{
lean_ctor_set_tag(v___x_250_, 3);
lean_ctor_set(v___x_250_, 0, v___x_273_);
v___x_275_ = v___x_250_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_273_);
v___x_275_ = v_reuseFailAlloc_305_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_276_ = l_Lean_MessageData_ofFormat(v___x_275_);
v___x_277_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_271_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
v___x_278_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__10, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__10_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__10);
v___x_279_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_277_);
lean_ctor_set(v___x_279_, 1, v___x_278_);
v___x_280_ = l_Nat_reprFast(v___y_262_);
v___x_281_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
v___x_282_ = l_Lean_MessageData_ofFormat(v___x_281_);
v___x_283_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_279_);
lean_ctor_set(v___x_283_, 1, v___x_282_);
v___x_284_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__12, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__12_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__12);
v___x_285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_283_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = l_Nat_reprFast(v___y_264_);
v___x_287_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
v___x_288_ = l_Lean_MessageData_ofFormat(v___x_287_);
v___x_289_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_285_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__14, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__14_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__14);
v___x_291_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_289_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = l_Nat_reprFast(v___y_260_);
v___x_293_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
v___x_294_ = l_Lean_MessageData_ofFormat(v___x_293_);
v___x_295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_291_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
v___x_296_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg(v___x_265_, v___x_295_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_dec_ref(v___x_296_);
v___y_188_ = v___y_263_;
v___y_189_ = v_a_176_;
v___y_190_ = v_a_178_;
v___y_191_ = v_a_179_;
v___y_192_ = v_a_180_;
v___y_193_ = v_a_181_;
goto v___jp_187_;
}
else
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
lean_dec_ref(v___y_263_);
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_toSignature_183_);
v_a_297_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v___x_296_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_296_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_a_297_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
}
}
}
v___jp_306_:
{
lean_object* v___x_309_; 
lean_inc_ref(v_a_180_);
v___x_309_ = l_Lean_Compiler_LCNF_Simp_simp(v_code_248_, v_a_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
if (lean_obj_tag(v___x_309_) == 0)
{
lean_object* v_a_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v_binderRenaming_313_; lean_object* v_visited_314_; lean_object* v_inline_315_; lean_object* v_inlineLocal_316_; lean_object* v___x_317_; 
v_a_310_ = lean_ctor_get(v___x_309_, 0);
lean_inc(v_a_310_);
lean_dec_ref(v___x_309_);
v___x_311_ = lean_st_ref_get(v_a_181_);
lean_dec(v___x_311_);
v___x_312_ = lean_st_ref_get(v_a_176_);
v_binderRenaming_313_ = lean_ctor_get(v___x_312_, 2);
lean_inc(v_binderRenaming_313_);
v_visited_314_ = lean_ctor_get(v___x_312_, 4);
lean_inc(v_visited_314_);
v_inline_315_ = lean_ctor_get(v___x_312_, 5);
lean_inc(v_inline_315_);
v_inlineLocal_316_ = lean_ctor_get(v___x_312_, 6);
lean_inc(v_inlineLocal_316_);
lean_dec(v___x_312_);
v___x_317_ = l_Lean_Compiler_LCNF_Code_applyRenaming(v___y_307_, v_a_310_, v_binderRenaming_313_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
lean_dec(v_binderRenaming_313_);
if (lean_obj_tag(v___x_317_) == 0)
{
if (v_hasTrace_256_ == 0)
{
lean_object* v_a_318_; 
v_a_318_ = lean_ctor_get(v___x_317_, 0);
lean_inc(v_a_318_);
lean_dec_ref(v___x_317_);
v___y_260_ = v_inlineLocal_316_;
v___y_261_ = v___y_307_;
v___y_262_ = v_visited_314_;
v___y_263_ = v_a_318_;
v___y_264_ = v_inline_315_;
goto v___jp_259_;
}
else
{
lean_object* v_a_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; uint8_t v___x_324_; 
v_a_319_ = lean_ctor_get(v___x_317_, 0);
lean_inc(v_a_319_);
lean_dec_ref(v___x_317_);
v___x_320_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__15, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__15_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__15);
lean_inc_ref(v___y_308_);
v___x_321_ = l_Lean_Name_mkStr4(v___x_257_, v___x_258_, v___y_308_, v___x_320_);
v___x_322_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__5);
lean_inc(v___x_321_);
v___x_323_ = l_Lean_Name_append(v___x_322_, v___x_321_);
v___x_324_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_255_, v_options_254_, v___x_323_);
lean_dec(v___x_323_);
if (v___x_324_ == 0)
{
lean_dec(v___x_321_);
v___y_260_ = v_inlineLocal_316_;
v___y_261_ = v___y_307_;
v___y_262_ = v_visited_314_;
v___y_263_ = v_a_319_;
v___y_264_ = v_inline_315_;
goto v___jp_259_;
}
else
{
lean_object* v___x_325_; 
lean_inc(v_a_319_);
v___x_325_ = l_Lean_Compiler_LCNF_ppCode(v___y_307_, v_a_319_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v_name_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_a_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc(v_a_326_);
lean_dec_ref(v___x_325_);
v_name_327_ = lean_ctor_get(v_toSignature_183_, 0);
lean_inc(v_name_327_);
v___x_328_ = l_Lean_MessageData_ofName(v_name_327_);
v___x_329_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__17, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__17_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__17);
v___x_330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_330_, 0, v___x_328_);
lean_ctor_set(v___x_330_, 1, v___x_329_);
v___x_331_ = l_Lean_MessageData_ofFormat(v_a_326_);
v___x_332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_332_, 0, v___x_330_);
lean_ctor_set(v___x_332_, 1, v___x_331_);
v___x_333_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg(v___x_321_, v___x_332_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_dec_ref(v___x_333_);
v___y_260_ = v_inlineLocal_316_;
v___y_261_ = v___y_307_;
v___y_262_ = v_visited_314_;
v___y_263_ = v_a_319_;
v___y_264_ = v_inline_315_;
goto v___jp_259_;
}
else
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_341_; 
lean_dec(v_a_319_);
lean_dec(v_inlineLocal_316_);
lean_dec(v_inline_315_);
lean_dec(v_visited_314_);
lean_del_object(v___x_250_);
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_toSignature_183_);
v_a_334_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_341_ == 0)
{
v___x_336_ = v___x_333_;
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_333_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_339_; 
if (v_isShared_337_ == 0)
{
v___x_339_ = v___x_336_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_a_334_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
else
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_349_; 
lean_dec(v___x_321_);
lean_dec(v_a_319_);
lean_dec(v_inlineLocal_316_);
lean_dec(v_inline_315_);
lean_dec(v_visited_314_);
lean_del_object(v___x_250_);
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_toSignature_183_);
v_a_342_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_349_ == 0)
{
v___x_344_ = v___x_325_;
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_325_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_347_; 
if (v_isShared_345_ == 0)
{
v___x_347_ = v___x_344_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_a_342_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
}
}
}
else
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_357_; 
lean_dec(v_inlineLocal_316_);
lean_dec(v_inline_315_);
lean_dec(v_visited_314_);
lean_del_object(v___x_250_);
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_toSignature_183_);
v_a_350_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_357_ == 0)
{
v___x_352_ = v___x_317_;
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_317_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_355_; 
if (v_isShared_353_ == 0)
{
v___x_355_ = v___x_352_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_a_350_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
}
else
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_365_; 
lean_del_object(v___x_250_);
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_toSignature_183_);
v_a_358_ = lean_ctor_get(v___x_309_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_365_ == 0)
{
v___x_360_ = v___x_309_;
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_309_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_363_; 
if (v_isShared_361_ == 0)
{
v___x_363_ = v___x_360_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_a_358_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
v___jp_366_:
{
lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_367_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__18, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__18_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__18);
v___x_368_ = 0;
if (v_hasTrace_256_ == 0)
{
lean_dec_ref(v_decl_174_);
v___y_307_ = v___x_368_;
v___y_308_ = v___x_367_;
goto v___jp_306_;
}
else
{
lean_object* v___x_369_; lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_369_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__19, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__19_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__19);
v___x_370_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__20, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__20_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__20);
v___x_371_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_255_, v_options_254_, v___x_370_);
if (v___x_371_ == 0)
{
lean_dec_ref(v_decl_174_);
v___y_307_ = v___x_368_;
v___y_308_ = v___x_367_;
goto v___jp_306_;
}
else
{
lean_object* v___x_372_; 
v___x_372_ = l_Lean_Compiler_LCNF_ppDecl(v___x_368_, v_decl_174_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_a_373_);
lean_dec_ref(v___x_372_);
v___x_374_ = l_Lean_MessageData_ofFormat(v_a_373_);
v___x_375_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_simp_x3f_spec__0___redArg(v___x_369_, v___x_374_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
if (lean_obj_tag(v___x_375_) == 0)
{
lean_dec_ref(v___x_375_);
v___y_307_ = v___x_368_;
v___y_308_ = v___x_367_;
goto v___jp_306_;
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_del_object(v___x_250_);
lean_dec_ref(v_code_248_);
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_toSignature_183_);
v_a_376_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_375_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_375_);
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
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
lean_del_object(v___x_250_);
lean_dec_ref(v_code_248_);
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_toSignature_183_);
v_a_384_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_372_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_372_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_432_; 
lean_del_object(v___x_250_);
lean_dec_ref(v_code_248_);
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_toSignature_183_);
lean_dec_ref(v_decl_174_);
v_a_425_ = lean_ctor_get(v___x_253_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_432_ == 0)
{
v___x_427_ = v___x_253_;
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_253_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_430_; 
if (v_isShared_428_ == 0)
{
v___x_430_ = v___x_427_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_a_425_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
}
else
{
lean_object* v___x_434_; lean_object* v___x_435_; 
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_value_184_);
lean_dec_ref(v_toSignature_183_);
lean_dec_ref(v_decl_174_);
v___x_434_ = lean_box(0);
v___x_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
return v___x_435_;
}
v___jp_187_:
{
lean_object* v___x_194_; 
lean_inc_ref(v___y_188_);
v___x_194_ = l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f(v___y_188_, v___y_190_, v___y_191_, v___y_192_, v___y_193_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_239_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_239_ == 0)
{
v___x_197_ = v___x_194_;
v_isShared_198_ = v_isSharedCheck_239_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_194_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_239_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
if (lean_obj_tag(v_a_195_) == 1)
{
lean_object* v_val_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_225_; 
lean_del_object(v___x_197_);
lean_dec_ref(v___y_188_);
v_val_199_ = lean_ctor_get(v_a_195_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v_a_195_);
if (v_isSharedCheck_225_ == 0)
{
v___x_201_ = v_a_195_;
v_isShared_202_ = v_isSharedCheck_225_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_val_199_);
lean_dec(v_a_195_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_225_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_203_, 0, v_val_199_);
v___x_204_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_204_, 0, v_toSignature_183_);
lean_ctor_set(v___x_204_, 1, v___x_203_);
lean_ctor_set(v___x_204_, 2, v_inlineAttr_x3f_186_);
lean_ctor_set_uint8(v___x_204_, sizeof(void*)*3, v_recursive_185_);
v___x_205_ = l_Lean_Compiler_LCNF_Decl_reduceJpArity(v___x_204_, v___y_190_, v___y_191_, v___y_192_, v___y_193_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_216_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_216_ == 0)
{
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_216_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_216_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_211_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v_a_206_);
v___x_211_ = v___x_201_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_a_206_);
v___x_211_ = v_reuseFailAlloc_215_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
lean_object* v___x_213_; 
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_211_);
v___x_213_ = v___x_208_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_211_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
else
{
lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_224_; 
lean_del_object(v___x_201_);
v_a_217_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_224_ == 0)
{
v___x_219_ = v___x_205_;
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_205_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_217_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
}
else
{
lean_object* v___x_226_; lean_object* v___x_227_; uint8_t v_simplified_228_; 
lean_dec(v_a_195_);
v___x_226_ = lean_st_ref_get(v___y_193_);
lean_dec(v___x_226_);
v___x_227_ = lean_st_ref_get(v___y_189_);
v_simplified_228_ = lean_ctor_get_uint8(v___x_227_, sizeof(void*)*7);
lean_dec(v___x_227_);
if (v_simplified_228_ == 0)
{
lean_object* v___x_229_; lean_object* v___x_231_; 
lean_dec_ref(v___y_188_);
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_toSignature_183_);
v___x_229_ = lean_box(0);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 0, v___x_229_);
v___x_231_ = v___x_197_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v___x_229_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
else
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_237_; 
v___x_233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_233_, 0, v___y_188_);
v___x_234_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_234_, 0, v_toSignature_183_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
lean_ctor_set(v___x_234_, 2, v_inlineAttr_x3f_186_);
lean_ctor_set_uint8(v___x_234_, sizeof(void*)*3, v_recursive_185_);
v___x_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 0, v___x_235_);
v___x_237_ = v___x_197_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___x_235_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
}
}
}
else
{
lean_object* v_a_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_247_; 
lean_dec_ref(v___y_188_);
lean_dec(v_inlineAttr_x3f_186_);
lean_dec_ref(v_toSignature_183_);
v_a_240_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_247_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_247_ == 0)
{
v___x_242_ = v___x_194_;
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_a_240_);
lean_dec(v___x_194_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_245_; 
if (v_isShared_243_ == 0)
{
v___x_245_ = v___x_242_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_a_240_);
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
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_simp_x3f___boxed(lean_object* v_decl_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_Compiler_LCNF_Decl_simp_x3f(v_decl_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_);
lean_dec(v_a_443_);
lean_dec_ref(v_a_442_);
lean_dec(v_a_441_);
lean_dec_ref(v_a_440_);
lean_dec_ref(v_a_439_);
lean_dec(v_a_438_);
lean_dec_ref(v_a_437_);
return v_res_445_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__0(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_446_ = lean_box(0);
v___x_447_ = lean_unsigned_to_nat(16u);
v___x_448_ = lean_mk_array(v___x_447_, v___x_446_);
return v___x_448_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__1(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__0, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__0);
v___x_450_ = lean_unsigned_to_nat(0u);
v___x_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___x_449_);
return v___x_451_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__2(void){
_start:
{
lean_object* v___x_452_; uint8_t v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_452_ = lean_unsigned_to_nat(0u);
v___x_453_ = 0;
v___x_454_ = lean_box(1);
v___x_455_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_456_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__1, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__1);
v___x_457_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_457_, 0, v___x_456_);
lean_ctor_set(v___x_457_, 1, v___x_455_);
lean_ctor_set(v___x_457_, 2, v___x_454_);
lean_ctor_set(v___x_457_, 3, v___x_456_);
lean_ctor_set(v___x_457_, 4, v___x_452_);
lean_ctor_set(v___x_457_, 5, v___x_452_);
lean_ctor_set(v___x_457_, 6, v___x_452_);
lean_ctor_set_uint8(v___x_457_, sizeof(void*)*7, v___x_453_);
return v___x_457_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__3(void){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_458_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__4(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__3, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__3);
v___x_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
return v___x_460_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__5(void){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_461_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__4, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__4_once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__4);
v___x_462_ = lean_box(1);
v___x_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
lean_ctor_set(v___x_463_, 1, v___x_461_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go(lean_object* v_decl_464_, lean_object* v_config_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v_toSignature_474_; lean_object* v_name_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_471_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__2, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__2_once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__2);
v___x_472_ = lean_st_ref_get(v_a_469_);
lean_dec(v___x_472_);
v___x_473_ = lean_st_mk_ref(v___x_471_);
v_toSignature_474_ = lean_ctor_get(v_decl_464_, 0);
v_name_475_ = lean_ctor_get(v_toSignature_474_, 0);
v___x_476_ = lean_box(0);
v___x_477_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__4, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__4_once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__4);
lean_inc_ref(v_config_465_);
lean_inc(v_name_475_);
v___x_478_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_478_, 0, v_name_475_);
lean_ctor_set(v___x_478_, 1, v_config_465_);
lean_ctor_set(v___x_478_, 2, v___x_476_);
lean_ctor_set(v___x_478_, 3, v___x_477_);
v___x_479_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__5, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__5_once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___closed__5);
lean_inc_ref(v_decl_464_);
v___x_480_ = l_Lean_Compiler_LCNF_Decl_simp_x3f(v_decl_464_, v___x_478_, v___x_473_, v___x_479_, v_a_466_, v_a_467_, v_a_468_, v_a_469_);
lean_dec_ref(v___x_478_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_492_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_492_ == 0)
{
v___x_483_ = v___x_480_;
v_isShared_484_ = v_isSharedCheck_492_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_480_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_492_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_st_ref_get(v_a_469_);
lean_dec(v___x_485_);
v___x_486_ = lean_st_ref_get(v___x_473_);
lean_dec(v___x_473_);
lean_dec(v___x_486_);
if (lean_obj_tag(v_a_481_) == 1)
{
lean_object* v_val_487_; 
lean_del_object(v___x_483_);
lean_dec_ref(v_decl_464_);
v_val_487_ = lean_ctor_get(v_a_481_, 0);
lean_inc(v_val_487_);
lean_dec_ref(v_a_481_);
v_decl_464_ = v_val_487_;
goto _start;
}
else
{
lean_object* v___x_490_; 
lean_dec(v_a_481_);
lean_dec_ref(v_config_465_);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 0, v_decl_464_);
v___x_490_ = v___x_483_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_decl_464_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
else
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_500_; 
lean_dec(v___x_473_);
lean_dec_ref(v_config_465_);
lean_dec_ref(v_decl_464_);
v_a_493_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_500_ == 0)
{
v___x_495_ = v___x_480_;
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_480_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_498_; 
if (v_isShared_496_ == 0)
{
v___x_498_ = v___x_495_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_a_493_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go___boxed(lean_object* v_decl_501_, lean_object* v_config_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go(v_decl_501_, v_config_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_);
lean_dec(v_a_506_);
lean_dec_ref(v_a_505_);
lean_dec(v_a_504_);
lean_dec_ref(v_a_503_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_simp(lean_object* v_decl_509_, lean_object* v_config_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_){
_start:
{
lean_object* v___x_516_; 
lean_inc_ref(v_decl_509_);
v___x_516_ = l_Lean_Compiler_LCNF_Decl_isTemplateLike___redArg(v_decl_509_, v_a_513_, v_a_514_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; uint8_t v___x_518_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
lean_inc(v_a_517_);
lean_dec_ref(v___x_516_);
v___x_518_ = lean_unbox(v_a_517_);
lean_dec(v_a_517_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; 
v___x_519_ = l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go(v_decl_509_, v_config_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_);
return v___x_519_;
}
else
{
uint8_t v_implementedBy_520_; uint8_t v_inlineDefs_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_530_; 
v_implementedBy_520_ = lean_ctor_get_uint8(v_config_510_, 2);
v_inlineDefs_521_ = lean_ctor_get_uint8(v_config_510_, 3);
v_isSharedCheck_530_ = !lean_is_exclusive(v_config_510_);
if (v_isSharedCheck_530_ == 0)
{
v___x_523_ = v_config_510_;
v_isShared_524_ = v_isSharedCheck_530_;
goto v_resetjp_522_;
}
else
{
lean_dec(v_config_510_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_530_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
uint8_t v___x_525_; lean_object* v___x_527_; 
v___x_525_ = 0;
if (v_isShared_524_ == 0)
{
v___x_527_ = v___x_523_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v_reuseFailAlloc_529_, 2, v_implementedBy_520_);
lean_ctor_set_uint8(v_reuseFailAlloc_529_, 3, v_inlineDefs_521_);
v___x_527_ = v_reuseFailAlloc_529_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
lean_object* v___x_528_; 
lean_ctor_set_uint8(v___x_527_, 0, v___x_525_);
lean_ctor_set_uint8(v___x_527_, 1, v___x_525_);
v___x_528_ = l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_Decl_simp_go(v_decl_509_, v___x_527_, v_a_511_, v_a_512_, v_a_513_, v_a_514_);
return v___x_528_;
}
}
}
}
else
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_538_; 
lean_dec_ref(v_config_510_);
lean_dec_ref(v_decl_509_);
v_a_531_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_538_ == 0)
{
v___x_533_ = v___x_516_;
v_isShared_534_ = v_isSharedCheck_538_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v___x_516_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_538_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_536_; 
if (v_isShared_534_ == 0)
{
v___x_536_ = v___x_533_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_a_531_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_simp___boxed(lean_object* v_decl_539_, lean_object* v_config_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_Compiler_LCNF_Decl_simp(v_decl_539_, v_config_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec_ref(v_a_541_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simp___lam__0(lean_object* v_config_547_, lean_object* v_x_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = l_Lean_Compiler_LCNF_Decl_simp(v_x_548_, v_config_547_, v___y_549_, v___y_550_, v___y_551_, v___y_552_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simp___lam__0___boxed(lean_object* v_config_555_, lean_object* v_x_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lean_Compiler_LCNF_simp___lam__0(v_config_555_, v_x_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
return v_res_562_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_simp___lam__1___closed__0(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_563_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1);
v___x_564_ = l_Lean_Name_mkStr1(v___x_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simp___lam__1(uint8_t v_phase_565_, lean_object* v___f_566_, lean_object* v_occurrence_567_, lean_object* v_h_568_){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_569_ = lean_obj_once(&l_Lean_Compiler_LCNF_simp___lam__1___closed__0, &l_Lean_Compiler_LCNF_simp___lam__1___closed__0_once, _init_l_Lean_Compiler_LCNF_simp___lam__1___closed__0);
v___x_570_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_569_, v_phase_565_, v___f_566_, v_occurrence_567_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simp___lam__1___boxed(lean_object* v_phase_571_, lean_object* v___f_572_, lean_object* v_occurrence_573_, lean_object* v_h_574_){
_start:
{
uint8_t v_phase_boxed_575_; lean_object* v_res_576_; 
v_phase_boxed_575_ = lean_unbox(v_phase_571_);
v_res_576_ = l_Lean_Compiler_LCNF_simp___lam__1(v_phase_boxed_575_, v___f_572_, v_occurrence_573_, v_h_574_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simp(lean_object* v_config_577_, lean_object* v_occurrence_578_, uint8_t v_phase_579_){
_start:
{
lean_object* v___f_580_; lean_object* v___x_581_; lean_object* v___f_582_; lean_object* v___x_583_; uint8_t v___x_584_; lean_object* v___x_585_; 
v___f_580_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_simp___lam__0___boxed), 7, 1);
lean_closure_set(v___f_580_, 0, v_config_577_);
v___x_581_ = lean_box(v_phase_579_);
v___f_582_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_simp___lam__1___boxed), 4, 3);
lean_closure_set(v___f_582_, 0, v___x_581_);
lean_closure_set(v___f_582_, 1, v___f_580_);
lean_closure_set(v___f_582_, 2, v_occurrence_578_);
v___x_583_ = l_Lean_Compiler_LCNF_instInhabitedPass;
v___x_584_ = 0;
v___x_585_ = l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(v___x_583_, v_phase_579_, v___x_584_, v___f_582_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_simp___boxed(lean_object* v_config_586_, lean_object* v_occurrence_587_, lean_object* v_phase_588_){
_start:
{
uint8_t v_phase_boxed_589_; lean_object* v_res_590_; 
v_phase_boxed_589_ = lean_unbox(v_phase_588_);
v_res_590_ = l_Lean_Compiler_LCNF_simp(v_config_586_, v_occurrence_587_, v_phase_boxed_589_);
return v_res_590_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_591_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1);
v___x_592_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0);
v___x_593_ = l_Lean_Name_mkStr2(v___x_592_, v___x_591_);
return v___x_593_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_594_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_595_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_596_ = lean_box(0);
v___x_597_ = l_Lean_Name_str___override(v___x_596_, v___x_595_);
return v___x_597_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_598_; 
v___x_598_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_598_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_599_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_600_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_601_ = l_Lean_Name_str___override(v___x_600_, v___x_599_);
return v___x_601_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_602_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0);
v___x_603_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_604_ = l_Lean_Name_str___override(v___x_603_, v___x_602_);
return v___x_604_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = lean_mk_string_unchecked("LCNF", 4, 4);
return v___x_605_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_606_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_607_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_608_ = l_Lean_Name_str___override(v___x_607_, v___x_606_);
return v___x_608_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = lean_mk_string_unchecked("Simp", 4, 4);
return v___x_609_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_610_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_611_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_612_ = l_Lean_Name_str___override(v___x_611_, v___x_610_);
return v___x_612_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_613_ = lean_unsigned_to_nat(0u);
v___x_614_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_615_ = l_Lean_Name_num___override(v___x_614_, v___x_613_);
return v___x_615_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_616_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_617_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_618_ = l_Lean_Name_str___override(v___x_617_, v___x_616_);
return v___x_618_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0);
v___x_620_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_621_ = l_Lean_Name_str___override(v___x_620_, v___x_619_);
return v___x_621_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_622_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_623_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_624_ = l_Lean_Name_str___override(v___x_623_, v___x_622_);
return v___x_624_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_625_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_626_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_627_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_628_ = l_Lean_Name_str___override(v___x_627_, v___x_626_);
return v___x_628_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_629_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_630_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_631_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_632_ = l_Lean_Name_str___override(v___x_631_, v___x_630_);
return v___x_632_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_633_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_634_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_635_ = l_Lean_Name_str___override(v___x_634_, v___x_633_);
return v___x_635_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_636_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0);
v___x_637_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_638_ = l_Lean_Name_str___override(v___x_637_, v___x_636_);
return v___x_638_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_639_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_640_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_641_ = l_Lean_Name_str___override(v___x_640_, v___x_639_);
return v___x_641_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_642_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_643_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_644_ = l_Lean_Name_str___override(v___x_643_, v___x_642_);
return v___x_644_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_645_ = lean_unsigned_to_nat(3274377585u);
v___x_646_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_647_ = l_Lean_Name_num___override(v___x_646_, v___x_645_);
return v___x_647_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_648_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_649_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_650_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_651_ = l_Lean_Name_str___override(v___x_650_, v___x_649_);
return v___x_651_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_652_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_653_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_654_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_655_ = l_Lean_Name_str___override(v___x_654_, v___x_653_);
return v___x_655_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_656_ = lean_unsigned_to_nat(2u);
v___x_657_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_658_ = l_Lean_Name_num___override(v___x_657_, v___x_656_);
return v___x_658_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_659_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__15, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__15_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__15);
v___x_660_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__18, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__18_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__18);
v___x_661_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__1);
v___x_662_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__0);
v___x_663_ = l_Lean_Name_mkStr4(v___x_662_, v___x_661_, v___x_660_, v___x_659_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_665_; uint8_t v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_665_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_666_ = 1;
v___x_667_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_668_ = l_Lean_registerTraceClass(v___x_665_, v___x_666_, v___x_667_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v___x_669_; uint8_t v___x_670_; lean_object* v___x_671_; 
lean_dec_ref(v___x_668_);
v___x_669_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__3, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__3_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__3);
v___x_670_ = 0;
v___x_671_ = l_Lean_registerTraceClass(v___x_669_, v___x_670_, v___x_667_);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; 
lean_dec_ref(v___x_671_);
v___x_672_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__19, &l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__19_once, _init_l_Lean_Compiler_LCNF_Decl_simp_x3f___closed__19);
v___x_673_ = l_Lean_registerTraceClass(v___x_672_, v___x_670_, v___x_667_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v___x_674_; lean_object* v___x_675_; 
lean_dec_ref(v___x_673_);
v___x_674_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_);
v___x_675_ = l_Lean_registerTraceClass(v___x_674_, v___x_670_, v___x_667_);
return v___x_675_;
}
else
{
return v___x_673_;
}
}
else
{
return v___x_671_;
}
}
else
{
return v___x_668_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2____boxed(lean_object* v_a_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_();
return v_res_677_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_ReduceJpArity(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_FunDeclInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_JpCases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Config(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_SimpValue(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_ReduceJpArity(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_FunDeclInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_JpCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_SimpValue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_Simp_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Simp_3274377585____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_ReduceJpArity(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_Basic(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_FunDeclInfo(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_JpCases(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_Config(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_InlineProj(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_SimpValue(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_Used(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_ReduceJpArity(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_FunDeclInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_JpCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_InlineCandidate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_InlineProj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_DefaultAlt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_SimpValue(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_Used(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp(builtin);
}
#ifdef __cplusplus
}
#endif
