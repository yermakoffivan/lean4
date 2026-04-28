// Lean compiler output
// Module: Lake.Config.WorkspaceConfig
// Imports: public import Lake.Config.Defaults public import Lake.Config.MetaClasses meta import all Lake.Config.Meta import Lake.Config.Meta
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_defaultPackagesDir;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instInhabitedWorkspaceConfig_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedWorkspaceConfig;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprWorkspaceConfig_repr_spec__0(lean_object*);
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__0;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__1;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__2;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__3;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__4;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__5;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__6;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__7;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__8;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__9;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__10;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__11;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__12;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__13;
static lean_once_cell_t l_Lake_instReprWorkspaceConfig_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg___closed__14;
LEAN_EXPORT lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprWorkspaceConfig_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprWorkspaceConfig_repr___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instReprWorkspaceConfig___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprWorkspaceConfig___closed__0;
LEAN_EXPORT lean_object* l_Lake_instReprWorkspaceConfig;
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__3___boxed(lean_object*);
static lean_once_cell_t l_Lake_WorkspaceConfig_packagesDir___proj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___closed__0;
static lean_once_cell_t l_Lake_WorkspaceConfig_packagesDir___proj___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___closed__1;
static lean_once_cell_t l_Lake_WorkspaceConfig_packagesDir___proj___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___closed__2;
static lean_once_cell_t l_Lake_WorkspaceConfig_packagesDir___proj___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___closed__3;
static lean_once_cell_t l_Lake_WorkspaceConfig_packagesDir___proj___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___closed__4;
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj;
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir_instConfigField;
static lean_once_cell_t l_Lake_WorkspaceConfig___fields___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig___fields___closed__0;
static lean_once_cell_t l_Lake_WorkspaceConfig___fields___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig___fields___closed__1;
static lean_once_cell_t l_Lake_WorkspaceConfig___fields___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig___fields___closed__2;
static lean_once_cell_t l_Lake_WorkspaceConfig___fields___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig___fields___closed__3;
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig___fields;
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_instConfigFields;
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_instConfigInfo___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__0;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__1;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__2;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__3;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__4;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__5;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__6;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__7;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__8;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__9;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__10;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lake_WorkspaceConfig_instConfigInfo___closed__11;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__12;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__13;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lake_WorkspaceConfig_instConfigInfo___closed__14;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lake_WorkspaceConfig_instConfigInfo___closed__15;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__16;
static lean_once_cell_t l_Lake_WorkspaceConfig_instConfigInfo___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_WorkspaceConfig_instConfigInfo___closed__17;
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_instConfigInfo;
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_instEmptyCollection;
static lean_object* _init_l_Lake_instInhabitedWorkspaceConfig_default(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lake_defaultPackagesDir;
return v___x_1_;
}
}
static lean_object* _init_l_Lake_instInhabitedWorkspaceConfig(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = l_Lake_defaultPackagesDir;
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprWorkspaceConfig_repr_spec__0(lean_object* v_a_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_nat_to_int(v_a_3_);
return v___x_4_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__0(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_mk_string_unchecked("{ ", 2, 2);
return v___x_5_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__1(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_mk_string_unchecked("packagesDir", 11, 11);
return v___x_6_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__1, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__1_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__1);
v___x_8_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__2, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__2_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__2);
v___x_10_ = lean_box(0);
v___x_11_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
lean_ctor_set(v___x_11_, 1, v___x_9_);
return v___x_11_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked(" := ", 4, 4);
return v___x_12_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__4, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__4_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__4);
v___x_14_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
return v___x_14_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__5, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__5_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__5);
v___x_16_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__3, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__3_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__3);
v___x_17_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
lean_ctor_set(v___x_17_, 1, v___x_15_);
return v___x_17_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_unsigned_to_nat(15u);
v___x_19_ = lean_nat_to_int(v___x_18_);
return v___x_19_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_mk_string_unchecked("FilePath.mk ", 12, 12);
return v___x_20_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__8, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__8_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__8);
v___x_22_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = lean_mk_string_unchecked(" }", 2, 2);
return v___x_23_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__0, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__0_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__0);
v___x_25_ = lean_string_length(v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__11, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__11_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__11);
v___x_27_ = lean_nat_to_int(v___x_26_);
return v___x_27_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__0, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__0_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__0);
v___x_29_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__10, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__10_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__10);
v___x_31_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprWorkspaceConfig_repr___redArg(lean_object* v_x_32_){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; uint8_t v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_33_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__6, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__6_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__6);
v___x_34_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__7, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__7_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__7);
v___x_35_ = lean_unsigned_to_nat(0u);
v___x_36_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__9, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__9_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__9);
v___x_37_ = l_String_quote(v_x_32_);
v___x_38_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
v___x_39_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_39_, 0, v___x_36_);
lean_ctor_set(v___x_39_, 1, v___x_38_);
v___x_40_ = l_Repr_addAppParen(v___x_39_, v___x_35_);
v___x_41_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_41_, 0, v___x_34_);
lean_ctor_set(v___x_41_, 1, v___x_40_);
v___x_42_ = 0;
v___x_43_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_43_, 0, v___x_41_);
lean_ctor_set_uint8(v___x_43_, sizeof(void*)*1, v___x_42_);
v___x_44_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_33_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
v___x_45_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__12, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__12_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__12);
v___x_46_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__13, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__13_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__13);
v___x_47_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
lean_ctor_set(v___x_47_, 1, v___x_44_);
v___x_48_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__14, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__14_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__14);
v___x_49_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_49_, 0, v___x_47_);
lean_ctor_set(v___x_49_, 1, v___x_48_);
v___x_50_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_50_, 0, v___x_45_);
lean_ctor_set(v___x_50_, 1, v___x_49_);
v___x_51_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set_uint8(v___x_51_, sizeof(void*)*1, v___x_42_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprWorkspaceConfig_repr(lean_object* v_x_52_, lean_object* v_prec_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lake_instReprWorkspaceConfig_repr___redArg(v_x_52_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprWorkspaceConfig_repr___boxed(lean_object* v_x_55_, lean_object* v_prec_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lake_instReprWorkspaceConfig_repr(v_x_55_, v_prec_56_);
lean_dec(v_prec_56_);
return v_res_57_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig___closed__0(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lean_alloc_closure((void*)(l_Lake_instReprWorkspaceConfig_repr___boxed), 2, 0);
return v___x_58_;
}
}
static lean_object* _init_l_Lake_instReprWorkspaceConfig(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig___closed__0, &l_Lake_instReprWorkspaceConfig___closed__0_once, _init_l_Lake_instReprWorkspaceConfig___closed__0);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__0(lean_object* v_cfg_60_){
_start:
{
lean_inc_ref(v_cfg_60_);
return v_cfg_60_;
}
}
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__0___boxed(lean_object* v_cfg_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lake_WorkspaceConfig_packagesDir___proj___lam__0(v_cfg_61_);
lean_dec_ref(v_cfg_61_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__1(lean_object* v_val_63_, lean_object* v_cfg_64_){
_start:
{
lean_inc_ref(v_val_63_);
return v_val_63_;
}
}
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__1___boxed(lean_object* v_val_65_, lean_object* v_cfg_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lake_WorkspaceConfig_packagesDir___proj___lam__1(v_val_65_, v_cfg_66_);
lean_dec_ref(v_cfg_66_);
lean_dec_ref(v_val_65_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__2(lean_object* v_f_68_, lean_object* v_cfg_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_apply_1(v_f_68_, v_cfg_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__3(lean_object* v_x_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lake_defaultPackagesDir;
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_packagesDir___proj___lam__3___boxed(lean_object* v_x_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lake_WorkspaceConfig_packagesDir___proj___lam__3(v_x_73_);
lean_dec_ref(v_x_73_);
return v_res_74_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_packagesDir___proj___closed__0(void){
_start:
{
lean_object* v___f_75_; 
v___f_75_ = lean_alloc_closure((void*)(l_Lake_WorkspaceConfig_packagesDir___proj___lam__0___boxed), 1, 0);
return v___f_75_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_packagesDir___proj___closed__1(void){
_start:
{
lean_object* v___f_76_; 
v___f_76_ = lean_alloc_closure((void*)(l_Lake_WorkspaceConfig_packagesDir___proj___lam__1___boxed), 2, 0);
return v___f_76_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_packagesDir___proj___closed__2(void){
_start:
{
lean_object* v___f_77_; 
v___f_77_ = lean_alloc_closure((void*)(l_Lake_WorkspaceConfig_packagesDir___proj___lam__2), 2, 0);
return v___f_77_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_packagesDir___proj___closed__3(void){
_start:
{
lean_object* v___f_78_; 
v___f_78_ = lean_alloc_closure((void*)(l_Lake_WorkspaceConfig_packagesDir___proj___lam__3___boxed), 1, 0);
return v___f_78_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_packagesDir___proj___closed__4(void){
_start:
{
lean_object* v___f_79_; lean_object* v___f_80_; lean_object* v___f_81_; lean_object* v___f_82_; lean_object* v___x_83_; 
v___f_79_ = lean_obj_once(&l_Lake_WorkspaceConfig_packagesDir___proj___closed__3, &l_Lake_WorkspaceConfig_packagesDir___proj___closed__3_once, _init_l_Lake_WorkspaceConfig_packagesDir___proj___closed__3);
v___f_80_ = lean_obj_once(&l_Lake_WorkspaceConfig_packagesDir___proj___closed__2, &l_Lake_WorkspaceConfig_packagesDir___proj___closed__2_once, _init_l_Lake_WorkspaceConfig_packagesDir___proj___closed__2);
v___f_81_ = lean_obj_once(&l_Lake_WorkspaceConfig_packagesDir___proj___closed__1, &l_Lake_WorkspaceConfig_packagesDir___proj___closed__1_once, _init_l_Lake_WorkspaceConfig_packagesDir___proj___closed__1);
v___f_82_ = lean_obj_once(&l_Lake_WorkspaceConfig_packagesDir___proj___closed__0, &l_Lake_WorkspaceConfig_packagesDir___proj___closed__0_once, _init_l_Lake_WorkspaceConfig_packagesDir___proj___closed__0);
v___x_83_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_83_, 0, v___f_82_);
lean_ctor_set(v___x_83_, 1, v___f_81_);
lean_ctor_set(v___x_83_, 2, v___f_80_);
lean_ctor_set(v___x_83_, 3, v___f_79_);
return v___x_83_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_packagesDir___proj(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lean_obj_once(&l_Lake_WorkspaceConfig_packagesDir___proj___closed__4, &l_Lake_WorkspaceConfig_packagesDir___proj___closed__4_once, _init_l_Lake_WorkspaceConfig_packagesDir___proj___closed__4);
return v___x_84_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_packagesDir_instConfigField(void){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = l_Lake_WorkspaceConfig_packagesDir___proj;
return v___x_85_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig___fields___closed__0(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_mk_empty_array_with_capacity(v___x_86_);
return v___x_87_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig___fields___closed__1(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_obj_once(&l_Lake_instReprWorkspaceConfig_repr___redArg___closed__1, &l_Lake_instReprWorkspaceConfig_repr___redArg___closed__1_once, _init_l_Lake_instReprWorkspaceConfig_repr___redArg___closed__1);
v___x_89_ = l_Lean_Name_mkStr1(v___x_88_);
return v___x_89_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig___fields___closed__2(void){
_start:
{
uint8_t v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_90_ = 0;
v___x_91_ = 1;
v___x_92_ = lean_obj_once(&l_Lake_WorkspaceConfig___fields___closed__1, &l_Lake_WorkspaceConfig___fields___closed__1_once, _init_l_Lake_WorkspaceConfig___fields___closed__1);
v___x_93_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
lean_ctor_set_uint8(v___x_93_, sizeof(void*)*2, v___x_91_);
lean_ctor_set_uint8(v___x_93_, sizeof(void*)*2 + 1, v___x_90_);
return v___x_93_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig___fields___closed__3(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_obj_once(&l_Lake_WorkspaceConfig___fields___closed__2, &l_Lake_WorkspaceConfig___fields___closed__2_once, _init_l_Lake_WorkspaceConfig___fields___closed__2);
v___x_95_ = lean_obj_once(&l_Lake_WorkspaceConfig___fields___closed__0, &l_Lake_WorkspaceConfig___fields___closed__0_once, _init_l_Lake_WorkspaceConfig___fields___closed__0);
v___x_96_ = lean_array_push(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig___fields(void){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_obj_once(&l_Lake_WorkspaceConfig___fields___closed__3, &l_Lake_WorkspaceConfig___fields___closed__3_once, _init_l_Lake_WorkspaceConfig___fields___closed__3);
return v___x_97_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigFields(void){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lake_WorkspaceConfig___fields;
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lake_WorkspaceConfig_instConfigInfo___lam__0(lean_object* v_x1_99_, lean_object* v_x2_100_){
_start:
{
lean_object* v_name_101_; lean_object* v___x_102_; 
v_name_101_ = lean_ctor_get(v_x2_100_, 0);
lean_inc(v_name_101_);
v___x_102_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_101_, v_x2_100_, v_x1_99_);
return v___x_102_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__0(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = l_Lake_WorkspaceConfig___fields;
v___x_104_ = lean_array_get_size(v___x_103_);
return v___x_104_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__1(void){
_start:
{
lean_object* v___f_105_; 
v___f_105_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_105_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__2(void){
_start:
{
lean_object* v___f_106_; 
v___f_106_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_106_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__3(void){
_start:
{
lean_object* v___f_107_; 
v___f_107_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_107_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__4(void){
_start:
{
lean_object* v___f_108_; 
v___f_108_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_108_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__5(void){
_start:
{
lean_object* v___f_109_; 
v___f_109_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_109_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__6(void){
_start:
{
lean_object* v___f_110_; 
v___f_110_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_110_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__7(void){
_start:
{
lean_object* v___f_111_; 
v___f_111_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_111_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__8(void){
_start:
{
lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___x_114_; 
v___f_112_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__2, &l_Lake_WorkspaceConfig_instConfigInfo___closed__2_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__2);
v___f_113_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__1, &l_Lake_WorkspaceConfig_instConfigInfo___closed__1_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__1);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___f_113_);
lean_ctor_set(v___x_114_, 1, v___f_112_);
return v___x_114_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__9(void){
_start:
{
lean_object* v___f_115_; lean_object* v___f_116_; lean_object* v___f_117_; lean_object* v___f_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___f_115_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__6, &l_Lake_WorkspaceConfig_instConfigInfo___closed__6_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__6);
v___f_116_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__5, &l_Lake_WorkspaceConfig_instConfigInfo___closed__5_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__5);
v___f_117_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__4, &l_Lake_WorkspaceConfig_instConfigInfo___closed__4_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__4);
v___f_118_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__3, &l_Lake_WorkspaceConfig_instConfigInfo___closed__3_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__3);
v___x_119_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__8, &l_Lake_WorkspaceConfig_instConfigInfo___closed__8_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__8);
v___x_120_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___f_118_);
lean_ctor_set(v___x_120_, 2, v___f_117_);
lean_ctor_set(v___x_120_, 3, v___f_116_);
lean_ctor_set(v___x_120_, 4, v___f_115_);
return v___x_120_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__10(void){
_start:
{
lean_object* v___f_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___f_121_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__7, &l_Lake_WorkspaceConfig_instConfigInfo___closed__7_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__7);
v___x_122_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__9, &l_Lake_WorkspaceConfig_instConfigInfo___closed__9_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__9);
v___x_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set(v___x_123_, 1, v___f_121_);
return v___x_123_;
}
}
static uint8_t _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__11(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_124_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__0, &l_Lake_WorkspaceConfig_instConfigInfo___closed__0_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__0);
v___x_125_ = lean_unsigned_to_nat(0u);
v___x_126_ = lean_nat_dec_lt(v___x_125_, v___x_124_);
return v___x_126_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__12(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_127_ = lean_unsigned_to_nat(0u);
v___x_128_ = lean_box(1);
v___x_129_ = l_Lake_WorkspaceConfig___fields;
v___x_130_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v___x_128_);
lean_ctor_set(v___x_130_, 2, v___x_127_);
return v___x_130_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__13(void){
_start:
{
lean_object* v___f_131_; 
v___f_131_ = lean_alloc_closure((void*)(l_Lake_WorkspaceConfig_instConfigInfo___lam__0), 2, 0);
return v___f_131_;
}
}
static uint8_t _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__14(void){
_start:
{
lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_132_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__0, &l_Lake_WorkspaceConfig_instConfigInfo___closed__0_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__0);
v___x_133_ = lean_nat_dec_le(v___x_132_, v___x_132_);
return v___x_133_;
}
}
static size_t _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__15(void){
_start:
{
lean_object* v___x_134_; size_t v___x_135_; 
v___x_134_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__0, &l_Lake_WorkspaceConfig_instConfigInfo___closed__0_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__0);
v___x_135_ = lean_usize_of_nat(v___x_134_);
return v___x_135_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__16(void){
_start:
{
lean_object* v___x_136_; size_t v___x_137_; size_t v___x_138_; lean_object* v___x_139_; lean_object* v___f_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_136_ = lean_box(1);
v___x_137_ = lean_usize_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__15, &l_Lake_WorkspaceConfig_instConfigInfo___closed__15_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__15);
v___x_138_ = ((size_t)0ULL);
v___x_139_ = l_Lake_WorkspaceConfig___fields;
v___f_140_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__13, &l_Lake_WorkspaceConfig_instConfigInfo___closed__13_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__13);
v___x_141_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__10, &l_Lake_WorkspaceConfig_instConfigInfo___closed__10_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__10);
v___x_142_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_141_, v___f_140_, v___x_139_, v___x_138_, v___x_137_, v___x_136_);
return v___x_142_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__17(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_143_ = lean_unsigned_to_nat(0u);
v___x_144_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__16, &l_Lake_WorkspaceConfig_instConfigInfo___closed__16_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__16);
v___x_145_ = l_Lake_WorkspaceConfig___fields;
v___x_146_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
lean_ctor_set(v___x_146_, 1, v___x_144_);
lean_ctor_set(v___x_146_, 2, v___x_143_);
return v___x_146_;
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instConfigInfo(void){
_start:
{
uint8_t v___x_147_; 
v___x_147_ = lean_uint8_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__11, &l_Lake_WorkspaceConfig_instConfigInfo___closed__11_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__11);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; 
v___x_148_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__12, &l_Lake_WorkspaceConfig_instConfigInfo___closed__12_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__12);
return v___x_148_;
}
else
{
uint8_t v___x_149_; 
v___x_149_ = lean_uint8_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__14, &l_Lake_WorkspaceConfig_instConfigInfo___closed__14_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__14);
if (v___x_149_ == 0)
{
if (v___x_147_ == 0)
{
lean_object* v___x_150_; 
v___x_150_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__12, &l_Lake_WorkspaceConfig_instConfigInfo___closed__12_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__12);
return v___x_150_;
}
else
{
lean_object* v___x_151_; 
v___x_151_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__17, &l_Lake_WorkspaceConfig_instConfigInfo___closed__17_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__17);
return v___x_151_;
}
}
else
{
lean_object* v___x_152_; 
v___x_152_ = lean_obj_once(&l_Lake_WorkspaceConfig_instConfigInfo___closed__17, &l_Lake_WorkspaceConfig_instConfigInfo___closed__17_once, _init_l_Lake_WorkspaceConfig_instConfigInfo___closed__17);
return v___x_152_;
}
}
}
}
static lean_object* _init_l_Lake_WorkspaceConfig_instEmptyCollection(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = l_Lake_defaultPackagesDir;
return v___x_153_;
}
}
lean_object* runtime_initialize_Lake_Config_Defaults(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_MetaClasses(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Meta(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_WorkspaceConfig(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Config_Defaults(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_MetaClasses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instInhabitedWorkspaceConfig_default = _init_l_Lake_instInhabitedWorkspaceConfig_default();
lean_mark_persistent(l_Lake_instInhabitedWorkspaceConfig_default);
l_Lake_instInhabitedWorkspaceConfig = _init_l_Lake_instInhabitedWorkspaceConfig();
lean_mark_persistent(l_Lake_instInhabitedWorkspaceConfig);
l_Lake_instReprWorkspaceConfig = _init_l_Lake_instReprWorkspaceConfig();
lean_mark_persistent(l_Lake_instReprWorkspaceConfig);
l_Lake_WorkspaceConfig_packagesDir___proj = _init_l_Lake_WorkspaceConfig_packagesDir___proj();
lean_mark_persistent(l_Lake_WorkspaceConfig_packagesDir___proj);
l_Lake_WorkspaceConfig_packagesDir_instConfigField = _init_l_Lake_WorkspaceConfig_packagesDir_instConfigField();
lean_mark_persistent(l_Lake_WorkspaceConfig_packagesDir_instConfigField);
l_Lake_WorkspaceConfig___fields = _init_l_Lake_WorkspaceConfig___fields();
lean_mark_persistent(l_Lake_WorkspaceConfig___fields);
l_Lake_WorkspaceConfig_instConfigFields = _init_l_Lake_WorkspaceConfig_instConfigFields();
lean_mark_persistent(l_Lake_WorkspaceConfig_instConfigFields);
l_Lake_WorkspaceConfig_instConfigInfo = _init_l_Lake_WorkspaceConfig_instConfigInfo();
lean_mark_persistent(l_Lake_WorkspaceConfig_instConfigInfo);
l_Lake_WorkspaceConfig_instEmptyCollection = _init_l_Lake_WorkspaceConfig_instEmptyCollection();
lean_mark_persistent(l_Lake_WorkspaceConfig_instEmptyCollection);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Config_Meta(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_WorkspaceConfig(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Defaults(uint8_t builtin);
lean_object* initialize_Lake_Config_MetaClasses(uint8_t builtin);
lean_object* initialize_Lake_Config_Meta(uint8_t builtin);
lean_object* initialize_Lake_Config_Meta(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_WorkspaceConfig(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Defaults(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_MetaClasses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_WorkspaceConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_WorkspaceConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_WorkspaceConfig(builtin);
}
#ifdef __cplusplus
}
#endif
