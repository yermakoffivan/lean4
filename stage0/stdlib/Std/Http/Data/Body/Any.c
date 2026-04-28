// Lean compiler output
// Module: Std.Http.Data.Body.Any
// Imports: public import Std.Http.Data.Body.Basic
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
LEAN_EXPORT lean_object* l_Std_Http_Body_Any_ofBody___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Any_ofBody(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__5(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__6___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Body_instAny___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instAny___closed__0;
static lean_once_cell_t l_Std_Http_Body_instAny___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instAny___closed__1;
static lean_once_cell_t l_Std_Http_Body_instAny___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instAny___closed__2;
static lean_once_cell_t l_Std_Http_Body_instAny___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instAny___closed__3;
static lean_once_cell_t l_Std_Http_Body_instAny___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instAny___closed__4;
static lean_once_cell_t l_Std_Http_Body_instAny___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instAny___closed__5;
static lean_once_cell_t l_Std_Http_Body_instAny___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instAny___closed__6;
static lean_once_cell_t l_Std_Http_Body_instAny___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_instAny___closed__7;
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny;
LEAN_EXPORT lean_object* l_Std_Http_Body_Any_ofBody___redArg(lean_object* v_inst_1_, lean_object* v_body_2_){
_start:
{
lean_object* v_recv_3_; lean_object* v_close_4_; lean_object* v_isClosed_5_; lean_object* v_recvSelector_6_; lean_object* v_tryRecv_7_; lean_object* v_getKnownSize_8_; lean_object* v_setKnownSize_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_23_; 
v_recv_3_ = lean_ctor_get(v_inst_1_, 0);
v_close_4_ = lean_ctor_get(v_inst_1_, 1);
v_isClosed_5_ = lean_ctor_get(v_inst_1_, 2);
v_recvSelector_6_ = lean_ctor_get(v_inst_1_, 3);
v_tryRecv_7_ = lean_ctor_get(v_inst_1_, 4);
v_getKnownSize_8_ = lean_ctor_get(v_inst_1_, 5);
v_setKnownSize_9_ = lean_ctor_get(v_inst_1_, 6);
v_isSharedCheck_23_ = !lean_is_exclusive(v_inst_1_);
if (v_isSharedCheck_23_ == 0)
{
v___x_11_ = v_inst_1_;
v_isShared_12_ = v_isSharedCheck_23_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_setKnownSize_9_);
lean_inc(v_getKnownSize_8_);
lean_inc(v_tryRecv_7_);
lean_inc(v_recvSelector_6_);
lean_inc(v_isClosed_5_);
lean_inc(v_close_4_);
lean_inc(v_recv_3_);
lean_dec(v_inst_1_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_23_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_21_; 
lean_inc_n(v_body_2_, 6);
v___x_13_ = lean_apply_1(v_recv_3_, v_body_2_);
v___x_14_ = lean_apply_1(v_close_4_, v_body_2_);
v___x_15_ = lean_apply_1(v_isClosed_5_, v_body_2_);
v___x_16_ = lean_apply_1(v_recvSelector_6_, v_body_2_);
v___x_17_ = lean_apply_1(v_tryRecv_7_, v_body_2_);
v___x_18_ = lean_apply_1(v_getKnownSize_8_, v_body_2_);
v___x_19_ = lean_apply_1(v_setKnownSize_9_, v_body_2_);
if (v_isShared_12_ == 0)
{
lean_ctor_set(v___x_11_, 6, v___x_19_);
lean_ctor_set(v___x_11_, 5, v___x_18_);
lean_ctor_set(v___x_11_, 4, v___x_17_);
lean_ctor_set(v___x_11_, 3, v___x_16_);
lean_ctor_set(v___x_11_, 2, v___x_15_);
lean_ctor_set(v___x_11_, 1, v___x_14_);
lean_ctor_set(v___x_11_, 0, v___x_13_);
v___x_21_ = v___x_11_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v___x_13_);
lean_ctor_set(v_reuseFailAlloc_22_, 1, v___x_14_);
lean_ctor_set(v_reuseFailAlloc_22_, 2, v___x_15_);
lean_ctor_set(v_reuseFailAlloc_22_, 3, v___x_16_);
lean_ctor_set(v_reuseFailAlloc_22_, 4, v___x_17_);
lean_ctor_set(v_reuseFailAlloc_22_, 5, v___x_18_);
lean_ctor_set(v_reuseFailAlloc_22_, 6, v___x_19_);
v___x_21_ = v_reuseFailAlloc_22_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
return v___x_21_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Any_ofBody(lean_object* v_00_u03b1_24_, lean_object* v_inst_25_, lean_object* v_body_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Std_Http_Body_Any_ofBody___redArg(v_inst_25_, v_body_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__0(lean_object* v_self_28_){
_start:
{
lean_object* v_recv_30_; lean_object* v___x_31_; 
v_recv_30_ = lean_ctor_get(v_self_28_, 0);
lean_inc_ref(v_recv_30_);
lean_dec_ref(v_self_28_);
v___x_31_ = lean_apply_1(v_recv_30_, lean_box(0));
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__0___boxed(lean_object* v_self_32_, lean_object* v___y_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Std_Http_Body_instAny___lam__0(v_self_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__1(lean_object* v_self_35_){
_start:
{
lean_object* v_close_37_; lean_object* v___x_38_; 
v_close_37_ = lean_ctor_get(v_self_35_, 1);
lean_inc_ref(v_close_37_);
lean_dec_ref(v_self_35_);
v___x_38_ = lean_apply_1(v_close_37_, lean_box(0));
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__1___boxed(lean_object* v_self_39_, lean_object* v___y_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l_Std_Http_Body_instAny___lam__1(v_self_39_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__2(lean_object* v_self_42_){
_start:
{
lean_object* v_isClosed_44_; lean_object* v___x_45_; 
v_isClosed_44_ = lean_ctor_get(v_self_42_, 2);
lean_inc_ref(v_isClosed_44_);
lean_dec_ref(v_self_42_);
v___x_45_ = lean_apply_1(v_isClosed_44_, lean_box(0));
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__2___boxed(lean_object* v_self_46_, lean_object* v___y_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Std_Http_Body_instAny___lam__2(v_self_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__3(lean_object* v_self_49_){
_start:
{
lean_object* v_recvSelector_50_; 
v_recvSelector_50_ = lean_ctor_get(v_self_49_, 3);
lean_inc_ref(v_recvSelector_50_);
return v_recvSelector_50_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__3___boxed(lean_object* v_self_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Std_Http_Body_instAny___lam__3(v_self_51_);
lean_dec_ref(v_self_51_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__4(lean_object* v_self_53_){
_start:
{
lean_object* v_tryRecv_55_; lean_object* v___x_56_; 
v_tryRecv_55_ = lean_ctor_get(v_self_53_, 4);
lean_inc_ref(v_tryRecv_55_);
lean_dec_ref(v_self_53_);
v___x_56_ = lean_apply_1(v_tryRecv_55_, lean_box(0));
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__4___boxed(lean_object* v_self_57_, lean_object* v___y_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Std_Http_Body_instAny___lam__4(v_self_57_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__5(lean_object* v_self_60_){
_start:
{
lean_object* v_getKnownSize_62_; lean_object* v___x_63_; 
v_getKnownSize_62_ = lean_ctor_get(v_self_60_, 5);
lean_inc_ref(v_getKnownSize_62_);
lean_dec_ref(v_self_60_);
v___x_63_ = lean_apply_1(v_getKnownSize_62_, lean_box(0));
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__5___boxed(lean_object* v_self_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Std_Http_Body_instAny___lam__5(v_self_64_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__6(lean_object* v_self_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_setKnownSize_70_; lean_object* v___x_71_; 
v_setKnownSize_70_ = lean_ctor_get(v_self_67_, 6);
lean_inc_ref(v_setKnownSize_70_);
lean_dec_ref(v_self_67_);
v___x_71_ = lean_apply_2(v_setKnownSize_70_, v___y_68_, lean_box(0));
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instAny___lam__6___boxed(lean_object* v_self_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Std_Http_Body_instAny___lam__6(v_self_72_, v___y_73_);
return v_res_75_;
}
}
static lean_object* _init_l_Std_Http_Body_instAny___closed__0(void){
_start:
{
lean_object* v___f_76_; 
v___f_76_ = lean_alloc_closure((void*)(l_Std_Http_Body_instAny___lam__0___boxed), 2, 0);
return v___f_76_;
}
}
static lean_object* _init_l_Std_Http_Body_instAny___closed__1(void){
_start:
{
lean_object* v___f_77_; 
v___f_77_ = lean_alloc_closure((void*)(l_Std_Http_Body_instAny___lam__1___boxed), 2, 0);
return v___f_77_;
}
}
static lean_object* _init_l_Std_Http_Body_instAny___closed__2(void){
_start:
{
lean_object* v___f_78_; 
v___f_78_ = lean_alloc_closure((void*)(l_Std_Http_Body_instAny___lam__2___boxed), 2, 0);
return v___f_78_;
}
}
static lean_object* _init_l_Std_Http_Body_instAny___closed__3(void){
_start:
{
lean_object* v___f_79_; 
v___f_79_ = lean_alloc_closure((void*)(l_Std_Http_Body_instAny___lam__3___boxed), 1, 0);
return v___f_79_;
}
}
static lean_object* _init_l_Std_Http_Body_instAny___closed__4(void){
_start:
{
lean_object* v___f_80_; 
v___f_80_ = lean_alloc_closure((void*)(l_Std_Http_Body_instAny___lam__4___boxed), 2, 0);
return v___f_80_;
}
}
static lean_object* _init_l_Std_Http_Body_instAny___closed__5(void){
_start:
{
lean_object* v___f_81_; 
v___f_81_ = lean_alloc_closure((void*)(l_Std_Http_Body_instAny___lam__5___boxed), 2, 0);
return v___f_81_;
}
}
static lean_object* _init_l_Std_Http_Body_instAny___closed__6(void){
_start:
{
lean_object* v___f_82_; 
v___f_82_ = lean_alloc_closure((void*)(l_Std_Http_Body_instAny___lam__6___boxed), 3, 0);
return v___f_82_;
}
}
static lean_object* _init_l_Std_Http_Body_instAny___closed__7(void){
_start:
{
lean_object* v___f_83_; lean_object* v___f_84_; lean_object* v___f_85_; lean_object* v___f_86_; lean_object* v___f_87_; lean_object* v___f_88_; lean_object* v___f_89_; lean_object* v___x_90_; 
v___f_83_ = lean_obj_once(&l_Std_Http_Body_instAny___closed__6, &l_Std_Http_Body_instAny___closed__6_once, _init_l_Std_Http_Body_instAny___closed__6);
v___f_84_ = lean_obj_once(&l_Std_Http_Body_instAny___closed__5, &l_Std_Http_Body_instAny___closed__5_once, _init_l_Std_Http_Body_instAny___closed__5);
v___f_85_ = lean_obj_once(&l_Std_Http_Body_instAny___closed__4, &l_Std_Http_Body_instAny___closed__4_once, _init_l_Std_Http_Body_instAny___closed__4);
v___f_86_ = lean_obj_once(&l_Std_Http_Body_instAny___closed__3, &l_Std_Http_Body_instAny___closed__3_once, _init_l_Std_Http_Body_instAny___closed__3);
v___f_87_ = lean_obj_once(&l_Std_Http_Body_instAny___closed__2, &l_Std_Http_Body_instAny___closed__2_once, _init_l_Std_Http_Body_instAny___closed__2);
v___f_88_ = lean_obj_once(&l_Std_Http_Body_instAny___closed__1, &l_Std_Http_Body_instAny___closed__1_once, _init_l_Std_Http_Body_instAny___closed__1);
v___f_89_ = lean_obj_once(&l_Std_Http_Body_instAny___closed__0, &l_Std_Http_Body_instAny___closed__0_once, _init_l_Std_Http_Body_instAny___closed__0);
v___x_90_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_90_, 0, v___f_89_);
lean_ctor_set(v___x_90_, 1, v___f_88_);
lean_ctor_set(v___x_90_, 2, v___f_87_);
lean_ctor_set(v___x_90_, 3, v___f_86_);
lean_ctor_set(v___x_90_, 4, v___f_85_);
lean_ctor_set(v___x_90_, 5, v___f_84_);
lean_ctor_set(v___x_90_, 6, v___f_83_);
return v___x_90_;
}
}
static lean_object* _init_l_Std_Http_Body_instAny(void){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_obj_once(&l_Std_Http_Body_instAny___closed__7, &l_Std_Http_Body_instAny___closed__7_once, _init_l_Std_Http_Body_instAny___closed__7);
return v___x_91_;
}
}
lean_object* runtime_initialize_Std_Http_Data_Body_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Body_Any(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Http_Data_Body_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_Body_instAny = _init_l_Std_Http_Body_instAny();
lean_mark_persistent(l_Std_Http_Body_instAny);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Body_Any(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Data_Body_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Body_Any(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Data_Body_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Any(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Body_Any(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Body_Any(builtin);
}
#ifdef __cplusplus
}
#endif
