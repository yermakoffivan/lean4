// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.RecArgInfo
// Imports: public import Lean.Elab.PreDefinition.FixedParams public import Lean.Elab.PreDefinition.Structural.IndGroupInfo
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
uint8_t lean_usize_dec_lt(size_t, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg(lean_object*);
extern lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInst_default;
lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3_spec__6_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3(lean_object*, lean_object*);
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__0;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__1;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__2;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__3;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__4;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__6;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__7;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__8;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__9;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__10;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1(lean_object*);
static lean_once_cell_t l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__3;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__4;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__6;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__7;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__8;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__9;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__10;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__11;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__12;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__13;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__14;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__15;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__16;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__17;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__18;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__19;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__20;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__21;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__22;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__23;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__24;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__25;
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__26;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_instReprRecArgInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprRecArgInfo___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_indicesAndRecArgPos(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__1;
static lean_once_cell_t l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_indName_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_indName_x21___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_mk_empty_array_with_capacity(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_3_ = l_Lean_Elab_Structural_instInhabitedIndGroupInst_default;
v___x_4_ = lean_unsigned_to_nat(0u);
v___x_5_ = lean_obj_once(&l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__0, &l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__0_once, _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__0);
v___x_6_ = lean_box(0);
v___x_7_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_5_);
lean_ctor_set(v___x_7_, 2, v___x_4_);
lean_ctor_set(v___x_7_, 3, v___x_5_);
lean_ctor_set(v___x_7_, 4, v___x_3_);
lean_ctor_set(v___x_7_, 5, v___x_4_);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo_default(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_obj_once(&l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__1, &l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__1_once, _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo_default___closed__1);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__2(lean_object* v_a_10_){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_nat_to_int(v_a_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3_spec__6_spec__8(lean_object* v_x_12_, lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
if (lean_obj_tag(v_x_14_) == 0)
{
lean_dec(v_x_12_);
return v_x_13_;
}
else
{
lean_object* v_head_15_; lean_object* v_tail_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_27_; 
v_head_15_ = lean_ctor_get(v_x_14_, 0);
v_tail_16_ = lean_ctor_get(v_x_14_, 1);
v_isSharedCheck_27_ = !lean_is_exclusive(v_x_14_);
if (v_isSharedCheck_27_ == 0)
{
v___x_18_ = v_x_14_;
v_isShared_19_ = v_isSharedCheck_27_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_tail_16_);
lean_inc(v_head_15_);
lean_dec(v_x_14_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_27_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
lean_object* v___x_21_; 
lean_inc(v_x_12_);
if (v_isShared_19_ == 0)
{
lean_ctor_set_tag(v___x_18_, 5);
lean_ctor_set(v___x_18_, 1, v_x_12_);
lean_ctor_set(v___x_18_, 0, v_x_13_);
v___x_21_ = v___x_18_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_x_13_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v_x_12_);
v___x_21_ = v_reuseFailAlloc_26_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = l_Nat_reprFast(v_head_15_);
v___x_23_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
v___x_24_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_24_, 0, v___x_21_);
lean_ctor_set(v___x_24_, 1, v___x_23_);
v_x_13_ = v___x_24_;
v_x_14_ = v_tail_16_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3_spec__6(lean_object* v_x_28_, lean_object* v_x_29_, lean_object* v_x_30_){
_start:
{
if (lean_obj_tag(v_x_30_) == 0)
{
lean_dec(v_x_28_);
return v_x_29_;
}
else
{
lean_object* v_head_31_; lean_object* v_tail_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_43_; 
v_head_31_ = lean_ctor_get(v_x_30_, 0);
v_tail_32_ = lean_ctor_get(v_x_30_, 1);
v_isSharedCheck_43_ = !lean_is_exclusive(v_x_30_);
if (v_isSharedCheck_43_ == 0)
{
v___x_34_ = v_x_30_;
v_isShared_35_ = v_isSharedCheck_43_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_tail_32_);
lean_inc(v_head_31_);
lean_dec(v_x_30_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_43_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_37_; 
lean_inc(v_x_28_);
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 5);
lean_ctor_set(v___x_34_, 1, v_x_28_);
lean_ctor_set(v___x_34_, 0, v_x_29_);
v___x_37_ = v___x_34_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v_x_29_);
lean_ctor_set(v_reuseFailAlloc_42_, 1, v_x_28_);
v___x_37_ = v_reuseFailAlloc_42_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_38_ = l_Nat_reprFast(v_head_31_);
v___x_39_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
v___x_40_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_37_);
lean_ctor_set(v___x_40_, 1, v___x_39_);
v___x_41_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3_spec__6_spec__8(v_x_28_, v___x_40_, v_tail_32_);
return v___x_41_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3___lam__0(lean_object* v___y_44_){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = l_Nat_reprFast(v___y_44_);
v___x_46_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3(lean_object* v_x_47_, lean_object* v_x_48_){
_start:
{
if (lean_obj_tag(v_x_47_) == 0)
{
lean_object* v___x_49_; 
lean_dec(v_x_48_);
v___x_49_ = lean_box(0);
return v___x_49_;
}
else
{
lean_object* v_tail_50_; 
v_tail_50_ = lean_ctor_get(v_x_47_, 1);
if (lean_obj_tag(v_tail_50_) == 0)
{
lean_object* v_head_51_; lean_object* v___x_52_; 
lean_dec(v_x_48_);
v_head_51_ = lean_ctor_get(v_x_47_, 0);
lean_inc(v_head_51_);
lean_dec_ref(v_x_47_);
v___x_52_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3___lam__0(v_head_51_);
return v___x_52_;
}
else
{
lean_object* v_head_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
lean_inc(v_tail_50_);
v_head_53_ = lean_ctor_get(v_x_47_, 0);
lean_inc(v_head_53_);
lean_dec_ref(v_x_47_);
v___x_54_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3___lam__0(v_head_53_);
v___x_55_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3_spec__6(v_x_48_, v___x_54_, v_tail_50_);
return v___x_55_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__0(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_mk_string_unchecked("#[", 2, 2);
return v___x_56_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__1(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_mk_string_unchecked(",", 1, 1);
return v___x_57_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__2(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__1, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__1_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__1);
v___x_59_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__3(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_box(1);
v___x_61_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__2, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__2_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__2);
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__4(void){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_mk_string_unchecked("]", 1, 1);
return v___x_63_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__5(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__0, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__0_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__0);
v___x_65_ = lean_string_length(v___x_64_);
return v___x_65_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__6(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__5, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__5_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__5);
v___x_67_ = lean_nat_to_int(v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__7(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__0, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__0_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__0);
v___x_69_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
return v___x_69_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__8(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__4, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__4_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__4);
v___x_71_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
return v___x_71_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__9(void){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_mk_string_unchecked("#[]", 3, 3);
return v___x_72_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__10(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__9, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__9_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__9);
v___x_74_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1(lean_object* v_xs_75_){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_76_ = lean_array_get_size(v_xs_75_);
v___x_77_ = lean_unsigned_to_nat(0u);
v___x_78_ = lean_nat_dec_eq(v___x_76_, v___x_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_79_ = lean_array_to_list(v_xs_75_);
v___x_80_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__3, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__3_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__3);
v___x_81_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1_spec__3(v___x_79_, v___x_80_);
v___x_82_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__6, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__6_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__6);
v___x_83_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__7, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__7_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__7);
v___x_84_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v___x_81_);
v___x_85_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__8, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__8_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__8);
v___x_86_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_84_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
v___x_87_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_82_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = l_Std_Format_fill(v___x_87_);
return v___x_88_;
}
else
{
lean_object* v___x_89_; 
lean_dec_ref(v_xs_75_);
v___x_89_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__10, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__10_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__10);
return v___x_89_;
}
}
}
static lean_object* _init_l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_mk_string_unchecked("none", 4, 4);
return v___x_90_;
}
}
static lean_object* _init_l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_obj_once(&l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__0, &l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__0_once, _init_l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__0);
v___x_92_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
return v___x_92_;
}
}
static lean_object* _init_l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_mk_string_unchecked("some ", 5, 5);
return v___x_93_;
}
}
static lean_object* _init_l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_obj_once(&l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__2, &l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__2_once, _init_l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__2);
v___x_95_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(lean_object* v_x_96_, lean_object* v_x_97_){
_start:
{
if (lean_obj_tag(v_x_96_) == 0)
{
lean_object* v___x_98_; 
v___x_98_ = lean_obj_once(&l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__1, &l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__1_once, _init_l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__1);
return v___x_98_;
}
else
{
lean_object* v_val_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_110_; 
v_val_99_ = lean_ctor_get(v_x_96_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v_x_96_);
if (v_isSharedCheck_110_ == 0)
{
v___x_101_ = v_x_96_;
v_isShared_102_ = v_isSharedCheck_110_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_val_99_);
lean_dec(v_x_96_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_110_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_103_ = lean_obj_once(&l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__3, &l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__3_once, _init_l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___closed__3);
v___x_104_ = l_Nat_reprFast(v_val_99_);
if (v_isShared_102_ == 0)
{
lean_ctor_set_tag(v___x_101_, 3);
lean_ctor_set(v___x_101_, 0, v___x_104_);
v___x_106_ = v___x_101_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_104_);
v___x_106_ = v_reuseFailAlloc_109_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_103_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
v___x_108_ = l_Repr_addAppParen(v___x_107_, v_x_97_);
return v___x_108_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0___boxed(lean_object* v_x_111_, lean_object* v_x_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(v_x_111_, v_x_112_);
lean_dec(v_x_112_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1_spec__3_spec__5(lean_object* v_x_114_, lean_object* v_x_115_, lean_object* v_x_116_){
_start:
{
if (lean_obj_tag(v_x_116_) == 0)
{
lean_dec(v_x_114_);
return v_x_115_;
}
else
{
lean_object* v_head_117_; lean_object* v_tail_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_129_; 
v_head_117_ = lean_ctor_get(v_x_116_, 0);
v_tail_118_ = lean_ctor_get(v_x_116_, 1);
v_isSharedCheck_129_ = !lean_is_exclusive(v_x_116_);
if (v_isSharedCheck_129_ == 0)
{
v___x_120_ = v_x_116_;
v_isShared_121_ = v_isSharedCheck_129_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_tail_118_);
lean_inc(v_head_117_);
lean_dec(v_x_116_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_129_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___x_123_; 
lean_inc(v_x_114_);
if (v_isShared_121_ == 0)
{
lean_ctor_set_tag(v___x_120_, 5);
lean_ctor_set(v___x_120_, 1, v_x_114_);
lean_ctor_set(v___x_120_, 0, v_x_115_);
v___x_123_ = v___x_120_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_x_115_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v_x_114_);
v___x_123_ = v_reuseFailAlloc_128_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = lean_unsigned_to_nat(0u);
v___x_125_ = l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(v_head_117_, v___x_124_);
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_123_);
lean_ctor_set(v___x_126_, 1, v___x_125_);
v_x_115_ = v___x_126_;
v_x_116_ = v_tail_118_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1_spec__3(lean_object* v_x_130_, lean_object* v_x_131_, lean_object* v_x_132_){
_start:
{
if (lean_obj_tag(v_x_132_) == 0)
{
lean_dec(v_x_130_);
return v_x_131_;
}
else
{
lean_object* v_head_133_; lean_object* v_tail_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_145_; 
v_head_133_ = lean_ctor_get(v_x_132_, 0);
v_tail_134_ = lean_ctor_get(v_x_132_, 1);
v_isSharedCheck_145_ = !lean_is_exclusive(v_x_132_);
if (v_isSharedCheck_145_ == 0)
{
v___x_136_ = v_x_132_;
v_isShared_137_ = v_isSharedCheck_145_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_tail_134_);
lean_inc(v_head_133_);
lean_dec(v_x_132_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_145_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_139_; 
lean_inc(v_x_130_);
if (v_isShared_137_ == 0)
{
lean_ctor_set_tag(v___x_136_, 5);
lean_ctor_set(v___x_136_, 1, v_x_130_);
lean_ctor_set(v___x_136_, 0, v_x_131_);
v___x_139_ = v___x_136_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_x_131_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v_x_130_);
v___x_139_ = v_reuseFailAlloc_144_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(v_head_133_, v___x_140_);
v___x_142_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_139_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1_spec__3_spec__5(v_x_130_, v___x_142_, v_tail_134_);
return v___x_143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1___lam__0(lean_object* v___y_146_){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_unsigned_to_nat(0u);
v___x_148_ = l_Option_repr___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__0(v___y_146_, v___x_147_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1(lean_object* v_x_149_, lean_object* v_x_150_){
_start:
{
if (lean_obj_tag(v_x_149_) == 0)
{
lean_object* v___x_151_; 
lean_dec(v_x_150_);
v___x_151_ = lean_box(0);
return v___x_151_;
}
else
{
lean_object* v_tail_152_; 
v_tail_152_ = lean_ctor_get(v_x_149_, 1);
if (lean_obj_tag(v_tail_152_) == 0)
{
lean_object* v_head_153_; lean_object* v___x_154_; 
lean_dec(v_x_150_);
v_head_153_ = lean_ctor_get(v_x_149_, 0);
lean_inc(v_head_153_);
lean_dec_ref(v_x_149_);
v___x_154_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1___lam__0(v_head_153_);
return v___x_154_;
}
else
{
lean_object* v_head_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
lean_inc(v_tail_152_);
v_head_155_ = lean_ctor_get(v_x_149_, 0);
lean_inc(v_head_155_);
lean_dec_ref(v_x_149_);
v___x_156_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1___lam__0(v_head_155_);
v___x_157_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1_spec__3(v_x_150_, v___x_156_, v_tail_152_);
return v___x_157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0(lean_object* v_xs_158_){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_159_ = lean_array_get_size(v_xs_158_);
v___x_160_ = lean_unsigned_to_nat(0u);
v___x_161_ = lean_nat_dec_eq(v___x_159_, v___x_160_);
if (v___x_161_ == 0)
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_162_ = lean_array_to_list(v_xs_158_);
v___x_163_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__3, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__3_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__3);
v___x_164_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0_spec__1(v___x_162_, v___x_163_);
v___x_165_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__6, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__6_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__6);
v___x_166_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__7, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__7_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__7);
v___x_167_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v___x_164_);
v___x_168_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__8, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__8_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__8);
v___x_169_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_167_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
v___x_170_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_170_, 0, v___x_165_);
lean_ctor_set(v___x_170_, 1, v___x_169_);
v___x_171_ = l_Std_Format_fill(v___x_170_);
return v___x_171_;
}
else
{
lean_object* v___x_172_; 
lean_dec_ref(v_xs_158_);
v___x_172_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__10, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__10_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__10);
return v___x_172_;
}
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_mk_string_unchecked("{ ", 2, 2);
return v___x_173_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__1(void){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = lean_mk_string_unchecked("fnName", 6, 6);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__1, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__1_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__1);
v___x_176_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
return v___x_176_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_177_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__2, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__2_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__2);
v___x_178_ = lean_box(0);
v___x_179_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
lean_ctor_set(v___x_179_, 1, v___x_177_);
return v___x_179_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = lean_mk_string_unchecked(" := ", 4, 4);
return v___x_180_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__4, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__4_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__4);
v___x_182_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_183_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5);
v___x_184_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__3, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__3_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__3);
v___x_185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v___x_183_);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_unsigned_to_nat(10u);
v___x_187_ = lean_nat_to_int(v___x_186_);
return v___x_187_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = lean_mk_string_unchecked("fixedParamPerm", 14, 14);
return v___x_188_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__8, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__8_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__8);
v___x_190_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
return v___x_190_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = lean_unsigned_to_nat(18u);
v___x_192_ = lean_nat_to_int(v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = lean_mk_string_unchecked("recArgPos", 9, 9);
return v___x_193_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__11, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__11_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__11);
v___x_195_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_unsigned_to_nat(13u);
v___x_197_ = lean_nat_to_int(v___x_196_);
return v___x_197_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_mk_string_unchecked("indicesPos", 10, 10);
return v___x_198_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__14, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__14_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__14);
v___x_200_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = lean_unsigned_to_nat(14u);
v___x_202_ = lean_nat_to_int(v___x_201_);
return v___x_202_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = lean_mk_string_unchecked("indGroupInst", 12, 12);
return v___x_203_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__17, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__17_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__17);
v___x_205_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
return v___x_205_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = lean_unsigned_to_nat(16u);
v___x_207_ = lean_nat_to_int(v___x_206_);
return v___x_207_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lean_mk_string_unchecked("indIdx", 6, 6);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__20, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__20_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__20);
v___x_210_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = lean_mk_string_unchecked(" }", 2, 2);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0);
v___x_213_ = lean_string_length(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__23, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__23_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__23);
v___x_215_ = lean_nat_to_int(v___x_214_);
return v___x_215_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__25(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__0);
v___x_217_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
return v___x_217_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__26(void){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__22, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__22_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__22);
v___x_219_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(lean_object* v_x_220_){
_start:
{
lean_object* v_fnName_221_; lean_object* v_fixedParamPerm_222_; lean_object* v_recArgPos_223_; lean_object* v_indicesPos_224_; lean_object* v_indGroupInst_225_; lean_object* v_indIdx_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_fnName_221_ = lean_ctor_get(v_x_220_, 0);
lean_inc(v_fnName_221_);
v_fixedParamPerm_222_ = lean_ctor_get(v_x_220_, 1);
lean_inc_ref(v_fixedParamPerm_222_);
v_recArgPos_223_ = lean_ctor_get(v_x_220_, 2);
lean_inc(v_recArgPos_223_);
v_indicesPos_224_ = lean_ctor_get(v_x_220_, 3);
lean_inc_ref(v_indicesPos_224_);
v_indGroupInst_225_ = lean_ctor_get(v_x_220_, 4);
lean_inc_ref(v_indGroupInst_225_);
v_indIdx_226_ = lean_ctor_get(v_x_220_, 5);
lean_inc(v_indIdx_226_);
lean_dec_ref(v_x_220_);
v___x_227_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__5);
v___x_228_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__6, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__6_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__6);
v___x_229_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__7, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__7_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__7);
v___x_230_ = lean_unsigned_to_nat(0u);
v___x_231_ = l_Lean_Name_reprPrec(v_fnName_221_, v___x_230_);
v___x_232_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_229_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = 0;
v___x_234_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_234_, 0, v___x_232_);
lean_ctor_set_uint8(v___x_234_, sizeof(void*)*1, v___x_233_);
v___x_235_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_228_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
v___x_236_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__2, &l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__2_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1___closed__2);
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = lean_box(1);
v___x_239_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__9, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__9_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__9);
v___x_241_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v___x_227_);
v___x_243_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__10, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__10_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__10);
v___x_244_ = l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__0(v_fixedParamPerm_222_);
v___x_245_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_243_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_246_, 0, v___x_245_);
lean_ctor_set_uint8(v___x_246_, sizeof(void*)*1, v___x_233_);
v___x_247_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_242_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v___x_248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set(v___x_248_, 1, v___x_236_);
v___x_249_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
lean_ctor_set(v___x_249_, 1, v___x_238_);
v___x_250_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__12, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__12_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__12);
v___x_251_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_249_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v___x_252_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v___x_227_);
v___x_253_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__13, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__13_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__13);
v___x_254_ = l_Nat_reprFast(v_recArgPos_223_);
v___x_255_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
v___x_256_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_253_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set_uint8(v___x_257_, sizeof(void*)*1, v___x_233_);
v___x_258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_252_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set(v___x_259_, 1, v___x_236_);
v___x_260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
lean_ctor_set(v___x_260_, 1, v___x_238_);
v___x_261_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__15, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__15_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__15);
v___x_262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_260_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v___x_227_);
v___x_264_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__16, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__16_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__16);
v___x_265_ = l_Array_repr___at___00Lean_Elab_Structural_instReprRecArgInfo_repr_spec__1(v_indicesPos_224_);
v___x_266_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_264_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
v___x_267_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_267_, 0, v___x_266_);
lean_ctor_set_uint8(v___x_267_, sizeof(void*)*1, v___x_233_);
v___x_268_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_263_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v___x_236_);
v___x_270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
lean_ctor_set(v___x_270_, 1, v___x_238_);
v___x_271_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__18, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__18_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__18);
v___x_272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_270_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
lean_ctor_set(v___x_273_, 1, v___x_227_);
v___x_274_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__19, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__19_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__19);
v___x_275_ = l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg(v_indGroupInst_225_);
v___x_276_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_274_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set_uint8(v___x_277_, sizeof(void*)*1, v___x_233_);
v___x_278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_273_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
lean_ctor_set(v___x_279_, 1, v___x_236_);
v___x_280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
lean_ctor_set(v___x_280_, 1, v___x_238_);
v___x_281_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__21, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__21_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__21);
v___x_282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_280_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
v___x_283_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v___x_227_);
v___x_284_ = l_Nat_reprFast(v_indIdx_226_);
v___x_285_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
v___x_286_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_229_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*1, v___x_233_);
v___x_288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_283_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__24, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__24_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__24);
v___x_290_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__25, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__25_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__25);
v___x_291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
lean_ctor_set(v___x_291_, 1, v___x_288_);
v___x_292_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__26, &l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__26_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg___closed__26);
v___x_293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_291_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_289_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set_uint8(v___x_295_, sizeof(void*)*1, v___x_233_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr(lean_object* v_x_296_, lean_object* v_prec_297_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_x_296_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___boxed(lean_object* v_x_299_, lean_object* v_prec_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr(v_x_299_, v_prec_300_);
lean_dec(v_prec_300_);
return v_res_301_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo___closed__0(void){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_instReprRecArgInfo_repr___boxed), 2, 0);
return v___x_302_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprRecArgInfo(void){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = lean_obj_once(&l_Lean_Elab_Structural_instReprRecArgInfo___closed__0, &l_Lean_Elab_Structural_instReprRecArgInfo___closed__0_once, _init_l_Lean_Elab_Structural_instReprRecArgInfo___closed__0);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_indicesAndRecArgPos(lean_object* v_info_304_){
_start:
{
lean_object* v_recArgPos_305_; lean_object* v_indicesPos_306_; lean_object* v___x_307_; 
v_recArgPos_305_ = lean_ctor_get(v_info_304_, 2);
lean_inc(v_recArgPos_305_);
v_indicesPos_306_ = lean_ctor_get(v_info_304_, 3);
lean_inc_ref(v_indicesPos_306_);
lean_dec_ref(v_info_304_);
v___x_307_ = lean_array_push(v_indicesPos_306_, v_recArgPos_305_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__1(lean_object* v_xs_308_, lean_object* v_as_309_, size_t v_sz_310_, size_t v_i_311_, lean_object* v_b_312_){
_start:
{
uint8_t v___x_313_; 
v___x_313_ = lean_usize_dec_lt(v_i_311_, v_sz_310_);
if (v___x_313_ == 0)
{
return v_b_312_;
}
else
{
lean_object* v___x_314_; lean_object* v_a_315_; lean_object* v___x_316_; lean_object* v___x_317_; size_t v___x_318_; size_t v___x_319_; 
v___x_314_ = l_Lean_instInhabitedExpr;
v_a_315_ = lean_array_uget_borrowed(v_as_309_, v_i_311_);
v___x_316_ = lean_array_get_borrowed(v___x_314_, v_xs_308_, v_a_315_);
lean_inc(v___x_316_);
v___x_317_ = lean_array_push(v_b_312_, v___x_316_);
v___x_318_ = ((size_t)1ULL);
v___x_319_ = lean_usize_add(v_i_311_, v___x_318_);
v_i_311_ = v___x_319_;
v_b_312_ = v___x_317_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__1___boxed(lean_object* v_xs_321_, lean_object* v_as_322_, lean_object* v_sz_323_, lean_object* v_i_324_, lean_object* v_b_325_){
_start:
{
size_t v_sz_boxed_326_; size_t v_i_boxed_327_; lean_object* v_res_328_; 
v_sz_boxed_326_ = lean_unbox_usize(v_sz_323_);
lean_dec(v_sz_323_);
v_i_boxed_327_ = lean_unbox_usize(v_i_324_);
lean_dec(v_i_324_);
v_res_328_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__1(v_xs_321_, v_as_322_, v_sz_boxed_326_, v_i_boxed_327_, v_b_325_);
lean_dec_ref(v_as_322_);
lean_dec_ref(v_xs_321_);
return v_res_328_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0_spec__0(lean_object* v_a_329_, lean_object* v_as_330_, size_t v_i_331_, size_t v_stop_332_){
_start:
{
uint8_t v___x_333_; 
v___x_333_ = lean_usize_dec_eq(v_i_331_, v_stop_332_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_334_ = lean_array_uget_borrowed(v_as_330_, v_i_331_);
v___x_335_ = lean_nat_dec_eq(v_a_329_, v___x_334_);
if (v___x_335_ == 0)
{
size_t v___x_336_; size_t v___x_337_; 
v___x_336_ = ((size_t)1ULL);
v___x_337_ = lean_usize_add(v_i_331_, v___x_336_);
v_i_331_ = v___x_337_;
goto _start;
}
else
{
return v___x_335_;
}
}
else
{
uint8_t v___x_339_; 
v___x_339_ = 0;
return v___x_339_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0_spec__0___boxed(lean_object* v_a_340_, lean_object* v_as_341_, lean_object* v_i_342_, lean_object* v_stop_343_){
_start:
{
size_t v_i_boxed_344_; size_t v_stop_boxed_345_; uint8_t v_res_346_; lean_object* v_r_347_; 
v_i_boxed_344_ = lean_unbox_usize(v_i_342_);
lean_dec(v_i_342_);
v_stop_boxed_345_ = lean_unbox_usize(v_stop_343_);
lean_dec(v_stop_343_);
v_res_346_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0_spec__0(v_a_340_, v_as_341_, v_i_boxed_344_, v_stop_boxed_345_);
lean_dec_ref(v_as_341_);
lean_dec(v_a_340_);
v_r_347_ = lean_box(v_res_346_);
return v_r_347_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0(lean_object* v_as_348_, lean_object* v_a_349_){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; uint8_t v___x_352_; 
v___x_350_ = lean_unsigned_to_nat(0u);
v___x_351_ = lean_array_get_size(v_as_348_);
v___x_352_ = lean_nat_dec_lt(v___x_350_, v___x_351_);
if (v___x_352_ == 0)
{
return v___x_352_;
}
else
{
if (v___x_352_ == 0)
{
return v___x_352_;
}
else
{
size_t v___x_353_; size_t v___x_354_; uint8_t v___x_355_; 
v___x_353_ = ((size_t)0ULL);
v___x_354_ = lean_usize_of_nat(v___x_351_);
v___x_355_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0_spec__0(v_a_349_, v_as_348_, v___x_353_, v___x_354_);
return v___x_355_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0___boxed(lean_object* v_as_356_, lean_object* v_a_357_){
_start:
{
uint8_t v_res_358_; lean_object* v_r_359_; 
v_res_358_ = l_Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0(v_as_356_, v_a_357_);
lean_dec(v_a_357_);
lean_dec_ref(v_as_356_);
v_r_359_ = lean_box(v_res_358_);
return v_r_359_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg(lean_object* v_upperBound_360_, lean_object* v_indexMajorPos_361_, lean_object* v___x_362_, lean_object* v_xs_363_, lean_object* v_a_364_, lean_object* v_b_365_){
_start:
{
lean_object* v_a_367_; uint8_t v___x_371_; 
v___x_371_ = lean_nat_dec_lt(v_a_364_, v_upperBound_360_);
if (v___x_371_ == 0)
{
lean_dec(v_a_364_);
return v_b_365_;
}
else
{
uint8_t v___x_372_; 
v___x_372_ = l_Array_contains___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__0(v_indexMajorPos_361_, v_a_364_);
if (v___x_372_ == 0)
{
uint8_t v___x_373_; 
v___x_373_ = l_Lean_Elab_FixedParamPerm_isFixed(v___x_362_, v_a_364_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = lean_array_fget_borrowed(v_xs_363_, v_a_364_);
lean_inc(v___x_374_);
v___x_375_ = lean_array_push(v_b_365_, v___x_374_);
v_a_367_ = v___x_375_;
goto v___jp_366_;
}
else
{
v_a_367_ = v_b_365_;
goto v___jp_366_;
}
}
else
{
v_a_367_ = v_b_365_;
goto v___jp_366_;
}
}
v___jp_366_:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = lean_unsigned_to_nat(1u);
v___x_369_ = lean_nat_add(v_a_364_, v___x_368_);
lean_dec(v_a_364_);
v_a_364_ = v___x_369_;
v_b_365_ = v_a_367_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg___boxed(lean_object* v_upperBound_376_, lean_object* v_indexMajorPos_377_, lean_object* v___x_378_, lean_object* v_xs_379_, lean_object* v_a_380_, lean_object* v_b_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg(v_upperBound_376_, v_indexMajorPos_377_, v___x_378_, v_xs_379_, v_a_380_, v_b_381_);
lean_dec_ref(v_xs_379_);
lean_dec_ref(v___x_378_);
lean_dec_ref(v_indexMajorPos_377_);
lean_dec(v_upperBound_376_);
return v_res_382_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__0(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = lean_unsigned_to_nat(0u);
v___x_384_ = l_Lean_Level_ofNat(v___x_383_);
return v___x_384_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__1(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_obj_once(&l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__0, &l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__0_once, _init_l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__0);
v___x_386_ = l_Lean_mkSort(v___x_385_);
return v___x_386_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__2(void){
_start:
{
lean_object* v___x_387_; lean_object* v_indexMajorArgs_388_; 
v___x_387_ = lean_unsigned_to_nat(0u);
v_indexMajorArgs_388_ = lean_mk_empty_array_with_capacity(v___x_387_);
return v_indexMajorArgs_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(lean_object* v_info_389_, lean_object* v_xs_390_){
_start:
{
lean_object* v_fixedParamPerm_391_; lean_object* v_recArgPos_392_; lean_object* v_indicesPos_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v_xs_398_; lean_object* v_indexMajorPos_399_; size_t v_sz_400_; lean_object* v___x_401_; lean_object* v_indexMajorArgs_402_; size_t v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v_fixedParamPerm_391_ = lean_ctor_get(v_info_389_, 1);
lean_inc_ref_n(v_fixedParamPerm_391_, 2);
v_recArgPos_392_ = lean_ctor_get(v_info_389_, 2);
lean_inc(v_recArgPos_392_);
v_indicesPos_393_ = lean_ctor_get(v_info_389_, 3);
lean_inc_ref(v_indicesPos_393_);
lean_dec_ref(v_info_389_);
v___x_394_ = l_Lean_Elab_FixedParamPerm_numFixed(v_fixedParamPerm_391_);
v___x_395_ = lean_unsigned_to_nat(0u);
v___x_396_ = lean_obj_once(&l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__1, &l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__1_once, _init_l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__1);
v___x_397_ = lean_mk_array(v___x_394_, v___x_396_);
v_xs_398_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_fixedParamPerm_391_, v___x_397_, v_xs_390_);
lean_dec_ref(v___x_397_);
v_indexMajorPos_399_ = lean_array_push(v_indicesPos_393_, v_recArgPos_392_);
v_sz_400_ = lean_array_size(v_indexMajorPos_399_);
v___x_401_ = lean_array_get_size(v_xs_398_);
v_indexMajorArgs_402_ = lean_obj_once(&l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__2, &l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__2_once, _init_l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor___closed__2);
v___x_403_ = ((size_t)0ULL);
v___x_404_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__1(v_xs_398_, v_indexMajorPos_399_, v_sz_400_, v___x_403_, v_indexMajorArgs_402_);
v___x_405_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg(v___x_401_, v_indexMajorPos_399_, v_fixedParamPerm_391_, v_xs_398_, v___x_395_, v_indexMajorArgs_402_);
lean_dec_ref(v_xs_398_);
lean_dec_ref(v_fixedParamPerm_391_);
lean_dec_ref(v_indexMajorPos_399_);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_404_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2(lean_object* v_upperBound_407_, lean_object* v_indexMajorPos_408_, lean_object* v___x_409_, lean_object* v_xs_410_, lean_object* v_inst_411_, lean_object* v_R_412_, lean_object* v_a_413_, lean_object* v_b_414_, lean_object* v_c_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___redArg(v_upperBound_407_, v_indexMajorPos_408_, v___x_409_, v_xs_410_, v_a_413_, v_b_414_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2___boxed(lean_object* v_upperBound_417_, lean_object* v_indexMajorPos_418_, lean_object* v___x_419_, lean_object* v_xs_420_, lean_object* v_inst_421_, lean_object* v_R_422_, lean_object* v_a_423_, lean_object* v_b_424_, lean_object* v_c_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_RecArgInfo_pickIndicesMajor_spec__2(v_upperBound_417_, v_indexMajorPos_418_, v___x_419_, v_xs_420_, v_inst_421_, v_R_422_, v_a_423_, v_b_424_, v_c_425_);
lean_dec_ref(v_xs_420_);
lean_dec_ref(v___x_419_);
lean_dec_ref(v_indexMajorPos_418_);
lean_dec(v_upperBound_417_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_indName_x21(lean_object* v_info_427_){
_start:
{
lean_object* v_indGroupInst_428_; lean_object* v_toIndGroupInfo_429_; lean_object* v_indIdx_430_; lean_object* v_all_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v_indGroupInst_428_ = lean_ctor_get(v_info_427_, 4);
v_toIndGroupInfo_429_ = lean_ctor_get(v_indGroupInst_428_, 0);
v_indIdx_430_ = lean_ctor_get(v_info_427_, 5);
v_all_431_ = lean_ctor_get(v_toIndGroupInfo_429_, 0);
v___x_432_ = lean_box(0);
v___x_433_ = lean_array_get_borrowed(v___x_432_, v_all_431_, v_indIdx_430_);
lean_inc(v___x_433_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_RecArgInfo_indName_x21___boxed(lean_object* v_info_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_Elab_Structural_RecArgInfo_indName_x21(v_info_434_);
lean_dec_ref(v_info_434_);
return v_res_435_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Structural_instInhabitedRecArgInfo_default = _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo_default();
lean_mark_persistent(l_Lean_Elab_Structural_instInhabitedRecArgInfo_default);
l_Lean_Elab_Structural_instInhabitedRecArgInfo = _init_l_Lean_Elab_Structural_instInhabitedRecArgInfo();
lean_mark_persistent(l_Lean_Elab_Structural_instInhabitedRecArgInfo);
l_Lean_Elab_Structural_instReprRecArgInfo = _init_l_Lean_Elab_Structural_instReprRecArgInfo();
lean_mark_persistent(l_Lean_Elab_Structural_instReprRecArgInfo);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
}
#ifdef __cplusplus
}
#endif
