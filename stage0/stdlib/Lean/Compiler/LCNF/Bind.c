// Lean compiler output
// Module: Lean.Compiler.LCNF.Bind
// Imports: public import Lean.Compiler.LCNF.InferType
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedBorrowed(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferParamType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Compiler_LCNF_mkCasesResultType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_getArrowArity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__2(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkNewParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkNewParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isEtaExpandCandidateCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate___boxed(lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___redArg(uint8_t v_pu_1_, lean_object* v_inst_2_, lean_object* v_c_3_, lean_object* v_f_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_box(v_pu_1_);
v___x_6_ = lean_apply_3(v_inst_2_, v___x_5_, v_c_3_, v_f_4_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___redArg___boxed(lean_object* v_pu_7_, lean_object* v_inst_8_, lean_object* v_c_9_, lean_object* v_f_10_){
_start:
{
uint8_t v_pu_boxed_11_; lean_object* v_res_12_; 
v_pu_boxed_11_ = lean_unbox(v_pu_7_);
v_res_12_ = l_Lean_Compiler_LCNF_Code_bind___redArg(v_pu_boxed_11_, v_inst_8_, v_c_9_, v_f_10_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind(lean_object* v_m_13_, uint8_t v_pu_14_, lean_object* v_inst_15_, lean_object* v_c_16_, lean_object* v_f_17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_box(v_pu_14_);
v___x_19_ = lean_apply_3(v_inst_15_, v___x_18_, v_c_16_, v_f_17_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___boxed(lean_object* v_m_20_, lean_object* v_pu_21_, lean_object* v_inst_22_, lean_object* v_c_23_, lean_object* v_f_24_){
_start:
{
uint8_t v_pu_boxed_25_; lean_object* v_res_26_; 
v_pu_boxed_25_ = lean_unbox(v_pu_21_);
v_res_26_ = l_Lean_Compiler_LCNF_Code_bind(v_m_20_, v_pu_boxed_25_, v_inst_22_, v_c_23_, v_f_24_);
return v_res_26_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_27_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__0, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__0_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__0);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__1, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__1_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__1);
v___x_31_ = lean_unsigned_to_nat(0u);
v___x_32_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v___x_31_);
lean_ctor_set(v___x_32_, 2, v___x_31_);
lean_ctor_set(v___x_32_, 3, v___x_31_);
lean_ctor_set(v___x_32_, 4, v___x_30_);
lean_ctor_set(v___x_32_, 5, v___x_30_);
lean_ctor_set(v___x_32_, 6, v___x_30_);
lean_ctor_set(v___x_32_, 7, v___x_30_);
lean_ctor_set(v___x_32_, 8, v___x_30_);
lean_ctor_set(v___x_32_, 9, v___x_30_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg(lean_object* v_msg_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_){
_start:
{
lean_object* v_options_39_; lean_object* v_ref_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v_options_39_ = lean_ctor_get(v___y_36_, 2);
v_ref_40_ = lean_ctor_get(v___y_36_, 5);
v___x_41_ = lean_st_ref_get(v___y_37_);
v___x_42_ = lean_st_ref_get(v___y_37_);
lean_dec(v___x_42_);
v___x_43_ = lean_st_ref_get(v___y_35_);
v___x_44_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_34_);
if (lean_obj_tag(v___x_44_) == 0)
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_67_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_67_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_67_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_67_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v_env_49_; lean_object* v_lctx_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_65_; 
v_env_49_ = lean_ctor_get(v___x_41_, 0);
lean_inc_ref(v_env_49_);
lean_dec(v___x_41_);
v_lctx_50_ = lean_ctor_get(v___x_43_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_65_ == 0)
{
lean_object* v_unused_66_; 
v_unused_66_ = lean_ctor_get(v___x_43_, 1);
lean_dec(v_unused_66_);
v___x_52_ = v___x_43_;
v_isShared_53_ = v_isSharedCheck_65_;
goto v_resetjp_51_;
}
else
{
lean_inc(v_lctx_50_);
lean_dec(v___x_43_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_65_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
uint8_t v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_59_; 
v___x_54_ = lean_unbox(v_a_45_);
lean_dec(v_a_45_);
v___x_55_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_50_, v___x_54_);
lean_dec_ref(v_lctx_50_);
v___x_56_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__2, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__2_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___closed__2);
lean_inc_ref(v_options_39_);
v___x_57_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_57_, 0, v_env_49_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
lean_ctor_set(v___x_57_, 2, v___x_55_);
lean_ctor_set(v___x_57_, 3, v_options_39_);
if (v_isShared_53_ == 0)
{
lean_ctor_set_tag(v___x_52_, 3);
lean_ctor_set(v___x_52_, 1, v_msg_33_);
lean_ctor_set(v___x_52_, 0, v___x_57_);
v___x_59_ = v___x_52_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v___x_57_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v_msg_33_);
v___x_59_ = v_reuseFailAlloc_64_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
lean_object* v___x_60_; lean_object* v___x_62_; 
lean_inc(v_ref_40_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v_ref_40_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
if (v_isShared_48_ == 0)
{
lean_ctor_set_tag(v___x_47_, 1);
lean_ctor_set(v___x_47_, 0, v___x_60_);
v___x_62_ = v___x_47_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v___x_60_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
}
}
else
{
lean_object* v_a_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_75_; 
lean_dec(v___x_43_);
lean_dec(v___x_41_);
lean_dec_ref(v_msg_33_);
v_a_68_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_75_ == 0)
{
v___x_70_ = v___x_44_;
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_a_68_);
lean_dec(v___x_44_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_73_; 
if (v_isShared_71_ == 0)
{
v___x_73_ = v___x_70_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_a_68_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg___boxed(lean_object* v_msg_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg(v_msg_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1(lean_object* v_00_u03b1_83_, lean_object* v_msg_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg(v_msg_84_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___boxed(lean_object* v_00_u03b1_92_, lean_object* v_msg_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1(v_00_u03b1_92_, v_msg_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec(v___y_94_);
return v_res_100_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(lean_object* v_k_101_, lean_object* v_t_102_){
_start:
{
if (lean_obj_tag(v_t_102_) == 0)
{
lean_object* v_k_103_; lean_object* v_l_104_; lean_object* v_r_105_; uint8_t v___x_106_; 
v_k_103_ = lean_ctor_get(v_t_102_, 1);
v_l_104_ = lean_ctor_get(v_t_102_, 3);
v_r_105_ = lean_ctor_get(v_t_102_, 4);
v___x_106_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_101_, v_k_103_);
switch(v___x_106_)
{
case 0:
{
v_t_102_ = v_l_104_;
goto _start;
}
case 1:
{
uint8_t v___x_108_; 
v___x_108_ = 1;
return v___x_108_;
}
default: 
{
v_t_102_ = v_r_105_;
goto _start;
}
}
}
else
{
uint8_t v___x_110_; 
v___x_110_ = 0;
return v___x_110_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___boxed(lean_object* v_k_111_, lean_object* v_t_112_){
_start:
{
uint8_t v_res_113_; lean_object* v_r_114_; 
v_res_113_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(v_k_111_, v_t_112_);
lean_dec(v_t_112_);
lean_dec(v_k_111_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0(void){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lean_mk_string_unchecked("`Code.bind` failed, it contains a out of scope join point", 57, 57);
return v___x_115_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0, &l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0);
v___x_117_ = l_Lean_stringToMessageData(v___x_116_);
return v___x_117_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_mk_string_unchecked("`Code.bind` failed, empty `cases` found", 39, 39);
return v___x_118_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2, &l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2_once, _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2);
v___x_120_ = l_Lean_stringToMessageData(v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(uint8_t v_pu_121_, lean_object* v_f_122_, lean_object* v_c_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_){
_start:
{
switch(lean_obj_tag(v_c_123_))
{
case 0:
{
lean_object* v_decl_130_; lean_object* v_k_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_147_; 
v_decl_130_ = lean_ctor_get(v_c_123_, 0);
v_k_131_ = lean_ctor_get(v_c_123_, 1);
v_isSharedCheck_147_ = !lean_is_exclusive(v_c_123_);
if (v_isSharedCheck_147_ == 0)
{
v___x_133_ = v_c_123_;
v_isShared_134_ = v_isSharedCheck_147_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_k_131_);
lean_inc(v_decl_130_);
lean_dec(v_c_123_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_147_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_135_; 
v___x_135_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_121_, v_f_122_, v_k_131_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_135_) == 0)
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_146_; 
v_a_136_ = lean_ctor_get(v___x_135_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_146_ == 0)
{
v___x_138_ = v___x_135_;
v_isShared_139_ = v_isSharedCheck_146_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_135_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_146_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_134_ == 0)
{
lean_ctor_set(v___x_133_, 1, v_a_136_);
v___x_141_ = v___x_133_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_decl_130_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v_a_136_);
v___x_141_ = v_reuseFailAlloc_145_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
lean_object* v___x_143_; 
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 0, v___x_141_);
v___x_143_ = v___x_138_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_141_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
else
{
lean_del_object(v___x_133_);
lean_dec_ref(v_decl_130_);
return v___x_135_;
}
}
}
case 1:
{
lean_object* v_decl_148_; lean_object* v_k_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_165_; 
v_decl_148_ = lean_ctor_get(v_c_123_, 0);
v_k_149_ = lean_ctor_get(v_c_123_, 1);
v_isSharedCheck_165_ = !lean_is_exclusive(v_c_123_);
if (v_isSharedCheck_165_ == 0)
{
v___x_151_ = v_c_123_;
v_isShared_152_ = v_isSharedCheck_165_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_k_149_);
lean_inc(v_decl_148_);
lean_dec(v_c_123_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_165_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_153_; 
v___x_153_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_121_, v_f_122_, v_k_149_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_153_) == 0)
{
lean_object* v_a_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_164_; 
v_a_154_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_164_ == 0)
{
v___x_156_ = v___x_153_;
v_isShared_157_ = v_isSharedCheck_164_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_a_154_);
lean_dec(v___x_153_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_164_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 1, v_a_154_);
v___x_159_ = v___x_151_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_decl_148_);
lean_ctor_set(v_reuseFailAlloc_163_, 1, v_a_154_);
v___x_159_ = v_reuseFailAlloc_163_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
lean_object* v___x_161_; 
if (v_isShared_157_ == 0)
{
lean_ctor_set(v___x_156_, 0, v___x_159_);
v___x_161_ = v___x_156_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_159_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
else
{
lean_del_object(v___x_151_);
lean_dec_ref(v_decl_148_);
return v___x_153_;
}
}
}
case 2:
{
lean_object* v_decl_166_; lean_object* v_k_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_209_; 
v_decl_166_ = lean_ctor_get(v_c_123_, 0);
v_k_167_ = lean_ctor_get(v_c_123_, 1);
v_isSharedCheck_209_ = !lean_is_exclusive(v_c_123_);
if (v_isSharedCheck_209_ == 0)
{
v___x_169_ = v_c_123_;
v_isShared_170_ = v_isSharedCheck_209_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_k_167_);
lean_inc(v_decl_166_);
lean_dec(v_c_123_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_209_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v_params_171_; lean_object* v_value_172_; lean_object* v___x_173_; 
v_params_171_ = lean_ctor_get(v_decl_166_, 2);
lean_inc_ref(v_params_171_);
v_value_172_ = lean_ctor_get(v_decl_166_, 4);
lean_inc_ref(v_value_172_);
lean_inc_ref(v_f_122_);
v___x_173_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_121_, v_f_122_, v_value_172_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; lean_object* v___x_175_; 
v_a_174_ = lean_ctor_get(v___x_173_, 0);
lean_inc_n(v_a_174_, 2);
lean_dec_ref(v___x_173_);
lean_inc_ref(v_params_171_);
v___x_175_ = l_Lean_Compiler_LCNF_Code_inferParamType(v_pu_121_, v_params_171_, v_a_174_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v_a_176_; lean_object* v___x_177_; 
v_a_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_a_176_);
lean_dec_ref(v___x_175_);
v___x_177_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_121_, v_decl_166_, v_a_176_, v_params_171_, v_a_174_, v_a_126_, v_a_128_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v_a_178_; lean_object* v_fvarId_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_a_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_a_178_);
lean_dec_ref(v___x_177_);
v_fvarId_179_ = lean_ctor_get(v_a_178_, 0);
lean_inc(v_fvarId_179_);
lean_inc(v_a_124_);
v___x_180_ = l_Lean_FVarIdSet_insert(v_a_124_, v_fvarId_179_);
v___x_181_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_121_, v_f_122_, v_k_167_, v___x_180_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
lean_dec(v___x_180_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_192_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_192_ == 0)
{
v___x_184_ = v___x_181_;
v_isShared_185_ = v_isSharedCheck_192_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_dec(v___x_181_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_192_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_187_; 
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 1, v_a_182_);
lean_ctor_set(v___x_169_, 0, v_a_178_);
v___x_187_ = v___x_169_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_a_178_);
lean_ctor_set(v_reuseFailAlloc_191_, 1, v_a_182_);
v___x_187_ = v_reuseFailAlloc_191_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_189_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_187_);
v___x_189_ = v___x_184_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_187_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
else
{
lean_dec(v_a_178_);
lean_del_object(v___x_169_);
return v___x_181_;
}
}
else
{
lean_object* v_a_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_200_; 
lean_del_object(v___x_169_);
lean_dec_ref(v_k_167_);
lean_dec_ref(v_f_122_);
v_a_193_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_200_ == 0)
{
v___x_195_ = v___x_177_;
v_isShared_196_ = v_isSharedCheck_200_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_a_193_);
lean_dec(v___x_177_);
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
else
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_208_; 
lean_dec(v_a_174_);
lean_dec_ref(v_params_171_);
lean_del_object(v___x_169_);
lean_dec_ref(v_k_167_);
lean_dec_ref(v_decl_166_);
lean_dec_ref(v_f_122_);
v_a_201_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_208_ == 0)
{
v___x_203_ = v___x_175_;
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_175_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_206_; 
if (v_isShared_204_ == 0)
{
v___x_206_ = v___x_203_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_a_201_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
else
{
lean_dec_ref(v_params_171_);
lean_del_object(v___x_169_);
lean_dec_ref(v_k_167_);
lean_dec_ref(v_decl_166_);
lean_dec_ref(v_f_122_);
return v___x_173_;
}
}
}
case 3:
{
lean_object* v_fvarId_210_; uint8_t v___x_211_; 
lean_dec_ref(v_f_122_);
v_fvarId_210_ = lean_ctor_get(v_c_123_, 0);
v___x_211_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(v_fvarId_210_, v_a_124_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1, &l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1);
v___x_213_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg(v___x_212_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_220_ == 0)
{
lean_object* v_unused_221_; 
v_unused_221_ = lean_ctor_get(v___x_213_, 0);
lean_dec(v_unused_221_);
v___x_215_ = v___x_213_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_dec(v___x_213_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 0, v_c_123_);
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_c_123_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
else
{
lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_229_; 
lean_dec_ref(v_c_123_);
v_a_222_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_229_ == 0)
{
v___x_224_ = v___x_213_;
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_dec(v___x_213_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_227_; 
if (v_isShared_225_ == 0)
{
v___x_227_ = v___x_224_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_a_222_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
}
else
{
lean_object* v___x_230_; 
v___x_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_230_, 0, v_c_123_);
return v___x_230_;
}
}
case 4:
{
lean_object* v_cases_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_296_; 
v_cases_231_ = lean_ctor_get(v_c_123_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v_c_123_);
if (v_isSharedCheck_296_ == 0)
{
v___x_233_ = v_c_123_;
v_isShared_234_ = v_isSharedCheck_296_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_cases_231_);
lean_dec(v_c_123_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_296_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v_typeName_235_; lean_object* v_discr_236_; lean_object* v_alts_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_294_; 
v_typeName_235_ = lean_ctor_get(v_cases_231_, 0);
v_discr_236_ = lean_ctor_get(v_cases_231_, 2);
v_alts_237_ = lean_ctor_get(v_cases_231_, 3);
v_isSharedCheck_294_ = !lean_is_exclusive(v_cases_231_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; 
v_unused_295_ = lean_ctor_get(v_cases_231_, 1);
lean_dec(v_unused_295_);
v___x_239_ = v_cases_231_;
v_isShared_240_ = v_isSharedCheck_294_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_alts_237_);
lean_inc(v_discr_236_);
lean_inc(v_typeName_235_);
lean_dec(v_cases_231_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_294_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
size_t v_sz_241_; size_t v___x_242_; lean_object* v___x_243_; 
v_sz_241_ = lean_array_size(v_alts_237_);
v___x_242_ = ((size_t)0ULL);
v___x_243_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__2(v_pu_121_, v_f_122_, v_sz_241_, v___x_242_, v_alts_237_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v___y_246_; lean_object* v___y_247_; lean_object* v___y_248_; lean_object* v___y_249_; lean_object* v___x_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
lean_inc(v_a_244_);
lean_dec_ref(v___x_243_);
v___x_273_ = lean_array_get_size(v_a_244_);
v___x_274_ = lean_unsigned_to_nat(0u);
v___x_275_ = lean_nat_dec_eq(v___x_273_, v___x_274_);
if (v___x_275_ == 0)
{
v___y_246_ = v_a_125_;
v___y_247_ = v_a_126_;
v___y_248_ = v_a_127_;
v___y_249_ = v_a_128_;
goto v___jp_245_;
}
else
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3, &l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3);
v___x_277_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___redArg(v___x_276_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_dec_ref(v___x_277_);
v___y_246_ = v_a_125_;
v___y_247_ = v_a_126_;
v___y_248_ = v_a_127_;
v___y_249_ = v_a_128_;
goto v___jp_245_;
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_285_; 
lean_dec(v_a_244_);
lean_del_object(v___x_239_);
lean_dec(v_discr_236_);
lean_dec(v_typeName_235_);
lean_del_object(v___x_233_);
v_a_278_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_285_ == 0)
{
v___x_280_ = v___x_277_;
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_277_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_278_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
v___jp_245_:
{
lean_object* v___x_250_; 
lean_inc(v_a_244_);
v___x_250_ = l_Lean_Compiler_LCNF_mkCasesResultType(v_pu_121_, v_a_244_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v_a_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_264_; 
v_a_251_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_264_ == 0)
{
v___x_253_ = v___x_250_;
v_isShared_254_ = v_isSharedCheck_264_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_a_251_);
lean_dec(v___x_250_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_264_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_256_; 
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 3, v_a_244_);
lean_ctor_set(v___x_239_, 1, v_a_251_);
v___x_256_ = v___x_239_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_typeName_235_);
lean_ctor_set(v_reuseFailAlloc_263_, 1, v_a_251_);
lean_ctor_set(v_reuseFailAlloc_263_, 2, v_discr_236_);
lean_ctor_set(v_reuseFailAlloc_263_, 3, v_a_244_);
v___x_256_ = v_reuseFailAlloc_263_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
lean_object* v___x_258_; 
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 0, v___x_256_);
v___x_258_ = v___x_233_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_256_);
v___x_258_ = v_reuseFailAlloc_262_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
lean_object* v___x_260_; 
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 0, v___x_258_);
v___x_260_ = v___x_253_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v___x_258_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
}
else
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_272_; 
lean_dec(v_a_244_);
lean_del_object(v___x_239_);
lean_dec(v_discr_236_);
lean_dec(v_typeName_235_);
lean_del_object(v___x_233_);
v_a_265_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_272_ == 0)
{
v___x_267_ = v___x_250_;
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_250_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_270_; 
if (v_isShared_268_ == 0)
{
v___x_270_ = v___x_267_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_a_265_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
}
else
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
lean_del_object(v___x_239_);
lean_dec(v_discr_236_);
lean_dec(v_typeName_235_);
lean_del_object(v___x_233_);
v_a_286_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_243_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_243_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_286_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
}
}
case 5:
{
lean_object* v_fvarId_297_; lean_object* v___x_298_; 
v_fvarId_297_ = lean_ctor_get(v_c_123_, 0);
lean_inc(v_fvarId_297_);
lean_dec_ref(v_c_123_);
lean_inc(v_a_128_);
lean_inc_ref(v_a_127_);
lean_inc(v_a_126_);
lean_inc_ref(v_a_125_);
v___x_298_ = lean_apply_6(v_f_122_, v_fvarId_297_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, lean_box(0));
return v___x_298_;
}
case 6:
{
lean_object* v_type_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_356_; 
v_type_299_ = lean_ctor_get(v_c_123_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v_c_123_);
if (v_isSharedCheck_356_ == 0)
{
v___x_301_ = v_c_123_;
v_isShared_302_ = v_isSharedCheck_356_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_type_299_);
lean_dec(v_c_123_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_356_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
uint8_t v___x_303_; lean_object* v___x_304_; 
v___x_303_ = 0;
v___x_304_ = l_Lean_Compiler_LCNF_mkAuxParam(v_pu_121_, v_type_299_, v___x_303_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v_a_305_; lean_object* v_fvarId_306_; lean_object* v___x_307_; 
v_a_305_ = lean_ctor_get(v___x_304_, 0);
lean_inc(v_a_305_);
lean_dec_ref(v___x_304_);
v_fvarId_306_ = lean_ctor_get(v_a_305_, 0);
lean_inc(v_a_128_);
lean_inc_ref(v_a_127_);
lean_inc(v_a_126_);
lean_inc_ref(v_a_125_);
lean_inc(v_fvarId_306_);
v___x_307_ = lean_apply_6(v_f_122_, v_fvarId_306_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, lean_box(0));
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; lean_object* v___x_309_; 
v_a_308_ = lean_ctor_get(v___x_307_, 0);
lean_inc_n(v_a_308_, 2);
lean_dec_ref(v___x_307_);
v___x_309_ = l_Lean_Compiler_LCNF_Code_inferType(v_pu_121_, v_a_308_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_309_) == 0)
{
lean_object* v_a_310_; lean_object* v___x_311_; 
v_a_310_ = lean_ctor_get(v___x_309_, 0);
lean_inc(v_a_310_);
lean_dec_ref(v___x_309_);
v___x_311_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v_pu_121_, v_a_308_, v_a_126_, v_a_128_);
lean_dec(v_a_308_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v___x_312_; 
lean_dec_ref(v___x_311_);
v___x_312_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v_pu_121_, v_a_305_, v_a_126_, v_a_128_);
lean_dec(v_a_305_);
if (lean_obj_tag(v___x_312_) == 0)
{
lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_322_; 
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_322_ == 0)
{
lean_object* v_unused_323_; 
v_unused_323_ = lean_ctor_get(v___x_312_, 0);
lean_dec(v_unused_323_);
v___x_314_ = v___x_312_;
v_isShared_315_ = v_isSharedCheck_322_;
goto v_resetjp_313_;
}
else
{
lean_dec(v___x_312_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_322_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v_a_310_);
v___x_317_ = v___x_301_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_310_);
v___x_317_ = v_reuseFailAlloc_321_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_319_; 
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v___x_317_);
v___x_319_ = v___x_314_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
lean_dec(v_a_310_);
lean_del_object(v___x_301_);
v_a_324_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_312_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_312_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
else
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_339_; 
lean_dec(v_a_310_);
lean_dec(v_a_305_);
lean_del_object(v___x_301_);
v_a_332_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_339_ == 0)
{
v___x_334_ = v___x_311_;
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_311_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_337_; 
if (v_isShared_335_ == 0)
{
v___x_337_ = v___x_334_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_a_332_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
else
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_347_; 
lean_dec(v_a_308_);
lean_dec(v_a_305_);
lean_del_object(v___x_301_);
v_a_340_ = lean_ctor_get(v___x_309_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_347_ == 0)
{
v___x_342_ = v___x_309_;
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_309_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_a_340_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
else
{
lean_dec(v_a_305_);
lean_del_object(v___x_301_);
return v___x_307_;
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_del_object(v___x_301_);
lean_dec_ref(v_f_122_);
v_a_348_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_304_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_304_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_357_; lean_object* v_i_358_; lean_object* v_y_359_; lean_object* v_k_360_; lean_object* v___x_361_; 
v_fvarId_357_ = lean_ctor_get(v_c_123_, 0);
v_i_358_ = lean_ctor_get(v_c_123_, 1);
v_y_359_ = lean_ctor_get(v_c_123_, 2);
v_k_360_ = lean_ctor_get(v_c_123_, 3);
lean_inc_ref(v_k_360_);
v___x_361_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_121_, v_f_122_, v_k_360_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_361_) == 0)
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_386_; 
v_a_362_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_386_ == 0)
{
v___x_364_ = v___x_361_;
v_isShared_365_ = v_isSharedCheck_386_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_361_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_386_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
size_t v___x_366_; size_t v___x_367_; uint8_t v___x_368_; 
v___x_366_ = lean_ptr_addr(v_k_360_);
v___x_367_ = lean_ptr_addr(v_a_362_);
v___x_368_ = lean_usize_dec_eq(v___x_366_, v___x_367_);
if (v___x_368_ == 0)
{
lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_378_; 
lean_inc(v_y_359_);
lean_inc(v_i_358_);
lean_inc(v_fvarId_357_);
v_isSharedCheck_378_ = !lean_is_exclusive(v_c_123_);
if (v_isSharedCheck_378_ == 0)
{
lean_object* v_unused_379_; lean_object* v_unused_380_; lean_object* v_unused_381_; lean_object* v_unused_382_; 
v_unused_379_ = lean_ctor_get(v_c_123_, 3);
lean_dec(v_unused_379_);
v_unused_380_ = lean_ctor_get(v_c_123_, 2);
lean_dec(v_unused_380_);
v_unused_381_ = lean_ctor_get(v_c_123_, 1);
lean_dec(v_unused_381_);
v_unused_382_ = lean_ctor_get(v_c_123_, 0);
lean_dec(v_unused_382_);
v___x_370_ = v_c_123_;
v_isShared_371_ = v_isSharedCheck_378_;
goto v_resetjp_369_;
}
else
{
lean_dec(v_c_123_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_378_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 3, v_a_362_);
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_fvarId_357_);
lean_ctor_set(v_reuseFailAlloc_377_, 1, v_i_358_);
lean_ctor_set(v_reuseFailAlloc_377_, 2, v_y_359_);
lean_ctor_set(v_reuseFailAlloc_377_, 3, v_a_362_);
v___x_373_ = v_reuseFailAlloc_377_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
lean_object* v___x_375_; 
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v___x_373_);
v___x_375_ = v___x_364_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_373_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
}
else
{
lean_object* v___x_384_; 
lean_dec(v_a_362_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v_c_123_);
v___x_384_ = v___x_364_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v_c_123_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
}
else
{
lean_dec_ref(v_c_123_);
return v___x_361_;
}
}
case 8:
{
lean_object* v_fvarId_387_; lean_object* v_i_388_; lean_object* v_y_389_; lean_object* v_k_390_; lean_object* v___x_391_; 
v_fvarId_387_ = lean_ctor_get(v_c_123_, 0);
v_i_388_ = lean_ctor_get(v_c_123_, 1);
v_y_389_ = lean_ctor_get(v_c_123_, 2);
v_k_390_ = lean_ctor_get(v_c_123_, 3);
lean_inc_ref(v_k_390_);
v___x_391_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_121_, v_f_122_, v_k_390_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_416_; 
v_a_392_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_416_ == 0)
{
v___x_394_ = v___x_391_;
v_isShared_395_ = v_isSharedCheck_416_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_391_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_416_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
size_t v___x_396_; size_t v___x_397_; uint8_t v___x_398_; 
v___x_396_ = lean_ptr_addr(v_k_390_);
v___x_397_ = lean_ptr_addr(v_a_392_);
v___x_398_ = lean_usize_dec_eq(v___x_396_, v___x_397_);
if (v___x_398_ == 0)
{
lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_408_; 
lean_inc(v_y_389_);
lean_inc(v_i_388_);
lean_inc(v_fvarId_387_);
v_isSharedCheck_408_ = !lean_is_exclusive(v_c_123_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; lean_object* v_unused_410_; lean_object* v_unused_411_; lean_object* v_unused_412_; 
v_unused_409_ = lean_ctor_get(v_c_123_, 3);
lean_dec(v_unused_409_);
v_unused_410_ = lean_ctor_get(v_c_123_, 2);
lean_dec(v_unused_410_);
v_unused_411_ = lean_ctor_get(v_c_123_, 1);
lean_dec(v_unused_411_);
v_unused_412_ = lean_ctor_get(v_c_123_, 0);
lean_dec(v_unused_412_);
v___x_400_ = v_c_123_;
v_isShared_401_ = v_isSharedCheck_408_;
goto v_resetjp_399_;
}
else
{
lean_dec(v_c_123_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_408_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 3, v_a_392_);
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_fvarId_387_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_i_388_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v_y_389_);
lean_ctor_set(v_reuseFailAlloc_407_, 3, v_a_392_);
v___x_403_ = v_reuseFailAlloc_407_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_405_; 
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v___x_403_);
v___x_405_ = v___x_394_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_403_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
}
else
{
lean_object* v___x_414_; 
lean_dec(v_a_392_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v_c_123_);
v___x_414_ = v___x_394_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_c_123_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
else
{
lean_dec_ref(v_c_123_);
return v___x_391_;
}
}
case 9:
{
lean_object* v_fvarId_417_; lean_object* v_i_418_; lean_object* v_offset_419_; lean_object* v_y_420_; lean_object* v_ty_421_; lean_object* v_k_422_; lean_object* v___x_423_; 
v_fvarId_417_ = lean_ctor_get(v_c_123_, 0);
v_i_418_ = lean_ctor_get(v_c_123_, 1);
v_offset_419_ = lean_ctor_get(v_c_123_, 2);
v_y_420_ = lean_ctor_get(v_c_123_, 3);
v_ty_421_ = lean_ctor_get(v_c_123_, 4);
v_k_422_ = lean_ctor_get(v_c_123_, 5);
lean_inc_ref(v_k_422_);
v___x_423_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_121_, v_f_122_, v_k_422_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v_a_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_450_; 
v_a_424_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_450_ == 0)
{
v___x_426_ = v___x_423_;
v_isShared_427_ = v_isSharedCheck_450_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_a_424_);
lean_dec(v___x_423_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_450_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
size_t v___x_428_; size_t v___x_429_; uint8_t v___x_430_; 
v___x_428_ = lean_ptr_addr(v_k_422_);
v___x_429_ = lean_ptr_addr(v_a_424_);
v___x_430_ = lean_usize_dec_eq(v___x_428_, v___x_429_);
if (v___x_430_ == 0)
{
lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_440_; 
lean_inc_ref(v_ty_421_);
lean_inc(v_y_420_);
lean_inc(v_offset_419_);
lean_inc(v_i_418_);
lean_inc(v_fvarId_417_);
v_isSharedCheck_440_ = !lean_is_exclusive(v_c_123_);
if (v_isSharedCheck_440_ == 0)
{
lean_object* v_unused_441_; lean_object* v_unused_442_; lean_object* v_unused_443_; lean_object* v_unused_444_; lean_object* v_unused_445_; lean_object* v_unused_446_; 
v_unused_441_ = lean_ctor_get(v_c_123_, 5);
lean_dec(v_unused_441_);
v_unused_442_ = lean_ctor_get(v_c_123_, 4);
lean_dec(v_unused_442_);
v_unused_443_ = lean_ctor_get(v_c_123_, 3);
lean_dec(v_unused_443_);
v_unused_444_ = lean_ctor_get(v_c_123_, 2);
lean_dec(v_unused_444_);
v_unused_445_ = lean_ctor_get(v_c_123_, 1);
lean_dec(v_unused_445_);
v_unused_446_ = lean_ctor_get(v_c_123_, 0);
lean_dec(v_unused_446_);
v___x_432_ = v_c_123_;
v_isShared_433_ = v_isSharedCheck_440_;
goto v_resetjp_431_;
}
else
{
lean_dec(v_c_123_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_440_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 5, v_a_424_);
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_fvarId_417_);
lean_ctor_set(v_reuseFailAlloc_439_, 1, v_i_418_);
lean_ctor_set(v_reuseFailAlloc_439_, 2, v_offset_419_);
lean_ctor_set(v_reuseFailAlloc_439_, 3, v_y_420_);
lean_ctor_set(v_reuseFailAlloc_439_, 4, v_ty_421_);
lean_ctor_set(v_reuseFailAlloc_439_, 5, v_a_424_);
v___x_435_ = v_reuseFailAlloc_439_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
lean_object* v___x_437_; 
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 0, v___x_435_);
v___x_437_ = v___x_426_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_435_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
else
{
lean_object* v___x_448_; 
lean_dec(v_a_424_);
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 0, v_c_123_);
v___x_448_ = v___x_426_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_c_123_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
else
{
lean_dec_ref(v_c_123_);
return v___x_423_;
}
}
case 10:
{
lean_object* v_fvarId_451_; lean_object* v_cidx_452_; lean_object* v_k_453_; lean_object* v___x_454_; 
v_fvarId_451_ = lean_ctor_get(v_c_123_, 0);
v_cidx_452_ = lean_ctor_get(v_c_123_, 1);
v_k_453_ = lean_ctor_get(v_c_123_, 2);
lean_inc_ref(v_k_453_);
v___x_454_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_121_, v_f_122_, v_k_453_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_478_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_478_ == 0)
{
v___x_457_ = v___x_454_;
v_isShared_458_ = v_isSharedCheck_478_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_454_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_478_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
size_t v___x_459_; size_t v___x_460_; uint8_t v___x_461_; 
v___x_459_ = lean_ptr_addr(v_k_453_);
v___x_460_ = lean_ptr_addr(v_a_455_);
v___x_461_ = lean_usize_dec_eq(v___x_459_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_471_; 
lean_inc(v_cidx_452_);
lean_inc(v_fvarId_451_);
v_isSharedCheck_471_ = !lean_is_exclusive(v_c_123_);
if (v_isSharedCheck_471_ == 0)
{
lean_object* v_unused_472_; lean_object* v_unused_473_; lean_object* v_unused_474_; 
v_unused_472_ = lean_ctor_get(v_c_123_, 2);
lean_dec(v_unused_472_);
v_unused_473_ = lean_ctor_get(v_c_123_, 1);
lean_dec(v_unused_473_);
v_unused_474_ = lean_ctor_get(v_c_123_, 0);
lean_dec(v_unused_474_);
v___x_463_ = v_c_123_;
v_isShared_464_ = v_isSharedCheck_471_;
goto v_resetjp_462_;
}
else
{
lean_dec(v_c_123_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_471_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 2, v_a_455_);
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_fvarId_451_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v_cidx_452_);
lean_ctor_set(v_reuseFailAlloc_470_, 2, v_a_455_);
v___x_466_ = v_reuseFailAlloc_470_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_468_; 
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v___x_466_);
v___x_468_ = v___x_457_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_466_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
else
{
lean_object* v___x_476_; 
lean_dec(v_a_455_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v_c_123_);
v___x_476_ = v___x_457_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_c_123_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
else
{
lean_dec_ref(v_c_123_);
return v___x_454_;
}
}
case 11:
{
lean_object* v_fvarId_479_; lean_object* v_n_480_; uint8_t v_check_481_; uint8_t v_persistent_482_; lean_object* v_k_483_; lean_object* v___x_484_; 
v_fvarId_479_ = lean_ctor_get(v_c_123_, 0);
v_n_480_ = lean_ctor_get(v_c_123_, 1);
v_check_481_ = lean_ctor_get_uint8(v_c_123_, sizeof(void*)*3);
v_persistent_482_ = lean_ctor_get_uint8(v_c_123_, sizeof(void*)*3 + 1);
v_k_483_ = lean_ctor_get(v_c_123_, 2);
lean_inc_ref(v_k_483_);
v___x_484_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_121_, v_f_122_, v_k_483_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_508_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_508_ == 0)
{
v___x_487_ = v___x_484_;
v_isShared_488_ = v_isSharedCheck_508_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_484_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_508_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
size_t v___x_489_; size_t v___x_490_; uint8_t v___x_491_; 
v___x_489_ = lean_ptr_addr(v_k_483_);
v___x_490_ = lean_ptr_addr(v_a_485_);
v___x_491_ = lean_usize_dec_eq(v___x_489_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_501_; 
lean_inc(v_n_480_);
lean_inc(v_fvarId_479_);
v_isSharedCheck_501_ = !lean_is_exclusive(v_c_123_);
if (v_isSharedCheck_501_ == 0)
{
lean_object* v_unused_502_; lean_object* v_unused_503_; lean_object* v_unused_504_; 
v_unused_502_ = lean_ctor_get(v_c_123_, 2);
lean_dec(v_unused_502_);
v_unused_503_ = lean_ctor_get(v_c_123_, 1);
lean_dec(v_unused_503_);
v_unused_504_ = lean_ctor_get(v_c_123_, 0);
lean_dec(v_unused_504_);
v___x_493_ = v_c_123_;
v_isShared_494_ = v_isSharedCheck_501_;
goto v_resetjp_492_;
}
else
{
lean_dec(v_c_123_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_501_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 2, v_a_485_);
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_fvarId_479_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v_n_480_);
lean_ctor_set(v_reuseFailAlloc_500_, 2, v_a_485_);
lean_ctor_set_uint8(v_reuseFailAlloc_500_, sizeof(void*)*3, v_check_481_);
lean_ctor_set_uint8(v_reuseFailAlloc_500_, sizeof(void*)*3 + 1, v_persistent_482_);
v___x_496_ = v_reuseFailAlloc_500_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_498_; 
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_496_);
v___x_498_ = v___x_487_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
else
{
lean_object* v___x_506_; 
lean_dec(v_a_485_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v_c_123_);
v___x_506_ = v___x_487_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_c_123_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
else
{
lean_dec_ref(v_c_123_);
return v___x_484_;
}
}
case 12:
{
lean_object* v_fvarId_509_; lean_object* v_n_510_; uint8_t v_check_511_; uint8_t v_persistent_512_; lean_object* v_k_513_; lean_object* v___x_514_; 
v_fvarId_509_ = lean_ctor_get(v_c_123_, 0);
v_n_510_ = lean_ctor_get(v_c_123_, 1);
v_check_511_ = lean_ctor_get_uint8(v_c_123_, sizeof(void*)*3);
v_persistent_512_ = lean_ctor_get_uint8(v_c_123_, sizeof(void*)*3 + 1);
v_k_513_ = lean_ctor_get(v_c_123_, 2);
lean_inc_ref(v_k_513_);
v___x_514_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_121_, v_f_122_, v_k_513_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_514_) == 0)
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_538_; 
v_a_515_ = lean_ctor_get(v___x_514_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_538_ == 0)
{
v___x_517_ = v___x_514_;
v_isShared_518_ = v_isSharedCheck_538_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v___x_514_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_538_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
size_t v___x_519_; size_t v___x_520_; uint8_t v___x_521_; 
v___x_519_ = lean_ptr_addr(v_k_513_);
v___x_520_ = lean_ptr_addr(v_a_515_);
v___x_521_ = lean_usize_dec_eq(v___x_519_, v___x_520_);
if (v___x_521_ == 0)
{
lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_531_; 
lean_inc(v_n_510_);
lean_inc(v_fvarId_509_);
v_isSharedCheck_531_ = !lean_is_exclusive(v_c_123_);
if (v_isSharedCheck_531_ == 0)
{
lean_object* v_unused_532_; lean_object* v_unused_533_; lean_object* v_unused_534_; 
v_unused_532_ = lean_ctor_get(v_c_123_, 2);
lean_dec(v_unused_532_);
v_unused_533_ = lean_ctor_get(v_c_123_, 1);
lean_dec(v_unused_533_);
v_unused_534_ = lean_ctor_get(v_c_123_, 0);
lean_dec(v_unused_534_);
v___x_523_ = v_c_123_;
v_isShared_524_ = v_isSharedCheck_531_;
goto v_resetjp_522_;
}
else
{
lean_dec(v_c_123_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_531_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 2, v_a_515_);
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(12, 3, 2);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_fvarId_509_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_n_510_);
lean_ctor_set(v_reuseFailAlloc_530_, 2, v_a_515_);
lean_ctor_set_uint8(v_reuseFailAlloc_530_, sizeof(void*)*3, v_check_511_);
lean_ctor_set_uint8(v_reuseFailAlloc_530_, sizeof(void*)*3 + 1, v_persistent_512_);
v___x_526_ = v_reuseFailAlloc_530_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
lean_object* v___x_528_; 
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 0, v___x_526_);
v___x_528_ = v___x_517_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_526_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
else
{
lean_object* v___x_536_; 
lean_dec(v_a_515_);
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 0, v_c_123_);
v___x_536_ = v___x_517_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_c_123_);
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
else
{
lean_dec_ref(v_c_123_);
return v___x_514_;
}
}
default: 
{
lean_object* v_fvarId_539_; lean_object* v_k_540_; lean_object* v___x_541_; 
v_fvarId_539_ = lean_ctor_get(v_c_123_, 0);
v_k_540_ = lean_ctor_get(v_c_123_, 1);
lean_inc_ref(v_k_540_);
v___x_541_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_121_, v_f_122_, v_k_540_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_564_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_564_ == 0)
{
v___x_544_ = v___x_541_;
v_isShared_545_ = v_isSharedCheck_564_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_541_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_564_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
size_t v___x_546_; size_t v___x_547_; uint8_t v___x_548_; 
v___x_546_ = lean_ptr_addr(v_k_540_);
v___x_547_ = lean_ptr_addr(v_a_542_);
v___x_548_ = lean_usize_dec_eq(v___x_546_, v___x_547_);
if (v___x_548_ == 0)
{
lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_558_; 
lean_inc(v_fvarId_539_);
v_isSharedCheck_558_ = !lean_is_exclusive(v_c_123_);
if (v_isSharedCheck_558_ == 0)
{
lean_object* v_unused_559_; lean_object* v_unused_560_; 
v_unused_559_ = lean_ctor_get(v_c_123_, 1);
lean_dec(v_unused_559_);
v_unused_560_ = lean_ctor_get(v_c_123_, 0);
lean_dec(v_unused_560_);
v___x_550_ = v_c_123_;
v_isShared_551_ = v_isSharedCheck_558_;
goto v_resetjp_549_;
}
else
{
lean_dec(v_c_123_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_558_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 1, v_a_542_);
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_fvarId_539_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v_a_542_);
v___x_553_ = v_reuseFailAlloc_557_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
lean_object* v___x_555_; 
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 0, v___x_553_);
v___x_555_ = v___x_544_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v___x_553_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
else
{
lean_object* v___x_562_; 
lean_dec(v_a_542_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 0, v_c_123_);
v___x_562_ = v___x_544_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_c_123_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
else
{
lean_dec_ref(v_c_123_);
return v___x_541_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__2(uint8_t v_pu_565_, lean_object* v_f_566_, size_t v_sz_567_, size_t v_i_568_, lean_object* v_bs_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
uint8_t v___x_576_; 
v___x_576_ = lean_usize_dec_lt(v_i_568_, v_sz_567_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; 
lean_dec_ref(v_f_566_);
v___x_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_577_, 0, v_bs_569_);
return v___x_577_;
}
else
{
lean_object* v_v_578_; lean_object* v___x_579_; lean_object* v_bs_x27_580_; lean_object* v_a_582_; 
v_v_578_ = lean_array_uget(v_bs_569_, v_i_568_);
v___x_579_ = lean_unsigned_to_nat(0u);
v_bs_x27_580_ = lean_array_uset(v_bs_569_, v_i_568_, v___x_579_);
switch(lean_obj_tag(v_v_578_))
{
case 0:
{
lean_object* v_ctorName_587_; lean_object* v_params_588_; lean_object* v_code_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_606_; 
v_ctorName_587_ = lean_ctor_get(v_v_578_, 0);
v_params_588_ = lean_ctor_get(v_v_578_, 1);
v_code_589_ = lean_ctor_get(v_v_578_, 2);
v_isSharedCheck_606_ = !lean_is_exclusive(v_v_578_);
if (v_isSharedCheck_606_ == 0)
{
v___x_591_ = v_v_578_;
v_isShared_592_ = v_isSharedCheck_606_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_code_589_);
lean_inc(v_params_588_);
lean_inc(v_ctorName_587_);
lean_dec(v_v_578_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_606_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_593_; 
lean_inc_ref(v_f_566_);
v___x_593_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_565_, v_f_566_, v_code_589_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; lean_object* v___x_596_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_a_594_);
lean_dec_ref(v___x_593_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 2, v_a_594_);
v___x_596_ = v___x_591_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_ctorName_587_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v_params_588_);
lean_ctor_set(v_reuseFailAlloc_597_, 2, v_a_594_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
v_a_582_ = v___x_596_;
goto v___jp_581_;
}
}
else
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
lean_del_object(v___x_591_);
lean_dec_ref(v_params_588_);
lean_dec(v_ctorName_587_);
lean_dec_ref(v_bs_x27_580_);
lean_dec_ref(v_f_566_);
v_a_598_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_593_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_593_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_598_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
}
case 1:
{
lean_object* v_info_607_; lean_object* v_code_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_625_; 
v_info_607_ = lean_ctor_get(v_v_578_, 0);
v_code_608_ = lean_ctor_get(v_v_578_, 1);
v_isSharedCheck_625_ = !lean_is_exclusive(v_v_578_);
if (v_isSharedCheck_625_ == 0)
{
v___x_610_ = v_v_578_;
v_isShared_611_ = v_isSharedCheck_625_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_code_608_);
lean_inc(v_info_607_);
lean_dec(v_v_578_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_625_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_612_; 
lean_inc_ref(v_f_566_);
v___x_612_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_565_, v_f_566_, v_code_608_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
lean_inc(v_a_613_);
lean_dec_ref(v___x_612_);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 1, v_a_613_);
v___x_615_ = v___x_610_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_info_607_);
lean_ctor_set(v_reuseFailAlloc_616_, 1, v_a_613_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
v_a_582_ = v___x_615_;
goto v___jp_581_;
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_624_; 
lean_del_object(v___x_610_);
lean_dec_ref(v_info_607_);
lean_dec_ref(v_bs_x27_580_);
lean_dec_ref(v_f_566_);
v_a_617_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_624_ == 0)
{
v___x_619_ = v___x_612_;
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v___x_612_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_622_; 
if (v_isShared_620_ == 0)
{
v___x_622_ = v___x_619_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_a_617_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
}
default: 
{
lean_object* v_code_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_643_; 
v_code_626_ = lean_ctor_get(v_v_578_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v_v_578_);
if (v_isSharedCheck_643_ == 0)
{
v___x_628_ = v_v_578_;
v_isShared_629_ = v_isSharedCheck_643_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_code_626_);
lean_dec(v_v_578_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_643_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; 
lean_inc_ref(v_f_566_);
v___x_630_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_565_, v_f_566_, v_code_626_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_633_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref(v___x_630_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 0, v_a_631_);
v___x_633_ = v___x_628_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_631_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
v_a_582_ = v___x_633_;
goto v___jp_581_;
}
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
lean_del_object(v___x_628_);
lean_dec_ref(v_bs_x27_580_);
lean_dec_ref(v_f_566_);
v_a_635_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_630_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_630_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
}
}
v___jp_581_:
{
size_t v___x_583_; size_t v___x_584_; lean_object* v___x_585_; 
v___x_583_ = ((size_t)1ULL);
v___x_584_ = lean_usize_add(v_i_568_, v___x_583_);
v___x_585_ = lean_array_uset(v_bs_x27_580_, v_i_568_, v_a_582_);
v_i_568_ = v___x_584_;
v_bs_569_ = v___x_585_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__2___boxed(lean_object* v_pu_644_, lean_object* v_f_645_, lean_object* v_sz_646_, lean_object* v_i_647_, lean_object* v_bs_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
uint8_t v_pu_boxed_655_; size_t v_sz_boxed_656_; size_t v_i_boxed_657_; lean_object* v_res_658_; 
v_pu_boxed_655_ = lean_unbox(v_pu_644_);
v_sz_boxed_656_ = lean_unbox_usize(v_sz_646_);
lean_dec(v_sz_646_);
v_i_boxed_657_ = lean_unbox_usize(v_i_647_);
lean_dec(v_i_647_);
v_res_658_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__2(v_pu_boxed_655_, v_f_645_, v_sz_boxed_656_, v_i_boxed_657_, v_bs_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_649_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___boxed(lean_object* v_pu_659_, lean_object* v_f_660_, lean_object* v_c_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_){
_start:
{
uint8_t v_pu_boxed_668_; lean_object* v_res_669_; 
v_pu_boxed_668_ = lean_unbox(v_pu_659_);
v_res_669_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_boxed_668_, v_f_660_, v_c_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_);
lean_dec(v_a_666_);
lean_dec_ref(v_a_665_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
lean_dec(v_a_662_);
return v_res_669_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0(lean_object* v_00_u03b2_670_, lean_object* v_k_671_, lean_object* v_t_672_){
_start:
{
uint8_t v___x_673_; 
v___x_673_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(v_k_671_, v_t_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___boxed(lean_object* v_00_u03b2_674_, lean_object* v_k_675_, lean_object* v_t_676_){
_start:
{
uint8_t v_res_677_; lean_object* v_r_678_; 
v_res_677_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0(v_00_u03b2_674_, v_k_675_, v_t_676_);
lean_dec(v_t_676_);
lean_dec(v_k_675_);
v_r_678_ = lean_box(v_res_677_);
return v_r_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind(uint8_t v_pu_679_, lean_object* v_c_680_, lean_object* v_f_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_687_ = lean_box(1);
v___x_688_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_679_, v_f_681_, v_c_680_, v___x_687_, v_a_682_, v_a_683_, v_a_684_, v_a_685_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind___boxed(lean_object* v_pu_689_, lean_object* v_c_690_, lean_object* v_f_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_){
_start:
{
uint8_t v_pu_boxed_697_; lean_object* v_res_698_; 
v_pu_boxed_697_ = lean_unbox(v_pu_689_);
v_res_698_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v_pu_boxed_697_, v_c_690_, v_f_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_);
lean_dec(v_a_695_);
lean_dec_ref(v_a_694_);
lean_dec(v_a_693_);
lean_dec_ref(v_a_692_);
return v_res_698_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0(void){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_CompilerM_codeBind___boxed), 8, 0);
return v___x_699_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM(void){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0, &l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0_once, _init_l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__0(lean_object* v_f_701_, lean_object* v_ctx_702_, lean_object* v_fvarId_703_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = lean_apply_2(v_f_701_, v_fvarId_703_, v_ctx_702_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1(lean_object* v_inst_705_, uint8_t v_pu_706_, lean_object* v_c_707_, lean_object* v_f_708_, lean_object* v_ctx_709_){
_start:
{
lean_object* v___f_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___f_710_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__0), 3, 2);
lean_closure_set(v___f_710_, 0, v_f_708_);
lean_closure_set(v___f_710_, 1, v_ctx_709_);
v___x_711_ = lean_box(v_pu_706_);
v___x_712_ = lean_apply_3(v_inst_705_, v___x_711_, v_c_707_, v___f_710_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed(lean_object* v_inst_713_, lean_object* v_pu_714_, lean_object* v_c_715_, lean_object* v_f_716_, lean_object* v_ctx_717_){
_start:
{
uint8_t v_pu_21__boxed_718_; lean_object* v_res_719_; 
v_pu_21__boxed_718_ = lean_unbox(v_pu_714_);
v_res_719_ = l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1(v_inst_713_, v_pu_21__boxed_718_, v_c_715_, v_f_716_, v_ctx_717_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg(lean_object* v_inst_720_){
_start:
{
lean_object* v___f_721_; 
v___f_721_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_721_, 0, v_inst_720_);
return v___f_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT(lean_object* v_m_722_, lean_object* v_00_u03c1_723_, lean_object* v_inst_724_){
_start:
{
lean_object* v___f_725_; 
v___f_725_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_725_, 0, v_inst_724_);
return v___f_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__0(lean_object* v_f_726_, lean_object* v_sref_727_, lean_object* v_fvarId_728_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = lean_apply_2(v_f_726_, v_fvarId_728_, v_sref_727_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1(lean_object* v_inst_730_, uint8_t v_pu_731_, lean_object* v_c_732_, lean_object* v_f_733_, lean_object* v_sref_734_){
_start:
{
lean_object* v___f_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___f_735_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__0), 3, 2);
lean_closure_set(v___f_735_, 0, v_f_733_);
lean_closure_set(v___f_735_, 1, v_sref_734_);
v___x_736_ = lean_box(v_pu_731_);
v___x_737_ = lean_apply_3(v_inst_730_, v___x_736_, v_c_732_, v___f_735_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1___boxed(lean_object* v_inst_738_, lean_object* v_pu_739_, lean_object* v_c_740_, lean_object* v_f_741_, lean_object* v_sref_742_){
_start:
{
uint8_t v_pu_23__boxed_743_; lean_object* v_res_744_; 
v_pu_23__boxed_743_ = lean_unbox(v_pu_739_);
v_res_744_ = l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1(v_inst_738_, v_pu_23__boxed_743_, v_c_740_, v_f_741_, v_sref_742_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg(lean_object* v_inst_745_){
_start:
{
lean_object* v___f_746_; 
v___f_746_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_746_, 0, v_inst_745_);
return v___f_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld(lean_object* v_00_u03c9_747_, lean_object* v_m_748_, lean_object* v_00_u03c3_749_, lean_object* v_inst_750_, lean_object* v_inst_751_){
_start:
{
lean_object* v___f_752_; 
v___f_752_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_752_, 0, v_inst_751_);
return v___f_752_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = lean_unsigned_to_nat(0u);
v___x_754_ = lean_mk_empty_array_with_capacity(v___x_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go(uint8_t v_pu_755_, lean_object* v_type_756_, lean_object* v_xs_757_, lean_object* v_ps_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_){
_start:
{
if (lean_obj_tag(v_type_756_) == 7)
{
lean_object* v_binderType_764_; lean_object* v_body_765_; lean_object* v_d_766_; uint8_t v___x_767_; lean_object* v___x_768_; 
v_binderType_764_ = lean_ctor_get(v_type_756_, 1);
lean_inc_ref(v_binderType_764_);
v_body_765_ = lean_ctor_get(v_type_756_, 2);
lean_inc_ref(v_body_765_);
lean_dec_ref(v_type_756_);
v_d_766_ = lean_expr_instantiate_rev(v_binderType_764_, v_xs_757_);
lean_dec_ref(v_binderType_764_);
v___x_767_ = l_Lean_isMarkedBorrowed(v_d_766_);
v___x_768_ = l_Lean_Compiler_LCNF_mkAuxParam(v_pu_755_, v_d_766_, v___x_767_, v_a_759_, v_a_760_, v_a_761_, v_a_762_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v_fvarId_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_a_769_);
lean_dec_ref(v___x_768_);
v_fvarId_770_ = lean_ctor_get(v_a_769_, 0);
lean_inc(v_fvarId_770_);
v___x_771_ = l_Lean_Expr_fvar___override(v_fvarId_770_);
v___x_772_ = lean_array_push(v_xs_757_, v___x_771_);
v___x_773_ = lean_array_push(v_ps_758_, v_a_769_);
v_type_756_ = v_body_765_;
v_xs_757_ = v___x_772_;
v_ps_758_ = v___x_773_;
goto _start;
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_dec_ref(v_body_765_);
lean_dec_ref(v_ps_758_);
lean_dec_ref(v_xs_757_);
v_a_775_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_768_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_768_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
else
{
lean_object* v_type_783_; lean_object* v_type_x27_784_; uint8_t v___x_785_; 
v_type_783_ = lean_expr_instantiate_rev(v_type_756_, v_xs_757_);
lean_dec_ref(v_xs_757_);
lean_dec_ref(v_type_756_);
lean_inc_ref(v_type_783_);
v_type_x27_784_ = l_Lean_Expr_headBeta(v_type_783_);
v___x_785_ = lean_expr_eqv(v_type_x27_784_, v_type_783_);
lean_dec_ref(v_type_783_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; 
v___x_786_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0, &l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0);
v_type_756_ = v_type_x27_784_;
v_xs_757_ = v___x_786_;
goto _start;
}
else
{
lean_object* v___x_788_; 
lean_dec_ref(v_type_x27_784_);
v___x_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_788_, 0, v_ps_758_);
return v___x_788_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___boxed(lean_object* v_pu_789_, lean_object* v_type_790_, lean_object* v_xs_791_, lean_object* v_ps_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_){
_start:
{
uint8_t v_pu_boxed_798_; lean_object* v_res_799_; 
v_pu_boxed_798_ = lean_unbox(v_pu_789_);
v_res_799_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go(v_pu_boxed_798_, v_type_790_, v_xs_791_, v_ps_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_);
lean_dec(v_a_796_);
lean_dec_ref(v_a_795_);
lean_dec(v_a_794_);
lean_dec_ref(v_a_793_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkNewParams(uint8_t v_pu_800_, lean_object* v_type_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_){
_start:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0, &l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0);
v___x_808_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go(v_pu_800_, v_type_801_, v___x_807_, v___x_807_, v_a_802_, v_a_803_, v_a_804_, v_a_805_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkNewParams___boxed(lean_object* v_pu_809_, lean_object* v_type_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
uint8_t v_pu_boxed_816_; lean_object* v_res_817_; 
v_pu_boxed_816_ = lean_unbox(v_pu_809_);
v_res_817_ = l_Lean_Compiler_LCNF_mkNewParams(v_pu_boxed_816_, v_type_810_, v_a_811_, v_a_812_, v_a_813_, v_a_814_);
lean_dec(v_a_814_);
lean_dec_ref(v_a_813_);
lean_dec(v_a_812_);
lean_dec_ref(v_a_811_);
return v_res_817_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(lean_object* v_type_818_, lean_object* v_params_819_){
_start:
{
lean_object* v_typeArity_820_; lean_object* v_valueArity_821_; uint8_t v___x_822_; 
v_typeArity_820_ = l_Lean_Compiler_LCNF_getArrowArity(v_type_818_);
v_valueArity_821_ = lean_array_get_size(v_params_819_);
v___x_822_ = lean_nat_dec_lt(v_valueArity_821_, v_typeArity_820_);
lean_dec(v_typeArity_820_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isEtaExpandCandidateCore___boxed(lean_object* v_type_823_, lean_object* v_params_824_){
_start:
{
uint8_t v_res_825_; lean_object* v_r_826_; 
v_res_825_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_823_, v_params_824_);
lean_dec_ref(v_params_824_);
v_r_826_ = lean_box(v_res_825_);
return v_r_826_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate(lean_object* v_decl_827_){
_start:
{
lean_object* v_params_828_; lean_object* v_type_829_; uint8_t v___x_830_; 
v_params_828_ = lean_ctor_get(v_decl_827_, 2);
lean_inc_ref(v_params_828_);
v_type_829_ = lean_ctor_get(v_decl_827_, 3);
lean_inc_ref(v_type_829_);
lean_dec_ref(v_decl_827_);
v___x_830_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_829_, v_params_828_);
lean_dec_ref(v_params_828_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate___boxed(lean_object* v_decl_831_){
_start:
{
uint8_t v_res_832_; lean_object* v_r_833_; 
v_res_832_ = l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate(v_decl_831_);
v_r_833_ = lean_box(v_res_832_);
return v_r_833_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0(void){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = lean_mk_string_unchecked("_x", 2, 2);
return v___x_834_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = lean_obj_once(&l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0, &l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0);
v___x_836_ = l_Lean_Name_mkStr1(v___x_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0(lean_object* v___x_837_, uint8_t v___x_838_, lean_object* v_fvarId_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_845_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_845_, 0, v_fvarId_839_);
lean_ctor_set(v___x_845_, 1, v___x_837_);
v___x_846_ = lean_obj_once(&l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1, &l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1_once, _init_l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1);
v___x_847_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_838_, v___x_845_, v___x_846_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_858_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_858_ == 0)
{
v___x_850_ = v___x_847_;
v_isShared_851_ = v_isSharedCheck_858_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_847_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_858_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v_fvarId_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_856_; 
v_fvarId_852_ = lean_ctor_get(v_a_848_, 0);
lean_inc(v_fvarId_852_);
v___x_853_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_853_, 0, v_fvarId_852_);
v___x_854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_854_, 0, v_a_848_);
lean_ctor_set(v___x_854_, 1, v___x_853_);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 0, v___x_854_);
v___x_856_ = v___x_850_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v___x_854_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
else
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_866_; 
v_a_859_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_866_ == 0)
{
v___x_861_ = v___x_847_;
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_847_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_859_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0___boxed(lean_object* v___x_867_, lean_object* v___x_868_, lean_object* v_fvarId_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
uint8_t v___x_903__boxed_875_; lean_object* v_res_876_; 
v___x_903__boxed_875_ = lean_unbox(v___x_868_);
v_res_876_ = l_Lean_Compiler_LCNF_etaExpandCore___lam__0(v___x_867_, v___x_903__boxed_875_, v_fvarId_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_);
lean_dec(v___y_873_);
lean_dec_ref(v___y_872_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1(size_t v_sz_877_, size_t v_i_878_, lean_object* v_bs_879_){
_start:
{
uint8_t v___x_880_; 
v___x_880_ = lean_usize_dec_lt(v_i_878_, v_sz_877_);
if (v___x_880_ == 0)
{
return v_bs_879_;
}
else
{
lean_object* v_v_881_; lean_object* v_fvarId_882_; lean_object* v___x_883_; lean_object* v_bs_x27_884_; lean_object* v___x_885_; size_t v___x_886_; size_t v___x_887_; lean_object* v___x_888_; 
v_v_881_ = lean_array_uget_borrowed(v_bs_879_, v_i_878_);
v_fvarId_882_ = lean_ctor_get(v_v_881_, 0);
lean_inc(v_fvarId_882_);
v___x_883_ = lean_unsigned_to_nat(0u);
v_bs_x27_884_ = lean_array_uset(v_bs_879_, v_i_878_, v___x_883_);
v___x_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_885_, 0, v_fvarId_882_);
v___x_886_ = ((size_t)1ULL);
v___x_887_ = lean_usize_add(v_i_878_, v___x_886_);
v___x_888_ = lean_array_uset(v_bs_x27_884_, v_i_878_, v___x_885_);
v_i_878_ = v___x_887_;
v_bs_879_ = v___x_888_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1___boxed(lean_object* v_sz_890_, lean_object* v_i_891_, lean_object* v_bs_892_){
_start:
{
size_t v_sz_boxed_893_; size_t v_i_boxed_894_; lean_object* v_res_895_; 
v_sz_boxed_893_ = lean_unbox_usize(v_sz_890_);
lean_dec(v_sz_890_);
v_i_boxed_894_ = lean_unbox_usize(v_i_891_);
lean_dec(v_i_891_);
v_res_895_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1(v_sz_boxed_893_, v_i_boxed_894_, v_bs_892_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0(size_t v_sz_896_, size_t v_i_897_, lean_object* v_bs_898_){
_start:
{
uint8_t v___x_899_; 
v___x_899_ = lean_usize_dec_lt(v_i_897_, v_sz_896_);
if (v___x_899_ == 0)
{
return v_bs_898_;
}
else
{
lean_object* v_v_900_; lean_object* v_fvarId_901_; lean_object* v___x_902_; lean_object* v_bs_x27_903_; lean_object* v___x_904_; size_t v___x_905_; size_t v___x_906_; lean_object* v___x_907_; 
v_v_900_ = lean_array_uget_borrowed(v_bs_898_, v_i_897_);
v_fvarId_901_ = lean_ctor_get(v_v_900_, 0);
lean_inc(v_fvarId_901_);
v___x_902_ = lean_unsigned_to_nat(0u);
v_bs_x27_903_ = lean_array_uset(v_bs_898_, v_i_897_, v___x_902_);
v___x_904_ = l_Lean_mkFVar(v_fvarId_901_);
v___x_905_ = ((size_t)1ULL);
v___x_906_ = lean_usize_add(v_i_897_, v___x_905_);
v___x_907_ = lean_array_uset(v_bs_x27_903_, v_i_897_, v___x_904_);
v_i_897_ = v___x_906_;
v_bs_898_ = v___x_907_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0___boxed(lean_object* v_sz_909_, lean_object* v_i_910_, lean_object* v_bs_911_){
_start:
{
size_t v_sz_boxed_912_; size_t v_i_boxed_913_; lean_object* v_res_914_; 
v_sz_boxed_912_ = lean_unbox_usize(v_sz_909_);
lean_dec(v_sz_909_);
v_i_boxed_913_ = lean_unbox_usize(v_i_910_);
lean_dec(v_i_910_);
v_res_914_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0(v_sz_boxed_912_, v_i_boxed_913_, v_bs_911_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore(lean_object* v_type_915_, lean_object* v_params_916_, lean_object* v_value_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_){
_start:
{
size_t v_sz_923_; size_t v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v_sz_923_ = lean_array_size(v_params_916_);
v___x_924_ = ((size_t)0ULL);
lean_inc_ref(v_params_916_);
v___x_925_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0(v_sz_923_, v___x_924_, v_params_916_);
v___x_926_ = l_Lean_Compiler_LCNF_instantiateForall(v_type_915_, v___x_925_, v_a_920_, v_a_921_);
lean_dec_ref(v___x_925_);
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v_a_927_; uint8_t v___x_928_; lean_object* v___x_929_; 
v_a_927_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_a_927_);
lean_dec_ref(v___x_926_);
v___x_928_ = 0;
v___x_929_ = l_Lean_Compiler_LCNF_mkNewParams(v___x_928_, v_a_927_, v_a_918_, v_a_919_, v_a_920_, v_a_921_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v_a_930_; lean_object* v___x_931_; size_t v_sz_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___f_935_; lean_object* v___x_936_; 
v_a_930_ = lean_ctor_get(v___x_929_, 0);
lean_inc(v_a_930_);
lean_dec_ref(v___x_929_);
v___x_931_ = l_Array_append___redArg(v_params_916_, v_a_930_);
v_sz_932_ = lean_array_size(v_a_930_);
v___x_933_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1(v_sz_932_, v___x_924_, v_a_930_);
v___x_934_ = lean_box(v___x_928_);
v___f_935_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_etaExpandCore___lam__0___boxed), 8, 2);
lean_closure_set(v___f_935_, 0, v___x_933_);
lean_closure_set(v___f_935_, 1, v___x_934_);
v___x_936_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v___x_928_, v_value_917_, v___f_935_, v_a_918_, v_a_919_, v_a_920_, v_a_921_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_945_; 
v_a_937_ = lean_ctor_get(v___x_936_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_945_ == 0)
{
v___x_939_ = v___x_936_;
v_isShared_940_ = v_isSharedCheck_945_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_936_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_945_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_941_; lean_object* v___x_943_; 
v___x_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_931_);
lean_ctor_set(v___x_941_, 1, v_a_937_);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 0, v___x_941_);
v___x_943_ = v___x_939_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_941_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec_ref(v___x_931_);
v_a_946_ = lean_ctor_get(v___x_936_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_936_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_936_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec_ref(v_value_917_);
lean_dec_ref(v_params_916_);
v_a_954_ = lean_ctor_get(v___x_929_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_929_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_929_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec_ref(v_value_917_);
lean_dec_ref(v_params_916_);
v_a_962_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_926_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_926_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___boxed(lean_object* v_type_970_, lean_object* v_params_971_, lean_object* v_value_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_, lean_object* v_a_976_, lean_object* v_a_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lean_Compiler_LCNF_etaExpandCore(v_type_970_, v_params_971_, v_value_972_, v_a_973_, v_a_974_, v_a_975_, v_a_976_);
lean_dec(v_a_976_);
lean_dec_ref(v_a_975_);
lean_dec(v_a_974_);
lean_dec_ref(v_a_973_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore_x3f(lean_object* v_type_979_, lean_object* v_params_980_, lean_object* v_value_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_){
_start:
{
uint8_t v___x_987_; 
lean_inc_ref(v_type_979_);
v___x_987_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_979_, v_params_980_);
if (v___x_987_ == 0)
{
lean_object* v___x_988_; lean_object* v___x_989_; 
lean_dec_ref(v_value_981_);
lean_dec_ref(v_params_980_);
lean_dec_ref(v_type_979_);
v___x_988_ = lean_box(0);
v___x_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_989_, 0, v___x_988_);
return v___x_989_;
}
else
{
lean_object* v___x_990_; 
v___x_990_ = l_Lean_Compiler_LCNF_etaExpandCore(v_type_979_, v_params_980_, v_value_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_999_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_999_ == 0)
{
v___x_993_ = v___x_990_;
v_isShared_994_ = v_isSharedCheck_999_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_990_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_999_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_995_; lean_object* v___x_997_; 
v___x_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_995_, 0, v_a_991_);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 0, v___x_995_);
v___x_997_ = v___x_993_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v___x_995_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
else
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
v_a_1000_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1002_ = v___x_990_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_990_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_1000_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore_x3f___boxed(lean_object* v_type_1008_, lean_object* v_params_1009_, lean_object* v_value_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_Lean_Compiler_LCNF_etaExpandCore_x3f(v_type_1008_, v_params_1009_, v_value_1010_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_);
lean_dec(v_a_1014_);
lean_dec_ref(v_a_1013_);
lean_dec(v_a_1012_);
lean_dec_ref(v_a_1011_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand(lean_object* v_decl_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_){
_start:
{
lean_object* v_params_1023_; lean_object* v_type_1024_; lean_object* v_value_1025_; lean_object* v___x_1026_; 
v_params_1023_ = lean_ctor_get(v_decl_1017_, 2);
v_type_1024_ = lean_ctor_get(v_decl_1017_, 3);
v_value_1025_ = lean_ctor_get(v_decl_1017_, 4);
lean_inc_ref(v_value_1025_);
lean_inc_ref(v_params_1023_);
lean_inc_ref(v_type_1024_);
v___x_1026_ = l_Lean_Compiler_LCNF_etaExpandCore_x3f(v_type_1024_, v_params_1023_, v_value_1025_, v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_);
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1039_; 
v_a_1027_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1029_ = v___x_1026_;
v_isShared_1030_ = v_isSharedCheck_1039_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1026_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1039_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
if (lean_obj_tag(v_a_1027_) == 1)
{
lean_object* v_val_1031_; lean_object* v_fst_1032_; lean_object* v_snd_1033_; uint8_t v___x_1034_; lean_object* v___x_1035_; 
lean_inc_ref(v_type_1024_);
lean_del_object(v___x_1029_);
v_val_1031_ = lean_ctor_get(v_a_1027_, 0);
lean_inc(v_val_1031_);
lean_dec_ref(v_a_1027_);
v_fst_1032_ = lean_ctor_get(v_val_1031_, 0);
lean_inc(v_fst_1032_);
v_snd_1033_ = lean_ctor_get(v_val_1031_, 1);
lean_inc(v_snd_1033_);
lean_dec(v_val_1031_);
v___x_1034_ = 0;
v___x_1035_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1034_, v_decl_1017_, v_type_1024_, v_fst_1032_, v_snd_1033_, v_a_1019_, v_a_1021_);
return v___x_1035_;
}
else
{
lean_object* v___x_1037_; 
lean_dec(v_a_1027_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 0, v_decl_1017_);
v___x_1037_ = v___x_1029_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_decl_1017_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
else
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1047_; 
lean_dec_ref(v_decl_1017_);
v_a_1040_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1042_ = v___x_1026_;
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1026_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1043_ == 0)
{
v___x_1045_ = v___x_1042_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_a_1040_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand___boxed(lean_object* v_decl_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lean_Compiler_LCNF_FunDecl_etaExpand(v_decl_1048_, v_a_1049_, v_a_1050_, v_a_1051_, v_a_1052_);
lean_dec(v_a_1052_);
lean_dec_ref(v_a_1051_);
lean_dec(v_a_1050_);
lean_dec_ref(v_a_1049_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand(lean_object* v_decl_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_){
_start:
{
lean_object* v_value_1061_; 
v_value_1061_ = lean_ctor_get(v_decl_1055_, 1);
lean_inc_ref(v_value_1061_);
if (lean_obj_tag(v_value_1061_) == 0)
{
lean_object* v_toSignature_1062_; uint8_t v_recursive_1063_; lean_object* v_inlineAttr_x3f_1064_; lean_object* v_code_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1117_; 
v_toSignature_1062_ = lean_ctor_get(v_decl_1055_, 0);
lean_inc_ref(v_toSignature_1062_);
v_recursive_1063_ = lean_ctor_get_uint8(v_decl_1055_, sizeof(void*)*3);
v_inlineAttr_x3f_1064_ = lean_ctor_get(v_decl_1055_, 2);
v_code_1065_ = lean_ctor_get(v_value_1061_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v_value_1061_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1067_ = v_value_1061_;
v_isShared_1068_ = v_isSharedCheck_1117_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_code_1065_);
lean_dec(v_value_1061_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1117_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v_name_1069_; lean_object* v_levelParams_1070_; lean_object* v_type_1071_; lean_object* v_params_1072_; uint8_t v_safe_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1116_; 
v_name_1069_ = lean_ctor_get(v_toSignature_1062_, 0);
v_levelParams_1070_ = lean_ctor_get(v_toSignature_1062_, 1);
v_type_1071_ = lean_ctor_get(v_toSignature_1062_, 2);
v_params_1072_ = lean_ctor_get(v_toSignature_1062_, 3);
v_safe_1073_ = lean_ctor_get_uint8(v_toSignature_1062_, sizeof(void*)*4);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_toSignature_1062_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1075_ = v_toSignature_1062_;
v_isShared_1076_ = v_isSharedCheck_1116_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_params_1072_);
lean_inc(v_type_1071_);
lean_inc(v_levelParams_1070_);
lean_inc(v_name_1069_);
lean_dec(v_toSignature_1062_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1116_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1077_; 
lean_inc_ref(v_type_1071_);
v___x_1077_ = l_Lean_Compiler_LCNF_etaExpandCore_x3f(v_type_1071_, v_params_1072_, v_code_1065_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1107_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1080_ = v___x_1077_;
v_isShared_1081_ = v_isSharedCheck_1107_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1077_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1107_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
if (lean_obj_tag(v_a_1078_) == 1)
{
lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1100_; 
lean_inc(v_inlineAttr_x3f_1064_);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_decl_1055_);
if (v_isSharedCheck_1100_ == 0)
{
lean_object* v_unused_1101_; lean_object* v_unused_1102_; lean_object* v_unused_1103_; 
v_unused_1101_ = lean_ctor_get(v_decl_1055_, 2);
lean_dec(v_unused_1101_);
v_unused_1102_ = lean_ctor_get(v_decl_1055_, 1);
lean_dec(v_unused_1102_);
v_unused_1103_ = lean_ctor_get(v_decl_1055_, 0);
lean_dec(v_unused_1103_);
v___x_1083_ = v_decl_1055_;
v_isShared_1084_ = v_isSharedCheck_1100_;
goto v_resetjp_1082_;
}
else
{
lean_dec(v_decl_1055_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1100_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v_val_1085_; lean_object* v_fst_1086_; lean_object* v_snd_1087_; lean_object* v___x_1089_; 
v_val_1085_ = lean_ctor_get(v_a_1078_, 0);
lean_inc(v_val_1085_);
lean_dec_ref(v_a_1078_);
v_fst_1086_ = lean_ctor_get(v_val_1085_, 0);
lean_inc(v_fst_1086_);
v_snd_1087_ = lean_ctor_get(v_val_1085_, 1);
lean_inc(v_snd_1087_);
lean_dec(v_val_1085_);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 3, v_fst_1086_);
v___x_1089_ = v___x_1075_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_name_1069_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v_levelParams_1070_);
lean_ctor_set(v_reuseFailAlloc_1099_, 2, v_type_1071_);
lean_ctor_set(v_reuseFailAlloc_1099_, 3, v_fst_1086_);
lean_ctor_set_uint8(v_reuseFailAlloc_1099_, sizeof(void*)*4, v_safe_1073_);
v___x_1089_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
lean_object* v___x_1091_; 
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 0, v_snd_1087_);
v___x_1091_ = v___x_1067_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_snd_1087_);
v___x_1091_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
lean_object* v___x_1093_; 
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 1, v___x_1091_);
lean_ctor_set(v___x_1083_, 0, v___x_1089_);
v___x_1093_ = v___x_1083_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v___x_1089_);
lean_ctor_set(v_reuseFailAlloc_1097_, 1, v___x_1091_);
lean_ctor_set(v_reuseFailAlloc_1097_, 2, v_inlineAttr_x3f_1064_);
lean_ctor_set_uint8(v_reuseFailAlloc_1097_, sizeof(void*)*3, v_recursive_1063_);
v___x_1093_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
lean_object* v___x_1095_; 
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 0, v___x_1093_);
v___x_1095_ = v___x_1080_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v___x_1093_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
}
}
else
{
lean_object* v___x_1105_; 
lean_dec(v_a_1078_);
lean_del_object(v___x_1075_);
lean_dec_ref(v_type_1071_);
lean_dec(v_levelParams_1070_);
lean_dec(v_name_1069_);
lean_del_object(v___x_1067_);
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 0, v_decl_1055_);
v___x_1105_ = v___x_1080_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_decl_1055_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1115_; 
lean_del_object(v___x_1075_);
lean_dec_ref(v_type_1071_);
lean_dec(v_levelParams_1070_);
lean_dec(v_name_1069_);
lean_del_object(v___x_1067_);
lean_dec_ref(v_decl_1055_);
v_a_1108_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1110_ = v___x_1077_;
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1077_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1113_; 
if (v_isShared_1111_ == 0)
{
v___x_1113_ = v___x_1110_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1108_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
}
}
else
{
lean_object* v___x_1118_; 
lean_dec_ref(v_value_1061_);
v___x_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1118_, 0, v_decl_1055_);
return v___x_1118_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand___boxed(lean_object* v_decl_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Lean_Compiler_LCNF_Decl_etaExpand(v_decl_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_);
lean_dec(v_a_1123_);
lean_dec_ref(v_a_1122_);
lean_dec(v_a_1121_);
lean_dec_ref(v_a_1120_);
return v_res_1125_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Bind(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM = _init_l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM();
lean_mark_persistent(l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Bind(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Bind(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Bind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Bind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Bind(builtin);
}
#ifdef __cplusplus
}
#endif
