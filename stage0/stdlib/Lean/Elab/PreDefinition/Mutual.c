// Lean compiler output
// Module: Lean.Elab.PreDefinition.Mutual
// Imports: public import Lean.Elab.PreDefinition.Basic
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
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_addNonRec(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Meta_saveEqnAffectingOptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyAttributesOf(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_eraseRecAppSyntax(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_abstractNestedProofs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_PreDefinition_filterAttrs(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
extern lean_object* l_Lean_allowUnsafeReducibility;
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Elab_addNonRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__1;
LEAN_EXPORT uint8_t l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___closed__0;
static lean_once_cell_t l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__0;
static lean_once_cell_t l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1;
static lean_once_cell_t l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2;
static lean_once_cell_t l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_cleanPreDef(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_cleanPreDef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__5;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__6;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__7;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefAttributes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefAttributes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2(lean_object* v_opts_1_, lean_object* v_opt_2_){
_start:
{
lean_object* v_name_3_; lean_object* v_defValue_4_; lean_object* v_map_5_; lean_object* v___x_6_; 
v_name_3_ = lean_ctor_get(v_opt_2_, 0);
v_defValue_4_ = lean_ctor_get(v_opt_2_, 1);
v_map_5_ = lean_ctor_get(v_opts_1_, 0);
v___x_6_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5_, v_name_3_);
if (lean_obj_tag(v___x_6_) == 0)
{
uint8_t v___x_7_; 
v___x_7_ = lean_unbox(v_defValue_4_);
return v___x_7_;
}
else
{
lean_object* v_val_8_; 
v_val_8_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref(v___x_6_);
if (lean_obj_tag(v_val_8_) == 1)
{
uint8_t v_v_9_; 
v_v_9_ = lean_ctor_get_uint8(v_val_8_, 0);
lean_dec_ref(v_val_8_);
return v_v_9_;
}
else
{
uint8_t v___x_10_; 
lean_dec(v_val_8_);
v___x_10_ = lean_unbox(v_defValue_4_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2___boxed(lean_object* v_opts_11_, lean_object* v_opt_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2(v_opts_11_, v_opt_12_);
lean_dec_ref(v_opt_12_);
lean_dec_ref(v_opts_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__3(lean_object* v_opts_15_, lean_object* v_opt_16_){
_start:
{
lean_object* v_name_17_; lean_object* v_defValue_18_; lean_object* v_map_19_; lean_object* v___x_20_; 
v_name_17_ = lean_ctor_get(v_opt_16_, 0);
v_defValue_18_ = lean_ctor_get(v_opt_16_, 1);
v_map_19_ = lean_ctor_get(v_opts_15_, 0);
v___x_20_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_19_, v_name_17_);
if (lean_obj_tag(v___x_20_) == 0)
{
lean_inc(v_defValue_18_);
return v_defValue_18_;
}
else
{
lean_object* v_val_21_; 
v_val_21_ = lean_ctor_get(v___x_20_, 0);
lean_inc(v_val_21_);
lean_dec_ref(v___x_20_);
if (lean_obj_tag(v_val_21_) == 3)
{
lean_object* v_v_22_; 
v_v_22_ = lean_ctor_get(v_val_21_, 0);
lean_inc(v_v_22_);
lean_dec_ref(v_val_21_);
return v_v_22_;
}
else
{
lean_dec(v_val_21_);
lean_inc(v_defValue_18_);
return v_defValue_18_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__3___boxed(lean_object* v_opts_23_, lean_object* v_opt_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__3(v_opts_23_, v_opt_24_);
lean_dec_ref(v_opt_24_);
lean_dec_ref(v_opts_23_);
return v_res_25_;
}
}
static lean_object* _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__0(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_mk_string_unchecked("implemented_by", 14, 14);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__1(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__0, &l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__0_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__0);
v___x_28_ = l_Lean_Name_mkStr1(v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0(lean_object* v_attr_29_){
_start:
{
lean_object* v_name_30_; lean_object* v___x_31_; uint8_t v___x_32_; 
v_name_30_ = lean_ctor_get(v_attr_29_, 0);
v___x_31_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__1, &l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__1_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___closed__1);
v___x_32_ = lean_name_eq(v_name_30_, v___x_31_);
if (v___x_32_ == 0)
{
uint8_t v___x_33_; 
v___x_33_ = 1;
return v___x_33_;
}
else
{
uint8_t v___x_34_; 
v___x_34_ = 0;
return v___x_34_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___boxed(lean_object* v_attr_35_){
_start:
{
uint8_t v_res_36_; lean_object* v_r_37_; 
v_res_36_ = l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0(v_attr_35_);
lean_dec_ref(v_attr_35_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__5(lean_object* v_docCtx_38_, lean_object* v_declNames_39_, uint8_t v_cacheProofs_40_, lean_object* v_as_41_, size_t v_i_42_, size_t v_stop_43_, lean_object* v_b_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
uint8_t v___x_52_; 
v___x_52_ = lean_usize_dec_eq(v_i_42_, v_stop_43_);
if (v___x_52_ == 0)
{
uint8_t v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = 1;
v___x_54_ = lean_array_uget_borrowed(v_as_41_, v_i_42_);
lean_inc(v_declNames_39_);
lean_inc(v___x_54_);
lean_inc_ref(v_docCtx_38_);
v___x_55_ = l_Lean_Elab_addNonRec(v_docCtx_38_, v___x_54_, v___x_52_, v_declNames_39_, v_cacheProofs_40_, v___x_52_, v___x_53_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_);
if (lean_obj_tag(v___x_55_) == 0)
{
lean_object* v_a_56_; size_t v___x_57_; size_t v___x_58_; 
v_a_56_ = lean_ctor_get(v___x_55_, 0);
lean_inc(v_a_56_);
lean_dec_ref(v___x_55_);
v___x_57_ = ((size_t)1ULL);
v___x_58_ = lean_usize_add(v_i_42_, v___x_57_);
v_i_42_ = v___x_58_;
v_b_44_ = v_a_56_;
goto _start;
}
else
{
lean_dec(v_declNames_39_);
lean_dec_ref(v_docCtx_38_);
return v___x_55_;
}
}
else
{
lean_object* v___x_60_; 
lean_dec(v_declNames_39_);
lean_dec_ref(v_docCtx_38_);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v_b_44_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__5___boxed(lean_object* v_docCtx_61_, lean_object* v_declNames_62_, lean_object* v_cacheProofs_63_, lean_object* v_as_64_, lean_object* v_i_65_, lean_object* v_stop_66_, lean_object* v_b_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
uint8_t v_cacheProofs_boxed_75_; size_t v_i_boxed_76_; size_t v_stop_boxed_77_; lean_object* v_res_78_; 
v_cacheProofs_boxed_75_ = lean_unbox(v_cacheProofs_63_);
v_i_boxed_76_ = lean_unbox_usize(v_i_65_);
lean_dec(v_i_65_);
v_stop_boxed_77_ = lean_unbox_usize(v_stop_66_);
lean_dec(v_stop_66_);
v_res_78_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__5(v_docCtx_61_, v_declNames_62_, v_cacheProofs_boxed_75_, v_as_64_, v_i_boxed_76_, v_stop_boxed_77_, v_b_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
lean_dec(v___y_69_);
lean_dec_ref(v___y_68_);
lean_dec_ref(v_as_64_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___redArg(uint8_t v_flag_79_, lean_object* v___y_80_){
_start:
{
lean_object* v___x_82_; lean_object* v_infoState_83_; lean_object* v_env_84_; lean_object* v_nextMacroScope_85_; lean_object* v_ngen_86_; lean_object* v_auxDeclNGen_87_; lean_object* v_traceState_88_; lean_object* v_cache_89_; lean_object* v_messages_90_; lean_object* v_snapshotTasks_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_111_; 
v___x_82_ = lean_st_ref_take(v___y_80_);
v_infoState_83_ = lean_ctor_get(v___x_82_, 7);
v_env_84_ = lean_ctor_get(v___x_82_, 0);
v_nextMacroScope_85_ = lean_ctor_get(v___x_82_, 1);
v_ngen_86_ = lean_ctor_get(v___x_82_, 2);
v_auxDeclNGen_87_ = lean_ctor_get(v___x_82_, 3);
v_traceState_88_ = lean_ctor_get(v___x_82_, 4);
v_cache_89_ = lean_ctor_get(v___x_82_, 5);
v_messages_90_ = lean_ctor_get(v___x_82_, 6);
v_snapshotTasks_91_ = lean_ctor_get(v___x_82_, 8);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_111_ == 0)
{
v___x_93_ = v___x_82_;
v_isShared_94_ = v_isSharedCheck_111_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_snapshotTasks_91_);
lean_inc(v_infoState_83_);
lean_inc(v_messages_90_);
lean_inc(v_cache_89_);
lean_inc(v_traceState_88_);
lean_inc(v_auxDeclNGen_87_);
lean_inc(v_ngen_86_);
lean_inc(v_nextMacroScope_85_);
lean_inc(v_env_84_);
lean_dec(v___x_82_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_111_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v_assignment_95_; lean_object* v_lazyAssignment_96_; lean_object* v_trees_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_110_; 
v_assignment_95_ = lean_ctor_get(v_infoState_83_, 0);
v_lazyAssignment_96_ = lean_ctor_get(v_infoState_83_, 1);
v_trees_97_ = lean_ctor_get(v_infoState_83_, 2);
v_isSharedCheck_110_ = !lean_is_exclusive(v_infoState_83_);
if (v_isSharedCheck_110_ == 0)
{
v___x_99_ = v_infoState_83_;
v_isShared_100_ = v_isSharedCheck_110_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_trees_97_);
lean_inc(v_lazyAssignment_96_);
lean_inc(v_assignment_95_);
lean_dec(v_infoState_83_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_110_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_assignment_95_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v_lazyAssignment_96_);
lean_ctor_set(v_reuseFailAlloc_109_, 2, v_trees_97_);
v___x_102_ = v_reuseFailAlloc_109_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
lean_object* v___x_104_; 
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*3, v_flag_79_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 7, v___x_102_);
v___x_104_ = v___x_93_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_env_84_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_nextMacroScope_85_);
lean_ctor_set(v_reuseFailAlloc_108_, 2, v_ngen_86_);
lean_ctor_set(v_reuseFailAlloc_108_, 3, v_auxDeclNGen_87_);
lean_ctor_set(v_reuseFailAlloc_108_, 4, v_traceState_88_);
lean_ctor_set(v_reuseFailAlloc_108_, 5, v_cache_89_);
lean_ctor_set(v_reuseFailAlloc_108_, 6, v_messages_90_);
lean_ctor_set(v_reuseFailAlloc_108_, 7, v___x_102_);
lean_ctor_set(v_reuseFailAlloc_108_, 8, v_snapshotTasks_91_);
v___x_104_ = v_reuseFailAlloc_108_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_105_ = lean_st_ref_set(v___y_80_, v___x_104_);
v___x_106_ = lean_box(0);
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
return v___x_107_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___redArg___boxed(lean_object* v_flag_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
uint8_t v_flag_boxed_115_; lean_object* v_res_116_; 
v_flag_boxed_115_ = lean_unbox(v_flag_112_);
v_res_116_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___redArg(v_flag_boxed_115_, v___y_113_);
lean_dec(v___y_113_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4___redArg(uint8_t v_flag_117_, lean_object* v_x_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
lean_object* v___x_126_; lean_object* v_infoState_127_; uint8_t v_enabled_128_; lean_object* v_a_130_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_126_ = lean_st_ref_get(v___y_124_);
v_infoState_127_ = lean_ctor_get(v___x_126_, 7);
lean_inc_ref(v_infoState_127_);
lean_dec(v___x_126_);
v_enabled_128_ = lean_ctor_get_uint8(v_infoState_127_, sizeof(void*)*3);
lean_dec_ref(v_infoState_127_);
v___x_140_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___redArg(v_flag_117_, v___y_124_);
lean_dec_ref(v___x_140_);
lean_inc(v___y_124_);
lean_inc_ref(v___y_123_);
lean_inc(v___y_122_);
lean_inc_ref(v___y_121_);
lean_inc(v___y_120_);
lean_inc_ref(v___y_119_);
v___x_141_ = lean_apply_7(v_x_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_, lean_box(0));
if (lean_obj_tag(v___x_141_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
v_a_142_ = lean_ctor_get(v___x_141_, 0);
lean_inc(v_a_142_);
lean_dec_ref(v___x_141_);
v___x_143_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___redArg(v_enabled_128_, v___y_124_);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_150_ == 0)
{
lean_object* v_unused_151_; 
v_unused_151_ = lean_ctor_get(v___x_143_, 0);
lean_dec(v_unused_151_);
v___x_145_ = v___x_143_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_dec(v___x_143_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v_a_142_);
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_142_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
else
{
lean_object* v_a_152_; 
v_a_152_ = lean_ctor_get(v___x_141_, 0);
lean_inc(v_a_152_);
lean_dec_ref(v___x_141_);
v_a_130_ = v_a_152_;
goto v___jp_129_;
}
v___jp_129_:
{
lean_object* v___x_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_138_; 
v___x_131_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___redArg(v_enabled_128_, v___y_124_);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_138_ == 0)
{
lean_object* v_unused_139_; 
v_unused_139_ = lean_ctor_get(v___x_131_, 0);
lean_dec(v_unused_139_);
v___x_133_ = v___x_131_;
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
else
{
lean_dec(v___x_131_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_136_; 
if (v_isShared_134_ == 0)
{
lean_ctor_set_tag(v___x_133_, 1);
lean_ctor_set(v___x_133_, 0, v_a_130_);
v___x_136_ = v___x_133_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_a_130_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4___redArg___boxed(lean_object* v_flag_153_, lean_object* v_x_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
uint8_t v_flag_boxed_162_; lean_object* v_res_163_; 
v_flag_boxed_162_ = lean_unbox(v_flag_153_);
v_res_163_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4___redArg(v_flag_boxed_162_, v_x_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
return v_res_163_;
}
}
static lean_object* _init_l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_164_;
}
}
static lean_object* _init_l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_obj_once(&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___closed__0, &l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___closed__0_once, _init_l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___closed__0);
v___x_166_ = l_Lean_Name_mkStr1(v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1(lean_object* v_o_167_, lean_object* v_k_168_, uint8_t v_v_169_){
_start:
{
lean_object* v_map_170_; uint8_t v_hasTrace_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_185_; 
v_map_170_ = lean_ctor_get(v_o_167_, 0);
v_hasTrace_171_ = lean_ctor_get_uint8(v_o_167_, sizeof(void*)*1);
v_isSharedCheck_185_ = !lean_is_exclusive(v_o_167_);
if (v_isSharedCheck_185_ == 0)
{
v___x_173_ = v_o_167_;
v_isShared_174_ = v_isSharedCheck_185_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_map_170_);
lean_dec(v_o_167_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_185_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_175_, 0, v_v_169_);
lean_inc(v_k_168_);
v___x_176_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_168_, v___x_175_, v_map_170_);
if (v_hasTrace_171_ == 0)
{
lean_object* v___x_177_; uint8_t v___x_178_; lean_object* v___x_180_; 
v___x_177_ = lean_obj_once(&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___closed__1, &l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___closed__1_once, _init_l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___closed__1);
v___x_178_ = l_Lean_Name_isPrefixOf(v___x_177_, v_k_168_);
lean_dec(v_k_168_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_176_);
v___x_180_ = v___x_173_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_176_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
lean_ctor_set_uint8(v___x_180_, sizeof(void*)*1, v___x_178_);
return v___x_180_;
}
}
else
{
lean_object* v___x_183_; 
lean_dec(v_k_168_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_176_);
v___x_183_ = v___x_173_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_176_);
lean_ctor_set_uint8(v_reuseFailAlloc_184_, sizeof(void*)*1, v_hasTrace_171_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1___boxed(lean_object* v_o_186_, lean_object* v_k_187_, lean_object* v_v_188_){
_start:
{
uint8_t v_v_boxed_189_; lean_object* v_res_190_; 
v_v_boxed_189_ = lean_unbox(v_v_188_);
v_res_190_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1(v_o_186_, v_k_187_, v_v_boxed_189_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1(lean_object* v_opts_191_, lean_object* v_opt_192_, uint8_t v_val_193_){
_start:
{
lean_object* v_name_194_; lean_object* v___x_195_; 
v_name_194_ = lean_ctor_get(v_opt_192_, 0);
lean_inc(v_name_194_);
lean_dec_ref(v_opt_192_);
v___x_195_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1_spec__1(v_opts_191_, v_name_194_, v_val_193_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1___boxed(lean_object* v_opts_196_, lean_object* v_opt_197_, lean_object* v_val_198_){
_start:
{
uint8_t v_val_boxed_199_; lean_object* v_res_200_; 
v_val_boxed_199_ = lean_unbox(v_val_198_);
v_res_200_ = l_Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1(v_opts_196_, v_opt_197_, v_val_boxed_199_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__0(lean_object* v_a_201_, lean_object* v_a_202_){
_start:
{
if (lean_obj_tag(v_a_201_) == 0)
{
lean_object* v___x_203_; 
v___x_203_ = l_List_reverse___redArg(v_a_202_);
return v___x_203_;
}
else
{
lean_object* v_head_204_; lean_object* v_tail_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_214_; 
v_head_204_ = lean_ctor_get(v_a_201_, 0);
v_tail_205_ = lean_ctor_get(v_a_201_, 1);
v_isSharedCheck_214_ = !lean_is_exclusive(v_a_201_);
if (v_isSharedCheck_214_ == 0)
{
v___x_207_ = v_a_201_;
v_isShared_208_ = v_isSharedCheck_214_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_tail_205_);
lean_inc(v_head_204_);
lean_dec(v_a_201_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_214_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v_declName_209_; lean_object* v___x_211_; 
v_declName_209_ = lean_ctor_get(v_head_204_, 3);
lean_inc(v_declName_209_);
lean_dec(v_head_204_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 1, v_a_202_);
lean_ctor_set(v___x_207_, 0, v_declName_209_);
v___x_211_ = v___x_207_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_declName_209_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v_a_202_);
v___x_211_ = v_reuseFailAlloc_213_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
v_a_201_ = v_tail_205_;
v_a_202_ = v___x_211_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__0(void){
_start:
{
lean_object* v___f_215_; 
v___f_215_ = lean_alloc_closure((void*)(l_Lean_Elab_Mutual_addPreDefsFromUnary___lam__0___boxed), 1, 0);
return v___f_215_;
}
}
static lean_object* _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1(void){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_216_;
}
}
static lean_object* _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__1);
v___x_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
return v___x_218_;
}
}
static lean_object* _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2);
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set(v___x_220_, 1, v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary(lean_object* v_docCtx_221_, lean_object* v_preDefs_222_, lean_object* v_preDefsNonrec_223_, lean_object* v_unaryPreDefNonRec_224_, uint8_t v_cacheProofs_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_declName_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v_declName_237_; lean_object* v___x_238_; lean_object* v_fileName_239_; lean_object* v_fileMap_240_; lean_object* v_options_241_; lean_object* v_currRecDepth_242_; lean_object* v_ref_243_; lean_object* v_currNamespace_244_; lean_object* v_openDecls_245_; lean_object* v_initHeartbeats_246_; lean_object* v_maxHeartbeats_247_; lean_object* v_quotContext_248_; lean_object* v_currMacroScope_249_; lean_object* v_cancelTk_x3f_250_; uint8_t v_suppressElabErrors_251_; lean_object* v_inheritedTraceOptions_252_; lean_object* v_env_253_; lean_object* v___f_254_; uint8_t v___x_255_; lean_object* v_preDefNonRec_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v_declNames_259_; lean_object* v___x_260_; uint8_t v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; uint8_t v___x_264_; lean_object* v_fileName_266_; lean_object* v_fileMap_267_; lean_object* v_currRecDepth_268_; lean_object* v_ref_269_; lean_object* v_currNamespace_270_; lean_object* v_openDecls_271_; lean_object* v_initHeartbeats_272_; lean_object* v_maxHeartbeats_273_; lean_object* v_quotContext_274_; lean_object* v_currMacroScope_275_; lean_object* v_cancelTk_x3f_276_; uint8_t v_suppressElabErrors_277_; lean_object* v_inheritedTraceOptions_278_; lean_object* v___y_279_; uint8_t v___y_317_; uint8_t v___x_338_; 
v_declName_233_ = lean_ctor_get(v_unaryPreDefNonRec_224_, 3);
v___x_234_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_235_ = lean_unsigned_to_nat(0u);
v___x_236_ = lean_array_get_borrowed(v___x_234_, v_preDefs_222_, v___x_235_);
v_declName_237_ = lean_ctor_get(v___x_236_, 3);
v___x_238_ = lean_st_ref_get(v_a_231_);
v_fileName_239_ = lean_ctor_get(v_a_230_, 0);
v_fileMap_240_ = lean_ctor_get(v_a_230_, 1);
v_options_241_ = lean_ctor_get(v_a_230_, 2);
v_currRecDepth_242_ = lean_ctor_get(v_a_230_, 3);
v_ref_243_ = lean_ctor_get(v_a_230_, 5);
v_currNamespace_244_ = lean_ctor_get(v_a_230_, 6);
v_openDecls_245_ = lean_ctor_get(v_a_230_, 7);
v_initHeartbeats_246_ = lean_ctor_get(v_a_230_, 8);
v_maxHeartbeats_247_ = lean_ctor_get(v_a_230_, 9);
v_quotContext_248_ = lean_ctor_get(v_a_230_, 10);
v_currMacroScope_249_ = lean_ctor_get(v_a_230_, 11);
v_cancelTk_x3f_250_ = lean_ctor_get(v_a_230_, 12);
v_suppressElabErrors_251_ = lean_ctor_get_uint8(v_a_230_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_252_ = lean_ctor_get(v_a_230_, 13);
v_env_253_ = lean_ctor_get(v___x_238_, 0);
lean_inc_ref(v_env_253_);
lean_dec(v___x_238_);
v___f_254_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__0, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__0_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__0);
v___x_255_ = lean_name_eq(v_declName_233_, v_declName_237_);
v_preDefNonRec_256_ = l_Lean_Elab_PreDefinition_filterAttrs(v_unaryPreDefNonRec_224_, v___f_254_);
v___x_257_ = lean_array_to_list(v_preDefs_222_);
v___x_258_ = lean_box(0);
v_declNames_259_ = l_List_mapTR_loop___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__0(v___x_257_, v___x_258_);
v___x_260_ = l_Lean_allowUnsafeReducibility;
v___x_261_ = 1;
lean_inc_ref(v_options_241_);
v___x_262_ = l_Lean_Option_set___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__1(v_options_241_, v___x_260_, v___x_261_);
v___x_263_ = l_Lean_diagnostics;
v___x_264_ = l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__2(v___x_262_, v___x_263_);
v___x_338_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_253_);
lean_dec_ref(v_env_253_);
if (v___x_338_ == 0)
{
if (v___x_264_ == 0)
{
v_fileName_266_ = v_fileName_239_;
v_fileMap_267_ = v_fileMap_240_;
v_currRecDepth_268_ = v_currRecDepth_242_;
v_ref_269_ = v_ref_243_;
v_currNamespace_270_ = v_currNamespace_244_;
v_openDecls_271_ = v_openDecls_245_;
v_initHeartbeats_272_ = v_initHeartbeats_246_;
v_maxHeartbeats_273_ = v_maxHeartbeats_247_;
v_quotContext_274_ = v_quotContext_248_;
v_currMacroScope_275_ = v_currMacroScope_249_;
v_cancelTk_x3f_276_ = v_cancelTk_x3f_250_;
v_suppressElabErrors_277_ = v_suppressElabErrors_251_;
v_inheritedTraceOptions_278_ = v_inheritedTraceOptions_252_;
v___y_279_ = v_a_231_;
goto v___jp_265_;
}
else
{
v___y_317_ = v___x_338_;
goto v___jp_316_;
}
}
else
{
v___y_317_ = v___x_264_;
goto v___jp_316_;
}
v___jp_265_:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_280_ = l_Lean_maxRecDepth;
v___x_281_ = l_Lean_Option_get___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__3(v___x_262_, v___x_280_);
lean_inc_ref(v_inheritedTraceOptions_278_);
lean_inc(v_cancelTk_x3f_276_);
lean_inc(v_currMacroScope_275_);
lean_inc(v_quotContext_274_);
lean_inc(v_maxHeartbeats_273_);
lean_inc(v_initHeartbeats_272_);
lean_inc(v_openDecls_271_);
lean_inc(v_currNamespace_270_);
lean_inc(v_ref_269_);
lean_inc(v_currRecDepth_268_);
lean_inc_ref(v_fileMap_267_);
lean_inc_ref(v_fileName_266_);
v___x_282_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_282_, 0, v_fileName_266_);
lean_ctor_set(v___x_282_, 1, v_fileMap_267_);
lean_ctor_set(v___x_282_, 2, v___x_262_);
lean_ctor_set(v___x_282_, 3, v_currRecDepth_268_);
lean_ctor_set(v___x_282_, 4, v___x_281_);
lean_ctor_set(v___x_282_, 5, v_ref_269_);
lean_ctor_set(v___x_282_, 6, v_currNamespace_270_);
lean_ctor_set(v___x_282_, 7, v_openDecls_271_);
lean_ctor_set(v___x_282_, 8, v_initHeartbeats_272_);
lean_ctor_set(v___x_282_, 9, v_maxHeartbeats_273_);
lean_ctor_set(v___x_282_, 10, v_quotContext_274_);
lean_ctor_set(v___x_282_, 11, v_currMacroScope_275_);
lean_ctor_set(v___x_282_, 12, v_cancelTk_x3f_276_);
lean_ctor_set(v___x_282_, 13, v_inheritedTraceOptions_278_);
lean_ctor_set_uint8(v___x_282_, sizeof(void*)*14, v___x_264_);
lean_ctor_set_uint8(v___x_282_, sizeof(void*)*14 + 1, v_suppressElabErrors_277_);
if (v___x_255_ == 0)
{
lean_object* v_declName_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v_declName_283_ = lean_ctor_get(v_preDefNonRec_256_, 3);
lean_inc(v_declName_283_);
v___x_284_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_284_, 0, v_declName_283_);
lean_ctor_set(v___x_284_, 1, v___x_258_);
v___x_285_ = lean_box(v___x_255_);
v___x_286_ = lean_box(v_cacheProofs_225_);
v___x_287_ = lean_box(v___x_255_);
v___x_288_ = lean_box(v___x_261_);
lean_inc_ref(v_docCtx_221_);
v___x_289_ = lean_alloc_closure((void*)(l_Lean_Elab_addNonRec___boxed), 14, 7);
lean_closure_set(v___x_289_, 0, v_docCtx_221_);
lean_closure_set(v___x_289_, 1, v_preDefNonRec_256_);
lean_closure_set(v___x_289_, 2, v___x_285_);
lean_closure_set(v___x_289_, 3, v___x_284_);
lean_closure_set(v___x_289_, 4, v___x_286_);
lean_closure_set(v___x_289_, 5, v___x_287_);
lean_closure_set(v___x_289_, 6, v___x_288_);
v___x_290_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4___redArg(v___x_255_, v___x_289_, v_a_226_, v_a_227_, v_a_228_, v_a_229_, v___x_282_, v___y_279_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_310_; 
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_310_ == 0)
{
lean_object* v_unused_311_; 
v_unused_311_ = lean_ctor_get(v___x_290_, 0);
lean_dec(v_unused_311_);
v___x_292_ = v___x_290_;
v_isShared_293_ = v_isSharedCheck_310_;
goto v_resetjp_291_;
}
else
{
lean_dec(v___x_290_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_310_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_294_; lean_object* v___x_295_; uint8_t v___x_296_; 
v___x_294_ = lean_array_get_size(v_preDefsNonrec_223_);
v___x_295_ = lean_box(0);
v___x_296_ = lean_nat_dec_lt(v___x_235_, v___x_294_);
if (v___x_296_ == 0)
{
lean_object* v___x_298_; 
lean_dec_ref(v___x_282_);
lean_dec(v_declNames_259_);
lean_dec_ref(v_docCtx_221_);
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 0, v___x_295_);
v___x_298_ = v___x_292_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_295_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
else
{
uint8_t v___x_300_; 
v___x_300_ = lean_nat_dec_le(v___x_294_, v___x_294_);
if (v___x_300_ == 0)
{
if (v___x_296_ == 0)
{
lean_object* v___x_302_; 
lean_dec_ref(v___x_282_);
lean_dec(v_declNames_259_);
lean_dec_ref(v_docCtx_221_);
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 0, v___x_295_);
v___x_302_ = v___x_292_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_295_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
else
{
size_t v___x_304_; size_t v___x_305_; lean_object* v___x_306_; 
lean_del_object(v___x_292_);
v___x_304_ = ((size_t)0ULL);
v___x_305_ = lean_usize_of_nat(v___x_294_);
v___x_306_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__5(v_docCtx_221_, v_declNames_259_, v_cacheProofs_225_, v_preDefsNonrec_223_, v___x_304_, v___x_305_, v___x_295_, v_a_226_, v_a_227_, v_a_228_, v_a_229_, v___x_282_, v___y_279_);
lean_dec_ref(v___x_282_);
return v___x_306_;
}
}
else
{
size_t v___x_307_; size_t v___x_308_; lean_object* v___x_309_; 
lean_del_object(v___x_292_);
v___x_307_ = ((size_t)0ULL);
v___x_308_ = lean_usize_of_nat(v___x_294_);
v___x_309_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__5(v_docCtx_221_, v_declNames_259_, v_cacheProofs_225_, v_preDefsNonrec_223_, v___x_307_, v___x_308_, v___x_295_, v_a_226_, v_a_227_, v_a_228_, v_a_229_, v___x_282_, v___y_279_);
lean_dec_ref(v___x_282_);
return v___x_309_;
}
}
}
}
else
{
lean_dec_ref(v___x_282_);
lean_dec(v_declNames_259_);
lean_dec_ref(v_docCtx_221_);
return v___x_290_;
}
}
else
{
lean_object* v_declName_312_; uint8_t v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
lean_dec(v_declNames_259_);
v_declName_312_ = lean_ctor_get(v_preDefNonRec_256_, 3);
lean_inc(v_declName_312_);
v___x_313_ = 0;
v___x_314_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_314_, 0, v_declName_312_);
lean_ctor_set(v___x_314_, 1, v___x_258_);
v___x_315_ = l_Lean_Elab_addNonRec(v_docCtx_221_, v_preDefNonRec_256_, v___x_313_, v___x_314_, v_cacheProofs_225_, v___x_313_, v___x_261_, v_a_226_, v_a_227_, v_a_228_, v_a_229_, v___x_282_, v___y_279_);
lean_dec_ref(v___x_282_);
return v___x_315_;
}
}
v___jp_316_:
{
if (v___y_317_ == 0)
{
lean_object* v___x_318_; lean_object* v_env_319_; lean_object* v_nextMacroScope_320_; lean_object* v_ngen_321_; lean_object* v_auxDeclNGen_322_; lean_object* v_traceState_323_; lean_object* v_messages_324_; lean_object* v_infoState_325_; lean_object* v_snapshotTasks_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_336_; 
v___x_318_ = lean_st_ref_take(v_a_231_);
v_env_319_ = lean_ctor_get(v___x_318_, 0);
v_nextMacroScope_320_ = lean_ctor_get(v___x_318_, 1);
v_ngen_321_ = lean_ctor_get(v___x_318_, 2);
v_auxDeclNGen_322_ = lean_ctor_get(v___x_318_, 3);
v_traceState_323_ = lean_ctor_get(v___x_318_, 4);
v_messages_324_ = lean_ctor_get(v___x_318_, 6);
v_infoState_325_ = lean_ctor_get(v___x_318_, 7);
v_snapshotTasks_326_ = lean_ctor_get(v___x_318_, 8);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_336_ == 0)
{
lean_object* v_unused_337_; 
v_unused_337_ = lean_ctor_get(v___x_318_, 5);
lean_dec(v_unused_337_);
v___x_328_ = v___x_318_;
v_isShared_329_ = v_isSharedCheck_336_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_snapshotTasks_326_);
lean_inc(v_infoState_325_);
lean_inc(v_messages_324_);
lean_inc(v_traceState_323_);
lean_inc(v_auxDeclNGen_322_);
lean_inc(v_ngen_321_);
lean_inc(v_nextMacroScope_320_);
lean_inc(v_env_319_);
lean_dec(v___x_318_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_336_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_333_; 
v___x_330_ = l_Lean_Kernel_enableDiag(v_env_319_, v___x_264_);
v___x_331_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 5, v___x_331_);
lean_ctor_set(v___x_328_, 0, v___x_330_);
v___x_333_ = v___x_328_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v___x_330_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_nextMacroScope_320_);
lean_ctor_set(v_reuseFailAlloc_335_, 2, v_ngen_321_);
lean_ctor_set(v_reuseFailAlloc_335_, 3, v_auxDeclNGen_322_);
lean_ctor_set(v_reuseFailAlloc_335_, 4, v_traceState_323_);
lean_ctor_set(v_reuseFailAlloc_335_, 5, v___x_331_);
lean_ctor_set(v_reuseFailAlloc_335_, 6, v_messages_324_);
lean_ctor_set(v_reuseFailAlloc_335_, 7, v_infoState_325_);
lean_ctor_set(v_reuseFailAlloc_335_, 8, v_snapshotTasks_326_);
v___x_333_ = v_reuseFailAlloc_335_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
lean_object* v___x_334_; 
v___x_334_ = lean_st_ref_set(v_a_231_, v___x_333_);
v_fileName_266_ = v_fileName_239_;
v_fileMap_267_ = v_fileMap_240_;
v_currRecDepth_268_ = v_currRecDepth_242_;
v_ref_269_ = v_ref_243_;
v_currNamespace_270_ = v_currNamespace_244_;
v_openDecls_271_ = v_openDecls_245_;
v_initHeartbeats_272_ = v_initHeartbeats_246_;
v_maxHeartbeats_273_ = v_maxHeartbeats_247_;
v_quotContext_274_ = v_quotContext_248_;
v_currMacroScope_275_ = v_currMacroScope_249_;
v_cancelTk_x3f_276_ = v_cancelTk_x3f_250_;
v_suppressElabErrors_277_ = v_suppressElabErrors_251_;
v_inheritedTraceOptions_278_ = v_inheritedTraceOptions_252_;
v___y_279_ = v_a_231_;
goto v___jp_265_;
}
}
}
else
{
v_fileName_266_ = v_fileName_239_;
v_fileMap_267_ = v_fileMap_240_;
v_currRecDepth_268_ = v_currRecDepth_242_;
v_ref_269_ = v_ref_243_;
v_currNamespace_270_ = v_currNamespace_244_;
v_openDecls_271_ = v_openDecls_245_;
v_initHeartbeats_272_ = v_initHeartbeats_246_;
v_maxHeartbeats_273_ = v_maxHeartbeats_247_;
v_quotContext_274_ = v_quotContext_248_;
v_currMacroScope_275_ = v_currMacroScope_249_;
v_cancelTk_x3f_276_ = v_cancelTk_x3f_250_;
v_suppressElabErrors_277_ = v_suppressElabErrors_251_;
v_inheritedTraceOptions_278_ = v_inheritedTraceOptions_252_;
v___y_279_ = v_a_231_;
goto v___jp_265_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary___boxed(lean_object* v_docCtx_339_, lean_object* v_preDefs_340_, lean_object* v_preDefsNonrec_341_, lean_object* v_unaryPreDefNonRec_342_, lean_object* v_cacheProofs_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
uint8_t v_cacheProofs_boxed_351_; lean_object* v_res_352_; 
v_cacheProofs_boxed_351_ = lean_unbox(v_cacheProofs_343_);
v_res_352_ = l_Lean_Elab_Mutual_addPreDefsFromUnary(v_docCtx_339_, v_preDefs_340_, v_preDefsNonrec_341_, v_unaryPreDefNonRec_342_, v_cacheProofs_boxed_351_, v_a_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_);
lean_dec(v_a_349_);
lean_dec_ref(v_a_348_);
lean_dec(v_a_347_);
lean_dec_ref(v_a_346_);
lean_dec(v_a_345_);
lean_dec_ref(v_a_344_);
lean_dec_ref(v_preDefsNonrec_341_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5(uint8_t v_flag_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___redArg(v_flag_353_, v___y_359_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5___boxed(lean_object* v_flag_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
uint8_t v_flag_boxed_370_; lean_object* v_res_371_; 
v_flag_boxed_370_ = lean_unbox(v_flag_362_);
v_res_371_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4_spec__5(v_flag_boxed_370_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
lean_dec(v___y_366_);
lean_dec_ref(v___y_365_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4(lean_object* v_00_u03b1_372_, uint8_t v_flag_373_, lean_object* v_x_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4___redArg(v_flag_373_, v_x_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4___boxed(lean_object* v_00_u03b1_383_, lean_object* v_flag_384_, lean_object* v_x_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
uint8_t v_flag_boxed_393_; lean_object* v_res_394_; 
v_flag_boxed_393_ = lean_unbox(v_flag_384_);
v_res_394_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Mutual_addPreDefsFromUnary_spec__4(v_00_u03b1_383_, v_flag_boxed_393_, v_x_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_cleanPreDef(lean_object* v_preDef_395_, uint8_t v_cacheProofs_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_Lean_Elab_eraseRecAppSyntax(v_preDef_395_, v_a_399_, v_a_400_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_404_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_a_403_);
lean_dec_ref(v___x_402_);
v___x_404_ = l_Lean_Elab_abstractNestedProofs(v_a_403_, v_cacheProofs_396_, v_a_397_, v_a_398_, v_a_399_, v_a_400_);
return v___x_404_;
}
else
{
return v___x_402_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_cleanPreDef___boxed(lean_object* v_preDef_405_, lean_object* v_cacheProofs_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_){
_start:
{
uint8_t v_cacheProofs_boxed_412_; lean_object* v_res_413_; 
v_cacheProofs_boxed_412_ = lean_unbox(v_cacheProofs_406_);
v_res_413_ = l_Lean_Elab_Mutual_cleanPreDef(v_preDef_405_, v_cacheProofs_boxed_412_, v_a_407_, v_a_408_, v_a_409_, v_a_410_);
lean_dec(v_a_410_);
lean_dec_ref(v_a_409_);
lean_dec(v_a_408_);
lean_dec_ref(v_a_407_);
return v_res_413_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__2);
v___x_415_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
lean_ctor_set(v___x_415_, 2, v___x_414_);
lean_ctor_set(v___x_415_, 3, v___x_414_);
lean_ctor_set(v___x_415_, 4, v___x_414_);
lean_ctor_set(v___x_415_, 5, v___x_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg(lean_object* v_declName_416_, uint8_t v_s_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v___x_421_; lean_object* v_env_422_; lean_object* v_nextMacroScope_423_; lean_object* v_ngen_424_; lean_object* v_auxDeclNGen_425_; lean_object* v_traceState_426_; lean_object* v_messages_427_; lean_object* v_infoState_428_; lean_object* v_snapshotTasks_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_459_; 
v___x_421_ = lean_st_ref_take(v___y_419_);
v_env_422_ = lean_ctor_get(v___x_421_, 0);
v_nextMacroScope_423_ = lean_ctor_get(v___x_421_, 1);
v_ngen_424_ = lean_ctor_get(v___x_421_, 2);
v_auxDeclNGen_425_ = lean_ctor_get(v___x_421_, 3);
v_traceState_426_ = lean_ctor_get(v___x_421_, 4);
v_messages_427_ = lean_ctor_get(v___x_421_, 6);
v_infoState_428_ = lean_ctor_get(v___x_421_, 7);
v_snapshotTasks_429_ = lean_ctor_get(v___x_421_, 8);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_459_ == 0)
{
lean_object* v_unused_460_; 
v_unused_460_ = lean_ctor_get(v___x_421_, 5);
lean_dec(v_unused_460_);
v___x_431_ = v___x_421_;
v_isShared_432_ = v_isSharedCheck_459_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_snapshotTasks_429_);
lean_inc(v_infoState_428_);
lean_inc(v_messages_427_);
lean_inc(v_traceState_426_);
lean_inc(v_auxDeclNGen_425_);
lean_inc(v_ngen_424_);
lean_inc(v_nextMacroScope_423_);
lean_inc(v_env_422_);
lean_dec(v___x_421_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_459_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
uint8_t v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_438_; 
v___x_433_ = 0;
v___x_434_ = lean_box(0);
v___x_435_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_422_, v_declName_416_, v_s_417_, v___x_433_, v___x_434_);
v___x_436_ = lean_obj_once(&l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3, &l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3_once, _init_l_Lean_Elab_Mutual_addPreDefsFromUnary___closed__3);
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 5, v___x_436_);
lean_ctor_set(v___x_431_, 0, v___x_435_);
v___x_438_ = v___x_431_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_435_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v_nextMacroScope_423_);
lean_ctor_set(v_reuseFailAlloc_458_, 2, v_ngen_424_);
lean_ctor_set(v_reuseFailAlloc_458_, 3, v_auxDeclNGen_425_);
lean_ctor_set(v_reuseFailAlloc_458_, 4, v_traceState_426_);
lean_ctor_set(v_reuseFailAlloc_458_, 5, v___x_436_);
lean_ctor_set(v_reuseFailAlloc_458_, 6, v_messages_427_);
lean_ctor_set(v_reuseFailAlloc_458_, 7, v_infoState_428_);
lean_ctor_set(v_reuseFailAlloc_458_, 8, v_snapshotTasks_429_);
v___x_438_ = v_reuseFailAlloc_458_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v_mctx_442_; lean_object* v_zetaDeltaFVarIds_443_; lean_object* v_postponed_444_; lean_object* v_diag_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_456_; 
v___x_439_ = lean_st_ref_set(v___y_419_, v___x_438_);
v___x_440_ = lean_st_ref_get(v___y_419_);
lean_dec(v___x_440_);
v___x_441_ = lean_st_ref_take(v___y_418_);
v_mctx_442_ = lean_ctor_get(v___x_441_, 0);
v_zetaDeltaFVarIds_443_ = lean_ctor_get(v___x_441_, 2);
v_postponed_444_ = lean_ctor_get(v___x_441_, 3);
v_diag_445_ = lean_ctor_get(v___x_441_, 4);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_456_ == 0)
{
lean_object* v_unused_457_; 
v_unused_457_ = lean_ctor_get(v___x_441_, 1);
lean_dec(v_unused_457_);
v___x_447_ = v___x_441_;
v_isShared_448_ = v_isSharedCheck_456_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_diag_445_);
lean_inc(v_postponed_444_);
lean_inc(v_zetaDeltaFVarIds_443_);
lean_inc(v_mctx_442_);
lean_dec(v___x_441_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_456_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_449_; lean_object* v___x_451_; 
v___x_449_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___closed__0);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 1, v___x_449_);
v___x_451_ = v___x_447_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_mctx_442_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v___x_449_);
lean_ctor_set(v_reuseFailAlloc_455_, 2, v_zetaDeltaFVarIds_443_);
lean_ctor_set(v_reuseFailAlloc_455_, 3, v_postponed_444_);
lean_ctor_set(v_reuseFailAlloc_455_, 4, v_diag_445_);
v___x_451_ = v_reuseFailAlloc_455_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_452_ = lean_st_ref_set(v___y_418_, v___x_451_);
v___x_453_ = lean_box(0);
v___x_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
return v___x_454_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg___boxed(lean_object* v_declName_461_, lean_object* v_s_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
uint8_t v_s_boxed_466_; lean_object* v_res_467_; 
v_s_boxed_466_ = lean_unbox(v_s_462_);
v_res_467_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg(v_declName_461_, v_s_boxed_466_, v___y_463_, v___y_464_);
lean_dec(v___y_464_);
lean_dec(v___y_463_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0(lean_object* v_declName_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
uint8_t v___x_476_; lean_object* v___x_477_; 
v___x_476_ = 2;
v___x_477_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg(v_declName_468_, v___x_476_, v___y_472_, v___y_474_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0___boxed(lean_object* v_declName_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0(v_declName_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
return v_res_486_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__0(void){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = lean_mk_string_unchecked("reducible", 9, 9);
return v___x_487_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__1(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__0);
v___x_489_ = l_Lean_Name_mkStr1(v___x_488_);
return v___x_489_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__2(void){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = lean_mk_string_unchecked("semireducible", 13, 13);
return v___x_490_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__3(void){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__2);
v___x_492_ = l_Lean_Name_mkStr1(v___x_491_);
return v___x_492_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__4(void){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = lean_mk_string_unchecked("instance_reducible", 18, 18);
return v___x_493_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__5(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__4);
v___x_495_ = l_Lean_Name_mkStr1(v___x_494_);
return v___x_495_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__6(void){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = lean_mk_string_unchecked("implicit_reducible", 18, 18);
return v___x_496_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__7(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__6);
v___x_498_ = l_Lean_Name_mkStr1(v___x_497_);
return v___x_498_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1(lean_object* v_as_499_, size_t v_i_500_, size_t v_stop_501_){
_start:
{
uint8_t v___x_502_; 
v___x_502_ = lean_usize_dec_eq(v_i_500_, v_stop_501_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; lean_object* v_name_504_; uint8_t v___x_505_; lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_503_ = lean_array_uget_borrowed(v_as_499_, v_i_500_);
v_name_504_ = lean_ctor_get(v___x_503_, 0);
v___x_505_ = 1;
v___x_506_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__1);
v___x_507_ = lean_name_eq(v_name_504_, v___x_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; uint8_t v___x_509_; 
v___x_508_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__3);
v___x_509_ = lean_name_eq(v_name_504_, v___x_508_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_510_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__5);
v___x_511_ = lean_name_eq(v_name_504_, v___x_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__7, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___closed__7);
v___x_513_ = lean_name_eq(v_name_504_, v___x_512_);
if (v___x_513_ == 0)
{
size_t v___x_514_; size_t v___x_515_; 
v___x_514_ = ((size_t)1ULL);
v___x_515_ = lean_usize_add(v_i_500_, v___x_514_);
v_i_500_ = v___x_515_;
goto _start;
}
else
{
return v___x_505_;
}
}
else
{
return v___x_505_;
}
}
else
{
return v___x_505_;
}
}
else
{
return v___x_505_;
}
}
else
{
uint8_t v___x_517_; 
v___x_517_ = 0;
return v___x_517_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1___boxed(lean_object* v_as_518_, lean_object* v_i_519_, lean_object* v_stop_520_){
_start:
{
size_t v_i_boxed_521_; size_t v_stop_boxed_522_; uint8_t v_res_523_; lean_object* v_r_524_; 
v_i_boxed_521_ = lean_unbox_usize(v_i_519_);
lean_dec(v_i_519_);
v_stop_boxed_522_ = lean_unbox_usize(v_stop_520_);
lean_dec(v_stop_520_);
v_res_523_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1(v_as_518_, v_i_boxed_521_, v_stop_boxed_522_);
lean_dec_ref(v_as_518_);
v_r_524_ = lean_box(v_res_523_);
return v_r_524_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__2(lean_object* v_as_525_, size_t v_sz_526_, size_t v_i_527_, lean_object* v_b_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_){
_start:
{
lean_object* v_a_537_; uint8_t v___x_541_; 
v___x_541_ = lean_usize_dec_lt(v_i_527_, v_sz_526_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; 
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v_b_528_);
return v___x_542_;
}
else
{
lean_object* v_a_543_; uint8_t v_kind_544_; lean_object* v_modifiers_545_; lean_object* v___x_546_; uint8_t v___y_548_; uint8_t v___x_551_; 
v_a_543_ = lean_array_uget_borrowed(v_as_525_, v_i_527_);
v_kind_544_ = lean_ctor_get_uint8(v_a_543_, sizeof(void*)*9);
v_modifiers_545_ = lean_ctor_get(v_a_543_, 2);
v___x_546_ = lean_box(0);
v___x_551_ = l_Lean_Elab_DefKind_isTheorem(v_kind_544_);
if (v___x_551_ == 0)
{
lean_object* v_attrs_552_; lean_object* v___x_553_; lean_object* v___x_554_; uint8_t v___x_555_; 
v_attrs_552_ = lean_ctor_get(v_modifiers_545_, 2);
v___x_553_ = lean_unsigned_to_nat(0u);
v___x_554_ = lean_array_get_size(v_attrs_552_);
v___x_555_ = lean_nat_dec_lt(v___x_553_, v___x_554_);
if (v___x_555_ == 0)
{
v___y_548_ = v___x_551_;
goto v___jp_547_;
}
else
{
if (v___x_555_ == 0)
{
v___y_548_ = v___x_551_;
goto v___jp_547_;
}
else
{
size_t v___x_556_; size_t v___x_557_; uint8_t v___x_558_; 
v___x_556_ = ((size_t)0ULL);
v___x_557_ = lean_usize_of_nat(v___x_554_);
v___x_558_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__1(v_attrs_552_, v___x_556_, v___x_557_);
v___y_548_ = v___x_558_;
goto v___jp_547_;
}
}
}
else
{
v_a_537_ = v___x_546_;
goto v___jp_536_;
}
v___jp_547_:
{
if (v___y_548_ == 0)
{
lean_object* v_declName_549_; lean_object* v___x_550_; 
v_declName_549_ = lean_ctor_get(v_a_543_, 3);
lean_inc(v_declName_549_);
v___x_550_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0(v_declName_549_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_dec_ref(v___x_550_);
v_a_537_ = v___x_546_;
goto v___jp_536_;
}
else
{
return v___x_550_;
}
}
else
{
v_a_537_ = v___x_546_;
goto v___jp_536_;
}
}
}
v___jp_536_:
{
size_t v___x_538_; size_t v___x_539_; 
v___x_538_ = ((size_t)1ULL);
v___x_539_ = lean_usize_add(v_i_527_, v___x_538_);
v_i_527_ = v___x_539_;
v_b_528_ = v_a_537_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__2___boxed(lean_object* v_as_559_, lean_object* v_sz_560_, lean_object* v_i_561_, lean_object* v_b_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
size_t v_sz_boxed_570_; size_t v_i_boxed_571_; lean_object* v_res_572_; 
v_sz_boxed_570_ = lean_unbox_usize(v_sz_560_);
lean_dec(v_sz_560_);
v_i_boxed_571_ = lean_unbox_usize(v_i_561_);
lean_dec(v_i_561_);
v_res_572_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__2(v_as_559_, v_sz_boxed_570_, v_i_boxed_571_, v_b_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec_ref(v_as_559_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__5(lean_object* v_as_573_, size_t v_sz_574_, size_t v_i_575_, lean_object* v_b_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
uint8_t v___x_584_; 
v___x_584_ = lean_usize_dec_lt(v_i_575_, v_sz_574_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; 
v___x_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_585_, 0, v_b_576_);
return v___x_585_;
}
else
{
lean_object* v_a_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; lean_object* v___x_591_; 
v_a_586_ = lean_array_uget_borrowed(v_as_573_, v_i_575_);
v___x_587_ = lean_unsigned_to_nat(1u);
v___x_588_ = lean_mk_empty_array_with_capacity(v___x_587_);
lean_inc(v_a_586_);
v___x_589_ = lean_array_push(v___x_588_, v_a_586_);
v___x_590_ = 1;
v___x_591_ = l_Lean_Elab_applyAttributesOf(v___x_589_, v___x_590_, v___y_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_);
lean_dec_ref(v___x_589_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v___x_592_; size_t v___x_593_; size_t v___x_594_; 
lean_dec_ref(v___x_591_);
v___x_592_ = lean_box(0);
v___x_593_ = ((size_t)1ULL);
v___x_594_ = lean_usize_add(v_i_575_, v___x_593_);
v_i_575_ = v___x_594_;
v_b_576_ = v___x_592_;
goto _start;
}
else
{
return v___x_591_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__5___boxed(lean_object* v_as_596_, lean_object* v_sz_597_, lean_object* v_i_598_, lean_object* v_b_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
size_t v_sz_boxed_607_; size_t v_i_boxed_608_; lean_object* v_res_609_; 
v_sz_boxed_607_ = lean_unbox_usize(v_sz_597_);
lean_dec(v_sz_597_);
v_i_boxed_608_ = lean_unbox_usize(v_i_598_);
lean_dec(v_i_598_);
v_res_609_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__5(v_as_596_, v_sz_boxed_607_, v_i_boxed_608_, v_b_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec_ref(v_as_596_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg(lean_object* v_as_610_, size_t v_sz_611_, size_t v_i_612_, lean_object* v_b_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
uint8_t v___x_617_; 
v___x_617_ = lean_usize_dec_lt(v_i_612_, v_sz_611_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; 
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v_b_613_);
return v___x_618_;
}
else
{
lean_object* v_a_619_; lean_object* v_declName_620_; lean_object* v___x_621_; 
v_a_619_ = lean_array_uget_borrowed(v_as_610_, v_i_612_);
v_declName_620_ = lean_ctor_get(v_a_619_, 3);
lean_inc(v_declName_620_);
v___x_621_ = l_Lean_enableRealizationsForConst(v_declName_620_, v___y_614_, v___y_615_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v___x_622_; size_t v___x_623_; size_t v___x_624_; 
lean_dec_ref(v___x_621_);
v___x_622_ = lean_box(0);
v___x_623_ = ((size_t)1ULL);
v___x_624_ = lean_usize_add(v_i_612_, v___x_623_);
v_i_612_ = v___x_624_;
v_b_613_ = v___x_622_;
goto _start;
}
else
{
return v___x_621_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg___boxed(lean_object* v_as_626_, lean_object* v_sz_627_, lean_object* v_i_628_, lean_object* v_b_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
size_t v_sz_boxed_633_; size_t v_i_boxed_634_; lean_object* v_res_635_; 
v_sz_boxed_633_ = lean_unbox_usize(v_sz_627_);
lean_dec(v_sz_627_);
v_i_boxed_634_ = lean_unbox_usize(v_i_628_);
lean_dec(v_i_628_);
v_res_635_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg(v_as_626_, v_sz_boxed_633_, v_i_boxed_634_, v_b_629_, v___y_630_, v___y_631_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec_ref(v_as_626_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg(lean_object* v_as_636_, size_t v_sz_637_, size_t v_i_638_, lean_object* v_b_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_){
_start:
{
uint8_t v___x_645_; 
v___x_645_ = lean_usize_dec_lt(v_i_638_, v_sz_637_);
if (v___x_645_ == 0)
{
lean_object* v___x_646_; 
v___x_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_646_, 0, v_b_639_);
return v___x_646_;
}
else
{
lean_object* v_a_647_; lean_object* v_declName_648_; lean_object* v___x_649_; 
v_a_647_ = lean_array_uget_borrowed(v_as_636_, v_i_638_);
v_declName_648_ = lean_ctor_get(v_a_647_, 3);
lean_inc(v_declName_648_);
v___x_649_ = l_Lean_Meta_saveEqnAffectingOptions(v_declName_648_, v___y_640_, v___y_641_, v___y_642_, v___y_643_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v___x_650_; size_t v___x_651_; size_t v___x_652_; 
lean_dec_ref(v___x_649_);
v___x_650_ = lean_box(0);
v___x_651_ = ((size_t)1ULL);
v___x_652_ = lean_usize_add(v_i_638_, v___x_651_);
v_i_638_ = v___x_652_;
v_b_639_ = v___x_650_;
goto _start;
}
else
{
return v___x_649_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg___boxed(lean_object* v_as_654_, lean_object* v_sz_655_, lean_object* v_i_656_, lean_object* v_b_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
size_t v_sz_boxed_663_; size_t v_i_boxed_664_; lean_object* v_res_665_; 
v_sz_boxed_663_ = lean_unbox_usize(v_sz_655_);
lean_dec(v_sz_655_);
v_i_boxed_664_ = lean_unbox_usize(v_i_656_);
lean_dec(v_i_656_);
v_res_665_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg(v_as_654_, v_sz_boxed_663_, v_i_boxed_664_, v_b_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
lean_dec_ref(v_as_654_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefAttributes(lean_object* v_preDefs_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
lean_object* v___x_674_; size_t v_sz_675_; size_t v___x_676_; lean_object* v___x_677_; 
v___x_674_ = lean_box(0);
v_sz_675_ = lean_array_size(v_preDefs_666_);
v___x_676_ = ((size_t)0ULL);
v___x_677_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__2(v_preDefs_666_, v_sz_675_, v___x_676_, v___x_674_, v_a_667_, v_a_668_, v_a_669_, v_a_670_, v_a_671_, v_a_672_);
if (lean_obj_tag(v___x_677_) == 0)
{
lean_object* v___x_678_; 
lean_dec_ref(v___x_677_);
v___x_678_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg(v_preDefs_666_, v_sz_675_, v___x_676_, v___x_674_, v_a_669_, v_a_670_, v_a_671_, v_a_672_);
if (lean_obj_tag(v___x_678_) == 0)
{
lean_object* v___x_679_; size_t v_sz_680_; lean_object* v___x_681_; 
lean_dec_ref(v___x_678_);
lean_inc_ref(v_preDefs_666_);
v___x_679_ = l_Array_reverse___redArg(v_preDefs_666_);
v_sz_680_ = lean_array_size(v___x_679_);
v___x_681_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg(v___x_679_, v_sz_680_, v___x_676_, v___x_674_, v_a_671_, v_a_672_);
lean_dec_ref(v___x_679_);
if (lean_obj_tag(v___x_681_) == 0)
{
lean_object* v___x_682_; 
lean_dec_ref(v___x_681_);
v___x_682_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__5(v_preDefs_666_, v_sz_675_, v___x_676_, v___x_674_, v_a_667_, v_a_668_, v_a_669_, v_a_670_, v_a_671_, v_a_672_);
lean_dec_ref(v_preDefs_666_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_689_ == 0)
{
lean_object* v_unused_690_; 
v_unused_690_ = lean_ctor_get(v___x_682_, 0);
lean_dec(v_unused_690_);
v___x_684_ = v___x_682_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_dec(v___x_682_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 0, v___x_674_);
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v___x_674_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
else
{
return v___x_682_;
}
}
else
{
lean_dec_ref(v_preDefs_666_);
return v___x_681_;
}
}
else
{
lean_dec_ref(v_preDefs_666_);
return v___x_678_;
}
}
else
{
lean_dec_ref(v_preDefs_666_);
return v___x_677_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Mutual_addPreDefAttributes___boxed(lean_object* v_preDefs_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lean_Elab_Mutual_addPreDefAttributes(v_preDefs_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_);
lean_dec(v_a_697_);
lean_dec_ref(v_a_696_);
lean_dec(v_a_695_);
lean_dec_ref(v_a_694_);
lean_dec(v_a_693_);
lean_dec_ref(v_a_692_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0(lean_object* v_declName_700_, uint8_t v_s_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
lean_object* v___x_709_; 
v___x_709_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___redArg(v_declName_700_, v_s_701_, v___y_705_, v___y_707_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0___boxed(lean_object* v_declName_710_, lean_object* v_s_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
uint8_t v_s_boxed_719_; lean_object* v_res_720_; 
v_s_boxed_719_ = lean_unbox(v_s_711_);
v_res_720_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__0_spec__0(v_declName_710_, v_s_boxed_719_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
lean_dec(v___y_717_);
lean_dec_ref(v___y_716_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3(lean_object* v_as_721_, size_t v_sz_722_, size_t v_i_723_, lean_object* v_b_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___redArg(v_as_721_, v_sz_722_, v_i_723_, v_b_724_, v___y_727_, v___y_728_, v___y_729_, v___y_730_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3___boxed(lean_object* v_as_733_, lean_object* v_sz_734_, lean_object* v_i_735_, lean_object* v_b_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
size_t v_sz_boxed_744_; size_t v_i_boxed_745_; lean_object* v_res_746_; 
v_sz_boxed_744_ = lean_unbox_usize(v_sz_734_);
lean_dec(v_sz_734_);
v_i_boxed_745_ = lean_unbox_usize(v_i_735_);
lean_dec(v_i_735_);
v_res_746_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__3(v_as_733_, v_sz_boxed_744_, v_i_boxed_745_, v_b_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec_ref(v_as_733_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4(lean_object* v_as_747_, size_t v_sz_748_, size_t v_i_749_, lean_object* v_b_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___redArg(v_as_747_, v_sz_748_, v_i_749_, v_b_750_, v___y_755_, v___y_756_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4___boxed(lean_object* v_as_759_, lean_object* v_sz_760_, lean_object* v_i_761_, lean_object* v_b_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
size_t v_sz_boxed_770_; size_t v_i_boxed_771_; lean_object* v_res_772_; 
v_sz_boxed_770_ = lean_unbox_usize(v_sz_760_);
lean_dec(v_sz_760_);
v_i_boxed_771_ = lean_unbox_usize(v_i_761_);
lean_dec(v_i_761_);
v_res_772_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Mutual_addPreDefAttributes_spec__4(v_as_759_, v_sz_boxed_770_, v_i_boxed_771_, v_b_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec_ref(v_as_759_);
return v_res_772_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Mutual(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Mutual(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Mutual(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Mutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Mutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Mutual(builtin);
}
#ifdef __cplusplus
}
#endif
