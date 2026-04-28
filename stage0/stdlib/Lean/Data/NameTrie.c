// Lean compiler output
// Module: Lean.Data.NameTrie
// Imports: public import Lean.Data.PrefixTree import Init.Data.Ord.String
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
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_PrefixTreeNode_empty(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_findLongestPrefix_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NamePart_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NamePart_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NamePart_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NamePart_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NamePart_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NamePart_str_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NamePart_str_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NamePart_num_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NamePart_num_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqNamePart_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqNamePart_beq___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instBEqNamePart___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instBEqNamePart___closed__0;
LEAN_EXPORT lean_object* l_Lean_instBEqNamePart;
static lean_once_cell_t l_Lean_instInhabitedNamePart_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedNamePart_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedNamePart_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedNamePart_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedNamePart_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedNamePart;
LEAN_EXPORT lean_object* l_Lean_instToStringNamePart___lam__0(lean_object*);
static lean_once_cell_t l_Lean_instToStringNamePart___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToStringNamePart___closed__0;
LEAN_EXPORT lean_object* l_Lean_instToStringNamePart;
LEAN_EXPORT uint8_t l_Lean_NamePart_cmp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NamePart_cmp___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_NamePart_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NamePart_lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_NameTrie_0__Lean_toKey_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_NameTrie_0__Lean_toKey_loop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_NameTrie_0__Lean_toKey(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_NameTrie_0__Lean_toKey___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0_spec__1___redArg(lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__1;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__2;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__4;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__5;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__6;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_insertEmpty___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_insert___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_insertEmpty___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_NameTrie_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_NameTrie_empty___closed__0;
static lean_once_cell_t l_Lean_NameTrie_empty___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_NameTrie_empty___closed__1;
LEAN_EXPORT lean_object* l_Lean_NameTrie_empty(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedNameTrie___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedNameTrie___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedNameTrie(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionNameTrie(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_find_x3f_loop___at___00Lean_NameTrie_find_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_find_x3f_loop___at___00Lean_NameTrie_find_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_find_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_find_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_find_x3f_loop___at___00Lean_NameTrie_find_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_find_x3f_loop___at___00Lean_NameTrie_find_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_findLongestPrefix_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_findLongestPrefix_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_findLongestPrefix_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_findLongestPrefix_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_foldMatchingM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_foldMatchingM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_foldMatchingM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_foldMatchingM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_NameTrie_foldM___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_NameTrie_foldM___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_NameTrie_foldM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_foldM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_forMatchingM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_forMatchingM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_forMatchingM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_forMatchingM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_forMatchingM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_NameTrie_matchingToArray___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_NameTrie_matchingToArray___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_NameTrie_matchingToArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_matchingToArray___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_matchingToArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_matchingToArray___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameTrie_toArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NamePart_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NamePart_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_NamePart_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_NamePart_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_s_8_; lean_object* v___x_9_; 
v_s_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_s_8_);
lean_dec_ref(v_t_6_);
v___x_9_ = lean_apply_1(v_k_7_, v_s_8_);
return v___x_9_;
}
else
{
lean_object* v_n_10_; lean_object* v___x_11_; 
v_n_10_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_n_10_);
lean_dec_ref(v_t_6_);
v___x_11_ = lean_apply_1(v_k_7_, v_n_10_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NamePart_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_NamePart_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_NamePart_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_NamePart_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_NamePart_str_elim___redArg(lean_object* v_t_24_, lean_object* v_str_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lean_NamePart_ctorElim___redArg(v_t_24_, v_str_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_NamePart_str_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_str_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_NamePart_ctorElim___redArg(v_t_28_, v_str_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_NamePart_num_elim___redArg(lean_object* v_t_32_, lean_object* v_num_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_NamePart_ctorElim___redArg(v_t_32_, v_num_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_NamePart_num_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_num_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_NamePart_ctorElim___redArg(v_t_36_, v_num_38_);
return v___x_39_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqNamePart_beq(lean_object* v_x_40_, lean_object* v_x_41_){
_start:
{
if (lean_obj_tag(v_x_40_) == 0)
{
if (lean_obj_tag(v_x_41_) == 0)
{
lean_object* v_s_42_; lean_object* v_s_43_; uint8_t v___x_44_; 
v_s_42_ = lean_ctor_get(v_x_40_, 0);
v_s_43_ = lean_ctor_get(v_x_41_, 0);
v___x_44_ = lean_string_dec_eq(v_s_42_, v_s_43_);
return v___x_44_;
}
else
{
uint8_t v___x_45_; 
v___x_45_ = 0;
return v___x_45_;
}
}
else
{
if (lean_obj_tag(v_x_41_) == 1)
{
lean_object* v_n_46_; lean_object* v_n_47_; uint8_t v___x_48_; 
v_n_46_ = lean_ctor_get(v_x_40_, 0);
v_n_47_ = lean_ctor_get(v_x_41_, 0);
v___x_48_ = lean_nat_dec_eq(v_n_46_, v_n_47_);
return v___x_48_;
}
else
{
uint8_t v___x_49_; 
v___x_49_ = 0;
return v___x_49_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqNamePart_beq___boxed(lean_object* v_x_50_, lean_object* v_x_51_){
_start:
{
uint8_t v_res_52_; lean_object* v_r_53_; 
v_res_52_ = l_Lean_instBEqNamePart_beq(v_x_50_, v_x_51_);
lean_dec_ref(v_x_51_);
lean_dec_ref(v_x_50_);
v_r_53_ = lean_box(v_res_52_);
return v_r_53_;
}
}
static lean_object* _init_l_Lean_instBEqNamePart___closed__0(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_alloc_closure((void*)(l_Lean_instBEqNamePart_beq___boxed), 2, 0);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_instBEqNamePart(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_obj_once(&l_Lean_instBEqNamePart___closed__0, &l_Lean_instBEqNamePart___closed__0_once, _init_l_Lean_instBEqNamePart___closed__0);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_instInhabitedNamePart_default___closed__0(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_mk_string_unchecked("", 0, 0);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_instInhabitedNamePart_default___closed__1(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_obj_once(&l_Lean_instInhabitedNamePart_default___closed__0, &l_Lean_instInhabitedNamePart_default___closed__0_once, _init_l_Lean_instInhabitedNamePart_default___closed__0);
v___x_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_instInhabitedNamePart_default(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_obj_once(&l_Lean_instInhabitedNamePart_default___closed__1, &l_Lean_instInhabitedNamePart_default___closed__1_once, _init_l_Lean_instInhabitedNamePart_default___closed__1);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_instInhabitedNamePart(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lean_instInhabitedNamePart_default;
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToStringNamePart___lam__0(lean_object* v_x_61_){
_start:
{
if (lean_obj_tag(v_x_61_) == 0)
{
lean_object* v_s_62_; 
v_s_62_ = lean_ctor_get(v_x_61_, 0);
lean_inc_ref(v_s_62_);
lean_dec_ref(v_x_61_);
return v_s_62_;
}
else
{
lean_object* v_n_63_; lean_object* v___x_64_; 
v_n_63_ = lean_ctor_get(v_x_61_, 0);
lean_inc(v_n_63_);
lean_dec_ref(v_x_61_);
v___x_64_ = l_Nat_reprFast(v_n_63_);
return v___x_64_;
}
}
}
static lean_object* _init_l_Lean_instToStringNamePart___closed__0(void){
_start:
{
lean_object* v___f_65_; 
v___f_65_ = lean_alloc_closure((void*)(l_Lean_instToStringNamePart___lam__0), 1, 0);
return v___f_65_;
}
}
static lean_object* _init_l_Lean_instToStringNamePart(void){
_start:
{
lean_object* v___f_66_; 
v___f_66_ = lean_obj_once(&l_Lean_instToStringNamePart___closed__0, &l_Lean_instToStringNamePart___closed__0_once, _init_l_Lean_instToStringNamePart___closed__0);
return v___f_66_;
}
}
LEAN_EXPORT uint8_t l_Lean_NamePart_cmp(lean_object* v_x_67_, lean_object* v_x_68_){
_start:
{
if (lean_obj_tag(v_x_67_) == 0)
{
if (lean_obj_tag(v_x_68_) == 0)
{
lean_object* v_s_69_; lean_object* v_s_70_; uint8_t v___x_71_; 
v_s_69_ = lean_ctor_get(v_x_67_, 0);
v_s_70_ = lean_ctor_get(v_x_68_, 0);
v___x_71_ = lean_string_dec_lt(v_s_69_, v_s_70_);
if (v___x_71_ == 0)
{
uint8_t v___x_72_; 
v___x_72_ = lean_string_dec_eq(v_s_69_, v_s_70_);
if (v___x_72_ == 0)
{
uint8_t v___x_73_; 
v___x_73_ = 2;
return v___x_73_;
}
else
{
uint8_t v___x_74_; 
v___x_74_ = 1;
return v___x_74_;
}
}
else
{
uint8_t v___x_75_; 
v___x_75_ = 0;
return v___x_75_;
}
}
else
{
uint8_t v___x_76_; 
v___x_76_ = 2;
return v___x_76_;
}
}
else
{
if (lean_obj_tag(v_x_68_) == 0)
{
uint8_t v___x_77_; 
v___x_77_ = 0;
return v___x_77_;
}
else
{
lean_object* v_n_78_; lean_object* v_n_79_; uint8_t v___x_80_; 
v_n_78_ = lean_ctor_get(v_x_67_, 0);
v_n_79_ = lean_ctor_get(v_x_68_, 0);
v___x_80_ = lean_nat_dec_lt(v_n_78_, v_n_79_);
if (v___x_80_ == 0)
{
uint8_t v___x_81_; 
v___x_81_ = lean_nat_dec_eq(v_n_78_, v_n_79_);
if (v___x_81_ == 0)
{
uint8_t v___x_82_; 
v___x_82_ = 2;
return v___x_82_;
}
else
{
uint8_t v___x_83_; 
v___x_83_ = 1;
return v___x_83_;
}
}
else
{
uint8_t v___x_84_; 
v___x_84_ = 0;
return v___x_84_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NamePart_cmp___boxed(lean_object* v_x_85_, lean_object* v_x_86_){
_start:
{
uint8_t v_res_87_; lean_object* v_r_88_; 
v_res_87_ = l_Lean_NamePart_cmp(v_x_85_, v_x_86_);
lean_dec_ref(v_x_86_);
lean_dec_ref(v_x_85_);
v_r_88_ = lean_box(v_res_87_);
return v_r_88_;
}
}
LEAN_EXPORT uint8_t l_Lean_NamePart_lt(lean_object* v_x_89_, lean_object* v_x_90_){
_start:
{
if (lean_obj_tag(v_x_89_) == 0)
{
if (lean_obj_tag(v_x_90_) == 0)
{
lean_object* v_s_91_; lean_object* v_s_92_; uint8_t v___x_93_; 
v_s_91_ = lean_ctor_get(v_x_89_, 0);
v_s_92_ = lean_ctor_get(v_x_90_, 0);
v___x_93_ = lean_string_dec_lt(v_s_91_, v_s_92_);
return v___x_93_;
}
else
{
uint8_t v___x_94_; 
v___x_94_ = 0;
return v___x_94_;
}
}
else
{
if (lean_obj_tag(v_x_90_) == 0)
{
uint8_t v___x_95_; 
v___x_95_ = 1;
return v___x_95_;
}
else
{
lean_object* v_n_96_; lean_object* v_n_97_; uint8_t v___x_98_; 
v_n_96_ = lean_ctor_get(v_x_89_, 0);
v_n_97_ = lean_ctor_get(v_x_90_, 0);
v___x_98_ = lean_nat_dec_lt(v_n_96_, v_n_97_);
return v___x_98_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NamePart_lt___boxed(lean_object* v_x_99_, lean_object* v_x_100_){
_start:
{
uint8_t v_res_101_; lean_object* v_r_102_; 
v_res_101_ = l_Lean_NamePart_lt(v_x_99_, v_x_100_);
lean_dec_ref(v_x_100_);
lean_dec_ref(v_x_99_);
v_r_102_ = lean_box(v_res_101_);
return v_r_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_NameTrie_0__Lean_toKey_loop(lean_object* v_x_103_, lean_object* v_x_104_){
_start:
{
switch(lean_obj_tag(v_x_103_))
{
case 0:
{
return v_x_104_;
}
case 1:
{
lean_object* v_pre_105_; lean_object* v_str_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v_pre_105_ = lean_ctor_get(v_x_103_, 0);
v_str_106_ = lean_ctor_get(v_x_103_, 1);
lean_inc_ref(v_str_106_);
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v_str_106_);
v___x_108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v_x_104_);
v_x_103_ = v_pre_105_;
v_x_104_ = v___x_108_;
goto _start;
}
default: 
{
lean_object* v_pre_110_; lean_object* v_i_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v_pre_110_ = lean_ctor_get(v_x_103_, 0);
v_i_111_ = lean_ctor_get(v_x_103_, 1);
lean_inc(v_i_111_);
v___x_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_112_, 0, v_i_111_);
v___x_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v_x_104_);
v_x_103_ = v_pre_110_;
v_x_104_ = v___x_113_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_NameTrie_0__Lean_toKey_loop___boxed(lean_object* v_x_115_, lean_object* v_x_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l___private_Lean_Data_NameTrie_0__Lean_toKey_loop(v_x_115_, v_x_116_);
lean_dec(v_x_115_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_NameTrie_0__Lean_toKey(lean_object* v_n_118_){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_box(0);
v___x_120_ = l___private_Lean_Data_NameTrie_0__Lean_toKey_loop(v_n_118_, v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_NameTrie_0__Lean_toKey___boxed(lean_object* v_n_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l___private_Lean_Data_NameTrie_0__Lean_toKey(v_n_121_);
lean_dec(v_n_121_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_123_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = lean_box(1);
v___x_125_ = lean_panic_fn_borrowed(v___x_124_, v_msg_123_);
return v___x_125_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_mk_string_unchecked("Std.Data.DTreeMap.Internal.Balancing", 36, 36);
return v___x_126_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lean_mk_string_unchecked("Std.DTreeMap.Internal.Impl.balanceL!", 36, 36);
return v___x_127_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lean_mk_string_unchecked("balanceL! input was not balanced", 32, 32);
return v___x_128_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_129_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__2, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__2_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__2);
v___x_130_ = lean_unsigned_to_nat(35u);
v___x_131_ = lean_unsigned_to_nat(182u);
v___x_132_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__1, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__1_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__1);
v___x_133_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0);
v___x_134_ = l_mkPanicMessageWithDecl(v___x_133_, v___x_132_, v___x_131_, v___x_130_, v___x_129_);
return v___x_134_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_135_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__2, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__2_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__2);
v___x_136_ = lean_unsigned_to_nat(21u);
v___x_137_ = lean_unsigned_to_nat(183u);
v___x_138_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__1, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__1_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__1);
v___x_139_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0);
v___x_140_ = l_mkPanicMessageWithDecl(v___x_139_, v___x_138_, v___x_137_, v___x_136_, v___x_135_);
return v___x_140_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_mk_string_unchecked("Std.DTreeMap.Internal.Impl.balanceR!", 36, 36);
return v___x_141_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lean_mk_string_unchecked("balanceR! input was not balanced", 32, 32);
return v___x_142_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_143_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__6, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__6_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__6);
v___x_144_ = lean_unsigned_to_nat(35u);
v___x_145_ = lean_unsigned_to_nat(276u);
v___x_146_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__5, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__5_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__5);
v___x_147_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0);
v___x_148_ = l_mkPanicMessageWithDecl(v___x_147_, v___x_146_, v___x_145_, v___x_144_, v___x_143_);
return v___x_148_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_149_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__6, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__6_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__6);
v___x_150_ = lean_unsigned_to_nat(21u);
v___x_151_ = lean_unsigned_to_nat(277u);
v___x_152_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__5, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__5_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__5);
v___x_153_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__0);
v___x_154_ = l_mkPanicMessageWithDecl(v___x_153_, v___x_152_, v___x_151_, v___x_150_, v___x_149_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg(lean_object* v_k_155_, lean_object* v_v_156_, lean_object* v_t_157_){
_start:
{
if (lean_obj_tag(v_t_157_) == 0)
{
lean_object* v_size_158_; lean_object* v_k_159_; lean_object* v_v_160_; lean_object* v_l_161_; lean_object* v_r_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_518_; 
v_size_158_ = lean_ctor_get(v_t_157_, 0);
v_k_159_ = lean_ctor_get(v_t_157_, 1);
v_v_160_ = lean_ctor_get(v_t_157_, 2);
v_l_161_ = lean_ctor_get(v_t_157_, 3);
v_r_162_ = lean_ctor_get(v_t_157_, 4);
v_isSharedCheck_518_ = !lean_is_exclusive(v_t_157_);
if (v_isSharedCheck_518_ == 0)
{
v___x_164_ = v_t_157_;
v_isShared_165_ = v_isSharedCheck_518_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_r_162_);
lean_inc(v_l_161_);
lean_inc(v_v_160_);
lean_inc(v_k_159_);
lean_inc(v_size_158_);
lean_dec(v_t_157_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_518_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
uint8_t v___x_166_; 
v___x_166_ = l_Lean_NamePart_cmp(v_k_155_, v_k_159_);
switch(v___x_166_)
{
case 0:
{
lean_object* v___x_167_; 
lean_dec(v_size_158_);
v___x_167_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg(v_k_155_, v_v_156_, v_l_161_);
if (lean_obj_tag(v_r_162_) == 0)
{
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_size_168_; lean_object* v_size_169_; lean_object* v_k_170_; lean_object* v_v_171_; lean_object* v_l_172_; lean_object* v_r_173_; lean_object* v___x_174_; lean_object* v___x_175_; uint8_t v___x_176_; 
v_size_168_ = lean_ctor_get(v_r_162_, 0);
v_size_169_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_size_169_);
v_k_170_ = lean_ctor_get(v___x_167_, 1);
lean_inc(v_k_170_);
v_v_171_ = lean_ctor_get(v___x_167_, 2);
lean_inc(v_v_171_);
v_l_172_ = lean_ctor_get(v___x_167_, 3);
lean_inc(v_l_172_);
v_r_173_ = lean_ctor_get(v___x_167_, 4);
lean_inc(v_r_173_);
v___x_174_ = lean_unsigned_to_nat(3u);
v___x_175_ = lean_nat_mul(v___x_174_, v_size_168_);
v___x_176_ = lean_nat_dec_lt(v___x_175_, v_size_169_);
lean_dec(v___x_175_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_181_; 
lean_dec(v_r_173_);
lean_dec(v_l_172_);
lean_dec(v_v_171_);
lean_dec(v_k_170_);
v___x_177_ = lean_unsigned_to_nat(1u);
v___x_178_ = lean_nat_add(v___x_177_, v_size_169_);
lean_dec(v_size_169_);
v___x_179_ = lean_nat_add(v___x_178_, v_size_168_);
lean_dec(v___x_178_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 3, v___x_167_);
lean_ctor_set(v___x_164_, 0, v___x_179_);
v___x_181_ = v___x_164_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_179_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_182_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_182_, 3, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_182_, 4, v_r_162_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
else
{
lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_254_; 
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_254_ == 0)
{
lean_object* v_unused_255_; lean_object* v_unused_256_; lean_object* v_unused_257_; lean_object* v_unused_258_; lean_object* v_unused_259_; 
v_unused_255_ = lean_ctor_get(v___x_167_, 4);
lean_dec(v_unused_255_);
v_unused_256_ = lean_ctor_get(v___x_167_, 3);
lean_dec(v_unused_256_);
v_unused_257_ = lean_ctor_get(v___x_167_, 2);
lean_dec(v_unused_257_);
v_unused_258_ = lean_ctor_get(v___x_167_, 1);
lean_dec(v_unused_258_);
v_unused_259_ = lean_ctor_get(v___x_167_, 0);
lean_dec(v_unused_259_);
v___x_184_ = v___x_167_;
v_isShared_185_ = v_isSharedCheck_254_;
goto v_resetjp_183_;
}
else
{
lean_dec(v___x_167_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_254_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
if (lean_obj_tag(v_l_172_) == 0)
{
if (lean_obj_tag(v_r_173_) == 0)
{
lean_object* v_size_186_; lean_object* v_size_187_; lean_object* v_k_188_; lean_object* v_v_189_; lean_object* v_l_190_; lean_object* v_r_191_; lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v_size_186_ = lean_ctor_get(v_l_172_, 0);
v_size_187_ = lean_ctor_get(v_r_173_, 0);
v_k_188_ = lean_ctor_get(v_r_173_, 1);
v_v_189_ = lean_ctor_get(v_r_173_, 2);
v_l_190_ = lean_ctor_get(v_r_173_, 3);
v_r_191_ = lean_ctor_get(v_r_173_, 4);
v___x_192_ = lean_unsigned_to_nat(2u);
v___x_193_ = lean_nat_mul(v___x_192_, v_size_186_);
v___x_194_ = lean_nat_dec_lt(v_size_187_, v___x_193_);
lean_dec(v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_224_; 
lean_inc(v_r_191_);
lean_inc(v_l_190_);
lean_inc(v_v_189_);
lean_inc(v_k_188_);
v_isSharedCheck_224_ = !lean_is_exclusive(v_r_173_);
if (v_isSharedCheck_224_ == 0)
{
lean_object* v_unused_225_; lean_object* v_unused_226_; lean_object* v_unused_227_; lean_object* v_unused_228_; lean_object* v_unused_229_; 
v_unused_225_ = lean_ctor_get(v_r_173_, 4);
lean_dec(v_unused_225_);
v_unused_226_ = lean_ctor_get(v_r_173_, 3);
lean_dec(v_unused_226_);
v_unused_227_ = lean_ctor_get(v_r_173_, 2);
lean_dec(v_unused_227_);
v_unused_228_ = lean_ctor_get(v_r_173_, 1);
lean_dec(v_unused_228_);
v_unused_229_ = lean_ctor_get(v_r_173_, 0);
lean_dec(v_unused_229_);
v___x_196_ = v_r_173_;
v_isShared_197_ = v_isSharedCheck_224_;
goto v_resetjp_195_;
}
else
{
lean_dec(v_r_173_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_224_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___y_202_; lean_object* v___y_203_; lean_object* v___y_204_; lean_object* v___x_212_; lean_object* v___y_214_; 
v___x_198_ = lean_unsigned_to_nat(1u);
v___x_199_ = lean_nat_add(v___x_198_, v_size_169_);
lean_dec(v_size_169_);
v___x_200_ = lean_nat_add(v___x_199_, v_size_168_);
lean_dec(v___x_199_);
v___x_212_ = lean_nat_add(v___x_198_, v_size_186_);
if (lean_obj_tag(v_l_190_) == 0)
{
lean_object* v_size_222_; 
v_size_222_ = lean_ctor_get(v_l_190_, 0);
lean_inc(v_size_222_);
v___y_214_ = v_size_222_;
goto v___jp_213_;
}
else
{
lean_object* v___x_223_; 
v___x_223_ = lean_unsigned_to_nat(0u);
v___y_214_ = v___x_223_;
goto v___jp_213_;
}
v___jp_201_:
{
lean_object* v___x_205_; lean_object* v___x_207_; 
v___x_205_ = lean_nat_add(v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec(v___y_203_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 4, v_r_162_);
lean_ctor_set(v___x_196_, 3, v_r_191_);
lean_ctor_set(v___x_196_, 2, v_v_160_);
lean_ctor_set(v___x_196_, 1, v_k_159_);
lean_ctor_set(v___x_196_, 0, v___x_205_);
v___x_207_ = v___x_196_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_205_);
lean_ctor_set(v_reuseFailAlloc_211_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_211_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_211_, 3, v_r_191_);
lean_ctor_set(v_reuseFailAlloc_211_, 4, v_r_162_);
v___x_207_ = v_reuseFailAlloc_211_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
lean_object* v___x_209_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 4, v___x_207_);
lean_ctor_set(v___x_184_, 3, v___y_202_);
lean_ctor_set(v___x_184_, 2, v_v_189_);
lean_ctor_set(v___x_184_, 1, v_k_188_);
lean_ctor_set(v___x_184_, 0, v___x_200_);
v___x_209_ = v___x_184_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_200_);
lean_ctor_set(v_reuseFailAlloc_210_, 1, v_k_188_);
lean_ctor_set(v_reuseFailAlloc_210_, 2, v_v_189_);
lean_ctor_set(v_reuseFailAlloc_210_, 3, v___y_202_);
lean_ctor_set(v_reuseFailAlloc_210_, 4, v___x_207_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
v___jp_213_:
{
lean_object* v___x_215_; lean_object* v___x_217_; 
v___x_215_ = lean_nat_add(v___x_212_, v___y_214_);
lean_dec(v___y_214_);
lean_dec(v___x_212_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v_l_190_);
lean_ctor_set(v___x_164_, 3, v_l_172_);
lean_ctor_set(v___x_164_, 2, v_v_171_);
lean_ctor_set(v___x_164_, 1, v_k_170_);
lean_ctor_set(v___x_164_, 0, v___x_215_);
v___x_217_ = v___x_164_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_215_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v_k_170_);
lean_ctor_set(v_reuseFailAlloc_221_, 2, v_v_171_);
lean_ctor_set(v_reuseFailAlloc_221_, 3, v_l_172_);
lean_ctor_set(v_reuseFailAlloc_221_, 4, v_l_190_);
v___x_217_ = v_reuseFailAlloc_221_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
lean_object* v___x_218_; 
v___x_218_ = lean_nat_add(v___x_198_, v_size_168_);
if (lean_obj_tag(v_r_191_) == 0)
{
lean_object* v_size_219_; 
v_size_219_ = lean_ctor_get(v_r_191_, 0);
lean_inc(v_size_219_);
v___y_202_ = v___x_217_;
v___y_203_ = v___x_218_;
v___y_204_ = v_size_219_;
goto v___jp_201_;
}
else
{
lean_object* v___x_220_; 
v___x_220_ = lean_unsigned_to_nat(0u);
v___y_202_ = v___x_217_;
v___y_203_ = v___x_218_;
v___y_204_ = v___x_220_;
goto v___jp_201_;
}
}
}
}
}
else
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
lean_del_object(v___x_164_);
v___x_230_ = lean_unsigned_to_nat(1u);
v___x_231_ = lean_nat_add(v___x_230_, v_size_169_);
lean_dec(v_size_169_);
v___x_232_ = lean_nat_add(v___x_231_, v_size_168_);
lean_dec(v___x_231_);
v___x_233_ = lean_nat_add(v___x_230_, v_size_168_);
v___x_234_ = lean_nat_add(v___x_233_, v_size_187_);
lean_dec(v___x_233_);
lean_inc_ref(v_r_162_);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 4, v_r_162_);
lean_ctor_set(v___x_184_, 3, v_r_173_);
lean_ctor_set(v___x_184_, 2, v_v_160_);
lean_ctor_set(v___x_184_, 1, v_k_159_);
lean_ctor_set(v___x_184_, 0, v___x_234_);
v___x_236_ = v___x_184_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v___x_234_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_249_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_249_, 3, v_r_173_);
lean_ctor_set(v_reuseFailAlloc_249_, 4, v_r_162_);
v___x_236_ = v_reuseFailAlloc_249_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_243_; 
v_isSharedCheck_243_ = !lean_is_exclusive(v_r_162_);
if (v_isSharedCheck_243_ == 0)
{
lean_object* v_unused_244_; lean_object* v_unused_245_; lean_object* v_unused_246_; lean_object* v_unused_247_; lean_object* v_unused_248_; 
v_unused_244_ = lean_ctor_get(v_r_162_, 4);
lean_dec(v_unused_244_);
v_unused_245_ = lean_ctor_get(v_r_162_, 3);
lean_dec(v_unused_245_);
v_unused_246_ = lean_ctor_get(v_r_162_, 2);
lean_dec(v_unused_246_);
v_unused_247_ = lean_ctor_get(v_r_162_, 1);
lean_dec(v_unused_247_);
v_unused_248_ = lean_ctor_get(v_r_162_, 0);
lean_dec(v_unused_248_);
v___x_238_ = v_r_162_;
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
else
{
lean_dec(v_r_162_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 4, v___x_236_);
lean_ctor_set(v___x_238_, 3, v_l_172_);
lean_ctor_set(v___x_238_, 2, v_v_171_);
lean_ctor_set(v___x_238_, 1, v_k_170_);
lean_ctor_set(v___x_238_, 0, v___x_232_);
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v_k_170_);
lean_ctor_set(v_reuseFailAlloc_242_, 2, v_v_171_);
lean_ctor_set(v_reuseFailAlloc_242_, 3, v_l_172_);
lean_ctor_set(v_reuseFailAlloc_242_, 4, v___x_236_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
else
{
lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec_ref(v_l_172_);
lean_del_object(v___x_184_);
lean_dec(v_v_171_);
lean_dec(v_k_170_);
lean_dec(v_size_169_);
lean_dec_ref(v_r_162_);
lean_del_object(v___x_164_);
lean_dec(v_v_160_);
lean_dec(v_k_159_);
v___x_250_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__3);
v___x_251_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0_spec__1___redArg(v___x_250_);
return v___x_251_;
}
}
else
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_del_object(v___x_184_);
lean_dec(v_r_173_);
lean_dec(v_v_171_);
lean_dec(v_k_170_);
lean_dec(v_size_169_);
lean_dec_ref(v_r_162_);
lean_del_object(v___x_164_);
lean_dec(v_v_160_);
lean_dec(v_k_159_);
v___x_252_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__4);
v___x_253_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0_spec__1___redArg(v___x_252_);
return v___x_253_;
}
}
}
}
else
{
lean_object* v_size_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_264_; 
v_size_260_ = lean_ctor_get(v_r_162_, 0);
v___x_261_ = lean_unsigned_to_nat(1u);
v___x_262_ = lean_nat_add(v___x_261_, v_size_260_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 3, v___x_167_);
lean_ctor_set(v___x_164_, 0, v___x_262_);
v___x_264_ = v___x_164_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_265_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_265_, 3, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_265_, 4, v_r_162_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
else
{
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_l_266_; 
v_l_266_ = lean_ctor_get(v___x_167_, 3);
lean_inc(v_l_266_);
if (lean_obj_tag(v_l_266_) == 0)
{
lean_object* v_r_267_; 
v_r_267_ = lean_ctor_get(v___x_167_, 4);
lean_inc(v_r_267_);
if (lean_obj_tag(v_r_267_) == 0)
{
lean_object* v_size_268_; lean_object* v_k_269_; lean_object* v_v_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_284_; 
v_size_268_ = lean_ctor_get(v___x_167_, 0);
v_k_269_ = lean_ctor_get(v___x_167_, 1);
v_v_270_ = lean_ctor_get(v___x_167_, 2);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_284_ == 0)
{
lean_object* v_unused_285_; lean_object* v_unused_286_; 
v_unused_285_ = lean_ctor_get(v___x_167_, 4);
lean_dec(v_unused_285_);
v_unused_286_ = lean_ctor_get(v___x_167_, 3);
lean_dec(v_unused_286_);
v___x_272_ = v___x_167_;
v_isShared_273_ = v_isSharedCheck_284_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_v_270_);
lean_inc(v_k_269_);
lean_inc(v_size_268_);
lean_dec(v___x_167_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_284_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v_size_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_279_; 
v_size_274_ = lean_ctor_get(v_r_267_, 0);
v___x_275_ = lean_unsigned_to_nat(1u);
v___x_276_ = lean_nat_add(v___x_275_, v_size_268_);
lean_dec(v_size_268_);
v___x_277_ = lean_nat_add(v___x_275_, v_size_274_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 4, v_r_162_);
lean_ctor_set(v___x_272_, 3, v_r_267_);
lean_ctor_set(v___x_272_, 2, v_v_160_);
lean_ctor_set(v___x_272_, 1, v_k_159_);
lean_ctor_set(v___x_272_, 0, v___x_277_);
v___x_279_ = v___x_272_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_277_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_283_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_283_, 3, v_r_267_);
lean_ctor_set(v_reuseFailAlloc_283_, 4, v_r_162_);
v___x_279_ = v_reuseFailAlloc_283_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
lean_object* v___x_281_; 
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v___x_279_);
lean_ctor_set(v___x_164_, 3, v_l_266_);
lean_ctor_set(v___x_164_, 2, v_v_270_);
lean_ctor_set(v___x_164_, 1, v_k_269_);
lean_ctor_set(v___x_164_, 0, v___x_276_);
v___x_281_ = v___x_164_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_k_269_);
lean_ctor_set(v_reuseFailAlloc_282_, 2, v_v_270_);
lean_ctor_set(v_reuseFailAlloc_282_, 3, v_l_266_);
lean_ctor_set(v_reuseFailAlloc_282_, 4, v___x_279_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
else
{
lean_object* v_k_287_; lean_object* v_v_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_300_; 
v_k_287_ = lean_ctor_get(v___x_167_, 1);
v_v_288_ = lean_ctor_get(v___x_167_, 2);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_300_ == 0)
{
lean_object* v_unused_301_; lean_object* v_unused_302_; lean_object* v_unused_303_; 
v_unused_301_ = lean_ctor_get(v___x_167_, 4);
lean_dec(v_unused_301_);
v_unused_302_ = lean_ctor_get(v___x_167_, 3);
lean_dec(v_unused_302_);
v_unused_303_ = lean_ctor_get(v___x_167_, 0);
lean_dec(v_unused_303_);
v___x_290_ = v___x_167_;
v_isShared_291_ = v_isSharedCheck_300_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_v_288_);
lean_inc(v_k_287_);
lean_dec(v___x_167_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_300_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_295_; 
v___x_292_ = lean_unsigned_to_nat(3u);
v___x_293_ = lean_unsigned_to_nat(1u);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 3, v_r_267_);
lean_ctor_set(v___x_290_, 2, v_v_160_);
lean_ctor_set(v___x_290_, 1, v_k_159_);
lean_ctor_set(v___x_290_, 0, v___x_293_);
v___x_295_ = v___x_290_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_293_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_299_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_299_, 3, v_r_267_);
lean_ctor_set(v_reuseFailAlloc_299_, 4, v_r_267_);
v___x_295_ = v_reuseFailAlloc_299_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
lean_object* v___x_297_; 
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v___x_295_);
lean_ctor_set(v___x_164_, 3, v_l_266_);
lean_ctor_set(v___x_164_, 2, v_v_288_);
lean_ctor_set(v___x_164_, 1, v_k_287_);
lean_ctor_set(v___x_164_, 0, v___x_292_);
v___x_297_ = v___x_164_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v_k_287_);
lean_ctor_set(v_reuseFailAlloc_298_, 2, v_v_288_);
lean_ctor_set(v_reuseFailAlloc_298_, 3, v_l_266_);
lean_ctor_set(v_reuseFailAlloc_298_, 4, v___x_295_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
}
else
{
lean_object* v_r_304_; 
v_r_304_ = lean_ctor_get(v___x_167_, 4);
lean_inc(v_r_304_);
if (lean_obj_tag(v_r_304_) == 0)
{
lean_object* v_k_305_; lean_object* v_v_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_330_; 
v_k_305_ = lean_ctor_get(v___x_167_, 1);
v_v_306_ = lean_ctor_get(v___x_167_, 2);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_330_ == 0)
{
lean_object* v_unused_331_; lean_object* v_unused_332_; lean_object* v_unused_333_; 
v_unused_331_ = lean_ctor_get(v___x_167_, 4);
lean_dec(v_unused_331_);
v_unused_332_ = lean_ctor_get(v___x_167_, 3);
lean_dec(v_unused_332_);
v_unused_333_ = lean_ctor_get(v___x_167_, 0);
lean_dec(v_unused_333_);
v___x_308_ = v___x_167_;
v_isShared_309_ = v_isSharedCheck_330_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_v_306_);
lean_inc(v_k_305_);
lean_dec(v___x_167_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_330_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v_k_310_; lean_object* v_v_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_326_; 
v_k_310_ = lean_ctor_get(v_r_304_, 1);
v_v_311_ = lean_ctor_get(v_r_304_, 2);
v_isSharedCheck_326_ = !lean_is_exclusive(v_r_304_);
if (v_isSharedCheck_326_ == 0)
{
lean_object* v_unused_327_; lean_object* v_unused_328_; lean_object* v_unused_329_; 
v_unused_327_ = lean_ctor_get(v_r_304_, 4);
lean_dec(v_unused_327_);
v_unused_328_ = lean_ctor_get(v_r_304_, 3);
lean_dec(v_unused_328_);
v_unused_329_ = lean_ctor_get(v_r_304_, 0);
lean_dec(v_unused_329_);
v___x_313_ = v_r_304_;
v_isShared_314_ = v_isSharedCheck_326_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_v_311_);
lean_inc(v_k_310_);
lean_dec(v_r_304_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_326_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_318_; 
v___x_315_ = lean_unsigned_to_nat(3u);
v___x_316_ = lean_unsigned_to_nat(1u);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 4, v_l_266_);
lean_ctor_set(v___x_313_, 3, v_l_266_);
lean_ctor_set(v___x_313_, 2, v_v_306_);
lean_ctor_set(v___x_313_, 1, v_k_305_);
lean_ctor_set(v___x_313_, 0, v___x_316_);
v___x_318_ = v___x_313_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_316_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_k_305_);
lean_ctor_set(v_reuseFailAlloc_325_, 2, v_v_306_);
lean_ctor_set(v_reuseFailAlloc_325_, 3, v_l_266_);
lean_ctor_set(v_reuseFailAlloc_325_, 4, v_l_266_);
v___x_318_ = v_reuseFailAlloc_325_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_320_; 
if (v_isShared_309_ == 0)
{
lean_ctor_set(v___x_308_, 4, v_l_266_);
lean_ctor_set(v___x_308_, 2, v_v_160_);
lean_ctor_set(v___x_308_, 1, v_k_159_);
lean_ctor_set(v___x_308_, 0, v___x_316_);
v___x_320_ = v___x_308_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_316_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_324_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_324_, 3, v_l_266_);
lean_ctor_set(v_reuseFailAlloc_324_, 4, v_l_266_);
v___x_320_ = v_reuseFailAlloc_324_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
lean_object* v___x_322_; 
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v___x_320_);
lean_ctor_set(v___x_164_, 3, v___x_318_);
lean_ctor_set(v___x_164_, 2, v_v_311_);
lean_ctor_set(v___x_164_, 1, v_k_310_);
lean_ctor_set(v___x_164_, 0, v___x_315_);
v___x_322_ = v___x_164_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v___x_315_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_323_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_323_, 3, v___x_318_);
lean_ctor_set(v_reuseFailAlloc_323_, 4, v___x_320_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
}
}
else
{
lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_334_ = lean_unsigned_to_nat(2u);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v_r_304_);
lean_ctor_set(v___x_164_, 3, v___x_167_);
lean_ctor_set(v___x_164_, 0, v___x_334_);
v___x_336_ = v___x_164_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_334_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_337_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_337_, 3, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_337_, 4, v_r_304_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
else
{
lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_338_ = lean_unsigned_to_nat(1u);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v___x_167_);
lean_ctor_set(v___x_164_, 3, v___x_167_);
lean_ctor_set(v___x_164_, 0, v___x_338_);
v___x_340_ = v___x_164_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_341_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_341_, 3, v___x_167_);
lean_ctor_set(v_reuseFailAlloc_341_, 4, v___x_167_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
case 1:
{
lean_object* v___x_343_; 
lean_dec(v_v_160_);
lean_dec(v_k_159_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 2, v_v_156_);
lean_ctor_set(v___x_164_, 1, v_k_155_);
v___x_343_ = v___x_164_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_size_158_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v_k_155_);
lean_ctor_set(v_reuseFailAlloc_344_, 2, v_v_156_);
lean_ctor_set(v_reuseFailAlloc_344_, 3, v_l_161_);
lean_ctor_set(v_reuseFailAlloc_344_, 4, v_r_162_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
default: 
{
lean_object* v___x_345_; 
lean_dec(v_size_158_);
v___x_345_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg(v_k_155_, v_v_156_, v_r_162_);
if (lean_obj_tag(v_l_161_) == 0)
{
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_size_346_; lean_object* v_size_347_; lean_object* v_k_348_; lean_object* v_v_349_; lean_object* v_l_350_; lean_object* v_r_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v_size_346_ = lean_ctor_get(v_l_161_, 0);
v_size_347_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_size_347_);
v_k_348_ = lean_ctor_get(v___x_345_, 1);
lean_inc(v_k_348_);
v_v_349_ = lean_ctor_get(v___x_345_, 2);
lean_inc(v_v_349_);
v_l_350_ = lean_ctor_get(v___x_345_, 3);
lean_inc(v_l_350_);
v_r_351_ = lean_ctor_get(v___x_345_, 4);
lean_inc(v_r_351_);
v___x_352_ = lean_unsigned_to_nat(3u);
v___x_353_ = lean_nat_mul(v___x_352_, v_size_346_);
v___x_354_ = lean_nat_dec_lt(v___x_353_, v_size_347_);
lean_dec(v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_359_; 
lean_dec(v_r_351_);
lean_dec(v_l_350_);
lean_dec(v_v_349_);
lean_dec(v_k_348_);
v___x_355_ = lean_unsigned_to_nat(1u);
v___x_356_ = lean_nat_add(v___x_355_, v_size_346_);
v___x_357_ = lean_nat_add(v___x_356_, v_size_347_);
lean_dec(v_size_347_);
lean_dec(v___x_356_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v___x_345_);
lean_ctor_set(v___x_164_, 0, v___x_357_);
v___x_359_ = v___x_164_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_357_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_360_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_360_, 3, v_l_161_);
lean_ctor_set(v_reuseFailAlloc_360_, 4, v___x_345_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
else
{
lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_430_; 
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_430_ == 0)
{
lean_object* v_unused_431_; lean_object* v_unused_432_; lean_object* v_unused_433_; lean_object* v_unused_434_; lean_object* v_unused_435_; 
v_unused_431_ = lean_ctor_get(v___x_345_, 4);
lean_dec(v_unused_431_);
v_unused_432_ = lean_ctor_get(v___x_345_, 3);
lean_dec(v_unused_432_);
v_unused_433_ = lean_ctor_get(v___x_345_, 2);
lean_dec(v_unused_433_);
v_unused_434_ = lean_ctor_get(v___x_345_, 1);
lean_dec(v_unused_434_);
v_unused_435_ = lean_ctor_get(v___x_345_, 0);
lean_dec(v_unused_435_);
v___x_362_ = v___x_345_;
v_isShared_363_ = v_isSharedCheck_430_;
goto v_resetjp_361_;
}
else
{
lean_dec(v___x_345_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_430_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
if (lean_obj_tag(v_l_350_) == 0)
{
if (lean_obj_tag(v_r_351_) == 0)
{
lean_object* v_size_364_; lean_object* v_k_365_; lean_object* v_v_366_; lean_object* v_l_367_; lean_object* v_r_368_; lean_object* v_size_369_; lean_object* v___x_370_; lean_object* v___x_371_; uint8_t v___x_372_; 
v_size_364_ = lean_ctor_get(v_l_350_, 0);
v_k_365_ = lean_ctor_get(v_l_350_, 1);
v_v_366_ = lean_ctor_get(v_l_350_, 2);
v_l_367_ = lean_ctor_get(v_l_350_, 3);
v_r_368_ = lean_ctor_get(v_l_350_, 4);
v_size_369_ = lean_ctor_get(v_r_351_, 0);
v___x_370_ = lean_unsigned_to_nat(2u);
v___x_371_ = lean_nat_mul(v___x_370_, v_size_369_);
v___x_372_ = lean_nat_dec_lt(v_size_364_, v___x_371_);
lean_dec(v___x_371_);
if (v___x_372_ == 0)
{
lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_401_; 
lean_inc(v_r_368_);
lean_inc(v_l_367_);
lean_inc(v_v_366_);
lean_inc(v_k_365_);
v_isSharedCheck_401_ = !lean_is_exclusive(v_l_350_);
if (v_isSharedCheck_401_ == 0)
{
lean_object* v_unused_402_; lean_object* v_unused_403_; lean_object* v_unused_404_; lean_object* v_unused_405_; lean_object* v_unused_406_; 
v_unused_402_ = lean_ctor_get(v_l_350_, 4);
lean_dec(v_unused_402_);
v_unused_403_ = lean_ctor_get(v_l_350_, 3);
lean_dec(v_unused_403_);
v_unused_404_ = lean_ctor_get(v_l_350_, 2);
lean_dec(v_unused_404_);
v_unused_405_ = lean_ctor_get(v_l_350_, 1);
lean_dec(v_unused_405_);
v_unused_406_ = lean_ctor_get(v_l_350_, 0);
lean_dec(v_unused_406_);
v___x_374_ = v_l_350_;
v_isShared_375_ = v_isSharedCheck_401_;
goto v_resetjp_373_;
}
else
{
lean_dec(v_l_350_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_401_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___y_380_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v___y_391_; 
v___x_376_ = lean_unsigned_to_nat(1u);
v___x_377_ = lean_nat_add(v___x_376_, v_size_346_);
v___x_378_ = lean_nat_add(v___x_377_, v_size_347_);
lean_dec(v_size_347_);
if (lean_obj_tag(v_l_367_) == 0)
{
lean_object* v_size_399_; 
v_size_399_ = lean_ctor_get(v_l_367_, 0);
lean_inc(v_size_399_);
v___y_391_ = v_size_399_;
goto v___jp_390_;
}
else
{
lean_object* v___x_400_; 
v___x_400_ = lean_unsigned_to_nat(0u);
v___y_391_ = v___x_400_;
goto v___jp_390_;
}
v___jp_379_:
{
lean_object* v___x_383_; lean_object* v___x_385_; 
v___x_383_ = lean_nat_add(v___y_381_, v___y_382_);
lean_dec(v___y_382_);
lean_dec(v___y_381_);
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 4, v_r_351_);
lean_ctor_set(v___x_374_, 3, v_r_368_);
lean_ctor_set(v___x_374_, 2, v_v_349_);
lean_ctor_set(v___x_374_, 1, v_k_348_);
lean_ctor_set(v___x_374_, 0, v___x_383_);
v___x_385_ = v___x_374_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_383_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v_k_348_);
lean_ctor_set(v_reuseFailAlloc_389_, 2, v_v_349_);
lean_ctor_set(v_reuseFailAlloc_389_, 3, v_r_368_);
lean_ctor_set(v_reuseFailAlloc_389_, 4, v_r_351_);
v___x_385_ = v_reuseFailAlloc_389_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
lean_object* v___x_387_; 
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 4, v___x_385_);
lean_ctor_set(v___x_362_, 3, v___y_380_);
lean_ctor_set(v___x_362_, 2, v_v_366_);
lean_ctor_set(v___x_362_, 1, v_k_365_);
lean_ctor_set(v___x_362_, 0, v___x_378_);
v___x_387_ = v___x_362_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_378_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_388_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_388_, 3, v___y_380_);
lean_ctor_set(v_reuseFailAlloc_388_, 4, v___x_385_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
v___jp_390_:
{
lean_object* v___x_392_; lean_object* v___x_394_; 
v___x_392_ = lean_nat_add(v___x_377_, v___y_391_);
lean_dec(v___y_391_);
lean_dec(v___x_377_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v_l_367_);
lean_ctor_set(v___x_164_, 0, v___x_392_);
v___x_394_ = v___x_164_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v___x_392_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_398_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_398_, 3, v_l_161_);
lean_ctor_set(v_reuseFailAlloc_398_, 4, v_l_367_);
v___x_394_ = v_reuseFailAlloc_398_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
lean_object* v___x_395_; 
v___x_395_ = lean_nat_add(v___x_376_, v_size_369_);
if (lean_obj_tag(v_r_368_) == 0)
{
lean_object* v_size_396_; 
v_size_396_ = lean_ctor_get(v_r_368_, 0);
lean_inc(v_size_396_);
v___y_380_ = v___x_394_;
v___y_381_ = v___x_395_;
v___y_382_ = v_size_396_;
goto v___jp_379_;
}
else
{
lean_object* v___x_397_; 
v___x_397_ = lean_unsigned_to_nat(0u);
v___y_380_ = v___x_394_;
v___y_381_ = v___x_395_;
v___y_382_ = v___x_397_;
goto v___jp_379_;
}
}
}
}
}
else
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_412_; 
lean_del_object(v___x_164_);
v___x_407_ = lean_unsigned_to_nat(1u);
v___x_408_ = lean_nat_add(v___x_407_, v_size_346_);
v___x_409_ = lean_nat_add(v___x_408_, v_size_347_);
lean_dec(v_size_347_);
v___x_410_ = lean_nat_add(v___x_408_, v_size_364_);
lean_dec(v___x_408_);
lean_inc_ref(v_l_161_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 4, v_l_350_);
lean_ctor_set(v___x_362_, 3, v_l_161_);
lean_ctor_set(v___x_362_, 2, v_v_160_);
lean_ctor_set(v___x_362_, 1, v_k_159_);
lean_ctor_set(v___x_362_, 0, v___x_410_);
v___x_412_ = v___x_362_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_410_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_425_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_425_, 3, v_l_161_);
lean_ctor_set(v_reuseFailAlloc_425_, 4, v_l_350_);
v___x_412_ = v_reuseFailAlloc_425_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
v_isSharedCheck_419_ = !lean_is_exclusive(v_l_161_);
if (v_isSharedCheck_419_ == 0)
{
lean_object* v_unused_420_; lean_object* v_unused_421_; lean_object* v_unused_422_; lean_object* v_unused_423_; lean_object* v_unused_424_; 
v_unused_420_ = lean_ctor_get(v_l_161_, 4);
lean_dec(v_unused_420_);
v_unused_421_ = lean_ctor_get(v_l_161_, 3);
lean_dec(v_unused_421_);
v_unused_422_ = lean_ctor_get(v_l_161_, 2);
lean_dec(v_unused_422_);
v_unused_423_ = lean_ctor_get(v_l_161_, 1);
lean_dec(v_unused_423_);
v_unused_424_ = lean_ctor_get(v_l_161_, 0);
lean_dec(v_unused_424_);
v___x_414_ = v_l_161_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_dec(v_l_161_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 4, v_r_351_);
lean_ctor_set(v___x_414_, 3, v___x_412_);
lean_ctor_set(v___x_414_, 2, v_v_349_);
lean_ctor_set(v___x_414_, 1, v_k_348_);
lean_ctor_set(v___x_414_, 0, v___x_409_);
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v___x_409_);
lean_ctor_set(v_reuseFailAlloc_418_, 1, v_k_348_);
lean_ctor_set(v_reuseFailAlloc_418_, 2, v_v_349_);
lean_ctor_set(v_reuseFailAlloc_418_, 3, v___x_412_);
lean_ctor_set(v_reuseFailAlloc_418_, 4, v_r_351_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
}
else
{
lean_object* v___x_426_; lean_object* v___x_427_; 
lean_dec_ref(v_l_350_);
lean_del_object(v___x_362_);
lean_dec(v_v_349_);
lean_dec(v_k_348_);
lean_dec(v_size_347_);
lean_dec_ref(v_l_161_);
lean_del_object(v___x_164_);
lean_dec(v_v_160_);
lean_dec(v_k_159_);
v___x_426_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__7);
v___x_427_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0_spec__1___redArg(v___x_426_);
return v___x_427_;
}
}
else
{
lean_object* v___x_428_; lean_object* v___x_429_; 
lean_del_object(v___x_362_);
lean_dec(v_r_351_);
lean_dec(v_v_349_);
lean_dec(v_k_348_);
lean_dec(v_size_347_);
lean_dec_ref(v_l_161_);
lean_del_object(v___x_164_);
lean_dec(v_v_160_);
lean_dec(v_k_159_);
v___x_428_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg___closed__8);
v___x_429_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0_spec__1___redArg(v___x_428_);
return v___x_429_;
}
}
}
}
else
{
lean_object* v_size_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_440_; 
v_size_436_ = lean_ctor_get(v_l_161_, 0);
v___x_437_ = lean_unsigned_to_nat(1u);
v___x_438_ = lean_nat_add(v___x_437_, v_size_436_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v___x_345_);
lean_ctor_set(v___x_164_, 0, v___x_438_);
v___x_440_ = v___x_164_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v___x_438_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_441_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_441_, 3, v_l_161_);
lean_ctor_set(v_reuseFailAlloc_441_, 4, v___x_345_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
else
{
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_l_442_; 
v_l_442_ = lean_ctor_get(v___x_345_, 3);
lean_inc(v_l_442_);
if (lean_obj_tag(v_l_442_) == 0)
{
lean_object* v_r_443_; 
v_r_443_ = lean_ctor_get(v___x_345_, 4);
lean_inc(v_r_443_);
if (lean_obj_tag(v_r_443_) == 0)
{
lean_object* v_size_444_; lean_object* v_k_445_; lean_object* v_v_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_460_; 
v_size_444_ = lean_ctor_get(v___x_345_, 0);
v_k_445_ = lean_ctor_get(v___x_345_, 1);
v_v_446_ = lean_ctor_get(v___x_345_, 2);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_460_ == 0)
{
lean_object* v_unused_461_; lean_object* v_unused_462_; 
v_unused_461_ = lean_ctor_get(v___x_345_, 4);
lean_dec(v_unused_461_);
v_unused_462_ = lean_ctor_get(v___x_345_, 3);
lean_dec(v_unused_462_);
v___x_448_ = v___x_345_;
v_isShared_449_ = v_isSharedCheck_460_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_v_446_);
lean_inc(v_k_445_);
lean_inc(v_size_444_);
lean_dec(v___x_345_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_460_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v_size_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_455_; 
v_size_450_ = lean_ctor_get(v_l_442_, 0);
v___x_451_ = lean_unsigned_to_nat(1u);
v___x_452_ = lean_nat_add(v___x_451_, v_size_444_);
lean_dec(v_size_444_);
v___x_453_ = lean_nat_add(v___x_451_, v_size_450_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 4, v_l_442_);
lean_ctor_set(v___x_448_, 3, v_l_161_);
lean_ctor_set(v___x_448_, 2, v_v_160_);
lean_ctor_set(v___x_448_, 1, v_k_159_);
lean_ctor_set(v___x_448_, 0, v___x_453_);
v___x_455_ = v___x_448_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v___x_453_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_459_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_459_, 3, v_l_161_);
lean_ctor_set(v_reuseFailAlloc_459_, 4, v_l_442_);
v___x_455_ = v_reuseFailAlloc_459_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
lean_object* v___x_457_; 
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v_r_443_);
lean_ctor_set(v___x_164_, 3, v___x_455_);
lean_ctor_set(v___x_164_, 2, v_v_446_);
lean_ctor_set(v___x_164_, 1, v_k_445_);
lean_ctor_set(v___x_164_, 0, v___x_452_);
v___x_457_ = v___x_164_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_452_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v_k_445_);
lean_ctor_set(v_reuseFailAlloc_458_, 2, v_v_446_);
lean_ctor_set(v_reuseFailAlloc_458_, 3, v___x_455_);
lean_ctor_set(v_reuseFailAlloc_458_, 4, v_r_443_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
}
else
{
lean_object* v_k_463_; lean_object* v_v_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_488_; 
v_k_463_ = lean_ctor_get(v___x_345_, 1);
v_v_464_ = lean_ctor_get(v___x_345_, 2);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_488_ == 0)
{
lean_object* v_unused_489_; lean_object* v_unused_490_; lean_object* v_unused_491_; 
v_unused_489_ = lean_ctor_get(v___x_345_, 4);
lean_dec(v_unused_489_);
v_unused_490_ = lean_ctor_get(v___x_345_, 3);
lean_dec(v_unused_490_);
v_unused_491_ = lean_ctor_get(v___x_345_, 0);
lean_dec(v_unused_491_);
v___x_466_ = v___x_345_;
v_isShared_467_ = v_isSharedCheck_488_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_v_464_);
lean_inc(v_k_463_);
lean_dec(v___x_345_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_488_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v_k_468_; lean_object* v_v_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_484_; 
v_k_468_ = lean_ctor_get(v_l_442_, 1);
v_v_469_ = lean_ctor_get(v_l_442_, 2);
v_isSharedCheck_484_ = !lean_is_exclusive(v_l_442_);
if (v_isSharedCheck_484_ == 0)
{
lean_object* v_unused_485_; lean_object* v_unused_486_; lean_object* v_unused_487_; 
v_unused_485_ = lean_ctor_get(v_l_442_, 4);
lean_dec(v_unused_485_);
v_unused_486_ = lean_ctor_get(v_l_442_, 3);
lean_dec(v_unused_486_);
v_unused_487_ = lean_ctor_get(v_l_442_, 0);
lean_dec(v_unused_487_);
v___x_471_ = v_l_442_;
v_isShared_472_ = v_isSharedCheck_484_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_v_469_);
lean_inc(v_k_468_);
lean_dec(v_l_442_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_484_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_473_ = lean_unsigned_to_nat(3u);
v___x_474_ = lean_unsigned_to_nat(1u);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 4, v_r_443_);
lean_ctor_set(v___x_471_, 3, v_r_443_);
lean_ctor_set(v___x_471_, 2, v_v_160_);
lean_ctor_set(v___x_471_, 1, v_k_159_);
lean_ctor_set(v___x_471_, 0, v___x_474_);
v___x_476_ = v___x_471_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_474_);
lean_ctor_set(v_reuseFailAlloc_483_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_483_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_483_, 3, v_r_443_);
lean_ctor_set(v_reuseFailAlloc_483_, 4, v_r_443_);
v___x_476_ = v_reuseFailAlloc_483_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_478_; 
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 3, v_r_443_);
lean_ctor_set(v___x_466_, 0, v___x_474_);
v___x_478_ = v___x_466_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_474_);
lean_ctor_set(v_reuseFailAlloc_482_, 1, v_k_463_);
lean_ctor_set(v_reuseFailAlloc_482_, 2, v_v_464_);
lean_ctor_set(v_reuseFailAlloc_482_, 3, v_r_443_);
lean_ctor_set(v_reuseFailAlloc_482_, 4, v_r_443_);
v___x_478_ = v_reuseFailAlloc_482_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v___x_480_; 
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v___x_478_);
lean_ctor_set(v___x_164_, 3, v___x_476_);
lean_ctor_set(v___x_164_, 2, v_v_469_);
lean_ctor_set(v___x_164_, 1, v_k_468_);
lean_ctor_set(v___x_164_, 0, v___x_473_);
v___x_480_ = v___x_164_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v___x_473_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_k_468_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_v_469_);
lean_ctor_set(v_reuseFailAlloc_481_, 3, v___x_476_);
lean_ctor_set(v_reuseFailAlloc_481_, 4, v___x_478_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_492_; 
v_r_492_ = lean_ctor_get(v___x_345_, 4);
lean_inc(v_r_492_);
if (lean_obj_tag(v_r_492_) == 0)
{
lean_object* v_k_493_; lean_object* v_v_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_506_; 
v_k_493_ = lean_ctor_get(v___x_345_, 1);
v_v_494_ = lean_ctor_get(v___x_345_, 2);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_506_ == 0)
{
lean_object* v_unused_507_; lean_object* v_unused_508_; lean_object* v_unused_509_; 
v_unused_507_ = lean_ctor_get(v___x_345_, 4);
lean_dec(v_unused_507_);
v_unused_508_ = lean_ctor_get(v___x_345_, 3);
lean_dec(v_unused_508_);
v_unused_509_ = lean_ctor_get(v___x_345_, 0);
lean_dec(v_unused_509_);
v___x_496_ = v___x_345_;
v_isShared_497_ = v_isSharedCheck_506_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_v_494_);
lean_inc(v_k_493_);
lean_dec(v___x_345_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_506_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_501_; 
v___x_498_ = lean_unsigned_to_nat(3u);
v___x_499_ = lean_unsigned_to_nat(1u);
if (v_isShared_497_ == 0)
{
lean_ctor_set(v___x_496_, 4, v_l_442_);
lean_ctor_set(v___x_496_, 2, v_v_160_);
lean_ctor_set(v___x_496_, 1, v_k_159_);
lean_ctor_set(v___x_496_, 0, v___x_499_);
v___x_501_ = v___x_496_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_499_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_505_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_505_, 3, v_l_442_);
lean_ctor_set(v_reuseFailAlloc_505_, 4, v_l_442_);
v___x_501_ = v_reuseFailAlloc_505_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
lean_object* v___x_503_; 
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v_r_492_);
lean_ctor_set(v___x_164_, 3, v___x_501_);
lean_ctor_set(v___x_164_, 2, v_v_494_);
lean_ctor_set(v___x_164_, 1, v_k_493_);
lean_ctor_set(v___x_164_, 0, v___x_498_);
v___x_503_ = v___x_164_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_498_);
lean_ctor_set(v_reuseFailAlloc_504_, 1, v_k_493_);
lean_ctor_set(v_reuseFailAlloc_504_, 2, v_v_494_);
lean_ctor_set(v_reuseFailAlloc_504_, 3, v___x_501_);
lean_ctor_set(v_reuseFailAlloc_504_, 4, v_r_492_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
}
else
{
lean_object* v___x_510_; lean_object* v___x_512_; 
v___x_510_ = lean_unsigned_to_nat(2u);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v___x_345_);
lean_ctor_set(v___x_164_, 3, v_r_492_);
lean_ctor_set(v___x_164_, 0, v___x_510_);
v___x_512_ = v___x_164_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_510_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_513_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_513_, 3, v_r_492_);
lean_ctor_set(v_reuseFailAlloc_513_, 4, v___x_345_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
else
{
lean_object* v___x_514_; lean_object* v___x_516_; 
v___x_514_ = lean_unsigned_to_nat(1u);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 4, v___x_345_);
lean_ctor_set(v___x_164_, 3, v___x_345_);
lean_ctor_set(v___x_164_, 0, v___x_514_);
v___x_516_ = v___x_164_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_k_159_);
lean_ctor_set(v_reuseFailAlloc_517_, 2, v_v_160_);
lean_ctor_set(v_reuseFailAlloc_517_, 3, v___x_345_);
lean_ctor_set(v_reuseFailAlloc_517_, 4, v___x_345_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = lean_unsigned_to_nat(1u);
v___x_520_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
lean_ctor_set(v___x_520_, 1, v_k_155_);
lean_ctor_set(v___x_520_, 2, v_v_156_);
lean_ctor_set(v___x_520_, 3, v_t_157_);
lean_ctor_set(v___x_520_, 4, v_t_157_);
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_insertEmpty___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__2___redArg(lean_object* v_val_521_, lean_object* v_k_522_){
_start:
{
if (lean_obj_tag(v_k_522_) == 0)
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_523_, 0, v_val_521_);
v___x_524_ = lean_box(1);
v___x_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_523_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
return v___x_525_;
}
else
{
lean_object* v_head_526_; lean_object* v_tail_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_538_; 
v_head_526_ = lean_ctor_get(v_k_522_, 0);
v_tail_527_ = lean_ctor_get(v_k_522_, 1);
v_isSharedCheck_538_ = !lean_is_exclusive(v_k_522_);
if (v_isSharedCheck_538_ == 0)
{
v___x_529_ = v_k_522_;
v_isShared_530_ = v_isSharedCheck_538_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_tail_527_);
lean_inc(v_head_526_);
lean_dec(v_k_522_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_538_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v_t_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
v_t_531_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_insertEmpty___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__2___redArg(v_val_521_, v_tail_527_);
v___x_532_ = lean_box(0);
v___x_533_ = lean_box(1);
v___x_534_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg(v_head_526_, v_t_531_, v___x_533_);
if (v_isShared_530_ == 0)
{
lean_ctor_set_tag(v___x_529_, 0);
lean_ctor_set(v___x_529_, 1, v___x_534_);
lean_ctor_set(v___x_529_, 0, v___x_532_);
v___x_536_ = v___x_529_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_532_);
lean_ctor_set(v_reuseFailAlloc_537_, 1, v___x_534_);
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
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1___redArg(lean_object* v_t_539_, lean_object* v_k_540_){
_start:
{
if (lean_obj_tag(v_t_539_) == 0)
{
lean_object* v_k_541_; lean_object* v_v_542_; lean_object* v_l_543_; lean_object* v_r_544_; uint8_t v___x_545_; 
v_k_541_ = lean_ctor_get(v_t_539_, 1);
v_v_542_ = lean_ctor_get(v_t_539_, 2);
v_l_543_ = lean_ctor_get(v_t_539_, 3);
v_r_544_ = lean_ctor_get(v_t_539_, 4);
v___x_545_ = l_Lean_NamePart_cmp(v_k_540_, v_k_541_);
switch(v___x_545_)
{
case 0:
{
v_t_539_ = v_l_543_;
goto _start;
}
case 1:
{
lean_object* v___x_547_; 
lean_inc(v_v_542_);
v___x_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_547_, 0, v_v_542_);
return v___x_547_;
}
default: 
{
v_t_539_ = v_r_544_;
goto _start;
}
}
}
else
{
lean_object* v___x_549_; 
v___x_549_ = lean_box(0);
return v___x_549_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1___redArg___boxed(lean_object* v_t_550_, lean_object* v_k_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1___redArg(v_t_550_, v_k_551_);
lean_dec_ref(v_k_551_);
lean_dec(v_t_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0___redArg(lean_object* v_val_553_, lean_object* v_x_554_, lean_object* v_x_555_){
_start:
{
if (lean_obj_tag(v_x_555_) == 0)
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_564_; 
v_a_556_ = lean_ctor_get(v_x_554_, 1);
v_isSharedCheck_564_ = !lean_is_exclusive(v_x_554_);
if (v_isSharedCheck_564_ == 0)
{
lean_object* v_unused_565_; 
v_unused_565_ = lean_ctor_get(v_x_554_, 0);
lean_dec(v_unused_565_);
v___x_558_ = v_x_554_;
v_isShared_559_ = v_isSharedCheck_564_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v_x_554_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_564_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_560_; lean_object* v___x_562_; 
v___x_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_560_, 0, v_val_553_);
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 0, v___x_560_);
v___x_562_ = v___x_558_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_560_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_a_556_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
else
{
lean_object* v_a_566_; lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_583_; 
v_a_566_ = lean_ctor_get(v_x_554_, 0);
v_a_567_ = lean_ctor_get(v_x_554_, 1);
v_isSharedCheck_583_ = !lean_is_exclusive(v_x_554_);
if (v_isSharedCheck_583_ == 0)
{
v___x_569_ = v_x_554_;
v_isShared_570_ = v_isSharedCheck_583_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_inc(v_a_566_);
lean_dec(v_x_554_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_583_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v_head_571_; lean_object* v_tail_572_; lean_object* v___y_574_; lean_object* v___x_579_; 
v_head_571_ = lean_ctor_get(v_x_555_, 0);
lean_inc(v_head_571_);
v_tail_572_ = lean_ctor_get(v_x_555_, 1);
lean_inc(v_tail_572_);
lean_dec_ref(v_x_555_);
v___x_579_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1___redArg(v_a_567_, v_head_571_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v___x_580_; 
v___x_580_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_insertEmpty___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__2___redArg(v_val_553_, v_tail_572_);
v___y_574_ = v___x_580_;
goto v___jp_573_;
}
else
{
lean_object* v_val_581_; lean_object* v___x_582_; 
v_val_581_ = lean_ctor_get(v___x_579_, 0);
lean_inc(v_val_581_);
lean_dec_ref(v___x_579_);
v___x_582_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0___redArg(v_val_553_, v_val_581_, v_tail_572_);
v___y_574_ = v___x_582_;
goto v___jp_573_;
}
v___jp_573_:
{
lean_object* v___x_575_; lean_object* v___x_577_; 
v___x_575_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg(v_head_571_, v___y_574_, v_a_567_);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 1, v___x_575_);
v___x_577_ = v___x_569_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_a_566_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v___x_575_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_insert___redArg(lean_object* v_t_584_, lean_object* v_n_585_, lean_object* v_b_586_){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = l___private_Lean_Data_NameTrie_0__Lean_toKey(v_n_585_);
v___x_588_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0___redArg(v_b_586_, v_t_584_, v___x_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_insert___redArg___boxed(lean_object* v_t_589_, lean_object* v_n_590_, lean_object* v_b_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_NameTrie_insert___redArg(v_t_589_, v_n_590_, v_b_591_);
lean_dec(v_n_590_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_insert(lean_object* v_00_u03b2_593_, lean_object* v_t_594_, lean_object* v_n_595_, lean_object* v_b_596_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_NameTrie_insert___redArg(v_t_594_, v_n_595_, v_b_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_insert___boxed(lean_object* v_00_u03b2_598_, lean_object* v_t_599_, lean_object* v_n_600_, lean_object* v_b_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lean_NameTrie_insert(v_00_u03b2_598_, v_t_599_, v_n_600_, v_b_601_);
lean_dec(v_n_600_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0(lean_object* v_00_u03b2_603_, lean_object* v_val_604_, lean_object* v_x_605_, lean_object* v_x_606_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0___redArg(v_val_604_, v_x_605_, v_x_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_608_, lean_object* v_msg_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0_spec__1___redArg(v_msg_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0(lean_object* v_00_u03b2_611_, lean_object* v_k_612_, lean_object* v_v_613_, lean_object* v_t_614_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__0___redArg(v_k_612_, v_v_613_, v_t_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1(lean_object* v_00_u03b4_616_, lean_object* v_t_617_, lean_object* v_k_618_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1___redArg(v_t_617_, v_k_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1___boxed(lean_object* v_00_u03b4_620_, lean_object* v_t_621_, lean_object* v_k_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1(v_00_u03b4_620_, v_t_621_, v_k_622_);
lean_dec_ref(v_k_622_);
lean_dec(v_t_621_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_insertEmpty___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__2(lean_object* v_00_u03b2_624_, lean_object* v_val_625_, lean_object* v_k_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_insertEmpty___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__2___redArg(v_val_625_, v_k_626_);
return v___x_627_;
}
}
static lean_object* _init_l_Lean_NameTrie_empty___closed__0(void){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = lean_alloc_closure((void*)(l_Lean_NamePart_cmp___boxed), 2, 0);
return v___x_628_;
}
}
static lean_object* _init_l_Lean_NameTrie_empty___closed__1(void){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = lean_obj_once(&l_Lean_NameTrie_empty___closed__0, &l_Lean_NameTrie_empty___closed__0_once, _init_l_Lean_NameTrie_empty___closed__0);
v___x_630_ = l_Lean_PrefixTreeNode_empty(lean_box(0), lean_box(0), v___x_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_empty(lean_object* v_00_u03b2_631_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = lean_obj_once(&l_Lean_NameTrie_empty___closed__1, &l_Lean_NameTrie_empty___closed__1_once, _init_l_Lean_NameTrie_empty___closed__1);
return v___x_632_;
}
}
static lean_object* _init_l_Lean_instInhabitedNameTrie___closed__0(void){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Lean_NameTrie_empty(lean_box(0));
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedNameTrie(lean_object* v_00_u03b2_634_){
_start:
{
lean_object* v___x_635_; 
v___x_635_ = lean_obj_once(&l_Lean_instInhabitedNameTrie___closed__0, &l_Lean_instInhabitedNameTrie___closed__0_once, _init_l_Lean_instInhabitedNameTrie___closed__0);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionNameTrie(lean_object* v_00_u03b2_636_){
_start:
{
lean_object* v___x_637_; 
v___x_637_ = lean_obj_once(&l_Lean_instInhabitedNameTrie___closed__0, &l_Lean_instInhabitedNameTrie___closed__0_once, _init_l_Lean_instInhabitedNameTrie___closed__0);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_find_x3f_loop___at___00Lean_NameTrie_find_x3f_spec__0___redArg(lean_object* v_x_638_, lean_object* v_x_639_){
_start:
{
if (lean_obj_tag(v_x_639_) == 0)
{
lean_object* v_a_640_; 
v_a_640_ = lean_ctor_get(v_x_638_, 0);
lean_inc(v_a_640_);
lean_dec_ref(v_x_638_);
return v_a_640_;
}
else
{
lean_object* v_a_641_; lean_object* v_head_642_; lean_object* v_tail_643_; lean_object* v___x_644_; 
v_a_641_ = lean_ctor_get(v_x_638_, 1);
lean_inc(v_a_641_);
lean_dec_ref(v_x_638_);
v_head_642_ = lean_ctor_get(v_x_639_, 0);
v_tail_643_ = lean_ctor_get(v_x_639_, 1);
v___x_644_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1___redArg(v_a_641_, v_head_642_);
lean_dec(v_a_641_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v___x_645_; 
v___x_645_ = lean_box(0);
return v___x_645_;
}
else
{
lean_object* v_val_646_; 
v_val_646_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_val_646_);
lean_dec_ref(v___x_644_);
v_x_638_ = v_val_646_;
v_x_639_ = v_tail_643_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_find_x3f_loop___at___00Lean_NameTrie_find_x3f_spec__0___redArg___boxed(lean_object* v_x_648_, lean_object* v_x_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_find_x3f_loop___at___00Lean_NameTrie_find_x3f_spec__0___redArg(v_x_648_, v_x_649_);
lean_dec(v_x_649_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_find_x3f___redArg(lean_object* v_t_651_, lean_object* v_k_652_){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = l___private_Lean_Data_NameTrie_0__Lean_toKey(v_k_652_);
v___x_654_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_find_x3f_loop___at___00Lean_NameTrie_find_x3f_spec__0___redArg(v_t_651_, v___x_653_);
lean_dec(v___x_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_find_x3f___redArg___boxed(lean_object* v_t_655_, lean_object* v_k_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lean_NameTrie_find_x3f___redArg(v_t_655_, v_k_656_);
lean_dec(v_k_656_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_find_x3f(lean_object* v_00_u03b2_658_, lean_object* v_t_659_, lean_object* v_k_660_){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = l_Lean_NameTrie_find_x3f___redArg(v_t_659_, v_k_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_find_x3f___boxed(lean_object* v_00_u03b2_662_, lean_object* v_t_663_, lean_object* v_k_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_NameTrie_find_x3f(v_00_u03b2_662_, v_t_663_, v_k_664_);
lean_dec(v_k_664_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_find_x3f_loop___at___00Lean_NameTrie_find_x3f_spec__0(lean_object* v_00_u03b2_666_, lean_object* v_x_667_, lean_object* v_x_668_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_find_x3f_loop___at___00Lean_NameTrie_find_x3f_spec__0___redArg(v_x_667_, v_x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_find_x3f_loop___at___00Lean_NameTrie_find_x3f_spec__0___boxed(lean_object* v_00_u03b2_670_, lean_object* v_x_671_, lean_object* v_x_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_find_x3f_loop___at___00Lean_NameTrie_find_x3f_spec__0(v_00_u03b2_670_, v_x_671_, v_x_672_);
lean_dec(v_x_672_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_findLongestPrefix_x3f___redArg(lean_object* v_t_674_, lean_object* v_k_675_){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_676_ = lean_obj_once(&l_Lean_NameTrie_empty___closed__0, &l_Lean_NameTrie_empty___closed__0_once, _init_l_Lean_NameTrie_empty___closed__0);
v___x_677_ = l___private_Lean_Data_NameTrie_0__Lean_toKey(v_k_675_);
v___x_678_ = lean_box(0);
v___x_679_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_findLongestPrefix_x3f_loop(lean_box(0), lean_box(0), v___x_676_, v___x_678_, v_t_674_, v___x_677_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_findLongestPrefix_x3f___redArg___boxed(lean_object* v_t_680_, lean_object* v_k_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Lean_NameTrie_findLongestPrefix_x3f___redArg(v_t_680_, v_k_681_);
lean_dec(v_k_681_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_findLongestPrefix_x3f(lean_object* v_00_u03b2_683_, lean_object* v_t_684_, lean_object* v_k_685_){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_686_ = lean_obj_once(&l_Lean_NameTrie_empty___closed__0, &l_Lean_NameTrie_empty___closed__0_once, _init_l_Lean_NameTrie_empty___closed__0);
v___x_687_ = l___private_Lean_Data_NameTrie_0__Lean_toKey(v_k_685_);
v___x_688_ = lean_box(0);
v___x_689_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_findLongestPrefix_x3f_loop(lean_box(0), lean_box(0), v___x_686_, v___x_688_, v_t_684_, v___x_687_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_findLongestPrefix_x3f___boxed(lean_object* v_00_u03b2_690_, lean_object* v_t_691_, lean_object* v_k_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lean_NameTrie_findLongestPrefix_x3f(v_00_u03b2_690_, v_t_691_, v_k_692_);
lean_dec(v_k_692_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_foldMatchingM___redArg(lean_object* v_inst_694_, lean_object* v_t_695_, lean_object* v_k_696_, lean_object* v_init_697_, lean_object* v_f_698_){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_699_ = lean_obj_once(&l_Lean_NameTrie_empty___closed__0, &l_Lean_NameTrie_empty___closed__0_once, _init_l_Lean_NameTrie_empty___closed__0);
v___x_700_ = l___private_Lean_Data_NameTrie_0__Lean_toKey(v_k_696_);
lean_inc(v_init_697_);
v___x_701_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v_inst_694_, v___x_699_, v_init_697_, v_f_698_, v___x_700_, v_t_695_, v_init_697_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_foldMatchingM___redArg___boxed(lean_object* v_inst_702_, lean_object* v_t_703_, lean_object* v_k_704_, lean_object* v_init_705_, lean_object* v_f_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lean_NameTrie_foldMatchingM___redArg(v_inst_702_, v_t_703_, v_k_704_, v_init_705_, v_f_706_);
lean_dec(v_k_704_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_foldMatchingM(lean_object* v_m_708_, lean_object* v_00_u03b2_709_, lean_object* v_00_u03c3_710_, lean_object* v_inst_711_, lean_object* v_t_712_, lean_object* v_k_713_, lean_object* v_init_714_, lean_object* v_f_715_){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_716_ = lean_obj_once(&l_Lean_NameTrie_empty___closed__0, &l_Lean_NameTrie_empty___closed__0_once, _init_l_Lean_NameTrie_empty___closed__0);
v___x_717_ = l___private_Lean_Data_NameTrie_0__Lean_toKey(v_k_713_);
lean_inc(v_init_714_);
v___x_718_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v_inst_711_, v___x_716_, v_init_714_, v_f_715_, v___x_717_, v_t_712_, v_init_714_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_foldMatchingM___boxed(lean_object* v_m_719_, lean_object* v_00_u03b2_720_, lean_object* v_00_u03c3_721_, lean_object* v_inst_722_, lean_object* v_t_723_, lean_object* v_k_724_, lean_object* v_init_725_, lean_object* v_f_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lean_NameTrie_foldMatchingM(v_m_719_, v_00_u03b2_720_, v_00_u03c3_721_, v_inst_722_, v_t_723_, v_k_724_, v_init_725_, v_f_726_);
lean_dec(v_k_724_);
return v_res_727_;
}
}
static lean_object* _init_l_Lean_NameTrie_foldM___redArg___closed__0(void){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = lean_box(0);
v___x_729_ = l___private_Lean_Data_NameTrie_0__Lean_toKey(v___x_728_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_foldM___redArg(lean_object* v_inst_730_, lean_object* v_t_731_, lean_object* v_init_732_, lean_object* v_f_733_){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_734_ = lean_obj_once(&l_Lean_NameTrie_empty___closed__0, &l_Lean_NameTrie_empty___closed__0_once, _init_l_Lean_NameTrie_empty___closed__0);
v___x_735_ = lean_obj_once(&l_Lean_NameTrie_foldM___redArg___closed__0, &l_Lean_NameTrie_foldM___redArg___closed__0_once, _init_l_Lean_NameTrie_foldM___redArg___closed__0);
lean_inc(v_init_732_);
v___x_736_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v_inst_730_, v___x_734_, v_init_732_, v_f_733_, v___x_735_, v_t_731_, v_init_732_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_foldM(lean_object* v_m_737_, lean_object* v_00_u03b2_738_, lean_object* v_00_u03c3_739_, lean_object* v_inst_740_, lean_object* v_t_741_, lean_object* v_init_742_, lean_object* v_f_743_){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_744_ = lean_obj_once(&l_Lean_NameTrie_empty___closed__0, &l_Lean_NameTrie_empty___closed__0_once, _init_l_Lean_NameTrie_empty___closed__0);
v___x_745_ = lean_obj_once(&l_Lean_NameTrie_foldM___redArg___closed__0, &l_Lean_NameTrie_foldM___redArg___closed__0_once, _init_l_Lean_NameTrie_foldM___redArg___closed__0);
lean_inc(v_init_742_);
v___x_746_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v_inst_740_, v___x_744_, v_init_742_, v_f_743_, v___x_745_, v_t_741_, v_init_742_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_forMatchingM___redArg___lam__0(lean_object* v_f_747_, lean_object* v_b_748_, lean_object* v_x_749_){
_start:
{
lean_object* v___x_750_; 
v___x_750_ = lean_apply_1(v_f_747_, v_b_748_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_forMatchingM___redArg(lean_object* v_inst_751_, lean_object* v_t_752_, lean_object* v_k_753_, lean_object* v_f_754_){
_start:
{
lean_object* v___f_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___f_755_ = lean_alloc_closure((void*)(l_Lean_NameTrie_forMatchingM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_755_, 0, v_f_754_);
v___x_756_ = lean_obj_once(&l_Lean_NameTrie_empty___closed__0, &l_Lean_NameTrie_empty___closed__0_once, _init_l_Lean_NameTrie_empty___closed__0);
v___x_757_ = l___private_Lean_Data_NameTrie_0__Lean_toKey(v_k_753_);
v___x_758_ = lean_box(0);
v___x_759_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v_inst_751_, v___x_756_, v___x_758_, v___f_755_, v___x_757_, v_t_752_, v___x_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_forMatchingM___redArg___boxed(lean_object* v_inst_760_, lean_object* v_t_761_, lean_object* v_k_762_, lean_object* v_f_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lean_NameTrie_forMatchingM___redArg(v_inst_760_, v_t_761_, v_k_762_, v_f_763_);
lean_dec(v_k_762_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_forMatchingM(lean_object* v_m_765_, lean_object* v_00_u03b2_766_, lean_object* v_inst_767_, lean_object* v_t_768_, lean_object* v_k_769_, lean_object* v_f_770_){
_start:
{
lean_object* v___f_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v___f_771_ = lean_alloc_closure((void*)(l_Lean_NameTrie_forMatchingM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_771_, 0, v_f_770_);
v___x_772_ = lean_obj_once(&l_Lean_NameTrie_empty___closed__0, &l_Lean_NameTrie_empty___closed__0_once, _init_l_Lean_NameTrie_empty___closed__0);
v___x_773_ = l___private_Lean_Data_NameTrie_0__Lean_toKey(v_k_769_);
v___x_774_ = lean_box(0);
v___x_775_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v_inst_767_, v___x_772_, v___x_774_, v___f_771_, v___x_773_, v_t_768_, v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_forMatchingM___boxed(lean_object* v_m_776_, lean_object* v_00_u03b2_777_, lean_object* v_inst_778_, lean_object* v_t_779_, lean_object* v_k_780_, lean_object* v_f_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lean_NameTrie_forMatchingM(v_m_776_, v_00_u03b2_777_, v_inst_778_, v_t_779_, v_k_780_, v_f_781_);
lean_dec(v_k_780_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_forM___redArg(lean_object* v_inst_783_, lean_object* v_t_784_, lean_object* v_f_785_){
_start:
{
lean_object* v___f_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___f_786_ = lean_alloc_closure((void*)(l_Lean_NameTrie_forMatchingM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_786_, 0, v_f_785_);
v___x_787_ = lean_obj_once(&l_Lean_NameTrie_empty___closed__0, &l_Lean_NameTrie_empty___closed__0_once, _init_l_Lean_NameTrie_empty___closed__0);
v___x_788_ = lean_obj_once(&l_Lean_NameTrie_foldM___redArg___closed__0, &l_Lean_NameTrie_foldM___redArg___closed__0_once, _init_l_Lean_NameTrie_foldM___redArg___closed__0);
v___x_789_ = lean_box(0);
v___x_790_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v_inst_783_, v___x_787_, v___x_789_, v___f_786_, v___x_788_, v_t_784_, v___x_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_forM(lean_object* v_m_791_, lean_object* v_00_u03b2_792_, lean_object* v_inst_793_, lean_object* v_t_794_, lean_object* v_f_795_){
_start:
{
lean_object* v___f_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___f_796_ = lean_alloc_closure((void*)(l_Lean_NameTrie_forMatchingM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_796_, 0, v_f_795_);
v___x_797_ = lean_obj_once(&l_Lean_NameTrie_empty___closed__0, &l_Lean_NameTrie_empty___closed__0_once, _init_l_Lean_NameTrie_empty___closed__0);
v___x_798_ = lean_obj_once(&l_Lean_NameTrie_foldM___redArg___closed__0, &l_Lean_NameTrie_foldM___redArg___closed__0_once, _init_l_Lean_NameTrie_foldM___redArg___closed__0);
v___x_799_ = lean_box(0);
v___x_800_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v_inst_793_, v___x_797_, v___x_799_, v___f_796_, v___x_798_, v_t_794_, v___x_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0___redArg(lean_object* v_a_801_, lean_object* v_a_802_){
_start:
{
lean_object* v_a_803_; 
v_a_803_ = lean_ctor_get(v_a_801_, 0);
if (lean_obj_tag(v_a_803_) == 0)
{
lean_object* v_a_804_; lean_object* v___x_805_; 
v_a_804_ = lean_ctor_get(v_a_801_, 1);
lean_inc(v_a_804_);
lean_dec_ref(v_a_801_);
v___x_805_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0_spec__1___redArg(v_a_802_, v_a_804_);
return v___x_805_;
}
else
{
lean_object* v_a_806_; lean_object* v_val_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
lean_inc_ref(v_a_803_);
v_a_806_ = lean_ctor_get(v_a_801_, 1);
lean_inc(v_a_806_);
lean_dec_ref(v_a_801_);
v_val_807_ = lean_ctor_get(v_a_803_, 0);
lean_inc(v_val_807_);
lean_dec_ref(v_a_803_);
v___x_808_ = lean_array_push(v_a_802_, v_val_807_);
v___x_809_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0_spec__1___redArg(v___x_808_, v_a_806_);
return v___x_809_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0_spec__1___redArg(lean_object* v_init_810_, lean_object* v_x_811_){
_start:
{
if (lean_obj_tag(v_x_811_) == 0)
{
lean_object* v_v_812_; lean_object* v_l_813_; lean_object* v_r_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v_v_812_ = lean_ctor_get(v_x_811_, 2);
lean_inc(v_v_812_);
v_l_813_ = lean_ctor_get(v_x_811_, 3);
lean_inc(v_l_813_);
v_r_814_ = lean_ctor_get(v_x_811_, 4);
lean_inc(v_r_814_);
lean_dec_ref(v_x_811_);
v___x_815_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0_spec__1___redArg(v_init_810_, v_l_813_);
v___x_816_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0___redArg(v_v_812_, v___x_815_);
v_init_810_ = v___x_816_;
v_x_811_ = v_r_814_;
goto _start;
}
else
{
return v_init_810_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0___redArg(lean_object* v_init_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_){
_start:
{
if (lean_obj_tag(v_a_819_) == 0)
{
lean_object* v___x_822_; 
v___x_822_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0___redArg(v_a_820_, v_a_821_);
return v___x_822_;
}
else
{
lean_object* v_head_823_; lean_object* v_tail_824_; lean_object* v_a_825_; lean_object* v___x_826_; 
v_head_823_ = lean_ctor_get(v_a_819_, 0);
v_tail_824_ = lean_ctor_get(v_a_819_, 1);
v_a_825_ = lean_ctor_get(v_a_820_, 1);
lean_inc(v_a_825_);
lean_dec_ref(v_a_820_);
v___x_826_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_insert_loop___at___00Lean_NameTrie_insert_spec__0_spec__1___redArg(v_a_825_, v_head_823_);
lean_dec(v_a_825_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_dec_ref(v_a_821_);
lean_inc_ref(v_init_818_);
return v_init_818_;
}
else
{
lean_object* v_val_827_; 
v_val_827_ = lean_ctor_get(v___x_826_, 0);
lean_inc(v_val_827_);
lean_dec_ref(v___x_826_);
v_a_819_ = v_tail_824_;
v_a_820_ = v_val_827_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0___redArg___boxed(lean_object* v_init_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0___redArg(v_init_829_, v_a_830_, v_a_831_, v_a_832_);
lean_dec(v_a_830_);
lean_dec_ref(v_init_829_);
return v_res_833_;
}
}
static lean_object* _init_l_Lean_NameTrie_matchingToArray___redArg___closed__0(void){
_start:
{
lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_834_ = lean_unsigned_to_nat(0u);
v___x_835_ = lean_mk_empty_array_with_capacity(v___x_834_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_matchingToArray___redArg(lean_object* v_t_836_, lean_object* v_k_837_){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_838_ = lean_obj_once(&l_Lean_NameTrie_matchingToArray___redArg___closed__0, &l_Lean_NameTrie_matchingToArray___redArg___closed__0_once, _init_l_Lean_NameTrie_matchingToArray___redArg___closed__0);
v___x_839_ = l___private_Lean_Data_NameTrie_0__Lean_toKey(v_k_837_);
v___x_840_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0___redArg(v___x_838_, v___x_839_, v_t_836_, v___x_838_);
lean_dec(v___x_839_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_matchingToArray___redArg___boxed(lean_object* v_t_841_, lean_object* v_k_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Lean_NameTrie_matchingToArray___redArg(v_t_841_, v_k_842_);
lean_dec(v_k_842_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_matchingToArray(lean_object* v_00_u03b2_844_, lean_object* v_t_845_, lean_object* v_k_846_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l_Lean_NameTrie_matchingToArray___redArg(v_t_845_, v_k_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_matchingToArray___boxed(lean_object* v_00_u03b2_848_, lean_object* v_t_849_, lean_object* v_k_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lean_NameTrie_matchingToArray(v_00_u03b2_848_, v_t_849_, v_k_850_);
lean_dec(v_k_850_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0(lean_object* v_00_u03b2_852_, lean_object* v_init_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0___redArg(v_init_853_, v_a_854_, v_a_855_, v_a_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0___boxed(lean_object* v_00_u03b2_858_, lean_object* v_init_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0(v_00_u03b2_858_, v_init_859_, v_a_860_, v_a_861_, v_a_862_);
lean_dec(v_a_860_);
lean_dec_ref(v_init_859_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0(lean_object* v_00_u03b2_864_, lean_object* v_a_865_, lean_object* v_a_866_){
_start:
{
lean_object* v___x_867_; 
v___x_867_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0___redArg(v_a_865_, v_a_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_868_, lean_object* v_init_869_, lean_object* v_x_870_){
_start:
{
lean_object* v___x_871_; 
v___x_871_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_fold___at___00__private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0_spec__0_spec__1___redArg(v_init_869_, v_x_870_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_toArray___redArg(lean_object* v_t_872_){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_873_ = lean_obj_once(&l_Lean_NameTrie_matchingToArray___redArg___closed__0, &l_Lean_NameTrie_matchingToArray___redArg___closed__0_once, _init_l_Lean_NameTrie_matchingToArray___redArg___closed__0);
v___x_874_ = lean_obj_once(&l_Lean_NameTrie_foldM___redArg___closed__0, &l_Lean_NameTrie_foldM___redArg___closed__0_once, _init_l_Lean_NameTrie_foldM___redArg___closed__0);
v___x_875_ = l___private_Lean_Data_PrefixTree_0__Lean_PrefixTreeNode_foldMatchingM_find___at___00Lean_NameTrie_matchingToArray_spec__0___redArg(v___x_873_, v___x_874_, v_t_872_, v___x_873_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameTrie_toArray(lean_object* v_00_u03b2_876_, lean_object* v_t_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_NameTrie_toArray___redArg(v_t_877_);
return v___x_878_;
}
}
lean_object* runtime_initialize_Lean_Data_PrefixTree(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_String(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_NameTrie(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Data_PrefixTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instBEqNamePart = _init_l_Lean_instBEqNamePart();
lean_mark_persistent(l_Lean_instBEqNamePart);
l_Lean_instInhabitedNamePart_default = _init_l_Lean_instInhabitedNamePart_default();
lean_mark_persistent(l_Lean_instInhabitedNamePart_default);
l_Lean_instInhabitedNamePart = _init_l_Lean_instInhabitedNamePart();
lean_mark_persistent(l_Lean_instInhabitedNamePart);
l_Lean_instToStringNamePart = _init_l_Lean_instToStringNamePart();
lean_mark_persistent(l_Lean_instToStringNamePart);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_NameTrie(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_PrefixTree(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_String(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_NameTrie(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_PrefixTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_NameTrie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_NameTrie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_NameTrie(builtin);
}
#ifdef __cplusplus
}
#endif
