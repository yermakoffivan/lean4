// Lean compiler output
// Module: Lean.Compiler.IR.EmitUtil
// Imports: public import Lean.Compiler.InitAttr public import Lean.Compiler.IR.CompilerM
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
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_IR_instHashableJoinPointId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t l_Lean_IR_instHashableVarId_hash(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_IR_Alt_body(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
lean_object* l_Lean_IR_FnBody_body(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_IR_instBEqVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_instBEqJoinPointId_beq(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqIRPhases_beq(uint8_t, uint8_t);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_IR_instBEqVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_instHashableVarId_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_init_fn_name_for(lean_object*, lean_object*);
lean_object* l_Lean_IR_instBEqJoinPointId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_instHashableJoinPointId_hash___boxed(lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Environment_header(lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_isTailCallTo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_isTailCallTo___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_usesModuleFrom_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_usesModuleFrom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_usesModuleFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_usesModuleFrom___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_CollectUsedDecls_collect___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_CollectUsedDecls_collect___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collect___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collect(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collect___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDecl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDeclLoop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDeclLoop___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_collectUsedDecls___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_collectUsedDecls___closed__0;
static lean_once_cell_t l_Lean_IR_collectUsedDecls___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_collectUsedDecls___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_collectUsedDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_collectUsedDecls___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_CollectMaps_collectVar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_CollectMaps_collectVar___closed__0;
static lean_once_cell_t l_Lean_IR_CollectMaps_collectVar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_CollectMaps_collectVar___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectParams(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectParams___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_CollectMaps_collectJP___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_CollectMaps_collectJP___closed__0;
static lean_once_cell_t l_Lean_IR_CollectMaps_collectJP___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_CollectMaps_collectJP___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectJP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectFnBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectDecl(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_mkVarJPMaps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_mkVarJPMaps___closed__0;
static lean_once_cell_t l_Lean_IR_mkVarJPMaps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_mkVarJPMaps___closed__1;
static lean_once_cell_t l_Lean_IR_mkVarJPMaps___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_mkVarJPMaps___closed__2;
LEAN_EXPORT lean_object* l_Lean_IR_mkVarJPMaps(lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_isTailCallTo(lean_object* v_g_1_, lean_object* v_b_2_){
_start:
{
if (lean_obj_tag(v_b_2_) == 0)
{
lean_object* v_e_3_; 
v_e_3_ = lean_ctor_get(v_b_2_, 2);
if (lean_obj_tag(v_e_3_) == 6)
{
lean_object* v_b_4_; 
v_b_4_ = lean_ctor_get(v_b_2_, 3);
if (lean_obj_tag(v_b_4_) == 10)
{
lean_object* v_x_5_; 
v_x_5_ = lean_ctor_get(v_b_4_, 0);
if (lean_obj_tag(v_x_5_) == 0)
{
lean_object* v_x_6_; lean_object* v_c_7_; lean_object* v_id_8_; uint8_t v___x_9_; 
v_x_6_ = lean_ctor_get(v_b_2_, 0);
v_c_7_ = lean_ctor_get(v_e_3_, 0);
v_id_8_ = lean_ctor_get(v_x_5_, 0);
v___x_9_ = l_Lean_IR_instBEqVarId_beq(v_x_6_, v_id_8_);
if (v___x_9_ == 0)
{
return v___x_9_;
}
else
{
uint8_t v___x_10_; 
v___x_10_ = lean_name_eq(v_c_7_, v_g_1_);
return v___x_10_;
}
}
else
{
uint8_t v___x_11_; 
v___x_11_ = 0;
return v___x_11_;
}
}
else
{
uint8_t v___x_12_; 
v___x_12_ = 0;
return v___x_12_;
}
}
else
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
}
else
{
uint8_t v___x_14_; 
v___x_14_ = 0;
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_isTailCallTo___boxed(lean_object* v_g_15_, lean_object* v_b_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = l_Lean_IR_isTailCallTo(v_g_15_, v_b_16_);
lean_dec(v_b_16_);
lean_dec(v_g_15_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_usesModuleFrom_spec__0(lean_object* v_modulePrefix_19_, lean_object* v_as_20_, size_t v_i_21_, size_t v_stop_22_){
_start:
{
uint8_t v___x_23_; 
v___x_23_ = lean_usize_dec_eq(v_i_21_, v_stop_22_);
if (v___x_23_ == 0)
{
lean_object* v___x_24_; lean_object* v_toImport_25_; uint8_t v_irPhases_26_; uint8_t v___x_27_; uint8_t v___y_29_; uint8_t v___x_33_; uint8_t v___x_34_; 
v___x_24_ = lean_array_uget_borrowed(v_as_20_, v_i_21_);
v_toImport_25_ = lean_ctor_get(v___x_24_, 0);
v_irPhases_26_ = lean_ctor_get_uint8(v___x_24_, sizeof(void*)*1);
v___x_27_ = 1;
v___x_33_ = 1;
v___x_34_ = l_Lean_instBEqIRPhases_beq(v_irPhases_26_, v___x_33_);
if (v___x_34_ == 0)
{
lean_object* v_module_35_; uint8_t v___x_36_; 
v_module_35_ = lean_ctor_get(v_toImport_25_, 0);
v___x_36_ = l_Lean_Name_isPrefixOf(v_modulePrefix_19_, v_module_35_);
v___y_29_ = v___x_36_;
goto v___jp_28_;
}
else
{
v___y_29_ = v___x_23_;
goto v___jp_28_;
}
v___jp_28_:
{
if (v___y_29_ == 0)
{
size_t v___x_30_; size_t v___x_31_; 
v___x_30_ = ((size_t)1ULL);
v___x_31_ = lean_usize_add(v_i_21_, v___x_30_);
v_i_21_ = v___x_31_;
goto _start;
}
else
{
return v___x_27_;
}
}
}
else
{
uint8_t v___x_37_; 
v___x_37_ = 0;
return v___x_37_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_usesModuleFrom_spec__0___boxed(lean_object* v_modulePrefix_38_, lean_object* v_as_39_, lean_object* v_i_40_, lean_object* v_stop_41_){
_start:
{
size_t v_i_boxed_42_; size_t v_stop_boxed_43_; uint8_t v_res_44_; lean_object* v_r_45_; 
v_i_boxed_42_ = lean_unbox_usize(v_i_40_);
lean_dec(v_i_40_);
v_stop_boxed_43_ = lean_unbox_usize(v_stop_41_);
lean_dec(v_stop_41_);
v_res_44_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_usesModuleFrom_spec__0(v_modulePrefix_38_, v_as_39_, v_i_boxed_42_, v_stop_boxed_43_);
lean_dec_ref(v_as_39_);
lean_dec(v_modulePrefix_38_);
v_r_45_ = lean_box(v_res_44_);
return v_r_45_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_usesModuleFrom(lean_object* v_env_46_, lean_object* v_modulePrefix_47_){
_start:
{
lean_object* v___x_48_; lean_object* v_modules_49_; lean_object* v___x_50_; lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_48_ = l_Lean_Environment_header(v_env_46_);
v_modules_49_ = lean_ctor_get(v___x_48_, 3);
lean_inc_ref(v_modules_49_);
lean_dec_ref(v___x_48_);
v___x_50_ = lean_unsigned_to_nat(0u);
v___x_51_ = lean_array_get_size(v_modules_49_);
v___x_52_ = lean_nat_dec_lt(v___x_50_, v___x_51_);
if (v___x_52_ == 0)
{
lean_dec_ref(v_modules_49_);
return v___x_52_;
}
else
{
if (v___x_52_ == 0)
{
lean_dec_ref(v_modules_49_);
return v___x_52_;
}
else
{
size_t v___x_53_; size_t v___x_54_; uint8_t v___x_55_; 
v___x_53_ = ((size_t)0ULL);
v___x_54_ = lean_usize_of_nat(v___x_51_);
v___x_55_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_usesModuleFrom_spec__0(v_modulePrefix_47_, v_modules_49_, v___x_53_, v___x_54_);
lean_dec_ref(v_modules_49_);
return v___x_55_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_usesModuleFrom___boxed(lean_object* v_env_56_, lean_object* v_modulePrefix_57_){
_start:
{
uint8_t v_res_58_; lean_object* v_r_59_; 
v_res_58_ = l_Lean_IR_usesModuleFrom(v_env_56_, v_modulePrefix_57_);
lean_dec(v_modulePrefix_57_);
lean_dec_ref(v_env_56_);
v_r_59_ = lean_box(v_res_58_);
return v_r_59_;
}
}
static lean_object* _init_l_Lean_IR_CollectUsedDecls_collect___redArg___closed__0(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_alloc_closure((void*)(l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed), 2, 0);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collect___redArg(lean_object* v_f_61_, lean_object* v_a_62_){
_start:
{
lean_object* v_set_63_; lean_object* v_order_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_87_; 
v_set_63_ = lean_ctor_get(v_a_62_, 0);
v_order_64_ = lean_ctor_get(v_a_62_, 1);
v_isSharedCheck_87_ = !lean_is_exclusive(v_a_62_);
if (v_isSharedCheck_87_ == 0)
{
v___x_66_ = v_a_62_;
v_isShared_67_ = v_isSharedCheck_87_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_order_64_);
lean_inc(v_set_63_);
lean_dec(v_a_62_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_87_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v_fst_70_; lean_object* v_snd_71_; lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_68_ = lean_box(0);
v___x_82_ = lean_obj_once(&l_Lean_IR_CollectUsedDecls_collect___redArg___closed__0, &l_Lean_IR_CollectUsedDecls_collect___redArg___closed__0_once, _init_l_Lean_IR_CollectUsedDecls_collect___redArg___closed__0);
lean_inc(v_set_63_);
lean_inc(v_f_61_);
v___x_83_ = l_Std_DTreeMap_Internal_Impl_contains___redArg(v___x_82_, v_f_61_, v_set_63_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; lean_object* v___x_85_; 
lean_inc(v_f_61_);
v___x_84_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_82_, v_f_61_, v___x_68_, v_set_63_);
v___x_85_ = lean_box(v___x_83_);
v_fst_70_ = v___x_85_;
v_snd_71_ = v___x_84_;
goto v___jp_69_;
}
else
{
lean_object* v___x_86_; 
v___x_86_ = lean_box(v___x_83_);
v_fst_70_ = v___x_86_;
v_snd_71_ = v_set_63_;
goto v___jp_69_;
}
v___jp_69_:
{
uint8_t v___x_72_; 
v___x_72_ = lean_unbox(v_fst_70_);
lean_dec(v_fst_70_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; lean_object* v___x_75_; 
v___x_73_ = lean_array_push(v_order_64_, v_f_61_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 1, v___x_73_);
lean_ctor_set(v___x_66_, 0, v_snd_71_);
v___x_75_ = v___x_66_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_snd_71_);
lean_ctor_set(v_reuseFailAlloc_77_, 1, v___x_73_);
v___x_75_ = v_reuseFailAlloc_77_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
lean_object* v___x_76_; 
v___x_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_68_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
return v___x_76_;
}
}
else
{
lean_object* v___x_79_; 
lean_dec(v_f_61_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 0, v_snd_71_);
v___x_79_ = v___x_66_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_snd_71_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v_order_64_);
v___x_79_ = v_reuseFailAlloc_81_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
lean_object* v___x_80_; 
v___x_80_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_68_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
return v___x_80_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collect(lean_object* v_f_88_, lean_object* v_a_89_, lean_object* v_a_90_){
_start:
{
lean_object* v_set_91_; lean_object* v_order_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_115_; 
v_set_91_ = lean_ctor_get(v_a_90_, 0);
v_order_92_ = lean_ctor_get(v_a_90_, 1);
v_isSharedCheck_115_ = !lean_is_exclusive(v_a_90_);
if (v_isSharedCheck_115_ == 0)
{
v___x_94_ = v_a_90_;
v_isShared_95_ = v_isSharedCheck_115_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_order_92_);
lean_inc(v_set_91_);
lean_dec(v_a_90_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_115_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_96_; lean_object* v_fst_98_; lean_object* v_snd_99_; lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_96_ = lean_box(0);
v___x_110_ = lean_obj_once(&l_Lean_IR_CollectUsedDecls_collect___redArg___closed__0, &l_Lean_IR_CollectUsedDecls_collect___redArg___closed__0_once, _init_l_Lean_IR_CollectUsedDecls_collect___redArg___closed__0);
lean_inc(v_set_91_);
lean_inc(v_f_88_);
v___x_111_ = l_Std_DTreeMap_Internal_Impl_contains___redArg(v___x_110_, v_f_88_, v_set_91_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v___x_113_; 
lean_inc(v_f_88_);
v___x_112_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_110_, v_f_88_, v___x_96_, v_set_91_);
v___x_113_ = lean_box(v___x_111_);
v_fst_98_ = v___x_113_;
v_snd_99_ = v___x_112_;
goto v___jp_97_;
}
else
{
lean_object* v___x_114_; 
v___x_114_ = lean_box(v___x_111_);
v_fst_98_ = v___x_114_;
v_snd_99_ = v_set_91_;
goto v___jp_97_;
}
v___jp_97_:
{
uint8_t v___x_100_; 
v___x_100_ = lean_unbox(v_fst_98_);
lean_dec(v_fst_98_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; lean_object* v___x_103_; 
v___x_101_ = lean_array_push(v_order_92_, v_f_88_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 1, v___x_101_);
lean_ctor_set(v___x_94_, 0, v_snd_99_);
v___x_103_ = v___x_94_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_snd_99_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v___x_101_);
v___x_103_ = v_reuseFailAlloc_105_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
lean_object* v___x_104_; 
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_96_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
return v___x_104_;
}
}
else
{
lean_object* v___x_107_; 
lean_dec(v_f_88_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 0, v_snd_99_);
v___x_107_ = v___x_94_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_snd_99_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v_order_92_);
v___x_107_ = v_reuseFailAlloc_109_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
lean_object* v___x_108_; 
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_96_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
return v___x_108_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collect___boxed(lean_object* v_f_116_, lean_object* v_a_117_, lean_object* v_a_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lean_IR_CollectUsedDecls_collect(v_f_116_, v_a_117_, v_a_118_);
lean_dec_ref(v_a_117_);
return v_res_119_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___redArg(lean_object* v_k_120_, lean_object* v_t_121_){
_start:
{
if (lean_obj_tag(v_t_121_) == 0)
{
lean_object* v_k_122_; lean_object* v_l_123_; lean_object* v_r_124_; uint8_t v___x_125_; 
v_k_122_ = lean_ctor_get(v_t_121_, 1);
v_l_123_ = lean_ctor_get(v_t_121_, 3);
v_r_124_ = lean_ctor_get(v_t_121_, 4);
v___x_125_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_120_, v_k_122_);
switch(v___x_125_)
{
case 0:
{
v_t_121_ = v_l_123_;
goto _start;
}
case 1:
{
uint8_t v___x_127_; 
v___x_127_ = 1;
return v___x_127_;
}
default: 
{
v_t_121_ = v_r_124_;
goto _start;
}
}
}
else
{
uint8_t v___x_129_; 
v___x_129_ = 0;
return v___x_129_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___redArg___boxed(lean_object* v_k_130_, lean_object* v_t_131_){
_start:
{
uint8_t v_res_132_; lean_object* v_r_133_; 
v_res_132_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___redArg(v_k_130_, v_t_131_);
lean_dec(v_t_131_);
lean_dec(v_k_130_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__1___redArg(lean_object* v_k_134_, lean_object* v_v_135_, lean_object* v_t_136_){
_start:
{
if (lean_obj_tag(v_t_136_) == 0)
{
lean_object* v_size_137_; lean_object* v_k_138_; lean_object* v_v_139_; lean_object* v_l_140_; lean_object* v_r_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_421_; 
v_size_137_ = lean_ctor_get(v_t_136_, 0);
v_k_138_ = lean_ctor_get(v_t_136_, 1);
v_v_139_ = lean_ctor_get(v_t_136_, 2);
v_l_140_ = lean_ctor_get(v_t_136_, 3);
v_r_141_ = lean_ctor_get(v_t_136_, 4);
v_isSharedCheck_421_ = !lean_is_exclusive(v_t_136_);
if (v_isSharedCheck_421_ == 0)
{
v___x_143_ = v_t_136_;
v_isShared_144_ = v_isSharedCheck_421_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_r_141_);
lean_inc(v_l_140_);
lean_inc(v_v_139_);
lean_inc(v_k_138_);
lean_inc(v_size_137_);
lean_dec(v_t_136_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_421_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
uint8_t v___x_145_; 
v___x_145_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_134_, v_k_138_);
switch(v___x_145_)
{
case 0:
{
lean_object* v_impl_146_; lean_object* v___x_147_; 
lean_dec(v_size_137_);
v_impl_146_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__1___redArg(v_k_134_, v_v_135_, v_l_140_);
v___x_147_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_141_) == 0)
{
lean_object* v_size_148_; lean_object* v_size_149_; lean_object* v_k_150_; lean_object* v_v_151_; lean_object* v_l_152_; lean_object* v_r_153_; lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v_size_148_ = lean_ctor_get(v_r_141_, 0);
v_size_149_ = lean_ctor_get(v_impl_146_, 0);
lean_inc(v_size_149_);
v_k_150_ = lean_ctor_get(v_impl_146_, 1);
lean_inc(v_k_150_);
v_v_151_ = lean_ctor_get(v_impl_146_, 2);
lean_inc(v_v_151_);
v_l_152_ = lean_ctor_get(v_impl_146_, 3);
lean_inc(v_l_152_);
v_r_153_ = lean_ctor_get(v_impl_146_, 4);
lean_inc(v_r_153_);
v___x_154_ = lean_unsigned_to_nat(3u);
v___x_155_ = lean_nat_mul(v___x_154_, v_size_148_);
v___x_156_ = lean_nat_dec_lt(v___x_155_, v_size_149_);
lean_dec(v___x_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_160_; 
lean_dec(v_r_153_);
lean_dec(v_l_152_);
lean_dec(v_v_151_);
lean_dec(v_k_150_);
v___x_157_ = lean_nat_add(v___x_147_, v_size_149_);
lean_dec(v_size_149_);
v___x_158_ = lean_nat_add(v___x_157_, v_size_148_);
lean_dec(v___x_157_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 3, v_impl_146_);
lean_ctor_set(v___x_143_, 0, v___x_158_);
v___x_160_ = v___x_143_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_158_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v_k_138_);
lean_ctor_set(v_reuseFailAlloc_161_, 2, v_v_139_);
lean_ctor_set(v_reuseFailAlloc_161_, 3, v_impl_146_);
lean_ctor_set(v_reuseFailAlloc_161_, 4, v_r_141_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
else
{
lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_227_; 
v_isSharedCheck_227_ = !lean_is_exclusive(v_impl_146_);
if (v_isSharedCheck_227_ == 0)
{
lean_object* v_unused_228_; lean_object* v_unused_229_; lean_object* v_unused_230_; lean_object* v_unused_231_; lean_object* v_unused_232_; 
v_unused_228_ = lean_ctor_get(v_impl_146_, 4);
lean_dec(v_unused_228_);
v_unused_229_ = lean_ctor_get(v_impl_146_, 3);
lean_dec(v_unused_229_);
v_unused_230_ = lean_ctor_get(v_impl_146_, 2);
lean_dec(v_unused_230_);
v_unused_231_ = lean_ctor_get(v_impl_146_, 1);
lean_dec(v_unused_231_);
v_unused_232_ = lean_ctor_get(v_impl_146_, 0);
lean_dec(v_unused_232_);
v___x_163_ = v_impl_146_;
v_isShared_164_ = v_isSharedCheck_227_;
goto v_resetjp_162_;
}
else
{
lean_dec(v_impl_146_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_227_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v_size_165_; lean_object* v_size_166_; lean_object* v_k_167_; lean_object* v_v_168_; lean_object* v_l_169_; lean_object* v_r_170_; lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; 
v_size_165_ = lean_ctor_get(v_l_152_, 0);
v_size_166_ = lean_ctor_get(v_r_153_, 0);
v_k_167_ = lean_ctor_get(v_r_153_, 1);
v_v_168_ = lean_ctor_get(v_r_153_, 2);
v_l_169_ = lean_ctor_get(v_r_153_, 3);
v_r_170_ = lean_ctor_get(v_r_153_, 4);
v___x_171_ = lean_unsigned_to_nat(2u);
v___x_172_ = lean_nat_mul(v___x_171_, v_size_165_);
v___x_173_ = lean_nat_dec_lt(v_size_166_, v___x_172_);
lean_dec(v___x_172_);
if (v___x_173_ == 0)
{
lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_202_; 
lean_inc(v_r_170_);
lean_inc(v_l_169_);
lean_inc(v_v_168_);
lean_inc(v_k_167_);
v_isSharedCheck_202_ = !lean_is_exclusive(v_r_153_);
if (v_isSharedCheck_202_ == 0)
{
lean_object* v_unused_203_; lean_object* v_unused_204_; lean_object* v_unused_205_; lean_object* v_unused_206_; lean_object* v_unused_207_; 
v_unused_203_ = lean_ctor_get(v_r_153_, 4);
lean_dec(v_unused_203_);
v_unused_204_ = lean_ctor_get(v_r_153_, 3);
lean_dec(v_unused_204_);
v_unused_205_ = lean_ctor_get(v_r_153_, 2);
lean_dec(v_unused_205_);
v_unused_206_ = lean_ctor_get(v_r_153_, 1);
lean_dec(v_unused_206_);
v_unused_207_ = lean_ctor_get(v_r_153_, 0);
lean_dec(v_unused_207_);
v___x_175_ = v_r_153_;
v_isShared_176_ = v_isSharedCheck_202_;
goto v_resetjp_174_;
}
else
{
lean_dec(v_r_153_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_202_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___y_180_; lean_object* v___y_181_; lean_object* v___y_182_; lean_object* v___x_190_; lean_object* v___y_192_; 
v___x_177_ = lean_nat_add(v___x_147_, v_size_149_);
lean_dec(v_size_149_);
v___x_178_ = lean_nat_add(v___x_177_, v_size_148_);
lean_dec(v___x_177_);
v___x_190_ = lean_nat_add(v___x_147_, v_size_165_);
if (lean_obj_tag(v_l_169_) == 0)
{
lean_object* v_size_200_; 
v_size_200_ = lean_ctor_get(v_l_169_, 0);
lean_inc(v_size_200_);
v___y_192_ = v_size_200_;
goto v___jp_191_;
}
else
{
lean_object* v___x_201_; 
v___x_201_ = lean_unsigned_to_nat(0u);
v___y_192_ = v___x_201_;
goto v___jp_191_;
}
v___jp_179_:
{
lean_object* v___x_183_; lean_object* v___x_185_; 
v___x_183_ = lean_nat_add(v___y_181_, v___y_182_);
lean_dec(v___y_182_);
lean_dec(v___y_181_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 4, v_r_141_);
lean_ctor_set(v___x_175_, 3, v_r_170_);
lean_ctor_set(v___x_175_, 2, v_v_139_);
lean_ctor_set(v___x_175_, 1, v_k_138_);
lean_ctor_set(v___x_175_, 0, v___x_183_);
v___x_185_ = v___x_175_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_183_);
lean_ctor_set(v_reuseFailAlloc_189_, 1, v_k_138_);
lean_ctor_set(v_reuseFailAlloc_189_, 2, v_v_139_);
lean_ctor_set(v_reuseFailAlloc_189_, 3, v_r_170_);
lean_ctor_set(v_reuseFailAlloc_189_, 4, v_r_141_);
v___x_185_ = v_reuseFailAlloc_189_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_187_; 
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 4, v___x_185_);
lean_ctor_set(v___x_163_, 3, v___y_180_);
lean_ctor_set(v___x_163_, 2, v_v_168_);
lean_ctor_set(v___x_163_, 1, v_k_167_);
lean_ctor_set(v___x_163_, 0, v___x_178_);
v___x_187_ = v___x_163_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_178_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v_k_167_);
lean_ctor_set(v_reuseFailAlloc_188_, 2, v_v_168_);
lean_ctor_set(v_reuseFailAlloc_188_, 3, v___y_180_);
lean_ctor_set(v_reuseFailAlloc_188_, 4, v___x_185_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
v___jp_191_:
{
lean_object* v___x_193_; lean_object* v___x_195_; 
v___x_193_ = lean_nat_add(v___x_190_, v___y_192_);
lean_dec(v___y_192_);
lean_dec(v___x_190_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 4, v_l_169_);
lean_ctor_set(v___x_143_, 3, v_l_152_);
lean_ctor_set(v___x_143_, 2, v_v_151_);
lean_ctor_set(v___x_143_, 1, v_k_150_);
lean_ctor_set(v___x_143_, 0, v___x_193_);
v___x_195_ = v___x_143_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_k_150_);
lean_ctor_set(v_reuseFailAlloc_199_, 2, v_v_151_);
lean_ctor_set(v_reuseFailAlloc_199_, 3, v_l_152_);
lean_ctor_set(v_reuseFailAlloc_199_, 4, v_l_169_);
v___x_195_ = v_reuseFailAlloc_199_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_196_; 
v___x_196_ = lean_nat_add(v___x_147_, v_size_148_);
if (lean_obj_tag(v_r_170_) == 0)
{
lean_object* v_size_197_; 
v_size_197_ = lean_ctor_get(v_r_170_, 0);
lean_inc(v_size_197_);
v___y_180_ = v___x_195_;
v___y_181_ = v___x_196_;
v___y_182_ = v_size_197_;
goto v___jp_179_;
}
else
{
lean_object* v___x_198_; 
v___x_198_ = lean_unsigned_to_nat(0u);
v___y_180_ = v___x_195_;
v___y_181_ = v___x_196_;
v___y_182_ = v___x_198_;
goto v___jp_179_;
}
}
}
}
}
else
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_213_; 
lean_del_object(v___x_143_);
v___x_208_ = lean_nat_add(v___x_147_, v_size_149_);
lean_dec(v_size_149_);
v___x_209_ = lean_nat_add(v___x_208_, v_size_148_);
lean_dec(v___x_208_);
v___x_210_ = lean_nat_add(v___x_147_, v_size_148_);
v___x_211_ = lean_nat_add(v___x_210_, v_size_166_);
lean_dec(v___x_210_);
lean_inc_ref(v_r_141_);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 4, v_r_141_);
lean_ctor_set(v___x_163_, 3, v_r_153_);
lean_ctor_set(v___x_163_, 2, v_v_139_);
lean_ctor_set(v___x_163_, 1, v_k_138_);
lean_ctor_set(v___x_163_, 0, v___x_211_);
v___x_213_ = v___x_163_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_211_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v_k_138_);
lean_ctor_set(v_reuseFailAlloc_226_, 2, v_v_139_);
lean_ctor_set(v_reuseFailAlloc_226_, 3, v_r_153_);
lean_ctor_set(v_reuseFailAlloc_226_, 4, v_r_141_);
v___x_213_ = v_reuseFailAlloc_226_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
v_isSharedCheck_220_ = !lean_is_exclusive(v_r_141_);
if (v_isSharedCheck_220_ == 0)
{
lean_object* v_unused_221_; lean_object* v_unused_222_; lean_object* v_unused_223_; lean_object* v_unused_224_; lean_object* v_unused_225_; 
v_unused_221_ = lean_ctor_get(v_r_141_, 4);
lean_dec(v_unused_221_);
v_unused_222_ = lean_ctor_get(v_r_141_, 3);
lean_dec(v_unused_222_);
v_unused_223_ = lean_ctor_get(v_r_141_, 2);
lean_dec(v_unused_223_);
v_unused_224_ = lean_ctor_get(v_r_141_, 1);
lean_dec(v_unused_224_);
v_unused_225_ = lean_ctor_get(v_r_141_, 0);
lean_dec(v_unused_225_);
v___x_215_ = v_r_141_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_dec(v_r_141_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 4, v___x_213_);
lean_ctor_set(v___x_215_, 3, v_l_152_);
lean_ctor_set(v___x_215_, 2, v_v_151_);
lean_ctor_set(v___x_215_, 1, v_k_150_);
lean_ctor_set(v___x_215_, 0, v___x_209_);
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_209_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v_k_150_);
lean_ctor_set(v_reuseFailAlloc_219_, 2, v_v_151_);
lean_ctor_set(v_reuseFailAlloc_219_, 3, v_l_152_);
lean_ctor_set(v_reuseFailAlloc_219_, 4, v___x_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_233_; 
v_l_233_ = lean_ctor_get(v_impl_146_, 3);
lean_inc(v_l_233_);
if (lean_obj_tag(v_l_233_) == 0)
{
lean_object* v_r_234_; lean_object* v_k_235_; lean_object* v_v_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_247_; 
v_r_234_ = lean_ctor_get(v_impl_146_, 4);
v_k_235_ = lean_ctor_get(v_impl_146_, 1);
v_v_236_ = lean_ctor_get(v_impl_146_, 2);
v_isSharedCheck_247_ = !lean_is_exclusive(v_impl_146_);
if (v_isSharedCheck_247_ == 0)
{
lean_object* v_unused_248_; lean_object* v_unused_249_; 
v_unused_248_ = lean_ctor_get(v_impl_146_, 3);
lean_dec(v_unused_248_);
v_unused_249_ = lean_ctor_get(v_impl_146_, 0);
lean_dec(v_unused_249_);
v___x_238_ = v_impl_146_;
v_isShared_239_ = v_isSharedCheck_247_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_r_234_);
lean_inc(v_v_236_);
lean_inc(v_k_235_);
lean_dec(v_impl_146_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_247_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_240_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_234_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 3, v_r_234_);
lean_ctor_set(v___x_238_, 2, v_v_139_);
lean_ctor_set(v___x_238_, 1, v_k_138_);
lean_ctor_set(v___x_238_, 0, v___x_147_);
v___x_242_ = v___x_238_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v_k_138_);
lean_ctor_set(v_reuseFailAlloc_246_, 2, v_v_139_);
lean_ctor_set(v_reuseFailAlloc_246_, 3, v_r_234_);
lean_ctor_set(v_reuseFailAlloc_246_, 4, v_r_234_);
v___x_242_ = v_reuseFailAlloc_246_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
lean_object* v___x_244_; 
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 4, v___x_242_);
lean_ctor_set(v___x_143_, 3, v_l_233_);
lean_ctor_set(v___x_143_, 2, v_v_236_);
lean_ctor_set(v___x_143_, 1, v_k_235_);
lean_ctor_set(v___x_143_, 0, v___x_240_);
v___x_244_ = v___x_143_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v_k_235_);
lean_ctor_set(v_reuseFailAlloc_245_, 2, v_v_236_);
lean_ctor_set(v_reuseFailAlloc_245_, 3, v_l_233_);
lean_ctor_set(v_reuseFailAlloc_245_, 4, v___x_242_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
else
{
lean_object* v_r_250_; 
v_r_250_ = lean_ctor_get(v_impl_146_, 4);
lean_inc(v_r_250_);
if (lean_obj_tag(v_r_250_) == 0)
{
lean_object* v_k_251_; lean_object* v_v_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_275_; 
v_k_251_ = lean_ctor_get(v_impl_146_, 1);
v_v_252_ = lean_ctor_get(v_impl_146_, 2);
v_isSharedCheck_275_ = !lean_is_exclusive(v_impl_146_);
if (v_isSharedCheck_275_ == 0)
{
lean_object* v_unused_276_; lean_object* v_unused_277_; lean_object* v_unused_278_; 
v_unused_276_ = lean_ctor_get(v_impl_146_, 4);
lean_dec(v_unused_276_);
v_unused_277_ = lean_ctor_get(v_impl_146_, 3);
lean_dec(v_unused_277_);
v_unused_278_ = lean_ctor_get(v_impl_146_, 0);
lean_dec(v_unused_278_);
v___x_254_ = v_impl_146_;
v_isShared_255_ = v_isSharedCheck_275_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_v_252_);
lean_inc(v_k_251_);
lean_dec(v_impl_146_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_275_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v_k_256_; lean_object* v_v_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_271_; 
v_k_256_ = lean_ctor_get(v_r_250_, 1);
v_v_257_ = lean_ctor_get(v_r_250_, 2);
v_isSharedCheck_271_ = !lean_is_exclusive(v_r_250_);
if (v_isSharedCheck_271_ == 0)
{
lean_object* v_unused_272_; lean_object* v_unused_273_; lean_object* v_unused_274_; 
v_unused_272_ = lean_ctor_get(v_r_250_, 4);
lean_dec(v_unused_272_);
v_unused_273_ = lean_ctor_get(v_r_250_, 3);
lean_dec(v_unused_273_);
v_unused_274_ = lean_ctor_get(v_r_250_, 0);
lean_dec(v_unused_274_);
v___x_259_ = v_r_250_;
v_isShared_260_ = v_isSharedCheck_271_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_v_257_);
lean_inc(v_k_256_);
lean_dec(v_r_250_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_271_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_261_; lean_object* v___x_263_; 
v___x_261_ = lean_unsigned_to_nat(3u);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 4, v_l_233_);
lean_ctor_set(v___x_259_, 3, v_l_233_);
lean_ctor_set(v___x_259_, 2, v_v_252_);
lean_ctor_set(v___x_259_, 1, v_k_251_);
lean_ctor_set(v___x_259_, 0, v___x_147_);
v___x_263_ = v___x_259_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_270_, 1, v_k_251_);
lean_ctor_set(v_reuseFailAlloc_270_, 2, v_v_252_);
lean_ctor_set(v_reuseFailAlloc_270_, 3, v_l_233_);
lean_ctor_set(v_reuseFailAlloc_270_, 4, v_l_233_);
v___x_263_ = v_reuseFailAlloc_270_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
lean_object* v___x_265_; 
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 4, v_l_233_);
lean_ctor_set(v___x_254_, 2, v_v_139_);
lean_ctor_set(v___x_254_, 1, v_k_138_);
lean_ctor_set(v___x_254_, 0, v___x_147_);
v___x_265_ = v___x_254_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v_k_138_);
lean_ctor_set(v_reuseFailAlloc_269_, 2, v_v_139_);
lean_ctor_set(v_reuseFailAlloc_269_, 3, v_l_233_);
lean_ctor_set(v_reuseFailAlloc_269_, 4, v_l_233_);
v___x_265_ = v_reuseFailAlloc_269_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
lean_object* v___x_267_; 
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 4, v___x_265_);
lean_ctor_set(v___x_143_, 3, v___x_263_);
lean_ctor_set(v___x_143_, 2, v_v_257_);
lean_ctor_set(v___x_143_, 1, v_k_256_);
lean_ctor_set(v___x_143_, 0, v___x_261_);
v___x_267_ = v___x_143_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_261_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v_k_256_);
lean_ctor_set(v_reuseFailAlloc_268_, 2, v_v_257_);
lean_ctor_set(v_reuseFailAlloc_268_, 3, v___x_263_);
lean_ctor_set(v_reuseFailAlloc_268_, 4, v___x_265_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
}
}
else
{
lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_279_ = lean_unsigned_to_nat(2u);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 4, v_r_250_);
lean_ctor_set(v___x_143_, 3, v_impl_146_);
lean_ctor_set(v___x_143_, 0, v___x_279_);
v___x_281_ = v___x_143_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_279_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_k_138_);
lean_ctor_set(v_reuseFailAlloc_282_, 2, v_v_139_);
lean_ctor_set(v_reuseFailAlloc_282_, 3, v_impl_146_);
lean_ctor_set(v_reuseFailAlloc_282_, 4, v_r_250_);
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
}
case 1:
{
lean_object* v___x_284_; 
lean_dec(v_v_139_);
lean_dec(v_k_138_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 2, v_v_135_);
lean_ctor_set(v___x_143_, 1, v_k_134_);
v___x_284_ = v___x_143_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_size_137_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v_k_134_);
lean_ctor_set(v_reuseFailAlloc_285_, 2, v_v_135_);
lean_ctor_set(v_reuseFailAlloc_285_, 3, v_l_140_);
lean_ctor_set(v_reuseFailAlloc_285_, 4, v_r_141_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
default: 
{
lean_object* v_impl_286_; lean_object* v___x_287_; 
lean_dec(v_size_137_);
v_impl_286_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__1___redArg(v_k_134_, v_v_135_, v_r_141_);
v___x_287_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_140_) == 0)
{
lean_object* v_size_288_; lean_object* v_size_289_; lean_object* v_k_290_; lean_object* v_v_291_; lean_object* v_l_292_; lean_object* v_r_293_; lean_object* v___x_294_; lean_object* v___x_295_; uint8_t v___x_296_; 
v_size_288_ = lean_ctor_get(v_l_140_, 0);
v_size_289_ = lean_ctor_get(v_impl_286_, 0);
lean_inc(v_size_289_);
v_k_290_ = lean_ctor_get(v_impl_286_, 1);
lean_inc(v_k_290_);
v_v_291_ = lean_ctor_get(v_impl_286_, 2);
lean_inc(v_v_291_);
v_l_292_ = lean_ctor_get(v_impl_286_, 3);
lean_inc(v_l_292_);
v_r_293_ = lean_ctor_get(v_impl_286_, 4);
lean_inc(v_r_293_);
v___x_294_ = lean_unsigned_to_nat(3u);
v___x_295_ = lean_nat_mul(v___x_294_, v_size_288_);
v___x_296_ = lean_nat_dec_lt(v___x_295_, v_size_289_);
lean_dec(v___x_295_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_300_; 
lean_dec(v_r_293_);
lean_dec(v_l_292_);
lean_dec(v_v_291_);
lean_dec(v_k_290_);
v___x_297_ = lean_nat_add(v___x_287_, v_size_288_);
v___x_298_ = lean_nat_add(v___x_297_, v_size_289_);
lean_dec(v_size_289_);
lean_dec(v___x_297_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 4, v_impl_286_);
lean_ctor_set(v___x_143_, 0, v___x_298_);
v___x_300_ = v___x_143_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_298_);
lean_ctor_set(v_reuseFailAlloc_301_, 1, v_k_138_);
lean_ctor_set(v_reuseFailAlloc_301_, 2, v_v_139_);
lean_ctor_set(v_reuseFailAlloc_301_, 3, v_l_140_);
lean_ctor_set(v_reuseFailAlloc_301_, 4, v_impl_286_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
else
{
lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_365_; 
v_isSharedCheck_365_ = !lean_is_exclusive(v_impl_286_);
if (v_isSharedCheck_365_ == 0)
{
lean_object* v_unused_366_; lean_object* v_unused_367_; lean_object* v_unused_368_; lean_object* v_unused_369_; lean_object* v_unused_370_; 
v_unused_366_ = lean_ctor_get(v_impl_286_, 4);
lean_dec(v_unused_366_);
v_unused_367_ = lean_ctor_get(v_impl_286_, 3);
lean_dec(v_unused_367_);
v_unused_368_ = lean_ctor_get(v_impl_286_, 2);
lean_dec(v_unused_368_);
v_unused_369_ = lean_ctor_get(v_impl_286_, 1);
lean_dec(v_unused_369_);
v_unused_370_ = lean_ctor_get(v_impl_286_, 0);
lean_dec(v_unused_370_);
v___x_303_ = v_impl_286_;
v_isShared_304_ = v_isSharedCheck_365_;
goto v_resetjp_302_;
}
else
{
lean_dec(v_impl_286_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_365_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v_size_305_; lean_object* v_k_306_; lean_object* v_v_307_; lean_object* v_l_308_; lean_object* v_r_309_; lean_object* v_size_310_; lean_object* v___x_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v_size_305_ = lean_ctor_get(v_l_292_, 0);
v_k_306_ = lean_ctor_get(v_l_292_, 1);
v_v_307_ = lean_ctor_get(v_l_292_, 2);
v_l_308_ = lean_ctor_get(v_l_292_, 3);
v_r_309_ = lean_ctor_get(v_l_292_, 4);
v_size_310_ = lean_ctor_get(v_r_293_, 0);
v___x_311_ = lean_unsigned_to_nat(2u);
v___x_312_ = lean_nat_mul(v___x_311_, v_size_310_);
v___x_313_ = lean_nat_dec_lt(v_size_305_, v___x_312_);
lean_dec(v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_341_; 
lean_inc(v_r_309_);
lean_inc(v_l_308_);
lean_inc(v_v_307_);
lean_inc(v_k_306_);
v_isSharedCheck_341_ = !lean_is_exclusive(v_l_292_);
if (v_isSharedCheck_341_ == 0)
{
lean_object* v_unused_342_; lean_object* v_unused_343_; lean_object* v_unused_344_; lean_object* v_unused_345_; lean_object* v_unused_346_; 
v_unused_342_ = lean_ctor_get(v_l_292_, 4);
lean_dec(v_unused_342_);
v_unused_343_ = lean_ctor_get(v_l_292_, 3);
lean_dec(v_unused_343_);
v_unused_344_ = lean_ctor_get(v_l_292_, 2);
lean_dec(v_unused_344_);
v_unused_345_ = lean_ctor_get(v_l_292_, 1);
lean_dec(v_unused_345_);
v_unused_346_ = lean_ctor_get(v_l_292_, 0);
lean_dec(v_unused_346_);
v___x_315_ = v_l_292_;
v_isShared_316_ = v_isSharedCheck_341_;
goto v_resetjp_314_;
}
else
{
lean_dec(v_l_292_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_341_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___y_320_; lean_object* v___y_321_; lean_object* v___y_322_; lean_object* v___y_331_; 
v___x_317_ = lean_nat_add(v___x_287_, v_size_288_);
v___x_318_ = lean_nat_add(v___x_317_, v_size_289_);
lean_dec(v_size_289_);
if (lean_obj_tag(v_l_308_) == 0)
{
lean_object* v_size_339_; 
v_size_339_ = lean_ctor_get(v_l_308_, 0);
lean_inc(v_size_339_);
v___y_331_ = v_size_339_;
goto v___jp_330_;
}
else
{
lean_object* v___x_340_; 
v___x_340_ = lean_unsigned_to_nat(0u);
v___y_331_ = v___x_340_;
goto v___jp_330_;
}
v___jp_319_:
{
lean_object* v___x_323_; lean_object* v___x_325_; 
v___x_323_ = lean_nat_add(v___y_320_, v___y_322_);
lean_dec(v___y_322_);
lean_dec(v___y_320_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 4, v_r_293_);
lean_ctor_set(v___x_315_, 3, v_r_309_);
lean_ctor_set(v___x_315_, 2, v_v_291_);
lean_ctor_set(v___x_315_, 1, v_k_290_);
lean_ctor_set(v___x_315_, 0, v___x_323_);
v___x_325_ = v___x_315_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_323_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_k_290_);
lean_ctor_set(v_reuseFailAlloc_329_, 2, v_v_291_);
lean_ctor_set(v_reuseFailAlloc_329_, 3, v_r_309_);
lean_ctor_set(v_reuseFailAlloc_329_, 4, v_r_293_);
v___x_325_ = v_reuseFailAlloc_329_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
lean_object* v___x_327_; 
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 4, v___x_325_);
lean_ctor_set(v___x_303_, 3, v___y_321_);
lean_ctor_set(v___x_303_, 2, v_v_307_);
lean_ctor_set(v___x_303_, 1, v_k_306_);
lean_ctor_set(v___x_303_, 0, v___x_318_);
v___x_327_ = v___x_303_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_318_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v_k_306_);
lean_ctor_set(v_reuseFailAlloc_328_, 2, v_v_307_);
lean_ctor_set(v_reuseFailAlloc_328_, 3, v___y_321_);
lean_ctor_set(v_reuseFailAlloc_328_, 4, v___x_325_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
}
v___jp_330_:
{
lean_object* v___x_332_; lean_object* v___x_334_; 
v___x_332_ = lean_nat_add(v___x_317_, v___y_331_);
lean_dec(v___y_331_);
lean_dec(v___x_317_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 4, v_l_308_);
lean_ctor_set(v___x_143_, 0, v___x_332_);
v___x_334_ = v___x_143_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_332_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_k_138_);
lean_ctor_set(v_reuseFailAlloc_338_, 2, v_v_139_);
lean_ctor_set(v_reuseFailAlloc_338_, 3, v_l_140_);
lean_ctor_set(v_reuseFailAlloc_338_, 4, v_l_308_);
v___x_334_ = v_reuseFailAlloc_338_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
lean_object* v___x_335_; 
v___x_335_ = lean_nat_add(v___x_287_, v_size_310_);
if (lean_obj_tag(v_r_309_) == 0)
{
lean_object* v_size_336_; 
v_size_336_ = lean_ctor_get(v_r_309_, 0);
lean_inc(v_size_336_);
v___y_320_ = v___x_335_;
v___y_321_ = v___x_334_;
v___y_322_ = v_size_336_;
goto v___jp_319_;
}
else
{
lean_object* v___x_337_; 
v___x_337_ = lean_unsigned_to_nat(0u);
v___y_320_ = v___x_335_;
v___y_321_ = v___x_334_;
v___y_322_ = v___x_337_;
goto v___jp_319_;
}
}
}
}
}
else
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_351_; 
lean_del_object(v___x_143_);
v___x_347_ = lean_nat_add(v___x_287_, v_size_288_);
v___x_348_ = lean_nat_add(v___x_347_, v_size_289_);
lean_dec(v_size_289_);
v___x_349_ = lean_nat_add(v___x_347_, v_size_305_);
lean_dec(v___x_347_);
lean_inc_ref(v_l_140_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 4, v_l_292_);
lean_ctor_set(v___x_303_, 3, v_l_140_);
lean_ctor_set(v___x_303_, 2, v_v_139_);
lean_ctor_set(v___x_303_, 1, v_k_138_);
lean_ctor_set(v___x_303_, 0, v___x_349_);
v___x_351_ = v___x_303_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v_k_138_);
lean_ctor_set(v_reuseFailAlloc_364_, 2, v_v_139_);
lean_ctor_set(v_reuseFailAlloc_364_, 3, v_l_140_);
lean_ctor_set(v_reuseFailAlloc_364_, 4, v_l_292_);
v___x_351_ = v_reuseFailAlloc_364_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_358_; 
v_isSharedCheck_358_ = !lean_is_exclusive(v_l_140_);
if (v_isSharedCheck_358_ == 0)
{
lean_object* v_unused_359_; lean_object* v_unused_360_; lean_object* v_unused_361_; lean_object* v_unused_362_; lean_object* v_unused_363_; 
v_unused_359_ = lean_ctor_get(v_l_140_, 4);
lean_dec(v_unused_359_);
v_unused_360_ = lean_ctor_get(v_l_140_, 3);
lean_dec(v_unused_360_);
v_unused_361_ = lean_ctor_get(v_l_140_, 2);
lean_dec(v_unused_361_);
v_unused_362_ = lean_ctor_get(v_l_140_, 1);
lean_dec(v_unused_362_);
v_unused_363_ = lean_ctor_get(v_l_140_, 0);
lean_dec(v_unused_363_);
v___x_353_ = v_l_140_;
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
else
{
lean_dec(v_l_140_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 4, v_r_293_);
lean_ctor_set(v___x_353_, 3, v___x_351_);
lean_ctor_set(v___x_353_, 2, v_v_291_);
lean_ctor_set(v___x_353_, 1, v_k_290_);
lean_ctor_set(v___x_353_, 0, v___x_348_);
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_348_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_k_290_);
lean_ctor_set(v_reuseFailAlloc_357_, 2, v_v_291_);
lean_ctor_set(v_reuseFailAlloc_357_, 3, v___x_351_);
lean_ctor_set(v_reuseFailAlloc_357_, 4, v_r_293_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_371_; 
v_l_371_ = lean_ctor_get(v_impl_286_, 3);
lean_inc(v_l_371_);
if (lean_obj_tag(v_l_371_) == 0)
{
lean_object* v_r_372_; lean_object* v_k_373_; lean_object* v_v_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_397_; 
v_r_372_ = lean_ctor_get(v_impl_286_, 4);
v_k_373_ = lean_ctor_get(v_impl_286_, 1);
v_v_374_ = lean_ctor_get(v_impl_286_, 2);
v_isSharedCheck_397_ = !lean_is_exclusive(v_impl_286_);
if (v_isSharedCheck_397_ == 0)
{
lean_object* v_unused_398_; lean_object* v_unused_399_; 
v_unused_398_ = lean_ctor_get(v_impl_286_, 3);
lean_dec(v_unused_398_);
v_unused_399_ = lean_ctor_get(v_impl_286_, 0);
lean_dec(v_unused_399_);
v___x_376_ = v_impl_286_;
v_isShared_377_ = v_isSharedCheck_397_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_r_372_);
lean_inc(v_v_374_);
lean_inc(v_k_373_);
lean_dec(v_impl_286_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_397_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v_k_378_; lean_object* v_v_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_393_; 
v_k_378_ = lean_ctor_get(v_l_371_, 1);
v_v_379_ = lean_ctor_get(v_l_371_, 2);
v_isSharedCheck_393_ = !lean_is_exclusive(v_l_371_);
if (v_isSharedCheck_393_ == 0)
{
lean_object* v_unused_394_; lean_object* v_unused_395_; lean_object* v_unused_396_; 
v_unused_394_ = lean_ctor_get(v_l_371_, 4);
lean_dec(v_unused_394_);
v_unused_395_ = lean_ctor_get(v_l_371_, 3);
lean_dec(v_unused_395_);
v_unused_396_ = lean_ctor_get(v_l_371_, 0);
lean_dec(v_unused_396_);
v___x_381_ = v_l_371_;
v_isShared_382_ = v_isSharedCheck_393_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_v_379_);
lean_inc(v_k_378_);
lean_dec(v_l_371_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_393_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_383_; lean_object* v___x_385_; 
v___x_383_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_372_, 2);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 4, v_r_372_);
lean_ctor_set(v___x_381_, 3, v_r_372_);
lean_ctor_set(v___x_381_, 2, v_v_139_);
lean_ctor_set(v___x_381_, 1, v_k_138_);
lean_ctor_set(v___x_381_, 0, v___x_287_);
v___x_385_ = v___x_381_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v_k_138_);
lean_ctor_set(v_reuseFailAlloc_392_, 2, v_v_139_);
lean_ctor_set(v_reuseFailAlloc_392_, 3, v_r_372_);
lean_ctor_set(v_reuseFailAlloc_392_, 4, v_r_372_);
v___x_385_ = v_reuseFailAlloc_392_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
lean_object* v___x_387_; 
lean_inc(v_r_372_);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 3, v_r_372_);
lean_ctor_set(v___x_376_, 0, v___x_287_);
v___x_387_ = v___x_376_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_k_373_);
lean_ctor_set(v_reuseFailAlloc_391_, 2, v_v_374_);
lean_ctor_set(v_reuseFailAlloc_391_, 3, v_r_372_);
lean_ctor_set(v_reuseFailAlloc_391_, 4, v_r_372_);
v___x_387_ = v_reuseFailAlloc_391_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
lean_object* v___x_389_; 
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 4, v___x_387_);
lean_ctor_set(v___x_143_, 3, v___x_385_);
lean_ctor_set(v___x_143_, 2, v_v_379_);
lean_ctor_set(v___x_143_, 1, v_k_378_);
lean_ctor_set(v___x_143_, 0, v___x_383_);
v___x_389_ = v___x_143_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_383_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v_k_378_);
lean_ctor_set(v_reuseFailAlloc_390_, 2, v_v_379_);
lean_ctor_set(v_reuseFailAlloc_390_, 3, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_390_, 4, v___x_387_);
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
else
{
lean_object* v_r_400_; 
v_r_400_ = lean_ctor_get(v_impl_286_, 4);
lean_inc(v_r_400_);
if (lean_obj_tag(v_r_400_) == 0)
{
lean_object* v_k_401_; lean_object* v_v_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_413_; 
v_k_401_ = lean_ctor_get(v_impl_286_, 1);
v_v_402_ = lean_ctor_get(v_impl_286_, 2);
v_isSharedCheck_413_ = !lean_is_exclusive(v_impl_286_);
if (v_isSharedCheck_413_ == 0)
{
lean_object* v_unused_414_; lean_object* v_unused_415_; lean_object* v_unused_416_; 
v_unused_414_ = lean_ctor_get(v_impl_286_, 4);
lean_dec(v_unused_414_);
v_unused_415_ = lean_ctor_get(v_impl_286_, 3);
lean_dec(v_unused_415_);
v_unused_416_ = lean_ctor_get(v_impl_286_, 0);
lean_dec(v_unused_416_);
v___x_404_ = v_impl_286_;
v_isShared_405_ = v_isSharedCheck_413_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_v_402_);
lean_inc(v_k_401_);
lean_dec(v_impl_286_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_413_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_406_; lean_object* v___x_408_; 
v___x_406_ = lean_unsigned_to_nat(3u);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 4, v_l_371_);
lean_ctor_set(v___x_404_, 2, v_v_139_);
lean_ctor_set(v___x_404_, 1, v_k_138_);
lean_ctor_set(v___x_404_, 0, v___x_287_);
v___x_408_ = v___x_404_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v_k_138_);
lean_ctor_set(v_reuseFailAlloc_412_, 2, v_v_139_);
lean_ctor_set(v_reuseFailAlloc_412_, 3, v_l_371_);
lean_ctor_set(v_reuseFailAlloc_412_, 4, v_l_371_);
v___x_408_ = v_reuseFailAlloc_412_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
lean_object* v___x_410_; 
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 4, v_r_400_);
lean_ctor_set(v___x_143_, 3, v___x_408_);
lean_ctor_set(v___x_143_, 2, v_v_402_);
lean_ctor_set(v___x_143_, 1, v_k_401_);
lean_ctor_set(v___x_143_, 0, v___x_406_);
v___x_410_ = v___x_143_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_406_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v_k_401_);
lean_ctor_set(v_reuseFailAlloc_411_, 2, v_v_402_);
lean_ctor_set(v_reuseFailAlloc_411_, 3, v___x_408_);
lean_ctor_set(v_reuseFailAlloc_411_, 4, v_r_400_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
else
{
lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_417_ = lean_unsigned_to_nat(2u);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 4, v_impl_286_);
lean_ctor_set(v___x_143_, 3, v_r_400_);
lean_ctor_set(v___x_143_, 0, v___x_417_);
v___x_419_ = v___x_143_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_417_);
lean_ctor_set(v_reuseFailAlloc_420_, 1, v_k_138_);
lean_ctor_set(v_reuseFailAlloc_420_, 2, v_v_139_);
lean_ctor_set(v_reuseFailAlloc_420_, 3, v_r_400_);
lean_ctor_set(v_reuseFailAlloc_420_, 4, v_impl_286_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
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
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = lean_unsigned_to_nat(1u);
v___x_423_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
lean_ctor_set(v___x_423_, 1, v_k_134_);
lean_ctor_set(v___x_423_, 2, v_v_135_);
lean_ctor_set(v___x_423_, 3, v_t_136_);
lean_ctor_set(v___x_423_, 4, v_t_136_);
return v___x_423_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody(lean_object* v_x_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
switch(lean_obj_tag(v_x_424_))
{
case 0:
{
lean_object* v_e_427_; lean_object* v_b_428_; lean_object* v___y_430_; lean_object* v___y_431_; lean_object* v___y_432_; lean_object* v_fst_433_; lean_object* v_snd_434_; lean_object* v_f_442_; lean_object* v___y_443_; lean_object* v___y_444_; 
v_e_427_ = lean_ctor_get(v_x_424_, 2);
lean_inc_ref(v_e_427_);
v_b_428_ = lean_ctor_get(v_x_424_, 3);
lean_inc(v_b_428_);
lean_dec_ref(v_x_424_);
switch(lean_obj_tag(v_e_427_))
{
case 6:
{
lean_object* v_c_452_; 
v_c_452_ = lean_ctor_get(v_e_427_, 0);
lean_inc(v_c_452_);
lean_dec_ref(v_e_427_);
v_f_442_ = v_c_452_;
v___y_443_ = v_a_425_;
v___y_444_ = v_a_426_;
goto v___jp_441_;
}
case 7:
{
lean_object* v_c_453_; 
v_c_453_ = lean_ctor_get(v_e_427_, 0);
lean_inc(v_c_453_);
lean_dec_ref(v_e_427_);
v_f_442_ = v_c_453_;
v___y_443_ = v_a_425_;
v___y_444_ = v_a_426_;
goto v___jp_441_;
}
default: 
{
lean_dec_ref(v_e_427_);
v_x_424_ = v_b_428_;
goto _start;
}
}
v___jp_429_:
{
uint8_t v___x_435_; 
v___x_435_ = lean_unbox(v_fst_433_);
lean_dec(v_fst_433_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = lean_array_push(v___y_431_, v___y_432_);
v___x_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_437_, 0, v_snd_434_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v_x_424_ = v_b_428_;
v_a_425_ = v___y_430_;
v_a_426_ = v___x_437_;
goto _start;
}
else
{
lean_object* v___x_439_; 
lean_dec(v___y_432_);
v___x_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_439_, 0, v_snd_434_);
lean_ctor_set(v___x_439_, 1, v___y_431_);
v_x_424_ = v_b_428_;
v_a_425_ = v___y_430_;
v_a_426_ = v___x_439_;
goto _start;
}
}
v___jp_441_:
{
lean_object* v_set_445_; lean_object* v_order_446_; uint8_t v___x_447_; 
v_set_445_ = lean_ctor_get(v___y_444_, 0);
lean_inc(v_set_445_);
v_order_446_ = lean_ctor_get(v___y_444_, 1);
lean_inc_ref(v_order_446_);
lean_dec_ref(v___y_444_);
v___x_447_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___redArg(v_f_442_, v_set_445_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_448_ = lean_box(0);
lean_inc(v_f_442_);
v___x_449_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__1___redArg(v_f_442_, v___x_448_, v_set_445_);
v___x_450_ = lean_box(v___x_447_);
v___y_430_ = v___y_443_;
v___y_431_ = v_order_446_;
v___y_432_ = v_f_442_;
v_fst_433_ = v___x_450_;
v_snd_434_ = v___x_449_;
goto v___jp_429_;
}
else
{
lean_object* v___x_451_; 
v___x_451_ = lean_box(v___x_447_);
v___y_430_ = v___y_443_;
v___y_431_ = v_order_446_;
v___y_432_ = v_f_442_;
v_fst_433_ = v___x_451_;
v_snd_434_ = v_set_445_;
goto v___jp_429_;
}
}
}
case 1:
{
lean_object* v_v_455_; lean_object* v_b_456_; lean_object* v___x_457_; lean_object* v_snd_458_; 
v_v_455_ = lean_ctor_get(v_x_424_, 2);
lean_inc(v_v_455_);
v_b_456_ = lean_ctor_get(v_x_424_, 3);
lean_inc(v_b_456_);
lean_dec_ref(v_x_424_);
v___x_457_ = l_Lean_IR_CollectUsedDecls_collectFnBody(v_v_455_, v_a_425_, v_a_426_);
v_snd_458_ = lean_ctor_get(v___x_457_, 1);
lean_inc(v_snd_458_);
lean_dec_ref(v___x_457_);
v_x_424_ = v_b_456_;
v_a_426_ = v_snd_458_;
goto _start;
}
case 9:
{
lean_object* v_cs_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v_cs_460_ = lean_ctor_get(v_x_424_, 3);
lean_inc_ref(v_cs_460_);
lean_dec_ref(v_x_424_);
v___x_461_ = lean_unsigned_to_nat(0u);
v___x_462_ = lean_array_get_size(v_cs_460_);
v___x_463_ = lean_box(0);
v___x_464_ = lean_nat_dec_lt(v___x_461_, v___x_462_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; 
lean_dec_ref(v_cs_460_);
v___x_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_463_);
lean_ctor_set(v___x_465_, 1, v_a_426_);
return v___x_465_;
}
else
{
uint8_t v___x_466_; 
v___x_466_ = lean_nat_dec_le(v___x_462_, v___x_462_);
if (v___x_466_ == 0)
{
if (v___x_464_ == 0)
{
lean_object* v___x_467_; 
lean_dec_ref(v_cs_460_);
v___x_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_467_, 0, v___x_463_);
lean_ctor_set(v___x_467_, 1, v_a_426_);
return v___x_467_;
}
else
{
size_t v___x_468_; size_t v___x_469_; lean_object* v___x_470_; 
v___x_468_ = ((size_t)0ULL);
v___x_469_ = lean_usize_of_nat(v___x_462_);
v___x_470_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__2(v_cs_460_, v___x_468_, v___x_469_, v___x_463_, v_a_425_, v_a_426_);
lean_dec_ref(v_cs_460_);
return v___x_470_;
}
}
else
{
size_t v___x_471_; size_t v___x_472_; lean_object* v___x_473_; 
v___x_471_ = ((size_t)0ULL);
v___x_472_ = lean_usize_of_nat(v___x_462_);
v___x_473_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__2(v_cs_460_, v___x_471_, v___x_472_, v___x_463_, v_a_425_, v_a_426_);
lean_dec_ref(v_cs_460_);
return v___x_473_;
}
}
}
default: 
{
uint8_t v___x_474_; 
v___x_474_ = l_Lean_IR_FnBody_isTerminal(v_x_424_);
if (v___x_474_ == 0)
{
lean_object* v___x_475_; 
v___x_475_ = l_Lean_IR_FnBody_body(v_x_424_);
lean_dec(v_x_424_);
v_x_424_ = v___x_475_;
goto _start;
}
else
{
lean_object* v___x_477_; lean_object* v___x_478_; 
lean_dec(v_x_424_);
v___x_477_ = lean_box(0);
v___x_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
lean_ctor_set(v___x_478_, 1, v_a_426_);
return v___x_478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__2(lean_object* v_as_479_, size_t v_i_480_, size_t v_stop_481_, lean_object* v_b_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
uint8_t v___x_485_; 
v___x_485_ = lean_usize_dec_eq(v_i_480_, v_stop_481_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v_fst_489_; lean_object* v_snd_490_; size_t v___x_491_; size_t v___x_492_; 
v___x_486_ = lean_array_uget_borrowed(v_as_479_, v_i_480_);
v___x_487_ = l_Lean_IR_Alt_body(v___x_486_);
v___x_488_ = l_Lean_IR_CollectUsedDecls_collectFnBody(v___x_487_, v___y_483_, v___y_484_);
v_fst_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_fst_489_);
v_snd_490_ = lean_ctor_get(v___x_488_, 1);
lean_inc(v_snd_490_);
lean_dec_ref(v___x_488_);
v___x_491_ = ((size_t)1ULL);
v___x_492_ = lean_usize_add(v_i_480_, v___x_491_);
v_i_480_ = v___x_492_;
v_b_482_ = v_fst_489_;
v___y_484_ = v_snd_490_;
goto _start;
}
else
{
lean_object* v___x_494_; 
v___x_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_494_, 0, v_b_482_);
lean_ctor_set(v___x_494_, 1, v___y_484_);
return v___x_494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__2___boxed(lean_object* v_as_495_, lean_object* v_i_496_, lean_object* v_stop_497_, lean_object* v_b_498_, lean_object* v___y_499_, lean_object* v___y_500_){
_start:
{
size_t v_i_boxed_501_; size_t v_stop_boxed_502_; lean_object* v_res_503_; 
v_i_boxed_501_ = lean_unbox_usize(v_i_496_);
lean_dec(v_i_496_);
v_stop_boxed_502_ = lean_unbox_usize(v_stop_497_);
lean_dec(v_stop_497_);
v_res_503_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__2(v_as_495_, v_i_boxed_501_, v_stop_boxed_502_, v_b_498_, v___y_499_, v___y_500_);
lean_dec_ref(v___y_499_);
lean_dec_ref(v_as_495_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody___boxed(lean_object* v_x_504_, lean_object* v_a_505_, lean_object* v_a_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_IR_CollectUsedDecls_collectFnBody(v_x_504_, v_a_505_, v_a_506_);
lean_dec_ref(v_a_505_);
return v_res_507_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0(lean_object* v_00_u03b2_508_, lean_object* v_k_509_, lean_object* v_t_510_){
_start:
{
uint8_t v___x_511_; 
v___x_511_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___redArg(v_k_509_, v_t_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___boxed(lean_object* v_00_u03b2_512_, lean_object* v_k_513_, lean_object* v_t_514_){
_start:
{
uint8_t v_res_515_; lean_object* v_r_516_; 
v_res_515_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0(v_00_u03b2_512_, v_k_513_, v_t_514_);
lean_dec(v_t_514_);
lean_dec(v_k_513_);
v_r_516_ = lean_box(v_res_515_);
return v_r_516_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__1(lean_object* v_00_u03b2_517_, lean_object* v_k_518_, lean_object* v_v_519_, lean_object* v_t_520_, lean_object* v_hl_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__1___redArg(v_k_518_, v_v_519_, v_t_520_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl(lean_object* v_fn_523_, lean_object* v_a_524_, lean_object* v_a_525_){
_start:
{
lean_object* v___x_526_; 
lean_inc_ref(v_a_524_);
v___x_526_ = lean_get_init_fn_name_for(v_a_524_, v_fn_523_);
if (lean_obj_tag(v___x_526_) == 1)
{
lean_object* v_val_527_; lean_object* v_set_528_; lean_object* v_order_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_551_; 
v_val_527_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_val_527_);
lean_dec_ref(v___x_526_);
v_set_528_ = lean_ctor_get(v_a_525_, 0);
v_order_529_ = lean_ctor_get(v_a_525_, 1);
v_isSharedCheck_551_ = !lean_is_exclusive(v_a_525_);
if (v_isSharedCheck_551_ == 0)
{
v___x_531_ = v_a_525_;
v_isShared_532_ = v_isSharedCheck_551_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_order_529_);
lean_inc(v_set_528_);
lean_dec(v_a_525_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_551_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_533_; lean_object* v_fst_535_; lean_object* v_snd_536_; uint8_t v___x_547_; 
v___x_533_ = lean_box(0);
v___x_547_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___redArg(v_val_527_, v_set_528_);
if (v___x_547_ == 0)
{
lean_object* v___x_548_; lean_object* v___x_549_; 
lean_inc(v_val_527_);
v___x_548_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__1___redArg(v_val_527_, v___x_533_, v_set_528_);
v___x_549_ = lean_box(v___x_547_);
v_fst_535_ = v___x_549_;
v_snd_536_ = v___x_548_;
goto v___jp_534_;
}
else
{
lean_object* v___x_550_; 
v___x_550_ = lean_box(v___x_547_);
v_fst_535_ = v___x_550_;
v_snd_536_ = v_set_528_;
goto v___jp_534_;
}
v___jp_534_:
{
uint8_t v___x_537_; 
v___x_537_ = lean_unbox(v_fst_535_);
lean_dec(v_fst_535_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; lean_object* v___x_540_; 
v___x_538_ = lean_array_push(v_order_529_, v_val_527_);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 1, v___x_538_);
lean_ctor_set(v___x_531_, 0, v_snd_536_);
v___x_540_ = v___x_531_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_snd_536_);
lean_ctor_set(v_reuseFailAlloc_542_, 1, v___x_538_);
v___x_540_ = v_reuseFailAlloc_542_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
lean_object* v___x_541_; 
v___x_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_533_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
return v___x_541_;
}
}
else
{
lean_object* v___x_544_; 
lean_dec(v_val_527_);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 0, v_snd_536_);
v___x_544_ = v___x_531_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_snd_536_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_order_529_);
v___x_544_ = v_reuseFailAlloc_546_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
lean_object* v___x_545_; 
v___x_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_533_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
return v___x_545_;
}
}
}
}
}
else
{
lean_object* v___x_552_; lean_object* v___x_553_; 
lean_dec(v___x_526_);
v___x_552_ = lean_box(0);
v___x_553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
lean_ctor_set(v___x_553_, 1, v_a_525_);
return v___x_553_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl___boxed(lean_object* v_fn_554_, lean_object* v_a_555_, lean_object* v_a_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lean_IR_CollectUsedDecls_collectInitDecl(v_fn_554_, v_a_555_, v_a_556_);
lean_dec_ref(v_a_555_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDecl(lean_object* v_x_558_, lean_object* v_a_559_, lean_object* v_a_560_){
_start:
{
if (lean_obj_tag(v_x_558_) == 0)
{
lean_object* v_f_561_; lean_object* v_body_562_; lean_object* v___x_563_; lean_object* v_snd_564_; lean_object* v___x_565_; 
v_f_561_ = lean_ctor_get(v_x_558_, 0);
lean_inc(v_f_561_);
v_body_562_ = lean_ctor_get(v_x_558_, 3);
lean_inc(v_body_562_);
lean_dec_ref(v_x_558_);
v___x_563_ = l_Lean_IR_CollectUsedDecls_collectInitDecl(v_f_561_, v_a_559_, v_a_560_);
v_snd_564_ = lean_ctor_get(v___x_563_, 1);
lean_inc(v_snd_564_);
lean_dec_ref(v___x_563_);
v___x_565_ = l_Lean_IR_CollectUsedDecls_collectFnBody(v_body_562_, v_a_559_, v_snd_564_);
return v___x_565_;
}
else
{
lean_object* v_f_566_; lean_object* v___x_567_; 
v_f_566_ = lean_ctor_get(v_x_558_, 0);
lean_inc(v_f_566_);
lean_dec_ref(v_x_558_);
v___x_567_ = l_Lean_IR_CollectUsedDecls_collectInitDecl(v_f_566_, v_a_559_, v_a_560_);
return v___x_567_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDecl___boxed(lean_object* v_x_568_, lean_object* v_a_569_, lean_object* v_a_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lean_IR_CollectUsedDecls_collectDecl(v_x_568_, v_a_569_, v_a_570_);
lean_dec_ref(v_a_569_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0(lean_object* v_as_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
if (lean_obj_tag(v_as_572_) == 0)
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_box(0);
v___x_576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
lean_ctor_set(v___x_576_, 1, v___y_574_);
return v___x_576_;
}
else
{
lean_object* v_head_577_; lean_object* v_tail_578_; lean_object* v___x_579_; lean_object* v_snd_580_; lean_object* v_set_581_; lean_object* v_order_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_605_; 
v_head_577_ = lean_ctor_get(v_as_572_, 0);
lean_inc_n(v_head_577_, 2);
v_tail_578_ = lean_ctor_get(v_as_572_, 1);
lean_inc(v_tail_578_);
lean_dec_ref(v_as_572_);
v___x_579_ = l_Lean_IR_CollectUsedDecls_collectDecl(v_head_577_, v___y_573_, v___y_574_);
v_snd_580_ = lean_ctor_get(v___x_579_, 1);
lean_inc(v_snd_580_);
lean_dec_ref(v___x_579_);
v_set_581_ = lean_ctor_get(v_snd_580_, 0);
v_order_582_ = lean_ctor_get(v_snd_580_, 1);
v_isSharedCheck_605_ = !lean_is_exclusive(v_snd_580_);
if (v_isSharedCheck_605_ == 0)
{
v___x_584_ = v_snd_580_;
v_isShared_585_ = v_isSharedCheck_605_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_order_582_);
lean_inc(v_set_581_);
lean_dec(v_snd_580_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_605_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_586_; lean_object* v_fst_588_; lean_object* v_snd_589_; uint8_t v___x_600_; 
v___x_586_ = l_Lean_IR_Decl_name(v_head_577_);
lean_dec(v_head_577_);
v___x_600_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___redArg(v___x_586_, v_set_581_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_601_ = lean_box(0);
lean_inc(v___x_586_);
v___x_602_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__1___redArg(v___x_586_, v___x_601_, v_set_581_);
v___x_603_ = lean_box(v___x_600_);
v_fst_588_ = v___x_603_;
v_snd_589_ = v___x_602_;
goto v___jp_587_;
}
else
{
lean_object* v___x_604_; 
v___x_604_ = lean_box(v___x_600_);
v_fst_588_ = v___x_604_;
v_snd_589_ = v_set_581_;
goto v___jp_587_;
}
v___jp_587_:
{
uint8_t v___x_590_; 
v___x_590_ = lean_unbox(v_fst_588_);
lean_dec(v_fst_588_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_591_ = lean_array_push(v_order_582_, v___x_586_);
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 1, v___x_591_);
lean_ctor_set(v___x_584_, 0, v_snd_589_);
v___x_593_ = v___x_584_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_snd_589_);
lean_ctor_set(v_reuseFailAlloc_595_, 1, v___x_591_);
v___x_593_ = v_reuseFailAlloc_595_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
v_as_572_ = v_tail_578_;
v___y_574_ = v___x_593_;
goto _start;
}
}
else
{
lean_object* v___x_597_; 
lean_dec(v___x_586_);
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 0, v_snd_589_);
v___x_597_ = v___x_584_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_snd_589_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v_order_582_);
v___x_597_ = v_reuseFailAlloc_599_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
v_as_572_ = v_tail_578_;
v___y_574_ = v___x_597_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0___boxed(lean_object* v_as_606_, lean_object* v___y_607_, lean_object* v___y_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0(v_as_606_, v___y_607_, v___y_608_);
lean_dec_ref(v___y_607_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDeclLoop(lean_object* v_decls_610_, lean_object* v_a_611_, lean_object* v_a_612_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0(v_decls_610_, v_a_611_, v_a_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDeclLoop___boxed(lean_object* v_decls_614_, lean_object* v_a_615_, lean_object* v_a_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Lean_IR_CollectUsedDecls_collectDeclLoop(v_decls_614_, v_a_615_, v_a_616_);
lean_dec_ref(v_a_615_);
return v_res_617_;
}
}
static lean_object* _init_l_Lean_IR_collectUsedDecls___closed__0(void){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_618_ = lean_unsigned_to_nat(0u);
v___x_619_ = lean_mk_empty_array_with_capacity(v___x_618_);
return v___x_619_;
}
}
static lean_object* _init_l_Lean_IR_collectUsedDecls___closed__1(void){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_620_ = lean_obj_once(&l_Lean_IR_collectUsedDecls___closed__0, &l_Lean_IR_collectUsedDecls___closed__0_once, _init_l_Lean_IR_collectUsedDecls___closed__0);
v___x_621_ = l_Lean_NameSet_empty;
v___x_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
lean_ctor_set(v___x_622_, 1, v___x_620_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_collectUsedDecls(lean_object* v_env_623_, lean_object* v_decls_624_){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v_snd_627_; lean_object* v_order_628_; 
v___x_625_ = lean_obj_once(&l_Lean_IR_collectUsedDecls___closed__1, &l_Lean_IR_collectUsedDecls___closed__1_once, _init_l_Lean_IR_collectUsedDecls___closed__1);
v___x_626_ = l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0(v_decls_624_, v_env_623_, v___x_625_);
v_snd_627_ = lean_ctor_get(v___x_626_, 1);
lean_inc(v_snd_627_);
lean_dec_ref(v___x_626_);
v_order_628_ = lean_ctor_get(v_snd_627_, 1);
lean_inc_ref(v_order_628_);
lean_dec(v_snd_627_);
return v_order_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_collectUsedDecls___boxed(lean_object* v_env_629_, lean_object* v_decls_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_IR_collectUsedDecls(v_env_629_, v_decls_630_);
lean_dec_ref(v_env_629_);
return v_res_631_;
}
}
static lean_object* _init_l_Lean_IR_CollectMaps_collectVar___closed__0(void){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = lean_alloc_closure((void*)(l_Lean_IR_instBEqVarId_beq___boxed), 2, 0);
return v___x_632_;
}
}
static lean_object* _init_l_Lean_IR_CollectMaps_collectVar___closed__1(void){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = lean_alloc_closure((void*)(l_Lean_IR_instHashableVarId_hash___boxed), 1, 0);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectVar(lean_object* v_x_634_, lean_object* v_t_635_, lean_object* v_x_636_){
_start:
{
lean_object* v_fst_637_; lean_object* v_snd_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_648_; 
v_fst_637_ = lean_ctor_get(v_x_636_, 0);
v_snd_638_ = lean_ctor_get(v_x_636_, 1);
v_isSharedCheck_648_ = !lean_is_exclusive(v_x_636_);
if (v_isSharedCheck_648_ == 0)
{
v___x_640_ = v_x_636_;
v_isShared_641_ = v_isSharedCheck_648_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_snd_638_);
lean_inc(v_fst_637_);
lean_dec(v_x_636_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_648_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_646_; 
v___x_642_ = lean_obj_once(&l_Lean_IR_CollectMaps_collectVar___closed__0, &l_Lean_IR_CollectMaps_collectVar___closed__0_once, _init_l_Lean_IR_CollectMaps_collectVar___closed__0);
v___x_643_ = lean_obj_once(&l_Lean_IR_CollectMaps_collectVar___closed__1, &l_Lean_IR_CollectMaps_collectVar___closed__1_once, _init_l_Lean_IR_CollectMaps_collectVar___closed__1);
v___x_644_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_642_, v___x_643_, v_fst_637_, v_x_634_, v_t_635_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 0, v___x_644_);
v___x_646_ = v___x_640_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_644_);
lean_ctor_set(v_reuseFailAlloc_647_, 1, v_snd_638_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2___redArg(lean_object* v_a_649_, lean_object* v_b_650_, lean_object* v_x_651_){
_start:
{
if (lean_obj_tag(v_x_651_) == 0)
{
lean_dec(v_b_650_);
lean_dec(v_a_649_);
return v_x_651_;
}
else
{
lean_object* v_key_652_; lean_object* v_value_653_; lean_object* v_tail_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_666_; 
v_key_652_ = lean_ctor_get(v_x_651_, 0);
v_value_653_ = lean_ctor_get(v_x_651_, 1);
v_tail_654_ = lean_ctor_get(v_x_651_, 2);
v_isSharedCheck_666_ = !lean_is_exclusive(v_x_651_);
if (v_isSharedCheck_666_ == 0)
{
v___x_656_ = v_x_651_;
v_isShared_657_ = v_isSharedCheck_666_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_tail_654_);
lean_inc(v_value_653_);
lean_inc(v_key_652_);
lean_dec(v_x_651_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_666_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
uint8_t v___x_658_; 
v___x_658_ = l_Lean_IR_instBEqVarId_beq(v_key_652_, v_a_649_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; lean_object* v___x_661_; 
v___x_659_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2___redArg(v_a_649_, v_b_650_, v_tail_654_);
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 2, v___x_659_);
v___x_661_ = v___x_656_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_key_652_);
lean_ctor_set(v_reuseFailAlloc_662_, 1, v_value_653_);
lean_ctor_set(v_reuseFailAlloc_662_, 2, v___x_659_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
else
{
lean_object* v___x_664_; 
lean_dec(v_value_653_);
lean_dec(v_key_652_);
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 1, v_b_650_);
lean_ctor_set(v___x_656_, 0, v_a_649_);
v___x_664_ = v___x_656_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_a_649_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v_b_650_);
lean_ctor_set(v_reuseFailAlloc_665_, 2, v_tail_654_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_667_, lean_object* v_x_668_){
_start:
{
if (lean_obj_tag(v_x_668_) == 0)
{
return v_x_667_;
}
else
{
lean_object* v_key_669_; lean_object* v_value_670_; lean_object* v_tail_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_694_; 
v_key_669_ = lean_ctor_get(v_x_668_, 0);
v_value_670_ = lean_ctor_get(v_x_668_, 1);
v_tail_671_ = lean_ctor_get(v_x_668_, 2);
v_isSharedCheck_694_ = !lean_is_exclusive(v_x_668_);
if (v_isSharedCheck_694_ == 0)
{
v___x_673_ = v_x_668_;
v_isShared_674_ = v_isSharedCheck_694_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_tail_671_);
lean_inc(v_value_670_);
lean_inc(v_key_669_);
lean_dec(v_x_668_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_694_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; uint64_t v___x_676_; uint64_t v___x_677_; uint64_t v___x_678_; uint64_t v_fold_679_; uint64_t v___x_680_; uint64_t v___x_681_; uint64_t v___x_682_; size_t v___x_683_; size_t v___x_684_; size_t v___x_685_; size_t v___x_686_; size_t v___x_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_675_ = lean_array_get_size(v_x_667_);
v___x_676_ = l_Lean_IR_instHashableVarId_hash(v_key_669_);
v___x_677_ = 32ULL;
v___x_678_ = lean_uint64_shift_right(v___x_676_, v___x_677_);
v_fold_679_ = lean_uint64_xor(v___x_676_, v___x_678_);
v___x_680_ = 16ULL;
v___x_681_ = lean_uint64_shift_right(v_fold_679_, v___x_680_);
v___x_682_ = lean_uint64_xor(v_fold_679_, v___x_681_);
v___x_683_ = lean_uint64_to_usize(v___x_682_);
v___x_684_ = lean_usize_of_nat(v___x_675_);
v___x_685_ = ((size_t)1ULL);
v___x_686_ = lean_usize_sub(v___x_684_, v___x_685_);
v___x_687_ = lean_usize_land(v___x_683_, v___x_686_);
v___x_688_ = lean_array_uget_borrowed(v_x_667_, v___x_687_);
lean_inc(v___x_688_);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 2, v___x_688_);
v___x_690_ = v___x_673_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_key_669_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_value_670_);
lean_ctor_set(v_reuseFailAlloc_693_, 2, v___x_688_);
v___x_690_ = v_reuseFailAlloc_693_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; 
v___x_691_ = lean_array_uset(v_x_667_, v___x_687_, v___x_690_);
v_x_667_ = v___x_691_;
v_x_668_ = v_tail_671_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2___redArg(lean_object* v_i_695_, lean_object* v_source_696_, lean_object* v_target_697_){
_start:
{
lean_object* v___x_698_; uint8_t v___x_699_; 
v___x_698_ = lean_array_get_size(v_source_696_);
v___x_699_ = lean_nat_dec_lt(v_i_695_, v___x_698_);
if (v___x_699_ == 0)
{
lean_dec_ref(v_source_696_);
lean_dec(v_i_695_);
return v_target_697_;
}
else
{
lean_object* v_es_700_; lean_object* v___x_701_; lean_object* v_source_702_; lean_object* v_target_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v_es_700_ = lean_array_fget(v_source_696_, v_i_695_);
v___x_701_ = lean_box(0);
v_source_702_ = lean_array_fset(v_source_696_, v_i_695_, v___x_701_);
v_target_703_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2_spec__4___redArg(v_target_697_, v_es_700_);
v___x_704_ = lean_unsigned_to_nat(1u);
v___x_705_ = lean_nat_add(v_i_695_, v___x_704_);
lean_dec(v_i_695_);
v_i_695_ = v___x_705_;
v_source_696_ = v_source_702_;
v_target_697_ = v_target_703_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1___redArg(lean_object* v_data_707_){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v_nbuckets_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_708_ = lean_array_get_size(v_data_707_);
v___x_709_ = lean_unsigned_to_nat(2u);
v_nbuckets_710_ = lean_nat_mul(v___x_708_, v___x_709_);
v___x_711_ = lean_unsigned_to_nat(0u);
v___x_712_ = lean_box(0);
v___x_713_ = lean_mk_array(v_nbuckets_710_, v___x_712_);
v___x_714_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2___redArg(v___x_711_, v_data_707_, v___x_713_);
return v___x_714_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg(lean_object* v_a_715_, lean_object* v_x_716_){
_start:
{
if (lean_obj_tag(v_x_716_) == 0)
{
uint8_t v___x_717_; 
v___x_717_ = 0;
return v___x_717_;
}
else
{
lean_object* v_key_718_; lean_object* v_tail_719_; uint8_t v___x_720_; 
v_key_718_ = lean_ctor_get(v_x_716_, 0);
v_tail_719_ = lean_ctor_get(v_x_716_, 2);
v___x_720_ = l_Lean_IR_instBEqVarId_beq(v_key_718_, v_a_715_);
if (v___x_720_ == 0)
{
v_x_716_ = v_tail_719_;
goto _start;
}
else
{
return v___x_720_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg___boxed(lean_object* v_a_722_, lean_object* v_x_723_){
_start:
{
uint8_t v_res_724_; lean_object* v_r_725_; 
v_res_724_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg(v_a_722_, v_x_723_);
lean_dec(v_x_723_);
lean_dec(v_a_722_);
v_r_725_ = lean_box(v_res_724_);
return v_r_725_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0___redArg(lean_object* v_m_726_, lean_object* v_a_727_, lean_object* v_b_728_){
_start:
{
lean_object* v_size_729_; lean_object* v_buckets_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_773_; 
v_size_729_ = lean_ctor_get(v_m_726_, 0);
v_buckets_730_ = lean_ctor_get(v_m_726_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v_m_726_);
if (v_isSharedCheck_773_ == 0)
{
v___x_732_ = v_m_726_;
v_isShared_733_ = v_isSharedCheck_773_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_buckets_730_);
lean_inc(v_size_729_);
lean_dec(v_m_726_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_773_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_734_; uint64_t v___x_735_; uint64_t v___x_736_; uint64_t v___x_737_; uint64_t v_fold_738_; uint64_t v___x_739_; uint64_t v___x_740_; uint64_t v___x_741_; size_t v___x_742_; size_t v___x_743_; size_t v___x_744_; size_t v___x_745_; size_t v___x_746_; lean_object* v_bkt_747_; uint8_t v___x_748_; 
v___x_734_ = lean_array_get_size(v_buckets_730_);
v___x_735_ = l_Lean_IR_instHashableVarId_hash(v_a_727_);
v___x_736_ = 32ULL;
v___x_737_ = lean_uint64_shift_right(v___x_735_, v___x_736_);
v_fold_738_ = lean_uint64_xor(v___x_735_, v___x_737_);
v___x_739_ = 16ULL;
v___x_740_ = lean_uint64_shift_right(v_fold_738_, v___x_739_);
v___x_741_ = lean_uint64_xor(v_fold_738_, v___x_740_);
v___x_742_ = lean_uint64_to_usize(v___x_741_);
v___x_743_ = lean_usize_of_nat(v___x_734_);
v___x_744_ = ((size_t)1ULL);
v___x_745_ = lean_usize_sub(v___x_743_, v___x_744_);
v___x_746_ = lean_usize_land(v___x_742_, v___x_745_);
v_bkt_747_ = lean_array_uget_borrowed(v_buckets_730_, v___x_746_);
v___x_748_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg(v_a_727_, v_bkt_747_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; lean_object* v_size_x27_750_; lean_object* v___x_751_; lean_object* v_buckets_x27_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; uint8_t v___x_758_; 
v___x_749_ = lean_unsigned_to_nat(1u);
v_size_x27_750_ = lean_nat_add(v_size_729_, v___x_749_);
lean_dec(v_size_729_);
lean_inc(v_bkt_747_);
v___x_751_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_751_, 0, v_a_727_);
lean_ctor_set(v___x_751_, 1, v_b_728_);
lean_ctor_set(v___x_751_, 2, v_bkt_747_);
v_buckets_x27_752_ = lean_array_uset(v_buckets_730_, v___x_746_, v___x_751_);
v___x_753_ = lean_unsigned_to_nat(4u);
v___x_754_ = lean_nat_mul(v_size_x27_750_, v___x_753_);
v___x_755_ = lean_unsigned_to_nat(3u);
v___x_756_ = lean_nat_div(v___x_754_, v___x_755_);
lean_dec(v___x_754_);
v___x_757_ = lean_array_get_size(v_buckets_x27_752_);
v___x_758_ = lean_nat_dec_le(v___x_756_, v___x_757_);
lean_dec(v___x_756_);
if (v___x_758_ == 0)
{
lean_object* v_val_759_; lean_object* v___x_761_; 
v_val_759_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1___redArg(v_buckets_x27_752_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 1, v_val_759_);
lean_ctor_set(v___x_732_, 0, v_size_x27_750_);
v___x_761_ = v___x_732_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_size_x27_750_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v_val_759_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
else
{
lean_object* v___x_764_; 
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 1, v_buckets_x27_752_);
lean_ctor_set(v___x_732_, 0, v_size_x27_750_);
v___x_764_ = v___x_732_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_size_x27_750_);
lean_ctor_set(v_reuseFailAlloc_765_, 1, v_buckets_x27_752_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
else
{
lean_object* v___x_766_; lean_object* v_buckets_x27_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_771_; 
lean_inc(v_bkt_747_);
v___x_766_ = lean_box(0);
v_buckets_x27_767_ = lean_array_uset(v_buckets_730_, v___x_746_, v___x_766_);
v___x_768_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2___redArg(v_a_727_, v_b_728_, v_bkt_747_);
v___x_769_ = lean_array_uset(v_buckets_x27_767_, v___x_746_, v___x_768_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 1, v___x_769_);
v___x_771_ = v___x_732_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_size_729_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v___x_769_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1(lean_object* v_as_774_, size_t v_i_775_, size_t v_stop_776_, lean_object* v_b_777_){
_start:
{
uint8_t v___x_778_; 
v___x_778_ = lean_usize_dec_eq(v_i_775_, v_stop_776_);
if (v___x_778_ == 0)
{
lean_object* v_fst_779_; lean_object* v_snd_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_794_; 
v_fst_779_ = lean_ctor_get(v_b_777_, 0);
v_snd_780_ = lean_ctor_get(v_b_777_, 1);
v_isSharedCheck_794_ = !lean_is_exclusive(v_b_777_);
if (v_isSharedCheck_794_ == 0)
{
v___x_782_ = v_b_777_;
v_isShared_783_ = v_isSharedCheck_794_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_snd_780_);
lean_inc(v_fst_779_);
lean_dec(v_b_777_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_794_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_784_; lean_object* v_x_785_; lean_object* v_ty_786_; lean_object* v___x_787_; lean_object* v___x_789_; 
v___x_784_ = lean_array_uget_borrowed(v_as_774_, v_i_775_);
v_x_785_ = lean_ctor_get(v___x_784_, 0);
v_ty_786_ = lean_ctor_get(v___x_784_, 1);
lean_inc(v_ty_786_);
lean_inc(v_x_785_);
v___x_787_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0___redArg(v_fst_779_, v_x_785_, v_ty_786_);
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 0, v___x_787_);
v___x_789_ = v___x_782_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_787_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v_snd_780_);
v___x_789_ = v_reuseFailAlloc_793_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
size_t v___x_790_; size_t v___x_791_; 
v___x_790_ = ((size_t)1ULL);
v___x_791_ = lean_usize_add(v_i_775_, v___x_790_);
v_i_775_ = v___x_791_;
v_b_777_ = v___x_789_;
goto _start;
}
}
}
else
{
return v_b_777_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1___boxed(lean_object* v_as_795_, lean_object* v_i_796_, lean_object* v_stop_797_, lean_object* v_b_798_){
_start:
{
size_t v_i_boxed_799_; size_t v_stop_boxed_800_; lean_object* v_res_801_; 
v_i_boxed_799_ = lean_unbox_usize(v_i_796_);
lean_dec(v_i_796_);
v_stop_boxed_800_ = lean_unbox_usize(v_stop_797_);
lean_dec(v_stop_797_);
v_res_801_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1(v_as_795_, v_i_boxed_799_, v_stop_boxed_800_, v_b_798_);
lean_dec_ref(v_as_795_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectParams(lean_object* v_ps_802_, lean_object* v_s_803_){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_804_ = lean_unsigned_to_nat(0u);
v___x_805_ = lean_array_get_size(v_ps_802_);
v___x_806_ = lean_nat_dec_lt(v___x_804_, v___x_805_);
if (v___x_806_ == 0)
{
return v_s_803_;
}
else
{
uint8_t v___x_807_; 
v___x_807_ = lean_nat_dec_le(v___x_805_, v___x_805_);
if (v___x_807_ == 0)
{
if (v___x_806_ == 0)
{
return v_s_803_;
}
else
{
size_t v___x_808_; size_t v___x_809_; lean_object* v___x_810_; 
v___x_808_ = ((size_t)0ULL);
v___x_809_ = lean_usize_of_nat(v___x_805_);
v___x_810_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1(v_ps_802_, v___x_808_, v___x_809_, v_s_803_);
return v___x_810_;
}
}
else
{
size_t v___x_811_; size_t v___x_812_; lean_object* v___x_813_; 
v___x_811_ = ((size_t)0ULL);
v___x_812_ = lean_usize_of_nat(v___x_805_);
v___x_813_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1(v_ps_802_, v___x_811_, v___x_812_, v_s_803_);
return v___x_813_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectParams___boxed(lean_object* v_ps_814_, lean_object* v_s_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lean_IR_CollectMaps_collectParams(v_ps_814_, v_s_815_);
lean_dec_ref(v_ps_814_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0(lean_object* v_00_u03b2_817_, lean_object* v_m_818_, lean_object* v_a_819_, lean_object* v_b_820_){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0___redArg(v_m_818_, v_a_819_, v_b_820_);
return v___x_821_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0(lean_object* v_00_u03b2_822_, lean_object* v_a_823_, lean_object* v_x_824_){
_start:
{
uint8_t v___x_825_; 
v___x_825_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg(v_a_823_, v_x_824_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___boxed(lean_object* v_00_u03b2_826_, lean_object* v_a_827_, lean_object* v_x_828_){
_start:
{
uint8_t v_res_829_; lean_object* v_r_830_; 
v_res_829_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0(v_00_u03b2_826_, v_a_827_, v_x_828_);
lean_dec(v_x_828_);
lean_dec(v_a_827_);
v_r_830_ = lean_box(v_res_829_);
return v_r_830_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1(lean_object* v_00_u03b2_831_, lean_object* v_data_832_){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1___redArg(v_data_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2(lean_object* v_00_u03b2_834_, lean_object* v_a_835_, lean_object* v_b_836_, lean_object* v_x_837_){
_start:
{
lean_object* v___x_838_; 
v___x_838_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2___redArg(v_a_835_, v_b_836_, v_x_837_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_839_, lean_object* v_i_840_, lean_object* v_source_841_, lean_object* v_target_842_){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2___redArg(v_i_840_, v_source_841_, v_target_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_844_, lean_object* v_x_845_, lean_object* v_x_846_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2_spec__4___redArg(v_x_845_, v_x_846_);
return v___x_847_;
}
}
static lean_object* _init_l_Lean_IR_CollectMaps_collectJP___closed__0(void){
_start:
{
lean_object* v___x_848_; 
v___x_848_ = lean_alloc_closure((void*)(l_Lean_IR_instBEqJoinPointId_beq___boxed), 2, 0);
return v___x_848_;
}
}
static lean_object* _init_l_Lean_IR_CollectMaps_collectJP___closed__1(void){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = lean_alloc_closure((void*)(l_Lean_IR_instHashableJoinPointId_hash___boxed), 1, 0);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectJP(lean_object* v_j_850_, lean_object* v_xs_851_, lean_object* v_x_852_){
_start:
{
lean_object* v_fst_853_; lean_object* v_snd_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_864_; 
v_fst_853_ = lean_ctor_get(v_x_852_, 0);
v_snd_854_ = lean_ctor_get(v_x_852_, 1);
v_isSharedCheck_864_ = !lean_is_exclusive(v_x_852_);
if (v_isSharedCheck_864_ == 0)
{
v___x_856_ = v_x_852_;
v_isShared_857_ = v_isSharedCheck_864_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_snd_854_);
lean_inc(v_fst_853_);
lean_dec(v_x_852_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_864_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_862_; 
v___x_858_ = lean_obj_once(&l_Lean_IR_CollectMaps_collectJP___closed__0, &l_Lean_IR_CollectMaps_collectJP___closed__0_once, _init_l_Lean_IR_CollectMaps_collectJP___closed__0);
v___x_859_ = lean_obj_once(&l_Lean_IR_CollectMaps_collectJP___closed__1, &l_Lean_IR_CollectMaps_collectJP___closed__1_once, _init_l_Lean_IR_CollectMaps_collectJP___closed__1);
v___x_860_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_858_, v___x_859_, v_snd_854_, v_j_850_, v_xs_851_);
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 1, v___x_860_);
v___x_862_ = v___x_856_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_fst_853_);
lean_ctor_set(v_reuseFailAlloc_863_, 1, v___x_860_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2___redArg(lean_object* v_a_865_, lean_object* v_b_866_, lean_object* v_x_867_){
_start:
{
if (lean_obj_tag(v_x_867_) == 0)
{
lean_dec(v_b_866_);
lean_dec(v_a_865_);
return v_x_867_;
}
else
{
lean_object* v_key_868_; lean_object* v_value_869_; lean_object* v_tail_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_882_; 
v_key_868_ = lean_ctor_get(v_x_867_, 0);
v_value_869_ = lean_ctor_get(v_x_867_, 1);
v_tail_870_ = lean_ctor_get(v_x_867_, 2);
v_isSharedCheck_882_ = !lean_is_exclusive(v_x_867_);
if (v_isSharedCheck_882_ == 0)
{
v___x_872_ = v_x_867_;
v_isShared_873_ = v_isSharedCheck_882_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_tail_870_);
lean_inc(v_value_869_);
lean_inc(v_key_868_);
lean_dec(v_x_867_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_882_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
uint8_t v___x_874_; 
v___x_874_ = l_Lean_IR_instBEqJoinPointId_beq(v_key_868_, v_a_865_);
if (v___x_874_ == 0)
{
lean_object* v___x_875_; lean_object* v___x_877_; 
v___x_875_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2___redArg(v_a_865_, v_b_866_, v_tail_870_);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 2, v___x_875_);
v___x_877_ = v___x_872_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_key_868_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v_value_869_);
lean_ctor_set(v_reuseFailAlloc_878_, 2, v___x_875_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
else
{
lean_object* v___x_880_; 
lean_dec(v_value_869_);
lean_dec(v_key_868_);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 1, v_b_866_);
lean_ctor_set(v___x_872_, 0, v_a_865_);
v___x_880_ = v___x_872_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_a_865_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_b_866_);
lean_ctor_set(v_reuseFailAlloc_881_, 2, v_tail_870_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg(lean_object* v_a_883_, lean_object* v_x_884_){
_start:
{
if (lean_obj_tag(v_x_884_) == 0)
{
uint8_t v___x_885_; 
v___x_885_ = 0;
return v___x_885_;
}
else
{
lean_object* v_key_886_; lean_object* v_tail_887_; uint8_t v___x_888_; 
v_key_886_ = lean_ctor_get(v_x_884_, 0);
v_tail_887_ = lean_ctor_get(v_x_884_, 2);
v___x_888_ = l_Lean_IR_instBEqJoinPointId_beq(v_key_886_, v_a_883_);
if (v___x_888_ == 0)
{
v_x_884_ = v_tail_887_;
goto _start;
}
else
{
return v___x_888_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg___boxed(lean_object* v_a_890_, lean_object* v_x_891_){
_start:
{
uint8_t v_res_892_; lean_object* v_r_893_; 
v_res_892_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg(v_a_890_, v_x_891_);
lean_dec(v_x_891_);
lean_dec(v_a_890_);
v_r_893_ = lean_box(v_res_892_);
return v_r_893_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_894_, lean_object* v_x_895_){
_start:
{
if (lean_obj_tag(v_x_895_) == 0)
{
return v_x_894_;
}
else
{
lean_object* v_key_896_; lean_object* v_value_897_; lean_object* v_tail_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_921_; 
v_key_896_ = lean_ctor_get(v_x_895_, 0);
v_value_897_ = lean_ctor_get(v_x_895_, 1);
v_tail_898_ = lean_ctor_get(v_x_895_, 2);
v_isSharedCheck_921_ = !lean_is_exclusive(v_x_895_);
if (v_isSharedCheck_921_ == 0)
{
v___x_900_ = v_x_895_;
v_isShared_901_ = v_isSharedCheck_921_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_tail_898_);
lean_inc(v_value_897_);
lean_inc(v_key_896_);
lean_dec(v_x_895_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_921_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_902_; uint64_t v___x_903_; uint64_t v___x_904_; uint64_t v___x_905_; uint64_t v_fold_906_; uint64_t v___x_907_; uint64_t v___x_908_; uint64_t v___x_909_; size_t v___x_910_; size_t v___x_911_; size_t v___x_912_; size_t v___x_913_; size_t v___x_914_; lean_object* v___x_915_; lean_object* v___x_917_; 
v___x_902_ = lean_array_get_size(v_x_894_);
v___x_903_ = l_Lean_IR_instHashableJoinPointId_hash(v_key_896_);
v___x_904_ = 32ULL;
v___x_905_ = lean_uint64_shift_right(v___x_903_, v___x_904_);
v_fold_906_ = lean_uint64_xor(v___x_903_, v___x_905_);
v___x_907_ = 16ULL;
v___x_908_ = lean_uint64_shift_right(v_fold_906_, v___x_907_);
v___x_909_ = lean_uint64_xor(v_fold_906_, v___x_908_);
v___x_910_ = lean_uint64_to_usize(v___x_909_);
v___x_911_ = lean_usize_of_nat(v___x_902_);
v___x_912_ = ((size_t)1ULL);
v___x_913_ = lean_usize_sub(v___x_911_, v___x_912_);
v___x_914_ = lean_usize_land(v___x_910_, v___x_913_);
v___x_915_ = lean_array_uget_borrowed(v_x_894_, v___x_914_);
lean_inc(v___x_915_);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 2, v___x_915_);
v___x_917_ = v___x_900_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_key_896_);
lean_ctor_set(v_reuseFailAlloc_920_, 1, v_value_897_);
lean_ctor_set(v_reuseFailAlloc_920_, 2, v___x_915_);
v___x_917_ = v_reuseFailAlloc_920_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
lean_object* v___x_918_; 
v___x_918_ = lean_array_uset(v_x_894_, v___x_914_, v___x_917_);
v_x_894_ = v___x_918_;
v_x_895_ = v_tail_898_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2___redArg(lean_object* v_i_922_, lean_object* v_source_923_, lean_object* v_target_924_){
_start:
{
lean_object* v___x_925_; uint8_t v___x_926_; 
v___x_925_ = lean_array_get_size(v_source_923_);
v___x_926_ = lean_nat_dec_lt(v_i_922_, v___x_925_);
if (v___x_926_ == 0)
{
lean_dec_ref(v_source_923_);
lean_dec(v_i_922_);
return v_target_924_;
}
else
{
lean_object* v_es_927_; lean_object* v___x_928_; lean_object* v_source_929_; lean_object* v_target_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v_es_927_ = lean_array_fget(v_source_923_, v_i_922_);
v___x_928_ = lean_box(0);
v_source_929_ = lean_array_fset(v_source_923_, v_i_922_, v___x_928_);
v_target_930_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2_spec__4___redArg(v_target_924_, v_es_927_);
v___x_931_ = lean_unsigned_to_nat(1u);
v___x_932_ = lean_nat_add(v_i_922_, v___x_931_);
lean_dec(v_i_922_);
v_i_922_ = v___x_932_;
v_source_923_ = v_source_929_;
v_target_924_ = v_target_930_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1___redArg(lean_object* v_data_934_){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v_nbuckets_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_935_ = lean_array_get_size(v_data_934_);
v___x_936_ = lean_unsigned_to_nat(2u);
v_nbuckets_937_ = lean_nat_mul(v___x_935_, v___x_936_);
v___x_938_ = lean_unsigned_to_nat(0u);
v___x_939_ = lean_box(0);
v___x_940_ = lean_mk_array(v_nbuckets_937_, v___x_939_);
v___x_941_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2___redArg(v___x_938_, v_data_934_, v___x_940_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0___redArg(lean_object* v_m_942_, lean_object* v_a_943_, lean_object* v_b_944_){
_start:
{
lean_object* v_size_945_; lean_object* v_buckets_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_989_; 
v_size_945_ = lean_ctor_get(v_m_942_, 0);
v_buckets_946_ = lean_ctor_get(v_m_942_, 1);
v_isSharedCheck_989_ = !lean_is_exclusive(v_m_942_);
if (v_isSharedCheck_989_ == 0)
{
v___x_948_ = v_m_942_;
v_isShared_949_ = v_isSharedCheck_989_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_buckets_946_);
lean_inc(v_size_945_);
lean_dec(v_m_942_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_989_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_950_; uint64_t v___x_951_; uint64_t v___x_952_; uint64_t v___x_953_; uint64_t v_fold_954_; uint64_t v___x_955_; uint64_t v___x_956_; uint64_t v___x_957_; size_t v___x_958_; size_t v___x_959_; size_t v___x_960_; size_t v___x_961_; size_t v___x_962_; lean_object* v_bkt_963_; uint8_t v___x_964_; 
v___x_950_ = lean_array_get_size(v_buckets_946_);
v___x_951_ = l_Lean_IR_instHashableJoinPointId_hash(v_a_943_);
v___x_952_ = 32ULL;
v___x_953_ = lean_uint64_shift_right(v___x_951_, v___x_952_);
v_fold_954_ = lean_uint64_xor(v___x_951_, v___x_953_);
v___x_955_ = 16ULL;
v___x_956_ = lean_uint64_shift_right(v_fold_954_, v___x_955_);
v___x_957_ = lean_uint64_xor(v_fold_954_, v___x_956_);
v___x_958_ = lean_uint64_to_usize(v___x_957_);
v___x_959_ = lean_usize_of_nat(v___x_950_);
v___x_960_ = ((size_t)1ULL);
v___x_961_ = lean_usize_sub(v___x_959_, v___x_960_);
v___x_962_ = lean_usize_land(v___x_958_, v___x_961_);
v_bkt_963_ = lean_array_uget_borrowed(v_buckets_946_, v___x_962_);
v___x_964_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg(v_a_943_, v_bkt_963_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; lean_object* v_size_x27_966_; lean_object* v___x_967_; lean_object* v_buckets_x27_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; uint8_t v___x_974_; 
v___x_965_ = lean_unsigned_to_nat(1u);
v_size_x27_966_ = lean_nat_add(v_size_945_, v___x_965_);
lean_dec(v_size_945_);
lean_inc(v_bkt_963_);
v___x_967_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_967_, 0, v_a_943_);
lean_ctor_set(v___x_967_, 1, v_b_944_);
lean_ctor_set(v___x_967_, 2, v_bkt_963_);
v_buckets_x27_968_ = lean_array_uset(v_buckets_946_, v___x_962_, v___x_967_);
v___x_969_ = lean_unsigned_to_nat(4u);
v___x_970_ = lean_nat_mul(v_size_x27_966_, v___x_969_);
v___x_971_ = lean_unsigned_to_nat(3u);
v___x_972_ = lean_nat_div(v___x_970_, v___x_971_);
lean_dec(v___x_970_);
v___x_973_ = lean_array_get_size(v_buckets_x27_968_);
v___x_974_ = lean_nat_dec_le(v___x_972_, v___x_973_);
lean_dec(v___x_972_);
if (v___x_974_ == 0)
{
lean_object* v_val_975_; lean_object* v___x_977_; 
v_val_975_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1___redArg(v_buckets_x27_968_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 1, v_val_975_);
lean_ctor_set(v___x_948_, 0, v_size_x27_966_);
v___x_977_ = v___x_948_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_size_x27_966_);
lean_ctor_set(v_reuseFailAlloc_978_, 1, v_val_975_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
else
{
lean_object* v___x_980_; 
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 1, v_buckets_x27_968_);
lean_ctor_set(v___x_948_, 0, v_size_x27_966_);
v___x_980_ = v___x_948_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_size_x27_966_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v_buckets_x27_968_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
else
{
lean_object* v___x_982_; lean_object* v_buckets_x27_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_987_; 
lean_inc(v_bkt_963_);
v___x_982_ = lean_box(0);
v_buckets_x27_983_ = lean_array_uset(v_buckets_946_, v___x_962_, v___x_982_);
v___x_984_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2___redArg(v_a_943_, v_b_944_, v_bkt_963_);
v___x_985_ = lean_array_uset(v_buckets_x27_983_, v___x_962_, v___x_984_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 1, v___x_985_);
v___x_987_ = v___x_948_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_size_945_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v___x_985_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectFnBody(lean_object* v_x_990_, lean_object* v_a_991_){
_start:
{
switch(lean_obj_tag(v_x_990_))
{
case 0:
{
lean_object* v_x_992_; lean_object* v_ty_993_; lean_object* v_b_994_; lean_object* v___x_995_; lean_object* v_fst_996_; lean_object* v_snd_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1005_; 
v_x_992_ = lean_ctor_get(v_x_990_, 0);
lean_inc(v_x_992_);
v_ty_993_ = lean_ctor_get(v_x_990_, 1);
lean_inc(v_ty_993_);
v_b_994_ = lean_ctor_get(v_x_990_, 3);
lean_inc(v_b_994_);
lean_dec_ref(v_x_990_);
v___x_995_ = l_Lean_IR_CollectMaps_collectFnBody(v_b_994_, v_a_991_);
v_fst_996_ = lean_ctor_get(v___x_995_, 0);
v_snd_997_ = lean_ctor_get(v___x_995_, 1);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_999_ = v___x_995_;
v_isShared_1000_ = v_isSharedCheck_1005_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_snd_997_);
lean_inc(v_fst_996_);
lean_dec(v___x_995_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1005_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1001_; lean_object* v___x_1003_; 
v___x_1001_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0___redArg(v_fst_996_, v_x_992_, v_ty_993_);
if (v_isShared_1000_ == 0)
{
lean_ctor_set(v___x_999_, 0, v___x_1001_);
v___x_1003_ = v___x_999_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_1001_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v_snd_997_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
case 1:
{
lean_object* v_j_1006_; lean_object* v_xs_1007_; lean_object* v_v_1008_; lean_object* v_b_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v_fst_1013_; lean_object* v_snd_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1022_; 
v_j_1006_ = lean_ctor_get(v_x_990_, 0);
lean_inc(v_j_1006_);
v_xs_1007_ = lean_ctor_get(v_x_990_, 1);
lean_inc_ref(v_xs_1007_);
v_v_1008_ = lean_ctor_get(v_x_990_, 2);
lean_inc(v_v_1008_);
v_b_1009_ = lean_ctor_get(v_x_990_, 3);
lean_inc(v_b_1009_);
lean_dec_ref(v_x_990_);
v___x_1010_ = l_Lean_IR_CollectMaps_collectFnBody(v_b_1009_, v_a_991_);
v___x_1011_ = l_Lean_IR_CollectMaps_collectFnBody(v_v_1008_, v___x_1010_);
v___x_1012_ = l_Lean_IR_CollectMaps_collectParams(v_xs_1007_, v___x_1011_);
v_fst_1013_ = lean_ctor_get(v___x_1012_, 0);
v_snd_1014_ = lean_ctor_get(v___x_1012_, 1);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1016_ = v___x_1012_;
v_isShared_1017_ = v_isSharedCheck_1022_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_snd_1014_);
lean_inc(v_fst_1013_);
lean_dec(v___x_1012_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1022_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1018_; lean_object* v___x_1020_; 
v___x_1018_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0___redArg(v_snd_1014_, v_j_1006_, v_xs_1007_);
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 1, v___x_1018_);
v___x_1020_ = v___x_1016_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_fst_1013_);
lean_ctor_set(v_reuseFailAlloc_1021_, 1, v___x_1018_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
case 9:
{
lean_object* v_cs_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; uint8_t v___x_1026_; 
v_cs_1023_ = lean_ctor_get(v_x_990_, 3);
lean_inc_ref(v_cs_1023_);
lean_dec_ref(v_x_990_);
v___x_1024_ = lean_unsigned_to_nat(0u);
v___x_1025_ = lean_array_get_size(v_cs_1023_);
v___x_1026_ = lean_nat_dec_lt(v___x_1024_, v___x_1025_);
if (v___x_1026_ == 0)
{
lean_dec_ref(v_cs_1023_);
return v_a_991_;
}
else
{
uint8_t v___x_1027_; 
v___x_1027_ = lean_nat_dec_le(v___x_1025_, v___x_1025_);
if (v___x_1027_ == 0)
{
if (v___x_1026_ == 0)
{
lean_dec_ref(v_cs_1023_);
return v_a_991_;
}
else
{
size_t v___x_1028_; size_t v___x_1029_; lean_object* v___x_1030_; 
v___x_1028_ = ((size_t)0ULL);
v___x_1029_ = lean_usize_of_nat(v___x_1025_);
v___x_1030_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1(v_cs_1023_, v___x_1028_, v___x_1029_, v_a_991_);
lean_dec_ref(v_cs_1023_);
return v___x_1030_;
}
}
else
{
size_t v___x_1031_; size_t v___x_1032_; lean_object* v___x_1033_; 
v___x_1031_ = ((size_t)0ULL);
v___x_1032_ = lean_usize_of_nat(v___x_1025_);
v___x_1033_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1(v_cs_1023_, v___x_1031_, v___x_1032_, v_a_991_);
lean_dec_ref(v_cs_1023_);
return v___x_1033_;
}
}
}
default: 
{
uint8_t v___x_1034_; 
v___x_1034_ = l_Lean_IR_FnBody_isTerminal(v_x_990_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; 
v___x_1035_ = l_Lean_IR_FnBody_body(v_x_990_);
lean_dec(v_x_990_);
v_x_990_ = v___x_1035_;
goto _start;
}
else
{
lean_dec(v_x_990_);
return v_a_991_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1(lean_object* v_as_1037_, size_t v_i_1038_, size_t v_stop_1039_, lean_object* v_b_1040_){
_start:
{
uint8_t v___x_1041_; 
v___x_1041_ = lean_usize_dec_eq(v_i_1038_, v_stop_1039_);
if (v___x_1041_ == 0)
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; size_t v___x_1045_; size_t v___x_1046_; 
v___x_1042_ = lean_array_uget_borrowed(v_as_1037_, v_i_1038_);
v___x_1043_ = l_Lean_IR_Alt_body(v___x_1042_);
v___x_1044_ = l_Lean_IR_CollectMaps_collectFnBody(v___x_1043_, v_b_1040_);
v___x_1045_ = ((size_t)1ULL);
v___x_1046_ = lean_usize_add(v_i_1038_, v___x_1045_);
v_i_1038_ = v___x_1046_;
v_b_1040_ = v___x_1044_;
goto _start;
}
else
{
return v_b_1040_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1___boxed(lean_object* v_as_1048_, lean_object* v_i_1049_, lean_object* v_stop_1050_, lean_object* v_b_1051_){
_start:
{
size_t v_i_boxed_1052_; size_t v_stop_boxed_1053_; lean_object* v_res_1054_; 
v_i_boxed_1052_ = lean_unbox_usize(v_i_1049_);
lean_dec(v_i_1049_);
v_stop_boxed_1053_ = lean_unbox_usize(v_stop_1050_);
lean_dec(v_stop_1050_);
v_res_1054_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1(v_as_1048_, v_i_boxed_1052_, v_stop_boxed_1053_, v_b_1051_);
lean_dec_ref(v_as_1048_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0(lean_object* v_00_u03b2_1055_, lean_object* v_m_1056_, lean_object* v_a_1057_, lean_object* v_b_1058_){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0___redArg(v_m_1056_, v_a_1057_, v_b_1058_);
return v___x_1059_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0(lean_object* v_00_u03b2_1060_, lean_object* v_a_1061_, lean_object* v_x_1062_){
_start:
{
uint8_t v___x_1063_; 
v___x_1063_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg(v_a_1061_, v_x_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1064_, lean_object* v_a_1065_, lean_object* v_x_1066_){
_start:
{
uint8_t v_res_1067_; lean_object* v_r_1068_; 
v_res_1067_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0(v_00_u03b2_1064_, v_a_1065_, v_x_1066_);
lean_dec(v_x_1066_);
lean_dec(v_a_1065_);
v_r_1068_ = lean_box(v_res_1067_);
return v_r_1068_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1(lean_object* v_00_u03b2_1069_, lean_object* v_data_1070_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1___redArg(v_data_1070_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2(lean_object* v_00_u03b2_1072_, lean_object* v_a_1073_, lean_object* v_b_1074_, lean_object* v_x_1075_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2___redArg(v_a_1073_, v_b_1074_, v_x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1077_, lean_object* v_i_1078_, lean_object* v_source_1079_, lean_object* v_target_1080_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2___redArg(v_i_1078_, v_source_1079_, v_target_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1082_, lean_object* v_x_1083_, lean_object* v_x_1084_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2_spec__4___redArg(v_x_1083_, v_x_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectDecl(lean_object* v_x_1086_, lean_object* v_a_1087_){
_start:
{
if (lean_obj_tag(v_x_1086_) == 0)
{
lean_object* v_xs_1088_; lean_object* v_body_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v_xs_1088_ = lean_ctor_get(v_x_1086_, 1);
lean_inc_ref(v_xs_1088_);
v_body_1089_ = lean_ctor_get(v_x_1086_, 3);
lean_inc(v_body_1089_);
lean_dec_ref(v_x_1086_);
v___x_1090_ = l_Lean_IR_CollectMaps_collectFnBody(v_body_1089_, v_a_1087_);
v___x_1091_ = l_Lean_IR_CollectMaps_collectParams(v_xs_1088_, v___x_1090_);
lean_dec_ref(v_xs_1088_);
return v___x_1091_;
}
else
{
lean_dec_ref(v_x_1086_);
return v_a_1087_;
}
}
}
static lean_object* _init_l_Lean_IR_mkVarJPMaps___closed__0(void){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1092_ = lean_box(0);
v___x_1093_ = lean_unsigned_to_nat(16u);
v___x_1094_ = lean_mk_array(v___x_1093_, v___x_1092_);
return v___x_1094_;
}
}
static lean_object* _init_l_Lean_IR_mkVarJPMaps___closed__1(void){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1095_ = lean_obj_once(&l_Lean_IR_mkVarJPMaps___closed__0, &l_Lean_IR_mkVarJPMaps___closed__0_once, _init_l_Lean_IR_mkVarJPMaps___closed__0);
v___x_1096_ = lean_unsigned_to_nat(0u);
v___x_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
lean_ctor_set(v___x_1097_, 1, v___x_1095_);
return v___x_1097_;
}
}
static lean_object* _init_l_Lean_IR_mkVarJPMaps___closed__2(void){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = lean_obj_once(&l_Lean_IR_mkVarJPMaps___closed__1, &l_Lean_IR_mkVarJPMaps___closed__1_once, _init_l_Lean_IR_mkVarJPMaps___closed__1);
v___x_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1098_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_mkVarJPMaps(lean_object* v_d_1100_){
_start:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = lean_obj_once(&l_Lean_IR_mkVarJPMaps___closed__2, &l_Lean_IR_mkVarJPMaps___closed__2_once, _init_l_Lean_IR_mkVarJPMaps___closed__2);
v___x_1102_ = l_Lean_IR_CollectMaps_collectDecl(v_d_1100_, v___x_1101_);
return v___x_1102_;
}
}
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_IR_EmitUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_IR_EmitUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_EmitUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_EmitUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_IR_EmitUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_IR_EmitUtil(builtin);
}
#ifdef __cplusplus
}
#endif
