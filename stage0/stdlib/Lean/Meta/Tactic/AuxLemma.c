// Lean compiler output
// Module: Lean.Meta.Tactic.AuxLemma
// Imports: public import Lean.AddDecl public import Lean.DefEqAttrib
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_EnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_inferDefEqAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_defeqAttr;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_EnvExtension_asyncMayModify___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_asyncPrefix_x3f(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_DeclNameGenerator_mkUniqueName(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_instBEqAuxLemmaKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqAuxLemmaKey_beq___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instBEqAuxLemmaKey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instBEqAuxLemmaKey___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqAuxLemmaKey;
LEAN_EXPORT uint64_t l_Lean_Meta_instHashableAuxLemmaKey_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instHashableAuxLemmaKey_hash___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_instHashableAuxLemmaKey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instHashableAuxLemmaKey___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instHashableAuxLemmaKey;
static lean_once_cell_t l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedAuxLemmas_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedAuxLemmas;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_auxLemmasExt;
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxLemma___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__3;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__4;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__2;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__3;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__4;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__0;
static lean_once_cell_t l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__1;
static lean_once_cell_t l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__2;
static lean_once_cell_t l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__4___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkAuxLemma___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkAuxLemma___closed__0;
static lean_once_cell_t l_Lean_Meta_mkAuxLemma___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkAuxLemma___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxLemma(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_instBEqAuxLemmaKey_beq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_type_3_; uint8_t v_isPrivate_4_; uint8_t v_defeq_5_; lean_object* v_type_6_; uint8_t v_isPrivate_7_; uint8_t v_defeq_8_; uint8_t v___y_10_; uint8_t v___x_11_; 
v_type_3_ = lean_ctor_get(v_x_1_, 0);
v_isPrivate_4_ = lean_ctor_get_uint8(v_x_1_, sizeof(void*)*1);
v_defeq_5_ = lean_ctor_get_uint8(v_x_1_, sizeof(void*)*1 + 1);
v_type_6_ = lean_ctor_get(v_x_2_, 0);
v_isPrivate_7_ = lean_ctor_get_uint8(v_x_2_, sizeof(void*)*1);
v_defeq_8_ = lean_ctor_get_uint8(v_x_2_, sizeof(void*)*1 + 1);
v___x_11_ = lean_expr_eqv(v_type_3_, v_type_6_);
if (v___x_11_ == 0)
{
return v___x_11_;
}
else
{
if (v_isPrivate_4_ == 0)
{
if (v_isPrivate_7_ == 0)
{
v___y_10_ = v___x_11_;
goto v___jp_9_;
}
else
{
return v_isPrivate_4_;
}
}
else
{
v___y_10_ = v_isPrivate_7_;
goto v___jp_9_;
}
}
v___jp_9_:
{
if (v___y_10_ == 0)
{
return v___y_10_;
}
else
{
if (v_defeq_5_ == 0)
{
if (v_defeq_8_ == 0)
{
return v___y_10_;
}
else
{
return v_defeq_5_;
}
}
else
{
return v_defeq_8_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instBEqAuxLemmaKey_beq___boxed(lean_object* v_x_12_, lean_object* v_x_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l_Lean_Meta_instBEqAuxLemmaKey_beq(v_x_12_, v_x_13_);
lean_dec_ref(v_x_13_);
lean_dec_ref(v_x_12_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
static lean_object* _init_l_Lean_Meta_instBEqAuxLemmaKey___closed__0(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_alloc_closure((void*)(l_Lean_Meta_instBEqAuxLemmaKey_beq___boxed), 2, 0);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_Meta_instBEqAuxLemmaKey(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_obj_once(&l_Lean_Meta_instBEqAuxLemmaKey___closed__0, &l_Lean_Meta_instBEqAuxLemmaKey___closed__0_once, _init_l_Lean_Meta_instBEqAuxLemmaKey___closed__0);
return v___x_17_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_instHashableAuxLemmaKey_hash(lean_object* v_x_18_){
_start:
{
lean_object* v_type_19_; uint8_t v_isPrivate_20_; uint8_t v_defeq_21_; uint64_t v___x_22_; uint64_t v___x_23_; uint64_t v___x_24_; uint64_t v___y_26_; 
v_type_19_ = lean_ctor_get(v_x_18_, 0);
v_isPrivate_20_ = lean_ctor_get_uint8(v_x_18_, sizeof(void*)*1);
v_defeq_21_ = lean_ctor_get_uint8(v_x_18_, sizeof(void*)*1 + 1);
v___x_22_ = 0ULL;
v___x_23_ = l_Lean_Expr_hash(v_type_19_);
v___x_24_ = lean_uint64_mix_hash(v___x_22_, v___x_23_);
if (v_isPrivate_20_ == 0)
{
uint64_t v___x_32_; 
v___x_32_ = 13ULL;
v___y_26_ = v___x_32_;
goto v___jp_25_;
}
else
{
uint64_t v___x_33_; 
v___x_33_ = 11ULL;
v___y_26_ = v___x_33_;
goto v___jp_25_;
}
v___jp_25_:
{
uint64_t v___x_27_; 
v___x_27_ = lean_uint64_mix_hash(v___x_24_, v___y_26_);
if (v_defeq_21_ == 0)
{
uint64_t v___x_28_; uint64_t v___x_29_; 
v___x_28_ = 13ULL;
v___x_29_ = lean_uint64_mix_hash(v___x_27_, v___x_28_);
return v___x_29_;
}
else
{
uint64_t v___x_30_; uint64_t v___x_31_; 
v___x_30_ = 11ULL;
v___x_31_ = lean_uint64_mix_hash(v___x_27_, v___x_30_);
return v___x_31_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instHashableAuxLemmaKey_hash___boxed(lean_object* v_x_34_){
_start:
{
uint64_t v_res_35_; lean_object* v_r_36_; 
v_res_35_ = l_Lean_Meta_instHashableAuxLemmaKey_hash(v_x_34_);
lean_dec_ref(v_x_34_);
v_r_36_ = lean_box_uint64(v_res_35_);
return v_r_36_;
}
}
static lean_object* _init_l_Lean_Meta_instHashableAuxLemmaKey___closed__0(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_alloc_closure((void*)(l_Lean_Meta_instHashableAuxLemmaKey_hash___boxed), 1, 0);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Meta_instHashableAuxLemmaKey(void){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lean_obj_once(&l_Lean_Meta_instHashableAuxLemmaKey___closed__0, &l_Lean_Meta_instHashableAuxLemmaKey___closed__0_once, _init_l_Lean_Meta_instHashableAuxLemmaKey___closed__0);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_39_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_obj_once(&l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0, &l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0_once, _init_l_Lean_Meta_instInhabitedAuxLemmas_default___closed__0);
v___x_41_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedAuxLemmas_default(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_obj_once(&l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1, &l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1_once, _init_l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedAuxLemmas(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Meta_instInhabitedAuxLemmas_default;
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2_(lean_object* v___x_44_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2____boxed(lean_object* v___x_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2_(v___x_47_);
return v_res_49_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_50_; lean_object* v___f_51_; 
v___x_50_ = lean_obj_once(&l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1, &l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1_once, _init_l_Lean_Meta_instInhabitedAuxLemmas_default___closed__1);
v___f_51_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_51_, 0, v___x_50_);
return v___f_51_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___f_53_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2_);
v___x_54_ = lean_box(0);
v___x_55_ = lean_box(1);
v___x_56_ = l_Lean_registerEnvExtension___redArg(v___f_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2____boxed(lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2_();
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg(lean_object* v_kind_59_, lean_object* v___y_60_){
_start:
{
lean_object* v___x_62_; lean_object* v_auxDeclNGen_63_; lean_object* v___x_64_; lean_object* v_env_65_; lean_object* v___x_66_; lean_object* v_fst_67_; lean_object* v_snd_68_; lean_object* v___x_69_; lean_object* v_env_70_; lean_object* v_nextMacroScope_71_; lean_object* v_ngen_72_; lean_object* v_traceState_73_; lean_object* v_cache_74_; lean_object* v_messages_75_; lean_object* v_infoState_76_; lean_object* v_snapshotTasks_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_86_; 
v___x_62_ = lean_st_ref_get(v___y_60_);
v_auxDeclNGen_63_ = lean_ctor_get(v___x_62_, 3);
lean_inc_ref(v_auxDeclNGen_63_);
lean_dec(v___x_62_);
v___x_64_ = lean_st_ref_get(v___y_60_);
v_env_65_ = lean_ctor_get(v___x_64_, 0);
lean_inc_ref(v_env_65_);
lean_dec(v___x_64_);
v___x_66_ = l_Lean_DeclNameGenerator_mkUniqueName(v_env_65_, v_auxDeclNGen_63_, v_kind_59_);
v_fst_67_ = lean_ctor_get(v___x_66_, 0);
lean_inc(v_fst_67_);
v_snd_68_ = lean_ctor_get(v___x_66_, 1);
lean_inc(v_snd_68_);
lean_dec_ref(v___x_66_);
v___x_69_ = lean_st_ref_take(v___y_60_);
v_env_70_ = lean_ctor_get(v___x_69_, 0);
v_nextMacroScope_71_ = lean_ctor_get(v___x_69_, 1);
v_ngen_72_ = lean_ctor_get(v___x_69_, 2);
v_traceState_73_ = lean_ctor_get(v___x_69_, 4);
v_cache_74_ = lean_ctor_get(v___x_69_, 5);
v_messages_75_ = lean_ctor_get(v___x_69_, 6);
v_infoState_76_ = lean_ctor_get(v___x_69_, 7);
v_snapshotTasks_77_ = lean_ctor_get(v___x_69_, 8);
v_isSharedCheck_86_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_86_ == 0)
{
lean_object* v_unused_87_; 
v_unused_87_ = lean_ctor_get(v___x_69_, 3);
lean_dec(v_unused_87_);
v___x_79_ = v___x_69_;
v_isShared_80_ = v_isSharedCheck_86_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_snapshotTasks_77_);
lean_inc(v_infoState_76_);
lean_inc(v_messages_75_);
lean_inc(v_cache_74_);
lean_inc(v_traceState_73_);
lean_inc(v_ngen_72_);
lean_inc(v_nextMacroScope_71_);
lean_inc(v_env_70_);
lean_dec(v___x_69_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_86_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 3, v_snd_68_);
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_env_70_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v_nextMacroScope_71_);
lean_ctor_set(v_reuseFailAlloc_85_, 2, v_ngen_72_);
lean_ctor_set(v_reuseFailAlloc_85_, 3, v_snd_68_);
lean_ctor_set(v_reuseFailAlloc_85_, 4, v_traceState_73_);
lean_ctor_set(v_reuseFailAlloc_85_, 5, v_cache_74_);
lean_ctor_set(v_reuseFailAlloc_85_, 6, v_messages_75_);
lean_ctor_set(v_reuseFailAlloc_85_, 7, v_infoState_76_);
lean_ctor_set(v_reuseFailAlloc_85_, 8, v_snapshotTasks_77_);
v___x_82_ = v_reuseFailAlloc_85_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_st_ref_set(v___y_60_, v___x_82_);
v___x_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_84_, 0, v_fst_67_);
return v___x_84_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg___boxed(lean_object* v_kind_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg(v_kind_88_, v___y_89_);
lean_dec(v___y_89_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0(lean_object* v_kind_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg(v_kind_92_, v___y_96_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___boxed(lean_object* v_kind_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0(v_kind_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2_spec__6___redArg(lean_object* v_x_106_, lean_object* v_x_107_, lean_object* v_x_108_, lean_object* v_x_109_){
_start:
{
lean_object* v_ks_110_; lean_object* v_vs_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_135_; 
v_ks_110_ = lean_ctor_get(v_x_106_, 0);
v_vs_111_ = lean_ctor_get(v_x_106_, 1);
v_isSharedCheck_135_ = !lean_is_exclusive(v_x_106_);
if (v_isSharedCheck_135_ == 0)
{
v___x_113_ = v_x_106_;
v_isShared_114_ = v_isSharedCheck_135_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_vs_111_);
lean_inc(v_ks_110_);
lean_dec(v_x_106_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_135_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_115_ = lean_array_get_size(v_ks_110_);
v___x_116_ = lean_nat_dec_lt(v_x_107_, v___x_115_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_120_; 
lean_dec(v_x_107_);
v___x_117_ = lean_array_push(v_ks_110_, v_x_108_);
v___x_118_ = lean_array_push(v_vs_111_, v_x_109_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v___x_118_);
lean_ctor_set(v___x_113_, 0, v___x_117_);
v___x_120_ = v___x_113_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_117_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v___x_118_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
else
{
lean_object* v_k_x27_122_; uint8_t v___x_123_; 
v_k_x27_122_ = lean_array_fget_borrowed(v_ks_110_, v_x_107_);
v___x_123_ = l_Lean_Meta_instBEqAuxLemmaKey_beq(v_x_108_, v_k_x27_122_);
if (v___x_123_ == 0)
{
lean_object* v___x_125_; 
if (v_isShared_114_ == 0)
{
v___x_125_ = v___x_113_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_ks_110_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v_vs_111_);
v___x_125_ = v_reuseFailAlloc_129_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_unsigned_to_nat(1u);
v___x_127_ = lean_nat_add(v_x_107_, v___x_126_);
lean_dec(v_x_107_);
v_x_106_ = v___x_125_;
v_x_107_ = v___x_127_;
goto _start;
}
}
else
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_133_; 
v___x_130_ = lean_array_fset(v_ks_110_, v_x_107_, v_x_108_);
v___x_131_ = lean_array_fset(v_vs_111_, v_x_107_, v_x_109_);
lean_dec(v_x_107_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v___x_131_);
lean_ctor_set(v___x_113_, 0, v___x_130_);
v___x_133_ = v___x_113_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_130_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v___x_131_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2___redArg(lean_object* v_n_136_, lean_object* v_k_137_, lean_object* v_v_138_){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = lean_unsigned_to_nat(0u);
v___x_140_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2_spec__6___redArg(v_n_136_, v___x_139_, v_k_137_, v_v_138_);
return v___x_140_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_141_; size_t v___x_142_; size_t v___x_143_; 
v___x_141_ = ((size_t)5ULL);
v___x_142_ = ((size_t)1ULL);
v___x_143_ = lean_usize_shift_left(v___x_142_, v___x_141_);
return v___x_143_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_144_; size_t v___x_145_; size_t v___x_146_; 
v___x_144_ = ((size_t)1ULL);
v___x_145_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__0);
v___x_146_ = lean_usize_sub(v___x_145_, v___x_144_);
return v___x_146_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(lean_object* v_x_148_, size_t v_x_149_, size_t v_x_150_, lean_object* v_x_151_, lean_object* v_x_152_){
_start:
{
if (lean_obj_tag(v_x_148_) == 0)
{
lean_object* v_es_153_; size_t v___x_154_; size_t v___x_155_; size_t v___x_156_; size_t v___x_157_; lean_object* v_j_158_; lean_object* v___x_159_; uint8_t v___x_160_; 
v_es_153_ = lean_ctor_get(v_x_148_, 0);
v___x_154_ = ((size_t)5ULL);
v___x_155_ = ((size_t)1ULL);
v___x_156_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__1);
v___x_157_ = lean_usize_land(v_x_149_, v___x_156_);
v_j_158_ = lean_usize_to_nat(v___x_157_);
v___x_159_ = lean_array_get_size(v_es_153_);
v___x_160_ = lean_nat_dec_lt(v_j_158_, v___x_159_);
if (v___x_160_ == 0)
{
lean_dec(v_j_158_);
lean_dec(v_x_152_);
lean_dec_ref(v_x_151_);
return v_x_148_;
}
else
{
lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_197_; 
lean_inc_ref(v_es_153_);
v_isSharedCheck_197_ = !lean_is_exclusive(v_x_148_);
if (v_isSharedCheck_197_ == 0)
{
lean_object* v_unused_198_; 
v_unused_198_ = lean_ctor_get(v_x_148_, 0);
lean_dec(v_unused_198_);
v___x_162_ = v_x_148_;
v_isShared_163_ = v_isSharedCheck_197_;
goto v_resetjp_161_;
}
else
{
lean_dec(v_x_148_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_197_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v_v_164_; lean_object* v___x_165_; lean_object* v_xs_x27_166_; lean_object* v___y_168_; 
v_v_164_ = lean_array_fget(v_es_153_, v_j_158_);
v___x_165_ = lean_box(0);
v_xs_x27_166_ = lean_array_fset(v_es_153_, v_j_158_, v___x_165_);
switch(lean_obj_tag(v_v_164_))
{
case 0:
{
lean_object* v_key_173_; lean_object* v_val_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_184_; 
v_key_173_ = lean_ctor_get(v_v_164_, 0);
v_val_174_ = lean_ctor_get(v_v_164_, 1);
v_isSharedCheck_184_ = !lean_is_exclusive(v_v_164_);
if (v_isSharedCheck_184_ == 0)
{
v___x_176_ = v_v_164_;
v_isShared_177_ = v_isSharedCheck_184_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_val_174_);
lean_inc(v_key_173_);
lean_dec(v_v_164_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_184_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
uint8_t v___x_178_; 
v___x_178_ = l_Lean_Meta_instBEqAuxLemmaKey_beq(v_x_151_, v_key_173_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; lean_object* v___x_180_; 
lean_del_object(v___x_176_);
v___x_179_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_173_, v_val_174_, v_x_151_, v_x_152_);
v___x_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
v___y_168_ = v___x_180_;
goto v___jp_167_;
}
else
{
lean_object* v___x_182_; 
lean_dec(v_val_174_);
lean_dec(v_key_173_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 1, v_x_152_);
lean_ctor_set(v___x_176_, 0, v_x_151_);
v___x_182_ = v___x_176_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_x_151_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_x_152_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
v___y_168_ = v___x_182_;
goto v___jp_167_;
}
}
}
}
case 1:
{
lean_object* v_node_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_195_; 
v_node_185_ = lean_ctor_get(v_v_164_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v_v_164_);
if (v_isSharedCheck_195_ == 0)
{
v___x_187_ = v_v_164_;
v_isShared_188_ = v_isSharedCheck_195_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_node_185_);
lean_dec(v_v_164_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_195_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
size_t v___x_189_; size_t v___x_190_; lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_189_ = lean_usize_shift_right(v_x_149_, v___x_154_);
v___x_190_ = lean_usize_add(v_x_150_, v___x_155_);
v___x_191_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(v_node_185_, v___x_189_, v___x_190_, v_x_151_, v_x_152_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 0, v___x_191_);
v___x_193_ = v___x_187_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_191_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
v___y_168_ = v___x_193_;
goto v___jp_167_;
}
}
}
default: 
{
lean_object* v___x_196_; 
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v_x_151_);
lean_ctor_set(v___x_196_, 1, v_x_152_);
v___y_168_ = v___x_196_;
goto v___jp_167_;
}
}
v___jp_167_:
{
lean_object* v___x_169_; lean_object* v___x_171_; 
v___x_169_ = lean_array_fset(v_xs_x27_166_, v_j_158_, v___y_168_);
lean_dec(v_j_158_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 0, v___x_169_);
v___x_171_ = v___x_162_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
}
else
{
lean_object* v_ks_199_; lean_object* v_vs_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_220_; 
v_ks_199_ = lean_ctor_get(v_x_148_, 0);
v_vs_200_ = lean_ctor_get(v_x_148_, 1);
v_isSharedCheck_220_ = !lean_is_exclusive(v_x_148_);
if (v_isSharedCheck_220_ == 0)
{
v___x_202_ = v_x_148_;
v_isShared_203_ = v_isSharedCheck_220_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_vs_200_);
lean_inc(v_ks_199_);
lean_dec(v_x_148_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_220_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_205_; 
if (v_isShared_203_ == 0)
{
v___x_205_ = v___x_202_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_ks_199_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v_vs_200_);
v___x_205_ = v_reuseFailAlloc_219_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
lean_object* v_newNode_206_; uint8_t v___y_208_; size_t v___x_214_; uint8_t v___x_215_; 
v_newNode_206_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2___redArg(v___x_205_, v_x_151_, v_x_152_);
v___x_214_ = ((size_t)7ULL);
v___x_215_ = lean_usize_dec_le(v___x_214_, v_x_150_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; 
v___x_216_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_206_);
v___x_217_ = lean_unsigned_to_nat(4u);
v___x_218_ = lean_nat_dec_lt(v___x_216_, v___x_217_);
lean_dec(v___x_216_);
v___y_208_ = v___x_218_;
goto v___jp_207_;
}
else
{
v___y_208_ = v___x_215_;
goto v___jp_207_;
}
v___jp_207_:
{
if (v___y_208_ == 0)
{
lean_object* v_ks_209_; lean_object* v_vs_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v_ks_209_ = lean_ctor_get(v_newNode_206_, 0);
lean_inc_ref(v_ks_209_);
v_vs_210_ = lean_ctor_get(v_newNode_206_, 1);
lean_inc_ref(v_vs_210_);
lean_dec_ref(v_newNode_206_);
v___x_211_ = lean_unsigned_to_nat(0u);
v___x_212_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__2);
v___x_213_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg(v_x_150_, v_ks_209_, v_vs_210_, v___x_211_, v___x_212_);
lean_dec_ref(v_vs_210_);
lean_dec_ref(v_ks_209_);
return v___x_213_;
}
else
{
return v_newNode_206_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg(size_t v_depth_221_, lean_object* v_keys_222_, lean_object* v_vals_223_, lean_object* v_i_224_, lean_object* v_entries_225_){
_start:
{
lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_226_ = lean_array_get_size(v_keys_222_);
v___x_227_ = lean_nat_dec_lt(v_i_224_, v___x_226_);
if (v___x_227_ == 0)
{
lean_dec(v_i_224_);
return v_entries_225_;
}
else
{
lean_object* v_k_228_; lean_object* v_v_229_; uint64_t v___x_230_; size_t v_h_231_; size_t v___x_232_; lean_object* v___x_233_; size_t v___x_234_; size_t v___x_235_; size_t v___x_236_; size_t v_h_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v_k_228_ = lean_array_fget_borrowed(v_keys_222_, v_i_224_);
v_v_229_ = lean_array_fget_borrowed(v_vals_223_, v_i_224_);
v___x_230_ = l_Lean_Meta_instHashableAuxLemmaKey_hash(v_k_228_);
v_h_231_ = lean_uint64_to_usize(v___x_230_);
v___x_232_ = ((size_t)5ULL);
v___x_233_ = lean_unsigned_to_nat(1u);
v___x_234_ = ((size_t)1ULL);
v___x_235_ = lean_usize_sub(v_depth_221_, v___x_234_);
v___x_236_ = lean_usize_mul(v___x_232_, v___x_235_);
v_h_237_ = lean_usize_shift_right(v_h_231_, v___x_236_);
v___x_238_ = lean_nat_add(v_i_224_, v___x_233_);
lean_dec(v_i_224_);
lean_inc(v_v_229_);
lean_inc(v_k_228_);
v___x_239_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(v_entries_225_, v_h_237_, v_depth_221_, v_k_228_, v_v_229_);
v_i_224_ = v___x_238_;
v_entries_225_ = v___x_239_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_depth_241_, lean_object* v_keys_242_, lean_object* v_vals_243_, lean_object* v_i_244_, lean_object* v_entries_245_){
_start:
{
size_t v_depth_boxed_246_; lean_object* v_res_247_; 
v_depth_boxed_246_ = lean_unbox_usize(v_depth_241_);
lean_dec(v_depth_241_);
v_res_247_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg(v_depth_boxed_246_, v_keys_242_, v_vals_243_, v_i_244_, v_entries_245_);
lean_dec_ref(v_vals_243_);
lean_dec_ref(v_keys_242_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___boxed(lean_object* v_x_248_, lean_object* v_x_249_, lean_object* v_x_250_, lean_object* v_x_251_, lean_object* v_x_252_){
_start:
{
size_t v_x_6256__boxed_253_; size_t v_x_6257__boxed_254_; lean_object* v_res_255_; 
v_x_6256__boxed_253_ = lean_unbox_usize(v_x_249_);
lean_dec(v_x_249_);
v_x_6257__boxed_254_ = lean_unbox_usize(v_x_250_);
lean_dec(v_x_250_);
v_res_255_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(v_x_248_, v_x_6256__boxed_253_, v_x_6257__boxed_254_, v_x_251_, v_x_252_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1___redArg(lean_object* v_x_256_, lean_object* v_x_257_, lean_object* v_x_258_){
_start:
{
uint64_t v___x_259_; size_t v___x_260_; size_t v___x_261_; lean_object* v___x_262_; 
v___x_259_ = l_Lean_Meta_instHashableAuxLemmaKey_hash(v_x_257_);
v___x_260_ = lean_uint64_to_usize(v___x_259_);
v___x_261_ = ((size_t)1ULL);
v___x_262_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(v_x_256_, v___x_260_, v___x_261_, v_x_257_, v_x_258_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxLemma___lam__0(lean_object* v_a_263_, lean_object* v_levelParams_264_, lean_object* v___x_265_, lean_object* v_x_266_){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_267_, 0, v_a_263_);
lean_ctor_set(v___x_267_, 1, v_levelParams_264_);
v___x_268_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1___redArg(v_x_266_, v___x_265_, v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6_spec__10___redArg(lean_object* v_keys_269_, lean_object* v_vals_270_, lean_object* v_i_271_, lean_object* v_k_272_){
_start:
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = lean_array_get_size(v_keys_269_);
v___x_274_ = lean_nat_dec_lt(v_i_271_, v___x_273_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; 
lean_dec(v_i_271_);
v___x_275_ = lean_box(0);
return v___x_275_;
}
else
{
lean_object* v_k_x27_276_; uint8_t v___x_277_; 
v_k_x27_276_ = lean_array_fget_borrowed(v_keys_269_, v_i_271_);
v___x_277_ = l_Lean_Meta_instBEqAuxLemmaKey_beq(v_k_272_, v_k_x27_276_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_unsigned_to_nat(1u);
v___x_279_ = lean_nat_add(v_i_271_, v___x_278_);
lean_dec(v_i_271_);
v_i_271_ = v___x_279_;
goto _start;
}
else
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lean_array_fget_borrowed(v_vals_270_, v_i_271_);
lean_dec(v_i_271_);
lean_inc(v___x_281_);
v___x_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
return v___x_282_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6_spec__10___redArg___boxed(lean_object* v_keys_283_, lean_object* v_vals_284_, lean_object* v_i_285_, lean_object* v_k_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6_spec__10___redArg(v_keys_283_, v_vals_284_, v_i_285_, v_k_286_);
lean_dec_ref(v_k_286_);
lean_dec_ref(v_vals_284_);
lean_dec_ref(v_keys_283_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg(lean_object* v_x_288_, size_t v_x_289_, lean_object* v_x_290_){
_start:
{
if (lean_obj_tag(v_x_288_) == 0)
{
lean_object* v_es_291_; lean_object* v___x_292_; size_t v___x_293_; size_t v___x_294_; size_t v___x_295_; lean_object* v_j_296_; lean_object* v___x_297_; 
v_es_291_ = lean_ctor_get(v_x_288_, 0);
v___x_292_ = lean_box(2);
v___x_293_ = ((size_t)5ULL);
v___x_294_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg___closed__1);
v___x_295_ = lean_usize_land(v_x_289_, v___x_294_);
v_j_296_ = lean_usize_to_nat(v___x_295_);
v___x_297_ = lean_array_get_borrowed(v___x_292_, v_es_291_, v_j_296_);
lean_dec(v_j_296_);
switch(lean_obj_tag(v___x_297_))
{
case 0:
{
lean_object* v_key_298_; lean_object* v_val_299_; uint8_t v___x_300_; 
v_key_298_ = lean_ctor_get(v___x_297_, 0);
v_val_299_ = lean_ctor_get(v___x_297_, 1);
v___x_300_ = l_Lean_Meta_instBEqAuxLemmaKey_beq(v_x_290_, v_key_298_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; 
v___x_301_ = lean_box(0);
return v___x_301_;
}
else
{
lean_object* v___x_302_; 
lean_inc(v_val_299_);
v___x_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_302_, 0, v_val_299_);
return v___x_302_;
}
}
case 1:
{
lean_object* v_node_303_; size_t v___x_304_; 
v_node_303_ = lean_ctor_get(v___x_297_, 0);
v___x_304_ = lean_usize_shift_right(v_x_289_, v___x_293_);
v_x_288_ = v_node_303_;
v_x_289_ = v___x_304_;
goto _start;
}
default: 
{
lean_object* v___x_306_; 
v___x_306_ = lean_box(0);
return v___x_306_;
}
}
}
else
{
lean_object* v_ks_307_; lean_object* v_vs_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_ks_307_ = lean_ctor_get(v_x_288_, 0);
v_vs_308_ = lean_ctor_get(v_x_288_, 1);
v___x_309_ = lean_unsigned_to_nat(0u);
v___x_310_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6_spec__10___redArg(v_ks_307_, v_vs_308_, v___x_309_, v_x_290_);
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg___boxed(lean_object* v_x_311_, lean_object* v_x_312_, lean_object* v_x_313_){
_start:
{
size_t v_x_6466__boxed_314_; lean_object* v_res_315_; 
v_x_6466__boxed_314_ = lean_unbox_usize(v_x_312_);
lean_dec(v_x_312_);
v_res_315_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg(v_x_311_, v_x_6466__boxed_314_, v_x_313_);
lean_dec_ref(v_x_313_);
lean_dec_ref(v_x_311_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3___redArg(lean_object* v_x_316_, lean_object* v_x_317_){
_start:
{
uint64_t v___x_318_; size_t v___x_319_; lean_object* v___x_320_; 
v___x_318_ = l_Lean_Meta_instHashableAuxLemmaKey_hash(v_x_317_);
v___x_319_ = lean_uint64_to_usize(v___x_318_);
v___x_320_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg(v_x_316_, v___x_319_, v_x_317_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3___redArg___boxed(lean_object* v_x_321_, lean_object* v_x_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3___redArg(v_x_321_, v_x_322_);
lean_dec_ref(v_x_322_);
lean_dec_ref(v_x_321_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6_spec__10(lean_object* v_msgData_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v___x_330_; lean_object* v_env_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v_mctx_334_; lean_object* v_lctx_335_; lean_object* v_options_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_330_ = lean_st_ref_get(v___y_328_);
v_env_331_ = lean_ctor_get(v___x_330_, 0);
lean_inc_ref(v_env_331_);
lean_dec(v___x_330_);
v___x_332_ = lean_st_ref_get(v___y_328_);
lean_dec(v___x_332_);
v___x_333_ = lean_st_ref_get(v___y_326_);
v_mctx_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc_ref(v_mctx_334_);
lean_dec(v___x_333_);
v_lctx_335_ = lean_ctor_get(v___y_325_, 2);
v_options_336_ = lean_ctor_get(v___y_327_, 2);
lean_inc_ref(v_options_336_);
lean_inc_ref(v_lctx_335_);
v___x_337_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_337_, 0, v_env_331_);
lean_ctor_set(v___x_337_, 1, v_mctx_334_);
lean_ctor_set(v___x_337_, 2, v_lctx_335_);
lean_ctor_set(v___x_337_, 3, v_options_336_);
v___x_338_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
lean_ctor_set(v___x_338_, 1, v_msgData_324_);
v___x_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6_spec__10___boxed(lean_object* v_msgData_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6_spec__10(v_msgData_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6___redArg(lean_object* v_msg_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
lean_object* v_ref_353_; lean_object* v___x_354_; lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_363_; 
v_ref_353_ = lean_ctor_get(v___y_350_, 5);
v___x_354_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6_spec__10(v_msg_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_);
v_a_355_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_363_ == 0)
{
v___x_357_ = v___x_354_;
v_isShared_358_ = v_isSharedCheck_363_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_354_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_363_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; lean_object* v___x_361_; 
lean_inc(v_ref_353_);
v___x_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_359_, 0, v_ref_353_);
lean_ctor_set(v___x_359_, 1, v_a_355_);
if (v_isShared_358_ == 0)
{
lean_ctor_set_tag(v___x_357_, 1);
lean_ctor_set(v___x_357_, 0, v___x_359_);
v___x_361_ = v___x_357_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_359_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_msg_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6___redArg(v_msg_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
lean_dec(v___y_366_);
lean_dec_ref(v___y_365_);
return v_res_370_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lean_mk_string_unchecked("Cannot add attribute `[", 23, 23);
return v___x_371_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__0, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__0);
v___x_373_ = l_Lean_stringToMessageData(v___x_372_);
return v___x_373_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_374_; 
v___x_374_ = lean_mk_string_unchecked("]` to declaration `", 19, 19);
return v___x_374_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__2, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__2_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__2);
v___x_376_ = l_Lean_stringToMessageData(v___x_375_);
return v___x_376_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__4(void){
_start:
{
lean_object* v___x_377_; 
v___x_377_ = lean_mk_string_unchecked("` because it is in an imported module", 37, 37);
return v___x_377_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__4, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__4_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__4);
v___x_379_ = l_Lean_stringToMessageData(v___x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg(lean_object* v_attrName_380_, lean_object* v_declName_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; uint8_t v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_387_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__1);
v___x_388_ = l_Lean_MessageData_ofName(v_attrName_380_);
v___x_389_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_387_);
lean_ctor_set(v___x_389_, 1, v___x_388_);
v___x_390_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__3);
v___x_391_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_389_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = 0;
v___x_393_ = l_Lean_MessageData_ofConstName(v_declName_381_, v___x_392_);
v___x_394_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_391_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
v___x_395_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__5);
v___x_396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_394_);
lean_ctor_set(v___x_396_, 1, v___x_395_);
v___x_397_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6___redArg(v___x_396_, v___y_382_, v___y_383_, v___y_384_, v___y_385_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___boxed(lean_object* v_attrName_398_, lean_object* v_declName_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg(v_attrName_398_, v_declName_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
return v_res_405_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = lean_mk_string_unchecked("` because it is not from the present async context", 50, 50);
return v___x_406_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__0, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__0_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__0);
v___x_408_ = l_Lean_stringToMessageData(v___x_407_);
return v___x_408_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = lean_mk_string_unchecked(" `", 2, 2);
return v___x_409_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__2, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__2_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__2);
v___x_411_ = l_Lean_stringToMessageData(v___x_410_);
return v___x_411_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__4(void){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_412_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__4, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__4_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__4);
v___x_414_ = l_Lean_stringToMessageData(v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg(lean_object* v_attrName_415_, lean_object* v_declName_416_, lean_object* v_asyncPrefix_x3f_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___y_424_; 
if (lean_obj_tag(v_asyncPrefix_x3f_417_) == 0)
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_MessageData_nil;
v___y_424_ = v___x_437_;
goto v___jp_423_;
}
else
{
lean_object* v_val_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v_val_438_ = lean_ctor_get(v_asyncPrefix_x3f_417_, 0);
lean_inc(v_val_438_);
lean_dec_ref(v_asyncPrefix_x3f_417_);
v___x_439_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__3);
v___x_440_ = l_Lean_MessageData_ofName(v_val_438_);
v___x_441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_439_);
lean_ctor_set(v___x_441_, 1, v___x_440_);
v___x_442_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__5, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__5_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__5);
v___x_443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_441_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
v___y_424_ = v___x_443_;
goto v___jp_423_;
}
v___jp_423_:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; uint8_t v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_425_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__1);
v___x_426_ = l_Lean_MessageData_ofName(v_attrName_415_);
v___x_427_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_425_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
v___x_428_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg___closed__3);
v___x_429_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_427_);
lean_ctor_set(v___x_429_, 1, v___x_428_);
v___x_430_ = 0;
v___x_431_ = l_Lean_MessageData_ofConstName(v_declName_416_, v___x_430_);
v___x_432_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_429_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
v___x_433_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___closed__1);
v___x_434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_432_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
v___x_435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
lean_ctor_set(v___x_435_, 1, v___y_424_);
v___x_436_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6___redArg(v___x_435_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
return v___x_436_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg___boxed(lean_object* v_attrName_444_, lean_object* v_declName_445_, lean_object* v_asyncPrefix_x3f_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg(v_attrName_444_, v_declName_445_, v_asyncPrefix_x3f_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
return v_res_452_;
}
}
static lean_object* _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__0(void){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_453_;
}
}
static lean_object* _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__1(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__0, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__0_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__0);
v___x_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
return v___x_455_;
}
}
static lean_object* _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__2(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__1, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__1_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__1);
v___x_457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
return v___x_457_;
}
}
static lean_object* _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__3(void){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__1, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__1_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__1);
v___x_459_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
lean_ctor_set(v___x_459_, 2, v___x_458_);
lean_ctor_set(v___x_459_, 3, v___x_458_);
lean_ctor_set(v___x_459_, 4, v___x_458_);
lean_ctor_set(v___x_459_, 5, v___x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2(lean_object* v_attr_460_, lean_object* v_decl_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
lean_object* v___y_468_; lean_object* v___y_469_; lean_object* v___x_511_; lean_object* v_env_512_; lean_object* v___y_514_; lean_object* v___y_515_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___x_527_; 
v___x_511_ = lean_st_ref_get(v___y_465_);
v_env_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc_ref(v_env_512_);
lean_dec(v___x_511_);
v___x_527_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_512_, v_decl_461_);
if (lean_obj_tag(v___x_527_) == 0)
{
v___y_514_ = v___y_462_;
v___y_515_ = v___y_463_;
v___y_516_ = v___y_464_;
v___y_517_ = v___y_465_;
goto v___jp_513_;
}
else
{
lean_object* v_attr_528_; lean_object* v_toAttributeImplCore_529_; lean_object* v_name_530_; lean_object* v___x_531_; 
lean_dec_ref(v___x_527_);
lean_dec_ref(v_env_512_);
v_attr_528_ = lean_ctor_get(v_attr_460_, 0);
lean_inc_ref(v_attr_528_);
lean_dec_ref(v_attr_460_);
v_toAttributeImplCore_529_ = lean_ctor_get(v_attr_528_, 0);
lean_inc_ref(v_toAttributeImplCore_529_);
lean_dec_ref(v_attr_528_);
v_name_530_ = lean_ctor_get(v_toAttributeImplCore_529_, 1);
lean_inc(v_name_530_);
lean_dec_ref(v_toAttributeImplCore_529_);
v___x_531_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg(v_name_530_, v_decl_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_);
return v___x_531_;
}
v___jp_467_:
{
lean_object* v___x_470_; lean_object* v_ext_471_; lean_object* v_toEnvExtension_472_; lean_object* v_env_473_; lean_object* v_nextMacroScope_474_; lean_object* v_ngen_475_; lean_object* v_auxDeclNGen_476_; lean_object* v_traceState_477_; lean_object* v_messages_478_; lean_object* v_infoState_479_; lean_object* v_snapshotTasks_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_509_; 
v___x_470_ = lean_st_ref_take(v___y_469_);
v_ext_471_ = lean_ctor_get(v_attr_460_, 1);
lean_inc_ref(v_ext_471_);
lean_dec_ref(v_attr_460_);
v_toEnvExtension_472_ = lean_ctor_get(v_ext_471_, 0);
v_env_473_ = lean_ctor_get(v___x_470_, 0);
v_nextMacroScope_474_ = lean_ctor_get(v___x_470_, 1);
v_ngen_475_ = lean_ctor_get(v___x_470_, 2);
v_auxDeclNGen_476_ = lean_ctor_get(v___x_470_, 3);
v_traceState_477_ = lean_ctor_get(v___x_470_, 4);
v_messages_478_ = lean_ctor_get(v___x_470_, 6);
v_infoState_479_ = lean_ctor_get(v___x_470_, 7);
v_snapshotTasks_480_ = lean_ctor_get(v___x_470_, 8);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_509_ == 0)
{
lean_object* v_unused_510_; 
v_unused_510_ = lean_ctor_get(v___x_470_, 5);
lean_dec(v_unused_510_);
v___x_482_ = v___x_470_;
v_isShared_483_ = v_isSharedCheck_509_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_snapshotTasks_480_);
lean_inc(v_infoState_479_);
lean_inc(v_messages_478_);
lean_inc(v_traceState_477_);
lean_inc(v_auxDeclNGen_476_);
lean_inc(v_ngen_475_);
lean_inc(v_nextMacroScope_474_);
lean_inc(v_env_473_);
lean_dec(v___x_470_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_509_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v_asyncMode_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_488_; 
v_asyncMode_484_ = lean_ctor_get(v_toEnvExtension_472_, 2);
lean_inc(v_asyncMode_484_);
lean_inc(v_decl_461_);
v___x_485_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_471_, v_env_473_, v_decl_461_, v_asyncMode_484_, v_decl_461_);
lean_dec(v_asyncMode_484_);
v___x_486_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__2, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__2_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__2);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 5, v___x_486_);
lean_ctor_set(v___x_482_, 0, v___x_485_);
v___x_488_ = v___x_482_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v___x_485_);
lean_ctor_set(v_reuseFailAlloc_508_, 1, v_nextMacroScope_474_);
lean_ctor_set(v_reuseFailAlloc_508_, 2, v_ngen_475_);
lean_ctor_set(v_reuseFailAlloc_508_, 3, v_auxDeclNGen_476_);
lean_ctor_set(v_reuseFailAlloc_508_, 4, v_traceState_477_);
lean_ctor_set(v_reuseFailAlloc_508_, 5, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_508_, 6, v_messages_478_);
lean_ctor_set(v_reuseFailAlloc_508_, 7, v_infoState_479_);
lean_ctor_set(v_reuseFailAlloc_508_, 8, v_snapshotTasks_480_);
v___x_488_ = v_reuseFailAlloc_508_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v_mctx_492_; lean_object* v_zetaDeltaFVarIds_493_; lean_object* v_postponed_494_; lean_object* v_diag_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_506_; 
v___x_489_ = lean_st_ref_set(v___y_469_, v___x_488_);
v___x_490_ = lean_st_ref_get(v___y_469_);
lean_dec(v___x_490_);
v___x_491_ = lean_st_ref_take(v___y_468_);
v_mctx_492_ = lean_ctor_get(v___x_491_, 0);
v_zetaDeltaFVarIds_493_ = lean_ctor_get(v___x_491_, 2);
v_postponed_494_ = lean_ctor_get(v___x_491_, 3);
v_diag_495_ = lean_ctor_get(v___x_491_, 4);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_506_ == 0)
{
lean_object* v_unused_507_; 
v_unused_507_ = lean_ctor_get(v___x_491_, 1);
lean_dec(v_unused_507_);
v___x_497_ = v___x_491_;
v_isShared_498_ = v_isSharedCheck_506_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_diag_495_);
lean_inc(v_postponed_494_);
lean_inc(v_zetaDeltaFVarIds_493_);
lean_inc(v_mctx_492_);
lean_dec(v___x_491_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_506_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_499_; lean_object* v___x_501_; 
v___x_499_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__3, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__3_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__3);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 1, v___x_499_);
v___x_501_ = v___x_497_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_mctx_492_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v___x_499_);
lean_ctor_set(v_reuseFailAlloc_505_, 2, v_zetaDeltaFVarIds_493_);
lean_ctor_set(v_reuseFailAlloc_505_, 3, v_postponed_494_);
lean_ctor_set(v_reuseFailAlloc_505_, 4, v_diag_495_);
v___x_501_ = v_reuseFailAlloc_505_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_502_ = lean_st_ref_set(v___y_468_, v___x_501_);
v___x_503_ = lean_box(0);
v___x_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
return v___x_504_;
}
}
}
}
}
v___jp_513_:
{
lean_object* v_ext_518_; lean_object* v_toEnvExtension_519_; lean_object* v_attr_520_; lean_object* v_asyncMode_521_; uint8_t v___x_522_; 
v_ext_518_ = lean_ctor_get(v_attr_460_, 1);
v_toEnvExtension_519_ = lean_ctor_get(v_ext_518_, 0);
v_attr_520_ = lean_ctor_get(v_attr_460_, 0);
v_asyncMode_521_ = lean_ctor_get(v_toEnvExtension_519_, 2);
lean_inc(v_decl_461_);
lean_inc_ref(v_env_512_);
v___x_522_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_512_, v_decl_461_, v_asyncMode_521_);
if (v___x_522_ == 0)
{
lean_object* v_toAttributeImplCore_523_; lean_object* v_name_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
lean_inc_ref(v_attr_520_);
lean_dec_ref(v_attr_460_);
v_toAttributeImplCore_523_ = lean_ctor_get(v_attr_520_, 0);
lean_inc_ref(v_toAttributeImplCore_523_);
lean_dec_ref(v_attr_520_);
v_name_524_ = lean_ctor_get(v_toAttributeImplCore_523_, 1);
lean_inc(v_name_524_);
lean_dec_ref(v_toAttributeImplCore_523_);
v___x_525_ = l_Lean_Environment_asyncPrefix_x3f(v_env_512_);
v___x_526_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg(v_name_524_, v_decl_461_, v___x_525_, v___y_514_, v___y_515_, v___y_516_, v___y_517_);
return v___x_526_;
}
else
{
lean_dec_ref(v_env_512_);
v___y_468_ = v___y_515_;
v___y_469_ = v___y_517_;
goto v___jp_467_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___boxed(lean_object* v_attr_532_, lean_object* v_decl_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2(v_attr_532_, v_decl_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
return v_res_539_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__4(lean_object* v_x_540_, lean_object* v_x_541_){
_start:
{
if (lean_obj_tag(v_x_540_) == 0)
{
if (lean_obj_tag(v_x_541_) == 0)
{
uint8_t v___x_542_; 
v___x_542_ = 1;
return v___x_542_;
}
else
{
uint8_t v___x_543_; 
v___x_543_ = 0;
return v___x_543_;
}
}
else
{
if (lean_obj_tag(v_x_541_) == 0)
{
uint8_t v___x_544_; 
v___x_544_ = 0;
return v___x_544_;
}
else
{
lean_object* v_head_545_; lean_object* v_tail_546_; lean_object* v_head_547_; lean_object* v_tail_548_; uint8_t v___x_549_; 
v_head_545_ = lean_ctor_get(v_x_540_, 0);
v_tail_546_ = lean_ctor_get(v_x_540_, 1);
v_head_547_ = lean_ctor_get(v_x_541_, 0);
v_tail_548_ = lean_ctor_get(v_x_541_, 1);
v___x_549_ = lean_name_eq(v_head_545_, v_head_547_);
if (v___x_549_ == 0)
{
return v___x_549_;
}
else
{
v_x_540_ = v_tail_546_;
v_x_541_ = v_tail_548_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__4___boxed(lean_object* v_x_551_, lean_object* v_x_552_){
_start:
{
uint8_t v_res_553_; lean_object* v_r_554_; 
v_res_553_ = l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__4(v_x_551_, v_x_552_);
lean_dec(v_x_552_);
lean_dec(v_x_551_);
v_r_554_ = lean_box(v_res_553_);
return v_r_554_;
}
}
static lean_object* _init_l_Lean_Meta_mkAuxLemma___closed__0(void){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = lean_mk_string_unchecked("_proof", 6, 6);
return v___x_555_;
}
}
static lean_object* _init_l_Lean_Meta_mkAuxLemma___closed__1(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = lean_obj_once(&l_Lean_Meta_mkAuxLemma___closed__0, &l_Lean_Meta_mkAuxLemma___closed__0_once, _init_l_Lean_Meta_mkAuxLemma___closed__0);
v___x_557_ = l_Lean_Name_mkStr1(v___x_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxLemma(lean_object* v_levelParams_558_, lean_object* v_type_559_, lean_object* v_value_560_, lean_object* v_kind_x3f_561_, uint8_t v_cache_562_, uint8_t v_inferRfl_563_, uint8_t v_forceExpose_564_, uint8_t v_defeq_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_){
_start:
{
lean_object* v___x_571_; lean_object* v_env_572_; lean_object* v___x_573_; lean_object* v_asyncMode_574_; uint8_t v_isExporting_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___y_579_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___y_582_; lean_object* v___y_621_; lean_object* v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_637_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___y_640_; lean_object* v___y_641_; lean_object* v___y_642_; lean_object* v___y_643_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v___y_666_; lean_object* v___y_667_; lean_object* v___y_668_; lean_object* v___y_669_; uint8_t v___y_670_; lean_object* v___y_684_; lean_object* v___y_685_; lean_object* v___y_686_; lean_object* v___y_687_; lean_object* v___y_688_; lean_object* v___y_689_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_754_; lean_object* v___y_755_; lean_object* v___y_756_; lean_object* v___y_777_; lean_object* v___y_778_; uint8_t v___y_779_; lean_object* v___x_792_; lean_object* v___y_794_; lean_object* v___y_795_; uint8_t v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; uint8_t v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; uint8_t v___y_837_; 
v___x_571_ = lean_st_ref_get(v_a_569_);
v_env_572_ = lean_ctor_get(v___x_571_, 0);
lean_inc_ref_n(v_env_572_, 2);
lean_dec(v___x_571_);
v___x_573_ = l_Lean_Meta_auxLemmasExt;
v_asyncMode_574_ = lean_ctor_get(v___x_573_, 2);
v_isExporting_575_ = lean_ctor_get_uint8(v_env_572_, sizeof(void*)*8);
v___x_576_ = l_Lean_Meta_instInhabitedAuxLemmas_default;
v___x_577_ = lean_box(0);
v___x_792_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_576_, v___x_573_, v_env_572_, v_asyncMode_574_, v___x_577_);
if (v_isExporting_575_ == 0)
{
uint8_t v___x_841_; 
v___x_841_ = 1;
v___y_837_ = v___x_841_;
goto v___jp_836_;
}
else
{
uint8_t v___x_842_; 
v___x_842_ = 0;
v___y_837_ = v___x_842_;
goto v___jp_836_;
}
v___jp_578_:
{
lean_object* v___x_583_; lean_object* v_env_584_; lean_object* v_nextMacroScope_585_; lean_object* v_ngen_586_; lean_object* v_auxDeclNGen_587_; lean_object* v_traceState_588_; lean_object* v_messages_589_; lean_object* v_infoState_590_; lean_object* v_snapshotTasks_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_618_; 
v___x_583_ = lean_st_ref_take(v___y_582_);
v_env_584_ = lean_ctor_get(v___x_583_, 0);
v_nextMacroScope_585_ = lean_ctor_get(v___x_583_, 1);
v_ngen_586_ = lean_ctor_get(v___x_583_, 2);
v_auxDeclNGen_587_ = lean_ctor_get(v___x_583_, 3);
v_traceState_588_ = lean_ctor_get(v___x_583_, 4);
v_messages_589_ = lean_ctor_get(v___x_583_, 6);
v_infoState_590_ = lean_ctor_get(v___x_583_, 7);
v_snapshotTasks_591_ = lean_ctor_get(v___x_583_, 8);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_618_ == 0)
{
lean_object* v_unused_619_; 
v_unused_619_ = lean_ctor_get(v___x_583_, 5);
lean_dec(v_unused_619_);
v___x_593_ = v___x_583_;
v_isShared_594_ = v_isSharedCheck_618_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_snapshotTasks_591_);
lean_inc(v_infoState_590_);
lean_inc(v_messages_589_);
lean_inc(v_traceState_588_);
lean_inc(v_auxDeclNGen_587_);
lean_inc(v_ngen_586_);
lean_inc(v_nextMacroScope_585_);
lean_inc(v_env_584_);
lean_dec(v___x_583_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_618_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_598_; 
v___x_595_ = l_Lean_EnvExtension_modifyState___redArg(v___x_573_, v_env_584_, v___y_580_, v_asyncMode_574_, v___x_577_);
v___x_596_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__2, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__2_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__2);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 5, v___x_596_);
lean_ctor_set(v___x_593_, 0, v___x_595_);
v___x_598_ = v___x_593_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v___x_595_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v_nextMacroScope_585_);
lean_ctor_set(v_reuseFailAlloc_617_, 2, v_ngen_586_);
lean_ctor_set(v_reuseFailAlloc_617_, 3, v_auxDeclNGen_587_);
lean_ctor_set(v_reuseFailAlloc_617_, 4, v_traceState_588_);
lean_ctor_set(v_reuseFailAlloc_617_, 5, v___x_596_);
lean_ctor_set(v_reuseFailAlloc_617_, 6, v_messages_589_);
lean_ctor_set(v_reuseFailAlloc_617_, 7, v_infoState_590_);
lean_ctor_set(v_reuseFailAlloc_617_, 8, v_snapshotTasks_591_);
v___x_598_ = v_reuseFailAlloc_617_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v_mctx_602_; lean_object* v_zetaDeltaFVarIds_603_; lean_object* v_postponed_604_; lean_object* v_diag_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_615_; 
v___x_599_ = lean_st_ref_set(v___y_582_, v___x_598_);
v___x_600_ = lean_st_ref_get(v___y_582_);
lean_dec(v___x_600_);
v___x_601_ = lean_st_ref_take(v___y_581_);
v_mctx_602_ = lean_ctor_get(v___x_601_, 0);
v_zetaDeltaFVarIds_603_ = lean_ctor_get(v___x_601_, 2);
v_postponed_604_ = lean_ctor_get(v___x_601_, 3);
v_diag_605_ = lean_ctor_get(v___x_601_, 4);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_615_ == 0)
{
lean_object* v_unused_616_; 
v_unused_616_ = lean_ctor_get(v___x_601_, 1);
lean_dec(v_unused_616_);
v___x_607_ = v___x_601_;
v_isShared_608_ = v_isSharedCheck_615_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_diag_605_);
lean_inc(v_postponed_604_);
lean_inc(v_zetaDeltaFVarIds_603_);
lean_inc(v_mctx_602_);
lean_dec(v___x_601_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_615_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; lean_object* v___x_611_; 
v___x_609_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__3, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__3_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__3);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 1, v___x_609_);
v___x_611_ = v___x_607_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_mctx_602_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v___x_609_);
lean_ctor_set(v_reuseFailAlloc_614_, 2, v_zetaDeltaFVarIds_603_);
lean_ctor_set(v_reuseFailAlloc_614_, 3, v_postponed_604_);
lean_ctor_set(v_reuseFailAlloc_614_, 4, v_diag_605_);
v___x_611_ = v_reuseFailAlloc_614_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = lean_st_ref_set(v___y_581_, v___x_611_);
v___x_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_613_, 0, v___y_579_);
return v___x_613_;
}
}
}
}
}
v___jp_620_:
{
if (v_inferRfl_563_ == 0)
{
v___y_579_ = v___y_621_;
v___y_580_ = v___y_622_;
v___y_581_ = v___y_624_;
v___y_582_ = v___y_626_;
goto v___jp_578_;
}
else
{
lean_object* v___x_627_; 
lean_inc(v___y_621_);
v___x_627_ = l_Lean_inferDefEqAttr(v___y_621_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_dec_ref(v___x_627_);
v___y_579_ = v___y_621_;
v___y_580_ = v___y_622_;
v___y_581_ = v___y_624_;
v___y_582_ = v___y_626_;
goto v___jp_578_;
}
else
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_635_; 
lean_dec_ref(v___y_622_);
lean_dec(v___y_621_);
v_a_628_ = lean_ctor_get(v___x_627_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_635_ == 0)
{
v___x_630_ = v___x_627_;
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_627_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_628_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
}
v___jp_636_:
{
lean_object* v___x_644_; 
v___x_644_ = l_Lean_addDecl(v___y_643_, v_forceExpose_564_, v___y_640_, v___y_637_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_dec_ref(v___x_644_);
if (v_defeq_565_ == 0)
{
v___y_621_ = v___y_639_;
v___y_622_ = v___y_641_;
v___y_623_ = v___y_642_;
v___y_624_ = v___y_638_;
v___y_625_ = v___y_640_;
v___y_626_ = v___y_637_;
goto v___jp_620_;
}
else
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = l_Lean_defeqAttr;
lean_inc(v___y_639_);
v___x_646_ = l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2(v___x_645_, v___y_639_, v___y_642_, v___y_638_, v___y_640_, v___y_637_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_dec_ref(v___x_646_);
v___y_621_ = v___y_639_;
v___y_622_ = v___y_641_;
v___y_623_ = v___y_642_;
v___y_624_ = v___y_638_;
v___y_625_ = v___y_640_;
v___y_626_ = v___y_637_;
goto v___jp_620_;
}
else
{
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
lean_dec_ref(v___y_641_);
lean_dec(v___y_639_);
v_a_647_ = lean_ctor_get(v___x_646_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_646_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_646_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_a_647_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
}
else
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_662_; 
lean_dec_ref(v___y_641_);
lean_dec(v___y_639_);
v_a_655_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_662_ == 0)
{
v___x_657_ = v___x_644_;
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_644_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_655_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
v___jp_663_:
{
if (v___y_670_ == 0)
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
lean_inc_n(v___y_666_, 2);
v___x_671_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_671_, 0, v___y_666_);
lean_ctor_set(v___x_671_, 1, v_levelParams_558_);
lean_ctor_set(v___x_671_, 2, v_type_559_);
v___x_672_ = lean_box(0);
v___x_673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_673_, 0, v___y_666_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_674_, 0, v___x_671_);
lean_ctor_set(v___x_674_, 1, v_value_560_);
lean_ctor_set(v___x_674_, 2, v___x_673_);
v___x_675_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
v___y_637_ = v___y_664_;
v___y_638_ = v___y_665_;
v___y_639_ = v___y_666_;
v___y_640_ = v___y_667_;
v___y_641_ = v___y_669_;
v___y_642_ = v___y_668_;
v___y_643_ = v___x_675_;
goto v___jp_636_;
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; uint8_t v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
lean_inc_n(v___y_666_, 2);
v___x_676_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_676_, 0, v___y_666_);
lean_ctor_set(v___x_676_, 1, v_levelParams_558_);
lean_ctor_set(v___x_676_, 2, v_type_559_);
v___x_677_ = lean_box(0);
v___x_678_ = 0;
v___x_679_ = lean_box(0);
v___x_680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_680_, 0, v___y_666_);
lean_ctor_set(v___x_680_, 1, v___x_679_);
v___x_681_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_681_, 0, v___x_676_);
lean_ctor_set(v___x_681_, 1, v_value_560_);
lean_ctor_set(v___x_681_, 2, v___x_677_);
lean_ctor_set(v___x_681_, 3, v___x_680_);
lean_ctor_set_uint8(v___x_681_, sizeof(void*)*4, v___x_678_);
v___x_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
v___y_637_ = v___y_664_;
v___y_638_ = v___y_665_;
v___y_639_ = v___y_666_;
v___y_640_ = v___y_667_;
v___y_641_ = v___y_669_;
v___y_642_ = v___y_668_;
v___y_643_ = v___x_682_;
goto v___jp_636_;
}
}
v___jp_683_:
{
lean_object* v___x_690_; lean_object* v_a_691_; lean_object* v___f_692_; uint8_t v___x_693_; 
v___x_690_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg(v___y_685_, v___y_689_);
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc_n(v_a_691_, 2);
lean_dec_ref(v___x_690_);
lean_inc(v_levelParams_558_);
v___f_692_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAuxLemma___lam__0), 4, 3);
lean_closure_set(v___f_692_, 0, v_a_691_);
lean_closure_set(v___f_692_, 1, v_levelParams_558_);
lean_closure_set(v___f_692_, 2, v___y_684_);
lean_inc_ref(v_env_572_);
v___x_693_ = l_Lean_Environment_hasUnsafe(v_env_572_, v_type_559_);
if (v___x_693_ == 0)
{
uint8_t v___x_694_; 
v___x_694_ = l_Lean_Environment_hasUnsafe(v_env_572_, v_value_560_);
v___y_664_ = v___y_689_;
v___y_665_ = v___y_687_;
v___y_666_ = v_a_691_;
v___y_667_ = v___y_688_;
v___y_668_ = v___y_686_;
v___y_669_ = v___f_692_;
v___y_670_ = v___x_694_;
goto v___jp_663_;
}
else
{
lean_dec_ref(v_env_572_);
v___y_664_ = v___y_689_;
v___y_665_ = v___y_687_;
v___y_666_ = v_a_691_;
v___y_667_ = v___y_688_;
v___y_668_ = v___y_686_;
v___y_669_ = v___f_692_;
v___y_670_ = v___x_693_;
goto v___jp_663_;
}
}
v___jp_695_:
{
lean_object* v___x_700_; lean_object* v_env_701_; lean_object* v_nextMacroScope_702_; lean_object* v_ngen_703_; lean_object* v_auxDeclNGen_704_; lean_object* v_traceState_705_; lean_object* v_messages_706_; lean_object* v_infoState_707_; lean_object* v_snapshotTasks_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_735_; 
v___x_700_ = lean_st_ref_take(v___y_699_);
v_env_701_ = lean_ctor_get(v___x_700_, 0);
v_nextMacroScope_702_ = lean_ctor_get(v___x_700_, 1);
v_ngen_703_ = lean_ctor_get(v___x_700_, 2);
v_auxDeclNGen_704_ = lean_ctor_get(v___x_700_, 3);
v_traceState_705_ = lean_ctor_get(v___x_700_, 4);
v_messages_706_ = lean_ctor_get(v___x_700_, 6);
v_infoState_707_ = lean_ctor_get(v___x_700_, 7);
v_snapshotTasks_708_ = lean_ctor_get(v___x_700_, 8);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_735_ == 0)
{
lean_object* v_unused_736_; 
v_unused_736_ = lean_ctor_get(v___x_700_, 5);
lean_dec(v_unused_736_);
v___x_710_ = v___x_700_;
v_isShared_711_ = v_isSharedCheck_735_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_snapshotTasks_708_);
lean_inc(v_infoState_707_);
lean_inc(v_messages_706_);
lean_inc(v_traceState_705_);
lean_inc(v_auxDeclNGen_704_);
lean_inc(v_ngen_703_);
lean_inc(v_nextMacroScope_702_);
lean_inc(v_env_701_);
lean_dec(v___x_700_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_735_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_712_ = l_Lean_EnvExtension_modifyState___redArg(v___x_573_, v_env_701_, v___y_696_, v_asyncMode_574_, v___x_577_);
v___x_713_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__2, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__2_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__2);
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 5, v___x_713_);
lean_ctor_set(v___x_710_, 0, v___x_712_);
v___x_715_ = v___x_710_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_712_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v_nextMacroScope_702_);
lean_ctor_set(v_reuseFailAlloc_734_, 2, v_ngen_703_);
lean_ctor_set(v_reuseFailAlloc_734_, 3, v_auxDeclNGen_704_);
lean_ctor_set(v_reuseFailAlloc_734_, 4, v_traceState_705_);
lean_ctor_set(v_reuseFailAlloc_734_, 5, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_734_, 6, v_messages_706_);
lean_ctor_set(v_reuseFailAlloc_734_, 7, v_infoState_707_);
lean_ctor_set(v_reuseFailAlloc_734_, 8, v_snapshotTasks_708_);
v___x_715_ = v_reuseFailAlloc_734_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v_mctx_719_; lean_object* v_zetaDeltaFVarIds_720_; lean_object* v_postponed_721_; lean_object* v_diag_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_732_; 
v___x_716_ = lean_st_ref_set(v___y_699_, v___x_715_);
v___x_717_ = lean_st_ref_get(v___y_699_);
lean_dec(v___x_717_);
v___x_718_ = lean_st_ref_take(v___y_698_);
v_mctx_719_ = lean_ctor_get(v___x_718_, 0);
v_zetaDeltaFVarIds_720_ = lean_ctor_get(v___x_718_, 2);
v_postponed_721_ = lean_ctor_get(v___x_718_, 3);
v_diag_722_ = lean_ctor_get(v___x_718_, 4);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_732_ == 0)
{
lean_object* v_unused_733_; 
v_unused_733_ = lean_ctor_get(v___x_718_, 1);
lean_dec(v_unused_733_);
v___x_724_ = v___x_718_;
v_isShared_725_ = v_isSharedCheck_732_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_diag_722_);
lean_inc(v_postponed_721_);
lean_inc(v_zetaDeltaFVarIds_720_);
lean_inc(v_mctx_719_);
lean_dec(v___x_718_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_732_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_726_; lean_object* v___x_728_; 
v___x_726_ = lean_obj_once(&l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__3, &l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__3_once, _init_l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2___closed__3);
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 1, v___x_726_);
v___x_728_ = v___x_724_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_mctx_719_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v___x_726_);
lean_ctor_set(v_reuseFailAlloc_731_, 2, v_zetaDeltaFVarIds_720_);
lean_ctor_set(v_reuseFailAlloc_731_, 3, v_postponed_721_);
lean_ctor_set(v_reuseFailAlloc_731_, 4, v_diag_722_);
v___x_728_ = v_reuseFailAlloc_731_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = lean_st_ref_set(v___y_698_, v___x_728_);
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v___y_697_);
return v___x_730_;
}
}
}
}
}
v___jp_737_:
{
if (v_inferRfl_563_ == 0)
{
v___y_696_ = v___y_738_;
v___y_697_ = v___y_739_;
v___y_698_ = v___y_741_;
v___y_699_ = v___y_743_;
goto v___jp_695_;
}
else
{
lean_object* v___x_744_; 
lean_inc(v___y_739_);
v___x_744_ = l_Lean_inferDefEqAttr(v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_dec_ref(v___x_744_);
v___y_696_ = v___y_738_;
v___y_697_ = v___y_739_;
v___y_698_ = v___y_741_;
v___y_699_ = v___y_743_;
goto v___jp_695_;
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
v_a_745_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_744_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_744_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
}
v___jp_753_:
{
lean_object* v___x_757_; 
v___x_757_ = l_Lean_addDecl(v___y_756_, v_forceExpose_564_, v_a_568_, v_a_569_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_dec_ref(v___x_757_);
if (v_defeq_565_ == 0)
{
v___y_738_ = v___y_754_;
v___y_739_ = v___y_755_;
v___y_740_ = v_a_566_;
v___y_741_ = v_a_567_;
v___y_742_ = v_a_568_;
v___y_743_ = v_a_569_;
goto v___jp_737_;
}
else
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = l_Lean_defeqAttr;
lean_inc(v___y_755_);
v___x_759_ = l_Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2(v___x_758_, v___y_755_, v_a_566_, v_a_567_, v_a_568_, v_a_569_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_dec_ref(v___x_759_);
v___y_738_ = v___y_754_;
v___y_739_ = v___y_755_;
v___y_740_ = v_a_566_;
v___y_741_ = v_a_567_;
v___y_742_ = v_a_568_;
v___y_743_ = v_a_569_;
goto v___jp_737_;
}
else
{
lean_object* v_a_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_767_; 
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
v_a_760_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_767_ == 0)
{
v___x_762_ = v___x_759_;
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_a_760_);
lean_dec(v___x_759_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_765_; 
if (v_isShared_763_ == 0)
{
v___x_765_ = v___x_762_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_a_760_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
v_a_768_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_757_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_757_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_773_; 
if (v_isShared_771_ == 0)
{
v___x_773_ = v___x_770_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_768_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
v___jp_776_:
{
if (v___y_779_ == 0)
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
lean_inc_n(v___y_778_, 2);
v___x_780_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_780_, 0, v___y_778_);
lean_ctor_set(v___x_780_, 1, v_levelParams_558_);
lean_ctor_set(v___x_780_, 2, v_type_559_);
v___x_781_ = lean_box(0);
v___x_782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_782_, 0, v___y_778_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
v___x_783_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_783_, 0, v___x_780_);
lean_ctor_set(v___x_783_, 1, v_value_560_);
lean_ctor_set(v___x_783_, 2, v___x_782_);
v___x_784_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
v___y_754_ = v___y_777_;
v___y_755_ = v___y_778_;
v___y_756_ = v___x_784_;
goto v___jp_753_;
}
else
{
lean_object* v___x_785_; lean_object* v___x_786_; uint8_t v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
lean_inc_n(v___y_778_, 2);
v___x_785_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_785_, 0, v___y_778_);
lean_ctor_set(v___x_785_, 1, v_levelParams_558_);
lean_ctor_set(v___x_785_, 2, v_type_559_);
v___x_786_ = lean_box(0);
v___x_787_ = 0;
v___x_788_ = lean_box(0);
v___x_789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_789_, 0, v___y_778_);
lean_ctor_set(v___x_789_, 1, v___x_788_);
v___x_790_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_790_, 0, v___x_785_);
lean_ctor_set(v___x_790_, 1, v_value_560_);
lean_ctor_set(v___x_790_, 2, v___x_786_);
lean_ctor_set(v___x_790_, 3, v___x_789_);
lean_ctor_set_uint8(v___x_790_, sizeof(void*)*4, v___x_787_);
v___x_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
v___y_754_ = v___y_777_;
v___y_755_ = v___y_778_;
v___y_756_ = v___x_791_;
goto v___jp_753_;
}
}
v___jp_793_:
{
if (v___y_796_ == 0)
{
lean_dec(v___x_792_);
v___y_684_ = v___y_794_;
v___y_685_ = v___y_795_;
v___y_686_ = v___y_797_;
v___y_687_ = v___y_798_;
v___y_688_ = v___y_799_;
v___y_689_ = v___y_800_;
goto v___jp_683_;
}
else
{
uint8_t v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_801_ = 0;
lean_inc_ref(v_type_559_);
v___x_802_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_802_, 0, v_type_559_);
lean_ctor_set_uint8(v___x_802_, sizeof(void*)*1, v___x_801_);
lean_ctor_set_uint8(v___x_802_, sizeof(void*)*1 + 1, v_defeq_565_);
v___x_803_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3___redArg(v___x_792_, v___x_802_);
lean_dec_ref(v___x_802_);
lean_dec(v___x_792_);
if (lean_obj_tag(v___x_803_) == 1)
{
lean_object* v_val_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_814_; 
v_val_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_814_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_814_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_val_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_814_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v_fst_808_; lean_object* v_snd_809_; uint8_t v___x_810_; 
v_fst_808_ = lean_ctor_get(v_val_804_, 0);
lean_inc(v_fst_808_);
v_snd_809_ = lean_ctor_get(v_val_804_, 1);
lean_inc(v_snd_809_);
lean_dec(v_val_804_);
v___x_810_ = l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__4(v_levelParams_558_, v_snd_809_);
lean_dec(v_snd_809_);
if (v___x_810_ == 0)
{
lean_dec(v_fst_808_);
lean_del_object(v___x_806_);
v___y_684_ = v___y_794_;
v___y_685_ = v___y_795_;
v___y_686_ = v___y_797_;
v___y_687_ = v___y_798_;
v___y_688_ = v___y_799_;
v___y_689_ = v___y_800_;
goto v___jp_683_;
}
else
{
lean_object* v___x_812_; 
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec_ref(v_env_572_);
lean_dec_ref(v_value_560_);
lean_dec_ref(v_type_559_);
lean_dec(v_levelParams_558_);
if (v_isShared_807_ == 0)
{
lean_ctor_set_tag(v___x_806_, 0);
lean_ctor_set(v___x_806_, 0, v_fst_808_);
v___x_812_ = v___x_806_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_fst_808_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
else
{
lean_dec(v___x_803_);
v___y_684_ = v___y_794_;
v___y_685_ = v___y_795_;
v___y_686_ = v___y_797_;
v___y_687_ = v___y_798_;
v___y_688_ = v___y_799_;
v___y_689_ = v___y_800_;
goto v___jp_683_;
}
}
}
v___jp_815_:
{
if (v_cache_562_ == 0)
{
lean_object* v___x_819_; lean_object* v_a_820_; lean_object* v___f_821_; uint8_t v___x_822_; 
lean_dec(v___x_792_);
v___x_819_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_mkAuxLemma_spec__0___redArg(v___y_818_, v_a_569_);
v_a_820_ = lean_ctor_get(v___x_819_, 0);
lean_inc_n(v_a_820_, 2);
lean_dec_ref(v___x_819_);
lean_inc(v_levelParams_558_);
v___f_821_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAuxLemma___lam__0), 4, 3);
lean_closure_set(v___f_821_, 0, v_a_820_);
lean_closure_set(v___f_821_, 1, v_levelParams_558_);
lean_closure_set(v___f_821_, 2, v___y_817_);
lean_inc_ref(v_env_572_);
v___x_822_ = l_Lean_Environment_hasUnsafe(v_env_572_, v_type_559_);
if (v___x_822_ == 0)
{
uint8_t v___x_823_; 
v___x_823_ = l_Lean_Environment_hasUnsafe(v_env_572_, v_value_560_);
v___y_777_ = v___f_821_;
v___y_778_ = v_a_820_;
v___y_779_ = v___x_823_;
goto v___jp_776_;
}
else
{
lean_dec_ref(v_env_572_);
v___y_777_ = v___f_821_;
v___y_778_ = v_a_820_;
v___y_779_ = v___x_822_;
goto v___jp_776_;
}
}
else
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3___redArg(v___x_792_, v___y_817_);
if (lean_obj_tag(v___x_824_) == 1)
{
lean_object* v_val_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_835_; 
v_val_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_835_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_835_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_val_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_835_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v_fst_829_; lean_object* v_snd_830_; uint8_t v___x_831_; 
v_fst_829_ = lean_ctor_get(v_val_825_, 0);
lean_inc(v_fst_829_);
v_snd_830_ = lean_ctor_get(v_val_825_, 1);
lean_inc(v_snd_830_);
lean_dec(v_val_825_);
v___x_831_ = l_List_beq___at___00Lean_Meta_mkAuxLemma_spec__4(v_levelParams_558_, v_snd_830_);
lean_dec(v_snd_830_);
if (v___x_831_ == 0)
{
lean_dec(v_fst_829_);
lean_del_object(v___x_827_);
v___y_794_ = v___y_817_;
v___y_795_ = v___y_818_;
v___y_796_ = v___y_816_;
v___y_797_ = v_a_566_;
v___y_798_ = v_a_567_;
v___y_799_ = v_a_568_;
v___y_800_ = v_a_569_;
goto v___jp_793_;
}
else
{
lean_object* v___x_833_; 
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v___x_792_);
lean_dec_ref(v_env_572_);
lean_dec_ref(v_value_560_);
lean_dec_ref(v_type_559_);
lean_dec(v_levelParams_558_);
if (v_isShared_828_ == 0)
{
lean_ctor_set_tag(v___x_827_, 0);
lean_ctor_set(v___x_827_, 0, v_fst_829_);
v___x_833_ = v___x_827_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_fst_829_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
else
{
lean_dec(v___x_824_);
v___y_794_ = v___y_817_;
v___y_795_ = v___y_818_;
v___y_796_ = v___y_816_;
v___y_797_ = v_a_566_;
v___y_798_ = v_a_567_;
v___y_799_ = v_a_568_;
v___y_800_ = v_a_569_;
goto v___jp_793_;
}
}
}
v___jp_836_:
{
lean_object* v___x_838_; 
lean_inc_ref(v_type_559_);
v___x_838_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_838_, 0, v_type_559_);
lean_ctor_set_uint8(v___x_838_, sizeof(void*)*1, v___y_837_);
lean_ctor_set_uint8(v___x_838_, sizeof(void*)*1 + 1, v_defeq_565_);
if (lean_obj_tag(v_kind_x3f_561_) == 0)
{
lean_object* v___x_839_; 
v___x_839_ = lean_obj_once(&l_Lean_Meta_mkAuxLemma___closed__1, &l_Lean_Meta_mkAuxLemma___closed__1_once, _init_l_Lean_Meta_mkAuxLemma___closed__1);
v___y_816_ = v___y_837_;
v___y_817_ = v___x_838_;
v___y_818_ = v___x_839_;
goto v___jp_815_;
}
else
{
lean_object* v_val_840_; 
v_val_840_ = lean_ctor_get(v_kind_x3f_561_, 0);
lean_inc(v_val_840_);
lean_dec_ref(v_kind_x3f_561_);
v___y_816_ = v___y_837_;
v___y_817_ = v___x_838_;
v___y_818_ = v_val_840_;
goto v___jp_815_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxLemma___boxed(lean_object* v_levelParams_843_, lean_object* v_type_844_, lean_object* v_value_845_, lean_object* v_kind_x3f_846_, lean_object* v_cache_847_, lean_object* v_inferRfl_848_, lean_object* v_forceExpose_849_, lean_object* v_defeq_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_){
_start:
{
uint8_t v_cache_boxed_856_; uint8_t v_inferRfl_boxed_857_; uint8_t v_forceExpose_boxed_858_; uint8_t v_defeq_boxed_859_; lean_object* v_res_860_; 
v_cache_boxed_856_ = lean_unbox(v_cache_847_);
v_inferRfl_boxed_857_ = lean_unbox(v_inferRfl_848_);
v_forceExpose_boxed_858_ = lean_unbox(v_forceExpose_849_);
v_defeq_boxed_859_ = lean_unbox(v_defeq_850_);
v_res_860_ = l_Lean_Meta_mkAuxLemma(v_levelParams_843_, v_type_844_, v_value_845_, v_kind_x3f_846_, v_cache_boxed_856_, v_inferRfl_boxed_857_, v_forceExpose_boxed_858_, v_defeq_boxed_859_, v_a_851_, v_a_852_, v_a_853_, v_a_854_);
lean_dec(v_a_854_);
lean_dec_ref(v_a_853_);
lean_dec(v_a_852_);
lean_dec_ref(v_a_851_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1(lean_object* v_00_u03b2_861_, lean_object* v_x_862_, lean_object* v_x_863_, lean_object* v_x_864_){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1___redArg(v_x_862_, v_x_863_, v_x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3(lean_object* v_00_u03b2_866_, lean_object* v_x_867_, lean_object* v_x_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3___redArg(v_x_867_, v_x_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3___boxed(lean_object* v_00_u03b2_870_, lean_object* v_x_871_, lean_object* v_x_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3(v_00_u03b2_870_, v_x_871_, v_x_872_);
lean_dec_ref(v_x_872_);
lean_dec_ref(v_x_871_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1(lean_object* v_00_u03b2_874_, lean_object* v_x_875_, size_t v_x_876_, size_t v_x_877_, lean_object* v_x_878_, lean_object* v_x_879_){
_start:
{
lean_object* v___x_880_; 
v___x_880_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___redArg(v_x_875_, v_x_876_, v_x_877_, v_x_878_, v_x_879_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1___boxed(lean_object* v_00_u03b2_881_, lean_object* v_x_882_, lean_object* v_x_883_, lean_object* v_x_884_, lean_object* v_x_885_, lean_object* v_x_886_){
_start:
{
size_t v_x_7456__boxed_887_; size_t v_x_7457__boxed_888_; lean_object* v_res_889_; 
v_x_7456__boxed_887_ = lean_unbox_usize(v_x_883_);
lean_dec(v_x_883_);
v_x_7457__boxed_888_ = lean_unbox_usize(v_x_884_);
lean_dec(v_x_884_);
v_res_889_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1(v_00_u03b2_881_, v_x_882_, v_x_7456__boxed_887_, v_x_7457__boxed_888_, v_x_885_, v_x_886_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3(lean_object* v_00_u03b1_890_, lean_object* v_attrName_891_, lean_object* v_declName_892_, lean_object* v_asyncPrefix_x3f_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___redArg(v_attrName_891_, v_declName_892_, v_asyncPrefix_x3f_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3___boxed(lean_object* v_00_u03b1_900_, lean_object* v_attrName_901_, lean_object* v_declName_902_, lean_object* v_asyncPrefix_x3f_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3(v_00_u03b1_900_, v_attrName_901_, v_declName_902_, v_asyncPrefix_x3f_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_);
lean_dec(v___y_907_);
lean_dec_ref(v___y_906_);
lean_dec(v___y_905_);
lean_dec_ref(v___y_904_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4(lean_object* v_00_u03b1_910_, lean_object* v_attrName_911_, lean_object* v_declName_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
lean_object* v___x_918_; 
v___x_918_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___redArg(v_attrName_911_, v_declName_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4___boxed(lean_object* v_00_u03b1_919_, lean_object* v_attrName_920_, lean_object* v_declName_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__4(v_00_u03b1_919_, v_attrName_920_, v_declName_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6(lean_object* v_00_u03b2_928_, lean_object* v_x_929_, size_t v_x_930_, lean_object* v_x_931_){
_start:
{
lean_object* v___x_932_; 
v___x_932_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___redArg(v_x_929_, v_x_930_, v_x_931_);
return v___x_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6___boxed(lean_object* v_00_u03b2_933_, lean_object* v_x_934_, lean_object* v_x_935_, lean_object* v_x_936_){
_start:
{
size_t v_x_7507__boxed_937_; lean_object* v_res_938_; 
v_x_7507__boxed_937_ = lean_unbox_usize(v_x_935_);
lean_dec(v_x_935_);
v_res_938_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6(v_00_u03b2_933_, v_x_934_, v_x_7507__boxed_937_, v_x_936_);
lean_dec_ref(v_x_936_);
lean_dec_ref(v_x_934_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_939_, lean_object* v_n_940_, lean_object* v_k_941_, lean_object* v_v_942_){
_start:
{
lean_object* v___x_943_; 
v___x_943_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2___redArg(v_n_940_, v_k_941_, v_v_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_944_, size_t v_depth_945_, lean_object* v_keys_946_, lean_object* v_vals_947_, lean_object* v_heq_948_, lean_object* v_i_949_, lean_object* v_entries_950_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___redArg(v_depth_945_, v_keys_946_, v_vals_947_, v_i_949_, v_entries_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_952_, lean_object* v_depth_953_, lean_object* v_keys_954_, lean_object* v_vals_955_, lean_object* v_heq_956_, lean_object* v_i_957_, lean_object* v_entries_958_){
_start:
{
size_t v_depth_boxed_959_; lean_object* v_res_960_; 
v_depth_boxed_959_ = lean_unbox_usize(v_depth_953_);
lean_dec(v_depth_953_);
v_res_960_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__3(v_00_u03b2_952_, v_depth_boxed_959_, v_keys_954_, v_vals_955_, v_heq_956_, v_i_957_, v_entries_958_);
lean_dec_ref(v_vals_955_);
lean_dec_ref(v_keys_954_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6(lean_object* v_00_u03b1_961_, lean_object* v_msg_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_){
_start:
{
lean_object* v___x_968_; 
v___x_968_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6___redArg(v_msg_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b1_969_, lean_object* v_msg_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_Meta_mkAuxLemma_spec__2_spec__3_spec__6(v_00_u03b1_969_, v_msg_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6_spec__10(lean_object* v_00_u03b2_977_, lean_object* v_keys_978_, lean_object* v_vals_979_, lean_object* v_heq_980_, lean_object* v_i_981_, lean_object* v_k_982_){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6_spec__10___redArg(v_keys_978_, v_vals_979_, v_i_981_, v_k_982_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6_spec__10___boxed(lean_object* v_00_u03b2_984_, lean_object* v_keys_985_, lean_object* v_vals_986_, lean_object* v_heq_987_, lean_object* v_i_988_, lean_object* v_k_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_mkAuxLemma_spec__3_spec__6_spec__10(v_00_u03b2_984_, v_keys_985_, v_vals_986_, v_heq_987_, v_i_988_, v_k_989_);
lean_dec_ref(v_k_989_);
lean_dec_ref(v_vals_986_);
lean_dec_ref(v_keys_985_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_991_, lean_object* v_x_992_, lean_object* v_x_993_, lean_object* v_x_994_, lean_object* v_x_995_){
_start:
{
lean_object* v___x_996_; 
v___x_996_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_mkAuxLemma_spec__1_spec__1_spec__2_spec__6___redArg(v_x_992_, v_x_993_, v_x_994_, v_x_995_);
return v___x_996_;
}
}
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_DefEqAttrib(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DefEqAttrib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instBEqAuxLemmaKey = _init_l_Lean_Meta_instBEqAuxLemmaKey();
lean_mark_persistent(l_Lean_Meta_instBEqAuxLemmaKey);
l_Lean_Meta_instHashableAuxLemmaKey = _init_l_Lean_Meta_instHashableAuxLemmaKey();
lean_mark_persistent(l_Lean_Meta_instHashableAuxLemmaKey);
l_Lean_Meta_instInhabitedAuxLemmas_default = _init_l_Lean_Meta_instInhabitedAuxLemmas_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedAuxLemmas_default);
l_Lean_Meta_instInhabitedAuxLemmas = _init_l_Lean_Meta_instInhabitedAuxLemmas();
lean_mark_persistent(l_Lean_Meta_instInhabitedAuxLemmas);
res = l___private_Lean_Meta_Tactic_AuxLemma_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_AuxLemma_236769399____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_auxLemmasExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_auxLemmasExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_DefEqAttrib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DefEqAttrib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_AuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_AuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_AuxLemma(builtin);
}
#ifdef __cplusplus
}
#endif
