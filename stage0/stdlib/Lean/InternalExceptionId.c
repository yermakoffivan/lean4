// Lean compiler output
// Module: Lean.InternalExceptionId
// Imports: public import Init.System.IO import Init.Data.ToString.Name import Init.Data.ToString.Macro
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedInternalExceptionId_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedInternalExceptionId;
LEAN_EXPORT uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqInternalExceptionId_beq___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instBEqInternalExceptionId___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instBEqInternalExceptionId___closed__0;
LEAN_EXPORT lean_object* l_Lean_instBEqInternalExceptionId;
static lean_once_cell_t l___private_Lean_InternalExceptionId_0__Lean_initFn___closed__0_00___x40_Lean_InternalExceptionId_142494046____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_InternalExceptionId_0__Lean_initFn___closed__0_00___x40_Lean_InternalExceptionId_142494046____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_InternalExceptionId_0__Lean_initFn_00___x40_Lean_InternalExceptionId_142494046____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_InternalExceptionId_0__Lean_initFn_00___x40_Lean_InternalExceptionId_142494046____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_internalExceptionsRef;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_registerInternalExceptionId_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_registerInternalExceptionId_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_registerInternalExceptionId_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_registerInternalExceptionId_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_registerInternalExceptionId___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerInternalExceptionId___closed__0;
static lean_once_cell_t l_Lean_registerInternalExceptionId___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerInternalExceptionId___closed__1;
LEAN_EXPORT lean_object* l_Lean_registerInternalExceptionId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerInternalExceptionId___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_InternalExceptionId_toString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_InternalExceptionId_toString___closed__0;
LEAN_EXPORT lean_object* l_Lean_InternalExceptionId_toString(lean_object*);
static lean_once_cell_t l_Lean_InternalExceptionId_getName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_InternalExceptionId_getName___closed__0;
static lean_once_cell_t l_Lean_InternalExceptionId_getName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_InternalExceptionId_getName___closed__1;
LEAN_EXPORT lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_InternalExceptionId_getName___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Lean_instInhabitedInternalExceptionId_default(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_unsigned_to_nat(0u);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_instInhabitedInternalExceptionId(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object* v_x_3_, lean_object* v_x_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_nat_dec_eq(v_x_3_, v_x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqInternalExceptionId_beq___boxed(lean_object* v_x_6_, lean_object* v_x_7_){
_start:
{
uint8_t v_res_8_; lean_object* v_r_9_; 
v_res_8_ = l_Lean_instBEqInternalExceptionId_beq(v_x_6_, v_x_7_);
lean_dec(v_x_7_);
lean_dec(v_x_6_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
static lean_object* _init_l_Lean_instBEqInternalExceptionId___closed__0(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_alloc_closure((void*)(l_Lean_instBEqInternalExceptionId_beq___boxed), 2, 0);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_instBEqInternalExceptionId(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_obj_once(&l_Lean_instBEqInternalExceptionId___closed__0, &l_Lean_instBEqInternalExceptionId___closed__0_once, _init_l_Lean_instBEqInternalExceptionId___closed__0);
return v___x_11_;
}
}
static lean_object* _init_l___private_Lean_InternalExceptionId_0__Lean_initFn___closed__0_00___x40_Lean_InternalExceptionId_142494046____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = lean_unsigned_to_nat(0u);
v___x_13_ = lean_mk_empty_array_with_capacity(v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_InternalExceptionId_0__Lean_initFn_00___x40_Lean_InternalExceptionId_142494046____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = lean_obj_once(&l___private_Lean_InternalExceptionId_0__Lean_initFn___closed__0_00___x40_Lean_InternalExceptionId_142494046____hygCtx___hyg_2_, &l___private_Lean_InternalExceptionId_0__Lean_initFn___closed__0_00___x40_Lean_InternalExceptionId_142494046____hygCtx___hyg_2__once, _init_l___private_Lean_InternalExceptionId_0__Lean_initFn___closed__0_00___x40_Lean_InternalExceptionId_142494046____hygCtx___hyg_2_);
v___x_16_ = lean_st_mk_ref(v___x_15_);
v___x_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_InternalExceptionId_0__Lean_initFn_00___x40_Lean_InternalExceptionId_142494046____hygCtx___hyg_2____boxed(lean_object* v_a_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = l___private_Lean_InternalExceptionId_0__Lean_initFn_00___x40_Lean_InternalExceptionId_142494046____hygCtx___hyg_2_();
return v_res_19_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_registerInternalExceptionId_spec__0_spec__0(lean_object* v_a_20_, lean_object* v_as_21_, size_t v_i_22_, size_t v_stop_23_){
_start:
{
uint8_t v___x_24_; 
v___x_24_ = lean_usize_dec_eq(v_i_22_, v_stop_23_);
if (v___x_24_ == 0)
{
lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_25_ = lean_array_uget_borrowed(v_as_21_, v_i_22_);
v___x_26_ = lean_name_eq(v_a_20_, v___x_25_);
if (v___x_26_ == 0)
{
size_t v___x_27_; size_t v___x_28_; 
v___x_27_ = ((size_t)1ULL);
v___x_28_ = lean_usize_add(v_i_22_, v___x_27_);
v_i_22_ = v___x_28_;
goto _start;
}
else
{
return v___x_26_;
}
}
else
{
uint8_t v___x_30_; 
v___x_30_ = 0;
return v___x_30_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_registerInternalExceptionId_spec__0_spec__0___boxed(lean_object* v_a_31_, lean_object* v_as_32_, lean_object* v_i_33_, lean_object* v_stop_34_){
_start:
{
size_t v_i_boxed_35_; size_t v_stop_boxed_36_; uint8_t v_res_37_; lean_object* v_r_38_; 
v_i_boxed_35_ = lean_unbox_usize(v_i_33_);
lean_dec(v_i_33_);
v_stop_boxed_36_ = lean_unbox_usize(v_stop_34_);
lean_dec(v_stop_34_);
v_res_37_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_registerInternalExceptionId_spec__0_spec__0(v_a_31_, v_as_32_, v_i_boxed_35_, v_stop_boxed_36_);
lean_dec_ref(v_as_32_);
lean_dec(v_a_31_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_registerInternalExceptionId_spec__0(lean_object* v_as_39_, lean_object* v_a_40_){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; uint8_t v___x_43_; 
v___x_41_ = lean_unsigned_to_nat(0u);
v___x_42_ = lean_array_get_size(v_as_39_);
v___x_43_ = lean_nat_dec_lt(v___x_41_, v___x_42_);
if (v___x_43_ == 0)
{
return v___x_43_;
}
else
{
if (v___x_43_ == 0)
{
return v___x_43_;
}
else
{
size_t v___x_44_; size_t v___x_45_; uint8_t v___x_46_; 
v___x_44_ = ((size_t)0ULL);
v___x_45_ = lean_usize_of_nat(v___x_42_);
v___x_46_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_registerInternalExceptionId_spec__0_spec__0(v_a_40_, v_as_39_, v___x_44_, v___x_45_);
return v___x_46_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_registerInternalExceptionId_spec__0___boxed(lean_object* v_as_47_, lean_object* v_a_48_){
_start:
{
uint8_t v_res_49_; lean_object* v_r_50_; 
v_res_49_ = l_Array_contains___at___00Lean_registerInternalExceptionId_spec__0(v_as_47_, v_a_48_);
lean_dec(v_a_48_);
lean_dec_ref(v_as_47_);
v_r_50_ = lean_box(v_res_49_);
return v_r_50_;
}
}
static lean_object* _init_l_Lean_registerInternalExceptionId___closed__0(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_mk_string_unchecked("invalid internal exception id, '", 32, 32);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_registerInternalExceptionId___closed__1(void){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lean_mk_string_unchecked("' has already been used", 23, 23);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerInternalExceptionId(lean_object* v_name_53_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_55_ = l_Lean_internalExceptionsRef;
v___x_56_ = lean_st_ref_get(v___x_55_);
v___x_57_ = l_Array_contains___at___00Lean_registerInternalExceptionId_spec__0(v___x_56_, v_name_53_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_58_ = lean_st_ref_take(v___x_55_);
v___x_59_ = lean_array_push(v___x_58_, v_name_53_);
v___x_60_ = lean_st_ref_set(v___x_55_, v___x_59_);
v___x_61_ = lean_array_get_size(v___x_56_);
lean_dec(v___x_56_);
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
return v___x_62_;
}
else
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
lean_dec(v___x_56_);
v___x_63_ = lean_obj_once(&l_Lean_registerInternalExceptionId___closed__0, &l_Lean_registerInternalExceptionId___closed__0_once, _init_l_Lean_registerInternalExceptionId___closed__0);
v___x_64_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_53_, v___x_57_);
v___x_65_ = lean_string_append(v___x_63_, v___x_64_);
lean_dec_ref(v___x_64_);
v___x_66_ = lean_obj_once(&l_Lean_registerInternalExceptionId___closed__1, &l_Lean_registerInternalExceptionId___closed__1_once, _init_l_Lean_registerInternalExceptionId___closed__1);
v___x_67_ = lean_string_append(v___x_65_, v___x_66_);
v___x_68_ = lean_mk_io_user_error(v___x_67_);
v___x_69_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
return v___x_69_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerInternalExceptionId___boxed(lean_object* v_name_70_, lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_registerInternalExceptionId(v_name_70_);
return v_res_72_;
}
}
static lean_object* _init_l_Lean_InternalExceptionId_toString___closed__0(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_mk_string_unchecked("internal exception #", 20, 20);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_InternalExceptionId_toString(lean_object* v_id_74_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_75_ = lean_obj_once(&l_Lean_InternalExceptionId_toString___closed__0, &l_Lean_InternalExceptionId_toString___closed__0_once, _init_l_Lean_InternalExceptionId_toString___closed__0);
v___x_76_ = l_Nat_reprFast(v_id_74_);
v___x_77_ = lean_string_append(v___x_75_, v___x_76_);
lean_dec_ref(v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_l_Lean_InternalExceptionId_getName___closed__0(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_mk_string_unchecked("invalid internal exception id", 29, 29);
return v___x_78_;
}
}
static lean_object* _init_l_Lean_InternalExceptionId_getName___closed__1(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = lean_obj_once(&l_Lean_InternalExceptionId_getName___closed__0, &l_Lean_InternalExceptionId_getName___closed__0_once, _init_l_Lean_InternalExceptionId_getName___closed__0);
v___x_80_ = lean_mk_io_user_error(v___x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_InternalExceptionId_getName(lean_object* v_id_81_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_83_ = l_Lean_internalExceptionsRef;
v___x_84_ = lean_st_ref_get(v___x_83_);
v___x_85_ = lean_array_get_size(v___x_84_);
v___x_86_ = lean_nat_dec_lt(v_id_81_, v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; 
lean_dec(v___x_84_);
v___x_87_ = lean_obj_once(&l_Lean_InternalExceptionId_getName___closed__1, &l_Lean_InternalExceptionId_getName___closed__1_once, _init_l_Lean_InternalExceptionId_getName___closed__1);
v___x_88_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
return v___x_88_;
}
else
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_array_fget(v___x_84_, v_id_81_);
lean_dec(v___x_84_);
v___x_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
return v___x_90_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_InternalExceptionId_getName___boxed(lean_object* v_id_91_, lean_object* v_a_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_InternalExceptionId_getName(v_id_91_);
lean_dec(v_id_91_);
return v_res_93_;
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Name(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_InternalExceptionId(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedInternalExceptionId_default = _init_l_Lean_instInhabitedInternalExceptionId_default();
lean_mark_persistent(l_Lean_instInhabitedInternalExceptionId_default);
l_Lean_instInhabitedInternalExceptionId = _init_l_Lean_instInhabitedInternalExceptionId();
lean_mark_persistent(l_Lean_instInhabitedInternalExceptionId);
l_Lean_instBEqInternalExceptionId = _init_l_Lean_instBEqInternalExceptionId();
lean_mark_persistent(l_Lean_instBEqInternalExceptionId);
res = l___private_Lean_InternalExceptionId_0__Lean_initFn_00___x40_Lean_InternalExceptionId_142494046____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_internalExceptionsRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_internalExceptionsRef);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_InternalExceptionId(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Name(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_InternalExceptionId(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_InternalExceptionId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_InternalExceptionId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_InternalExceptionId(builtin);
}
#ifdef __cplusplus
}
#endif
