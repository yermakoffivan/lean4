// Lean compiler output
// Module: Lean.AuxRecursor
// Imports: public import Lean.EnvExtension import Init.Data.String.TakeDrop
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
lean_object* l_Lean_mkTagDeclarationExtension(lean_object*, lean_object*);
uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TagDeclarationExtension_tag(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_MapDeclarationExtension_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
static lean_once_cell_t l_Lean_casesOnSuffix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_casesOnSuffix___closed__0;
LEAN_EXPORT lean_object* l_Lean_casesOnSuffix;
static lean_once_cell_t l_Lean_recOnSuffix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recOnSuffix___closed__0;
LEAN_EXPORT lean_object* l_Lean_recOnSuffix;
static lean_once_cell_t l_Lean_brecOnSuffix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_brecOnSuffix___closed__0;
LEAN_EXPORT lean_object* l_Lean_brecOnSuffix;
static lean_once_cell_t l_Lean_belowSuffix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_belowSuffix___closed__0;
LEAN_EXPORT lean_object* l_Lean_belowSuffix;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkRecOnName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBRecOnName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBelowName(lean_object*);
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_auxRecExt;
LEAN_EXPORT lean_object* l_Lean_markAuxRecursor(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_isAuxRecursor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAuxRecursor___closed__0;
static lean_once_cell_t l_Lean_isAuxRecursor___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAuxRecursor___closed__1;
static lean_once_cell_t l_Lean_isAuxRecursor___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAuxRecursor___closed__2;
static lean_once_cell_t l_Lean_isAuxRecursor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAuxRecursor___closed__3;
static lean_once_cell_t l_Lean_isAuxRecursor___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAuxRecursor___closed__4;
static lean_once_cell_t l_Lean_isAuxRecursor___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAuxRecursor___closed__5;
static lean_once_cell_t l_Lean_isAuxRecursor___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAuxRecursor___closed__6;
LEAN_EXPORT uint8_t l_Lean_isAuxRecursor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAuxRecursor___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_isAuxRecursorWithSuffix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAuxRecursorWithSuffix___closed__0;
LEAN_EXPORT uint8_t l_Lean_isAuxRecursorWithSuffix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAuxRecursorWithSuffix___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCasesOnRecursor___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isRecOnRecursor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRecOnRecursor___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isBRecOnRecursor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isBRecOnRecursor___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__4_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__4_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__5_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__5_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__6_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__6_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__7_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__7_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__8_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__8_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_sparseCasesOnExt;
LEAN_EXPORT lean_object* l_Lean_markSparseCasesOn(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isSparseCasesOn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isSparseCasesOn___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isCasesOnLike(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCasesOnLike___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_regular_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_regular_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_perCtor_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_perCtor_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedNoConfusionInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedNoConfusionInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedNoConfusionInfo_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedNoConfusionInfo;
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_arity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_arity___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_noConfusionExt;
LEAN_EXPORT lean_object* l_Lean_markNoConfusion(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isNoConfusion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isNoConfusion___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getNoConfusionInfo_spec__0(lean_object*);
static lean_once_cell_t l_Lean_getNoConfusionInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getNoConfusionInfo___closed__0;
static lean_once_cell_t l_Lean_getNoConfusionInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getNoConfusionInfo___closed__1;
static lean_once_cell_t l_Lean_getNoConfusionInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getNoConfusionInfo___closed__2;
static lean_once_cell_t l_Lean_getNoConfusionInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getNoConfusionInfo___closed__3;
LEAN_EXPORT lean_object* l_Lean_getNoConfusionInfo(lean_object*, lean_object*);
static lean_object* _init_l_Lean_casesOnSuffix___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("casesOn", 7, 7);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_casesOnSuffix(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_once(&l_Lean_casesOnSuffix___closed__0, &l_Lean_casesOnSuffix___closed__0_once, _init_l_Lean_casesOnSuffix___closed__0);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_recOnSuffix___closed__0(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("recOn", 5, 5);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_recOnSuffix(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_obj_once(&l_Lean_recOnSuffix___closed__0, &l_Lean_recOnSuffix___closed__0_once, _init_l_Lean_recOnSuffix___closed__0);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_brecOnSuffix___closed__0(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_mk_string_unchecked("brecOn", 6, 6);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_brecOnSuffix(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lean_brecOnSuffix___closed__0, &l_Lean_brecOnSuffix___closed__0_once, _init_l_Lean_brecOnSuffix___closed__0);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_belowSuffix___closed__0(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_mk_string_unchecked("below", 5, 5);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_belowSuffix(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_obj_once(&l_Lean_belowSuffix___closed__0, &l_Lean_belowSuffix___closed__0_once, _init_l_Lean_belowSuffix___closed__0);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnName(lean_object* v_indDeclName_9_){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_obj_once(&l_Lean_casesOnSuffix___closed__0, &l_Lean_casesOnSuffix___closed__0_once, _init_l_Lean_casesOnSuffix___closed__0);
v___x_11_ = l_Lean_Name_str___override(v_indDeclName_9_, v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkRecOnName(lean_object* v_indDeclName_12_){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_obj_once(&l_Lean_recOnSuffix___closed__0, &l_Lean_recOnSuffix___closed__0_once, _init_l_Lean_recOnSuffix___closed__0);
v___x_14_ = l_Lean_Name_str___override(v_indDeclName_12_, v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBRecOnName(lean_object* v_indDeclName_15_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_obj_once(&l_Lean_brecOnSuffix___closed__0, &l_Lean_brecOnSuffix___closed__0_once, _init_l_Lean_brecOnSuffix___closed__0);
v___x_17_ = l_Lean_Name_str___override(v_indDeclName_15_, v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBelowName(lean_object* v_indDeclName_18_){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Lean_belowSuffix___closed__0, &l_Lean_belowSuffix___closed__0_once, _init_l_Lean_belowSuffix___closed__0);
v___x_20_ = l_Lean_Name_str___override(v_indDeclName_18_, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_21_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lean_mk_string_unchecked("auxRecExt", 9, 9);
return v___x_22_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_23_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_);
v___x_24_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_);
v___x_25_ = l_Lean_Name_mkStr2(v___x_24_, v___x_23_);
return v___x_25_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_26_; lean_object* v___x_27_; 
v___x_26_ = 0;
v___x_27_ = lean_alloc_ctor(3, 0, 1);
lean_ctor_set_uint8(v___x_27_, 0, v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_);
v___x_30_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_);
v___x_31_ = l_Lean_mkTagDeclarationExtension(v___x_29_, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2____boxed(lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_();
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_markAuxRecursor(lean_object* v_env_34_, lean_object* v_declName_35_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = l_Lean_auxRecExt;
v___x_37_ = l_Lean_TagDeclarationExtension_tag(v___x_36_, v_env_34_, v_declName_35_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_isAuxRecursor___closed__0(void){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_isAuxRecursor___closed__1(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_mk_string_unchecked("ndrec_symm", 10, 10);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_isAuxRecursor___closed__2(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_40_ = lean_obj_once(&l_Lean_isAuxRecursor___closed__1, &l_Lean_isAuxRecursor___closed__1_once, _init_l_Lean_isAuxRecursor___closed__1);
v___x_41_ = lean_obj_once(&l_Lean_isAuxRecursor___closed__0, &l_Lean_isAuxRecursor___closed__0_once, _init_l_Lean_isAuxRecursor___closed__0);
v___x_42_ = l_Lean_Name_mkStr2(v___x_41_, v___x_40_);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_isAuxRecursor___closed__3(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_mk_string_unchecked("ndrecOn", 7, 7);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_isAuxRecursor___closed__4(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = lean_obj_once(&l_Lean_isAuxRecursor___closed__3, &l_Lean_isAuxRecursor___closed__3_once, _init_l_Lean_isAuxRecursor___closed__3);
v___x_45_ = lean_obj_once(&l_Lean_isAuxRecursor___closed__0, &l_Lean_isAuxRecursor___closed__0_once, _init_l_Lean_isAuxRecursor___closed__0);
v___x_46_ = l_Lean_Name_mkStr2(v___x_45_, v___x_44_);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_isAuxRecursor___closed__5(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_mk_string_unchecked("ndrec", 5, 5);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_isAuxRecursor___closed__6(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_48_ = lean_obj_once(&l_Lean_isAuxRecursor___closed__5, &l_Lean_isAuxRecursor___closed__5_once, _init_l_Lean_isAuxRecursor___closed__5);
v___x_49_ = lean_obj_once(&l_Lean_isAuxRecursor___closed__0, &l_Lean_isAuxRecursor___closed__0_once, _init_l_Lean_isAuxRecursor___closed__0);
v___x_50_ = l_Lean_Name_mkStr2(v___x_49_, v___x_48_);
return v___x_50_;
}
}
LEAN_EXPORT uint8_t l_Lean_isAuxRecursor(lean_object* v_env_51_, lean_object* v_declName_52_){
_start:
{
uint8_t v___y_54_; lean_object* v___x_59_; lean_object* v_toEnvExtension_60_; lean_object* v_asyncMode_61_; uint8_t v___x_62_; 
v___x_59_ = l_Lean_auxRecExt;
v_toEnvExtension_60_ = lean_ctor_get(v___x_59_, 0);
v_asyncMode_61_ = lean_ctor_get(v_toEnvExtension_60_, 2);
lean_inc(v_declName_52_);
v___x_62_ = l_Lean_TagDeclarationExtension_isTagged(v___x_59_, v_env_51_, v_declName_52_, v_asyncMode_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = lean_obj_once(&l_Lean_isAuxRecursor___closed__6, &l_Lean_isAuxRecursor___closed__6_once, _init_l_Lean_isAuxRecursor___closed__6);
v___x_64_ = lean_name_eq(v_declName_52_, v___x_63_);
v___y_54_ = v___x_64_;
goto v___jp_53_;
}
else
{
v___y_54_ = v___x_62_;
goto v___jp_53_;
}
v___jp_53_:
{
if (v___y_54_ == 0)
{
lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_55_ = lean_obj_once(&l_Lean_isAuxRecursor___closed__2, &l_Lean_isAuxRecursor___closed__2_once, _init_l_Lean_isAuxRecursor___closed__2);
v___x_56_ = lean_name_eq(v_declName_52_, v___x_55_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = lean_obj_once(&l_Lean_isAuxRecursor___closed__4, &l_Lean_isAuxRecursor___closed__4_once, _init_l_Lean_isAuxRecursor___closed__4);
v___x_58_ = lean_name_eq(v_declName_52_, v___x_57_);
lean_dec(v_declName_52_);
return v___x_58_;
}
else
{
lean_dec(v_declName_52_);
return v___x_56_;
}
}
else
{
lean_dec(v_declName_52_);
return v___y_54_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isAuxRecursor___boxed(lean_object* v_env_65_, lean_object* v_declName_66_){
_start:
{
uint8_t v_res_67_; lean_object* v_r_68_; 
v_res_67_ = l_Lean_isAuxRecursor(v_env_65_, v_declName_66_);
v_r_68_ = lean_box(v_res_67_);
return v_r_68_;
}
}
static lean_object* _init_l_Lean_isAuxRecursorWithSuffix___closed__0(void){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_mk_string_unchecked("_", 1, 1);
return v___x_69_;
}
}
LEAN_EXPORT uint8_t l_Lean_isAuxRecursorWithSuffix(lean_object* v_env_70_, lean_object* v_declName_71_, lean_object* v_suffix_72_){
_start:
{
uint8_t v___y_74_; 
if (lean_obj_tag(v_declName_71_) == 1)
{
lean_object* v_str_76_; uint8_t v___x_77_; 
v_str_76_ = lean_ctor_get(v_declName_71_, 1);
v___x_77_ = lean_string_dec_eq(v_str_76_, v_suffix_72_);
if (v___x_77_ == 0)
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_78_ = lean_obj_once(&l_Lean_isAuxRecursorWithSuffix___closed__0, &l_Lean_isAuxRecursorWithSuffix___closed__0_once, _init_l_Lean_isAuxRecursorWithSuffix___closed__0);
v___x_79_ = lean_string_append(v_suffix_72_, v___x_78_);
v___x_80_ = lean_string_utf8_byte_size(v_str_76_);
v___x_81_ = lean_string_utf8_byte_size(v___x_79_);
v___x_82_ = lean_nat_dec_le(v___x_81_, v___x_80_);
if (v___x_82_ == 0)
{
lean_dec_ref(v___x_79_);
v___y_74_ = v___x_77_;
goto v___jp_73_;
}
else
{
lean_object* v___x_83_; uint8_t v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(0u);
v___x_84_ = lean_string_memcmp(v_str_76_, v___x_79_, v___x_83_, v___x_83_, v___x_81_);
lean_dec_ref(v___x_79_);
v___y_74_ = v___x_84_;
goto v___jp_73_;
}
}
else
{
lean_dec_ref(v_suffix_72_);
v___y_74_ = v___x_77_;
goto v___jp_73_;
}
}
else
{
uint8_t v___x_85_; 
lean_dec_ref(v_suffix_72_);
lean_dec(v_declName_71_);
lean_dec_ref(v_env_70_);
v___x_85_ = 0;
return v___x_85_;
}
v___jp_73_:
{
if (v___y_74_ == 0)
{
lean_dec(v_declName_71_);
lean_dec_ref(v_env_70_);
return v___y_74_;
}
else
{
uint8_t v___x_75_; 
v___x_75_ = l_Lean_isAuxRecursor(v_env_70_, v_declName_71_);
return v___x_75_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isAuxRecursorWithSuffix___boxed(lean_object* v_env_86_, lean_object* v_declName_87_, lean_object* v_suffix_88_){
_start:
{
uint8_t v_res_89_; lean_object* v_r_90_; 
v_res_89_ = l_Lean_isAuxRecursorWithSuffix(v_env_86_, v_declName_87_, v_suffix_88_);
v_r_90_ = lean_box(v_res_89_);
return v_r_90_;
}
}
LEAN_EXPORT uint8_t l_Lean_isCasesOnRecursor(lean_object* v_env_91_, lean_object* v_declName_92_){
_start:
{
lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = lean_obj_once(&l_Lean_casesOnSuffix___closed__0, &l_Lean_casesOnSuffix___closed__0_once, _init_l_Lean_casesOnSuffix___closed__0);
v___x_94_ = l_Lean_isAuxRecursorWithSuffix(v_env_91_, v_declName_92_, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_isCasesOnRecursor___boxed(lean_object* v_env_95_, lean_object* v_declName_96_){
_start:
{
uint8_t v_res_97_; lean_object* v_r_98_; 
v_res_97_ = l_Lean_isCasesOnRecursor(v_env_95_, v_declName_96_);
v_r_98_ = lean_box(v_res_97_);
return v_r_98_;
}
}
LEAN_EXPORT uint8_t l_Lean_isRecOnRecursor(lean_object* v_env_99_, lean_object* v_declName_100_){
_start:
{
lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_101_ = lean_obj_once(&l_Lean_recOnSuffix___closed__0, &l_Lean_recOnSuffix___closed__0_once, _init_l_Lean_recOnSuffix___closed__0);
v___x_102_ = l_Lean_isAuxRecursorWithSuffix(v_env_99_, v_declName_100_, v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRecOnRecursor___boxed(lean_object* v_env_103_, lean_object* v_declName_104_){
_start:
{
uint8_t v_res_105_; lean_object* v_r_106_; 
v_res_105_ = l_Lean_isRecOnRecursor(v_env_103_, v_declName_104_);
v_r_106_ = lean_box(v_res_105_);
return v_r_106_;
}
}
LEAN_EXPORT uint8_t l_Lean_isBRecOnRecursor(lean_object* v_env_107_, lean_object* v_declName_108_){
_start:
{
lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_109_ = lean_obj_once(&l_Lean_brecOnSuffix___closed__0, &l_Lean_brecOnSuffix___closed__0_once, _init_l_Lean_brecOnSuffix___closed__0);
v___x_110_ = l_Lean_isAuxRecursorWithSuffix(v_env_107_, v_declName_108_, v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_isBRecOnRecursor___boxed(lean_object* v_env_111_, lean_object* v_declName_112_){
_start:
{
uint8_t v_res_113_; lean_object* v_r_114_; 
v_res_113_ = l_Lean_isBRecOnRecursor(v_env_111_, v_declName_112_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_115_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_116_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_);
v___x_117_ = lean_box(0);
v___x_118_ = l_Lean_Name_str___override(v___x_117_, v___x_116_);
return v___x_118_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_119_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_);
v___x_120_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_);
v___x_121_ = l_Lean_Name_str___override(v___x_120_, v___x_119_);
return v___x_121_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lean_mk_string_unchecked("AuxRecursor", 11, 11);
return v___x_122_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__4_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_);
v___x_124_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_);
v___x_125_ = l_Lean_Name_str___override(v___x_124_, v___x_123_);
return v___x_125_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__5_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_126_ = lean_unsigned_to_nat(0u);
v___x_127_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__4_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__4_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__4_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_);
v___x_128_ = l_Lean_Name_num___override(v___x_127_, v___x_126_);
return v___x_128_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__6_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_);
v___x_130_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__5_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__5_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__5_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_);
v___x_131_ = l_Lean_Name_str___override(v___x_130_, v___x_129_);
return v___x_131_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__7_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_mk_string_unchecked("sparseCasesOnExt", 16, 16);
return v___x_132_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__8_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_133_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__7_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__7_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__7_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_);
v___x_134_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__6_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__6_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__6_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_);
v___x_135_ = l_Lean_Name_str___override(v___x_134_, v___x_133_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_137_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__8_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__8_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__8_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_);
v___x_138_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__3_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_);
v___x_139_ = l_Lean_mkTagDeclarationExtension(v___x_137_, v___x_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2____boxed(lean_object* v_a_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_();
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_markSparseCasesOn(lean_object* v_env_142_, lean_object* v_declName_143_){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = l___private_Lean_AuxRecursor_0__Lean_sparseCasesOnExt;
v___x_145_ = l_Lean_TagDeclarationExtension_tag(v___x_144_, v_env_142_, v_declName_143_);
return v___x_145_;
}
}
LEAN_EXPORT uint8_t l_Lean_isSparseCasesOn(lean_object* v_env_146_, lean_object* v_declName_147_){
_start:
{
lean_object* v___x_148_; lean_object* v_toEnvExtension_149_; lean_object* v_asyncMode_150_; uint8_t v___x_151_; 
v___x_148_ = l___private_Lean_AuxRecursor_0__Lean_sparseCasesOnExt;
v_toEnvExtension_149_ = lean_ctor_get(v___x_148_, 0);
v_asyncMode_150_ = lean_ctor_get(v_toEnvExtension_149_, 2);
v___x_151_ = l_Lean_TagDeclarationExtension_isTagged(v___x_148_, v_env_146_, v_declName_147_, v_asyncMode_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_isSparseCasesOn___boxed(lean_object* v_env_152_, lean_object* v_declName_153_){
_start:
{
uint8_t v_res_154_; lean_object* v_r_155_; 
v_res_154_ = l_Lean_isSparseCasesOn(v_env_152_, v_declName_153_);
v_r_155_ = lean_box(v_res_154_);
return v_r_155_;
}
}
LEAN_EXPORT uint8_t l_Lean_isCasesOnLike(lean_object* v_env_156_, lean_object* v_declName_157_){
_start:
{
uint8_t v___x_158_; 
lean_inc(v_declName_157_);
lean_inc_ref(v_env_156_);
v___x_158_ = l_Lean_isCasesOnRecursor(v_env_156_, v_declName_157_);
if (v___x_158_ == 0)
{
uint8_t v___x_159_; 
v___x_159_ = l_Lean_isSparseCasesOn(v_env_156_, v_declName_157_);
return v___x_159_;
}
else
{
lean_dec(v_declName_157_);
lean_dec_ref(v_env_156_);
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isCasesOnLike___boxed(lean_object* v_env_160_, lean_object* v_declName_161_){
_start:
{
uint8_t v_res_162_; lean_object* v_r_163_; 
v_res_162_ = l_Lean_isCasesOnLike(v_env_160_, v_declName_161_);
v_r_163_ = lean_box(v_res_162_);
return v_r_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorIdx(lean_object* v_x_164_){
_start:
{
if (lean_obj_tag(v_x_164_) == 0)
{
lean_object* v___x_165_; 
v___x_165_ = lean_unsigned_to_nat(0u);
return v___x_165_;
}
else
{
lean_object* v___x_166_; 
v___x_166_ = lean_unsigned_to_nat(1u);
return v___x_166_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorIdx___boxed(lean_object* v_x_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_NoConfusionInfo_ctorIdx(v_x_167_);
lean_dec_ref(v_x_167_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorElim___redArg(lean_object* v_t_169_, lean_object* v_k_170_){
_start:
{
if (lean_obj_tag(v_t_169_) == 0)
{
lean_object* v_arity_171_; lean_object* v_lhs_172_; lean_object* v_rhs_173_; lean_object* v___x_174_; 
v_arity_171_ = lean_ctor_get(v_t_169_, 0);
lean_inc(v_arity_171_);
v_lhs_172_ = lean_ctor_get(v_t_169_, 1);
lean_inc(v_lhs_172_);
v_rhs_173_ = lean_ctor_get(v_t_169_, 2);
lean_inc(v_rhs_173_);
lean_dec_ref(v_t_169_);
v___x_174_ = lean_apply_3(v_k_170_, v_arity_171_, v_lhs_172_, v_rhs_173_);
return v___x_174_;
}
else
{
lean_object* v_arity_175_; lean_object* v_fields_176_; lean_object* v___x_177_; 
v_arity_175_ = lean_ctor_get(v_t_169_, 0);
lean_inc(v_arity_175_);
v_fields_176_ = lean_ctor_get(v_t_169_, 1);
lean_inc(v_fields_176_);
lean_dec_ref(v_t_169_);
v___x_177_ = lean_apply_2(v_k_170_, v_arity_175_, v_fields_176_);
return v___x_177_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorElim(lean_object* v_motive_178_, lean_object* v_ctorIdx_179_, lean_object* v_t_180_, lean_object* v_h_181_, lean_object* v_k_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l_Lean_NoConfusionInfo_ctorElim___redArg(v_t_180_, v_k_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_ctorElim___boxed(lean_object* v_motive_184_, lean_object* v_ctorIdx_185_, lean_object* v_t_186_, lean_object* v_h_187_, lean_object* v_k_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_NoConfusionInfo_ctorElim(v_motive_184_, v_ctorIdx_185_, v_t_186_, v_h_187_, v_k_188_);
lean_dec(v_ctorIdx_185_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_regular_elim___redArg(lean_object* v_t_190_, lean_object* v_regular_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_NoConfusionInfo_ctorElim___redArg(v_t_190_, v_regular_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_regular_elim(lean_object* v_motive_193_, lean_object* v_t_194_, lean_object* v_h_195_, lean_object* v_regular_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_Lean_NoConfusionInfo_ctorElim___redArg(v_t_194_, v_regular_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_perCtor_elim___redArg(lean_object* v_t_198_, lean_object* v_perCtor_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lean_NoConfusionInfo_ctorElim___redArg(v_t_198_, v_perCtor_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_perCtor_elim(lean_object* v_motive_201_, lean_object* v_t_202_, lean_object* v_h_203_, lean_object* v_perCtor_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_NoConfusionInfo_ctorElim___redArg(v_t_202_, v_perCtor_204_);
return v___x_205_;
}
}
static lean_object* _init_l_Lean_instInhabitedNoConfusionInfo_default___closed__0(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_206_);
lean_ctor_set(v___x_207_, 2, v___x_206_);
return v___x_207_;
}
}
static lean_object* _init_l_Lean_instInhabitedNoConfusionInfo_default(void){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lean_obj_once(&l_Lean_instInhabitedNoConfusionInfo_default___closed__0, &l_Lean_instInhabitedNoConfusionInfo_default___closed__0_once, _init_l_Lean_instInhabitedNoConfusionInfo_default___closed__0);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_instInhabitedNoConfusionInfo(void){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Lean_instInhabitedNoConfusionInfo_default;
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_arity(lean_object* v_x_210_){
_start:
{
lean_object* v_arity_211_; 
v_arity_211_ = lean_ctor_get(v_x_210_, 0);
lean_inc(v_arity_211_);
return v_arity_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_NoConfusionInfo_arity___boxed(lean_object* v_x_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lean_NoConfusionInfo_arity(v_x_212_);
lean_dec_ref(v_x_212_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__1(lean_object* v_env_214_, lean_object* v_as_215_, size_t v_i_216_, size_t v_stop_217_, lean_object* v_b_218_){
_start:
{
lean_object* v___y_220_; uint8_t v___x_224_; 
v___x_224_ = lean_usize_dec_eq(v_i_216_, v_stop_217_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; lean_object* v_fst_226_; uint8_t v___x_227_; 
v___x_225_ = lean_array_uget_borrowed(v_as_215_, v_i_216_);
v_fst_226_ = lean_ctor_get(v___x_225_, 0);
lean_inc(v_fst_226_);
lean_inc_ref(v_env_214_);
v___x_227_ = l_Lean_Environment_contains(v_env_214_, v_fst_226_, v___x_224_);
if (v___x_227_ == 0)
{
v___y_220_ = v_b_218_;
goto v___jp_219_;
}
else
{
lean_object* v___x_228_; 
lean_inc(v___x_225_);
v___x_228_ = lean_array_push(v_b_218_, v___x_225_);
v___y_220_ = v___x_228_;
goto v___jp_219_;
}
}
else
{
lean_dec_ref(v_env_214_);
return v_b_218_;
}
v___jp_219_:
{
size_t v___x_221_; size_t v___x_222_; 
v___x_221_ = ((size_t)1ULL);
v___x_222_ = lean_usize_add(v_i_216_, v___x_221_);
v_i_216_ = v___x_222_;
v_b_218_ = v___y_220_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__1___boxed(lean_object* v_env_229_, lean_object* v_as_230_, lean_object* v_i_231_, lean_object* v_stop_232_, lean_object* v_b_233_){
_start:
{
size_t v_i_boxed_234_; size_t v_stop_boxed_235_; lean_object* v_res_236_; 
v_i_boxed_234_ = lean_unbox_usize(v_i_231_);
lean_dec(v_i_231_);
v_stop_boxed_235_ = lean_unbox_usize(v_stop_232_);
lean_dec(v_stop_232_);
v_res_236_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__1(v_env_229_, v_as_230_, v_i_boxed_234_, v_stop_boxed_235_, v_b_233_);
lean_dec_ref(v_as_230_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_237_, lean_object* v_x_238_){
_start:
{
if (lean_obj_tag(v_x_238_) == 0)
{
lean_object* v_k_239_; lean_object* v_v_240_; lean_object* v_l_241_; lean_object* v_r_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v_k_239_ = lean_ctor_get(v_x_238_, 1);
v_v_240_ = lean_ctor_get(v_x_238_, 2);
v_l_241_ = lean_ctor_get(v_x_238_, 3);
v_r_242_ = lean_ctor_get(v_x_238_, 4);
v___x_243_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0_spec__0(v_init_237_, v_l_241_);
lean_inc(v_v_240_);
lean_inc(v_k_239_);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v_k_239_);
lean_ctor_set(v___x_244_, 1, v_v_240_);
v___x_245_ = lean_array_push(v___x_243_, v___x_244_);
v_init_237_ = v___x_245_;
v_x_238_ = v_r_242_;
goto _start;
}
else
{
return v_init_237_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_247_, lean_object* v_x_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0_spec__0(v_init_247_, v_x_248_);
lean_dec(v_x_248_);
return v_res_249_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_unsigned_to_nat(0u);
v___x_251_ = lean_mk_empty_array_with_capacity(v___x_250_);
return v___x_251_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_unsigned_to_nat(0u);
v___x_253_ = lean_mk_empty_array_with_capacity(v___x_252_);
return v___x_253_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_);
v___x_255_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
lean_ctor_set(v___x_255_, 2, v___x_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_(lean_object* v_env_256_, lean_object* v_s_257_){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_258_ = lean_unsigned_to_nat(0u);
v___x_259_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_);
v___x_260_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0_spec__0(v___x_259_, v_s_257_);
v___x_261_ = lean_array_get_size(v___x_260_);
v___x_262_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_);
v___x_263_ = lean_nat_dec_lt(v___x_258_, v___x_261_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; 
lean_dec_ref(v___x_260_);
lean_dec_ref(v_env_256_);
v___x_264_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_);
return v___x_264_;
}
else
{
uint8_t v___x_265_; 
v___x_265_ = lean_nat_dec_le(v___x_261_, v___x_261_);
if (v___x_265_ == 0)
{
if (v___x_263_ == 0)
{
lean_object* v___x_266_; 
lean_dec_ref(v___x_260_);
lean_dec_ref(v_env_256_);
v___x_266_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_);
return v___x_266_;
}
else
{
size_t v___x_267_; size_t v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_267_ = ((size_t)0ULL);
v___x_268_ = lean_usize_of_nat(v___x_261_);
v___x_269_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__1(v_env_256_, v___x_260_, v___x_267_, v___x_268_, v___x_262_);
lean_dec_ref(v___x_260_);
lean_inc_ref_n(v___x_269_, 2);
v___x_270_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
lean_ctor_set(v___x_270_, 2, v___x_269_);
return v___x_270_;
}
}
else
{
size_t v___x_271_; size_t v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_271_ = ((size_t)0ULL);
v___x_272_ = lean_usize_of_nat(v___x_261_);
v___x_273_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__1(v_env_256_, v___x_260_, v___x_271_, v___x_272_, v___x_262_);
lean_dec_ref(v___x_260_);
lean_inc_ref_n(v___x_273_, 2);
v___x_274_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
lean_ctor_set(v___x_274_, 2, v___x_273_);
return v___x_274_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2____boxed(lean_object* v_env_275_, lean_object* v_s_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_(v_env_275_, v_s_276_);
lean_dec(v_s_276_);
return v_res_277_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_278_; 
v___f_278_ = lean_alloc_closure((void*)(l___private_Lean_AuxRecursor_0__Lean_initFn___lam__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2____boxed), 2, 0);
return v___f_278_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = lean_mk_string_unchecked("noConfusionExt", 14, 14);
return v___x_279_;
}
}
static lean_object* _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_280_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__1_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_);
v___x_281_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_);
v___x_282_ = l_Lean_Name_mkStr2(v___x_281_, v___x_280_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___f_284_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__0_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_);
v___x_285_ = lean_obj_once(&l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_, &l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__once, _init_l___private_Lean_AuxRecursor_0__Lean_initFn___closed__2_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_);
v___x_286_ = lean_box(2);
v___x_287_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_285_, v___x_286_, v___f_284_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2____boxed(lean_object* v_a_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_();
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0(lean_object* v_init_290_, lean_object* v_t_291_){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0_spec__0(v_init_290_, v_t_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_293_, lean_object* v_t_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2__spec__0(v_init_293_, v_t_294_);
lean_dec(v_t_294_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_markNoConfusion(lean_object* v_env_296_, lean_object* v_n_297_, lean_object* v_info_298_){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = l_Lean_noConfusionExt;
v___x_300_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_299_, v_env_296_, v_n_297_, v_info_298_);
return v___x_300_;
}
}
LEAN_EXPORT uint8_t l_Lean_isNoConfusion(lean_object* v_env_301_, lean_object* v_n_302_){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_303_ = l_Lean_instInhabitedNoConfusionInfo_default;
v___x_304_ = l_Lean_noConfusionExt;
v___x_305_ = l_Lean_MapDeclarationExtension_contains___redArg(v___x_303_, v___x_304_, v_env_301_, v_n_302_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_isNoConfusion___boxed(lean_object* v_env_306_, lean_object* v_n_307_){
_start:
{
uint8_t v_res_308_; lean_object* v_r_309_; 
v_res_308_ = l_Lean_isNoConfusion(v_env_306_, v_n_307_);
v_r_309_ = lean_box(v_res_308_);
return v_r_309_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getNoConfusionInfo_spec__0(lean_object* v_msg_310_){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = l_Lean_instInhabitedNoConfusionInfo_default;
v___x_312_ = lean_panic_fn_borrowed(v___x_311_, v_msg_310_);
return v___x_312_;
}
}
static lean_object* _init_l_Lean_getNoConfusionInfo___closed__0(void){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = lean_mk_string_unchecked("Init.Data.Option.BasicAux", 25, 25);
return v___x_313_;
}
}
static lean_object* _init_l_Lean_getNoConfusionInfo___closed__1(void){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = lean_mk_string_unchecked("Option.get!", 11, 11);
return v___x_314_;
}
}
static lean_object* _init_l_Lean_getNoConfusionInfo___closed__2(void){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = lean_mk_string_unchecked("value is none", 13, 13);
return v___x_315_;
}
}
static lean_object* _init_l_Lean_getNoConfusionInfo___closed__3(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_316_ = lean_obj_once(&l_Lean_getNoConfusionInfo___closed__2, &l_Lean_getNoConfusionInfo___closed__2_once, _init_l_Lean_getNoConfusionInfo___closed__2);
v___x_317_ = lean_unsigned_to_nat(14u);
v___x_318_ = lean_unsigned_to_nat(22u);
v___x_319_ = lean_obj_once(&l_Lean_getNoConfusionInfo___closed__1, &l_Lean_getNoConfusionInfo___closed__1_once, _init_l_Lean_getNoConfusionInfo___closed__1);
v___x_320_ = lean_obj_once(&l_Lean_getNoConfusionInfo___closed__0, &l_Lean_getNoConfusionInfo___closed__0_once, _init_l_Lean_getNoConfusionInfo___closed__0);
v___x_321_ = l_mkPanicMessageWithDecl(v___x_320_, v___x_319_, v___x_318_, v___x_317_, v___x_316_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_getNoConfusionInfo(lean_object* v_env_322_, lean_object* v_n_323_){
_start:
{
lean_object* v___x_324_; lean_object* v_toEnvExtension_325_; lean_object* v_asyncMode_326_; lean_object* v___x_327_; uint8_t v___x_328_; lean_object* v___x_329_; 
v___x_324_ = l_Lean_noConfusionExt;
v_toEnvExtension_325_ = lean_ctor_get(v___x_324_, 0);
v_asyncMode_326_ = lean_ctor_get(v_toEnvExtension_325_, 2);
v___x_327_ = l_Lean_instInhabitedNoConfusionInfo_default;
v___x_328_ = 0;
v___x_329_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_327_, v___x_324_, v_env_322_, v_n_323_, v_asyncMode_326_, v___x_328_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_obj_once(&l_Lean_getNoConfusionInfo___closed__3, &l_Lean_getNoConfusionInfo___closed__3_once, _init_l_Lean_getNoConfusionInfo___closed__3);
v___x_331_ = l_panic___at___00Lean_getNoConfusionInfo_spec__0(v___x_330_);
return v___x_331_;
}
else
{
lean_object* v_val_332_; 
v_val_332_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_val_332_);
lean_dec_ref(v___x_329_);
return v_val_332_;
}
}
}
lean_object* runtime_initialize_Lean_EnvExtension(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_AuxRecursor(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_casesOnSuffix = _init_l_Lean_casesOnSuffix();
lean_mark_persistent(l_Lean_casesOnSuffix);
l_Lean_recOnSuffix = _init_l_Lean_recOnSuffix();
lean_mark_persistent(l_Lean_recOnSuffix);
l_Lean_brecOnSuffix = _init_l_Lean_brecOnSuffix();
lean_mark_persistent(l_Lean_brecOnSuffix);
l_Lean_belowSuffix = _init_l_Lean_belowSuffix();
lean_mark_persistent(l_Lean_belowSuffix);
res = l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_3771344159____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_auxRecExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_auxRecExt);
lean_dec_ref(res);
res = l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_2911114043____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_AuxRecursor_0__Lean_sparseCasesOnExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_AuxRecursor_0__Lean_sparseCasesOnExt);
lean_dec_ref(res);
l_Lean_instInhabitedNoConfusionInfo_default = _init_l_Lean_instInhabitedNoConfusionInfo_default();
lean_mark_persistent(l_Lean_instInhabitedNoConfusionInfo_default);
l_Lean_instInhabitedNoConfusionInfo = _init_l_Lean_instInhabitedNoConfusionInfo();
lean_mark_persistent(l_Lean_instInhabitedNoConfusionInfo);
res = l___private_Lean_AuxRecursor_0__Lean_initFn_00___x40_Lean_AuxRecursor_382109219____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_noConfusionExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_noConfusionExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_AuxRecursor(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_EnvExtension(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_AuxRecursor(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AuxRecursor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_AuxRecursor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_AuxRecursor(builtin);
}
#ifdef __cplusplus
}
#endif
