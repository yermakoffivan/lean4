// Lean compiler output
// Module: Lake.Config.OutFormat
// Imports: public import Lean.Setup public import Init.Data.String.TakeDrop
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
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_string_push(lean_object*, uint32_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutFormat_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_listToLines___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_listToLines___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lake_listToLines___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_listToLines___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_listToLines___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_listToLines___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_listToLines(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_arrayToLines___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_arrayToLines___redArg___closed__0;
static lean_once_cell_t l_Lake_arrayToLines___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_arrayToLines___redArg___closed__1;
static lean_once_cell_t l_Lake_arrayToLines___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_arrayToLines___redArg___closed__2;
static lean_once_cell_t l_Lake_arrayToLines___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_arrayToLines___redArg___closed__3;
static lean_once_cell_t l_Lake_arrayToLines___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_arrayToLines___redArg___closed__4;
static lean_once_cell_t l_Lake_arrayToLines___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_arrayToLines___redArg___closed__5;
static lean_once_cell_t l_Lake_arrayToLines___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_arrayToLines___redArg___closed__6;
static lean_once_cell_t l_Lake_arrayToLines___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_arrayToLines___redArg___closed__7;
static lean_once_cell_t l_Lake_arrayToLines___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_arrayToLines___redArg___closed__8;
static lean_once_cell_t l_Lake_arrayToLines___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_arrayToLines___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lake_arrayToLines___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_arrayToLines(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instToTextJson___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instToTextJson___closed__0;
LEAN_EXPORT lean_object* l_Lake_instToTextJson;
LEAN_EXPORT lean_object* l_Lake_instToTextList___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextList___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextArray___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToTextArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryText___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryText___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lake_instQueryText___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instQueryText___closed__0;
LEAN_EXPORT lean_object* l_Lake_instQueryText(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryTextUnit___lam__0(lean_object*);
static lean_once_cell_t l_Lake_instQueryTextUnit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instQueryTextUnit___closed__0;
LEAN_EXPORT lean_object* l_Lake_instQueryTextUnit;
LEAN_EXPORT lean_object* l_Lake_instQueryJson___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJson___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lake_instQueryJson___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instQueryJson___closed__0;
LEAN_EXPORT lean_object* l_Lake_instQueryJson(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instQueryJsonUnit___lam__0(lean_object*);
static lean_once_cell_t l_Lake_instQueryJsonUnit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instQueryJsonUnit___closed__0;
LEAN_EXPORT lean_object* l_Lake_instQueryJsonUnit;
LEAN_EXPORT lean_object* l_Lake_instFormatQueryOfQueryTextOfQueryJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instFormatQueryOfQueryTextOfQueryJson(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_nullFormat___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_nullFormat___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_nullFormat___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lake_nullFormat___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_nullFormat(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_nullFormat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_ppImport___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ppImport___closed__0;
static lean_once_cell_t l_Lake_ppImport___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ppImport___closed__1;
static lean_once_cell_t l_Lake_ppImport___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ppImport___closed__2;
static lean_once_cell_t l_Lake_ppImport___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ppImport___closed__3;
LEAN_EXPORT lean_object* l_Lake_ppImport(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ppImport___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_ppModuleHeader___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ppModuleHeader___closed__0;
static lean_once_cell_t l_Lake_ppModuleHeader___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ppModuleHeader___closed__1;
LEAN_EXPORT lean_object* l_Lake_ppModuleHeader(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ppModuleHeader___boxed(lean_object*);
static lean_once_cell_t l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader;
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorIdx(uint8_t v_x_1_){
_start:
{
if (v_x_1_ == 0)
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
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_boxed_5_; lean_object* v_res_6_; 
v_x_boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lake_OutFormat_ctorIdx(v_x_boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_toCtorIdx(uint8_t v_x_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lake_OutFormat_ctorIdx(v_x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_toCtorIdx___boxed(lean_object* v_x_9_){
_start:
{
uint8_t v_x_4__boxed_10_; lean_object* v_res_11_; 
v_x_4__boxed_10_ = lean_unbox(v_x_9_);
v_res_11_ = l_Lake_OutFormat_toCtorIdx(v_x_4__boxed_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim___redArg(lean_object* v_k_12_){
_start:
{
lean_inc(v_k_12_);
return v_k_12_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim___redArg___boxed(lean_object* v_k_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lake_OutFormat_ctorElim___redArg(v_k_13_);
lean_dec(v_k_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, uint8_t v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_inc(v_k_19_);
return v_k_19_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_ctorElim___boxed(lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
uint8_t v_t_boxed_25_; lean_object* v_res_26_; 
v_t_boxed_25_ = lean_unbox(v_t_22_);
v_res_26_ = l_Lake_OutFormat_ctorElim(v_motive_20_, v_ctorIdx_21_, v_t_boxed_25_, v_h_23_, v_k_24_);
lean_dec(v_k_24_);
lean_dec(v_ctorIdx_21_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim___redArg(lean_object* v_text_27_){
_start:
{
lean_inc(v_text_27_);
return v_text_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim___redArg___boxed(lean_object* v_text_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lake_OutFormat_text_elim___redArg(v_text_28_);
lean_dec(v_text_28_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim(lean_object* v_motive_30_, uint8_t v_t_31_, lean_object* v_h_32_, lean_object* v_text_33_){
_start:
{
lean_inc(v_text_33_);
return v_text_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_text_elim___boxed(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_text_37_){
_start:
{
uint8_t v_t_boxed_38_; lean_object* v_res_39_; 
v_t_boxed_38_ = lean_unbox(v_t_35_);
v_res_39_ = l_Lake_OutFormat_text_elim(v_motive_34_, v_t_boxed_38_, v_h_36_, v_text_37_);
lean_dec(v_text_37_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim___redArg(lean_object* v_json_40_){
_start:
{
lean_inc(v_json_40_);
return v_json_40_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim___redArg___boxed(lean_object* v_json_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lake_OutFormat_json_elim___redArg(v_json_41_);
lean_dec(v_json_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim(lean_object* v_motive_43_, uint8_t v_t_44_, lean_object* v_h_45_, lean_object* v_json_46_){
_start:
{
lean_inc(v_json_46_);
return v_json_46_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutFormat_json_elim___boxed(lean_object* v_motive_47_, lean_object* v_t_48_, lean_object* v_h_49_, lean_object* v_json_50_){
_start:
{
uint8_t v_t_boxed_51_; lean_object* v_res_52_; 
v_t_boxed_51_ = lean_unbox(v_t_48_);
v_res_52_ = l_Lake_OutFormat_json_elim(v_motive_47_, v_t_boxed_51_, v_h_49_, v_json_50_);
lean_dec(v_json_50_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString___redArg(lean_object* v_inst_53_){
_start:
{
lean_inc_ref(v_inst_53_);
return v_inst_53_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString___redArg___boxed(lean_object* v_inst_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lake_instToTextOfToString___redArg(v_inst_54_);
lean_dec_ref(v_inst_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString(lean_object* v_00_u03b1_56_, lean_object* v_inst_57_){
_start:
{
lean_inc_ref(v_inst_57_);
return v_inst_57_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextOfToString___boxed(lean_object* v_00_u03b1_58_, lean_object* v_inst_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lake_instToTextOfToString(v_00_u03b1_58_, v_inst_59_);
lean_dec_ref(v_inst_59_);
return v_res_60_;
}
}
static lean_object* _init_l_Lake_listToLines___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_mk_string_unchecked("\n", 1, 1);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lake_listToLines___redArg___lam__0(lean_object* v_f_62_, lean_object* v_x1_63_, lean_object* v_x2_64_){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_65_ = lean_apply_1(v_f_62_, v_x2_64_);
v___x_66_ = lean_string_append(v_x1_63_, v___x_65_);
lean_dec_ref(v___x_65_);
v___x_67_ = lean_obj_once(&l_Lake_listToLines___redArg___lam__0___closed__0, &l_Lake_listToLines___redArg___lam__0___closed__0_once, _init_l_Lake_listToLines___redArg___lam__0___closed__0);
v___x_68_ = lean_string_append(v___x_66_, v___x_67_);
return v___x_68_;
}
}
static lean_object* _init_l_Lake_listToLines___redArg___closed__0(void){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_mk_string_unchecked("", 0, 0);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lake_listToLines___redArg(lean_object* v_as_70_, lean_object* v_f_71_){
_start:
{
lean_object* v___f_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___f_72_ = lean_alloc_closure((void*)(l_Lake_listToLines___redArg___lam__0), 3, 1);
lean_closure_set(v___f_72_, 0, v_f_71_);
v___x_73_ = lean_obj_once(&l_Lake_listToLines___redArg___closed__0, &l_Lake_listToLines___redArg___closed__0_once, _init_l_Lake_listToLines___redArg___closed__0);
v___x_74_ = l_List_foldl___redArg(v___f_72_, v___x_73_, v_as_70_);
v___x_75_ = lean_unsigned_to_nat(1u);
v___x_76_ = lean_unsigned_to_nat(0u);
v___x_77_ = lean_string_utf8_byte_size(v___x_74_);
lean_inc(v___x_74_);
v___x_78_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_78_, 0, v___x_74_);
lean_ctor_set(v___x_78_, 1, v___x_76_);
lean_ctor_set(v___x_78_, 2, v___x_77_);
v___x_79_ = l_String_Slice_Pos_prevn(v___x_78_, v___x_77_, v___x_75_);
lean_dec_ref(v___x_78_);
v___x_80_ = lean_string_utf8_extract(v___x_74_, v___x_76_, v___x_79_);
lean_dec(v___x_79_);
lean_dec(v___x_74_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lake_listToLines(lean_object* v_00_u03b1_81_, lean_object* v_as_82_, lean_object* v_f_83_){
_start:
{
lean_object* v___f_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___f_84_ = lean_alloc_closure((void*)(l_Lake_listToLines___redArg___lam__0), 3, 1);
lean_closure_set(v___f_84_, 0, v_f_83_);
v___x_85_ = lean_obj_once(&l_Lake_listToLines___redArg___closed__0, &l_Lake_listToLines___redArg___closed__0_once, _init_l_Lake_listToLines___redArg___closed__0);
v___x_86_ = l_List_foldl___redArg(v___f_84_, v___x_85_, v_as_82_);
v___x_87_ = lean_unsigned_to_nat(1u);
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_89_ = lean_string_utf8_byte_size(v___x_86_);
lean_inc(v___x_86_);
v___x_90_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_90_, 0, v___x_86_);
lean_ctor_set(v___x_90_, 1, v___x_88_);
lean_ctor_set(v___x_90_, 2, v___x_89_);
v___x_91_ = l_String_Slice_Pos_prevn(v___x_90_, v___x_89_, v___x_87_);
lean_dec_ref(v___x_90_);
v___x_92_ = lean_string_utf8_extract(v___x_86_, v___x_88_, v___x_91_);
lean_dec(v___x_91_);
lean_dec(v___x_86_);
return v___x_92_;
}
}
static lean_object* _init_l_Lake_arrayToLines___redArg___closed__0(void){
_start:
{
lean_object* v___f_93_; 
v___f_93_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_93_;
}
}
static lean_object* _init_l_Lake_arrayToLines___redArg___closed__1(void){
_start:
{
lean_object* v___f_94_; 
v___f_94_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_94_;
}
}
static lean_object* _init_l_Lake_arrayToLines___redArg___closed__2(void){
_start:
{
lean_object* v___f_95_; 
v___f_95_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_95_;
}
}
static lean_object* _init_l_Lake_arrayToLines___redArg___closed__3(void){
_start:
{
lean_object* v___f_96_; 
v___f_96_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_96_;
}
}
static lean_object* _init_l_Lake_arrayToLines___redArg___closed__4(void){
_start:
{
lean_object* v___f_97_; 
v___f_97_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_97_;
}
}
static lean_object* _init_l_Lake_arrayToLines___redArg___closed__5(void){
_start:
{
lean_object* v___f_98_; 
v___f_98_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_98_;
}
}
static lean_object* _init_l_Lake_arrayToLines___redArg___closed__6(void){
_start:
{
lean_object* v___f_99_; 
v___f_99_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_99_;
}
}
static lean_object* _init_l_Lake_arrayToLines___redArg___closed__7(void){
_start:
{
lean_object* v___f_100_; lean_object* v___f_101_; lean_object* v___x_102_; 
v___f_100_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__1, &l_Lake_arrayToLines___redArg___closed__1_once, _init_l_Lake_arrayToLines___redArg___closed__1);
v___f_101_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__0, &l_Lake_arrayToLines___redArg___closed__0_once, _init_l_Lake_arrayToLines___redArg___closed__0);
v___x_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_102_, 0, v___f_101_);
lean_ctor_set(v___x_102_, 1, v___f_100_);
return v___x_102_;
}
}
static lean_object* _init_l_Lake_arrayToLines___redArg___closed__8(void){
_start:
{
lean_object* v___f_103_; lean_object* v___f_104_; lean_object* v___f_105_; lean_object* v___f_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___f_103_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__5, &l_Lake_arrayToLines___redArg___closed__5_once, _init_l_Lake_arrayToLines___redArg___closed__5);
v___f_104_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__4, &l_Lake_arrayToLines___redArg___closed__4_once, _init_l_Lake_arrayToLines___redArg___closed__4);
v___f_105_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__3, &l_Lake_arrayToLines___redArg___closed__3_once, _init_l_Lake_arrayToLines___redArg___closed__3);
v___f_106_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__2, &l_Lake_arrayToLines___redArg___closed__2_once, _init_l_Lake_arrayToLines___redArg___closed__2);
v___x_107_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__7, &l_Lake_arrayToLines___redArg___closed__7_once, _init_l_Lake_arrayToLines___redArg___closed__7);
v___x_108_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v___f_106_);
lean_ctor_set(v___x_108_, 2, v___f_105_);
lean_ctor_set(v___x_108_, 3, v___f_104_);
lean_ctor_set(v___x_108_, 4, v___f_103_);
return v___x_108_;
}
}
static lean_object* _init_l_Lake_arrayToLines___redArg___closed__9(void){
_start:
{
lean_object* v___f_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___f_109_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__6, &l_Lake_arrayToLines___redArg___closed__6_once, _init_l_Lake_arrayToLines___redArg___closed__6);
v___x_110_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__8, &l_Lake_arrayToLines___redArg___closed__8_once, _init_l_Lake_arrayToLines___redArg___closed__8);
v___x_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v___f_109_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lake_arrayToLines___redArg(lean_object* v_as_112_, lean_object* v_f_113_){
_start:
{
lean_object* v___y_115_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_122_ = lean_obj_once(&l_Lake_listToLines___redArg___closed__0, &l_Lake_listToLines___redArg___closed__0_once, _init_l_Lake_listToLines___redArg___closed__0);
v___x_123_ = lean_unsigned_to_nat(0u);
v___x_124_ = lean_array_get_size(v_as_112_);
v___x_125_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__9, &l_Lake_arrayToLines___redArg___closed__9_once, _init_l_Lake_arrayToLines___redArg___closed__9);
v___x_126_ = lean_nat_dec_lt(v___x_123_, v___x_124_);
if (v___x_126_ == 0)
{
lean_dec_ref(v_f_113_);
lean_dec_ref(v_as_112_);
v___y_115_ = v___x_122_;
goto v___jp_114_;
}
else
{
lean_object* v___f_127_; uint8_t v___x_128_; 
v___f_127_ = lean_alloc_closure((void*)(l_Lake_listToLines___redArg___lam__0), 3, 1);
lean_closure_set(v___f_127_, 0, v_f_113_);
v___x_128_ = lean_nat_dec_le(v___x_124_, v___x_124_);
if (v___x_128_ == 0)
{
if (v___x_126_ == 0)
{
lean_dec_ref(v___f_127_);
lean_dec_ref(v_as_112_);
v___y_115_ = v___x_122_;
goto v___jp_114_;
}
else
{
size_t v___x_129_; size_t v___x_130_; lean_object* v___x_131_; 
v___x_129_ = ((size_t)0ULL);
v___x_130_ = lean_usize_of_nat(v___x_124_);
v___x_131_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_125_, v___f_127_, v_as_112_, v___x_129_, v___x_130_, v___x_122_);
v___y_115_ = v___x_131_;
goto v___jp_114_;
}
}
else
{
size_t v___x_132_; size_t v___x_133_; lean_object* v___x_134_; 
v___x_132_ = ((size_t)0ULL);
v___x_133_ = lean_usize_of_nat(v___x_124_);
v___x_134_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_125_, v___f_127_, v_as_112_, v___x_132_, v___x_133_, v___x_122_);
v___y_115_ = v___x_134_;
goto v___jp_114_;
}
}
v___jp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_116_ = lean_unsigned_to_nat(1u);
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_string_utf8_byte_size(v___y_115_);
lean_inc_ref(v___y_115_);
v___x_119_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_119_, 0, v___y_115_);
lean_ctor_set(v___x_119_, 1, v___x_117_);
lean_ctor_set(v___x_119_, 2, v___x_118_);
v___x_120_ = l_String_Slice_Pos_prevn(v___x_119_, v___x_118_, v___x_116_);
lean_dec_ref(v___x_119_);
v___x_121_ = lean_string_utf8_extract(v___y_115_, v___x_117_, v___x_120_);
lean_dec(v___x_120_);
lean_dec_ref(v___y_115_);
return v___x_121_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_arrayToLines(lean_object* v_00_u03b1_135_, lean_object* v_as_136_, lean_object* v_f_137_){
_start:
{
lean_object* v___y_139_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; 
v___x_146_ = lean_obj_once(&l_Lake_listToLines___redArg___closed__0, &l_Lake_listToLines___redArg___closed__0_once, _init_l_Lake_listToLines___redArg___closed__0);
v___x_147_ = lean_unsigned_to_nat(0u);
v___x_148_ = lean_array_get_size(v_as_136_);
v___x_149_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__9, &l_Lake_arrayToLines___redArg___closed__9_once, _init_l_Lake_arrayToLines___redArg___closed__9);
v___x_150_ = lean_nat_dec_lt(v___x_147_, v___x_148_);
if (v___x_150_ == 0)
{
lean_dec_ref(v_f_137_);
lean_dec_ref(v_as_136_);
v___y_139_ = v___x_146_;
goto v___jp_138_;
}
else
{
lean_object* v___f_151_; uint8_t v___x_152_; 
v___f_151_ = lean_alloc_closure((void*)(l_Lake_listToLines___redArg___lam__0), 3, 1);
lean_closure_set(v___f_151_, 0, v_f_137_);
v___x_152_ = lean_nat_dec_le(v___x_148_, v___x_148_);
if (v___x_152_ == 0)
{
if (v___x_150_ == 0)
{
lean_dec_ref(v___f_151_);
lean_dec_ref(v_as_136_);
v___y_139_ = v___x_146_;
goto v___jp_138_;
}
else
{
size_t v___x_153_; size_t v___x_154_; lean_object* v___x_155_; 
v___x_153_ = ((size_t)0ULL);
v___x_154_ = lean_usize_of_nat(v___x_148_);
v___x_155_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_149_, v___f_151_, v_as_136_, v___x_153_, v___x_154_, v___x_146_);
v___y_139_ = v___x_155_;
goto v___jp_138_;
}
}
else
{
size_t v___x_156_; size_t v___x_157_; lean_object* v___x_158_; 
v___x_156_ = ((size_t)0ULL);
v___x_157_ = lean_usize_of_nat(v___x_148_);
v___x_158_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_149_, v___f_151_, v_as_136_, v___x_156_, v___x_157_, v___x_146_);
v___y_139_ = v___x_158_;
goto v___jp_138_;
}
}
v___jp_138_:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_140_ = lean_unsigned_to_nat(1u);
v___x_141_ = lean_unsigned_to_nat(0u);
v___x_142_ = lean_string_utf8_byte_size(v___y_139_);
lean_inc_ref(v___y_139_);
v___x_143_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_143_, 0, v___y_139_);
lean_ctor_set(v___x_143_, 1, v___x_141_);
lean_ctor_set(v___x_143_, 2, v___x_142_);
v___x_144_ = l_String_Slice_Pos_prevn(v___x_143_, v___x_142_, v___x_140_);
lean_dec_ref(v___x_143_);
v___x_145_ = lean_string_utf8_extract(v___y_139_, v___x_141_, v___x_144_);
lean_dec(v___x_144_);
lean_dec_ref(v___y_139_);
return v___x_145_;
}
}
}
static lean_object* _init_l_Lake_instToTextJson___closed__0(void){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_alloc_closure((void*)(l_Lean_Json_compress), 1, 0);
return v___x_159_;
}
}
static lean_object* _init_l_Lake_instToTextJson(void){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_obj_once(&l_Lake_instToTextJson___closed__0, &l_Lake_instToTextJson___closed__0_once, _init_l_Lake_instToTextJson___closed__0);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextList___redArg___lam__0(lean_object* v_inst_161_, lean_object* v_x1_162_, lean_object* v_x2_163_){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_164_ = lean_apply_1(v_inst_161_, v_x2_163_);
v___x_165_ = lean_string_append(v_x1_162_, v___x_164_);
lean_dec_ref(v___x_164_);
v___x_166_ = lean_obj_once(&l_Lake_listToLines___redArg___lam__0___closed__0, &l_Lake_listToLines___redArg___lam__0___closed__0_once, _init_l_Lake_listToLines___redArg___lam__0___closed__0);
v___x_167_ = lean_string_append(v___x_165_, v___x_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextList___redArg___lam__1(lean_object* v___f_168_, lean_object* v_x_169_){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_170_ = lean_obj_once(&l_Lake_listToLines___redArg___closed__0, &l_Lake_listToLines___redArg___closed__0_once, _init_l_Lake_listToLines___redArg___closed__0);
v___x_171_ = l_List_foldl___redArg(v___f_168_, v___x_170_, v_x_169_);
v___x_172_ = lean_unsigned_to_nat(1u);
v___x_173_ = lean_unsigned_to_nat(0u);
v___x_174_ = lean_string_utf8_byte_size(v___x_171_);
lean_inc(v___x_171_);
v___x_175_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_175_, 0, v___x_171_);
lean_ctor_set(v___x_175_, 1, v___x_173_);
lean_ctor_set(v___x_175_, 2, v___x_174_);
v___x_176_ = l_String_Slice_Pos_prevn(v___x_175_, v___x_174_, v___x_172_);
lean_dec_ref(v___x_175_);
v___x_177_ = lean_string_utf8_extract(v___x_171_, v___x_173_, v___x_176_);
lean_dec(v___x_176_);
lean_dec(v___x_171_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextList___redArg(lean_object* v_inst_178_){
_start:
{
lean_object* v___f_179_; lean_object* v___f_180_; 
v___f_179_ = lean_alloc_closure((void*)(l_Lake_instToTextList___redArg___lam__0), 3, 1);
lean_closure_set(v___f_179_, 0, v_inst_178_);
v___f_180_ = lean_alloc_closure((void*)(l_Lake_instToTextList___redArg___lam__1), 2, 1);
lean_closure_set(v___f_180_, 0, v___f_179_);
return v___f_180_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextList(lean_object* v_00_u03b1_181_, lean_object* v_inst_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l_Lake_instToTextList___redArg(v_inst_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextArray___redArg___lam__1(lean_object* v___f_184_, lean_object* v_x_185_){
_start:
{
lean_object* v___y_187_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_194_ = lean_obj_once(&l_Lake_listToLines___redArg___closed__0, &l_Lake_listToLines___redArg___closed__0_once, _init_l_Lake_listToLines___redArg___closed__0);
v___x_195_ = lean_unsigned_to_nat(0u);
v___x_196_ = lean_array_get_size(v_x_185_);
v___x_197_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__9, &l_Lake_arrayToLines___redArg___closed__9_once, _init_l_Lake_arrayToLines___redArg___closed__9);
v___x_198_ = lean_nat_dec_lt(v___x_195_, v___x_196_);
if (v___x_198_ == 0)
{
lean_dec_ref(v_x_185_);
lean_dec_ref(v___f_184_);
v___y_187_ = v___x_194_;
goto v___jp_186_;
}
else
{
uint8_t v___x_199_; 
v___x_199_ = lean_nat_dec_le(v___x_196_, v___x_196_);
if (v___x_199_ == 0)
{
if (v___x_198_ == 0)
{
lean_dec_ref(v_x_185_);
lean_dec_ref(v___f_184_);
v___y_187_ = v___x_194_;
goto v___jp_186_;
}
else
{
size_t v___x_200_; size_t v___x_201_; lean_object* v___x_202_; 
v___x_200_ = ((size_t)0ULL);
v___x_201_ = lean_usize_of_nat(v___x_196_);
v___x_202_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_197_, v___f_184_, v_x_185_, v___x_200_, v___x_201_, v___x_194_);
v___y_187_ = v___x_202_;
goto v___jp_186_;
}
}
else
{
size_t v___x_203_; size_t v___x_204_; lean_object* v___x_205_; 
v___x_203_ = ((size_t)0ULL);
v___x_204_ = lean_usize_of_nat(v___x_196_);
v___x_205_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_197_, v___f_184_, v_x_185_, v___x_203_, v___x_204_, v___x_194_);
v___y_187_ = v___x_205_;
goto v___jp_186_;
}
}
v___jp_186_:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_188_ = lean_unsigned_to_nat(1u);
v___x_189_ = lean_unsigned_to_nat(0u);
v___x_190_ = lean_string_utf8_byte_size(v___y_187_);
lean_inc_ref(v___y_187_);
v___x_191_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_191_, 0, v___y_187_);
lean_ctor_set(v___x_191_, 1, v___x_189_);
lean_ctor_set(v___x_191_, 2, v___x_190_);
v___x_192_ = l_String_Slice_Pos_prevn(v___x_191_, v___x_190_, v___x_188_);
lean_dec_ref(v___x_191_);
v___x_193_ = lean_string_utf8_extract(v___y_187_, v___x_189_, v___x_192_);
lean_dec(v___x_192_);
lean_dec_ref(v___y_187_);
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextArray___redArg(lean_object* v_inst_206_){
_start:
{
lean_object* v___f_207_; lean_object* v___f_208_; 
v___f_207_ = lean_alloc_closure((void*)(l_Lake_instToTextList___redArg___lam__0), 3, 1);
lean_closure_set(v___f_207_, 0, v_inst_206_);
v___f_208_ = lean_alloc_closure((void*)(l_Lake_instToTextArray___redArg___lam__1), 2, 1);
lean_closure_set(v___f_208_, 0, v___f_207_);
return v___f_208_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToTextArray(lean_object* v_00_u03b1_209_, lean_object* v_inst_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = l_Lake_instToTextArray___redArg(v_inst_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryText___lam__0(lean_object* v_x_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = lean_obj_once(&l_Lake_listToLines___redArg___closed__0, &l_Lake_listToLines___redArg___closed__0_once, _init_l_Lake_listToLines___redArg___closed__0);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryText___lam__0___boxed(lean_object* v_x_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lake_instQueryText___lam__0(v_x_214_);
lean_dec(v_x_214_);
return v_res_215_;
}
}
static lean_object* _init_l_Lake_instQueryText___closed__0(void){
_start:
{
lean_object* v___f_216_; 
v___f_216_ = lean_alloc_closure((void*)(l_Lake_instQueryText___lam__0___boxed), 1, 0);
return v___f_216_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryText(lean_object* v_00_u03b1_217_){
_start:
{
lean_object* v___f_218_; 
v___f_218_ = lean_obj_once(&l_Lake_instQueryText___closed__0, &l_Lake_instQueryText___closed__0_once, _init_l_Lake_instQueryText___closed__0);
return v___f_218_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText___redArg(lean_object* v_inst_219_){
_start:
{
lean_inc_ref(v_inst_219_);
return v_inst_219_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText___redArg___boxed(lean_object* v_inst_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lake_instQueryTextOfToText___redArg(v_inst_220_);
lean_dec_ref(v_inst_220_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText(lean_object* v_00_u03b1_222_, lean_object* v_inst_223_){
_start:
{
lean_inc_ref(v_inst_223_);
return v_inst_223_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextOfToText___boxed(lean_object* v_00_u03b1_224_, lean_object* v_inst_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lake_instQueryTextOfToText(v_00_u03b1_224_, v_inst_225_);
lean_dec_ref(v_inst_225_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextList___redArg(lean_object* v_inst_227_){
_start:
{
lean_object* v___f_228_; lean_object* v___f_229_; 
v___f_228_ = lean_alloc_closure((void*)(l_Lake_instToTextList___redArg___lam__0), 3, 1);
lean_closure_set(v___f_228_, 0, v_inst_227_);
v___f_229_ = lean_alloc_closure((void*)(l_Lake_instToTextList___redArg___lam__1), 2, 1);
lean_closure_set(v___f_229_, 0, v___f_228_);
return v___f_229_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextList(lean_object* v_00_u03b1_230_, lean_object* v_inst_231_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l_Lake_instQueryTextList___redArg(v_inst_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextArray___redArg(lean_object* v_inst_233_){
_start:
{
lean_object* v___f_234_; lean_object* v___f_235_; 
v___f_234_ = lean_alloc_closure((void*)(l_Lake_instToTextList___redArg___lam__0), 3, 1);
lean_closure_set(v___f_234_, 0, v_inst_233_);
v___f_235_ = lean_alloc_closure((void*)(l_Lake_instToTextArray___redArg___lam__1), 2, 1);
lean_closure_set(v___f_235_, 0, v___f_234_);
return v___f_235_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextArray(lean_object* v_00_u03b1_236_, lean_object* v_inst_237_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = l_Lake_instQueryTextArray___redArg(v_inst_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryTextUnit___lam__0(lean_object* v_x_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lean_obj_once(&l_Lake_listToLines___redArg___closed__0, &l_Lake_listToLines___redArg___closed__0_once, _init_l_Lake_listToLines___redArg___closed__0);
return v___x_240_;
}
}
static lean_object* _init_l_Lake_instQueryTextUnit___closed__0(void){
_start:
{
lean_object* v___f_241_; 
v___f_241_ = lean_alloc_closure((void*)(l_Lake_instQueryTextUnit___lam__0), 1, 0);
return v___f_241_;
}
}
static lean_object* _init_l_Lake_instQueryTextUnit(void){
_start:
{
lean_object* v___f_242_; 
v___f_242_ = lean_obj_once(&l_Lake_instQueryTextUnit___closed__0, &l_Lake_instQueryTextUnit___closed__0_once, _init_l_Lake_instQueryTextUnit___closed__0);
return v___f_242_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJson___lam__0(lean_object* v_x_243_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = lean_box(0);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJson___lam__0___boxed(lean_object* v_x_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lake_instQueryJson___lam__0(v_x_245_);
lean_dec(v_x_245_);
return v_res_246_;
}
}
static lean_object* _init_l_Lake_instQueryJson___closed__0(void){
_start:
{
lean_object* v___f_247_; 
v___f_247_ = lean_alloc_closure((void*)(l_Lake_instQueryJson___lam__0___boxed), 1, 0);
return v___f_247_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJson(lean_object* v_00_u03b1_248_){
_start:
{
lean_object* v___f_249_; 
v___f_249_ = lean_obj_once(&l_Lake_instQueryJson___closed__0, &l_Lake_instQueryJson___closed__0_once, _init_l_Lake_instQueryJson___closed__0);
return v___f_249_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson___redArg(lean_object* v_inst_250_){
_start:
{
lean_inc_ref(v_inst_250_);
return v_inst_250_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson___redArg___boxed(lean_object* v_inst_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lake_instQueryJsonOfToJson___redArg(v_inst_251_);
lean_dec_ref(v_inst_251_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson(lean_object* v_00_u03b1_253_, lean_object* v_inst_254_){
_start:
{
lean_inc_ref(v_inst_254_);
return v_inst_254_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonOfToJson___boxed(lean_object* v_00_u03b1_255_, lean_object* v_inst_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Lake_instQueryJsonOfToJson(v_00_u03b1_255_, v_inst_256_);
lean_dec_ref(v_inst_256_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList___redArg___lam__0(lean_object* v_inst_258_, lean_object* v_x_259_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = lean_apply_1(v_inst_258_, v_x_259_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList___redArg___lam__1(lean_object* v___f_261_, lean_object* v_x_262_){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; size_t v_sz_265_; size_t v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_263_ = lean_array_mk(v_x_262_);
v___x_264_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__9, &l_Lake_arrayToLines___redArg___closed__9_once, _init_l_Lake_arrayToLines___redArg___closed__9);
v_sz_265_ = lean_array_size(v___x_263_);
v___x_266_ = ((size_t)0ULL);
v___x_267_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_264_, v___f_261_, v_sz_265_, v___x_266_, v___x_263_);
v___x_268_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList___redArg(lean_object* v_inst_269_){
_start:
{
lean_object* v___f_270_; lean_object* v___f_271_; 
v___f_270_ = lean_alloc_closure((void*)(l_Lake_instQueryJsonList___redArg___lam__0), 2, 1);
lean_closure_set(v___f_270_, 0, v_inst_269_);
v___f_271_ = lean_alloc_closure((void*)(l_Lake_instQueryJsonList___redArg___lam__1), 2, 1);
lean_closure_set(v___f_271_, 0, v___f_270_);
return v___f_271_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonList(lean_object* v_00_u03b1_272_, lean_object* v_inst_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lake_instQueryJsonList___redArg(v_inst_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray___redArg___lam__1(lean_object* v___f_275_, lean_object* v_x_276_){
_start:
{
lean_object* v___x_277_; size_t v_sz_278_; size_t v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_277_ = lean_obj_once(&l_Lake_arrayToLines___redArg___closed__9, &l_Lake_arrayToLines___redArg___closed__9_once, _init_l_Lake_arrayToLines___redArg___closed__9);
v_sz_278_ = lean_array_size(v_x_276_);
v___x_279_ = ((size_t)0ULL);
v___x_280_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_277_, v___f_275_, v_sz_278_, v___x_279_, v_x_276_);
v___x_281_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray___redArg(lean_object* v_inst_282_){
_start:
{
lean_object* v___f_283_; lean_object* v___f_284_; 
v___f_283_ = lean_alloc_closure((void*)(l_Lake_instQueryJsonList___redArg___lam__0), 2, 1);
lean_closure_set(v___f_283_, 0, v_inst_282_);
v___f_284_ = lean_alloc_closure((void*)(l_Lake_instQueryJsonArray___redArg___lam__1), 2, 1);
lean_closure_set(v___f_284_, 0, v___f_283_);
return v___f_284_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonArray(lean_object* v_00_u03b1_285_, lean_object* v_inst_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_Lake_instQueryJsonArray___redArg(v_inst_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lake_instQueryJsonUnit___lam__0(lean_object* v_x_288_){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = lean_box(0);
return v___x_289_;
}
}
static lean_object* _init_l_Lake_instQueryJsonUnit___closed__0(void){
_start:
{
lean_object* v___f_290_; 
v___f_290_ = lean_alloc_closure((void*)(l_Lake_instQueryJsonUnit___lam__0), 1, 0);
return v___f_290_;
}
}
static lean_object* _init_l_Lake_instQueryJsonUnit(void){
_start:
{
lean_object* v___f_291_; 
v___f_291_ = lean_obj_once(&l_Lake_instQueryJsonUnit___closed__0, &l_Lake_instQueryJsonUnit___closed__0_once, _init_l_Lake_instQueryJsonUnit___closed__0);
return v___f_291_;
}
}
LEAN_EXPORT lean_object* l_Lake_instFormatQueryOfQueryTextOfQueryJson___redArg(lean_object* v_inst_292_, lean_object* v_inst_293_){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v_inst_292_);
lean_ctor_set(v___x_294_, 1, v_inst_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lake_instFormatQueryOfQueryTextOfQueryJson(lean_object* v_00_u03b1_295_, lean_object* v_inst_296_, lean_object* v_inst_297_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_298_, 0, v_inst_296_);
lean_ctor_set(v___x_298_, 1, v_inst_297_);
return v___x_298_;
}
}
static lean_object* _init_l_Lake_nullFormat___redArg___closed__0(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = lean_box(0);
v___x_300_ = l_Lean_Json_compress(v___x_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Lake_nullFormat___redArg(uint8_t v_fmt_301_){
_start:
{
if (v_fmt_301_ == 0)
{
lean_object* v___x_302_; 
v___x_302_ = lean_obj_once(&l_Lake_listToLines___redArg___closed__0, &l_Lake_listToLines___redArg___closed__0_once, _init_l_Lake_listToLines___redArg___closed__0);
return v___x_302_;
}
else
{
lean_object* v___x_303_; 
v___x_303_ = lean_obj_once(&l_Lake_nullFormat___redArg___closed__0, &l_Lake_nullFormat___redArg___closed__0_once, _init_l_Lake_nullFormat___redArg___closed__0);
return v___x_303_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_nullFormat___redArg___boxed(lean_object* v_fmt_304_){
_start:
{
uint8_t v_fmt_boxed_305_; lean_object* v_res_306_; 
v_fmt_boxed_305_ = lean_unbox(v_fmt_304_);
v_res_306_ = l_Lake_nullFormat___redArg(v_fmt_boxed_305_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lake_nullFormat(lean_object* v_00_u03b1_307_, uint8_t v_fmt_308_, lean_object* v_x_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = l_Lake_nullFormat___redArg(v_fmt_308_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lake_nullFormat___boxed(lean_object* v_00_u03b1_311_, lean_object* v_fmt_312_, lean_object* v_x_313_){
_start:
{
uint8_t v_fmt_boxed_314_; lean_object* v_res_315_; 
v_fmt_boxed_314_ = lean_unbox(v_fmt_312_);
v_res_315_ = l_Lake_nullFormat(v_00_u03b1_311_, v_fmt_boxed_314_, v_x_313_);
lean_dec(v_x_313_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___redArg(lean_object* v_inst_316_, uint8_t v_fmt_317_, lean_object* v_a_318_){
_start:
{
if (v_fmt_317_ == 0)
{
lean_object* v_toQueryText_319_; lean_object* v___x_320_; 
v_toQueryText_319_ = lean_ctor_get(v_inst_316_, 0);
lean_inc_ref(v_toQueryText_319_);
lean_dec_ref(v_inst_316_);
v___x_320_ = lean_apply_1(v_toQueryText_319_, v_a_318_);
return v___x_320_;
}
else
{
lean_object* v_toQueryJson_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v_toQueryJson_321_ = lean_ctor_get(v_inst_316_, 1);
lean_inc_ref(v_toQueryJson_321_);
lean_dec_ref(v_inst_316_);
v___x_322_ = lean_apply_1(v_toQueryJson_321_, v_a_318_);
v___x_323_ = l_Lean_Json_compress(v___x_322_);
return v___x_323_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___redArg___boxed(lean_object* v_inst_324_, lean_object* v_fmt_325_, lean_object* v_a_326_){
_start:
{
uint8_t v_fmt_boxed_327_; lean_object* v_res_328_; 
v_fmt_boxed_327_ = lean_unbox(v_fmt_325_);
v_res_328_ = l_Lake_formatQuery___redArg(v_inst_324_, v_fmt_boxed_327_, v_a_326_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery(lean_object* v_00_u03b1_329_, lean_object* v_inst_330_, uint8_t v_fmt_331_, lean_object* v_a_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Lake_formatQuery___redArg(v_inst_330_, v_fmt_331_, v_a_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___boxed(lean_object* v_00_u03b1_334_, lean_object* v_inst_335_, lean_object* v_fmt_336_, lean_object* v_a_337_){
_start:
{
uint8_t v_fmt_boxed_338_; lean_object* v_res_339_; 
v_fmt_boxed_338_ = lean_unbox(v_fmt_336_);
v_res_339_ = l_Lake_formatQuery(v_00_u03b1_334_, v_inst_335_, v_fmt_boxed_338_, v_a_337_);
return v_res_339_;
}
}
static lean_object* _init_l_Lake_ppImport___closed__0(void){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = lean_mk_string_unchecked("import ", 7, 7);
return v___x_340_;
}
}
static lean_object* _init_l_Lake_ppImport___closed__1(void){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = lean_mk_string_unchecked("all ", 4, 4);
return v___x_341_;
}
}
static lean_object* _init_l_Lake_ppImport___closed__2(void){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = lean_mk_string_unchecked("meta ", 5, 5);
return v___x_342_;
}
}
static lean_object* _init_l_Lake_ppImport___closed__3(void){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = lean_mk_string_unchecked("public ", 7, 7);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lake_ppImport(lean_object* v_imp_344_, uint8_t v_isModule_345_, lean_object* v_init_346_){
_start:
{
lean_object* v_s_348_; lean_object* v_s_354_; lean_object* v_s_361_; 
if (v_isModule_345_ == 0)
{
v_s_361_ = v_init_346_;
goto v___jp_360_;
}
else
{
uint8_t v_isExported_365_; 
v_isExported_365_ = lean_ctor_get_uint8(v_imp_344_, sizeof(void*)*1 + 1);
if (v_isExported_365_ == 0)
{
v_s_361_ = v_init_346_;
goto v___jp_360_;
}
else
{
lean_object* v___x_366_; lean_object* v_s_367_; 
v___x_366_ = lean_obj_once(&l_Lake_ppImport___closed__3, &l_Lake_ppImport___closed__3_once, _init_l_Lake_ppImport___closed__3);
v_s_367_ = lean_string_append(v_init_346_, v___x_366_);
v_s_361_ = v_s_367_;
goto v___jp_360_;
}
}
v___jp_347_:
{
lean_object* v_module_349_; uint8_t v___x_350_; lean_object* v___x_351_; lean_object* v_s_352_; 
v_module_349_ = lean_ctor_get(v_imp_344_, 0);
lean_inc(v_module_349_);
lean_dec_ref(v_imp_344_);
v___x_350_ = 1;
v___x_351_ = l_Lean_Name_toString(v_module_349_, v___x_350_);
v_s_352_ = lean_string_append(v_s_348_, v___x_351_);
lean_dec_ref(v___x_351_);
return v_s_352_;
}
v___jp_353_:
{
uint8_t v_importAll_355_; lean_object* v___x_356_; lean_object* v_s_357_; 
v_importAll_355_ = lean_ctor_get_uint8(v_imp_344_, sizeof(void*)*1);
v___x_356_ = lean_obj_once(&l_Lake_ppImport___closed__0, &l_Lake_ppImport___closed__0_once, _init_l_Lake_ppImport___closed__0);
v_s_357_ = lean_string_append(v_s_354_, v___x_356_);
if (v_importAll_355_ == 0)
{
v_s_348_ = v_s_357_;
goto v___jp_347_;
}
else
{
lean_object* v___x_358_; lean_object* v_s_359_; 
v___x_358_ = lean_obj_once(&l_Lake_ppImport___closed__1, &l_Lake_ppImport___closed__1_once, _init_l_Lake_ppImport___closed__1);
v_s_359_ = lean_string_append(v_s_357_, v___x_358_);
v_s_348_ = v_s_359_;
goto v___jp_347_;
}
}
v___jp_360_:
{
uint8_t v_isMeta_362_; 
v_isMeta_362_ = lean_ctor_get_uint8(v_imp_344_, sizeof(void*)*1 + 2);
if (v_isMeta_362_ == 0)
{
v_s_354_ = v_s_361_;
goto v___jp_353_;
}
else
{
lean_object* v___x_363_; lean_object* v_s_364_; 
v___x_363_ = lean_obj_once(&l_Lake_ppImport___closed__2, &l_Lake_ppImport___closed__2_once, _init_l_Lake_ppImport___closed__2);
v_s_364_ = lean_string_append(v_s_361_, v___x_363_);
v_s_354_ = v_s_364_;
goto v___jp_353_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ppImport___boxed(lean_object* v_imp_368_, lean_object* v_isModule_369_, lean_object* v_init_370_){
_start:
{
uint8_t v_isModule_boxed_371_; lean_object* v_res_372_; 
v_isModule_boxed_371_ = lean_unbox(v_isModule_369_);
v_res_372_ = l_Lake_ppImport(v_imp_368_, v_isModule_boxed_371_, v_init_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0(uint8_t v_isModule_373_, lean_object* v_as_374_, size_t v_i_375_, size_t v_stop_376_, lean_object* v_b_377_){
_start:
{
uint8_t v___x_378_; 
v___x_378_ = lean_usize_dec_eq(v_i_375_, v_stop_376_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; uint32_t v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; size_t v___x_383_; size_t v___x_384_; 
v___x_379_ = lean_array_uget_borrowed(v_as_374_, v_i_375_);
v___x_380_ = 10;
v___x_381_ = lean_string_push(v_b_377_, v___x_380_);
lean_inc(v___x_379_);
v___x_382_ = l_Lake_ppImport(v___x_379_, v_isModule_373_, v___x_381_);
v___x_383_ = ((size_t)1ULL);
v___x_384_ = lean_usize_add(v_i_375_, v___x_383_);
v_i_375_ = v___x_384_;
v_b_377_ = v___x_382_;
goto _start;
}
else
{
return v_b_377_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0___boxed(lean_object* v_isModule_386_, lean_object* v_as_387_, lean_object* v_i_388_, lean_object* v_stop_389_, lean_object* v_b_390_){
_start:
{
uint8_t v_isModule_boxed_391_; size_t v_i_boxed_392_; size_t v_stop_boxed_393_; lean_object* v_res_394_; 
v_isModule_boxed_391_ = lean_unbox(v_isModule_386_);
v_i_boxed_392_ = lean_unbox_usize(v_i_388_);
lean_dec(v_i_388_);
v_stop_boxed_393_ = lean_unbox_usize(v_stop_389_);
lean_dec(v_stop_389_);
v_res_394_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0(v_isModule_boxed_391_, v_as_387_, v_i_boxed_392_, v_stop_boxed_393_, v_b_390_);
lean_dec_ref(v_as_387_);
return v_res_394_;
}
}
static lean_object* _init_l_Lake_ppModuleHeader___closed__0(void){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = lean_mk_string_unchecked("prelude", 7, 7);
return v___x_395_;
}
}
static lean_object* _init_l_Lake_ppModuleHeader___closed__1(void){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = lean_mk_string_unchecked("module prelude", 14, 14);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lake_ppModuleHeader(lean_object* v_header_397_){
_start:
{
lean_object* v_imports_398_; uint8_t v_isModule_399_; lean_object* v___y_401_; 
v_imports_398_ = lean_ctor_get(v_header_397_, 0);
v_isModule_399_ = lean_ctor_get_uint8(v_header_397_, sizeof(void*)*1);
if (v_isModule_399_ == 0)
{
lean_object* v___x_412_; 
v___x_412_ = lean_obj_once(&l_Lake_ppModuleHeader___closed__0, &l_Lake_ppModuleHeader___closed__0_once, _init_l_Lake_ppModuleHeader___closed__0);
v___y_401_ = v___x_412_;
goto v___jp_400_;
}
else
{
lean_object* v___x_413_; 
v___x_413_ = lean_obj_once(&l_Lake_ppModuleHeader___closed__1, &l_Lake_ppModuleHeader___closed__1_once, _init_l_Lake_ppModuleHeader___closed__1);
v___y_401_ = v___x_413_;
goto v___jp_400_;
}
v___jp_400_:
{
lean_object* v___x_402_; lean_object* v___x_403_; uint8_t v___x_404_; 
v___x_402_ = lean_unsigned_to_nat(0u);
v___x_403_ = lean_array_get_size(v_imports_398_);
v___x_404_ = lean_nat_dec_lt(v___x_402_, v___x_403_);
if (v___x_404_ == 0)
{
lean_inc_ref(v___y_401_);
return v___y_401_;
}
else
{
uint8_t v___x_405_; 
v___x_405_ = lean_nat_dec_le(v___x_403_, v___x_403_);
if (v___x_405_ == 0)
{
if (v___x_404_ == 0)
{
lean_inc_ref(v___y_401_);
return v___y_401_;
}
else
{
size_t v___x_406_; size_t v___x_407_; lean_object* v___x_408_; 
v___x_406_ = ((size_t)0ULL);
v___x_407_ = lean_usize_of_nat(v___x_403_);
lean_inc_ref(v___y_401_);
v___x_408_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0(v_isModule_399_, v_imports_398_, v___x_406_, v___x_407_, v___y_401_);
return v___x_408_;
}
}
else
{
size_t v___x_409_; size_t v___x_410_; lean_object* v___x_411_; 
v___x_409_ = ((size_t)0ULL);
v___x_410_ = lean_usize_of_nat(v___x_403_);
lean_inc_ref(v___y_401_);
v___x_411_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_ppModuleHeader_spec__0(v_isModule_399_, v_imports_398_, v___x_409_, v___x_410_, v___y_401_);
return v___x_411_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ppModuleHeader___boxed(lean_object* v_header_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lake_ppModuleHeader(v_header_414_);
lean_dec_ref(v_header_414_);
return v_res_415_;
}
}
static lean_object* _init_l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader___closed__0(void){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = lean_alloc_closure((void*)(l_Lake_ppModuleHeader___boxed), 1, 0);
return v___x_416_;
}
}
static lean_object* _init_l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader(void){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = lean_obj_once(&l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader___closed__0, &l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader___closed__0_once, _init_l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader___closed__0);
return v___x_417_;
}
}
lean_object* runtime_initialize_Lean_Setup(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_OutFormat(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Setup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instToTextJson = _init_l_Lake_instToTextJson();
lean_mark_persistent(l_Lake_instToTextJson);
l_Lake_instQueryTextUnit = _init_l_Lake_instQueryTextUnit();
lean_mark_persistent(l_Lake_instQueryTextUnit);
l_Lake_instQueryJsonUnit = _init_l_Lake_instQueryJsonUnit();
lean_mark_persistent(l_Lake_instQueryJsonUnit);
l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader = _init_l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader();
lean_mark_persistent(l___private_Lake_Config_OutFormat_0__Lake_instQueryTextModuleHeader);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_OutFormat(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Setup(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_OutFormat(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Setup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_OutFormat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_OutFormat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_OutFormat(builtin);
}
#ifdef __cplusplus
}
#endif
