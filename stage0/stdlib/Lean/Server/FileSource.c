// Lean compiler output
// Module: Lean.Server.FileSource
// Imports: public import Lean.Data.Lsp
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
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getArrVal_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceLocation___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceLocation___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceLocation___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceLocation___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceLocation;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentIdentifier___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentIdentifier___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceTextDocumentIdentifier___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceTextDocumentIdentifier___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentIdentifier;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentEdit___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentEdit___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceTextDocumentEdit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceTextDocumentEdit___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentEdit;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentItem___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentItem___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceTextDocumentItem___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceTextDocumentItem___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentItem;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentPositionParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentPositionParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceTextDocumentPositionParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceTextDocumentPositionParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentPositionParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceCompletionParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceCompletionParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceCompletionParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceCompletionParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceCompletionParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceHoverParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDeclarationParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDefinitionParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTypeDefinitionParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceReferenceParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceReferenceParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceReferenceParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceReferenceParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceReferenceParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDocumentHighlightParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDocumentSymbolParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceSemanticTokensParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceSemanticTokensRangeParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceSemanticTokensRangeParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceSemanticTokensRangeParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceSemanticTokensRangeParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceSemanticTokensRangeParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceFoldingRangeParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourcePlainGoalParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourcePlainTermGoalParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcConnectParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcCallParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcCallParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceRpcCallParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceRpcCallParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcCallParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcReleaseParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcReleaseParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceRpcReleaseParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceRpcReleaseParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcReleaseParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcKeepAliveParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcKeepAliveParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceRpcKeepAliveParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceRpcKeepAliveParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcKeepAliveParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceCodeActionParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceCodeActionParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceCodeActionParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceCodeActionParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceCodeActionParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceInlayHintParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceInlayHintParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceInlayHintParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceInlayHintParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceInlayHintParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceSignatureHelpParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceSignatureHelpParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceSignatureHelpParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceSignatureHelpParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceSignatureHelpParams;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDocumentColorParams___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDocumentColorParams___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceDocumentColorParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceDocumentColorParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDocumentColorParams;
static lean_once_cell_t l_panic___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__0;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__1;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__2;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__3;
static lean_once_cell_t l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__4;
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_getFileSource_x21(lean_object*);
static lean_once_cell_t l_Lean_Lsp_instFileSourceCompletionItem___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_instFileSourceCompletionItem___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceCompletionItem;
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceLocation___lam__0(lean_object* v_l_1_){
_start:
{
lean_object* v_uri_2_; 
v_uri_2_ = lean_ctor_get(v_l_1_, 0);
lean_inc_ref(v_uri_2_);
return v_uri_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceLocation___lam__0___boxed(lean_object* v_l_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Lsp_instFileSourceLocation___lam__0(v_l_3_);
lean_dec_ref(v_l_3_);
return v_res_4_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceLocation___closed__0(void){
_start:
{
lean_object* v___f_5_; 
v___f_5_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceLocation___lam__0___boxed), 1, 0);
return v___f_5_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceLocation(void){
_start:
{
lean_object* v___f_6_; 
v___f_6_ = lean_obj_once(&l_Lean_Lsp_instFileSourceLocation___closed__0, &l_Lean_Lsp_instFileSourceLocation___closed__0_once, _init_l_Lean_Lsp_instFileSourceLocation___closed__0);
return v___f_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentIdentifier___lam__0(lean_object* v_i_7_){
_start:
{
lean_inc_ref(v_i_7_);
return v_i_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentIdentifier___lam__0___boxed(lean_object* v_i_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Lsp_instFileSourceTextDocumentIdentifier___lam__0(v_i_8_);
lean_dec_ref(v_i_8_);
return v_res_9_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceTextDocumentIdentifier___closed__0(void){
_start:
{
lean_object* v___f_10_; 
v___f_10_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceTextDocumentIdentifier___lam__0___boxed), 1, 0);
return v___f_10_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceTextDocumentIdentifier(void){
_start:
{
lean_object* v___f_11_; 
v___f_11_ = lean_obj_once(&l_Lean_Lsp_instFileSourceTextDocumentIdentifier___closed__0, &l_Lean_Lsp_instFileSourceTextDocumentIdentifier___closed__0_once, _init_l_Lean_Lsp_instFileSourceTextDocumentIdentifier___closed__0);
return v___f_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier___lam__0(lean_object* v_i_12_){
_start:
{
lean_object* v_uri_13_; 
v_uri_13_ = lean_ctor_get(v_i_12_, 0);
lean_inc_ref(v_uri_13_);
return v_uri_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier___lam__0___boxed(lean_object* v_i_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier___lam__0(v_i_14_);
lean_dec_ref(v_i_14_);
return v_res_15_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier___closed__0(void){
_start:
{
lean_object* v___f_16_; 
v___f_16_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier___lam__0___boxed), 1, 0);
return v___f_16_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier(void){
_start:
{
lean_object* v___f_17_; 
v___f_17_ = lean_obj_once(&l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier___closed__0, &l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier___closed__0_once, _init_l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier___closed__0);
return v___f_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentEdit___lam__0(lean_object* v_e_18_){
_start:
{
lean_object* v_textDocument_19_; lean_object* v_uri_20_; 
v_textDocument_19_ = lean_ctor_get(v_e_18_, 0);
v_uri_20_ = lean_ctor_get(v_textDocument_19_, 0);
lean_inc_ref(v_uri_20_);
return v_uri_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentEdit___lam__0___boxed(lean_object* v_e_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Lsp_instFileSourceTextDocumentEdit___lam__0(v_e_21_);
lean_dec_ref(v_e_21_);
return v_res_22_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceTextDocumentEdit___closed__0(void){
_start:
{
lean_object* v___f_23_; 
v___f_23_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceTextDocumentEdit___lam__0___boxed), 1, 0);
return v___f_23_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceTextDocumentEdit(void){
_start:
{
lean_object* v___f_24_; 
v___f_24_ = lean_obj_once(&l_Lean_Lsp_instFileSourceTextDocumentEdit___closed__0, &l_Lean_Lsp_instFileSourceTextDocumentEdit___closed__0_once, _init_l_Lean_Lsp_instFileSourceTextDocumentEdit___closed__0);
return v___f_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentItem___lam__0(lean_object* v_i_25_){
_start:
{
lean_object* v_uri_26_; 
v_uri_26_ = lean_ctor_get(v_i_25_, 0);
lean_inc_ref(v_uri_26_);
return v_uri_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentItem___lam__0___boxed(lean_object* v_i_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Lsp_instFileSourceTextDocumentItem___lam__0(v_i_27_);
lean_dec_ref(v_i_27_);
return v_res_28_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceTextDocumentItem___closed__0(void){
_start:
{
lean_object* v___f_29_; 
v___f_29_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceTextDocumentItem___lam__0___boxed), 1, 0);
return v___f_29_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceTextDocumentItem(void){
_start:
{
lean_object* v___f_30_; 
v___f_30_ = lean_obj_once(&l_Lean_Lsp_instFileSourceTextDocumentItem___closed__0, &l_Lean_Lsp_instFileSourceTextDocumentItem___closed__0_once, _init_l_Lean_Lsp_instFileSourceTextDocumentItem___closed__0);
return v___f_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentPositionParams___lam__0(lean_object* v_p_31_){
_start:
{
lean_object* v_textDocument_32_; 
v_textDocument_32_ = lean_ctor_get(v_p_31_, 0);
lean_inc_ref(v_textDocument_32_);
return v_textDocument_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceTextDocumentPositionParams___lam__0___boxed(lean_object* v_p_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Lean_Lsp_instFileSourceTextDocumentPositionParams___lam__0(v_p_33_);
lean_dec_ref(v_p_33_);
return v_res_34_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceTextDocumentPositionParams___closed__0(void){
_start:
{
lean_object* v___f_35_; 
v___f_35_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceTextDocumentPositionParams___lam__0___boxed), 1, 0);
return v___f_35_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceTextDocumentPositionParams(void){
_start:
{
lean_object* v___f_36_; 
v___f_36_ = lean_obj_once(&l_Lean_Lsp_instFileSourceTextDocumentPositionParams___closed__0, &l_Lean_Lsp_instFileSourceTextDocumentPositionParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceTextDocumentPositionParams___closed__0);
return v___f_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams___lam__0(lean_object* v_p_37_){
_start:
{
lean_object* v_uri_38_; 
v_uri_38_ = lean_ctor_get(v_p_37_, 0);
lean_inc_ref(v_uri_38_);
return v_uri_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams___lam__0___boxed(lean_object* v_p_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams___lam__0(v_p_39_);
lean_dec_ref(v_p_39_);
return v_res_40_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams___closed__0(void){
_start:
{
lean_object* v___f_41_; 
v___f_41_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams___lam__0___boxed), 1, 0);
return v___f_41_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams(void){
_start:
{
lean_object* v___f_42_; 
v___f_42_ = lean_obj_once(&l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams___closed__0, &l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams___closed__0);
return v___f_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams___lam__0(lean_object* v_p_43_){
_start:
{
lean_object* v_textDocument_44_; lean_object* v_uri_45_; 
v_textDocument_44_ = lean_ctor_get(v_p_43_, 0);
v_uri_45_ = lean_ctor_get(v_textDocument_44_, 0);
lean_inc_ref(v_uri_45_);
return v_uri_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams___lam__0___boxed(lean_object* v_p_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams___lam__0(v_p_46_);
lean_dec_ref(v_p_46_);
return v_res_47_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams___closed__0(void){
_start:
{
lean_object* v___f_48_; 
v___f_48_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams___lam__0___boxed), 1, 0);
return v___f_48_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams(void){
_start:
{
lean_object* v___f_49_; 
v___f_49_ = lean_obj_once(&l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams___closed__0, &l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams___closed__0);
return v___f_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams___lam__0(lean_object* v_p_50_){
_start:
{
lean_object* v_textDocument_51_; 
v_textDocument_51_ = lean_ctor_get(v_p_50_, 0);
lean_inc_ref(v_textDocument_51_);
return v_textDocument_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams___lam__0___boxed(lean_object* v_p_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams___lam__0(v_p_52_);
lean_dec_ref(v_p_52_);
return v_res_53_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams___closed__0(void){
_start:
{
lean_object* v___f_54_; 
v___f_54_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams___lam__0___boxed), 1, 0);
return v___f_54_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams(void){
_start:
{
lean_object* v___f_55_; 
v___f_55_ = lean_obj_once(&l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams___closed__0, &l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams___closed__0);
return v___f_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___lam__0(lean_object* v_p_56_){
_start:
{
lean_inc_ref(v_p_56_);
return v_p_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___lam__0___boxed(lean_object* v_p_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___lam__0(v_p_57_);
lean_dec_ref(v_p_57_);
return v_res_58_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0(void){
_start:
{
lean_object* v___f_59_; 
v___f_59_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___lam__0___boxed), 1, 0);
return v___f_59_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams(void){
_start:
{
lean_object* v___f_60_; 
v___f_60_ = lean_obj_once(&l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0, &l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0);
return v___f_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceCompletionParams___lam__0(lean_object* v_h_61_){
_start:
{
lean_object* v_textDocument_62_; 
v_textDocument_62_ = lean_ctor_get(v_h_61_, 0);
lean_inc_ref(v_textDocument_62_);
return v_textDocument_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceCompletionParams___lam__0___boxed(lean_object* v_h_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_Lsp_instFileSourceCompletionParams___lam__0(v_h_63_);
lean_dec_ref(v_h_63_);
return v_res_64_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceCompletionParams___closed__0(void){
_start:
{
lean_object* v___f_65_; 
v___f_65_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceCompletionParams___lam__0___boxed), 1, 0);
return v___f_65_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceCompletionParams(void){
_start:
{
lean_object* v___f_66_; 
v___f_66_ = lean_obj_once(&l_Lean_Lsp_instFileSourceCompletionParams___closed__0, &l_Lean_Lsp_instFileSourceCompletionParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceCompletionParams___closed__0);
return v___f_66_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceHoverParams(void){
_start:
{
lean_object* v___f_67_; 
v___f_67_ = lean_obj_once(&l_Lean_Lsp_instFileSourceCompletionParams___closed__0, &l_Lean_Lsp_instFileSourceCompletionParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceCompletionParams___closed__0);
return v___f_67_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDeclarationParams(void){
_start:
{
lean_object* v___f_68_; 
v___f_68_ = lean_obj_once(&l_Lean_Lsp_instFileSourceCompletionParams___closed__0, &l_Lean_Lsp_instFileSourceCompletionParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceCompletionParams___closed__0);
return v___f_68_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDefinitionParams(void){
_start:
{
lean_object* v___f_69_; 
v___f_69_ = lean_obj_once(&l_Lean_Lsp_instFileSourceCompletionParams___closed__0, &l_Lean_Lsp_instFileSourceCompletionParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceCompletionParams___closed__0);
return v___f_69_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceTypeDefinitionParams(void){
_start:
{
lean_object* v___f_70_; 
v___f_70_ = lean_obj_once(&l_Lean_Lsp_instFileSourceCompletionParams___closed__0, &l_Lean_Lsp_instFileSourceCompletionParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceCompletionParams___closed__0);
return v___f_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceReferenceParams___lam__0(lean_object* v_h_71_){
_start:
{
lean_object* v_toTextDocumentPositionParams_72_; lean_object* v_textDocument_73_; 
v_toTextDocumentPositionParams_72_ = lean_ctor_get(v_h_71_, 0);
v_textDocument_73_ = lean_ctor_get(v_toTextDocumentPositionParams_72_, 0);
lean_inc_ref(v_textDocument_73_);
return v_textDocument_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceReferenceParams___lam__0___boxed(lean_object* v_h_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_Lsp_instFileSourceReferenceParams___lam__0(v_h_74_);
lean_dec_ref(v_h_74_);
return v_res_75_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceReferenceParams___closed__0(void){
_start:
{
lean_object* v___f_76_; 
v___f_76_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceReferenceParams___lam__0___boxed), 1, 0);
return v___f_76_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceReferenceParams(void){
_start:
{
lean_object* v___f_77_; 
v___f_77_ = lean_obj_once(&l_Lean_Lsp_instFileSourceReferenceParams___closed__0, &l_Lean_Lsp_instFileSourceReferenceParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceReferenceParams___closed__0);
return v___f_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams___lam__0(lean_object* v_p_78_){
_start:
{
lean_object* v_uri_79_; 
v_uri_79_ = lean_ctor_get(v_p_78_, 0);
lean_inc_ref(v_uri_79_);
return v_uri_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams___lam__0___boxed(lean_object* v_p_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams___lam__0(v_p_80_);
lean_dec_ref(v_p_80_);
return v_res_81_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams___closed__0(void){
_start:
{
lean_object* v___f_82_; 
v___f_82_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams___lam__0___boxed), 1, 0);
return v___f_82_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams(void){
_start:
{
lean_object* v___f_83_; 
v___f_83_ = lean_obj_once(&l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams___closed__0, &l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams___closed__0);
return v___f_83_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDocumentHighlightParams(void){
_start:
{
lean_object* v___f_84_; 
v___f_84_ = lean_obj_once(&l_Lean_Lsp_instFileSourceCompletionParams___closed__0, &l_Lean_Lsp_instFileSourceCompletionParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceCompletionParams___closed__0);
return v___f_84_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDocumentSymbolParams(void){
_start:
{
lean_object* v___f_85_; 
v___f_85_ = lean_obj_once(&l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0, &l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0);
return v___f_85_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceSemanticTokensParams(void){
_start:
{
lean_object* v___f_86_; 
v___f_86_ = lean_obj_once(&l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0, &l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0);
return v___f_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceSemanticTokensRangeParams___lam__0(lean_object* v_p_87_){
_start:
{
lean_object* v_textDocument_88_; 
v_textDocument_88_ = lean_ctor_get(v_p_87_, 0);
lean_inc_ref(v_textDocument_88_);
return v_textDocument_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceSemanticTokensRangeParams___lam__0___boxed(lean_object* v_p_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Lsp_instFileSourceSemanticTokensRangeParams___lam__0(v_p_89_);
lean_dec_ref(v_p_89_);
return v_res_90_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceSemanticTokensRangeParams___closed__0(void){
_start:
{
lean_object* v___f_91_; 
v___f_91_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceSemanticTokensRangeParams___lam__0___boxed), 1, 0);
return v___f_91_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceSemanticTokensRangeParams(void){
_start:
{
lean_object* v___f_92_; 
v___f_92_ = lean_obj_once(&l_Lean_Lsp_instFileSourceSemanticTokensRangeParams___closed__0, &l_Lean_Lsp_instFileSourceSemanticTokensRangeParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceSemanticTokensRangeParams___closed__0);
return v___f_92_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceFoldingRangeParams(void){
_start:
{
lean_object* v___f_93_; 
v___f_93_ = lean_obj_once(&l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0, &l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0);
return v___f_93_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourcePlainGoalParams(void){
_start:
{
lean_object* v___f_94_; 
v___f_94_ = lean_obj_once(&l_Lean_Lsp_instFileSourceTextDocumentPositionParams___closed__0, &l_Lean_Lsp_instFileSourceTextDocumentPositionParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceTextDocumentPositionParams___closed__0);
return v___f_94_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourcePlainTermGoalParams(void){
_start:
{
lean_object* v___f_95_; 
v___f_95_ = lean_obj_once(&l_Lean_Lsp_instFileSourceTextDocumentPositionParams___closed__0, &l_Lean_Lsp_instFileSourceTextDocumentPositionParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceTextDocumentPositionParams___closed__0);
return v___f_95_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceRpcConnectParams(void){
_start:
{
lean_object* v___f_96_; 
v___f_96_ = lean_obj_once(&l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0, &l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams___closed__0);
return v___f_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcCallParams___lam__0(lean_object* v_p_97_){
_start:
{
lean_object* v_toTextDocumentPositionParams_98_; lean_object* v_textDocument_99_; 
v_toTextDocumentPositionParams_98_ = lean_ctor_get(v_p_97_, 0);
v_textDocument_99_ = lean_ctor_get(v_toTextDocumentPositionParams_98_, 0);
lean_inc_ref(v_textDocument_99_);
return v_textDocument_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcCallParams___lam__0___boxed(lean_object* v_p_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_Lsp_instFileSourceRpcCallParams___lam__0(v_p_100_);
lean_dec_ref(v_p_100_);
return v_res_101_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceRpcCallParams___closed__0(void){
_start:
{
lean_object* v___f_102_; 
v___f_102_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceRpcCallParams___lam__0___boxed), 1, 0);
return v___f_102_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceRpcCallParams(void){
_start:
{
lean_object* v___f_103_; 
v___f_103_ = lean_obj_once(&l_Lean_Lsp_instFileSourceRpcCallParams___closed__0, &l_Lean_Lsp_instFileSourceRpcCallParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceRpcCallParams___closed__0);
return v___f_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcReleaseParams___lam__0(lean_object* v_p_104_){
_start:
{
lean_object* v_uri_105_; 
v_uri_105_ = lean_ctor_get(v_p_104_, 0);
lean_inc_ref(v_uri_105_);
return v_uri_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcReleaseParams___lam__0___boxed(lean_object* v_p_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lean_Lsp_instFileSourceRpcReleaseParams___lam__0(v_p_106_);
lean_dec_ref(v_p_106_);
return v_res_107_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceRpcReleaseParams___closed__0(void){
_start:
{
lean_object* v___f_108_; 
v___f_108_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceRpcReleaseParams___lam__0___boxed), 1, 0);
return v___f_108_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceRpcReleaseParams(void){
_start:
{
lean_object* v___f_109_; 
v___f_109_ = lean_obj_once(&l_Lean_Lsp_instFileSourceRpcReleaseParams___closed__0, &l_Lean_Lsp_instFileSourceRpcReleaseParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceRpcReleaseParams___closed__0);
return v___f_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcKeepAliveParams___lam__0(lean_object* v_p_110_){
_start:
{
lean_object* v_uri_111_; 
v_uri_111_ = lean_ctor_get(v_p_110_, 0);
lean_inc_ref(v_uri_111_);
return v_uri_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceRpcKeepAliveParams___lam__0___boxed(lean_object* v_p_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_Lsp_instFileSourceRpcKeepAliveParams___lam__0(v_p_112_);
lean_dec_ref(v_p_112_);
return v_res_113_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceRpcKeepAliveParams___closed__0(void){
_start:
{
lean_object* v___f_114_; 
v___f_114_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceRpcKeepAliveParams___lam__0___boxed), 1, 0);
return v___f_114_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceRpcKeepAliveParams(void){
_start:
{
lean_object* v___f_115_; 
v___f_115_ = lean_obj_once(&l_Lean_Lsp_instFileSourceRpcKeepAliveParams___closed__0, &l_Lean_Lsp_instFileSourceRpcKeepAliveParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceRpcKeepAliveParams___closed__0);
return v___f_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceCodeActionParams___lam__0(lean_object* v_p_116_){
_start:
{
lean_object* v_textDocument_117_; 
v_textDocument_117_ = lean_ctor_get(v_p_116_, 2);
lean_inc_ref(v_textDocument_117_);
return v_textDocument_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceCodeActionParams___lam__0___boxed(lean_object* v_p_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lean_Lsp_instFileSourceCodeActionParams___lam__0(v_p_118_);
lean_dec_ref(v_p_118_);
return v_res_119_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceCodeActionParams___closed__0(void){
_start:
{
lean_object* v___f_120_; 
v___f_120_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceCodeActionParams___lam__0___boxed), 1, 0);
return v___f_120_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceCodeActionParams(void){
_start:
{
lean_object* v___f_121_; 
v___f_121_ = lean_obj_once(&l_Lean_Lsp_instFileSourceCodeActionParams___closed__0, &l_Lean_Lsp_instFileSourceCodeActionParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceCodeActionParams___closed__0);
return v___f_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceInlayHintParams___lam__0(lean_object* v_p_122_){
_start:
{
lean_object* v_textDocument_123_; 
v_textDocument_123_ = lean_ctor_get(v_p_122_, 1);
lean_inc_ref(v_textDocument_123_);
return v_textDocument_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceInlayHintParams___lam__0___boxed(lean_object* v_p_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lean_Lsp_instFileSourceInlayHintParams___lam__0(v_p_124_);
lean_dec_ref(v_p_124_);
return v_res_125_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceInlayHintParams___closed__0(void){
_start:
{
lean_object* v___f_126_; 
v___f_126_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceInlayHintParams___lam__0___boxed), 1, 0);
return v___f_126_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceInlayHintParams(void){
_start:
{
lean_object* v___f_127_; 
v___f_127_ = lean_obj_once(&l_Lean_Lsp_instFileSourceInlayHintParams___closed__0, &l_Lean_Lsp_instFileSourceInlayHintParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceInlayHintParams___closed__0);
return v___f_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceSignatureHelpParams___lam__0(lean_object* v_p_128_){
_start:
{
lean_object* v_toTextDocumentPositionParams_129_; lean_object* v_textDocument_130_; 
v_toTextDocumentPositionParams_129_ = lean_ctor_get(v_p_128_, 0);
v_textDocument_130_ = lean_ctor_get(v_toTextDocumentPositionParams_129_, 0);
lean_inc_ref(v_textDocument_130_);
return v_textDocument_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceSignatureHelpParams___lam__0___boxed(lean_object* v_p_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lean_Lsp_instFileSourceSignatureHelpParams___lam__0(v_p_131_);
lean_dec_ref(v_p_131_);
return v_res_132_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceSignatureHelpParams___closed__0(void){
_start:
{
lean_object* v___f_133_; 
v___f_133_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceSignatureHelpParams___lam__0___boxed), 1, 0);
return v___f_133_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceSignatureHelpParams(void){
_start:
{
lean_object* v___f_134_; 
v___f_134_ = lean_obj_once(&l_Lean_Lsp_instFileSourceSignatureHelpParams___closed__0, &l_Lean_Lsp_instFileSourceSignatureHelpParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceSignatureHelpParams___closed__0);
return v___f_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDocumentColorParams___lam__0(lean_object* v_p_135_){
_start:
{
lean_object* v_textDocument_136_; 
v_textDocument_136_ = lean_ctor_get(v_p_135_, 2);
lean_inc_ref(v_textDocument_136_);
return v_textDocument_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_instFileSourceDocumentColorParams___lam__0___boxed(lean_object* v_p_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_Lsp_instFileSourceDocumentColorParams___lam__0(v_p_137_);
lean_dec_ref(v_p_137_);
return v_res_138_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDocumentColorParams___closed__0(void){
_start:
{
lean_object* v___f_139_; 
v___f_139_ = lean_alloc_closure((void*)(l_Lean_Lsp_instFileSourceDocumentColorParams___lam__0___boxed), 1, 0);
return v___f_139_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceDocumentColorParams(void){
_start:
{
lean_object* v___f_140_; 
v___f_140_ = lean_obj_once(&l_Lean_Lsp_instFileSourceDocumentColorParams___closed__0, &l_Lean_Lsp_instFileSourceDocumentColorParams___closed__0_once, _init_l_Lean_Lsp_instFileSourceDocumentColorParams___closed__0);
return v___f_140_;
}
}
static lean_object* _init_l_panic___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__0___closed__0(void){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_mk_string_unchecked("", 0, 0);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__0(lean_object* v_msg_142_){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_obj_once(&l_panic___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__0___closed__0, &l_panic___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__0___closed__0_once, _init_l_panic___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__0___closed__0);
v___x_144_ = lean_panic_fn_borrowed(v___x_143_, v_msg_142_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__1(lean_object* v_j_145_, lean_object* v_k_146_){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = l_Lean_Json_getObjValD(v_j_145_, v_k_146_);
v___x_148_ = l_Lean_Json_getStr_x3f(v___x_147_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__1___boxed(lean_object* v_j_149_, lean_object* v_k_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__1(v_j_149_, v_k_150_);
lean_dec_ref(v_k_150_);
return v_res_151_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__0(void){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lean_mk_string_unchecked("Lean.Server.FileSource", 22, 22);
return v___x_152_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__1(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_mk_string_unchecked("Lean.Lsp.CompletionItem.getFileSource!", 38, 38);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__2(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_mk_string_unchecked("uri", 3, 3);
return v___x_154_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__3(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_mk_string_unchecked("unexpected completion item data: ", 33, 33);
return v___x_155_;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__4(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_mk_string_unchecked("no data param on completion item ", 33, 33);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_CompletionItem_getFileSource_x21(lean_object* v_item_157_){
_start:
{
lean_object* v_a_159_; lean_object* v___y_167_; lean_object* v_data_x3f_170_; 
v_data_x3f_170_ = lean_ctor_get(v_item_157_, 6);
if (lean_obj_tag(v_data_x3f_170_) == 1)
{
lean_object* v_val_171_; 
lean_inc_ref(v_data_x3f_170_);
lean_dec_ref(v_item_157_);
v_val_171_ = lean_ctor_get(v_data_x3f_170_, 0);
lean_inc(v_val_171_);
lean_dec_ref(v_data_x3f_170_);
switch(lean_obj_tag(v_val_171_))
{
case 5:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__2, &l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__2_once, _init_l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__2);
v___x_173_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__1(v_val_171_, v___x_172_);
v___y_167_ = v___x_173_;
goto v___jp_166_;
}
case 4:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_unsigned_to_nat(0u);
v___x_175_ = l_Lean_Json_getArrVal_x3f(v_val_171_, v___x_174_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v_a_176_; 
v_a_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_a_176_);
lean_dec_ref(v___x_175_);
v_a_159_ = v_a_176_;
goto v___jp_158_;
}
else
{
lean_object* v_a_177_; lean_object* v___x_178_; 
v_a_177_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_a_177_);
lean_dec_ref(v___x_175_);
v___x_178_ = l_Lean_Json_getStr_x3f(v_a_177_);
v___y_167_ = v___x_178_;
goto v___jp_166_;
}
}
default: 
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_179_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__3, &l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__3_once, _init_l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__3);
v___x_180_ = lean_unsigned_to_nat(80u);
v___x_181_ = l_Lean_Json_pretty(v_val_171_, v___x_180_);
v___x_182_ = lean_string_append(v___x_179_, v___x_181_);
lean_dec_ref(v___x_181_);
v_a_159_ = v___x_182_;
goto v___jp_158_;
}
}
}
else
{
lean_object* v_label_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v_label_183_ = lean_ctor_get(v_item_157_, 0);
lean_inc_ref(v_label_183_);
lean_dec_ref(v_item_157_);
v___x_184_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__4, &l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__4_once, _init_l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__4);
v___x_185_ = lean_string_append(v___x_184_, v_label_183_);
lean_dec_ref(v_label_183_);
v_a_159_ = v___x_185_;
goto v___jp_158_;
}
v___jp_158_:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_160_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__0, &l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__0_once, _init_l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__0);
v___x_161_ = lean_obj_once(&l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__1, &l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__1_once, _init_l_Lean_Lsp_CompletionItem_getFileSource_x21___closed__1);
v___x_162_ = lean_unsigned_to_nat(144u);
v___x_163_ = lean_unsigned_to_nat(22u);
v___x_164_ = l_mkPanicMessageWithDecl(v___x_160_, v___x_161_, v___x_162_, v___x_163_, v_a_159_);
lean_dec_ref(v_a_159_);
v___x_165_ = l_panic___at___00Lean_Lsp_CompletionItem_getFileSource_x21_spec__0(v___x_164_);
return v___x_165_;
}
v___jp_166_:
{
if (lean_obj_tag(v___y_167_) == 0)
{
lean_object* v_a_168_; 
v_a_168_ = lean_ctor_get(v___y_167_, 0);
lean_inc(v_a_168_);
lean_dec_ref(v___y_167_);
v_a_159_ = v_a_168_;
goto v___jp_158_;
}
else
{
lean_object* v_a_169_; 
v_a_169_ = lean_ctor_get(v___y_167_, 0);
lean_inc(v_a_169_);
lean_dec_ref(v___y_167_);
return v_a_169_;
}
}
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceCompletionItem___closed__0(void){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = lean_alloc_closure((void*)(l_Lean_Lsp_CompletionItem_getFileSource_x21), 1, 0);
return v___x_186_;
}
}
static lean_object* _init_l_Lean_Lsp_instFileSourceCompletionItem(void){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = lean_obj_once(&l_Lean_Lsp_instFileSourceCompletionItem___closed__0, &l_Lean_Lsp_instFileSourceCompletionItem___closed__0_once, _init_l_Lean_Lsp_instFileSourceCompletionItem___closed__0);
return v___x_187_;
}
}
lean_object* runtime_initialize_Lean_Data_Lsp(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_FileSource(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Data_Lsp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Lsp_instFileSourceLocation = _init_l_Lean_Lsp_instFileSourceLocation();
lean_mark_persistent(l_Lean_Lsp_instFileSourceLocation);
l_Lean_Lsp_instFileSourceTextDocumentIdentifier = _init_l_Lean_Lsp_instFileSourceTextDocumentIdentifier();
lean_mark_persistent(l_Lean_Lsp_instFileSourceTextDocumentIdentifier);
l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier = _init_l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier();
lean_mark_persistent(l_Lean_Lsp_instFileSourceVersionedTextDocumentIdentifier);
l_Lean_Lsp_instFileSourceTextDocumentEdit = _init_l_Lean_Lsp_instFileSourceTextDocumentEdit();
lean_mark_persistent(l_Lean_Lsp_instFileSourceTextDocumentEdit);
l_Lean_Lsp_instFileSourceTextDocumentItem = _init_l_Lean_Lsp_instFileSourceTextDocumentItem();
lean_mark_persistent(l_Lean_Lsp_instFileSourceTextDocumentItem);
l_Lean_Lsp_instFileSourceTextDocumentPositionParams = _init_l_Lean_Lsp_instFileSourceTextDocumentPositionParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceTextDocumentPositionParams);
l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams = _init_l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceDidOpenTextDocumentParams);
l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams = _init_l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceDidChangeTextDocumentParams);
l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams = _init_l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceDidSaveTextDocumentParams);
l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams = _init_l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceDidCloseTextDocumentParams);
l_Lean_Lsp_instFileSourceCompletionParams = _init_l_Lean_Lsp_instFileSourceCompletionParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceCompletionParams);
l_Lean_Lsp_instFileSourceHoverParams = _init_l_Lean_Lsp_instFileSourceHoverParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceHoverParams);
l_Lean_Lsp_instFileSourceDeclarationParams = _init_l_Lean_Lsp_instFileSourceDeclarationParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceDeclarationParams);
l_Lean_Lsp_instFileSourceDefinitionParams = _init_l_Lean_Lsp_instFileSourceDefinitionParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceDefinitionParams);
l_Lean_Lsp_instFileSourceTypeDefinitionParams = _init_l_Lean_Lsp_instFileSourceTypeDefinitionParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceTypeDefinitionParams);
l_Lean_Lsp_instFileSourceReferenceParams = _init_l_Lean_Lsp_instFileSourceReferenceParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceReferenceParams);
l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams = _init_l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceWaitForDiagnosticsParams);
l_Lean_Lsp_instFileSourceDocumentHighlightParams = _init_l_Lean_Lsp_instFileSourceDocumentHighlightParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceDocumentHighlightParams);
l_Lean_Lsp_instFileSourceDocumentSymbolParams = _init_l_Lean_Lsp_instFileSourceDocumentSymbolParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceDocumentSymbolParams);
l_Lean_Lsp_instFileSourceSemanticTokensParams = _init_l_Lean_Lsp_instFileSourceSemanticTokensParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceSemanticTokensParams);
l_Lean_Lsp_instFileSourceSemanticTokensRangeParams = _init_l_Lean_Lsp_instFileSourceSemanticTokensRangeParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceSemanticTokensRangeParams);
l_Lean_Lsp_instFileSourceFoldingRangeParams = _init_l_Lean_Lsp_instFileSourceFoldingRangeParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceFoldingRangeParams);
l_Lean_Lsp_instFileSourcePlainGoalParams = _init_l_Lean_Lsp_instFileSourcePlainGoalParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourcePlainGoalParams);
l_Lean_Lsp_instFileSourcePlainTermGoalParams = _init_l_Lean_Lsp_instFileSourcePlainTermGoalParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourcePlainTermGoalParams);
l_Lean_Lsp_instFileSourceRpcConnectParams = _init_l_Lean_Lsp_instFileSourceRpcConnectParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceRpcConnectParams);
l_Lean_Lsp_instFileSourceRpcCallParams = _init_l_Lean_Lsp_instFileSourceRpcCallParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceRpcCallParams);
l_Lean_Lsp_instFileSourceRpcReleaseParams = _init_l_Lean_Lsp_instFileSourceRpcReleaseParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceRpcReleaseParams);
l_Lean_Lsp_instFileSourceRpcKeepAliveParams = _init_l_Lean_Lsp_instFileSourceRpcKeepAliveParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceRpcKeepAliveParams);
l_Lean_Lsp_instFileSourceCodeActionParams = _init_l_Lean_Lsp_instFileSourceCodeActionParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceCodeActionParams);
l_Lean_Lsp_instFileSourceInlayHintParams = _init_l_Lean_Lsp_instFileSourceInlayHintParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceInlayHintParams);
l_Lean_Lsp_instFileSourceSignatureHelpParams = _init_l_Lean_Lsp_instFileSourceSignatureHelpParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceSignatureHelpParams);
l_Lean_Lsp_instFileSourceDocumentColorParams = _init_l_Lean_Lsp_instFileSourceDocumentColorParams();
lean_mark_persistent(l_Lean_Lsp_instFileSourceDocumentColorParams);
l_Lean_Lsp_instFileSourceCompletionItem = _init_l_Lean_Lsp_instFileSourceCompletionItem();
lean_mark_persistent(l_Lean_Lsp_instFileSourceCompletionItem);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_FileSource(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Lsp(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_FileSource(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Lsp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_FileSource(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_FileSource(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_FileSource(builtin);
}
#ifdef __cplusplus
}
#endif
