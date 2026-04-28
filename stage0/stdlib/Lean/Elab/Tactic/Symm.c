// Lean compiler output
// Module: Lean.Elab.Tactic.Symm
// Imports: public import Lean.Meta.Tactic.Symm public import Lean.Elab.Tactic.Location
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_applySymmAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_MVarId_applySymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Tactic_withLocation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_expandLocation(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_MVarId_symmSaturate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymm___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymm___lam__2___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymm___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymm___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymm___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymm___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymm___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymm___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymm___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymm___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymm___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymm___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymm___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymm___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymm___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymm___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymm___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymm___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymm___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymm___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymm___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymm___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymm___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymm___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymmSaturate___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymmSaturate___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymmSaturate___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymmSaturate___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymmSaturate___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymmSaturate___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSymmSaturate___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSymmSaturate___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymmSaturate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymmSaturate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
lean_dec(v___y_26_);
lean_dec_ref(v___y_25_);
lean_dec(v___y_24_);
lean_dec_ref(v___y_23_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__0(lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_32_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
if (lean_obj_tag(v___x_40_) == 0)
{
lean_object* v_a_41_; lean_object* v___x_42_; 
v_a_41_ = lean_ctor_get(v___x_40_, 0);
lean_inc(v_a_41_);
lean_dec_ref(v___x_40_);
v___x_42_ = l_Lean_MVarId_applySymm(v_a_41_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v_a_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v_a_43_ = lean_ctor_get(v___x_42_, 0);
lean_inc(v_a_43_);
lean_dec_ref(v___x_42_);
v___x_44_ = lean_box(0);
v___x_45_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_45_, 0, v_a_43_);
lean_ctor_set(v___x_45_, 1, v___x_44_);
v___x_46_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_45_, v___y_32_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
return v___x_46_;
}
else
{
lean_object* v_a_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_54_; 
v_a_47_ = lean_ctor_get(v___x_42_, 0);
v_isSharedCheck_54_ = !lean_is_exclusive(v___x_42_);
if (v_isSharedCheck_54_ == 0)
{
v___x_49_ = v___x_42_;
v_isShared_50_ = v_isSharedCheck_54_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_a_47_);
lean_dec(v___x_42_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_54_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_52_; 
if (v_isShared_50_ == 0)
{
v___x_52_ = v___x_49_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v_a_47_);
v___x_52_ = v_reuseFailAlloc_53_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
return v___x_52_;
}
}
}
}
else
{
lean_object* v_a_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_62_; 
v_a_55_ = lean_ctor_get(v___x_40_, 0);
v_isSharedCheck_62_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_62_ == 0)
{
v___x_57_ = v___x_40_;
v_isShared_58_ = v_isSharedCheck_62_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_a_55_);
lean_dec(v___x_40_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_62_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_60_; 
if (v_isShared_58_ == 0)
{
v___x_60_ = v___x_57_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v_a_55_);
v___x_60_ = v_reuseFailAlloc_61_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
return v___x_60_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__0___boxed(lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Elab_Tactic_evalSymm___lam__0(v___y_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_);
lean_dec(v___y_70_);
lean_dec_ref(v___y_69_);
lean_dec(v___y_68_);
lean_dec_ref(v___y_67_);
lean_dec(v___y_66_);
lean_dec_ref(v___y_65_);
lean_dec(v___y_64_);
lean_dec_ref(v___y_63_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__1(lean_object* v___f_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__1___boxed(lean_object* v___f_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Lean_Elab_Tactic_evalSymm___lam__1(v___f_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec(v___y_86_);
lean_dec_ref(v___y_85_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0_spec__0(lean_object* v_msgData_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v___x_101_; lean_object* v_env_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v_mctx_105_; lean_object* v_lctx_106_; lean_object* v_options_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_101_ = lean_st_ref_get(v___y_99_);
v_env_102_ = lean_ctor_get(v___x_101_, 0);
lean_inc_ref(v_env_102_);
lean_dec(v___x_101_);
v___x_103_ = lean_st_ref_get(v___y_99_);
lean_dec(v___x_103_);
v___x_104_ = lean_st_ref_get(v___y_97_);
v_mctx_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc_ref(v_mctx_105_);
lean_dec(v___x_104_);
v_lctx_106_ = lean_ctor_get(v___y_96_, 2);
v_options_107_ = lean_ctor_get(v___y_98_, 2);
lean_inc_ref(v_options_107_);
lean_inc_ref(v_lctx_106_);
v___x_108_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_108_, 0, v_env_102_);
lean_ctor_set(v___x_108_, 1, v_mctx_105_);
lean_ctor_set(v___x_108_, 2, v_lctx_106_);
lean_ctor_set(v___x_108_, 3, v_options_107_);
v___x_109_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v_msgData_95_);
v___x_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0_spec__0___boxed(lean_object* v_msgData_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0_spec__0(v_msgData_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0___redArg(lean_object* v_msg_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_){
_start:
{
lean_object* v_ref_124_; lean_object* v___x_125_; lean_object* v_a_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_134_; 
v_ref_124_ = lean_ctor_get(v___y_121_, 5);
v___x_125_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0_spec__0(v_msg_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_);
v_a_126_ = lean_ctor_get(v___x_125_, 0);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_125_);
if (v_isSharedCheck_134_ == 0)
{
v___x_128_ = v___x_125_;
v_isShared_129_ = v_isSharedCheck_134_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_a_126_);
lean_dec(v___x_125_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_134_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_130_; lean_object* v___x_132_; 
lean_inc(v_ref_124_);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v_ref_124_);
lean_ctor_set(v___x_130_, 1, v_a_126_);
if (v_isShared_129_ == 0)
{
lean_ctor_set_tag(v___x_128_, 1);
lean_ctor_set(v___x_128_, 0, v___x_130_);
v___x_132_ = v___x_128_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_130_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0___redArg___boxed(lean_object* v_msg_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0___redArg(v_msg_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
return v_res_141_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymm___lam__2___closed__0(void){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lean_mk_string_unchecked("`symm` made no progress", 23, 23);
return v___x_142_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymm___lam__2___closed__1(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___lam__2___closed__0, &l_Lean_Elab_Tactic_evalSymm___lam__2___closed__0_once, _init_l_Lean_Elab_Tactic_evalSymm___lam__2___closed__0);
v___x_144_ = l_Lean_stringToMessageData(v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__2(lean_object* v_x_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___lam__2___closed__1, &l_Lean_Elab_Tactic_evalSymm___lam__2___closed__1_once, _init_l_Lean_Elab_Tactic_evalSymm___lam__2___closed__1);
v___x_156_ = l_Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0___redArg(v___x_155_, v___y_150_, v___y_151_, v___y_152_, v___y_153_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__2___boxed(lean_object* v_x_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_Elab_Tactic_evalSymm___lam__2(v_x_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
lean_dec(v_x_157_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__3(lean_object* v_h_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_170_, v___y_173_, v___y_174_, v___y_175_, v___y_176_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_180_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_a_179_);
lean_dec_ref(v___x_178_);
v___x_180_ = l_Lean_MVarId_applySymmAt(v_h_168_, v_a_179_, v___y_173_, v___y_174_, v___y_175_, v___y_176_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_a_181_);
lean_dec_ref(v___x_180_);
v___x_182_ = lean_box(0);
v___x_183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_183_, 0, v_a_181_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_183_, v___y_170_, v___y_173_, v___y_174_, v___y_175_, v___y_176_);
return v___x_184_;
}
else
{
lean_object* v_a_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_192_; 
v_a_185_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_192_ == 0)
{
v___x_187_ = v___x_180_;
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_a_185_);
lean_dec(v___x_180_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_190_; 
if (v_isShared_188_ == 0)
{
v___x_190_ = v___x_187_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_a_185_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
}
else
{
lean_object* v_a_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_200_; 
lean_dec(v_h_168_);
v_a_193_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_200_ == 0)
{
v___x_195_ = v___x_178_;
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_a_193_);
lean_dec(v___x_178_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_198_; 
if (v_isShared_196_ == 0)
{
v___x_198_ = v___x_195_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_a_193_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__3___boxed(lean_object* v_h_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lean_Elab_Tactic_evalSymm___lam__3(v_h_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
lean_dec(v___y_205_);
lean_dec_ref(v___y_204_);
lean_dec(v___y_203_);
lean_dec_ref(v___y_202_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__4(lean_object* v_h_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_){
_start:
{
lean_object* v___f_222_; lean_object* v___x_223_; 
v___f_222_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSymm___lam__3___boxed), 10, 1);
lean_closure_set(v___f_222_, 0, v_h_212_);
v___x_223_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_222_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___lam__4___boxed(lean_object* v_h_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lean_Elab_Tactic_evalSymm___lam__4(v_h_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec(v___y_230_);
lean_dec_ref(v___y_229_);
lean_dec(v___y_228_);
lean_dec_ref(v___y_227_);
lean_dec(v___y_226_);
lean_dec_ref(v___y_225_);
return v_res_234_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymm___closed__0(void){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_235_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymm___closed__1(void){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_236_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymm___closed__2(void){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_237_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymm___closed__3(void){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = lean_mk_string_unchecked("symm", 4, 4);
return v___x_238_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymm___closed__4(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_239_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__3, &l_Lean_Elab_Tactic_evalSymm___closed__3_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__3);
v___x_240_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__2, &l_Lean_Elab_Tactic_evalSymm___closed__2_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__2);
v___x_241_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__1, &l_Lean_Elab_Tactic_evalSymm___closed__1_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__1);
v___x_242_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__0, &l_Lean_Elab_Tactic_evalSymm___closed__0_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__0);
v___x_243_ = l_Lean_Name_mkStr4(v___x_242_, v___x_241_, v___x_240_, v___x_239_);
return v___x_243_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymm___closed__5(void){
_start:
{
lean_object* v___f_244_; 
v___f_244_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSymm___lam__0___boxed), 9, 0);
return v___f_244_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymm___closed__6(void){
_start:
{
lean_object* v___f_245_; lean_object* v_atTarget_246_; 
v___f_245_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__5, &l_Lean_Elab_Tactic_evalSymm___closed__5_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__5);
v_atTarget_246_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSymm___lam__1___boxed), 10, 1);
lean_closure_set(v_atTarget_246_, 0, v___f_245_);
return v_atTarget_246_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymm___closed__7(void){
_start:
{
lean_object* v___f_247_; 
v___f_247_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSymm___lam__2___boxed), 10, 0);
return v___f_247_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymm___closed__8(void){
_start:
{
lean_object* v_atHyp_248_; 
v_atHyp_248_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSymm___lam__4___boxed), 10, 0);
return v_atHyp_248_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymm___closed__9(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_249_ = lean_unsigned_to_nat(0u);
v___x_250_ = lean_mk_empty_array_with_capacity(v___x_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm(lean_object* v_stx_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_){
_start:
{
lean_object* v___x_261_; uint8_t v___x_262_; 
v___x_261_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__4, &l_Lean_Elab_Tactic_evalSymm___closed__4_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__4);
lean_inc(v_stx_251_);
v___x_262_ = l_Lean_Syntax_isOfKind(v_stx_251_, v___x_261_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; 
lean_dec(v_stx_251_);
v___x_263_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg();
return v___x_263_;
}
else
{
lean_object* v_atTarget_264_; lean_object* v___f_265_; lean_object* v_atHyp_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v_atTarget_264_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__6, &l_Lean_Elab_Tactic_evalSymm___closed__6_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__6);
v___f_265_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__7, &l_Lean_Elab_Tactic_evalSymm___closed__7_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__7);
v_atHyp_266_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__8, &l_Lean_Elab_Tactic_evalSymm___closed__8_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__8);
v___x_267_ = lean_unsigned_to_nat(1u);
v___x_268_ = l_Lean_Syntax_getArg(v_stx_251_, v___x_267_);
lean_dec(v_stx_251_);
v___x_269_ = l_Lean_Syntax_getOptional_x3f(v___x_268_);
lean_dec(v___x_268_);
if (lean_obj_tag(v___x_269_) == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_270_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__9, &l_Lean_Elab_Tactic_evalSymm___closed__9_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__9);
v___x_271_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_271_, 0, v___x_270_);
lean_ctor_set_uint8(v___x_271_, sizeof(void*)*1, v___x_262_);
v___x_272_ = l_Lean_Elab_Tactic_withLocation(v___x_271_, v_atHyp_266_, v_atTarget_264_, v___f_265_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_);
lean_dec_ref(v___x_271_);
return v___x_272_;
}
else
{
lean_object* v_val_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v_val_273_ = lean_ctor_get(v___x_269_, 0);
lean_inc(v_val_273_);
lean_dec_ref(v___x_269_);
v___x_274_ = l_Lean_Elab_Tactic_expandLocation(v_val_273_);
lean_dec(v_val_273_);
v___x_275_ = l_Lean_Elab_Tactic_withLocation(v___x_274_, v_atHyp_266_, v_atTarget_264_, v___f_265_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_);
lean_dec(v___x_274_);
return v___x_275_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymm___boxed(lean_object* v_stx_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Lean_Elab_Tactic_evalSymm(v_stx_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
lean_dec(v_a_284_);
lean_dec_ref(v_a_283_);
lean_dec(v_a_282_);
lean_dec_ref(v_a_281_);
lean_dec(v_a_280_);
lean_dec_ref(v_a_279_);
lean_dec(v_a_278_);
lean_dec_ref(v_a_277_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0(lean_object* v_00_u03b1_287_, lean_object* v_msg_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l_Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0___redArg(v_msg_288_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0___boxed(lean_object* v_00_u03b1_299_, lean_object* v_msg_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Lean_throwError___at___00Lean_Elab_Tactic_evalSymm_spec__0(v_00_u03b1_299_, v_msg_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
lean_dec(v___y_306_);
lean_dec_ref(v___y_305_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
return v_res_310_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__0(void){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_311_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__1(void){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = lean_mk_string_unchecked("evalSymm", 8, 8);
return v___x_312_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__2(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_313_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__1, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__1);
v___x_314_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__2, &l_Lean_Elab_Tactic_evalSymm___closed__2_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__2);
v___x_315_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__0, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__0);
v___x_316_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__0, &l_Lean_Elab_Tactic_evalSymm___closed__0_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__0);
v___x_317_ = l_Lean_Name_mkStr4(v___x_316_, v___x_315_, v___x_314_, v___x_313_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1(){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_319_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_320_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__4, &l_Lean_Elab_Tactic_evalSymm___closed__4_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__4);
v___x_321_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__2, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__2);
v___x_322_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSymm___boxed), 10, 0);
v___x_323_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_319_, v___x_320_, v___x_321_, v___x_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___boxed(lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1();
return v_res_325_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = lean_unsigned_to_nat(13u);
v___x_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v___x_326_);
return v___x_328_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = lean_unsigned_to_nat(31u);
v___x_330_ = lean_unsigned_to_nat(20u);
v___x_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
lean_ctor_set(v___x_331_, 1, v___x_329_);
return v___x_331_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_332_ = lean_unsigned_to_nat(31u);
v___x_333_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__1);
v___x_334_ = lean_unsigned_to_nat(0u);
v___x_335_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__0);
v___x_336_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v___x_334_);
lean_ctor_set(v___x_336_, 2, v___x_333_);
lean_ctor_set(v___x_336_, 3, v___x_332_);
return v___x_336_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_337_ = lean_unsigned_to_nat(4u);
v___x_338_ = lean_unsigned_to_nat(13u);
v___x_339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
lean_ctor_set(v___x_339_, 1, v___x_337_);
return v___x_339_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_unsigned_to_nat(12u);
v___x_341_ = lean_unsigned_to_nat(13u);
v___x_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
lean_ctor_set(v___x_342_, 1, v___x_340_);
return v___x_342_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_343_ = lean_unsigned_to_nat(12u);
v___x_344_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__4);
v___x_345_ = lean_unsigned_to_nat(4u);
v___x_346_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__3);
v___x_347_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
lean_ctor_set(v___x_347_, 1, v___x_345_);
lean_ctor_set(v___x_347_, 2, v___x_344_);
lean_ctor_set(v___x_347_, 3, v___x_343_);
return v___x_347_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_348_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__5);
v___x_349_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__2);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
lean_ctor_set(v___x_350_, 1, v___x_348_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3(){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_352_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__2, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__2);
v___x_353_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___closed__6);
v___x_354_ = l_Lean_addBuiltinDeclarationRanges(v___x_352_, v___x_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3___boxed(lean_object* v_a_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3();
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymmSaturate___lam__0(lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_358_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_367_; lean_object* v___x_368_; 
v_a_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_a_367_);
lean_dec_ref(v___x_366_);
v___x_368_ = l_Lean_MVarId_symmSaturate(v_a_367_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v_a_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_a_369_);
lean_dec_ref(v___x_368_);
v___x_370_ = lean_box(0);
v___x_371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_371_, 0, v_a_369_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
v___x_372_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_371_, v___y_358_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
return v___x_372_;
}
else
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
v_a_373_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_380_ == 0)
{
v___x_375_ = v___x_368_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_368_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_373_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
else
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
v_a_381_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_388_ == 0)
{
v___x_383_ = v___x_366_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_366_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_a_381_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymmSaturate___lam__0___boxed(lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_Elab_Tactic_evalSymmSaturate___lam__0(v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
return v_res_398_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymmSaturate___closed__0(void){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = lean_mk_string_unchecked("symmSaturate", 12, 12);
return v___x_399_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymmSaturate___closed__1(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_400_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymmSaturate___closed__0, &l_Lean_Elab_Tactic_evalSymmSaturate___closed__0_once, _init_l_Lean_Elab_Tactic_evalSymmSaturate___closed__0);
v___x_401_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__2, &l_Lean_Elab_Tactic_evalSymm___closed__2_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__2);
v___x_402_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__1, &l_Lean_Elab_Tactic_evalSymm___closed__1_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__1);
v___x_403_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__0, &l_Lean_Elab_Tactic_evalSymm___closed__0_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__0);
v___x_404_ = l_Lean_Name_mkStr4(v___x_403_, v___x_402_, v___x_401_, v___x_400_);
return v___x_404_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSymmSaturate___closed__2(void){
_start:
{
lean_object* v___f_405_; 
v___f_405_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSymmSaturate___lam__0___boxed), 9, 0);
return v___f_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymmSaturate(lean_object* v_stx_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v___x_416_; uint8_t v___x_417_; 
v___x_416_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymmSaturate___closed__1, &l_Lean_Elab_Tactic_evalSymmSaturate___closed__1_once, _init_l_Lean_Elab_Tactic_evalSymmSaturate___closed__1);
v___x_417_ = l_Lean_Syntax_isOfKind(v_stx_406_, v___x_416_);
if (v___x_417_ == 0)
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalSymm_spec__1___redArg();
return v___x_418_;
}
else
{
lean_object* v___f_419_; lean_object* v___x_420_; 
v___f_419_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymmSaturate___closed__2, &l_Lean_Elab_Tactic_evalSymmSaturate___closed__2_once, _init_l_Lean_Elab_Tactic_evalSymmSaturate___closed__2);
v___x_420_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_419_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
return v___x_420_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSymmSaturate___boxed(lean_object* v_stx_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_Elab_Tactic_evalSymmSaturate(v_stx_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_);
lean_dec(v_a_429_);
lean_dec_ref(v_a_428_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec(v_a_423_);
lean_dec_ref(v_a_422_);
return v_res_431_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__0(void){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = lean_mk_string_unchecked("evalSymmSaturate", 16, 16);
return v___x_432_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__1(void){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_433_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__0, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__0);
v___x_434_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__2, &l_Lean_Elab_Tactic_evalSymm___closed__2_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__2);
v___x_435_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__0, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1___closed__0);
v___x_436_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymm___closed__0, &l_Lean_Elab_Tactic_evalSymm___closed__0_once, _init_l_Lean_Elab_Tactic_evalSymm___closed__0);
v___x_437_ = l_Lean_Name_mkStr4(v___x_436_, v___x_435_, v___x_434_, v___x_433_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1(){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_439_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_440_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSymmSaturate___closed__1, &l_Lean_Elab_Tactic_evalSymmSaturate___closed__1_once, _init_l_Lean_Elab_Tactic_evalSymmSaturate___closed__1);
v___x_441_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__1, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__1);
v___x_442_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSymmSaturate___boxed), 10, 0);
v___x_443_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_439_, v___x_440_, v___x_441_, v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___boxed(lean_object* v_a_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1();
return v_res_445_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_446_ = lean_unsigned_to_nat(0u);
v___x_447_ = lean_unsigned_to_nat(23u);
v___x_448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
lean_ctor_set(v___x_448_, 1, v___x_446_);
return v___x_448_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_unsigned_to_nat(31u);
v___x_450_ = lean_unsigned_to_nat(27u);
v___x_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___x_449_);
return v___x_451_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_452_ = lean_unsigned_to_nat(31u);
v___x_453_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__1);
v___x_454_ = lean_unsigned_to_nat(0u);
v___x_455_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__0);
v___x_456_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
lean_ctor_set(v___x_456_, 1, v___x_454_);
lean_ctor_set(v___x_456_, 2, v___x_453_);
lean_ctor_set(v___x_456_, 3, v___x_452_);
return v___x_456_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_457_ = lean_unsigned_to_nat(4u);
v___x_458_ = lean_unsigned_to_nat(23u);
v___x_459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
lean_ctor_set(v___x_459_, 1, v___x_457_);
return v___x_459_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_460_ = lean_unsigned_to_nat(20u);
v___x_461_ = lean_unsigned_to_nat(23u);
v___x_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
lean_ctor_set(v___x_462_, 1, v___x_460_);
return v___x_462_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_463_ = lean_unsigned_to_nat(20u);
v___x_464_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__4);
v___x_465_ = lean_unsigned_to_nat(4u);
v___x_466_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__3);
v___x_467_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_467_, 0, v___x_466_);
lean_ctor_set(v___x_467_, 1, v___x_465_);
lean_ctor_set(v___x_467_, 2, v___x_464_);
lean_ctor_set(v___x_467_, 3, v___x_463_);
return v___x_467_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_468_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__5);
v___x_469_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__2);
v___x_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
lean_ctor_set(v___x_470_, 1, v___x_468_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3(){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_472_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__1, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1___closed__1);
v___x_473_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___closed__6);
v___x_474_ = l_Lean_addBuiltinDeclarationRanges(v___x_472_, v___x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3___boxed(lean_object* v_a_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3();
return v_res_476_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Symm(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Location(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Symm(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Symm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Location(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymm___regBuiltin_Lean_Elab_Tactic_evalSymm_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Symm_0__Lean_Elab_Tactic_evalSymmSaturate___regBuiltin_Lean_Elab_Tactic_evalSymmSaturate_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Symm(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Symm(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Location(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Symm(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Symm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Location(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Symm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Symm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Symm(builtin);
}
#ifdef __cplusplus
}
#endif
