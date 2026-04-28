// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Order.Assert
// Imports: public import Lean.Meta.Tactic.Grind.Order.OrderM import Init.Grind.Propagator import Init.Grind.Order import Lean.Meta.Tactic.Grind.PropagatorAttr import Lean.Meta.Tactic.Grind.Order.Util import Lean.Meta.Tactic.Grind.Order.Proof
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_modifyStruct___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_getDist_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Order_instDecidableLTWeight(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_getStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_get_x27___redArg(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_alreadyInternalized___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_Cnstr_getWeight___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Order_Weight_add(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Order_Weight_isNeg(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_ToPropagate_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_getExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_Cnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_isPartialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Order_Weight_isZero(lean_object*);
lean_object* l_Lean_Meta_Grind_isEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Order_instDecidableLEWeight(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Order_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkPropagateEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkPropagateEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkEqProofOfLeOfLe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkType;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkUnsatProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_closeGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkSelfUnsatProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_getCnstr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_isInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_isLinearPreorder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_eagerReflBoolTrue;
lean_object* l_Lean_Meta_Grind_Order_mkLinearOrdRingPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_isRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkLeLtLinearPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_hasLt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkLeLinearPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_getNodeId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkLePreorderPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkOrdRingPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lean_AssocList_forM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_instInhabitedGoalM(lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkPropagateSelfEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_UInt64_ofNat___boxed(lean_object*);
lean_object* l_instHashableProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkPropagateSelfEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setUnsat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setUnsat___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachTargetOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachTargetOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateEqTrue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateEqFalse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___lam__0(lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__0;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Order_addEdge___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_addEdge___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Order_addEdge___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_addEdge___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Order_addEdge___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_addEdge___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_addEdge(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_addEdge___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__14;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__17;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__19;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__21;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__23;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__25;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__27;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__29;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__30;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__31;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__3_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__3_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Order_processNewEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Order_processNewEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Order_processNewEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Order_processNewEq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Order_processNewEq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Order_processNewEq___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_Order_processNewEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_processNewEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_processNewEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath_go(lean_object* v_u_1_, lean_object* v_v_2_, lean_object* v_p_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
lean_object* v_w_16_; lean_object* v_proof_17_; uint8_t v___x_18_; 
v_w_16_ = lean_ctor_get(v_p_3_, 0);
v_proof_17_ = lean_ctor_get(v_p_3_, 2);
v___x_18_ = lean_nat_dec_eq(v_u_1_, v_w_16_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Meta_Grind_Order_getProof(v_u_1_, v_w_16_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_);
if (lean_obj_tag(v___x_19_) == 0)
{
lean_object* v_a_20_; lean_object* v___x_21_; 
v_a_20_ = lean_ctor_get(v___x_19_, 0);
lean_inc(v_a_20_);
lean_dec_ref(v___x_19_);
v___x_21_ = l_Lean_Meta_Grind_Order_mkTrans(v_a_20_, v_p_3_, v_v_2_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_);
if (lean_obj_tag(v___x_21_) == 0)
{
lean_object* v_a_22_; 
v_a_22_ = lean_ctor_get(v___x_21_, 0);
lean_inc(v_a_22_);
lean_dec_ref(v___x_21_);
v_p_3_ = v_a_22_;
goto _start;
}
else
{
lean_object* v_a_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_31_; 
v_a_24_ = lean_ctor_get(v___x_21_, 0);
v_isSharedCheck_31_ = !lean_is_exclusive(v___x_21_);
if (v_isSharedCheck_31_ == 0)
{
v___x_26_ = v___x_21_;
v_isShared_27_ = v_isSharedCheck_31_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_a_24_);
lean_dec(v___x_21_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_31_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_29_; 
if (v_isShared_27_ == 0)
{
v___x_29_ = v___x_26_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_30_; 
v_reuseFailAlloc_30_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_30_, 0, v_a_24_);
v___x_29_ = v_reuseFailAlloc_30_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
return v___x_29_;
}
}
}
}
else
{
lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_39_; 
lean_dec_ref(v_p_3_);
v_a_32_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_39_ == 0)
{
v___x_34_ = v___x_19_;
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_19_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_37_; 
if (v_isShared_35_ == 0)
{
v___x_37_ = v___x_34_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v_a_32_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
else
{
lean_object* v___x_40_; 
lean_inc_ref(v_proof_17_);
lean_dec_ref(v_p_3_);
v___x_40_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_40_, 0, v_proof_17_);
return v___x_40_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath_go___boxed(lean_object* v_u_41_, lean_object* v_v_42_, lean_object* v_p_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath_go(v_u_41_, v_v_42_, v_p_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec(v_a_46_);
lean_dec(v_a_45_);
lean_dec(v_a_44_);
lean_dec(v_v_42_);
lean_dec(v_u_41_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(lean_object* v_u_57_, lean_object* v_v_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_Grind_Order_getProof(v_u_57_, v_v_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v_a_72_; lean_object* v___x_73_; 
v_a_72_ = lean_ctor_get(v___x_71_, 0);
lean_inc(v_a_72_);
lean_dec_ref(v___x_71_);
v___x_73_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath_go(v_u_57_, v_v_58_, v_a_72_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
return v___x_73_;
}
else
{
lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_81_; 
v_a_74_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_81_ == 0)
{
v___x_76_ = v___x_71_;
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_dec(v___x_71_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_79_; 
if (v_isShared_77_ == 0)
{
v___x_79_ = v___x_76_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_a_74_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath___boxed(lean_object* v_u_82_, lean_object* v_v_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_u_82_, v_v_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_, v_a_94_);
lean_dec(v_a_94_);
lean_dec_ref(v_a_93_);
lean_dec(v_a_92_);
lean_dec_ref(v_a_91_);
lean_dec(v_a_90_);
lean_dec_ref(v_a_89_);
lean_dec(v_a_88_);
lean_dec_ref(v_a_87_);
lean_dec(v_a_86_);
lean_dec(v_a_85_);
lean_dec(v_a_84_);
lean_dec(v_v_83_);
lean_dec(v_u_82_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setUnsat(lean_object* v_u_97_, lean_object* v_v_98_, lean_object* v_kuv_99_, lean_object* v_huv_100_, lean_object* v_kvu_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_v_98_, v_u_97_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_116_; 
v_a_115_ = lean_ctor_get(v___x_114_, 0);
lean_inc(v_a_115_);
lean_dec_ref(v___x_114_);
v___x_116_ = l_Lean_Meta_Grind_Order_getExpr(v_u_97_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; lean_object* v___x_118_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
lean_inc(v_a_117_);
lean_dec_ref(v___x_116_);
v___x_118_ = l_Lean_Meta_Grind_Order_getExpr(v_v_98_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_object* v_a_119_; lean_object* v___x_120_; 
v_a_119_ = lean_ctor_get(v___x_118_, 0);
lean_inc(v_a_119_);
lean_dec_ref(v___x_118_);
v___x_120_ = l_Lean_Meta_Grind_Order_mkUnsatProof(v_a_117_, v_a_119_, v_kuv_99_, v_huv_100_, v_kvu_101_, v_a_115_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v_a_121_; lean_object* v___x_122_; 
v_a_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_a_121_);
lean_dec_ref(v___x_120_);
v___x_122_ = l_Lean_Meta_Grind_closeGoal(v_a_121_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
return v___x_122_;
}
else
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
v_a_123_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_120_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_120_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
else
{
lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_138_; 
lean_dec(v_a_117_);
lean_dec(v_a_115_);
lean_dec_ref(v_huv_100_);
v_a_131_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_138_ == 0)
{
v___x_133_ = v___x_118_;
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_118_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_136_; 
if (v_isShared_134_ == 0)
{
v___x_136_ = v___x_133_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_a_131_);
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
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
lean_dec(v_a_115_);
lean_dec_ref(v_huv_100_);
v_a_139_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_116_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_116_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
lean_dec_ref(v_huv_100_);
v_a_147_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v___x_114_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_114_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_a_147_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setUnsat___boxed(lean_object** _args){
lean_object* v_u_155_ = _args[0];
lean_object* v_v_156_ = _args[1];
lean_object* v_kuv_157_ = _args[2];
lean_object* v_huv_158_ = _args[3];
lean_object* v_kvu_159_ = _args[4];
lean_object* v_a_160_ = _args[5];
lean_object* v_a_161_ = _args[6];
lean_object* v_a_162_ = _args[7];
lean_object* v_a_163_ = _args[8];
lean_object* v_a_164_ = _args[9];
lean_object* v_a_165_ = _args[10];
lean_object* v_a_166_ = _args[11];
lean_object* v_a_167_ = _args[12];
lean_object* v_a_168_ = _args[13];
lean_object* v_a_169_ = _args[14];
lean_object* v_a_170_ = _args[15];
lean_object* v_a_171_ = _args[16];
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setUnsat(v_u_155_, v_v_156_, v_kuv_157_, v_huv_158_, v_kvu_159_, v_a_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_);
lean_dec(v_a_170_);
lean_dec_ref(v_a_169_);
lean_dec(v_a_168_);
lean_dec_ref(v_a_167_);
lean_dec(v_a_166_);
lean_dec_ref(v_a_165_);
lean_dec(v_a_164_);
lean_dec_ref(v_a_163_);
lean_dec(v_a_162_);
lean_dec(v_a_161_);
lean_dec(v_a_160_);
lean_dec_ref(v_kvu_159_);
lean_dec_ref(v_kuv_157_);
lean_dec(v_v_156_);
lean_dec(v_u_155_);
return v_res_172_;
}
}
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg(lean_object* v_a_173_, lean_object* v_x_174_){
_start:
{
if (lean_obj_tag(v_x_174_) == 0)
{
uint8_t v___x_175_; 
v___x_175_ = 0;
return v___x_175_;
}
else
{
lean_object* v_key_176_; lean_object* v_tail_177_; uint8_t v___x_178_; 
v_key_176_ = lean_ctor_get(v_x_174_, 0);
v_tail_177_ = lean_ctor_get(v_x_174_, 2);
v___x_178_ = lean_nat_dec_eq(v_key_176_, v_a_173_);
if (v___x_178_ == 0)
{
v_x_174_ = v_tail_177_;
goto _start;
}
else
{
return v___x_178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg___boxed(lean_object* v_a_180_, lean_object* v_x_181_){
_start:
{
uint8_t v_res_182_; lean_object* v_r_183_; 
v_res_182_ = l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg(v_a_180_, v_x_181_);
lean_dec(v_x_181_);
lean_dec(v_a_180_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1___redArg(lean_object* v_a_184_, lean_object* v_b_185_, lean_object* v_x_186_){
_start:
{
if (lean_obj_tag(v_x_186_) == 0)
{
lean_dec(v_b_185_);
lean_dec(v_a_184_);
return v_x_186_;
}
else
{
lean_object* v_key_187_; lean_object* v_value_188_; lean_object* v_tail_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_201_; 
v_key_187_ = lean_ctor_get(v_x_186_, 0);
v_value_188_ = lean_ctor_get(v_x_186_, 1);
v_tail_189_ = lean_ctor_get(v_x_186_, 2);
v_isSharedCheck_201_ = !lean_is_exclusive(v_x_186_);
if (v_isSharedCheck_201_ == 0)
{
v___x_191_ = v_x_186_;
v_isShared_192_ = v_isSharedCheck_201_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_tail_189_);
lean_inc(v_value_188_);
lean_inc(v_key_187_);
lean_dec(v_x_186_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_201_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
uint8_t v___x_193_; 
v___x_193_ = lean_nat_dec_eq(v_key_187_, v_a_184_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; lean_object* v___x_196_; 
v___x_194_ = l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1___redArg(v_a_184_, v_b_185_, v_tail_189_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 2, v___x_194_);
v___x_196_ = v___x_191_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_key_187_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v_value_188_);
lean_ctor_set(v_reuseFailAlloc_197_, 2, v___x_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
else
{
lean_object* v___x_199_; 
lean_dec(v_value_188_);
lean_dec(v_key_187_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 1, v_b_185_);
lean_ctor_set(v___x_191_, 0, v_a_184_);
v___x_199_ = v___x_191_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_a_184_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_b_185_);
lean_ctor_set(v_reuseFailAlloc_200_, 2, v_tail_189_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(lean_object* v_m_202_, lean_object* v_k_203_, lean_object* v_v_204_){
_start:
{
uint8_t v___x_205_; 
v___x_205_ = l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg(v_k_203_, v_m_202_);
if (v___x_205_ == 0)
{
lean_object* v___x_206_; 
v___x_206_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_206_, 0, v_k_203_);
lean_ctor_set(v___x_206_, 1, v_v_204_);
lean_ctor_set(v___x_206_, 2, v_m_202_);
return v___x_206_;
}
else
{
lean_object* v___x_207_; 
v___x_207_ = l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1___redArg(v_k_203_, v_v_204_, v_m_202_);
return v___x_207_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3(lean_object* v_u_208_, lean_object* v_k_209_, lean_object* v_x_210_, size_t v_x_211_, size_t v_x_212_){
_start:
{
if (lean_obj_tag(v_x_210_) == 0)
{
lean_object* v_cs_213_; size_t v_j_214_; lean_object* v___x_215_; lean_object* v___x_216_; uint8_t v___x_217_; 
v_cs_213_ = lean_ctor_get(v_x_210_, 0);
v_j_214_ = lean_usize_shift_right(v_x_211_, v_x_212_);
v___x_215_ = lean_usize_to_nat(v_j_214_);
v___x_216_ = lean_array_get_size(v_cs_213_);
v___x_217_ = lean_nat_dec_lt(v___x_215_, v___x_216_);
if (v___x_217_ == 0)
{
lean_dec(v___x_215_);
lean_dec_ref(v_k_209_);
lean_dec(v_u_208_);
return v_x_210_;
}
else
{
lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_235_; 
lean_inc_ref(v_cs_213_);
v_isSharedCheck_235_ = !lean_is_exclusive(v_x_210_);
if (v_isSharedCheck_235_ == 0)
{
lean_object* v_unused_236_; 
v_unused_236_ = lean_ctor_get(v_x_210_, 0);
lean_dec(v_unused_236_);
v___x_219_ = v_x_210_;
v_isShared_220_ = v_isSharedCheck_235_;
goto v_resetjp_218_;
}
else
{
lean_dec(v_x_210_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_235_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
size_t v___x_221_; size_t v___x_222_; size_t v___x_223_; size_t v_i_224_; size_t v___x_225_; size_t v_shift_226_; lean_object* v_v_227_; lean_object* v___x_228_; lean_object* v_xs_x27_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_221_ = ((size_t)1ULL);
v___x_222_ = lean_usize_shift_left(v___x_221_, v_x_212_);
v___x_223_ = lean_usize_sub(v___x_222_, v___x_221_);
v_i_224_ = lean_usize_land(v_x_211_, v___x_223_);
v___x_225_ = ((size_t)5ULL);
v_shift_226_ = lean_usize_sub(v_x_212_, v___x_225_);
v_v_227_ = lean_array_fget(v_cs_213_, v___x_215_);
v___x_228_ = lean_box(0);
v_xs_x27_229_ = lean_array_fset(v_cs_213_, v___x_215_, v___x_228_);
v___x_230_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3(v_u_208_, v_k_209_, v_v_227_, v_i_224_, v_shift_226_);
v___x_231_ = lean_array_fset(v_xs_x27_229_, v___x_215_, v___x_230_);
lean_dec(v___x_215_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 0, v___x_231_);
v___x_233_ = v___x_219_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_231_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
else
{
lean_object* v_vs_237_; lean_object* v___x_238_; lean_object* v___x_239_; uint8_t v___x_240_; 
v_vs_237_ = lean_ctor_get(v_x_210_, 0);
v___x_238_ = lean_usize_to_nat(v_x_211_);
v___x_239_ = lean_array_get_size(v_vs_237_);
v___x_240_ = lean_nat_dec_lt(v___x_238_, v___x_239_);
if (v___x_240_ == 0)
{
lean_dec(v___x_238_);
lean_dec_ref(v_k_209_);
lean_dec(v_u_208_);
return v_x_210_;
}
else
{
lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_252_; 
lean_inc_ref(v_vs_237_);
v_isSharedCheck_252_ = !lean_is_exclusive(v_x_210_);
if (v_isSharedCheck_252_ == 0)
{
lean_object* v_unused_253_; 
v_unused_253_ = lean_ctor_get(v_x_210_, 0);
lean_dec(v_unused_253_);
v___x_242_ = v_x_210_;
v_isShared_243_ = v_isSharedCheck_252_;
goto v_resetjp_241_;
}
else
{
lean_dec(v_x_210_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_252_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v_v_244_; lean_object* v___x_245_; lean_object* v_xs_x27_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_250_; 
v_v_244_ = lean_array_fget(v_vs_237_, v___x_238_);
v___x_245_ = lean_box(0);
v_xs_x27_246_ = lean_array_fset(v_vs_237_, v___x_238_, v___x_245_);
v___x_247_ = l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(v_v_244_, v_u_208_, v_k_209_);
v___x_248_ = lean_array_fset(v_xs_x27_246_, v___x_238_, v___x_247_);
lean_dec(v___x_238_);
if (v_isShared_243_ == 0)
{
lean_ctor_set(v___x_242_, 0, v___x_248_);
v___x_250_ = v___x_242_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v___x_248_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___boxed(lean_object* v_u_254_, lean_object* v_k_255_, lean_object* v_x_256_, lean_object* v_x_257_, lean_object* v_x_258_){
_start:
{
size_t v_x_278__boxed_259_; size_t v_x_279__boxed_260_; lean_object* v_res_261_; 
v_x_278__boxed_259_ = lean_unbox_usize(v_x_257_);
lean_dec(v_x_257_);
v_x_279__boxed_260_ = lean_unbox_usize(v_x_258_);
lean_dec(v_x_258_);
v_res_261_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3(v_u_254_, v_k_255_, v_x_256_, v_x_278__boxed_259_, v_x_279__boxed_260_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1(lean_object* v_u_262_, lean_object* v_k_263_, lean_object* v_t_264_, lean_object* v_i_265_){
_start:
{
lean_object* v_root_266_; lean_object* v_tail_267_; lean_object* v_size_268_; size_t v_shift_269_; lean_object* v_tailOff_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_294_; 
v_root_266_ = lean_ctor_get(v_t_264_, 0);
v_tail_267_ = lean_ctor_get(v_t_264_, 1);
v_size_268_ = lean_ctor_get(v_t_264_, 2);
v_shift_269_ = lean_ctor_get_usize(v_t_264_, 4);
v_tailOff_270_ = lean_ctor_get(v_t_264_, 3);
v_isSharedCheck_294_ = !lean_is_exclusive(v_t_264_);
if (v_isSharedCheck_294_ == 0)
{
v___x_272_ = v_t_264_;
v_isShared_273_ = v_isSharedCheck_294_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_tailOff_270_);
lean_inc(v_size_268_);
lean_inc(v_tail_267_);
lean_inc(v_root_266_);
lean_dec(v_t_264_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_294_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
uint8_t v___x_274_; 
v___x_274_ = lean_nat_dec_le(v_tailOff_270_, v_i_265_);
if (v___x_274_ == 0)
{
size_t v___x_275_; lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_275_ = lean_usize_of_nat(v_i_265_);
v___x_276_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3(v_u_262_, v_k_263_, v_root_266_, v___x_275_, v_shift_269_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 0, v___x_276_);
v___x_278_ = v___x_272_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v_tail_267_);
lean_ctor_set(v_reuseFailAlloc_279_, 2, v_size_268_);
lean_ctor_set(v_reuseFailAlloc_279_, 3, v_tailOff_270_);
lean_ctor_set_usize(v_reuseFailAlloc_279_, 4, v_shift_269_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
else
{
lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_280_ = lean_nat_sub(v_i_265_, v_tailOff_270_);
v___x_281_ = lean_array_get_size(v_tail_267_);
v___x_282_ = lean_nat_dec_lt(v___x_280_, v___x_281_);
if (v___x_282_ == 0)
{
lean_object* v___x_284_; 
lean_dec(v___x_280_);
lean_dec_ref(v_k_263_);
lean_dec(v_u_262_);
if (v_isShared_273_ == 0)
{
v___x_284_ = v___x_272_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_root_266_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v_tail_267_);
lean_ctor_set(v_reuseFailAlloc_285_, 2, v_size_268_);
lean_ctor_set(v_reuseFailAlloc_285_, 3, v_tailOff_270_);
lean_ctor_set_usize(v_reuseFailAlloc_285_, 4, v_shift_269_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
else
{
lean_object* v_v_286_; lean_object* v___x_287_; lean_object* v_xs_x27_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_292_; 
v_v_286_ = lean_array_fget(v_tail_267_, v___x_280_);
v___x_287_ = lean_box(0);
v_xs_x27_288_ = lean_array_fset(v_tail_267_, v___x_280_, v___x_287_);
v___x_289_ = l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(v_v_286_, v_u_262_, v_k_263_);
v___x_290_ = lean_array_fset(v_xs_x27_288_, v___x_280_, v___x_289_);
lean_dec(v___x_280_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 1, v___x_290_);
v___x_292_ = v___x_272_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_root_266_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v___x_290_);
lean_ctor_set(v_reuseFailAlloc_293_, 2, v_size_268_);
lean_ctor_set(v_reuseFailAlloc_293_, 3, v_tailOff_270_);
lean_ctor_set_usize(v_reuseFailAlloc_293_, 4, v_shift_269_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1___boxed(lean_object* v_u_295_, lean_object* v_k_296_, lean_object* v_t_297_, lean_object* v_i_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1(v_u_295_, v_k_296_, v_t_297_, v_i_298_);
lean_dec(v_i_298_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg___lam__0(lean_object* v_u_300_, lean_object* v_k_301_, lean_object* v_v_302_, lean_object* v_s_303_){
_start:
{
lean_object* v_id_304_; lean_object* v_type_305_; lean_object* v_u_306_; lean_object* v_isPreorderInst_307_; lean_object* v_leInst_308_; lean_object* v_ltInst_x3f_309_; lean_object* v_isPartialInst_x3f_310_; lean_object* v_isLinearPreInst_x3f_311_; lean_object* v_lawfulOrderLTInst_x3f_312_; lean_object* v_ringId_x3f_313_; uint8_t v_isCommRing_314_; lean_object* v_ringInst_x3f_315_; lean_object* v_orderedRingInst_x3f_316_; lean_object* v_leFn_317_; lean_object* v_ltFn_x3f_318_; lean_object* v_nodes_319_; lean_object* v_nodeMap_320_; lean_object* v_cnstrs_321_; lean_object* v_cnstrsOf_322_; lean_object* v_sources_323_; lean_object* v_targets_324_; lean_object* v_proofs_325_; lean_object* v_propagate_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_335_; 
v_id_304_ = lean_ctor_get(v_s_303_, 0);
v_type_305_ = lean_ctor_get(v_s_303_, 1);
v_u_306_ = lean_ctor_get(v_s_303_, 2);
v_isPreorderInst_307_ = lean_ctor_get(v_s_303_, 3);
v_leInst_308_ = lean_ctor_get(v_s_303_, 4);
v_ltInst_x3f_309_ = lean_ctor_get(v_s_303_, 5);
v_isPartialInst_x3f_310_ = lean_ctor_get(v_s_303_, 6);
v_isLinearPreInst_x3f_311_ = lean_ctor_get(v_s_303_, 7);
v_lawfulOrderLTInst_x3f_312_ = lean_ctor_get(v_s_303_, 8);
v_ringId_x3f_313_ = lean_ctor_get(v_s_303_, 9);
v_isCommRing_314_ = lean_ctor_get_uint8(v_s_303_, sizeof(void*)*22);
v_ringInst_x3f_315_ = lean_ctor_get(v_s_303_, 10);
v_orderedRingInst_x3f_316_ = lean_ctor_get(v_s_303_, 11);
v_leFn_317_ = lean_ctor_get(v_s_303_, 12);
v_ltFn_x3f_318_ = lean_ctor_get(v_s_303_, 13);
v_nodes_319_ = lean_ctor_get(v_s_303_, 14);
v_nodeMap_320_ = lean_ctor_get(v_s_303_, 15);
v_cnstrs_321_ = lean_ctor_get(v_s_303_, 16);
v_cnstrsOf_322_ = lean_ctor_get(v_s_303_, 17);
v_sources_323_ = lean_ctor_get(v_s_303_, 18);
v_targets_324_ = lean_ctor_get(v_s_303_, 19);
v_proofs_325_ = lean_ctor_get(v_s_303_, 20);
v_propagate_326_ = lean_ctor_get(v_s_303_, 21);
v_isSharedCheck_335_ = !lean_is_exclusive(v_s_303_);
if (v_isSharedCheck_335_ == 0)
{
v___x_328_ = v_s_303_;
v_isShared_329_ = v_isSharedCheck_335_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_propagate_326_);
lean_inc(v_proofs_325_);
lean_inc(v_targets_324_);
lean_inc(v_sources_323_);
lean_inc(v_cnstrsOf_322_);
lean_inc(v_cnstrs_321_);
lean_inc(v_nodeMap_320_);
lean_inc(v_nodes_319_);
lean_inc(v_ltFn_x3f_318_);
lean_inc(v_leFn_317_);
lean_inc(v_orderedRingInst_x3f_316_);
lean_inc(v_ringInst_x3f_315_);
lean_inc(v_ringId_x3f_313_);
lean_inc(v_lawfulOrderLTInst_x3f_312_);
lean_inc(v_isLinearPreInst_x3f_311_);
lean_inc(v_isPartialInst_x3f_310_);
lean_inc(v_ltInst_x3f_309_);
lean_inc(v_leInst_308_);
lean_inc(v_isPreorderInst_307_);
lean_inc(v_u_306_);
lean_inc(v_type_305_);
lean_inc(v_id_304_);
lean_dec(v_s_303_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_335_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_333_; 
lean_inc_ref(v_k_301_);
lean_inc(v_u_300_);
v___x_330_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1(v_u_300_, v_k_301_, v_sources_323_, v_v_302_);
v___x_331_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1(v_v_302_, v_k_301_, v_targets_324_, v_u_300_);
lean_dec(v_u_300_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 19, v___x_331_);
lean_ctor_set(v___x_328_, 18, v___x_330_);
v___x_333_ = v___x_328_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(0, 22, 1);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_id_304_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v_type_305_);
lean_ctor_set(v_reuseFailAlloc_334_, 2, v_u_306_);
lean_ctor_set(v_reuseFailAlloc_334_, 3, v_isPreorderInst_307_);
lean_ctor_set(v_reuseFailAlloc_334_, 4, v_leInst_308_);
lean_ctor_set(v_reuseFailAlloc_334_, 5, v_ltInst_x3f_309_);
lean_ctor_set(v_reuseFailAlloc_334_, 6, v_isPartialInst_x3f_310_);
lean_ctor_set(v_reuseFailAlloc_334_, 7, v_isLinearPreInst_x3f_311_);
lean_ctor_set(v_reuseFailAlloc_334_, 8, v_lawfulOrderLTInst_x3f_312_);
lean_ctor_set(v_reuseFailAlloc_334_, 9, v_ringId_x3f_313_);
lean_ctor_set(v_reuseFailAlloc_334_, 10, v_ringInst_x3f_315_);
lean_ctor_set(v_reuseFailAlloc_334_, 11, v_orderedRingInst_x3f_316_);
lean_ctor_set(v_reuseFailAlloc_334_, 12, v_leFn_317_);
lean_ctor_set(v_reuseFailAlloc_334_, 13, v_ltFn_x3f_318_);
lean_ctor_set(v_reuseFailAlloc_334_, 14, v_nodes_319_);
lean_ctor_set(v_reuseFailAlloc_334_, 15, v_nodeMap_320_);
lean_ctor_set(v_reuseFailAlloc_334_, 16, v_cnstrs_321_);
lean_ctor_set(v_reuseFailAlloc_334_, 17, v_cnstrsOf_322_);
lean_ctor_set(v_reuseFailAlloc_334_, 18, v___x_330_);
lean_ctor_set(v_reuseFailAlloc_334_, 19, v___x_331_);
lean_ctor_set(v_reuseFailAlloc_334_, 20, v_proofs_325_);
lean_ctor_set(v_reuseFailAlloc_334_, 21, v_propagate_326_);
lean_ctor_set_uint8(v_reuseFailAlloc_334_, sizeof(void*)*22, v_isCommRing_314_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg(lean_object* v_u_336_, lean_object* v_v_337_, lean_object* v_k_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_){
_start:
{
lean_object* v___f_343_; lean_object* v___x_344_; 
v___f_343_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg___lam__0), 4, 3);
lean_closure_set(v___f_343_, 0, v_u_336_);
lean_closure_set(v___f_343_, 1, v_k_338_);
lean_closure_set(v___f_343_, 2, v_v_337_);
v___x_344_ = l_Lean_Meta_Grind_Order_modifyStruct___redArg(v___f_343_, v_a_339_, v_a_340_, v_a_341_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg___boxed(lean_object* v_u_345_, lean_object* v_v_346_, lean_object* v_k_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg(v_u_345_, v_v_346_, v_k_347_, v_a_348_, v_a_349_, v_a_350_);
lean_dec(v_a_350_);
lean_dec(v_a_349_);
lean_dec(v_a_348_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist(lean_object* v_u_353_, lean_object* v_v_354_, lean_object* v_k_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg(v_u_353_, v_v_354_, v_k_355_, v_a_356_, v_a_357_, v_a_366_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___boxed(lean_object* v_u_369_, lean_object* v_v_370_, lean_object* v_k_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist(v_u_369_, v_v_370_, v_k_371_, v_a_372_, v_a_373_, v_a_374_, v_a_375_, v_a_376_, v_a_377_, v_a_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_);
lean_dec(v_a_382_);
lean_dec_ref(v_a_381_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
lean_dec(v_a_378_);
lean_dec_ref(v_a_377_);
lean_dec(v_a_376_);
lean_dec_ref(v_a_375_);
lean_dec(v_a_374_);
lean_dec(v_a_373_);
lean_dec(v_a_372_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0(lean_object* v_00_u03b2_385_, lean_object* v_m_386_, lean_object* v_k_387_, lean_object* v_v_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(v_m_386_, v_k_387_, v_v_388_);
return v___x_389_;
}
}
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0(lean_object* v_00_u03b2_390_, lean_object* v_a_391_, lean_object* v_x_392_){
_start:
{
uint8_t v___x_393_; 
v___x_393_ = l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg(v_a_391_, v_x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___boxed(lean_object* v_00_u03b2_394_, lean_object* v_a_395_, lean_object* v_x_396_){
_start:
{
uint8_t v_res_397_; lean_object* v_r_398_; 
v_res_397_ = l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0(v_00_u03b2_394_, v_a_395_, v_x_396_);
lean_dec(v_x_396_);
lean_dec(v_a_395_);
v_r_398_ = lean_box(v_res_397_);
return v_r_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1(lean_object* v_00_u03b2_399_, lean_object* v_a_400_, lean_object* v_b_401_, lean_object* v_x_402_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1___redArg(v_a_400_, v_b_401_, v_x_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0(lean_object* v_v_404_, lean_object* v_p_405_, lean_object* v_x_406_, size_t v_x_407_, size_t v_x_408_){
_start:
{
if (lean_obj_tag(v_x_406_) == 0)
{
lean_object* v_cs_409_; size_t v_j_410_; lean_object* v___x_411_; lean_object* v___x_412_; uint8_t v___x_413_; 
v_cs_409_ = lean_ctor_get(v_x_406_, 0);
v_j_410_ = lean_usize_shift_right(v_x_407_, v_x_408_);
v___x_411_ = lean_usize_to_nat(v_j_410_);
v___x_412_ = lean_array_get_size(v_cs_409_);
v___x_413_ = lean_nat_dec_lt(v___x_411_, v___x_412_);
if (v___x_413_ == 0)
{
lean_dec(v___x_411_);
lean_dec_ref(v_p_405_);
lean_dec(v_v_404_);
return v_x_406_;
}
else
{
lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_431_; 
lean_inc_ref(v_cs_409_);
v_isSharedCheck_431_ = !lean_is_exclusive(v_x_406_);
if (v_isSharedCheck_431_ == 0)
{
lean_object* v_unused_432_; 
v_unused_432_ = lean_ctor_get(v_x_406_, 0);
lean_dec(v_unused_432_);
v___x_415_ = v_x_406_;
v_isShared_416_ = v_isSharedCheck_431_;
goto v_resetjp_414_;
}
else
{
lean_dec(v_x_406_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_431_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
size_t v___x_417_; size_t v___x_418_; size_t v___x_419_; size_t v_i_420_; size_t v___x_421_; size_t v_shift_422_; lean_object* v_v_423_; lean_object* v___x_424_; lean_object* v_xs_x27_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_417_ = ((size_t)1ULL);
v___x_418_ = lean_usize_shift_left(v___x_417_, v_x_408_);
v___x_419_ = lean_usize_sub(v___x_418_, v___x_417_);
v_i_420_ = lean_usize_land(v_x_407_, v___x_419_);
v___x_421_ = ((size_t)5ULL);
v_shift_422_ = lean_usize_sub(v_x_408_, v___x_421_);
v_v_423_ = lean_array_fget(v_cs_409_, v___x_411_);
v___x_424_ = lean_box(0);
v_xs_x27_425_ = lean_array_fset(v_cs_409_, v___x_411_, v___x_424_);
v___x_426_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0(v_v_404_, v_p_405_, v_v_423_, v_i_420_, v_shift_422_);
v___x_427_ = lean_array_fset(v_xs_x27_425_, v___x_411_, v___x_426_);
lean_dec(v___x_411_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 0, v___x_427_);
v___x_429_ = v___x_415_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
else
{
lean_object* v_vs_433_; lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; 
v_vs_433_ = lean_ctor_get(v_x_406_, 0);
v___x_434_ = lean_usize_to_nat(v_x_407_);
v___x_435_ = lean_array_get_size(v_vs_433_);
v___x_436_ = lean_nat_dec_lt(v___x_434_, v___x_435_);
if (v___x_436_ == 0)
{
lean_dec(v___x_434_);
lean_dec_ref(v_p_405_);
lean_dec(v_v_404_);
return v_x_406_;
}
else
{
lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_448_; 
lean_inc_ref(v_vs_433_);
v_isSharedCheck_448_ = !lean_is_exclusive(v_x_406_);
if (v_isSharedCheck_448_ == 0)
{
lean_object* v_unused_449_; 
v_unused_449_ = lean_ctor_get(v_x_406_, 0);
lean_dec(v_unused_449_);
v___x_438_ = v_x_406_;
v_isShared_439_ = v_isSharedCheck_448_;
goto v_resetjp_437_;
}
else
{
lean_dec(v_x_406_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_448_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v_v_440_; lean_object* v___x_441_; lean_object* v_xs_x27_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_446_; 
v_v_440_ = lean_array_fget(v_vs_433_, v___x_434_);
v___x_441_ = lean_box(0);
v_xs_x27_442_ = lean_array_fset(v_vs_433_, v___x_434_, v___x_441_);
v___x_443_ = l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(v_v_440_, v_v_404_, v_p_405_);
v___x_444_ = lean_array_fset(v_xs_x27_442_, v___x_434_, v___x_443_);
lean_dec(v___x_434_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_444_);
v___x_446_ = v___x_438_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_444_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0___boxed(lean_object* v_v_450_, lean_object* v_p_451_, lean_object* v_x_452_, lean_object* v_x_453_, lean_object* v_x_454_){
_start:
{
size_t v_x_148__boxed_455_; size_t v_x_149__boxed_456_; lean_object* v_res_457_; 
v_x_148__boxed_455_ = lean_unbox_usize(v_x_453_);
lean_dec(v_x_453_);
v_x_149__boxed_456_ = lean_unbox_usize(v_x_454_);
lean_dec(v_x_454_);
v_res_457_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0(v_v_450_, v_p_451_, v_x_452_, v_x_148__boxed_455_, v_x_149__boxed_456_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0(lean_object* v_v_458_, lean_object* v_p_459_, lean_object* v_t_460_, lean_object* v_i_461_){
_start:
{
lean_object* v_root_462_; lean_object* v_tail_463_; lean_object* v_size_464_; size_t v_shift_465_; lean_object* v_tailOff_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_490_; 
v_root_462_ = lean_ctor_get(v_t_460_, 0);
v_tail_463_ = lean_ctor_get(v_t_460_, 1);
v_size_464_ = lean_ctor_get(v_t_460_, 2);
v_shift_465_ = lean_ctor_get_usize(v_t_460_, 4);
v_tailOff_466_ = lean_ctor_get(v_t_460_, 3);
v_isSharedCheck_490_ = !lean_is_exclusive(v_t_460_);
if (v_isSharedCheck_490_ == 0)
{
v___x_468_ = v_t_460_;
v_isShared_469_ = v_isSharedCheck_490_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_tailOff_466_);
lean_inc(v_size_464_);
lean_inc(v_tail_463_);
lean_inc(v_root_462_);
lean_dec(v_t_460_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_490_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
uint8_t v___x_470_; 
v___x_470_ = lean_nat_dec_le(v_tailOff_466_, v_i_461_);
if (v___x_470_ == 0)
{
size_t v___x_471_; lean_object* v___x_472_; lean_object* v___x_474_; 
v___x_471_ = lean_usize_of_nat(v_i_461_);
v___x_472_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0(v_v_458_, v_p_459_, v_root_462_, v___x_471_, v_shift_465_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 0, v___x_472_);
v___x_474_ = v___x_468_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_472_);
lean_ctor_set(v_reuseFailAlloc_475_, 1, v_tail_463_);
lean_ctor_set(v_reuseFailAlloc_475_, 2, v_size_464_);
lean_ctor_set(v_reuseFailAlloc_475_, 3, v_tailOff_466_);
lean_ctor_set_usize(v_reuseFailAlloc_475_, 4, v_shift_465_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
else
{
lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_476_ = lean_nat_sub(v_i_461_, v_tailOff_466_);
v___x_477_ = lean_array_get_size(v_tail_463_);
v___x_478_ = lean_nat_dec_lt(v___x_476_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_480_; 
lean_dec(v___x_476_);
lean_dec_ref(v_p_459_);
lean_dec(v_v_458_);
if (v_isShared_469_ == 0)
{
v___x_480_ = v___x_468_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_root_462_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_tail_463_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_size_464_);
lean_ctor_set(v_reuseFailAlloc_481_, 3, v_tailOff_466_);
lean_ctor_set_usize(v_reuseFailAlloc_481_, 4, v_shift_465_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
else
{
lean_object* v_v_482_; lean_object* v___x_483_; lean_object* v_xs_x27_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_488_; 
v_v_482_ = lean_array_fget(v_tail_463_, v___x_476_);
v___x_483_ = lean_box(0);
v_xs_x27_484_ = lean_array_fset(v_tail_463_, v___x_476_, v___x_483_);
v___x_485_ = l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(v_v_482_, v_v_458_, v_p_459_);
v___x_486_ = lean_array_fset(v_xs_x27_484_, v___x_476_, v___x_485_);
lean_dec(v___x_476_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 1, v___x_486_);
v___x_488_ = v___x_468_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_root_462_);
lean_ctor_set(v_reuseFailAlloc_489_, 1, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_489_, 2, v_size_464_);
lean_ctor_set(v_reuseFailAlloc_489_, 3, v_tailOff_466_);
lean_ctor_set_usize(v_reuseFailAlloc_489_, 4, v_shift_465_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0___boxed(lean_object* v_v_491_, lean_object* v_p_492_, lean_object* v_t_493_, lean_object* v_i_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0(v_v_491_, v_p_492_, v_t_493_, v_i_494_);
lean_dec(v_i_494_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___lam__0(lean_object* v_v_496_, lean_object* v_p_497_, lean_object* v_u_498_, lean_object* v_s_499_){
_start:
{
lean_object* v_id_500_; lean_object* v_type_501_; lean_object* v_u_502_; lean_object* v_isPreorderInst_503_; lean_object* v_leInst_504_; lean_object* v_ltInst_x3f_505_; lean_object* v_isPartialInst_x3f_506_; lean_object* v_isLinearPreInst_x3f_507_; lean_object* v_lawfulOrderLTInst_x3f_508_; lean_object* v_ringId_x3f_509_; uint8_t v_isCommRing_510_; lean_object* v_ringInst_x3f_511_; lean_object* v_orderedRingInst_x3f_512_; lean_object* v_leFn_513_; lean_object* v_ltFn_x3f_514_; lean_object* v_nodes_515_; lean_object* v_nodeMap_516_; lean_object* v_cnstrs_517_; lean_object* v_cnstrsOf_518_; lean_object* v_sources_519_; lean_object* v_targets_520_; lean_object* v_proofs_521_; lean_object* v_propagate_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_530_; 
v_id_500_ = lean_ctor_get(v_s_499_, 0);
v_type_501_ = lean_ctor_get(v_s_499_, 1);
v_u_502_ = lean_ctor_get(v_s_499_, 2);
v_isPreorderInst_503_ = lean_ctor_get(v_s_499_, 3);
v_leInst_504_ = lean_ctor_get(v_s_499_, 4);
v_ltInst_x3f_505_ = lean_ctor_get(v_s_499_, 5);
v_isPartialInst_x3f_506_ = lean_ctor_get(v_s_499_, 6);
v_isLinearPreInst_x3f_507_ = lean_ctor_get(v_s_499_, 7);
v_lawfulOrderLTInst_x3f_508_ = lean_ctor_get(v_s_499_, 8);
v_ringId_x3f_509_ = lean_ctor_get(v_s_499_, 9);
v_isCommRing_510_ = lean_ctor_get_uint8(v_s_499_, sizeof(void*)*22);
v_ringInst_x3f_511_ = lean_ctor_get(v_s_499_, 10);
v_orderedRingInst_x3f_512_ = lean_ctor_get(v_s_499_, 11);
v_leFn_513_ = lean_ctor_get(v_s_499_, 12);
v_ltFn_x3f_514_ = lean_ctor_get(v_s_499_, 13);
v_nodes_515_ = lean_ctor_get(v_s_499_, 14);
v_nodeMap_516_ = lean_ctor_get(v_s_499_, 15);
v_cnstrs_517_ = lean_ctor_get(v_s_499_, 16);
v_cnstrsOf_518_ = lean_ctor_get(v_s_499_, 17);
v_sources_519_ = lean_ctor_get(v_s_499_, 18);
v_targets_520_ = lean_ctor_get(v_s_499_, 19);
v_proofs_521_ = lean_ctor_get(v_s_499_, 20);
v_propagate_522_ = lean_ctor_get(v_s_499_, 21);
v_isSharedCheck_530_ = !lean_is_exclusive(v_s_499_);
if (v_isSharedCheck_530_ == 0)
{
v___x_524_ = v_s_499_;
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_propagate_522_);
lean_inc(v_proofs_521_);
lean_inc(v_targets_520_);
lean_inc(v_sources_519_);
lean_inc(v_cnstrsOf_518_);
lean_inc(v_cnstrs_517_);
lean_inc(v_nodeMap_516_);
lean_inc(v_nodes_515_);
lean_inc(v_ltFn_x3f_514_);
lean_inc(v_leFn_513_);
lean_inc(v_orderedRingInst_x3f_512_);
lean_inc(v_ringInst_x3f_511_);
lean_inc(v_ringId_x3f_509_);
lean_inc(v_lawfulOrderLTInst_x3f_508_);
lean_inc(v_isLinearPreInst_x3f_507_);
lean_inc(v_isPartialInst_x3f_506_);
lean_inc(v_ltInst_x3f_505_);
lean_inc(v_leInst_504_);
lean_inc(v_isPreorderInst_503_);
lean_inc(v_u_502_);
lean_inc(v_type_501_);
lean_inc(v_id_500_);
lean_dec(v_s_499_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_526_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0(v_v_496_, v_p_497_, v_proofs_521_, v_u_498_);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 20, v___x_526_);
v___x_528_ = v___x_524_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 22, 1);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_id_500_);
lean_ctor_set(v_reuseFailAlloc_529_, 1, v_type_501_);
lean_ctor_set(v_reuseFailAlloc_529_, 2, v_u_502_);
lean_ctor_set(v_reuseFailAlloc_529_, 3, v_isPreorderInst_503_);
lean_ctor_set(v_reuseFailAlloc_529_, 4, v_leInst_504_);
lean_ctor_set(v_reuseFailAlloc_529_, 5, v_ltInst_x3f_505_);
lean_ctor_set(v_reuseFailAlloc_529_, 6, v_isPartialInst_x3f_506_);
lean_ctor_set(v_reuseFailAlloc_529_, 7, v_isLinearPreInst_x3f_507_);
lean_ctor_set(v_reuseFailAlloc_529_, 8, v_lawfulOrderLTInst_x3f_508_);
lean_ctor_set(v_reuseFailAlloc_529_, 9, v_ringId_x3f_509_);
lean_ctor_set(v_reuseFailAlloc_529_, 10, v_ringInst_x3f_511_);
lean_ctor_set(v_reuseFailAlloc_529_, 11, v_orderedRingInst_x3f_512_);
lean_ctor_set(v_reuseFailAlloc_529_, 12, v_leFn_513_);
lean_ctor_set(v_reuseFailAlloc_529_, 13, v_ltFn_x3f_514_);
lean_ctor_set(v_reuseFailAlloc_529_, 14, v_nodes_515_);
lean_ctor_set(v_reuseFailAlloc_529_, 15, v_nodeMap_516_);
lean_ctor_set(v_reuseFailAlloc_529_, 16, v_cnstrs_517_);
lean_ctor_set(v_reuseFailAlloc_529_, 17, v_cnstrsOf_518_);
lean_ctor_set(v_reuseFailAlloc_529_, 18, v_sources_519_);
lean_ctor_set(v_reuseFailAlloc_529_, 19, v_targets_520_);
lean_ctor_set(v_reuseFailAlloc_529_, 20, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_529_, 21, v_propagate_522_);
lean_ctor_set_uint8(v_reuseFailAlloc_529_, sizeof(void*)*22, v_isCommRing_510_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___lam__0___boxed(lean_object* v_v_531_, lean_object* v_p_532_, lean_object* v_u_533_, lean_object* v_s_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___lam__0(v_v_531_, v_p_532_, v_u_533_, v_s_534_);
lean_dec(v_u_533_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg(lean_object* v_u_536_, lean_object* v_v_537_, lean_object* v_p_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_){
_start:
{
lean_object* v___f_543_; lean_object* v___x_544_; 
v___f_543_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_543_, 0, v_v_537_);
lean_closure_set(v___f_543_, 1, v_p_538_);
lean_closure_set(v___f_543_, 2, v_u_536_);
v___x_544_ = l_Lean_Meta_Grind_Order_modifyStruct___redArg(v___f_543_, v_a_539_, v_a_540_, v_a_541_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___boxed(lean_object* v_u_545_, lean_object* v_v_546_, lean_object* v_p_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg(v_u_545_, v_v_546_, v_p_547_, v_a_548_, v_a_549_, v_a_550_);
lean_dec(v_a_550_);
lean_dec(v_a_549_);
lean_dec(v_a_548_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof(lean_object* v_u_553_, lean_object* v_v_554_, lean_object* v_p_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg(v_u_553_, v_v_554_, v_p_555_, v_a_556_, v_a_557_, v_a_566_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___boxed(lean_object* v_u_569_, lean_object* v_v_570_, lean_object* v_p_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof(v_u_569_, v_v_570_, v_p_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_);
lean_dec(v_a_582_);
lean_dec_ref(v_a_581_);
lean_dec(v_a_580_);
lean_dec_ref(v_a_579_);
lean_dec(v_a_578_);
lean_dec_ref(v_a_577_);
lean_dec(v_a_576_);
lean_dec_ref(v_a_575_);
lean_dec(v_a_574_);
lean_dec(v_a_573_);
lean_dec(v_a_572_);
return v_res_584_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__0(void){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_instMonadEIO(lean_box(0));
return v___x_585_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__0);
v___x_587_ = l_StateRefT_x27_instMonad___redArg(v___x_586_);
return v___x_587_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2(void){
_start:
{
lean_object* v___f_588_; 
v___f_588_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_588_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3(void){
_start:
{
lean_object* v___f_589_; 
v___f_589_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_589_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4(void){
_start:
{
lean_object* v___f_590_; 
v___f_590_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_590_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5(void){
_start:
{
lean_object* v___f_591_; 
v___f_591_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf(lean_object* v_u_592_, lean_object* v_f_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_){
_start:
{
lean_object* v___x_606_; lean_object* v_toApplicative_607_; lean_object* v_toFunctor_608_; lean_object* v_toSeq_609_; lean_object* v_toSeqLeft_610_; lean_object* v_toSeqRight_611_; lean_object* v___f_612_; lean_object* v___f_613_; lean_object* v___f_614_; lean_object* v___f_615_; lean_object* v___x_616_; lean_object* v___f_617_; lean_object* v___f_618_; lean_object* v___f_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v_toApplicative_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_677_; 
v___x_606_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1);
v_toApplicative_607_ = lean_ctor_get(v___x_606_, 0);
v_toFunctor_608_ = lean_ctor_get(v_toApplicative_607_, 0);
v_toSeq_609_ = lean_ctor_get(v_toApplicative_607_, 2);
v_toSeqLeft_610_ = lean_ctor_get(v_toApplicative_607_, 3);
v_toSeqRight_611_ = lean_ctor_get(v_toApplicative_607_, 4);
v___f_612_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2);
v___f_613_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3);
lean_inc_ref_n(v_toFunctor_608_, 2);
v___f_614_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_614_, 0, v_toFunctor_608_);
v___f_615_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_615_, 0, v_toFunctor_608_);
v___x_616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_616_, 0, v___f_614_);
lean_ctor_set(v___x_616_, 1, v___f_615_);
lean_inc(v_toSeqRight_611_);
v___f_617_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_617_, 0, v_toSeqRight_611_);
lean_inc(v_toSeqLeft_610_);
v___f_618_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_618_, 0, v_toSeqLeft_610_);
lean_inc(v_toSeq_609_);
v___f_619_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_619_, 0, v_toSeq_609_);
v___x_620_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_620_, 0, v___x_616_);
lean_ctor_set(v___x_620_, 1, v___f_612_);
lean_ctor_set(v___x_620_, 2, v___f_619_);
lean_ctor_set(v___x_620_, 3, v___f_618_);
lean_ctor_set(v___x_620_, 4, v___f_617_);
v___x_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
lean_ctor_set(v___x_621_, 1, v___f_613_);
v___x_622_ = l_StateRefT_x27_instMonad___redArg(v___x_621_);
v_toApplicative_623_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_677_ == 0)
{
lean_object* v_unused_678_; 
v_unused_678_ = lean_ctor_get(v___x_622_, 1);
lean_dec(v_unused_678_);
v___x_625_ = v___x_622_;
v_isShared_626_ = v_isSharedCheck_677_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_toApplicative_623_);
lean_dec(v___x_622_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_677_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v_toFunctor_627_; lean_object* v_toSeq_628_; lean_object* v_toSeqLeft_629_; lean_object* v_toSeqRight_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_675_; 
v_toFunctor_627_ = lean_ctor_get(v_toApplicative_623_, 0);
v_toSeq_628_ = lean_ctor_get(v_toApplicative_623_, 2);
v_toSeqLeft_629_ = lean_ctor_get(v_toApplicative_623_, 3);
v_toSeqRight_630_ = lean_ctor_get(v_toApplicative_623_, 4);
v_isSharedCheck_675_ = !lean_is_exclusive(v_toApplicative_623_);
if (v_isSharedCheck_675_ == 0)
{
lean_object* v_unused_676_; 
v_unused_676_ = lean_ctor_get(v_toApplicative_623_, 1);
lean_dec(v_unused_676_);
v___x_632_ = v_toApplicative_623_;
v_isShared_633_ = v_isSharedCheck_675_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_toSeqRight_630_);
lean_inc(v_toSeqLeft_629_);
lean_inc(v_toSeq_628_);
lean_inc(v_toFunctor_627_);
lean_dec(v_toApplicative_623_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_675_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___f_634_; lean_object* v___f_635_; lean_object* v___f_636_; lean_object* v___f_637_; lean_object* v___x_638_; lean_object* v___f_639_; lean_object* v___f_640_; lean_object* v___f_641_; lean_object* v___x_643_; 
v___f_634_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4);
v___f_635_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5);
lean_inc_ref(v_toFunctor_627_);
v___f_636_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_636_, 0, v_toFunctor_627_);
v___f_637_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_637_, 0, v_toFunctor_627_);
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v___f_636_);
lean_ctor_set(v___x_638_, 1, v___f_637_);
v___f_639_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_639_, 0, v_toSeqRight_630_);
v___f_640_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_640_, 0, v_toSeqLeft_629_);
v___f_641_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_641_, 0, v_toSeq_628_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 4, v___f_639_);
lean_ctor_set(v___x_632_, 3, v___f_640_);
lean_ctor_set(v___x_632_, 2, v___f_641_);
lean_ctor_set(v___x_632_, 1, v___f_634_);
lean_ctor_set(v___x_632_, 0, v___x_638_);
v___x_643_ = v___x_632_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v___x_638_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v___f_634_);
lean_ctor_set(v_reuseFailAlloc_674_, 2, v___f_641_);
lean_ctor_set(v_reuseFailAlloc_674_, 3, v___f_640_);
lean_ctor_set(v_reuseFailAlloc_674_, 4, v___f_639_);
v___x_643_ = v_reuseFailAlloc_674_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
lean_object* v___x_645_; 
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 1, v___f_635_);
lean_ctor_set(v___x_625_, 0, v___x_643_);
v___x_645_ = v___x_625_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_643_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v___f_635_);
v___x_645_ = v_reuseFailAlloc_673_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_646_ = l_StateRefT_x27_instMonad___redArg(v___x_645_);
v___x_647_ = l_ReaderT_instMonad___redArg(v___x_646_);
v___x_648_ = l_StateRefT_x27_instMonad___redArg(v___x_647_);
v___x_649_ = l_ReaderT_instMonad___redArg(v___x_648_);
v___x_650_ = l_ReaderT_instMonad___redArg(v___x_649_);
v___x_651_ = l_StateRefT_x27_instMonad___redArg(v___x_650_);
v___x_652_ = l_ReaderT_instMonad___redArg(v___x_651_);
v___x_653_ = l_Lean_Meta_Grind_Order_getStruct(v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v_a_654_; lean_object* v_sources_655_; lean_object* v_size_656_; lean_object* v___x_657_; uint8_t v___x_658_; 
v_a_654_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_a_654_);
lean_dec_ref(v___x_653_);
v_sources_655_ = lean_ctor_get(v_a_654_, 18);
lean_inc_ref(v_sources_655_);
lean_dec(v_a_654_);
v_size_656_ = lean_ctor_get(v_sources_655_, 2);
v___x_657_ = lean_box(0);
v___x_658_ = lean_nat_dec_lt(v_u_592_, v_size_656_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; lean_object* v___x_780__overap_660_; lean_object* v___x_661_; 
lean_dec_ref(v_sources_655_);
v___x_659_ = l_outOfBounds___redArg(v___x_657_);
v___x_780__overap_660_ = l_Lean_AssocList_forM___redArg(v___x_652_, v_f_593_, v___x_659_);
lean_inc(v_a_604_);
lean_inc_ref(v_a_603_);
lean_inc(v_a_602_);
lean_inc_ref(v_a_601_);
lean_inc(v_a_600_);
lean_inc_ref(v_a_599_);
lean_inc(v_a_598_);
lean_inc_ref(v_a_597_);
lean_inc(v_a_596_);
lean_inc(v_a_595_);
lean_inc(v_a_594_);
v___x_661_ = lean_apply_12(v___x_780__overap_660_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, lean_box(0));
return v___x_661_;
}
else
{
lean_object* v___x_662_; lean_object* v___x_778__overap_663_; lean_object* v___x_664_; 
v___x_662_ = l_Lean_PersistentArray_get_x21___redArg(v___x_657_, v_sources_655_, v_u_592_);
lean_dec_ref(v_sources_655_);
v___x_778__overap_663_ = l_Lean_AssocList_forM___redArg(v___x_652_, v_f_593_, v___x_662_);
lean_inc(v_a_604_);
lean_inc_ref(v_a_603_);
lean_inc(v_a_602_);
lean_inc_ref(v_a_601_);
lean_inc(v_a_600_);
lean_inc_ref(v_a_599_);
lean_inc(v_a_598_);
lean_inc_ref(v_a_597_);
lean_inc(v_a_596_);
lean_inc(v_a_595_);
lean_inc(v_a_594_);
v___x_664_ = lean_apply_12(v___x_778__overap_663_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, lean_box(0));
return v___x_664_;
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_672_; 
lean_dec_ref(v___x_652_);
lean_dec_ref(v_f_593_);
v_a_665_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_672_ == 0)
{
v___x_667_ = v___x_653_;
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___x_653_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
if (v_isShared_668_ == 0)
{
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_a_665_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___boxed(lean_object* v_u_679_, lean_object* v_f_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf(v_u_679_, v_f_680_, v_a_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_, v_a_691_);
lean_dec(v_a_691_);
lean_dec_ref(v_a_690_);
lean_dec(v_a_689_);
lean_dec_ref(v_a_688_);
lean_dec(v_a_687_);
lean_dec_ref(v_a_686_);
lean_dec(v_a_685_);
lean_dec_ref(v_a_684_);
lean_dec(v_a_683_);
lean_dec(v_a_682_);
lean_dec(v_a_681_);
lean_dec(v_u_679_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachTargetOf(lean_object* v_u_694_, lean_object* v_f_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_){
_start:
{
lean_object* v___x_708_; lean_object* v_toApplicative_709_; lean_object* v_toFunctor_710_; lean_object* v_toSeq_711_; lean_object* v_toSeqLeft_712_; lean_object* v_toSeqRight_713_; lean_object* v___f_714_; lean_object* v___f_715_; lean_object* v___f_716_; lean_object* v___f_717_; lean_object* v___x_718_; lean_object* v___f_719_; lean_object* v___f_720_; lean_object* v___f_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v_toApplicative_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_779_; 
v___x_708_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1);
v_toApplicative_709_ = lean_ctor_get(v___x_708_, 0);
v_toFunctor_710_ = lean_ctor_get(v_toApplicative_709_, 0);
v_toSeq_711_ = lean_ctor_get(v_toApplicative_709_, 2);
v_toSeqLeft_712_ = lean_ctor_get(v_toApplicative_709_, 3);
v_toSeqRight_713_ = lean_ctor_get(v_toApplicative_709_, 4);
v___f_714_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2);
v___f_715_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3);
lean_inc_ref_n(v_toFunctor_710_, 2);
v___f_716_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_716_, 0, v_toFunctor_710_);
v___f_717_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_717_, 0, v_toFunctor_710_);
v___x_718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_718_, 0, v___f_716_);
lean_ctor_set(v___x_718_, 1, v___f_717_);
lean_inc(v_toSeqRight_713_);
v___f_719_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_719_, 0, v_toSeqRight_713_);
lean_inc(v_toSeqLeft_712_);
v___f_720_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_720_, 0, v_toSeqLeft_712_);
lean_inc(v_toSeq_711_);
v___f_721_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_721_, 0, v_toSeq_711_);
v___x_722_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_722_, 0, v___x_718_);
lean_ctor_set(v___x_722_, 1, v___f_714_);
lean_ctor_set(v___x_722_, 2, v___f_721_);
lean_ctor_set(v___x_722_, 3, v___f_720_);
lean_ctor_set(v___x_722_, 4, v___f_719_);
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
lean_ctor_set(v___x_723_, 1, v___f_715_);
v___x_724_ = l_StateRefT_x27_instMonad___redArg(v___x_723_);
v_toApplicative_725_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_779_ == 0)
{
lean_object* v_unused_780_; 
v_unused_780_ = lean_ctor_get(v___x_724_, 1);
lean_dec(v_unused_780_);
v___x_727_ = v___x_724_;
v_isShared_728_ = v_isSharedCheck_779_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_toApplicative_725_);
lean_dec(v___x_724_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_779_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v_toFunctor_729_; lean_object* v_toSeq_730_; lean_object* v_toSeqLeft_731_; lean_object* v_toSeqRight_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_777_; 
v_toFunctor_729_ = lean_ctor_get(v_toApplicative_725_, 0);
v_toSeq_730_ = lean_ctor_get(v_toApplicative_725_, 2);
v_toSeqLeft_731_ = lean_ctor_get(v_toApplicative_725_, 3);
v_toSeqRight_732_ = lean_ctor_get(v_toApplicative_725_, 4);
v_isSharedCheck_777_ = !lean_is_exclusive(v_toApplicative_725_);
if (v_isSharedCheck_777_ == 0)
{
lean_object* v_unused_778_; 
v_unused_778_ = lean_ctor_get(v_toApplicative_725_, 1);
lean_dec(v_unused_778_);
v___x_734_ = v_toApplicative_725_;
v_isShared_735_ = v_isSharedCheck_777_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_toSeqRight_732_);
lean_inc(v_toSeqLeft_731_);
lean_inc(v_toSeq_730_);
lean_inc(v_toFunctor_729_);
lean_dec(v_toApplicative_725_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_777_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___f_736_; lean_object* v___f_737_; lean_object* v___f_738_; lean_object* v___f_739_; lean_object* v___x_740_; lean_object* v___f_741_; lean_object* v___f_742_; lean_object* v___f_743_; lean_object* v___x_745_; 
v___f_736_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4);
v___f_737_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5);
lean_inc_ref(v_toFunctor_729_);
v___f_738_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_738_, 0, v_toFunctor_729_);
v___f_739_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_739_, 0, v_toFunctor_729_);
v___x_740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_740_, 0, v___f_738_);
lean_ctor_set(v___x_740_, 1, v___f_739_);
v___f_741_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_741_, 0, v_toSeqRight_732_);
v___f_742_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_742_, 0, v_toSeqLeft_731_);
v___f_743_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_743_, 0, v_toSeq_730_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 4, v___f_741_);
lean_ctor_set(v___x_734_, 3, v___f_742_);
lean_ctor_set(v___x_734_, 2, v___f_743_);
lean_ctor_set(v___x_734_, 1, v___f_736_);
lean_ctor_set(v___x_734_, 0, v___x_740_);
v___x_745_ = v___x_734_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___x_740_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v___f_736_);
lean_ctor_set(v_reuseFailAlloc_776_, 2, v___f_743_);
lean_ctor_set(v_reuseFailAlloc_776_, 3, v___f_742_);
lean_ctor_set(v_reuseFailAlloc_776_, 4, v___f_741_);
v___x_745_ = v_reuseFailAlloc_776_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_747_; 
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 1, v___f_737_);
lean_ctor_set(v___x_727_, 0, v___x_745_);
v___x_747_ = v___x_727_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_745_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v___f_737_);
v___x_747_ = v_reuseFailAlloc_775_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_748_ = l_StateRefT_x27_instMonad___redArg(v___x_747_);
v___x_749_ = l_ReaderT_instMonad___redArg(v___x_748_);
v___x_750_ = l_StateRefT_x27_instMonad___redArg(v___x_749_);
v___x_751_ = l_ReaderT_instMonad___redArg(v___x_750_);
v___x_752_ = l_ReaderT_instMonad___redArg(v___x_751_);
v___x_753_ = l_StateRefT_x27_instMonad___redArg(v___x_752_);
v___x_754_ = l_ReaderT_instMonad___redArg(v___x_753_);
v___x_755_ = l_Lean_Meta_Grind_Order_getStruct(v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_);
if (lean_obj_tag(v___x_755_) == 0)
{
lean_object* v_a_756_; lean_object* v_targets_757_; lean_object* v_size_758_; lean_object* v___x_759_; uint8_t v___x_760_; 
v_a_756_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_a_756_);
lean_dec_ref(v___x_755_);
v_targets_757_ = lean_ctor_get(v_a_756_, 19);
lean_inc_ref(v_targets_757_);
lean_dec(v_a_756_);
v_size_758_ = lean_ctor_get(v_targets_757_, 2);
v___x_759_ = lean_box(0);
v___x_760_ = lean_nat_dec_lt(v_u_694_, v_size_758_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; lean_object* v___x_780__overap_762_; lean_object* v___x_763_; 
lean_dec_ref(v_targets_757_);
v___x_761_ = l_outOfBounds___redArg(v___x_759_);
v___x_780__overap_762_ = l_Lean_AssocList_forM___redArg(v___x_754_, v_f_695_, v___x_761_);
lean_inc(v_a_706_);
lean_inc_ref(v_a_705_);
lean_inc(v_a_704_);
lean_inc_ref(v_a_703_);
lean_inc(v_a_702_);
lean_inc_ref(v_a_701_);
lean_inc(v_a_700_);
lean_inc_ref(v_a_699_);
lean_inc(v_a_698_);
lean_inc(v_a_697_);
lean_inc(v_a_696_);
v___x_763_ = lean_apply_12(v___x_780__overap_762_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, lean_box(0));
return v___x_763_;
}
else
{
lean_object* v___x_764_; lean_object* v___x_778__overap_765_; lean_object* v___x_766_; 
v___x_764_ = l_Lean_PersistentArray_get_x21___redArg(v___x_759_, v_targets_757_, v_u_694_);
lean_dec_ref(v_targets_757_);
v___x_778__overap_765_ = l_Lean_AssocList_forM___redArg(v___x_754_, v_f_695_, v___x_764_);
lean_inc(v_a_706_);
lean_inc_ref(v_a_705_);
lean_inc(v_a_704_);
lean_inc_ref(v_a_703_);
lean_inc(v_a_702_);
lean_inc_ref(v_a_701_);
lean_inc(v_a_700_);
lean_inc_ref(v_a_699_);
lean_inc(v_a_698_);
lean_inc(v_a_697_);
lean_inc(v_a_696_);
v___x_766_ = lean_apply_12(v___x_778__overap_765_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, lean_box(0));
return v___x_766_;
}
}
else
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
lean_dec_ref(v___x_754_);
lean_dec_ref(v_f_695_);
v_a_767_ = lean_ctor_get(v___x_755_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_755_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_755_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachTargetOf___boxed(lean_object* v_u_781_, lean_object* v_f_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachTargetOf(v_u_781_, v_f_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_, v_a_792_, v_a_793_);
lean_dec(v_a_793_);
lean_dec_ref(v_a_792_);
lean_dec(v_a_791_);
lean_dec_ref(v_a_790_);
lean_dec(v_a_789_);
lean_dec_ref(v_a_788_);
lean_dec(v_a_787_);
lean_dec_ref(v_a_786_);
lean_dec(v_a_785_);
lean_dec(v_a_784_);
lean_dec(v_a_783_);
lean_dec(v_u_781_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter(lean_object* v_u_796_, lean_object* v_v_797_, lean_object* v_k_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_){
_start:
{
lean_object* v___x_811_; 
v___x_811_ = l_Lean_Meta_Grind_Order_getDist_x3f(v_u_796_, v_v_797_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_, v_a_804_, v_a_805_, v_a_806_, v_a_807_, v_a_808_, v_a_809_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_827_; 
v_a_812_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_827_ == 0)
{
v___x_814_ = v___x_811_;
v_isShared_815_ = v_isSharedCheck_827_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_811_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_827_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
if (lean_obj_tag(v_a_812_) == 1)
{
lean_object* v_val_816_; uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_820_; 
v_val_816_ = lean_ctor_get(v_a_812_, 0);
lean_inc(v_val_816_);
lean_dec_ref(v_a_812_);
v___x_817_ = l_Lean_Meta_Grind_Order_instDecidableLTWeight(v_k_798_, v_val_816_);
lean_dec(v_val_816_);
v___x_818_ = lean_box(v___x_817_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_818_);
v___x_820_ = v___x_814_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v___x_818_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
else
{
uint8_t v___x_822_; lean_object* v___x_823_; lean_object* v___x_825_; 
lean_dec(v_a_812_);
v___x_822_ = 1;
v___x_823_ = lean_box(v___x_822_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_823_);
v___x_825_ = v___x_814_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v___x_823_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
v_a_828_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___x_811_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_811_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_828_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter___boxed(lean_object* v_u_836_, lean_object* v_v_837_, lean_object* v_k_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter(v_u_836_, v_v_837_, v_k_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_);
lean_dec(v_a_849_);
lean_dec_ref(v_a_848_);
lean_dec(v_a_847_);
lean_dec_ref(v_a_846_);
lean_dec(v_a_845_);
lean_dec_ref(v_a_844_);
lean_dec(v_a_843_);
lean_dec_ref(v_a_842_);
lean_dec(v_a_841_);
lean_dec(v_a_840_);
lean_dec(v_a_839_);
lean_dec_ref(v_k_838_);
lean_dec(v_v_837_);
lean_dec(v_u_836_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___lam__0(lean_object* v_p_852_, lean_object* v_s_853_){
_start:
{
lean_object* v_id_854_; lean_object* v_type_855_; lean_object* v_u_856_; lean_object* v_isPreorderInst_857_; lean_object* v_leInst_858_; lean_object* v_ltInst_x3f_859_; lean_object* v_isPartialInst_x3f_860_; lean_object* v_isLinearPreInst_x3f_861_; lean_object* v_lawfulOrderLTInst_x3f_862_; lean_object* v_ringId_x3f_863_; uint8_t v_isCommRing_864_; lean_object* v_ringInst_x3f_865_; lean_object* v_orderedRingInst_x3f_866_; lean_object* v_leFn_867_; lean_object* v_ltFn_x3f_868_; lean_object* v_nodes_869_; lean_object* v_nodeMap_870_; lean_object* v_cnstrs_871_; lean_object* v_cnstrsOf_872_; lean_object* v_sources_873_; lean_object* v_targets_874_; lean_object* v_proofs_875_; lean_object* v_propagate_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_884_; 
v_id_854_ = lean_ctor_get(v_s_853_, 0);
v_type_855_ = lean_ctor_get(v_s_853_, 1);
v_u_856_ = lean_ctor_get(v_s_853_, 2);
v_isPreorderInst_857_ = lean_ctor_get(v_s_853_, 3);
v_leInst_858_ = lean_ctor_get(v_s_853_, 4);
v_ltInst_x3f_859_ = lean_ctor_get(v_s_853_, 5);
v_isPartialInst_x3f_860_ = lean_ctor_get(v_s_853_, 6);
v_isLinearPreInst_x3f_861_ = lean_ctor_get(v_s_853_, 7);
v_lawfulOrderLTInst_x3f_862_ = lean_ctor_get(v_s_853_, 8);
v_ringId_x3f_863_ = lean_ctor_get(v_s_853_, 9);
v_isCommRing_864_ = lean_ctor_get_uint8(v_s_853_, sizeof(void*)*22);
v_ringInst_x3f_865_ = lean_ctor_get(v_s_853_, 10);
v_orderedRingInst_x3f_866_ = lean_ctor_get(v_s_853_, 11);
v_leFn_867_ = lean_ctor_get(v_s_853_, 12);
v_ltFn_x3f_868_ = lean_ctor_get(v_s_853_, 13);
v_nodes_869_ = lean_ctor_get(v_s_853_, 14);
v_nodeMap_870_ = lean_ctor_get(v_s_853_, 15);
v_cnstrs_871_ = lean_ctor_get(v_s_853_, 16);
v_cnstrsOf_872_ = lean_ctor_get(v_s_853_, 17);
v_sources_873_ = lean_ctor_get(v_s_853_, 18);
v_targets_874_ = lean_ctor_get(v_s_853_, 19);
v_proofs_875_ = lean_ctor_get(v_s_853_, 20);
v_propagate_876_ = lean_ctor_get(v_s_853_, 21);
v_isSharedCheck_884_ = !lean_is_exclusive(v_s_853_);
if (v_isSharedCheck_884_ == 0)
{
v___x_878_ = v_s_853_;
v_isShared_879_ = v_isSharedCheck_884_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_propagate_876_);
lean_inc(v_proofs_875_);
lean_inc(v_targets_874_);
lean_inc(v_sources_873_);
lean_inc(v_cnstrsOf_872_);
lean_inc(v_cnstrs_871_);
lean_inc(v_nodeMap_870_);
lean_inc(v_nodes_869_);
lean_inc(v_ltFn_x3f_868_);
lean_inc(v_leFn_867_);
lean_inc(v_orderedRingInst_x3f_866_);
lean_inc(v_ringInst_x3f_865_);
lean_inc(v_ringId_x3f_863_);
lean_inc(v_lawfulOrderLTInst_x3f_862_);
lean_inc(v_isLinearPreInst_x3f_861_);
lean_inc(v_isPartialInst_x3f_860_);
lean_inc(v_ltInst_x3f_859_);
lean_inc(v_leInst_858_);
lean_inc(v_isPreorderInst_857_);
lean_inc(v_u_856_);
lean_inc(v_type_855_);
lean_inc(v_id_854_);
lean_dec(v_s_853_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_884_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_880_; lean_object* v___x_882_; 
v___x_880_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_880_, 0, v_p_852_);
lean_ctor_set(v___x_880_, 1, v_propagate_876_);
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 21, v___x_880_);
v___x_882_ = v___x_878_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 22, 1);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_id_854_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v_type_855_);
lean_ctor_set(v_reuseFailAlloc_883_, 2, v_u_856_);
lean_ctor_set(v_reuseFailAlloc_883_, 3, v_isPreorderInst_857_);
lean_ctor_set(v_reuseFailAlloc_883_, 4, v_leInst_858_);
lean_ctor_set(v_reuseFailAlloc_883_, 5, v_ltInst_x3f_859_);
lean_ctor_set(v_reuseFailAlloc_883_, 6, v_isPartialInst_x3f_860_);
lean_ctor_set(v_reuseFailAlloc_883_, 7, v_isLinearPreInst_x3f_861_);
lean_ctor_set(v_reuseFailAlloc_883_, 8, v_lawfulOrderLTInst_x3f_862_);
lean_ctor_set(v_reuseFailAlloc_883_, 9, v_ringId_x3f_863_);
lean_ctor_set(v_reuseFailAlloc_883_, 10, v_ringInst_x3f_865_);
lean_ctor_set(v_reuseFailAlloc_883_, 11, v_orderedRingInst_x3f_866_);
lean_ctor_set(v_reuseFailAlloc_883_, 12, v_leFn_867_);
lean_ctor_set(v_reuseFailAlloc_883_, 13, v_ltFn_x3f_868_);
lean_ctor_set(v_reuseFailAlloc_883_, 14, v_nodes_869_);
lean_ctor_set(v_reuseFailAlloc_883_, 15, v_nodeMap_870_);
lean_ctor_set(v_reuseFailAlloc_883_, 16, v_cnstrs_871_);
lean_ctor_set(v_reuseFailAlloc_883_, 17, v_cnstrsOf_872_);
lean_ctor_set(v_reuseFailAlloc_883_, 18, v_sources_873_);
lean_ctor_set(v_reuseFailAlloc_883_, 19, v_targets_874_);
lean_ctor_set(v_reuseFailAlloc_883_, 20, v_proofs_875_);
lean_ctor_set(v_reuseFailAlloc_883_, 21, v___x_880_);
lean_ctor_set_uint8(v_reuseFailAlloc_883_, sizeof(void*)*22, v_isCommRing_864_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0_spec__0(lean_object* v_msgData_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
lean_object* v___x_891_; lean_object* v_env_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v_mctx_895_; lean_object* v_lctx_896_; lean_object* v_options_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_891_ = lean_st_ref_get(v___y_889_);
v_env_892_ = lean_ctor_get(v___x_891_, 0);
lean_inc_ref(v_env_892_);
lean_dec(v___x_891_);
v___x_893_ = lean_st_ref_get(v___y_889_);
lean_dec(v___x_893_);
v___x_894_ = lean_st_ref_get(v___y_887_);
v_mctx_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc_ref(v_mctx_895_);
lean_dec(v___x_894_);
v_lctx_896_ = lean_ctor_get(v___y_886_, 2);
v_options_897_ = lean_ctor_get(v___y_888_, 2);
lean_inc_ref(v_options_897_);
lean_inc_ref(v_lctx_896_);
v___x_898_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_898_, 0, v_env_892_);
lean_ctor_set(v___x_898_, 1, v_mctx_895_);
lean_ctor_set(v___x_898_, 2, v_lctx_896_);
lean_ctor_set(v___x_898_, 3, v_options_897_);
v___x_899_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
lean_ctor_set(v___x_899_, 1, v_msgData_885_);
v___x_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0_spec__0___boxed(lean_object* v_msgData_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0_spec__0(v_msgData_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
lean_dec(v___y_905_);
lean_dec_ref(v___y_904_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
return v_res_907_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_908_; double v___x_909_; 
v___x_908_ = lean_unsigned_to_nat(0u);
v___x_909_ = lean_float_of_nat(v___x_908_);
return v___x_909_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = lean_mk_string_unchecked("", 0, 0);
return v___x_910_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_911_ = lean_unsigned_to_nat(0u);
v___x_912_ = lean_mk_empty_array_with_capacity(v___x_911_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(lean_object* v_cls_913_, lean_object* v_msg_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v_ref_920_; lean_object* v___x_921_; lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_966_; 
v_ref_920_ = lean_ctor_get(v___y_917_, 5);
v___x_921_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0_spec__0(v_msg_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
v_a_922_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_966_ == 0)
{
v___x_924_ = v___x_921_;
v_isShared_925_ = v_isSharedCheck_966_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_921_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_966_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; lean_object* v_traceState_927_; lean_object* v_env_928_; lean_object* v_nextMacroScope_929_; lean_object* v_ngen_930_; lean_object* v_auxDeclNGen_931_; lean_object* v_cache_932_; lean_object* v_messages_933_; lean_object* v_infoState_934_; lean_object* v_snapshotTasks_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_965_; 
v___x_926_ = lean_st_ref_take(v___y_918_);
v_traceState_927_ = lean_ctor_get(v___x_926_, 4);
v_env_928_ = lean_ctor_get(v___x_926_, 0);
v_nextMacroScope_929_ = lean_ctor_get(v___x_926_, 1);
v_ngen_930_ = lean_ctor_get(v___x_926_, 2);
v_auxDeclNGen_931_ = lean_ctor_get(v___x_926_, 3);
v_cache_932_ = lean_ctor_get(v___x_926_, 5);
v_messages_933_ = lean_ctor_get(v___x_926_, 6);
v_infoState_934_ = lean_ctor_get(v___x_926_, 7);
v_snapshotTasks_935_ = lean_ctor_get(v___x_926_, 8);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_965_ == 0)
{
v___x_937_ = v___x_926_;
v_isShared_938_ = v_isSharedCheck_965_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_snapshotTasks_935_);
lean_inc(v_infoState_934_);
lean_inc(v_messages_933_);
lean_inc(v_cache_932_);
lean_inc(v_traceState_927_);
lean_inc(v_auxDeclNGen_931_);
lean_inc(v_ngen_930_);
lean_inc(v_nextMacroScope_929_);
lean_inc(v_env_928_);
lean_dec(v___x_926_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_965_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
uint64_t v_tid_939_; lean_object* v_traces_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_964_; 
v_tid_939_ = lean_ctor_get_uint64(v_traceState_927_, sizeof(void*)*1);
v_traces_940_ = lean_ctor_get(v_traceState_927_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v_traceState_927_);
if (v_isSharedCheck_964_ == 0)
{
v___x_942_ = v_traceState_927_;
v_isShared_943_ = v_isSharedCheck_964_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_traces_940_);
lean_dec(v_traceState_927_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_964_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_944_; double v___x_945_; uint8_t v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_954_; 
v___x_944_ = lean_box(0);
v___x_945_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__0);
v___x_946_ = 0;
v___x_947_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__1);
v___x_948_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_948_, 0, v_cls_913_);
lean_ctor_set(v___x_948_, 1, v___x_944_);
lean_ctor_set(v___x_948_, 2, v___x_947_);
lean_ctor_set_float(v___x_948_, sizeof(void*)*3, v___x_945_);
lean_ctor_set_float(v___x_948_, sizeof(void*)*3 + 8, v___x_945_);
lean_ctor_set_uint8(v___x_948_, sizeof(void*)*3 + 16, v___x_946_);
v___x_949_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__2, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__2);
v___x_950_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_950_, 0, v___x_948_);
lean_ctor_set(v___x_950_, 1, v_a_922_);
lean_ctor_set(v___x_950_, 2, v___x_949_);
lean_inc(v_ref_920_);
v___x_951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_951_, 0, v_ref_920_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = l_Lean_PersistentArray_push___redArg(v_traces_940_, v___x_951_);
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 0, v___x_952_);
v___x_954_ = v___x_942_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v___x_952_);
lean_ctor_set_uint64(v_reuseFailAlloc_963_, sizeof(void*)*1, v_tid_939_);
v___x_954_ = v_reuseFailAlloc_963_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
lean_object* v___x_956_; 
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 4, v___x_954_);
v___x_956_ = v___x_937_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_env_928_);
lean_ctor_set(v_reuseFailAlloc_962_, 1, v_nextMacroScope_929_);
lean_ctor_set(v_reuseFailAlloc_962_, 2, v_ngen_930_);
lean_ctor_set(v_reuseFailAlloc_962_, 3, v_auxDeclNGen_931_);
lean_ctor_set(v_reuseFailAlloc_962_, 4, v___x_954_);
lean_ctor_set(v_reuseFailAlloc_962_, 5, v_cache_932_);
lean_ctor_set(v_reuseFailAlloc_962_, 6, v_messages_933_);
lean_ctor_set(v_reuseFailAlloc_962_, 7, v_infoState_934_);
lean_ctor_set(v_reuseFailAlloc_962_, 8, v_snapshotTasks_935_);
v___x_956_ = v_reuseFailAlloc_962_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_960_; 
v___x_957_ = lean_st_ref_set(v___y_918_, v___x_956_);
v___x_958_ = lean_box(0);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 0, v___x_958_);
v___x_960_ = v___x_924_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_958_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___boxed(lean_object* v_cls_967_, lean_object* v_msg_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v_cls_967_, v_msg_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
return v_res_974_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0(void){
_start:
{
lean_object* v___x_975_; 
v___x_975_ = lean_mk_string_unchecked("grind", 5, 5);
return v___x_975_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1(void){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = lean_mk_string_unchecked("debug", 5, 5);
return v___x_976_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2(void){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = lean_mk_string_unchecked("order", 5, 5);
return v___x_977_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__3(void){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = lean_mk_string_unchecked("propagate", 9, 9);
return v___x_978_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4(void){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v_cls_983_; 
v___x_979_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__3);
v___x_980_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2);
v___x_981_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1);
v___x_982_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0);
v_cls_983_ = l_Lean_Name_mkStr4(v___x_982_, v___x_981_, v___x_980_, v___x_979_);
return v_cls_983_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__5(void){
_start:
{
lean_object* v___x_984_; 
v___x_984_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_984_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6(void){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__5);
v___x_986_ = l_Lean_Name_mkStr1(v___x_985_);
return v___x_986_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__7(void){
_start:
{
lean_object* v_cls_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v_cls_987_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4);
v___x_988_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6);
v___x_989_ = l_Lean_Name_append(v___x_988_, v_cls_987_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(lean_object* v_p_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_){
_start:
{
lean_object* v_options_1003_; lean_object* v_inheritedTraceOptions_1004_; uint8_t v_hasTrace_1005_; lean_object* v___f_1006_; 
v_options_1003_ = lean_ctor_get(v_a_1000_, 2);
v_inheritedTraceOptions_1004_ = lean_ctor_get(v_a_1000_, 13);
v_hasTrace_1005_ = lean_ctor_get_uint8(v_options_1003_, sizeof(void*)*1);
lean_inc_ref(v_p_990_);
v___f_1006_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___lam__0), 2, 1);
lean_closure_set(v___f_1006_, 0, v_p_990_);
if (v_hasTrace_1005_ == 0)
{
lean_object* v___x_1007_; 
lean_dec_ref(v_p_990_);
v___x_1007_ = l_Lean_Meta_Grind_Order_modifyStruct___redArg(v___f_1006_, v_a_991_, v_a_992_, v_a_1001_);
return v___x_1007_;
}
else
{
lean_object* v_cls_1008_; lean_object* v___x_1009_; uint8_t v___x_1010_; 
v_cls_1008_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4);
v___x_1009_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__7, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__7);
v___x_1010_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1004_, v_options_1003_, v___x_1009_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; 
lean_dec_ref(v_p_990_);
v___x_1011_ = l_Lean_Meta_Grind_Order_modifyStruct___redArg(v___f_1006_, v_a_991_, v_a_992_, v_a_1001_);
return v___x_1011_;
}
else
{
lean_object* v___x_1012_; 
v___x_1012_ = l_Lean_Meta_Grind_Order_ToPropagate_pp(v_p_990_, v_a_991_, v_a_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1014_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
lean_inc(v_a_1013_);
lean_dec_ref(v___x_1012_);
v___x_1014_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v_cls_1008_, v_a_1013_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_);
if (lean_obj_tag(v___x_1014_) == 0)
{
lean_object* v___x_1015_; 
lean_dec_ref(v___x_1014_);
v___x_1015_ = l_Lean_Meta_Grind_Order_modifyStruct___redArg(v___f_1006_, v_a_991_, v_a_992_, v_a_1001_);
return v___x_1015_;
}
else
{
lean_dec_ref(v___f_1006_);
return v___x_1014_;
}
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
lean_dec_ref(v___f_1006_);
v_a_1016_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_1012_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1012_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___boxed(lean_object* v_p_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(v_p_1024_, v_a_1025_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_);
lean_dec(v_a_1035_);
lean_dec_ref(v_a_1034_);
lean_dec(v_a_1033_);
lean_dec_ref(v_a_1032_);
lean_dec(v_a_1031_);
lean_dec_ref(v_a_1030_);
lean_dec(v_a_1029_);
lean_dec_ref(v_a_1028_);
lean_dec(v_a_1027_);
lean_dec(v_a_1026_);
lean_dec(v_a_1025_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0(lean_object* v_cls_1038_, lean_object* v_msg_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v_cls_1038_, v_msg_1039_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___boxed(lean_object* v_cls_1053_, lean_object* v_msg_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0(v_cls_1053_, v_msg_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec(v___y_1059_);
lean_dec_ref(v___y_1058_);
lean_dec(v___y_1057_);
lean_dec(v___y_1056_);
lean_dec(v___y_1055_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1068_, lean_object* v_vals_1069_, lean_object* v_i_1070_, lean_object* v_k_1071_){
_start:
{
lean_object* v___x_1072_; uint8_t v___x_1073_; 
v___x_1072_ = lean_array_get_size(v_keys_1068_);
v___x_1073_ = lean_nat_dec_lt(v_i_1070_, v___x_1072_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; 
lean_dec(v_i_1070_);
v___x_1074_ = lean_box(0);
return v___x_1074_;
}
else
{
lean_object* v_k_x27_1075_; uint8_t v___x_1076_; 
v_k_x27_1075_ = lean_array_fget_borrowed(v_keys_1068_, v_i_1070_);
v___x_1076_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_1071_, v_k_x27_1075_);
if (v___x_1076_ == 0)
{
lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1077_ = lean_unsigned_to_nat(1u);
v___x_1078_ = lean_nat_add(v_i_1070_, v___x_1077_);
lean_dec(v_i_1070_);
v_i_1070_ = v___x_1078_;
goto _start;
}
else
{
lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = lean_array_fget_borrowed(v_vals_1069_, v_i_1070_);
lean_dec(v_i_1070_);
lean_inc(v___x_1080_);
v___x_1081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
return v___x_1081_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1082_, lean_object* v_vals_1083_, lean_object* v_i_1084_, lean_object* v_k_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg(v_keys_1082_, v_vals_1083_, v_i_1084_, v_k_1085_);
lean_dec_ref(v_k_1085_);
lean_dec_ref(v_vals_1083_);
lean_dec_ref(v_keys_1082_);
return v_res_1086_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_1087_; size_t v___x_1088_; size_t v___x_1089_; 
v___x_1087_ = ((size_t)5ULL);
v___x_1088_ = ((size_t)1ULL);
v___x_1089_ = lean_usize_shift_left(v___x_1088_, v___x_1087_);
return v___x_1089_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1090_; size_t v___x_1091_; size_t v___x_1092_; 
v___x_1090_ = ((size_t)1ULL);
v___x_1091_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__0);
v___x_1092_ = lean_usize_sub(v___x_1091_, v___x_1090_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg(lean_object* v_x_1093_, size_t v_x_1094_, lean_object* v_x_1095_){
_start:
{
if (lean_obj_tag(v_x_1093_) == 0)
{
lean_object* v_es_1096_; lean_object* v___x_1097_; size_t v___x_1098_; size_t v___x_1099_; size_t v___x_1100_; lean_object* v_j_1101_; lean_object* v___x_1102_; 
v_es_1096_ = lean_ctor_get(v_x_1093_, 0);
v___x_1097_ = lean_box(2);
v___x_1098_ = ((size_t)5ULL);
v___x_1099_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__1);
v___x_1100_ = lean_usize_land(v_x_1094_, v___x_1099_);
v_j_1101_ = lean_usize_to_nat(v___x_1100_);
v___x_1102_ = lean_array_get_borrowed(v___x_1097_, v_es_1096_, v_j_1101_);
lean_dec(v_j_1101_);
switch(lean_obj_tag(v___x_1102_))
{
case 0:
{
lean_object* v_key_1103_; lean_object* v_val_1104_; uint8_t v___x_1105_; 
v_key_1103_ = lean_ctor_get(v___x_1102_, 0);
v_val_1104_ = lean_ctor_get(v___x_1102_, 1);
v___x_1105_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_1095_, v_key_1103_);
if (v___x_1105_ == 0)
{
lean_object* v___x_1106_; 
v___x_1106_ = lean_box(0);
return v___x_1106_;
}
else
{
lean_object* v___x_1107_; 
lean_inc(v_val_1104_);
v___x_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1107_, 0, v_val_1104_);
return v___x_1107_;
}
}
case 1:
{
lean_object* v_node_1108_; size_t v___x_1109_; 
v_node_1108_ = lean_ctor_get(v___x_1102_, 0);
v___x_1109_ = lean_usize_shift_right(v_x_1094_, v___x_1098_);
v_x_1093_ = v_node_1108_;
v_x_1094_ = v___x_1109_;
goto _start;
}
default: 
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_box(0);
return v___x_1111_;
}
}
}
else
{
lean_object* v_ks_1112_; lean_object* v_vs_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
v_ks_1112_ = lean_ctor_get(v_x_1093_, 0);
v_vs_1113_ = lean_ctor_get(v_x_1093_, 1);
v___x_1114_ = lean_unsigned_to_nat(0u);
v___x_1115_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg(v_ks_1112_, v_vs_1113_, v___x_1114_, v_x_1095_);
return v___x_1115_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___boxed(lean_object* v_x_1116_, lean_object* v_x_1117_, lean_object* v_x_1118_){
_start:
{
size_t v_x_9945__boxed_1119_; lean_object* v_res_1120_; 
v_x_9945__boxed_1119_ = lean_unbox_usize(v_x_1117_);
lean_dec(v_x_1117_);
v_res_1120_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg(v_x_1116_, v_x_9945__boxed_1119_, v_x_1118_);
lean_dec_ref(v_x_1118_);
lean_dec_ref(v_x_1116_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(lean_object* v_x_1121_, lean_object* v_x_1122_){
_start:
{
uint64_t v___x_1123_; size_t v___x_1124_; lean_object* v___x_1125_; 
v___x_1123_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_1122_);
v___x_1124_ = lean_uint64_to_usize(v___x_1123_);
v___x_1125_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg(v_x_1121_, v___x_1124_, v_x_1122_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg___boxed(lean_object* v_x_1126_, lean_object* v_x_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_x_1126_, v_x_1127_);
lean_dec_ref(v_x_1127_);
lean_dec_ref(v_x_1126_);
return v_res_1128_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0(void){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1129_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1(void){
_start:
{
lean_object* v___x_1130_; 
v___x_1130_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_1130_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2(void){
_start:
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_mk_string_unchecked("Order", 5, 5);
return v___x_1131_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__3(void){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = lean_mk_string_unchecked("eq_trans_true", 13, 13);
return v___x_1132_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4(void){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1133_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__3, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__3_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__3);
v___x_1134_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_1135_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_1136_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_1137_ = l_Lean_Name_mkStr4(v___x_1136_, v___x_1135_, v___x_1134_, v___x_1133_);
return v___x_1137_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5(void){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1138_ = lean_box(0);
v___x_1139_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4);
v___x_1140_ = l_Lean_mkConst(v___x_1139_, v___x_1138_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue(lean_object* v_c_1141_, lean_object* v_e_1142_, lean_object* v_u_1143_, lean_object* v_v_1144_, lean_object* v_k_1145_, lean_object* v_k_x27_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_){
_start:
{
lean_object* v_h_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___x_1187_; 
v___x_1187_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_u_1143_, v_v_1144_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_);
if (lean_obj_tag(v___x_1187_) == 0)
{
lean_object* v_a_1188_; lean_object* v___x_1189_; 
v_a_1188_ = lean_ctor_get(v___x_1187_, 0);
lean_inc(v_a_1188_);
lean_dec_ref(v___x_1187_);
v___x_1189_ = l_Lean_Meta_Grind_Order_getExpr(v_u_1143_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_);
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_object* v_a_1190_; lean_object* v___x_1191_; 
v_a_1190_ = lean_ctor_get(v___x_1189_, 0);
lean_inc(v_a_1190_);
lean_dec_ref(v___x_1189_);
v___x_1191_ = l_Lean_Meta_Grind_Order_getExpr(v_v_1144_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_);
if (lean_obj_tag(v___x_1191_) == 0)
{
lean_object* v_a_1192_; lean_object* v___x_1193_; 
v_a_1192_ = lean_ctor_get(v___x_1191_, 0);
lean_inc(v_a_1192_);
lean_dec_ref(v___x_1191_);
v___x_1193_ = l_Lean_Meta_Grind_Order_mkPropagateEqTrueProof(v_a_1190_, v_a_1192_, v_k_1145_, v_a_1188_, v_k_x27_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_);
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v_h_x3f_1194_; 
v_h_x3f_1194_ = lean_ctor_get(v_c_1141_, 4);
lean_inc(v_h_x3f_1194_);
if (lean_obj_tag(v_h_x3f_1194_) == 1)
{
lean_object* v_a_1195_; lean_object* v_e_1196_; lean_object* v_val_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v_a_1195_ = lean_ctor_get(v___x_1193_, 0);
lean_inc(v_a_1195_);
lean_dec_ref(v___x_1193_);
v_e_1196_ = lean_ctor_get(v_c_1141_, 3);
lean_inc_ref(v_e_1196_);
lean_dec_ref(v_c_1141_);
v_val_1197_ = lean_ctor_get(v_h_x3f_1194_, 0);
lean_inc(v_val_1197_);
lean_dec_ref(v_h_x3f_1194_);
v___x_1198_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5);
lean_inc_ref(v_e_1142_);
v___x_1199_ = l_Lean_mkApp4(v___x_1198_, v_e_1142_, v_e_1196_, v_val_1197_, v_a_1195_);
v_h_1160_ = v___x_1199_;
v___y_1161_ = v_a_1148_;
v___y_1162_ = v_a_1150_;
v___y_1163_ = v_a_1152_;
v___y_1164_ = v_a_1154_;
v___y_1165_ = v_a_1155_;
v___y_1166_ = v_a_1156_;
v___y_1167_ = v_a_1157_;
goto v___jp_1159_;
}
else
{
lean_object* v_a_1200_; 
lean_dec(v_h_x3f_1194_);
lean_dec_ref(v_c_1141_);
v_a_1200_ = lean_ctor_get(v___x_1193_, 0);
lean_inc(v_a_1200_);
lean_dec_ref(v___x_1193_);
v_h_1160_ = v_a_1200_;
v___y_1161_ = v_a_1148_;
v___y_1162_ = v_a_1150_;
v___y_1163_ = v_a_1152_;
v___y_1164_ = v_a_1154_;
v___y_1165_ = v_a_1155_;
v___y_1166_ = v_a_1156_;
v___y_1167_ = v_a_1157_;
goto v___jp_1159_;
}
}
else
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1208_; 
lean_dec_ref(v_e_1142_);
lean_dec_ref(v_c_1141_);
v_a_1201_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1203_ = v___x_1193_;
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1193_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1206_; 
if (v_isShared_1204_ == 0)
{
v___x_1206_ = v___x_1203_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_a_1201_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
lean_dec(v_a_1190_);
lean_dec(v_a_1188_);
lean_dec_ref(v_e_1142_);
lean_dec_ref(v_c_1141_);
v_a_1209_ = lean_ctor_get(v___x_1191_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1191_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1191_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
lean_dec(v_a_1188_);
lean_dec_ref(v_e_1142_);
lean_dec_ref(v_c_1141_);
v_a_1217_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1189_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1189_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec_ref(v_e_1142_);
lean_dec_ref(v_c_1141_);
v_a_1225_ = lean_ctor_get(v___x_1187_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1187_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1187_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1187_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1230_; 
if (v_isShared_1228_ == 0)
{
v___x_1230_ = v___x_1227_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1225_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
v___jp_1159_:
{
lean_object* v___x_1168_; 
v___x_1168_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v___y_1161_, v___y_1166_, v___y_1167_);
if (lean_obj_tag(v___x_1168_) == 0)
{
lean_object* v_a_1169_; lean_object* v_termMapInv_1170_; lean_object* v___x_1171_; 
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
lean_inc(v_a_1169_);
lean_dec_ref(v___x_1168_);
v_termMapInv_1170_ = lean_ctor_get(v_a_1169_, 4);
lean_inc_ref(v_termMapInv_1170_);
lean_dec(v_a_1169_);
v___x_1171_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_1170_, v_e_1142_);
lean_dec_ref(v_termMapInv_1170_);
if (lean_obj_tag(v___x_1171_) == 1)
{
lean_object* v_val_1172_; lean_object* v_fst_1173_; lean_object* v_snd_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v_val_1172_ = lean_ctor_get(v___x_1171_, 0);
lean_inc(v_val_1172_);
lean_dec_ref(v___x_1171_);
v_fst_1173_ = lean_ctor_get(v_val_1172_, 0);
lean_inc_n(v_fst_1173_, 2);
v_snd_1174_ = lean_ctor_get(v_val_1172_, 1);
lean_inc(v_snd_1174_);
lean_dec(v_val_1172_);
v___x_1175_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5);
v___x_1176_ = l_Lean_mkApp4(v___x_1175_, v_fst_1173_, v_e_1142_, v_snd_1174_, v_h_1160_);
v___x_1177_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_fst_1173_, v___x_1176_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
return v___x_1177_;
}
else
{
lean_object* v___x_1178_; 
lean_dec(v___x_1171_);
v___x_1178_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_1142_, v_h_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
return v___x_1178_;
}
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
lean_dec_ref(v_h_1160_);
lean_dec_ref(v_e_1142_);
v_a_1179_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1168_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1168_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___boxed(lean_object** _args){
lean_object* v_c_1233_ = _args[0];
lean_object* v_e_1234_ = _args[1];
lean_object* v_u_1235_ = _args[2];
lean_object* v_v_1236_ = _args[3];
lean_object* v_k_1237_ = _args[4];
lean_object* v_k_x27_1238_ = _args[5];
lean_object* v_a_1239_ = _args[6];
lean_object* v_a_1240_ = _args[7];
lean_object* v_a_1241_ = _args[8];
lean_object* v_a_1242_ = _args[9];
lean_object* v_a_1243_ = _args[10];
lean_object* v_a_1244_ = _args[11];
lean_object* v_a_1245_ = _args[12];
lean_object* v_a_1246_ = _args[13];
lean_object* v_a_1247_ = _args[14];
lean_object* v_a_1248_ = _args[15];
lean_object* v_a_1249_ = _args[16];
lean_object* v_a_1250_ = _args[17];
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Lean_Meta_Grind_Order_propagateEqTrue(v_c_1233_, v_e_1234_, v_u_1235_, v_v_1236_, v_k_1237_, v_k_x27_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_);
lean_dec(v_a_1249_);
lean_dec_ref(v_a_1248_);
lean_dec(v_a_1247_);
lean_dec_ref(v_a_1246_);
lean_dec(v_a_1245_);
lean_dec_ref(v_a_1244_);
lean_dec(v_a_1243_);
lean_dec_ref(v_a_1242_);
lean_dec(v_a_1241_);
lean_dec(v_a_1240_);
lean_dec(v_a_1239_);
lean_dec_ref(v_k_x27_1238_);
lean_dec_ref(v_k_1237_);
lean_dec(v_v_1236_);
lean_dec(v_u_1235_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0(lean_object* v_00_u03b2_1252_, lean_object* v_x_1253_, lean_object* v_x_1254_){
_start:
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_x_1253_, v_x_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___boxed(lean_object* v_00_u03b2_1256_, lean_object* v_x_1257_, lean_object* v_x_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0(v_00_u03b2_1256_, v_x_1257_, v_x_1258_);
lean_dec_ref(v_x_1258_);
lean_dec_ref(v_x_1257_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0(lean_object* v_00_u03b2_1260_, lean_object* v_x_1261_, size_t v_x_1262_, lean_object* v_x_1263_){
_start:
{
lean_object* v___x_1264_; 
v___x_1264_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg(v_x_1261_, v_x_1262_, v_x_1263_);
return v___x_1264_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1265_, lean_object* v_x_1266_, lean_object* v_x_1267_, lean_object* v_x_1268_){
_start:
{
size_t v_x_10209__boxed_1269_; lean_object* v_res_1270_; 
v_x_10209__boxed_1269_ = lean_unbox_usize(v_x_1267_);
lean_dec(v_x_1267_);
v_res_1270_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0(v_00_u03b2_1265_, v_x_1266_, v_x_10209__boxed_1269_, v_x_1268_);
lean_dec_ref(v_x_1268_);
lean_dec_ref(v_x_1266_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1271_, lean_object* v_keys_1272_, lean_object* v_vals_1273_, lean_object* v_heq_1274_, lean_object* v_i_1275_, lean_object* v_k_1276_){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg(v_keys_1272_, v_vals_1273_, v_i_1275_, v_k_1276_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1278_, lean_object* v_keys_1279_, lean_object* v_vals_1280_, lean_object* v_heq_1281_, lean_object* v_i_1282_, lean_object* v_k_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1(v_00_u03b2_1278_, v_keys_1279_, v_vals_1280_, v_heq_1281_, v_i_1282_, v_k_1283_);
lean_dec_ref(v_k_1283_);
lean_dec_ref(v_vals_1280_);
lean_dec_ref(v_keys_1279_);
return v_res_1284_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1285_; 
v___x_1285_ = l_Lean_Meta_Grind_instInhabitedGoalM(lean_box(0));
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0(lean_object* v_msg_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_){
_start:
{
lean_object* v___x_1299_; lean_object* v___f_1300_; lean_object* v___x_6378__overap_1301_; lean_object* v___x_1302_; 
v___x_1299_ = lean_obj_once(&l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___closed__0, &l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___closed__0);
v___f_1300_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1300_, 0, v___x_1299_);
v___x_6378__overap_1301_ = lean_panic_fn_borrowed(v___f_1300_, v_msg_1286_);
lean_dec_ref(v___f_1300_);
lean_inc(v___y_1297_);
lean_inc_ref(v___y_1296_);
lean_inc(v___y_1295_);
lean_inc_ref(v___y_1294_);
lean_inc(v___y_1293_);
lean_inc_ref(v___y_1292_);
lean_inc(v___y_1291_);
lean_inc_ref(v___y_1290_);
lean_inc(v___y_1289_);
lean_inc(v___y_1288_);
lean_inc(v___y_1287_);
v___x_1302_ = lean_apply_12(v___x_6378__overap_1301_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, lean_box(0));
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___boxed(lean_object* v_msg_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_){
_start:
{
lean_object* v_res_1316_; 
v_res_1316_ = l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0(v_msg_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec(v___y_1306_);
lean_dec(v___y_1305_);
lean_dec(v___y_1304_);
return v_res_1316_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0(void){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_mk_string_unchecked("Lean.Meta.Tactic.Grind.Order.Assert", 35, 35);
return v___x_1317_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__1(void){
_start:
{
lean_object* v___x_1318_; 
v___x_1318_ = lean_mk_string_unchecked("Lean.Meta.Grind.Order.propagateSelfEqTrue", 41, 41);
return v___x_1318_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2(void){
_start:
{
lean_object* v___x_1319_; 
v___x_1319_ = lean_mk_string_unchecked("assertion violation: c.u == c.v\n  ", 34, 34);
return v___x_1319_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__3(void){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1320_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2);
v___x_1321_ = lean_unsigned_to_nat(2u);
v___x_1322_ = lean_unsigned_to_nat(86u);
v___x_1323_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__1);
v___x_1324_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0);
v___x_1325_ = l_mkPanicMessageWithDecl(v___x_1324_, v___x_1323_, v___x_1322_, v___x_1321_, v___x_1320_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue(lean_object* v_c_1326_, lean_object* v_e_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_){
_start:
{
lean_object* v_u_1340_; lean_object* v_v_1341_; lean_object* v_e_1342_; lean_object* v_h_x3f_1343_; lean_object* v___x_1344_; 
v_u_1340_ = lean_ctor_get(v_c_1326_, 0);
v_v_1341_ = lean_ctor_get(v_c_1326_, 1);
v_e_1342_ = lean_ctor_get(v_c_1326_, 3);
lean_inc_ref(v_e_1342_);
v_h_x3f_1343_ = lean_ctor_get(v_c_1326_, 4);
lean_inc(v_h_x3f_1343_);
v___x_1344_ = l_Lean_Meta_Grind_Order_getExpr(v_u_1340_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; uint8_t v___x_1346_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1345_);
lean_dec_ref(v___x_1344_);
v___x_1346_ = lean_nat_dec_eq(v_u_1340_, v_v_1341_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
lean_dec(v_a_1345_);
lean_dec(v_h_x3f_1343_);
lean_dec_ref(v_e_1342_);
lean_dec_ref(v_e_1327_);
lean_dec_ref(v_c_1326_);
v___x_1347_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__3, &l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__3_once, _init_l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__3);
v___x_1348_ = l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0(v___x_1347_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_);
return v___x_1348_;
}
else
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1349_ = l_Lean_Meta_Grind_Order_Cnstr_getWeight___redArg(v_c_1326_);
lean_dec_ref(v_c_1326_);
v___x_1350_ = l_Lean_Meta_Grind_Order_mkPropagateSelfEqTrueProof(v_a_1345_, v___x_1349_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_);
lean_dec_ref(v___x_1349_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v_h_1353_; lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1356_; lean_object* v___y_1357_; lean_object* v___y_1358_; lean_object* v___y_1359_; lean_object* v___y_1360_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_a_1351_);
lean_dec_ref(v___x_1350_);
if (lean_obj_tag(v_h_x3f_1343_) == 1)
{
lean_object* v_val_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; 
v_val_1380_ = lean_ctor_get(v_h_x3f_1343_, 0);
lean_inc(v_val_1380_);
lean_dec_ref(v_h_x3f_1343_);
v___x_1381_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5);
lean_inc_ref(v_e_1327_);
v___x_1382_ = l_Lean_mkApp4(v___x_1381_, v_e_1327_, v_e_1342_, v_val_1380_, v_a_1351_);
v_h_1353_ = v___x_1382_;
v___y_1354_ = v_a_1329_;
v___y_1355_ = v_a_1331_;
v___y_1356_ = v_a_1333_;
v___y_1357_ = v_a_1335_;
v___y_1358_ = v_a_1336_;
v___y_1359_ = v_a_1337_;
v___y_1360_ = v_a_1338_;
goto v___jp_1352_;
}
else
{
lean_dec(v_h_x3f_1343_);
lean_dec_ref(v_e_1342_);
v_h_1353_ = v_a_1351_;
v___y_1354_ = v_a_1329_;
v___y_1355_ = v_a_1331_;
v___y_1356_ = v_a_1333_;
v___y_1357_ = v_a_1335_;
v___y_1358_ = v_a_1336_;
v___y_1359_ = v_a_1337_;
v___y_1360_ = v_a_1338_;
goto v___jp_1352_;
}
v___jp_1352_:
{
lean_object* v___x_1361_; 
v___x_1361_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v___y_1354_, v___y_1359_, v___y_1360_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v_termMapInv_1363_; lean_object* v___x_1364_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1362_);
lean_dec_ref(v___x_1361_);
v_termMapInv_1363_ = lean_ctor_get(v_a_1362_, 4);
lean_inc_ref(v_termMapInv_1363_);
lean_dec(v_a_1362_);
v___x_1364_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_1363_, v_e_1327_);
lean_dec_ref(v_termMapInv_1363_);
if (lean_obj_tag(v___x_1364_) == 1)
{
lean_object* v_val_1365_; lean_object* v_fst_1366_; lean_object* v_snd_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
v_val_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc(v_val_1365_);
lean_dec_ref(v___x_1364_);
v_fst_1366_ = lean_ctor_get(v_val_1365_, 0);
lean_inc_n(v_fst_1366_, 2);
v_snd_1367_ = lean_ctor_get(v_val_1365_, 1);
lean_inc(v_snd_1367_);
lean_dec(v_val_1365_);
v___x_1368_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5);
v___x_1369_ = l_Lean_mkApp4(v___x_1368_, v_fst_1366_, v_e_1327_, v_snd_1367_, v_h_1353_);
v___x_1370_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_fst_1366_, v___x_1369_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
return v___x_1370_;
}
else
{
lean_object* v___x_1371_; 
lean_dec(v___x_1364_);
v___x_1371_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_1327_, v_h_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
return v___x_1371_;
}
}
else
{
lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
lean_dec_ref(v_h_1353_);
lean_dec_ref(v_e_1327_);
v_a_1372_ = lean_ctor_get(v___x_1361_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___x_1361_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1361_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1372_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
}
else
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1390_; 
lean_dec(v_h_x3f_1343_);
lean_dec_ref(v_e_1342_);
lean_dec_ref(v_e_1327_);
v_a_1383_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1385_ = v___x_1350_;
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1350_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1388_; 
if (v_isShared_1386_ == 0)
{
v___x_1388_ = v___x_1385_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1383_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
}
else
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1398_; 
lean_dec(v_h_x3f_1343_);
lean_dec_ref(v_e_1342_);
lean_dec_ref(v_e_1327_);
lean_dec_ref(v_c_1326_);
v_a_1391_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1393_ = v___x_1344_;
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___x_1344_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1396_; 
if (v_isShared_1394_ == 0)
{
v___x_1396_ = v___x_1393_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_a_1391_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue___boxed(lean_object* v_c_1399_, lean_object* v_e_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l_Lean_Meta_Grind_Order_propagateSelfEqTrue(v_c_1399_, v_e_1400_, v_a_1401_, v_a_1402_, v_a_1403_, v_a_1404_, v_a_1405_, v_a_1406_, v_a_1407_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_);
lean_dec(v_a_1411_);
lean_dec_ref(v_a_1410_);
lean_dec(v_a_1409_);
lean_dec_ref(v_a_1408_);
lean_dec(v_a_1407_);
lean_dec_ref(v_a_1406_);
lean_dec(v_a_1405_);
lean_dec_ref(v_a_1404_);
lean_dec(v_a_1403_);
lean_dec(v_a_1402_);
lean_dec(v_a_1401_);
return v_res_1413_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__0(void){
_start:
{
lean_object* v___x_1414_; 
v___x_1414_ = lean_mk_string_unchecked("eq_trans_false", 14, 14);
return v___x_1414_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1(void){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1415_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__0, &l_Lean_Meta_Grind_Order_propagateEqFalse___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__0);
v___x_1416_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_1417_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_1418_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_1419_ = l_Lean_Name_mkStr4(v___x_1418_, v___x_1417_, v___x_1416_, v___x_1415_);
return v___x_1419_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2(void){
_start:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1420_ = lean_box(0);
v___x_1421_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1, &l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1);
v___x_1422_ = l_Lean_mkConst(v___x_1421_, v___x_1420_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse(lean_object* v_c_1423_, lean_object* v_e_1424_, lean_object* v_u_1425_, lean_object* v_v_1426_, lean_object* v_k_1427_, lean_object* v_k_x27_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_){
_start:
{
lean_object* v_h_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1447_; lean_object* v___y_1448_; lean_object* v___y_1449_; lean_object* v___x_1469_; 
v___x_1469_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_u_1425_, v_v_1426_, v_a_1429_, v_a_1430_, v_a_1431_, v_a_1432_, v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_, v_a_1439_);
if (lean_obj_tag(v___x_1469_) == 0)
{
lean_object* v_a_1470_; lean_object* v___x_1471_; 
v_a_1470_ = lean_ctor_get(v___x_1469_, 0);
lean_inc(v_a_1470_);
lean_dec_ref(v___x_1469_);
v___x_1471_ = l_Lean_Meta_Grind_Order_getExpr(v_u_1425_, v_a_1429_, v_a_1430_, v_a_1431_, v_a_1432_, v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_, v_a_1439_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v_a_1472_; lean_object* v___x_1473_; 
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
lean_inc(v_a_1472_);
lean_dec_ref(v___x_1471_);
v___x_1473_ = l_Lean_Meta_Grind_Order_getExpr(v_v_1426_, v_a_1429_, v_a_1430_, v_a_1431_, v_a_1432_, v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_, v_a_1439_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v_a_1474_; lean_object* v___x_1475_; 
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_a_1474_);
lean_dec_ref(v___x_1473_);
v___x_1475_ = l_Lean_Meta_Grind_Order_mkPropagateEqFalseProof(v_a_1472_, v_a_1474_, v_k_1427_, v_a_1470_, v_k_x27_1428_, v_a_1429_, v_a_1430_, v_a_1431_, v_a_1432_, v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_, v_a_1439_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_h_x3f_1476_; 
v_h_x3f_1476_ = lean_ctor_get(v_c_1423_, 4);
lean_inc(v_h_x3f_1476_);
if (lean_obj_tag(v_h_x3f_1476_) == 1)
{
lean_object* v_a_1477_; lean_object* v_e_1478_; lean_object* v_val_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v_a_1477_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_a_1477_);
lean_dec_ref(v___x_1475_);
v_e_1478_ = lean_ctor_get(v_c_1423_, 3);
lean_inc_ref(v_e_1478_);
lean_dec_ref(v_c_1423_);
v_val_1479_ = lean_ctor_get(v_h_x3f_1476_, 0);
lean_inc(v_val_1479_);
lean_dec_ref(v_h_x3f_1476_);
v___x_1480_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2, &l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2);
lean_inc_ref(v_e_1424_);
v___x_1481_ = l_Lean_mkApp4(v___x_1480_, v_e_1424_, v_e_1478_, v_val_1479_, v_a_1477_);
v_h_1442_ = v___x_1481_;
v___y_1443_ = v_a_1430_;
v___y_1444_ = v_a_1432_;
v___y_1445_ = v_a_1434_;
v___y_1446_ = v_a_1436_;
v___y_1447_ = v_a_1437_;
v___y_1448_ = v_a_1438_;
v___y_1449_ = v_a_1439_;
goto v___jp_1441_;
}
else
{
lean_object* v_a_1482_; 
lean_dec(v_h_x3f_1476_);
lean_dec_ref(v_c_1423_);
v_a_1482_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_a_1482_);
lean_dec_ref(v___x_1475_);
v_h_1442_ = v_a_1482_;
v___y_1443_ = v_a_1430_;
v___y_1444_ = v_a_1432_;
v___y_1445_ = v_a_1434_;
v___y_1446_ = v_a_1436_;
v___y_1447_ = v_a_1437_;
v___y_1448_ = v_a_1438_;
v___y_1449_ = v_a_1439_;
goto v___jp_1441_;
}
}
else
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
lean_dec_ref(v_e_1424_);
lean_dec_ref(v_c_1423_);
v_a_1483_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1475_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1475_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_a_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
lean_dec(v_a_1472_);
lean_dec(v_a_1470_);
lean_dec_ref(v_e_1424_);
lean_dec_ref(v_c_1423_);
v_a_1491_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1493_ = v___x_1473_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1473_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1491_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
else
{
lean_object* v_a_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
lean_dec(v_a_1470_);
lean_dec_ref(v_e_1424_);
lean_dec_ref(v_c_1423_);
v_a_1499_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1471_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1471_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1499_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1514_; 
lean_dec_ref(v_e_1424_);
lean_dec_ref(v_c_1423_);
v_a_1507_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1509_ = v___x_1469_;
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1469_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1507_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
v___jp_1441_:
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v___y_1443_, v___y_1448_, v___y_1449_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; lean_object* v_termMapInv_1452_; lean_object* v___x_1453_; 
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_a_1451_);
lean_dec_ref(v___x_1450_);
v_termMapInv_1452_ = lean_ctor_get(v_a_1451_, 4);
lean_inc_ref(v_termMapInv_1452_);
lean_dec(v_a_1451_);
v___x_1453_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_1452_, v_e_1424_);
lean_dec_ref(v_termMapInv_1452_);
if (lean_obj_tag(v___x_1453_) == 1)
{
lean_object* v_val_1454_; lean_object* v_fst_1455_; lean_object* v_snd_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; 
v_val_1454_ = lean_ctor_get(v___x_1453_, 0);
lean_inc(v_val_1454_);
lean_dec_ref(v___x_1453_);
v_fst_1455_ = lean_ctor_get(v_val_1454_, 0);
lean_inc_n(v_fst_1455_, 2);
v_snd_1456_ = lean_ctor_get(v_val_1454_, 1);
lean_inc(v_snd_1456_);
lean_dec(v_val_1454_);
v___x_1457_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2, &l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2);
v___x_1458_ = l_Lean_mkApp4(v___x_1457_, v_fst_1455_, v_e_1424_, v_snd_1456_, v_h_1442_);
v___x_1459_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_fst_1455_, v___x_1458_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_);
return v___x_1459_;
}
else
{
lean_object* v___x_1460_; 
lean_dec(v___x_1453_);
v___x_1460_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1424_, v_h_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_);
return v___x_1460_;
}
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_dec_ref(v_h_1442_);
lean_dec_ref(v_e_1424_);
v_a_1461_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1450_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1450_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse___boxed(lean_object** _args){
lean_object* v_c_1515_ = _args[0];
lean_object* v_e_1516_ = _args[1];
lean_object* v_u_1517_ = _args[2];
lean_object* v_v_1518_ = _args[3];
lean_object* v_k_1519_ = _args[4];
lean_object* v_k_x27_1520_ = _args[5];
lean_object* v_a_1521_ = _args[6];
lean_object* v_a_1522_ = _args[7];
lean_object* v_a_1523_ = _args[8];
lean_object* v_a_1524_ = _args[9];
lean_object* v_a_1525_ = _args[10];
lean_object* v_a_1526_ = _args[11];
lean_object* v_a_1527_ = _args[12];
lean_object* v_a_1528_ = _args[13];
lean_object* v_a_1529_ = _args[14];
lean_object* v_a_1530_ = _args[15];
lean_object* v_a_1531_ = _args[16];
lean_object* v_a_1532_ = _args[17];
_start:
{
lean_object* v_res_1533_; 
v_res_1533_ = l_Lean_Meta_Grind_Order_propagateEqFalse(v_c_1515_, v_e_1516_, v_u_1517_, v_v_1518_, v_k_1519_, v_k_x27_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_, v_a_1526_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_);
lean_dec(v_a_1531_);
lean_dec_ref(v_a_1530_);
lean_dec(v_a_1529_);
lean_dec_ref(v_a_1528_);
lean_dec(v_a_1527_);
lean_dec_ref(v_a_1526_);
lean_dec(v_a_1525_);
lean_dec_ref(v_a_1524_);
lean_dec(v_a_1523_);
lean_dec(v_a_1522_);
lean_dec(v_a_1521_);
lean_dec_ref(v_k_x27_1520_);
lean_dec_ref(v_k_1519_);
lean_dec(v_v_1518_);
lean_dec(v_u_1517_);
return v_res_1533_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__0(void){
_start:
{
lean_object* v___x_1534_; 
v___x_1534_ = lean_mk_string_unchecked("Lean.Meta.Grind.Order.propagateSelfEqFalse", 42, 42);
return v___x_1534_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__1(void){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1535_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2);
v___x_1536_ = lean_unsigned_to_nat(2u);
v___x_1537_ = lean_unsigned_to_nat(111u);
v___x_1538_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__0, &l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__0);
v___x_1539_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0);
v___x_1540_ = l_mkPanicMessageWithDecl(v___x_1539_, v___x_1538_, v___x_1537_, v___x_1536_, v___x_1535_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqFalse(lean_object* v_c_1541_, lean_object* v_e_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v_u_1555_; lean_object* v_v_1556_; lean_object* v_e_1557_; lean_object* v_h_x3f_1558_; lean_object* v___x_1559_; 
v_u_1555_ = lean_ctor_get(v_c_1541_, 0);
v_v_1556_ = lean_ctor_get(v_c_1541_, 1);
v_e_1557_ = lean_ctor_get(v_c_1541_, 3);
lean_inc_ref(v_e_1557_);
v_h_x3f_1558_ = lean_ctor_get(v_c_1541_, 4);
lean_inc(v_h_x3f_1558_);
v___x_1559_ = l_Lean_Meta_Grind_Order_getExpr(v_u_1555_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v_a_1560_; uint8_t v___x_1561_; 
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
lean_inc(v_a_1560_);
lean_dec_ref(v___x_1559_);
v___x_1561_ = lean_nat_dec_eq(v_u_1555_, v_v_1556_);
if (v___x_1561_ == 0)
{
lean_object* v___x_1562_; lean_object* v___x_1563_; 
lean_dec(v_a_1560_);
lean_dec(v_h_x3f_1558_);
lean_dec_ref(v_e_1557_);
lean_dec_ref(v_e_1542_);
lean_dec_ref(v_c_1541_);
v___x_1562_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__1, &l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__1);
v___x_1563_ = l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0(v___x_1562_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_);
return v___x_1563_;
}
else
{
lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1564_ = l_Lean_Meta_Grind_Order_Cnstr_getWeight___redArg(v_c_1541_);
lean_dec_ref(v_c_1541_);
v___x_1565_ = l_Lean_Meta_Grind_Order_mkPropagateSelfEqFalseProof(v_a_1560_, v___x_1564_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_);
lean_dec_ref(v___x_1564_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; lean_object* v_h_1568_; lean_object* v___y_1569_; lean_object* v___y_1570_; lean_object* v___y_1571_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v___y_1574_; lean_object* v___y_1575_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_a_1566_);
lean_dec_ref(v___x_1565_);
if (lean_obj_tag(v_h_x3f_1558_) == 1)
{
lean_object* v_val_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v_val_1595_ = lean_ctor_get(v_h_x3f_1558_, 0);
lean_inc(v_val_1595_);
lean_dec_ref(v_h_x3f_1558_);
v___x_1596_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2, &l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2);
lean_inc_ref(v_e_1542_);
v___x_1597_ = l_Lean_mkApp4(v___x_1596_, v_e_1542_, v_e_1557_, v_val_1595_, v_a_1566_);
v_h_1568_ = v___x_1597_;
v___y_1569_ = v_a_1544_;
v___y_1570_ = v_a_1546_;
v___y_1571_ = v_a_1548_;
v___y_1572_ = v_a_1550_;
v___y_1573_ = v_a_1551_;
v___y_1574_ = v_a_1552_;
v___y_1575_ = v_a_1553_;
goto v___jp_1567_;
}
else
{
lean_dec(v_h_x3f_1558_);
lean_dec_ref(v_e_1557_);
v_h_1568_ = v_a_1566_;
v___y_1569_ = v_a_1544_;
v___y_1570_ = v_a_1546_;
v___y_1571_ = v_a_1548_;
v___y_1572_ = v_a_1550_;
v___y_1573_ = v_a_1551_;
v___y_1574_ = v_a_1552_;
v___y_1575_ = v_a_1553_;
goto v___jp_1567_;
}
v___jp_1567_:
{
lean_object* v___x_1576_; 
v___x_1576_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v___y_1569_, v___y_1574_, v___y_1575_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v_termMapInv_1578_; lean_object* v___x_1579_; 
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_a_1577_);
lean_dec_ref(v___x_1576_);
v_termMapInv_1578_ = lean_ctor_get(v_a_1577_, 4);
lean_inc_ref(v_termMapInv_1578_);
lean_dec(v_a_1577_);
v___x_1579_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_1578_, v_e_1542_);
lean_dec_ref(v_termMapInv_1578_);
if (lean_obj_tag(v___x_1579_) == 1)
{
lean_object* v_val_1580_; lean_object* v_fst_1581_; lean_object* v_snd_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v_val_1580_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_val_1580_);
lean_dec_ref(v___x_1579_);
v_fst_1581_ = lean_ctor_get(v_val_1580_, 0);
lean_inc_n(v_fst_1581_, 2);
v_snd_1582_ = lean_ctor_get(v_val_1580_, 1);
lean_inc(v_snd_1582_);
lean_dec(v_val_1580_);
v___x_1583_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2, &l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2);
v___x_1584_ = l_Lean_mkApp4(v___x_1583_, v_fst_1581_, v_e_1542_, v_snd_1582_, v_h_1568_);
v___x_1585_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_fst_1581_, v___x_1584_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
return v___x_1585_;
}
else
{
lean_object* v___x_1586_; 
lean_dec(v___x_1579_);
v___x_1586_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1542_, v_h_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
return v___x_1586_;
}
}
else
{
lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1594_; 
lean_dec_ref(v_h_1568_);
lean_dec_ref(v_e_1542_);
v_a_1587_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1589_ = v___x_1576_;
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v___x_1576_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1592_; 
if (v_isShared_1590_ == 0)
{
v___x_1592_ = v___x_1589_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1587_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
lean_dec(v_h_x3f_1558_);
lean_dec_ref(v_e_1557_);
lean_dec_ref(v_e_1542_);
v_a_1598_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1565_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1565_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
lean_dec(v_h_x3f_1558_);
lean_dec_ref(v_e_1557_);
lean_dec_ref(v_e_1542_);
lean_dec_ref(v_c_1541_);
v_a_1606_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1559_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1559_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqFalse___boxed(lean_object* v_c_1614_, lean_object* v_e_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l_Lean_Meta_Grind_Order_propagateSelfEqFalse(v_c_1614_, v_e_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_);
lean_dec(v_a_1626_);
lean_dec_ref(v_a_1625_);
lean_dec(v_a_1624_);
lean_dec_ref(v_a_1623_);
lean_dec(v_a_1622_);
lean_dec_ref(v_a_1621_);
lean_dec(v_a_1620_);
lean_dec_ref(v_a_1619_);
lean_dec(v_a_1618_);
lean_dec(v_a_1617_);
lean_dec(v_a_1616_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg(lean_object* v_e_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_1630_, v_a_1631_, v_a_1632_);
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v_a_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1644_; 
v_a_1635_ = lean_ctor_get(v___x_1634_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1634_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1637_ = v___x_1634_;
v_isShared_1638_ = v_isSharedCheck_1644_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_a_1635_);
lean_dec(v___x_1634_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1644_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v_termMapInv_1639_; lean_object* v___x_1640_; lean_object* v___x_1642_; 
v_termMapInv_1639_ = lean_ctor_get(v_a_1635_, 4);
lean_inc_ref(v_termMapInv_1639_);
lean_dec(v_a_1635_);
v___x_1640_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_1639_, v_e_1629_);
lean_dec_ref(v_termMapInv_1639_);
if (v_isShared_1638_ == 0)
{
lean_ctor_set(v___x_1637_, 0, v___x_1640_);
v___x_1642_ = v___x_1637_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v___x_1640_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
}
else
{
lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1652_; 
v_a_1645_ = lean_ctor_get(v___x_1634_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1634_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1647_ = v___x_1634_;
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_dec(v___x_1634_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1650_; 
if (v_isShared_1648_ == 0)
{
v___x_1650_ = v___x_1647_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_a_1645_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg___boxed(lean_object* v_e_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_){
_start:
{
lean_object* v_res_1658_; 
v_res_1658_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg(v_e_1653_, v_a_1654_, v_a_1655_, v_a_1656_);
lean_dec(v_a_1656_);
lean_dec_ref(v_a_1655_);
lean_dec(v_a_1654_);
lean_dec_ref(v_e_1653_);
return v_res_1658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f(lean_object* v_e_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg(v_e_1659_, v_a_1660_, v_a_1668_, v_a_1669_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___boxed(lean_object* v_e_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f(v_e_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_);
lean_dec(v_a_1682_);
lean_dec_ref(v_a_1681_);
lean_dec(v_a_1680_);
lean_dec_ref(v_a_1679_);
lean_dec(v_a_1678_);
lean_dec_ref(v_a_1677_);
lean_dec(v_a_1676_);
lean_dec_ref(v_a_1675_);
lean_dec(v_a_1674_);
lean_dec(v_a_1673_);
lean_dec_ref(v_e_1672_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___lam__0(lean_object* v_s_1685_){
_start:
{
lean_object* v_id_1686_; lean_object* v_type_1687_; lean_object* v_u_1688_; lean_object* v_isPreorderInst_1689_; lean_object* v_leInst_1690_; lean_object* v_ltInst_x3f_1691_; lean_object* v_isPartialInst_x3f_1692_; lean_object* v_isLinearPreInst_x3f_1693_; lean_object* v_lawfulOrderLTInst_x3f_1694_; lean_object* v_ringId_x3f_1695_; uint8_t v_isCommRing_1696_; lean_object* v_ringInst_x3f_1697_; lean_object* v_orderedRingInst_x3f_1698_; lean_object* v_leFn_1699_; lean_object* v_ltFn_x3f_1700_; lean_object* v_nodes_1701_; lean_object* v_nodeMap_1702_; lean_object* v_cnstrs_1703_; lean_object* v_cnstrsOf_1704_; lean_object* v_sources_1705_; lean_object* v_targets_1706_; lean_object* v_proofs_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1715_; 
v_id_1686_ = lean_ctor_get(v_s_1685_, 0);
v_type_1687_ = lean_ctor_get(v_s_1685_, 1);
v_u_1688_ = lean_ctor_get(v_s_1685_, 2);
v_isPreorderInst_1689_ = lean_ctor_get(v_s_1685_, 3);
v_leInst_1690_ = lean_ctor_get(v_s_1685_, 4);
v_ltInst_x3f_1691_ = lean_ctor_get(v_s_1685_, 5);
v_isPartialInst_x3f_1692_ = lean_ctor_get(v_s_1685_, 6);
v_isLinearPreInst_x3f_1693_ = lean_ctor_get(v_s_1685_, 7);
v_lawfulOrderLTInst_x3f_1694_ = lean_ctor_get(v_s_1685_, 8);
v_ringId_x3f_1695_ = lean_ctor_get(v_s_1685_, 9);
v_isCommRing_1696_ = lean_ctor_get_uint8(v_s_1685_, sizeof(void*)*22);
v_ringInst_x3f_1697_ = lean_ctor_get(v_s_1685_, 10);
v_orderedRingInst_x3f_1698_ = lean_ctor_get(v_s_1685_, 11);
v_leFn_1699_ = lean_ctor_get(v_s_1685_, 12);
v_ltFn_x3f_1700_ = lean_ctor_get(v_s_1685_, 13);
v_nodes_1701_ = lean_ctor_get(v_s_1685_, 14);
v_nodeMap_1702_ = lean_ctor_get(v_s_1685_, 15);
v_cnstrs_1703_ = lean_ctor_get(v_s_1685_, 16);
v_cnstrsOf_1704_ = lean_ctor_get(v_s_1685_, 17);
v_sources_1705_ = lean_ctor_get(v_s_1685_, 18);
v_targets_1706_ = lean_ctor_get(v_s_1685_, 19);
v_proofs_1707_ = lean_ctor_get(v_s_1685_, 20);
v_isSharedCheck_1715_ = !lean_is_exclusive(v_s_1685_);
if (v_isSharedCheck_1715_ == 0)
{
lean_object* v_unused_1716_; 
v_unused_1716_ = lean_ctor_get(v_s_1685_, 21);
lean_dec(v_unused_1716_);
v___x_1709_ = v_s_1685_;
v_isShared_1710_ = v_isSharedCheck_1715_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_proofs_1707_);
lean_inc(v_targets_1706_);
lean_inc(v_sources_1705_);
lean_inc(v_cnstrsOf_1704_);
lean_inc(v_cnstrs_1703_);
lean_inc(v_nodeMap_1702_);
lean_inc(v_nodes_1701_);
lean_inc(v_ltFn_x3f_1700_);
lean_inc(v_leFn_1699_);
lean_inc(v_orderedRingInst_x3f_1698_);
lean_inc(v_ringInst_x3f_1697_);
lean_inc(v_ringId_x3f_1695_);
lean_inc(v_lawfulOrderLTInst_x3f_1694_);
lean_inc(v_isLinearPreInst_x3f_1693_);
lean_inc(v_isPartialInst_x3f_1692_);
lean_inc(v_ltInst_x3f_1691_);
lean_inc(v_leInst_1690_);
lean_inc(v_isPreorderInst_1689_);
lean_inc(v_u_1688_);
lean_inc(v_type_1687_);
lean_inc(v_id_1686_);
lean_dec(v_s_1685_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1715_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1711_; lean_object* v___x_1713_; 
v___x_1711_ = lean_box(0);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 21, v___x_1711_);
v___x_1713_ = v___x_1709_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(0, 22, 1);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_id_1686_);
lean_ctor_set(v_reuseFailAlloc_1714_, 1, v_type_1687_);
lean_ctor_set(v_reuseFailAlloc_1714_, 2, v_u_1688_);
lean_ctor_set(v_reuseFailAlloc_1714_, 3, v_isPreorderInst_1689_);
lean_ctor_set(v_reuseFailAlloc_1714_, 4, v_leInst_1690_);
lean_ctor_set(v_reuseFailAlloc_1714_, 5, v_ltInst_x3f_1691_);
lean_ctor_set(v_reuseFailAlloc_1714_, 6, v_isPartialInst_x3f_1692_);
lean_ctor_set(v_reuseFailAlloc_1714_, 7, v_isLinearPreInst_x3f_1693_);
lean_ctor_set(v_reuseFailAlloc_1714_, 8, v_lawfulOrderLTInst_x3f_1694_);
lean_ctor_set(v_reuseFailAlloc_1714_, 9, v_ringId_x3f_1695_);
lean_ctor_set(v_reuseFailAlloc_1714_, 10, v_ringInst_x3f_1697_);
lean_ctor_set(v_reuseFailAlloc_1714_, 11, v_orderedRingInst_x3f_1698_);
lean_ctor_set(v_reuseFailAlloc_1714_, 12, v_leFn_1699_);
lean_ctor_set(v_reuseFailAlloc_1714_, 13, v_ltFn_x3f_1700_);
lean_ctor_set(v_reuseFailAlloc_1714_, 14, v_nodes_1701_);
lean_ctor_set(v_reuseFailAlloc_1714_, 15, v_nodeMap_1702_);
lean_ctor_set(v_reuseFailAlloc_1714_, 16, v_cnstrs_1703_);
lean_ctor_set(v_reuseFailAlloc_1714_, 17, v_cnstrsOf_1704_);
lean_ctor_set(v_reuseFailAlloc_1714_, 18, v_sources_1705_);
lean_ctor_set(v_reuseFailAlloc_1714_, 19, v_targets_1706_);
lean_ctor_set(v_reuseFailAlloc_1714_, 20, v_proofs_1707_);
lean_ctor_set(v_reuseFailAlloc_1714_, 21, v___x_1711_);
lean_ctor_set_uint8(v_reuseFailAlloc_1714_, sizeof(void*)*22, v_isCommRing_1696_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1717_; 
v___x_1717_ = lean_mk_string_unchecked("nat_eq", 6, 6);
return v___x_1717_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1718_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__0, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__0);
v___x_1719_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_1720_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_1721_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_1722_ = l_Lean_Name_mkStr4(v___x_1721_, v___x_1720_, v___x_1719_, v___x_1718_);
return v___x_1722_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1723_ = lean_box(0);
v___x_1724_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1);
v___x_1725_ = l_Lean_mkConst(v___x_1724_, v___x_1723_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg(lean_object* v_as_x27_1726_, lean_object* v_b_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
if (lean_obj_tag(v_as_x27_1726_) == 0)
{
lean_object* v___x_1740_; 
v___x_1740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1740_, 0, v_b_1727_);
return v___x_1740_;
}
else
{
lean_object* v_head_1741_; lean_object* v_tail_1742_; lean_object* v___x_1743_; 
v_head_1741_ = lean_ctor_get(v_as_x27_1726_, 0);
v_tail_1742_ = lean_ctor_get(v_as_x27_1726_, 1);
v___x_1743_ = lean_box(0);
switch(lean_obj_tag(v_head_1741_))
{
case 0:
{
lean_object* v_c_1744_; lean_object* v_e_1745_; lean_object* v_u_1746_; lean_object* v_v_1747_; lean_object* v_k_1748_; lean_object* v_k_x27_1749_; lean_object* v___x_1750_; 
v_c_1744_ = lean_ctor_get(v_head_1741_, 0);
v_e_1745_ = lean_ctor_get(v_head_1741_, 1);
v_u_1746_ = lean_ctor_get(v_head_1741_, 2);
v_v_1747_ = lean_ctor_get(v_head_1741_, 3);
v_k_1748_ = lean_ctor_get(v_head_1741_, 4);
v_k_x27_1749_ = lean_ctor_get(v_head_1741_, 5);
lean_inc_ref(v_e_1745_);
lean_inc_ref(v_c_1744_);
v___x_1750_ = l_Lean_Meta_Grind_Order_propagateEqTrue(v_c_1744_, v_e_1745_, v_u_1746_, v_v_1747_, v_k_1748_, v_k_x27_1749_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_dec_ref(v___x_1750_);
v_as_x27_1726_ = v_tail_1742_;
v_b_1727_ = v___x_1743_;
goto _start;
}
else
{
return v___x_1750_;
}
}
case 1:
{
lean_object* v_c_1752_; lean_object* v_e_1753_; lean_object* v_u_1754_; lean_object* v_v_1755_; lean_object* v_k_1756_; lean_object* v_k_x27_1757_; lean_object* v___x_1758_; 
v_c_1752_ = lean_ctor_get(v_head_1741_, 0);
v_e_1753_ = lean_ctor_get(v_head_1741_, 1);
v_u_1754_ = lean_ctor_get(v_head_1741_, 2);
v_v_1755_ = lean_ctor_get(v_head_1741_, 3);
v_k_1756_ = lean_ctor_get(v_head_1741_, 4);
v_k_x27_1757_ = lean_ctor_get(v_head_1741_, 5);
lean_inc_ref(v_e_1753_);
lean_inc_ref(v_c_1752_);
v___x_1758_ = l_Lean_Meta_Grind_Order_propagateEqFalse(v_c_1752_, v_e_1753_, v_u_1754_, v_v_1755_, v_k_1756_, v_k_x27_1757_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
if (lean_obj_tag(v___x_1758_) == 0)
{
lean_dec_ref(v___x_1758_);
v_as_x27_1726_ = v_tail_1742_;
v_b_1727_ = v___x_1743_;
goto _start;
}
else
{
return v___x_1758_;
}
}
default: 
{
lean_object* v_u_1760_; lean_object* v_v_1761_; lean_object* v___x_1762_; 
v_u_1760_ = lean_ctor_get(v_head_1741_, 0);
v_v_1761_ = lean_ctor_get(v_head_1741_, 1);
v___x_1762_ = l_Lean_Meta_Grind_Order_getExpr(v_u_1760_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_object* v_a_1763_; lean_object* v___x_1764_; 
v_a_1763_ = lean_ctor_get(v___x_1762_, 0);
lean_inc(v_a_1763_);
lean_dec_ref(v___x_1762_);
v___x_1764_ = l_Lean_Meta_Grind_Order_getExpr(v_v_1761_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; lean_object* v___y_1767_; lean_object* v___y_1768_; lean_object* v___y_1769_; lean_object* v___y_1770_; lean_object* v___y_1771_; lean_object* v___y_1772_; lean_object* v___y_1773_; lean_object* v___y_1774_; lean_object* v___y_1775_; lean_object* v___y_1776_; lean_object* v___y_1777_; lean_object* v___y_1778_; lean_object* v___y_1779_; lean_object* v___y_1780_; lean_object* v___y_1781_; lean_object* v___y_1782_; lean_object* v___y_1855_; lean_object* v___y_1856_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___y_1860_; lean_object* v___y_1861_; lean_object* v___y_1862_; lean_object* v___y_1863_; lean_object* v___y_1864_; lean_object* v___y_1865_; lean_object* v___y_1899_; lean_object* v___x_1953_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
lean_inc(v_a_1765_);
lean_dec_ref(v___x_1764_);
v___x_1953_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_a_1763_, v___y_1729_, v___y_1738_);
if (lean_obj_tag(v___x_1953_) == 0)
{
lean_object* v_a_1954_; uint8_t v___x_1955_; 
v_a_1954_ = lean_ctor_get(v___x_1953_, 0);
lean_inc(v_a_1954_);
v___x_1955_ = lean_unbox(v_a_1954_);
lean_dec(v_a_1954_);
if (v___x_1955_ == 0)
{
v___y_1899_ = v___x_1953_;
goto v___jp_1898_;
}
else
{
lean_object* v___x_1956_; 
lean_dec_ref(v___x_1953_);
v___x_1956_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_a_1765_, v___y_1729_, v___y_1738_);
v___y_1899_ = v___x_1956_;
goto v___jp_1898_;
}
}
else
{
v___y_1899_ = v___x_1953_;
goto v___jp_1898_;
}
v___jp_1766_:
{
if (lean_obj_tag(v___y_1782_) == 0)
{
lean_object* v_a_1783_; uint8_t v___x_1784_; 
v_a_1783_ = lean_ctor_get(v___y_1782_, 0);
lean_inc(v_a_1783_);
lean_dec_ref(v___y_1782_);
v___x_1784_ = lean_unbox(v_a_1783_);
lean_dec(v_a_1783_);
if (v___x_1784_ == 0)
{
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___y_1774_);
lean_dec_ref(v___y_1769_);
lean_dec_ref(v___y_1767_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_as_x27_1726_ = v_tail_1742_;
v_b_1727_ = v___x_1743_;
goto _start;
}
else
{
lean_object* v___x_1786_; 
v___x_1786_ = l_Lean_Meta_Grind_isEqv___redArg(v___y_1774_, v___y_1767_, v___y_1778_, v___y_1771_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; uint8_t v___x_1788_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_a_1787_);
lean_dec_ref(v___x_1786_);
v___x_1788_ = lean_unbox(v_a_1787_);
if (v___x_1788_ == 0)
{
lean_object* v___x_1789_; 
v___x_1789_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_u_1760_, v_v_1761_, v___y_1773_, v___y_1778_, v___y_1775_, v___y_1780_, v___y_1776_, v___y_1781_, v___y_1777_, v___y_1768_, v___y_1772_, v___y_1770_, v___y_1771_);
if (lean_obj_tag(v___x_1789_) == 0)
{
lean_object* v_a_1790_; lean_object* v___x_1791_; 
v_a_1790_ = lean_ctor_get(v___x_1789_, 0);
lean_inc(v_a_1790_);
lean_dec_ref(v___x_1789_);
v___x_1791_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_v_1761_, v_u_1760_, v___y_1773_, v___y_1778_, v___y_1775_, v___y_1780_, v___y_1776_, v___y_1781_, v___y_1777_, v___y_1768_, v___y_1772_, v___y_1770_, v___y_1771_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; lean_object* v___x_1793_; 
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
lean_inc(v_a_1792_);
lean_dec_ref(v___x_1791_);
lean_inc(v_a_1765_);
lean_inc(v_a_1763_);
v___x_1793_ = l_Lean_Meta_Grind_Order_mkEqProofOfLeOfLe(v_a_1763_, v_a_1765_, v_a_1790_, v_a_1792_, v___y_1773_, v___y_1778_, v___y_1775_, v___y_1780_, v___y_1776_, v___y_1781_, v___y_1777_, v___y_1768_, v___y_1772_, v___y_1770_, v___y_1771_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; lean_object* v___x_1795_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
lean_inc(v_a_1794_);
lean_dec_ref(v___x_1793_);
lean_inc(v___y_1771_);
lean_inc_ref(v___y_1770_);
lean_inc(v___y_1772_);
lean_inc_ref(v___y_1768_);
lean_inc(v_a_1763_);
v___x_1795_ = lean_infer_type(v_a_1763_, v___y_1768_, v___y_1772_, v___y_1770_, v___y_1771_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v_a_1796_; lean_object* v___x_1797_; uint8_t v___x_1798_; 
v_a_1796_ = lean_ctor_get(v___x_1795_, 0);
lean_inc(v_a_1796_);
lean_dec_ref(v___x_1795_);
v___x_1797_ = l_Lean_Int_mkType;
v___x_1798_ = lean_expr_eqv(v_a_1796_, v___x_1797_);
lean_dec(v_a_1796_);
if (v___x_1798_ == 0)
{
lean_dec(v_a_1794_);
lean_dec(v_a_1787_);
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___y_1774_);
lean_dec_ref(v___y_1769_);
lean_dec_ref(v___y_1767_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_as_x27_1726_ = v_tail_1742_;
v_b_1727_ = v___x_1743_;
goto _start;
}
else
{
lean_object* v___x_1800_; lean_object* v___x_1801_; uint8_t v___x_1802_; lean_object* v___x_1803_; 
v___x_1800_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__2, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__2);
lean_inc_ref(v___y_1767_);
lean_inc_ref(v___y_1774_);
v___x_1801_ = l_Lean_mkApp7(v___x_1800_, v___y_1774_, v___y_1767_, v_a_1763_, v_a_1765_, v___y_1779_, v___y_1769_, v_a_1794_);
v___x_1802_ = lean_unbox(v_a_1787_);
lean_dec(v_a_1787_);
v___x_1803_ = l_Lean_Meta_Grind_pushEqCore___redArg(v___y_1774_, v___y_1767_, v___x_1801_, v___x_1802_, v___y_1778_, v___y_1780_, v___y_1768_, v___y_1772_, v___y_1770_, v___y_1771_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_dec_ref(v___x_1803_);
v_as_x27_1726_ = v_tail_1742_;
v_b_1727_ = v___x_1743_;
goto _start;
}
else
{
return v___x_1803_;
}
}
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1812_; 
lean_dec(v_a_1794_);
lean_dec(v_a_1787_);
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___y_1774_);
lean_dec_ref(v___y_1769_);
lean_dec_ref(v___y_1767_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1805_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1807_ = v___x_1795_;
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v___x_1795_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1810_; 
if (v_isShared_1808_ == 0)
{
v___x_1810_ = v___x_1807_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_a_1805_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
lean_dec(v_a_1787_);
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___y_1774_);
lean_dec_ref(v___y_1769_);
lean_dec_ref(v___y_1767_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1813_ = lean_ctor_get(v___x_1793_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1793_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1793_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
else
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
lean_dec(v_a_1790_);
lean_dec(v_a_1787_);
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___y_1774_);
lean_dec_ref(v___y_1769_);
lean_dec_ref(v___y_1767_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1821_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___x_1791_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1791_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
lean_dec(v_a_1787_);
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___y_1774_);
lean_dec_ref(v___y_1769_);
lean_dec_ref(v___y_1767_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1829_ = lean_ctor_get(v___x_1789_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1831_ = v___x_1789_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1789_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
}
else
{
lean_dec(v_a_1787_);
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___y_1774_);
lean_dec_ref(v___y_1769_);
lean_dec_ref(v___y_1767_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_as_x27_1726_ = v_tail_1742_;
v_b_1727_ = v___x_1743_;
goto _start;
}
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1845_; 
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___y_1774_);
lean_dec_ref(v___y_1769_);
lean_dec_ref(v___y_1767_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1838_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1840_ = v___x_1786_;
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1786_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
v___x_1843_ = v___x_1840_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1838_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
}
}
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___y_1774_);
lean_dec_ref(v___y_1769_);
lean_dec_ref(v___y_1767_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1846_ = lean_ctor_get(v___y_1782_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___y_1782_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___y_1782_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___y_1782_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
v___jp_1854_:
{
lean_object* v___x_1866_; 
v___x_1866_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg(v_a_1763_, v___y_1856_, v___y_1864_, v___y_1865_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v_a_1867_; 
v_a_1867_ = lean_ctor_get(v___x_1866_, 0);
lean_inc(v_a_1867_);
lean_dec_ref(v___x_1866_);
if (lean_obj_tag(v_a_1867_) == 1)
{
lean_object* v_val_1868_; lean_object* v_fst_1869_; lean_object* v_snd_1870_; lean_object* v___x_1871_; 
v_val_1868_ = lean_ctor_get(v_a_1867_, 0);
lean_inc(v_val_1868_);
lean_dec_ref(v_a_1867_);
v_fst_1869_ = lean_ctor_get(v_val_1868_, 0);
lean_inc(v_fst_1869_);
v_snd_1870_ = lean_ctor_get(v_val_1868_, 1);
lean_inc(v_snd_1870_);
lean_dec(v_val_1868_);
v___x_1871_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg(v_a_1765_, v___y_1856_, v___y_1864_, v___y_1865_);
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_object* v_a_1872_; 
v_a_1872_ = lean_ctor_get(v___x_1871_, 0);
lean_inc(v_a_1872_);
lean_dec_ref(v___x_1871_);
if (lean_obj_tag(v_a_1872_) == 1)
{
lean_object* v_val_1873_; lean_object* v_fst_1874_; lean_object* v_snd_1875_; lean_object* v___x_1876_; 
v_val_1873_ = lean_ctor_get(v_a_1872_, 0);
lean_inc(v_val_1873_);
lean_dec_ref(v_a_1872_);
v_fst_1874_ = lean_ctor_get(v_val_1873_, 0);
lean_inc(v_fst_1874_);
v_snd_1875_ = lean_ctor_get(v_val_1873_, 1);
lean_inc(v_snd_1875_);
lean_dec(v_val_1873_);
v___x_1876_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_fst_1869_, v___y_1856_, v___y_1865_);
if (lean_obj_tag(v___x_1876_) == 0)
{
lean_object* v_a_1877_; uint8_t v___x_1878_; 
v_a_1877_ = lean_ctor_get(v___x_1876_, 0);
lean_inc(v_a_1877_);
v___x_1878_ = lean_unbox(v_a_1877_);
lean_dec(v_a_1877_);
if (v___x_1878_ == 0)
{
v___y_1767_ = v_fst_1874_;
v___y_1768_ = v___y_1862_;
v___y_1769_ = v_snd_1875_;
v___y_1770_ = v___y_1864_;
v___y_1771_ = v___y_1865_;
v___y_1772_ = v___y_1863_;
v___y_1773_ = v___y_1855_;
v___y_1774_ = v_fst_1869_;
v___y_1775_ = v___y_1857_;
v___y_1776_ = v___y_1859_;
v___y_1777_ = v___y_1861_;
v___y_1778_ = v___y_1856_;
v___y_1779_ = v_snd_1870_;
v___y_1780_ = v___y_1858_;
v___y_1781_ = v___y_1860_;
v___y_1782_ = v___x_1876_;
goto v___jp_1766_;
}
else
{
lean_object* v___x_1879_; 
lean_dec_ref(v___x_1876_);
v___x_1879_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_fst_1874_, v___y_1856_, v___y_1865_);
v___y_1767_ = v_fst_1874_;
v___y_1768_ = v___y_1862_;
v___y_1769_ = v_snd_1875_;
v___y_1770_ = v___y_1864_;
v___y_1771_ = v___y_1865_;
v___y_1772_ = v___y_1863_;
v___y_1773_ = v___y_1855_;
v___y_1774_ = v_fst_1869_;
v___y_1775_ = v___y_1857_;
v___y_1776_ = v___y_1859_;
v___y_1777_ = v___y_1861_;
v___y_1778_ = v___y_1856_;
v___y_1779_ = v_snd_1870_;
v___y_1780_ = v___y_1858_;
v___y_1781_ = v___y_1860_;
v___y_1782_ = v___x_1879_;
goto v___jp_1766_;
}
}
else
{
v___y_1767_ = v_fst_1874_;
v___y_1768_ = v___y_1862_;
v___y_1769_ = v_snd_1875_;
v___y_1770_ = v___y_1864_;
v___y_1771_ = v___y_1865_;
v___y_1772_ = v___y_1863_;
v___y_1773_ = v___y_1855_;
v___y_1774_ = v_fst_1869_;
v___y_1775_ = v___y_1857_;
v___y_1776_ = v___y_1859_;
v___y_1777_ = v___y_1861_;
v___y_1778_ = v___y_1856_;
v___y_1779_ = v_snd_1870_;
v___y_1780_ = v___y_1858_;
v___y_1781_ = v___y_1860_;
v___y_1782_ = v___x_1876_;
goto v___jp_1766_;
}
}
else
{
lean_dec(v_a_1872_);
lean_dec(v_snd_1870_);
lean_dec(v_fst_1869_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_as_x27_1726_ = v_tail_1742_;
v_b_1727_ = v___x_1743_;
goto _start;
}
}
else
{
lean_object* v_a_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1888_; 
lean_dec(v_snd_1870_);
lean_dec(v_fst_1869_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1881_ = lean_ctor_get(v___x_1871_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1871_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1883_ = v___x_1871_;
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_a_1881_);
lean_dec(v___x_1871_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1886_; 
if (v_isShared_1884_ == 0)
{
v___x_1886_ = v___x_1883_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_a_1881_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
else
{
lean_dec(v_a_1867_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_as_x27_1726_ = v_tail_1742_;
v_b_1727_ = v___x_1743_;
goto _start;
}
}
else
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1897_; 
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1890_ = lean_ctor_get(v___x_1866_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1892_ = v___x_1866_;
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1866_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1895_; 
if (v_isShared_1893_ == 0)
{
v___x_1895_ = v___x_1892_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1890_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
v___jp_1898_:
{
if (lean_obj_tag(v___y_1899_) == 0)
{
lean_object* v_a_1900_; uint8_t v___x_1901_; 
v_a_1900_ = lean_ctor_get(v___y_1899_, 0);
lean_inc(v_a_1900_);
lean_dec_ref(v___y_1899_);
v___x_1901_ = lean_unbox(v_a_1900_);
lean_dec(v_a_1900_);
if (v___x_1901_ == 0)
{
v___y_1855_ = v___y_1728_;
v___y_1856_ = v___y_1729_;
v___y_1857_ = v___y_1730_;
v___y_1858_ = v___y_1731_;
v___y_1859_ = v___y_1732_;
v___y_1860_ = v___y_1733_;
v___y_1861_ = v___y_1734_;
v___y_1862_ = v___y_1735_;
v___y_1863_ = v___y_1736_;
v___y_1864_ = v___y_1737_;
v___y_1865_ = v___y_1738_;
goto v___jp_1854_;
}
else
{
lean_object* v___x_1902_; 
v___x_1902_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_1763_, v_a_1765_, v___y_1729_, v___y_1738_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1903_; uint8_t v___x_1904_; 
v_a_1903_ = lean_ctor_get(v___x_1902_, 0);
lean_inc(v_a_1903_);
lean_dec_ref(v___x_1902_);
v___x_1904_ = lean_unbox(v_a_1903_);
if (v___x_1904_ == 0)
{
lean_object* v___x_1905_; 
v___x_1905_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_u_1760_, v_v_1761_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1907_; 
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_a_1906_);
lean_dec_ref(v___x_1905_);
v___x_1907_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_v_1761_, v_u_1760_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; lean_object* v___x_1909_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
lean_inc(v_a_1908_);
lean_dec_ref(v___x_1907_);
lean_inc(v_a_1765_);
lean_inc(v_a_1763_);
v___x_1909_ = l_Lean_Meta_Grind_Order_mkEqProofOfLeOfLe(v_a_1763_, v_a_1765_, v_a_1906_, v_a_1908_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
if (lean_obj_tag(v___x_1909_) == 0)
{
lean_object* v_a_1910_; uint8_t v___x_1911_; lean_object* v___x_1912_; 
v_a_1910_ = lean_ctor_get(v___x_1909_, 0);
lean_inc(v_a_1910_);
lean_dec_ref(v___x_1909_);
v___x_1911_ = lean_unbox(v_a_1903_);
lean_dec(v_a_1903_);
lean_inc(v_a_1765_);
lean_inc(v_a_1763_);
v___x_1912_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_a_1763_, v_a_1765_, v_a_1910_, v___x_1911_, v___y_1729_, v___y_1731_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_dec_ref(v___x_1912_);
v___y_1855_ = v___y_1728_;
v___y_1856_ = v___y_1729_;
v___y_1857_ = v___y_1730_;
v___y_1858_ = v___y_1731_;
v___y_1859_ = v___y_1732_;
v___y_1860_ = v___y_1733_;
v___y_1861_ = v___y_1734_;
v___y_1862_ = v___y_1735_;
v___y_1863_ = v___y_1736_;
v___y_1864_ = v___y_1737_;
v___y_1865_ = v___y_1738_;
goto v___jp_1854_;
}
else
{
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
return v___x_1912_;
}
}
else
{
lean_object* v_a_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1920_; 
lean_dec(v_a_1903_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1913_ = lean_ctor_get(v___x_1909_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v___x_1909_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1915_ = v___x_1909_;
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_a_1913_);
lean_dec(v___x_1909_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1918_; 
if (v_isShared_1916_ == 0)
{
v___x_1918_ = v___x_1915_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v_a_1913_);
v___x_1918_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
return v___x_1918_;
}
}
}
}
else
{
lean_object* v_a_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1928_; 
lean_dec(v_a_1906_);
lean_dec(v_a_1903_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1921_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1923_ = v___x_1907_;
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_a_1921_);
lean_dec(v___x_1907_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v___x_1926_; 
if (v_isShared_1924_ == 0)
{
v___x_1926_ = v___x_1923_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v_a_1921_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
}
else
{
lean_object* v_a_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1936_; 
lean_dec(v_a_1903_);
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1929_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1931_ = v___x_1905_;
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_a_1929_);
lean_dec(v___x_1905_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1934_; 
if (v_isShared_1932_ == 0)
{
v___x_1934_ = v___x_1931_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_a_1929_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
else
{
lean_dec(v_a_1903_);
v___y_1855_ = v___y_1728_;
v___y_1856_ = v___y_1729_;
v___y_1857_ = v___y_1730_;
v___y_1858_ = v___y_1731_;
v___y_1859_ = v___y_1732_;
v___y_1860_ = v___y_1733_;
v___y_1861_ = v___y_1734_;
v___y_1862_ = v___y_1735_;
v___y_1863_ = v___y_1736_;
v___y_1864_ = v___y_1737_;
v___y_1865_ = v___y_1738_;
goto v___jp_1854_;
}
}
else
{
lean_object* v_a_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1944_; 
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1937_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1939_ = v___x_1902_;
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_a_1937_);
lean_dec(v___x_1902_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1942_; 
if (v_isShared_1940_ == 0)
{
v___x_1942_ = v___x_1939_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_a_1937_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
}
else
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
lean_dec(v_a_1765_);
lean_dec(v_a_1763_);
v_a_1945_ = lean_ctor_get(v___y_1899_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___y_1899_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v___y_1899_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___y_1899_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_a_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
}
else
{
lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1964_; 
lean_dec(v_a_1763_);
v_a_1957_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1959_ = v___x_1764_;
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1764_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1960_ == 0)
{
v___x_1962_ = v___x_1959_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v_a_1957_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
}
}
else
{
lean_object* v_a_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_1972_; 
v_a_1965_ = lean_ctor_get(v___x_1762_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1967_ = v___x_1762_;
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_a_1965_);
lean_dec(v___x_1762_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v___x_1970_; 
if (v_isShared_1968_ == 0)
{
v___x_1970_ = v___x_1967_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v_a_1965_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___boxed(lean_object* v_as_x27_1973_, lean_object* v_b_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_){
_start:
{
lean_object* v_res_1987_; 
v_res_1987_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg(v_as_x27_1973_, v_b_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_);
lean_dec(v___y_1985_);
lean_dec_ref(v___y_1984_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1978_);
lean_dec(v___y_1977_);
lean_dec(v___y_1976_);
lean_dec(v___y_1975_);
lean_dec(v_as_x27_1973_);
return v_res_1987_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___closed__0(void){
_start:
{
lean_object* v___f_1988_; 
v___f_1988_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___lam__0), 1, 0);
return v___f_1988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending(lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_){
_start:
{
lean_object* v___x_2001_; 
v___x_2001_ = l_Lean_Meta_Grind_Order_getStruct(v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_, v_a_1993_, v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; lean_object* v___f_2003_; lean_object* v___x_2004_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
lean_inc(v_a_2002_);
lean_dec_ref(v___x_2001_);
v___f_2003_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___closed__0);
v___x_2004_ = l_Lean_Meta_Grind_Order_modifyStruct___redArg(v___f_2003_, v_a_1989_, v_a_1990_, v_a_1999_);
if (lean_obj_tag(v___x_2004_) == 0)
{
lean_object* v_propagate_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
lean_dec_ref(v___x_2004_);
v_propagate_2005_ = lean_ctor_get(v_a_2002_, 21);
lean_inc(v_propagate_2005_);
lean_dec(v_a_2002_);
v___x_2006_ = lean_box(0);
v___x_2007_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg(v_propagate_2005_, v___x_2006_, v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_, v_a_1993_, v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_);
lean_dec(v_propagate_2005_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2014_; 
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_2007_);
if (v_isSharedCheck_2014_ == 0)
{
lean_object* v_unused_2015_; 
v_unused_2015_ = lean_ctor_get(v___x_2007_, 0);
lean_dec(v_unused_2015_);
v___x_2009_ = v___x_2007_;
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
else
{
lean_dec(v___x_2007_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 0, v___x_2006_);
v___x_2012_ = v___x_2009_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2006_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
else
{
return v___x_2007_;
}
}
else
{
lean_dec(v_a_2002_);
return v___x_2004_;
}
}
else
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2023_; 
v_a_2016_ = lean_ctor_get(v___x_2001_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2018_ = v___x_2001_;
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_2001_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2019_ == 0)
{
v___x_2021_ = v___x_2018_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_a_2016_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___boxed(lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_){
_start:
{
lean_object* v_res_2036_; 
v_res_2036_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending(v_a_2024_, v_a_2025_, v_a_2026_, v_a_2027_, v_a_2028_, v_a_2029_, v_a_2030_, v_a_2031_, v_a_2032_, v_a_2033_, v_a_2034_);
lean_dec(v_a_2034_);
lean_dec_ref(v_a_2033_);
lean_dec(v_a_2032_);
lean_dec_ref(v_a_2031_);
lean_dec(v_a_2030_);
lean_dec_ref(v_a_2029_);
lean_dec(v_a_2028_);
lean_dec_ref(v_a_2027_);
lean_dec(v_a_2026_);
lean_dec(v_a_2025_);
lean_dec(v_a_2024_);
return v_res_2036_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0(lean_object* v_as_2037_, lean_object* v_as_x27_2038_, lean_object* v_b_2039_, lean_object* v_a_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_){
_start:
{
lean_object* v___x_2053_; 
v___x_2053_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg(v_as_x27_2038_, v_b_2039_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_);
return v___x_2053_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___boxed(lean_object* v_as_2054_, lean_object* v_as_x27_2055_, lean_object* v_b_2056_, lean_object* v_a_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0(v_as_2054_, v_as_x27_2055_, v_b_2056_, v_a_2057_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
lean_dec(v___y_2060_);
lean_dec(v___y_2059_);
lean_dec(v___y_2058_);
lean_dec(v_as_x27_2055_);
lean_dec(v_as_2054_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg(lean_object* v_e_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_){
_start:
{
lean_object* v___x_2079_; 
v___x_2079_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_2072_, v_a_2076_, v_a_2077_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; lean_object* v_termMapInv_2081_; lean_object* v___x_2082_; 
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_a_2080_);
lean_dec_ref(v___x_2079_);
v_termMapInv_2081_ = lean_ctor_get(v_a_2080_, 4);
lean_inc_ref(v_termMapInv_2081_);
lean_dec(v_a_2080_);
v___x_2082_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_2081_, v_e_2071_);
lean_dec_ref(v_termMapInv_2081_);
if (lean_obj_tag(v___x_2082_) == 1)
{
lean_object* v_val_2083_; lean_object* v_fst_2084_; lean_object* v___x_2085_; 
lean_dec_ref(v_e_2071_);
v_val_2083_ = lean_ctor_get(v___x_2082_, 0);
lean_inc(v_val_2083_);
lean_dec_ref(v___x_2082_);
v_fst_2084_ = lean_ctor_get(v_val_2083_, 0);
lean_inc(v_fst_2084_);
lean_dec(v_val_2083_);
v___x_2085_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_fst_2084_, v_a_2072_, v_a_2077_);
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v_a_2086_; uint8_t v___x_2087_; 
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
lean_inc(v_a_2086_);
v___x_2087_ = lean_unbox(v_a_2086_);
lean_dec(v_a_2086_);
if (v___x_2087_ == 0)
{
lean_dec(v_fst_2084_);
return v___x_2085_;
}
else
{
lean_object* v___x_2088_; 
lean_dec_ref(v___x_2085_);
v___x_2088_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_fst_2084_, v_a_2072_, v_a_2073_, v_a_2074_, v_a_2075_, v_a_2076_, v_a_2077_);
return v___x_2088_;
}
}
else
{
lean_dec(v_fst_2084_);
return v___x_2085_;
}
}
else
{
lean_object* v___x_2089_; 
lean_dec(v___x_2082_);
v___x_2089_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_e_2071_, v_a_2072_, v_a_2077_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; uint8_t v___x_2091_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_a_2090_);
v___x_2091_ = lean_unbox(v_a_2090_);
lean_dec(v_a_2090_);
if (v___x_2091_ == 0)
{
lean_dec_ref(v_e_2071_);
return v___x_2089_;
}
else
{
lean_object* v___x_2092_; 
lean_dec_ref(v___x_2089_);
v___x_2092_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_2071_, v_a_2072_, v_a_2073_, v_a_2074_, v_a_2075_, v_a_2076_, v_a_2077_);
return v___x_2092_;
}
}
else
{
lean_dec_ref(v_e_2071_);
return v___x_2089_;
}
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
lean_dec_ref(v_e_2071_);
v_a_2093_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2079_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2079_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg___boxed(lean_object* v_e_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_){
_start:
{
lean_object* v_res_2109_; 
v_res_2109_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg(v_e_2101_, v_a_2102_, v_a_2103_, v_a_2104_, v_a_2105_, v_a_2106_, v_a_2107_);
lean_dec(v_a_2107_);
lean_dec_ref(v_a_2106_);
lean_dec(v_a_2105_);
lean_dec_ref(v_a_2104_);
lean_dec_ref(v_a_2103_);
lean_dec(v_a_2102_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue(lean_object* v_e_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_, lean_object* v_a_2118_, lean_object* v_a_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_){
_start:
{
lean_object* v___x_2123_; 
v___x_2123_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg(v_e_2110_, v_a_2112_, v_a_2116_, v_a_2118_, v_a_2119_, v_a_2120_, v_a_2121_);
return v___x_2123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___boxed(lean_object* v_e_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_){
_start:
{
lean_object* v_res_2137_; 
v_res_2137_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue(v_e_2124_, v_a_2125_, v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_);
lean_dec(v_a_2135_);
lean_dec_ref(v_a_2134_);
lean_dec(v_a_2133_);
lean_dec_ref(v_a_2132_);
lean_dec(v_a_2131_);
lean_dec_ref(v_a_2130_);
lean_dec(v_a_2129_);
lean_dec_ref(v_a_2128_);
lean_dec(v_a_2127_);
lean_dec(v_a_2126_);
lean_dec(v_a_2125_);
return v_res_2137_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__0(void){
_start:
{
lean_object* v___x_2138_; 
v___x_2138_ = lean_mk_string_unchecked("check_eq_true", 13, 13);
return v___x_2138_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1(void){
_start:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2139_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__0);
v___x_2140_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2);
v___x_2141_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1);
v___x_2142_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0);
v___x_2143_ = l_Lean_Name_mkStr4(v___x_2142_, v___x_2141_, v___x_2140_, v___x_2139_);
return v___x_2143_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__2(void){
_start:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2144_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1);
v___x_2145_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6);
v___x_2146_ = l_Lean_Name_append(v___x_2145_, v___x_2144_);
return v___x_2146_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__3(void){
_start:
{
lean_object* v___x_2147_; 
v___x_2147_ = lean_mk_string_unchecked(", ", 2, 2);
return v___x_2147_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4(void){
_start:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2148_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__3);
v___x_2149_ = l_Lean_stringToMessageData(v___x_2148_);
return v___x_2149_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5(void){
_start:
{
lean_object* v___x_2150_; 
v___x_2150_ = lean_mk_string_unchecked("-ε", 3, 2);
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue(lean_object* v_u_2151_, lean_object* v_v_2152_, lean_object* v_k_2153_, lean_object* v_c_2154_, lean_object* v_e_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_){
_start:
{
lean_object* v___x_2168_; 
lean_inc_ref(v_e_2155_);
v___x_2168_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg(v_e_2155_, v_a_2157_, v_a_2161_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_);
if (lean_obj_tag(v___x_2168_) == 0)
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2267_; 
v_a_2169_ = lean_ctor_get(v___x_2168_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v___x_2168_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2171_ = v___x_2168_;
v_isShared_2172_ = v_isSharedCheck_2267_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v___x_2168_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2267_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
uint8_t v___x_2173_; 
v___x_2173_ = lean_unbox(v_a_2169_);
lean_dec(v_a_2169_);
if (v___x_2173_ == 0)
{
lean_object* v_options_2174_; lean_object* v_inheritedTraceOptions_2175_; uint8_t v_hasTrace_2176_; lean_object* v___x_2177_; lean_object* v___y_2179_; lean_object* v___y_2180_; lean_object* v___y_2181_; lean_object* v___y_2182_; lean_object* v___y_2183_; lean_object* v___y_2184_; lean_object* v___y_2185_; lean_object* v___y_2186_; lean_object* v___y_2187_; lean_object* v___y_2188_; lean_object* v___y_2189_; 
v_options_2174_ = lean_ctor_get(v_a_2165_, 2);
v_inheritedTraceOptions_2175_ = lean_ctor_get(v_a_2165_, 13);
v_hasTrace_2176_ = lean_ctor_get_uint8(v_options_2174_, sizeof(void*)*1);
v___x_2177_ = l_Lean_Meta_Grind_Order_Cnstr_getWeight___redArg(v_c_2154_);
if (v_hasTrace_2176_ == 0)
{
v___y_2179_ = v_a_2156_;
v___y_2180_ = v_a_2157_;
v___y_2181_ = v_a_2158_;
v___y_2182_ = v_a_2159_;
v___y_2183_ = v_a_2160_;
v___y_2184_ = v_a_2161_;
v___y_2185_ = v_a_2162_;
v___y_2186_ = v_a_2163_;
v___y_2187_ = v_a_2164_;
v___y_2188_ = v_a_2165_;
v___y_2189_ = v_a_2166_;
goto v___jp_2178_;
}
else
{
lean_object* v___x_2197_; lean_object* v___x_2198_; uint8_t v___x_2199_; 
v___x_2197_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1);
v___x_2198_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__2);
v___x_2199_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2175_, v_options_2174_, v___x_2198_);
if (v___x_2199_ == 0)
{
v___y_2179_ = v_a_2156_;
v___y_2180_ = v_a_2157_;
v___y_2181_ = v_a_2158_;
v___y_2182_ = v_a_2159_;
v___y_2183_ = v_a_2160_;
v___y_2184_ = v_a_2161_;
v___y_2185_ = v_a_2162_;
v___y_2186_ = v_a_2163_;
v___y_2187_ = v_a_2164_;
v___y_2188_ = v_a_2165_;
v___y_2189_ = v_a_2166_;
goto v___jp_2178_;
}
else
{
lean_object* v___x_2200_; 
v___x_2200_ = l_Lean_Meta_Grind_Order_getExpr(v_u_2151_, v_a_2156_, v_a_2157_, v_a_2158_, v_a_2159_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2202_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2201_);
lean_dec_ref(v___x_2200_);
v___x_2202_ = l_Lean_Meta_Grind_Order_getExpr(v_v_2152_, v_a_2156_, v_a_2157_, v_a_2158_, v_a_2159_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_);
if (lean_obj_tag(v___x_2202_) == 0)
{
lean_object* v_a_2203_; lean_object* v___x_2204_; 
v_a_2203_ = lean_ctor_get(v___x_2202_, 0);
lean_inc(v_a_2203_);
lean_dec_ref(v___x_2202_);
v___x_2204_ = l_Lean_Meta_Grind_Order_Cnstr_pp(v_c_2154_, v_a_2156_, v_a_2157_, v_a_2158_, v_a_2159_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_);
if (lean_obj_tag(v___x_2204_) == 0)
{
lean_object* v_a_2205_; lean_object* v_k_2206_; uint8_t v_strict_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___y_2211_; lean_object* v___y_2212_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___y_2224_; 
v_a_2205_ = lean_ctor_get(v___x_2204_, 0);
lean_inc(v_a_2205_);
lean_dec_ref(v___x_2204_);
v_k_2206_ = lean_ctor_get(v_k_2153_, 0);
v_strict_2207_ = lean_ctor_get_uint8(v_k_2153_, sizeof(void*)*1);
v___x_2208_ = l_Lean_MessageData_ofExpr(v_a_2201_);
v___x_2209_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4);
v___x_2219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2219_, 0, v___x_2208_);
lean_ctor_set(v___x_2219_, 1, v___x_2209_);
v___x_2220_ = l_Lean_MessageData_ofExpr(v_a_2203_);
v___x_2221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2219_);
lean_ctor_set(v___x_2221_, 1, v___x_2220_);
v___x_2222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2221_);
lean_ctor_set(v___x_2222_, 1, v___x_2209_);
if (v_strict_2207_ == 0)
{
lean_object* v___x_2235_; 
v___x_2235_ = l_Int_repr(v_k_2206_);
v___y_2224_ = v___x_2235_;
goto v___jp_2223_;
}
else
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___x_2236_ = l_Int_repr(v_k_2206_);
v___x_2237_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5);
v___x_2238_ = lean_string_append(v___x_2236_, v___x_2237_);
v___y_2224_ = v___x_2238_;
goto v___jp_2223_;
}
v___jp_2210_:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2213_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2213_, 0, v___y_2212_);
v___x_2214_ = l_Lean_MessageData_ofFormat(v___x_2213_);
v___x_2215_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2215_, 0, v___y_2211_);
lean_ctor_set(v___x_2215_, 1, v___x_2214_);
v___x_2216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
lean_ctor_set(v___x_2216_, 1, v___x_2209_);
v___x_2217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2216_);
lean_ctor_set(v___x_2217_, 1, v_a_2205_);
v___x_2218_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v___x_2197_, v___x_2217_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_);
if (lean_obj_tag(v___x_2218_) == 0)
{
lean_dec_ref(v___x_2218_);
v___y_2179_ = v_a_2156_;
v___y_2180_ = v_a_2157_;
v___y_2181_ = v_a_2158_;
v___y_2182_ = v_a_2159_;
v___y_2183_ = v_a_2160_;
v___y_2184_ = v_a_2161_;
v___y_2185_ = v_a_2162_;
v___y_2186_ = v_a_2163_;
v___y_2187_ = v_a_2164_;
v___y_2188_ = v_a_2165_;
v___y_2189_ = v_a_2166_;
goto v___jp_2178_;
}
else
{
lean_dec_ref(v___x_2177_);
lean_del_object(v___x_2171_);
lean_dec_ref(v_e_2155_);
lean_dec_ref(v_c_2154_);
lean_dec_ref(v_k_2153_);
lean_dec(v_v_2152_);
lean_dec(v_u_2151_);
return v___x_2218_;
}
}
v___jp_2223_:
{
lean_object* v_k_2225_; uint8_t v_strict_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v_k_2225_ = lean_ctor_get(v___x_2177_, 0);
lean_inc(v_k_2225_);
v_strict_2226_ = lean_ctor_get_uint8(v___x_2177_, sizeof(void*)*1);
v___x_2227_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2227_, 0, v___y_2224_);
v___x_2228_ = l_Lean_MessageData_ofFormat(v___x_2227_);
v___x_2229_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2222_);
lean_ctor_set(v___x_2229_, 1, v___x_2228_);
v___x_2230_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2229_);
lean_ctor_set(v___x_2230_, 1, v___x_2209_);
if (v_strict_2226_ == 0)
{
lean_object* v___x_2231_; 
v___x_2231_ = l_Int_repr(v_k_2225_);
lean_dec(v_k_2225_);
v___y_2211_ = v___x_2230_;
v___y_2212_ = v___x_2231_;
goto v___jp_2210_;
}
else
{
lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2232_ = l_Int_repr(v_k_2225_);
lean_dec(v_k_2225_);
v___x_2233_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5);
v___x_2234_ = lean_string_append(v___x_2232_, v___x_2233_);
v___y_2211_ = v___x_2230_;
v___y_2212_ = v___x_2234_;
goto v___jp_2210_;
}
}
}
else
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2246_; 
lean_dec(v_a_2203_);
lean_dec(v_a_2201_);
lean_dec_ref(v___x_2177_);
lean_del_object(v___x_2171_);
lean_dec_ref(v_e_2155_);
lean_dec_ref(v_c_2154_);
lean_dec_ref(v_k_2153_);
lean_dec(v_v_2152_);
lean_dec(v_u_2151_);
v_a_2239_ = lean_ctor_get(v___x_2204_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v___x_2204_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2241_ = v___x_2204_;
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2204_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
if (v_isShared_2242_ == 0)
{
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_a_2239_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
}
else
{
lean_object* v_a_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2254_; 
lean_dec(v_a_2201_);
lean_dec_ref(v___x_2177_);
lean_del_object(v___x_2171_);
lean_dec_ref(v_e_2155_);
lean_dec_ref(v_c_2154_);
lean_dec_ref(v_k_2153_);
lean_dec(v_v_2152_);
lean_dec(v_u_2151_);
v_a_2247_ = lean_ctor_get(v___x_2202_, 0);
v_isSharedCheck_2254_ = !lean_is_exclusive(v___x_2202_);
if (v_isSharedCheck_2254_ == 0)
{
v___x_2249_ = v___x_2202_;
v_isShared_2250_ = v_isSharedCheck_2254_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_a_2247_);
lean_dec(v___x_2202_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2254_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2252_; 
if (v_isShared_2250_ == 0)
{
v___x_2252_ = v___x_2249_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v_a_2247_);
v___x_2252_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
return v___x_2252_;
}
}
}
}
else
{
lean_object* v_a_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2262_; 
lean_dec_ref(v___x_2177_);
lean_del_object(v___x_2171_);
lean_dec_ref(v_e_2155_);
lean_dec_ref(v_c_2154_);
lean_dec_ref(v_k_2153_);
lean_dec(v_v_2152_);
lean_dec(v_u_2151_);
v_a_2255_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2262_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2262_ == 0)
{
v___x_2257_ = v___x_2200_;
v_isShared_2258_ = v_isSharedCheck_2262_;
goto v_resetjp_2256_;
}
else
{
lean_inc(v_a_2255_);
lean_dec(v___x_2200_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2262_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
lean_object* v___x_2260_; 
if (v_isShared_2258_ == 0)
{
v___x_2260_ = v___x_2257_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2261_; 
v_reuseFailAlloc_2261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2261_, 0, v_a_2255_);
v___x_2260_ = v_reuseFailAlloc_2261_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
return v___x_2260_;
}
}
}
}
}
v___jp_2178_:
{
uint8_t v___x_2190_; 
v___x_2190_ = l_Lean_Meta_Grind_Order_instDecidableLEWeight(v_k_2153_, v___x_2177_);
if (v___x_2190_ == 0)
{
lean_object* v___x_2191_; lean_object* v___x_2193_; 
lean_dec_ref(v___x_2177_);
lean_dec_ref(v_e_2155_);
lean_dec_ref(v_c_2154_);
lean_dec_ref(v_k_2153_);
lean_dec(v_v_2152_);
lean_dec(v_u_2151_);
v___x_2191_ = lean_box(0);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 0, v___x_2191_);
v___x_2193_ = v___x_2171_;
goto v_reusejp_2192_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v___x_2191_);
v___x_2193_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2192_;
}
v_reusejp_2192_:
{
return v___x_2193_;
}
}
else
{
lean_object* v___x_2195_; lean_object* v___x_2196_; 
lean_del_object(v___x_2171_);
v___x_2195_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2195_, 0, v_c_2154_);
lean_ctor_set(v___x_2195_, 1, v_e_2155_);
lean_ctor_set(v___x_2195_, 2, v_u_2151_);
lean_ctor_set(v___x_2195_, 3, v_v_2152_);
lean_ctor_set(v___x_2195_, 4, v_k_2153_);
lean_ctor_set(v___x_2195_, 5, v___x_2177_);
v___x_2196_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(v___x_2195_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_);
return v___x_2196_;
}
}
}
else
{
lean_object* v___x_2263_; lean_object* v___x_2265_; 
lean_dec_ref(v_e_2155_);
lean_dec_ref(v_c_2154_);
lean_dec_ref(v_k_2153_);
lean_dec(v_v_2152_);
lean_dec(v_u_2151_);
v___x_2263_ = lean_box(0);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 0, v___x_2263_);
v___x_2265_ = v___x_2171_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v___x_2263_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
return v___x_2265_;
}
}
}
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
lean_dec_ref(v_e_2155_);
lean_dec_ref(v_c_2154_);
lean_dec_ref(v_k_2153_);
lean_dec(v_v_2152_);
lean_dec(v_u_2151_);
v_a_2268_ = lean_ctor_get(v___x_2168_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2168_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2168_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2168_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2273_; 
if (v_isShared_2271_ == 0)
{
v___x_2273_ = v___x_2270_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2268_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___boxed(lean_object** _args){
lean_object* v_u_2276_ = _args[0];
lean_object* v_v_2277_ = _args[1];
lean_object* v_k_2278_ = _args[2];
lean_object* v_c_2279_ = _args[3];
lean_object* v_e_2280_ = _args[4];
lean_object* v_a_2281_ = _args[5];
lean_object* v_a_2282_ = _args[6];
lean_object* v_a_2283_ = _args[7];
lean_object* v_a_2284_ = _args[8];
lean_object* v_a_2285_ = _args[9];
lean_object* v_a_2286_ = _args[10];
lean_object* v_a_2287_ = _args[11];
lean_object* v_a_2288_ = _args[12];
lean_object* v_a_2289_ = _args[13];
lean_object* v_a_2290_ = _args[14];
lean_object* v_a_2291_ = _args[15];
lean_object* v_a_2292_ = _args[16];
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue(v_u_2276_, v_v_2277_, v_k_2278_, v_c_2279_, v_e_2280_, v_a_2281_, v_a_2282_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
lean_dec(v_a_2291_);
lean_dec_ref(v_a_2290_);
lean_dec(v_a_2289_);
lean_dec_ref(v_a_2288_);
lean_dec(v_a_2287_);
lean_dec_ref(v_a_2286_);
lean_dec(v_a_2285_);
lean_dec_ref(v_a_2284_);
lean_dec(v_a_2283_);
lean_dec(v_a_2282_);
lean_dec(v_a_2281_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg(lean_object* v_e_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_){
_start:
{
lean_object* v___x_2302_; 
v___x_2302_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_2295_, v_a_2299_, v_a_2300_);
if (lean_obj_tag(v___x_2302_) == 0)
{
lean_object* v_a_2303_; lean_object* v_termMapInv_2304_; lean_object* v___x_2305_; 
v_a_2303_ = lean_ctor_get(v___x_2302_, 0);
lean_inc(v_a_2303_);
lean_dec_ref(v___x_2302_);
v_termMapInv_2304_ = lean_ctor_get(v_a_2303_, 4);
lean_inc_ref(v_termMapInv_2304_);
lean_dec(v_a_2303_);
v___x_2305_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_2304_, v_e_2294_);
lean_dec_ref(v_termMapInv_2304_);
if (lean_obj_tag(v___x_2305_) == 1)
{
lean_object* v_val_2306_; lean_object* v_fst_2307_; lean_object* v___x_2308_; 
lean_dec_ref(v_e_2294_);
v_val_2306_ = lean_ctor_get(v___x_2305_, 0);
lean_inc(v_val_2306_);
lean_dec_ref(v___x_2305_);
v_fst_2307_ = lean_ctor_get(v_val_2306_, 0);
lean_inc(v_fst_2307_);
lean_dec(v_val_2306_);
v___x_2308_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_fst_2307_, v_a_2295_, v_a_2300_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v_a_2309_; uint8_t v___x_2310_; 
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2309_);
v___x_2310_ = lean_unbox(v_a_2309_);
lean_dec(v_a_2309_);
if (v___x_2310_ == 0)
{
lean_dec(v_fst_2307_);
return v___x_2308_;
}
else
{
lean_object* v___x_2311_; 
lean_dec_ref(v___x_2308_);
v___x_2311_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_fst_2307_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_);
return v___x_2311_;
}
}
else
{
lean_dec(v_fst_2307_);
return v___x_2308_;
}
}
else
{
lean_object* v___x_2312_; 
lean_dec(v___x_2305_);
v___x_2312_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_e_2294_, v_a_2295_, v_a_2300_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; uint8_t v___x_2314_; 
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_a_2313_);
v___x_2314_ = lean_unbox(v_a_2313_);
lean_dec(v_a_2313_);
if (v___x_2314_ == 0)
{
lean_dec_ref(v_e_2294_);
return v___x_2312_;
}
else
{
lean_object* v___x_2315_; 
lean_dec_ref(v___x_2312_);
v___x_2315_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_);
return v___x_2315_;
}
}
else
{
lean_dec_ref(v_e_2294_);
return v___x_2312_;
}
}
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec_ref(v_e_2294_);
v_a_2316_ = lean_ctor_get(v___x_2302_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2302_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2302_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg___boxed(lean_object* v_e_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg(v_e_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_, v_a_2329_, v_a_2330_);
lean_dec(v_a_2330_);
lean_dec_ref(v_a_2329_);
lean_dec(v_a_2328_);
lean_dec_ref(v_a_2327_);
lean_dec_ref(v_a_2326_);
lean_dec(v_a_2325_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse(lean_object* v_e_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_){
_start:
{
lean_object* v___x_2346_; 
v___x_2346_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg(v_e_2333_, v_a_2335_, v_a_2339_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___boxed(lean_object* v_e_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_){
_start:
{
lean_object* v_res_2360_; 
v_res_2360_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse(v_e_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_, v_a_2354_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_);
lean_dec(v_a_2358_);
lean_dec_ref(v_a_2357_);
lean_dec(v_a_2356_);
lean_dec_ref(v_a_2355_);
lean_dec(v_a_2354_);
lean_dec_ref(v_a_2353_);
lean_dec(v_a_2352_);
lean_dec_ref(v_a_2351_);
lean_dec(v_a_2350_);
lean_dec(v_a_2349_);
lean_dec(v_a_2348_);
return v_res_2360_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__0(void){
_start:
{
lean_object* v___x_2361_; 
v___x_2361_ = lean_mk_string_unchecked("check_eq_false", 14, 14);
return v___x_2361_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1(void){
_start:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2362_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__0);
v___x_2363_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2);
v___x_2364_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1);
v___x_2365_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0);
v___x_2366_ = l_Lean_Name_mkStr4(v___x_2365_, v___x_2364_, v___x_2363_, v___x_2362_);
return v___x_2366_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__2(void){
_start:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2367_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1);
v___x_2368_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6);
v___x_2369_ = l_Lean_Name_append(v___x_2368_, v___x_2367_);
return v___x_2369_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__3(void){
_start:
{
lean_object* v___x_2370_; 
v___x_2370_ = lean_mk_string_unchecked(" ", 1, 1);
return v___x_2370_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__4(void){
_start:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2371_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__3);
v___x_2372_ = l_Lean_stringToMessageData(v___x_2371_);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse(lean_object* v_u_2373_, lean_object* v_v_2374_, lean_object* v_k_2375_, lean_object* v_c_2376_, lean_object* v_e_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_){
_start:
{
lean_object* v___x_2390_; 
lean_inc_ref(v_e_2377_);
v___x_2390_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg(v_e_2377_, v_a_2379_, v_a_2383_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v_a_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2491_; 
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2393_ = v___x_2390_;
v_isShared_2394_ = v_isSharedCheck_2491_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_a_2391_);
lean_dec(v___x_2390_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2491_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
uint8_t v___x_2395_; 
v___x_2395_ = lean_unbox(v_a_2391_);
lean_dec(v_a_2391_);
if (v___x_2395_ == 0)
{
lean_object* v_options_2396_; lean_object* v_inheritedTraceOptions_2397_; uint8_t v_hasTrace_2398_; lean_object* v___x_2399_; lean_object* v___y_2401_; lean_object* v___y_2402_; lean_object* v___y_2403_; lean_object* v___y_2404_; lean_object* v___y_2405_; lean_object* v___y_2406_; lean_object* v___y_2407_; lean_object* v___y_2408_; lean_object* v___y_2409_; lean_object* v___y_2410_; lean_object* v___y_2411_; 
v_options_2396_ = lean_ctor_get(v_a_2387_, 2);
v_inheritedTraceOptions_2397_ = lean_ctor_get(v_a_2387_, 13);
v_hasTrace_2398_ = lean_ctor_get_uint8(v_options_2396_, sizeof(void*)*1);
v___x_2399_ = l_Lean_Meta_Grind_Order_Cnstr_getWeight___redArg(v_c_2376_);
if (v_hasTrace_2398_ == 0)
{
v___y_2401_ = v_a_2378_;
v___y_2402_ = v_a_2379_;
v___y_2403_ = v_a_2380_;
v___y_2404_ = v_a_2381_;
v___y_2405_ = v_a_2382_;
v___y_2406_ = v_a_2383_;
v___y_2407_ = v_a_2384_;
v___y_2408_ = v_a_2385_;
v___y_2409_ = v_a_2386_;
v___y_2410_ = v_a_2387_;
v___y_2411_ = v_a_2388_;
goto v___jp_2400_;
}
else
{
lean_object* v___x_2420_; lean_object* v___x_2421_; uint8_t v___x_2422_; 
v___x_2420_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1);
v___x_2421_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__2);
v___x_2422_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2397_, v_options_2396_, v___x_2421_);
if (v___x_2422_ == 0)
{
v___y_2401_ = v_a_2378_;
v___y_2402_ = v_a_2379_;
v___y_2403_ = v_a_2380_;
v___y_2404_ = v_a_2381_;
v___y_2405_ = v_a_2382_;
v___y_2406_ = v_a_2383_;
v___y_2407_ = v_a_2384_;
v___y_2408_ = v_a_2385_;
v___y_2409_ = v_a_2386_;
v___y_2410_ = v_a_2387_;
v___y_2411_ = v_a_2388_;
goto v___jp_2400_;
}
else
{
lean_object* v___x_2423_; 
v___x_2423_ = l_Lean_Meta_Grind_Order_getExpr(v_u_2373_, v_a_2378_, v_a_2379_, v_a_2380_, v_a_2381_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v___x_2425_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
lean_inc(v_a_2424_);
lean_dec_ref(v___x_2423_);
v___x_2425_ = l_Lean_Meta_Grind_Order_getExpr(v_v_2374_, v_a_2378_, v_a_2379_, v_a_2380_, v_a_2381_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
if (lean_obj_tag(v___x_2425_) == 0)
{
lean_object* v_a_2426_; lean_object* v___x_2427_; 
v_a_2426_ = lean_ctor_get(v___x_2425_, 0);
lean_inc(v_a_2426_);
lean_dec_ref(v___x_2425_);
v___x_2427_ = l_Lean_Meta_Grind_Order_Cnstr_pp(v_c_2376_, v_a_2378_, v_a_2379_, v_a_2380_, v_a_2381_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
if (lean_obj_tag(v___x_2427_) == 0)
{
lean_object* v_a_2428_; lean_object* v___y_2430_; lean_object* v___y_2431_; lean_object* v_k_2439_; uint8_t v_strict_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___y_2448_; 
v_a_2428_ = lean_ctor_get(v___x_2427_, 0);
lean_inc(v_a_2428_);
lean_dec_ref(v___x_2427_);
v_k_2439_ = lean_ctor_get(v_k_2375_, 0);
v_strict_2440_ = lean_ctor_get_uint8(v_k_2375_, sizeof(void*)*1);
v___x_2441_ = l_Lean_MessageData_ofExpr(v_a_2424_);
v___x_2442_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4);
v___x_2443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2441_);
lean_ctor_set(v___x_2443_, 1, v___x_2442_);
v___x_2444_ = l_Lean_MessageData_ofExpr(v_a_2426_);
v___x_2445_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2443_);
lean_ctor_set(v___x_2445_, 1, v___x_2444_);
v___x_2446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2445_);
lean_ctor_set(v___x_2446_, 1, v___x_2442_);
if (v_strict_2440_ == 0)
{
lean_object* v___x_2459_; 
v___x_2459_ = l_Int_repr(v_k_2439_);
v___y_2448_ = v___x_2459_;
goto v___jp_2447_;
}
else
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2460_ = l_Int_repr(v_k_2439_);
v___x_2461_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5);
v___x_2462_ = lean_string_append(v___x_2460_, v___x_2461_);
v___y_2448_ = v___x_2462_;
goto v___jp_2447_;
}
v___jp_2429_:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___x_2432_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2432_, 0, v___y_2431_);
v___x_2433_ = l_Lean_MessageData_ofFormat(v___x_2432_);
v___x_2434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2434_, 0, v___y_2430_);
lean_ctor_set(v___x_2434_, 1, v___x_2433_);
v___x_2435_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__4);
v___x_2436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2434_);
lean_ctor_set(v___x_2436_, 1, v___x_2435_);
v___x_2437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2437_, 0, v___x_2436_);
lean_ctor_set(v___x_2437_, 1, v_a_2428_);
v___x_2438_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v___x_2420_, v___x_2437_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_dec_ref(v___x_2438_);
v___y_2401_ = v_a_2378_;
v___y_2402_ = v_a_2379_;
v___y_2403_ = v_a_2380_;
v___y_2404_ = v_a_2381_;
v___y_2405_ = v_a_2382_;
v___y_2406_ = v_a_2383_;
v___y_2407_ = v_a_2384_;
v___y_2408_ = v_a_2385_;
v___y_2409_ = v_a_2386_;
v___y_2410_ = v_a_2387_;
v___y_2411_ = v_a_2388_;
goto v___jp_2400_;
}
else
{
lean_dec_ref(v___x_2399_);
lean_del_object(v___x_2393_);
lean_dec_ref(v_e_2377_);
lean_dec_ref(v_c_2376_);
lean_dec_ref(v_k_2375_);
lean_dec(v_v_2374_);
lean_dec(v_u_2373_);
return v___x_2438_;
}
}
v___jp_2447_:
{
lean_object* v_k_2449_; uint8_t v_strict_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; 
v_k_2449_ = lean_ctor_get(v___x_2399_, 0);
lean_inc(v_k_2449_);
v_strict_2450_ = lean_ctor_get_uint8(v___x_2399_, sizeof(void*)*1);
v___x_2451_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2451_, 0, v___y_2448_);
v___x_2452_ = l_Lean_MessageData_ofFormat(v___x_2451_);
v___x_2453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2446_);
lean_ctor_set(v___x_2453_, 1, v___x_2452_);
v___x_2454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2453_);
lean_ctor_set(v___x_2454_, 1, v___x_2442_);
if (v_strict_2450_ == 0)
{
lean_object* v___x_2455_; 
v___x_2455_ = l_Int_repr(v_k_2449_);
lean_dec(v_k_2449_);
v___y_2430_ = v___x_2454_;
v___y_2431_ = v___x_2455_;
goto v___jp_2429_;
}
else
{
lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2456_ = l_Int_repr(v_k_2449_);
lean_dec(v_k_2449_);
v___x_2457_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5);
v___x_2458_ = lean_string_append(v___x_2456_, v___x_2457_);
v___y_2430_ = v___x_2454_;
v___y_2431_ = v___x_2458_;
goto v___jp_2429_;
}
}
}
else
{
lean_object* v_a_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2470_; 
lean_dec(v_a_2426_);
lean_dec(v_a_2424_);
lean_dec_ref(v___x_2399_);
lean_del_object(v___x_2393_);
lean_dec_ref(v_e_2377_);
lean_dec_ref(v_c_2376_);
lean_dec_ref(v_k_2375_);
lean_dec(v_v_2374_);
lean_dec(v_u_2373_);
v_a_2463_ = lean_ctor_get(v___x_2427_, 0);
v_isSharedCheck_2470_ = !lean_is_exclusive(v___x_2427_);
if (v_isSharedCheck_2470_ == 0)
{
v___x_2465_ = v___x_2427_;
v_isShared_2466_ = v_isSharedCheck_2470_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_a_2463_);
lean_dec(v___x_2427_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2470_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
lean_object* v___x_2468_; 
if (v_isShared_2466_ == 0)
{
v___x_2468_ = v___x_2465_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v_a_2463_);
v___x_2468_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
return v___x_2468_;
}
}
}
}
else
{
lean_object* v_a_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2478_; 
lean_dec(v_a_2424_);
lean_dec_ref(v___x_2399_);
lean_del_object(v___x_2393_);
lean_dec_ref(v_e_2377_);
lean_dec_ref(v_c_2376_);
lean_dec_ref(v_k_2375_);
lean_dec(v_v_2374_);
lean_dec(v_u_2373_);
v_a_2471_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2473_ = v___x_2425_;
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_a_2471_);
lean_dec(v___x_2425_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2476_; 
if (v_isShared_2474_ == 0)
{
v___x_2476_ = v___x_2473_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v_a_2471_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
}
}
else
{
lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2486_; 
lean_dec_ref(v___x_2399_);
lean_del_object(v___x_2393_);
lean_dec_ref(v_e_2377_);
lean_dec_ref(v_c_2376_);
lean_dec_ref(v_k_2375_);
lean_dec(v_v_2374_);
lean_dec(v_u_2373_);
v_a_2479_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2486_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2486_ == 0)
{
v___x_2481_ = v___x_2423_;
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2423_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
if (v_isShared_2482_ == 0)
{
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v_a_2479_);
v___x_2484_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
return v___x_2484_;
}
}
}
}
}
v___jp_2400_:
{
lean_object* v___x_2412_; uint8_t v___x_2413_; 
lean_inc_ref(v___x_2399_);
v___x_2412_ = l_Lean_Meta_Grind_Order_Weight_add(v_k_2375_, v___x_2399_);
v___x_2413_ = l_Lean_Meta_Grind_Order_Weight_isNeg(v___x_2412_);
lean_dec_ref(v___x_2412_);
if (v___x_2413_ == 0)
{
lean_object* v___x_2414_; lean_object* v___x_2416_; 
lean_dec_ref(v___x_2399_);
lean_dec_ref(v_e_2377_);
lean_dec_ref(v_c_2376_);
lean_dec_ref(v_k_2375_);
lean_dec(v_v_2374_);
lean_dec(v_u_2373_);
v___x_2414_ = lean_box(0);
if (v_isShared_2394_ == 0)
{
lean_ctor_set(v___x_2393_, 0, v___x_2414_);
v___x_2416_ = v___x_2393_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v___x_2414_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
else
{
lean_object* v___x_2418_; lean_object* v___x_2419_; 
lean_del_object(v___x_2393_);
v___x_2418_ = lean_alloc_ctor(1, 6, 0);
lean_ctor_set(v___x_2418_, 0, v_c_2376_);
lean_ctor_set(v___x_2418_, 1, v_e_2377_);
lean_ctor_set(v___x_2418_, 2, v_u_2373_);
lean_ctor_set(v___x_2418_, 3, v_v_2374_);
lean_ctor_set(v___x_2418_, 4, v_k_2375_);
lean_ctor_set(v___x_2418_, 5, v___x_2399_);
v___x_2419_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(v___x_2418_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_);
return v___x_2419_;
}
}
}
else
{
lean_object* v___x_2487_; lean_object* v___x_2489_; 
lean_dec_ref(v_e_2377_);
lean_dec_ref(v_c_2376_);
lean_dec_ref(v_k_2375_);
lean_dec(v_v_2374_);
lean_dec(v_u_2373_);
v___x_2487_ = lean_box(0);
if (v_isShared_2394_ == 0)
{
lean_ctor_set(v___x_2393_, 0, v___x_2487_);
v___x_2489_ = v___x_2393_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v___x_2487_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
}
else
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2499_; 
lean_dec_ref(v_e_2377_);
lean_dec_ref(v_c_2376_);
lean_dec_ref(v_k_2375_);
lean_dec(v_v_2374_);
lean_dec(v_u_2373_);
v_a_2492_ = lean_ctor_get(v___x_2390_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2494_ = v___x_2390_;
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___x_2390_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2497_; 
if (v_isShared_2495_ == 0)
{
v___x_2497_ = v___x_2494_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2492_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___boxed(lean_object** _args){
lean_object* v_u_2500_ = _args[0];
lean_object* v_v_2501_ = _args[1];
lean_object* v_k_2502_ = _args[2];
lean_object* v_c_2503_ = _args[3];
lean_object* v_e_2504_ = _args[4];
lean_object* v_a_2505_ = _args[5];
lean_object* v_a_2506_ = _args[6];
lean_object* v_a_2507_ = _args[7];
lean_object* v_a_2508_ = _args[8];
lean_object* v_a_2509_ = _args[9];
lean_object* v_a_2510_ = _args[10];
lean_object* v_a_2511_ = _args[11];
lean_object* v_a_2512_ = _args[12];
lean_object* v_a_2513_ = _args[13];
lean_object* v_a_2514_ = _args[14];
lean_object* v_a_2515_ = _args[15];
lean_object* v_a_2516_ = _args[16];
_start:
{
lean_object* v_res_2517_; 
v_res_2517_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse(v_u_2500_, v_v_2501_, v_k_2502_, v_c_2503_, v_e_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_, v_a_2509_, v_a_2510_, v_a_2511_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_);
lean_dec(v_a_2515_);
lean_dec_ref(v_a_2514_);
lean_dec(v_a_2513_);
lean_dec_ref(v_a_2512_);
lean_dec(v_a_2511_);
lean_dec_ref(v_a_2510_);
lean_dec(v_a_2509_);
lean_dec_ref(v_a_2508_);
lean_dec(v_a_2507_);
lean_dec(v_a_2506_);
lean_dec(v_a_2505_);
return v_res_2517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___lam__0(lean_object* v_f_2518_, lean_object* v_x_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_){
_start:
{
lean_object* v_fst_2532_; lean_object* v_snd_2533_; lean_object* v___x_2534_; 
v_fst_2532_ = lean_ctor_get(v_x_2519_, 0);
lean_inc(v_fst_2532_);
v_snd_2533_ = lean_ctor_get(v_x_2519_, 1);
lean_inc(v_snd_2533_);
lean_dec_ref(v_x_2519_);
lean_inc(v___y_2530_);
lean_inc_ref(v___y_2529_);
lean_inc(v___y_2528_);
lean_inc_ref(v___y_2527_);
lean_inc(v___y_2526_);
lean_inc_ref(v___y_2525_);
lean_inc(v___y_2524_);
lean_inc_ref(v___y_2523_);
lean_inc(v___y_2522_);
lean_inc(v___y_2521_);
lean_inc(v___y_2520_);
v___x_2534_ = lean_apply_14(v_f_2518_, v_fst_2532_, v_snd_2533_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, lean_box(0));
return v___x_2534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___lam__0___boxed(lean_object* v_f_2535_, lean_object* v_x_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___lam__0(v_f_2535_, v_x_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
lean_dec(v___y_2543_);
lean_dec_ref(v___y_2542_);
lean_dec(v___y_2541_);
lean_dec_ref(v___y_2540_);
lean_dec(v___y_2539_);
lean_dec(v___y_2538_);
lean_dec(v___y_2537_);
return v_res_2549_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__0(void){
_start:
{
lean_object* v___f_2550_; 
v___f_2550_ = lean_alloc_closure((void*)(l_UInt64_ofNat___boxed), 1, 0);
return v___f_2550_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__1(void){
_start:
{
lean_object* v___f_2551_; lean_object* v___f_2552_; 
v___f_2551_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__0);
v___f_2552_ = lean_alloc_closure((void*)(l_instHashableProd___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2552_, 0, v___f_2551_);
lean_closure_set(v___f_2552_, 1, v___f_2551_);
return v___f_2552_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__2(void){
_start:
{
lean_object* v___x_2553_; lean_object* v___f_2554_; 
v___x_2553_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___f_2554_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2554_, 0, v___x_2553_);
return v___f_2554_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__3(void){
_start:
{
lean_object* v___f_2555_; lean_object* v___f_2556_; 
v___f_2555_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__2);
v___f_2556_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2556_, 0, v___f_2555_);
lean_closure_set(v___f_2556_, 1, v___f_2555_);
return v___f_2556_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf(lean_object* v_u_2557_, lean_object* v_v_2558_, lean_object* v_f_2559_, lean_object* v_a_2560_, lean_object* v_a_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_){
_start:
{
lean_object* v___x_2572_; lean_object* v_toApplicative_2573_; lean_object* v_toFunctor_2574_; lean_object* v_toSeq_2575_; lean_object* v_toSeqLeft_2576_; lean_object* v_toSeqRight_2577_; lean_object* v___f_2578_; lean_object* v___f_2579_; lean_object* v___f_2580_; lean_object* v___f_2581_; lean_object* v___x_2582_; lean_object* v___f_2583_; lean_object* v___f_2584_; lean_object* v___f_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v_toApplicative_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2650_; 
v___x_2572_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1);
v_toApplicative_2573_ = lean_ctor_get(v___x_2572_, 0);
v_toFunctor_2574_ = lean_ctor_get(v_toApplicative_2573_, 0);
v_toSeq_2575_ = lean_ctor_get(v_toApplicative_2573_, 2);
v_toSeqLeft_2576_ = lean_ctor_get(v_toApplicative_2573_, 3);
v_toSeqRight_2577_ = lean_ctor_get(v_toApplicative_2573_, 4);
v___f_2578_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2);
v___f_2579_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3);
lean_inc_ref_n(v_toFunctor_2574_, 2);
v___f_2580_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2580_, 0, v_toFunctor_2574_);
v___f_2581_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2581_, 0, v_toFunctor_2574_);
v___x_2582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2582_, 0, v___f_2580_);
lean_ctor_set(v___x_2582_, 1, v___f_2581_);
lean_inc(v_toSeqRight_2577_);
v___f_2583_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2583_, 0, v_toSeqRight_2577_);
lean_inc(v_toSeqLeft_2576_);
v___f_2584_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2584_, 0, v_toSeqLeft_2576_);
lean_inc(v_toSeq_2575_);
v___f_2585_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2585_, 0, v_toSeq_2575_);
v___x_2586_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2586_, 0, v___x_2582_);
lean_ctor_set(v___x_2586_, 1, v___f_2578_);
lean_ctor_set(v___x_2586_, 2, v___f_2585_);
lean_ctor_set(v___x_2586_, 3, v___f_2584_);
lean_ctor_set(v___x_2586_, 4, v___f_2583_);
v___x_2587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2587_, 0, v___x_2586_);
lean_ctor_set(v___x_2587_, 1, v___f_2579_);
v___x_2588_ = l_StateRefT_x27_instMonad___redArg(v___x_2587_);
v_toApplicative_2589_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2650_ == 0)
{
lean_object* v_unused_2651_; 
v_unused_2651_ = lean_ctor_get(v___x_2588_, 1);
lean_dec(v_unused_2651_);
v___x_2591_ = v___x_2588_;
v_isShared_2592_ = v_isSharedCheck_2650_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_toApplicative_2589_);
lean_dec(v___x_2588_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2650_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v_toFunctor_2593_; lean_object* v_toSeq_2594_; lean_object* v_toSeqLeft_2595_; lean_object* v_toSeqRight_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2648_; 
v_toFunctor_2593_ = lean_ctor_get(v_toApplicative_2589_, 0);
v_toSeq_2594_ = lean_ctor_get(v_toApplicative_2589_, 2);
v_toSeqLeft_2595_ = lean_ctor_get(v_toApplicative_2589_, 3);
v_toSeqRight_2596_ = lean_ctor_get(v_toApplicative_2589_, 4);
v_isSharedCheck_2648_ = !lean_is_exclusive(v_toApplicative_2589_);
if (v_isSharedCheck_2648_ == 0)
{
lean_object* v_unused_2649_; 
v_unused_2649_ = lean_ctor_get(v_toApplicative_2589_, 1);
lean_dec(v_unused_2649_);
v___x_2598_ = v_toApplicative_2589_;
v_isShared_2599_ = v_isSharedCheck_2648_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_toSeqRight_2596_);
lean_inc(v_toSeqLeft_2595_);
lean_inc(v_toSeq_2594_);
lean_inc(v_toFunctor_2593_);
lean_dec(v_toApplicative_2589_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2648_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___f_2600_; lean_object* v___f_2601_; lean_object* v___f_2602_; lean_object* v___f_2603_; lean_object* v___x_2604_; lean_object* v___f_2605_; lean_object* v___f_2606_; lean_object* v___f_2607_; lean_object* v___x_2609_; 
v___f_2600_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4);
v___f_2601_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5);
lean_inc_ref(v_toFunctor_2593_);
v___f_2602_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2602_, 0, v_toFunctor_2593_);
v___f_2603_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2603_, 0, v_toFunctor_2593_);
v___x_2604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___f_2602_);
lean_ctor_set(v___x_2604_, 1, v___f_2603_);
v___f_2605_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2605_, 0, v_toSeqRight_2596_);
v___f_2606_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2606_, 0, v_toSeqLeft_2595_);
v___f_2607_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2607_, 0, v_toSeq_2594_);
if (v_isShared_2599_ == 0)
{
lean_ctor_set(v___x_2598_, 4, v___f_2605_);
lean_ctor_set(v___x_2598_, 3, v___f_2606_);
lean_ctor_set(v___x_2598_, 2, v___f_2607_);
lean_ctor_set(v___x_2598_, 1, v___f_2600_);
lean_ctor_set(v___x_2598_, 0, v___x_2604_);
v___x_2609_ = v___x_2598_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v___x_2604_);
lean_ctor_set(v_reuseFailAlloc_2647_, 1, v___f_2600_);
lean_ctor_set(v_reuseFailAlloc_2647_, 2, v___f_2607_);
lean_ctor_set(v_reuseFailAlloc_2647_, 3, v___f_2606_);
lean_ctor_set(v_reuseFailAlloc_2647_, 4, v___f_2605_);
v___x_2609_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
lean_object* v___x_2611_; 
if (v_isShared_2592_ == 0)
{
lean_ctor_set(v___x_2591_, 1, v___f_2601_);
lean_ctor_set(v___x_2591_, 0, v___x_2609_);
v___x_2611_ = v___x_2591_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v___x_2609_);
lean_ctor_set(v_reuseFailAlloc_2646_, 1, v___f_2601_);
v___x_2611_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___f_2619_; lean_object* v___x_2620_; 
v___x_2612_ = l_StateRefT_x27_instMonad___redArg(v___x_2611_);
v___x_2613_ = l_ReaderT_instMonad___redArg(v___x_2612_);
v___x_2614_ = l_StateRefT_x27_instMonad___redArg(v___x_2613_);
v___x_2615_ = l_ReaderT_instMonad___redArg(v___x_2614_);
v___x_2616_ = l_ReaderT_instMonad___redArg(v___x_2615_);
v___x_2617_ = l_StateRefT_x27_instMonad___redArg(v___x_2616_);
v___x_2618_ = l_ReaderT_instMonad___redArg(v___x_2617_);
v___f_2619_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__1);
v___x_2620_ = l_Lean_Meta_Grind_Order_getStruct(v_a_2560_, v_a_2561_, v_a_2562_, v_a_2563_, v_a_2564_, v_a_2565_, v_a_2566_, v_a_2567_, v_a_2568_, v_a_2569_, v_a_2570_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2637_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2623_ = v___x_2620_;
v_isShared_2624_ = v_isSharedCheck_2637_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___x_2620_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2637_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___f_2625_; lean_object* v_cnstrsOf_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___f_2625_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__3);
v_cnstrsOf_2626_ = lean_ctor_get(v_a_2621_, 17);
lean_inc_ref(v_cnstrsOf_2626_);
lean_dec(v_a_2621_);
v___x_2627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2627_, 0, v_u_2557_);
lean_ctor_set(v___x_2627_, 1, v_v_2558_);
v___x_2628_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_2625_, v___f_2619_, v_cnstrsOf_2626_, v___x_2627_);
lean_dec_ref(v_cnstrsOf_2626_);
if (lean_obj_tag(v___x_2628_) == 1)
{
lean_object* v_val_2629_; lean_object* v___f_2630_; lean_object* v___x_1496__overap_2631_; lean_object* v___x_2632_; 
lean_del_object(v___x_2623_);
v_val_2629_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_val_2629_);
lean_dec_ref(v___x_2628_);
v___f_2630_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___lam__0___boxed), 14, 1);
lean_closure_set(v___f_2630_, 0, v_f_2559_);
v___x_1496__overap_2631_ = l_List_forM___redArg(v___x_2618_, v_val_2629_, v___f_2630_);
lean_inc(v_a_2570_);
lean_inc_ref(v_a_2569_);
lean_inc(v_a_2568_);
lean_inc_ref(v_a_2567_);
lean_inc(v_a_2566_);
lean_inc_ref(v_a_2565_);
lean_inc(v_a_2564_);
lean_inc_ref(v_a_2563_);
lean_inc(v_a_2562_);
lean_inc(v_a_2561_);
lean_inc(v_a_2560_);
v___x_2632_ = lean_apply_12(v___x_1496__overap_2631_, v_a_2560_, v_a_2561_, v_a_2562_, v_a_2563_, v_a_2564_, v_a_2565_, v_a_2566_, v_a_2567_, v_a_2568_, v_a_2569_, v_a_2570_, lean_box(0));
return v___x_2632_;
}
else
{
lean_object* v___x_2633_; lean_object* v___x_2635_; 
lean_dec(v___x_2628_);
lean_dec_ref(v___x_2618_);
lean_dec_ref(v_f_2559_);
v___x_2633_ = lean_box(0);
if (v_isShared_2624_ == 0)
{
lean_ctor_set(v___x_2623_, 0, v___x_2633_);
v___x_2635_ = v___x_2623_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v___x_2633_);
v___x_2635_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
return v___x_2635_;
}
}
}
}
else
{
lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2645_; 
lean_dec_ref(v___x_2618_);
lean_dec_ref(v_f_2559_);
lean_dec(v_v_2558_);
lean_dec(v_u_2557_);
v_a_2638_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2640_ = v___x_2620_;
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_dec(v___x_2620_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2641_ == 0)
{
v___x_2643_ = v___x_2640_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_a_2638_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___boxed(lean_object* v_u_2652_, lean_object* v_v_2653_, lean_object* v_f_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_){
_start:
{
lean_object* v_res_2667_; 
v_res_2667_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf(v_u_2652_, v_v_2653_, v_f_2654_, v_a_2655_, v_a_2656_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_, v_a_2661_, v_a_2662_, v_a_2663_, v_a_2664_, v_a_2665_);
lean_dec(v_a_2665_);
lean_dec_ref(v_a_2664_);
lean_dec(v_a_2663_);
lean_dec_ref(v_a_2662_);
lean_dec(v_a_2661_);
lean_dec_ref(v_a_2660_);
lean_dec(v_a_2659_);
lean_dec_ref(v_a_2658_);
lean_dec(v_a_2657_);
lean_dec(v_a_2656_);
lean_dec(v_a_2655_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg(lean_object* v_e_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_){
_start:
{
lean_object* v___x_2673_; 
v___x_2673_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_2669_, v_a_2670_, v_a_2671_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2696_; 
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2676_ = v___x_2673_;
v_isShared_2677_ = v_isSharedCheck_2696_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___x_2673_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2696_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v_termMapInv_2678_; lean_object* v___x_2679_; 
v_termMapInv_2678_ = lean_ctor_get(v_a_2674_, 4);
lean_inc_ref(v_termMapInv_2678_);
lean_dec(v_a_2674_);
v___x_2679_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_2678_, v_e_2668_);
lean_dec_ref(v_termMapInv_2678_);
if (lean_obj_tag(v___x_2679_) == 1)
{
lean_object* v_val_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2691_; 
v_val_2680_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2682_ = v___x_2679_;
v_isShared_2683_ = v_isSharedCheck_2691_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_val_2680_);
lean_dec(v___x_2679_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2691_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v_fst_2684_; lean_object* v___x_2686_; 
v_fst_2684_ = lean_ctor_get(v_val_2680_, 0);
lean_inc(v_fst_2684_);
lean_dec(v_val_2680_);
if (v_isShared_2683_ == 0)
{
lean_ctor_set(v___x_2682_, 0, v_fst_2684_);
v___x_2686_ = v___x_2682_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v_fst_2684_);
v___x_2686_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
lean_object* v___x_2688_; 
if (v_isShared_2677_ == 0)
{
lean_ctor_set(v___x_2676_, 0, v___x_2686_);
v___x_2688_ = v___x_2676_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v___x_2686_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
else
{
lean_object* v___x_2692_; lean_object* v___x_2694_; 
lean_dec(v___x_2679_);
v___x_2692_ = lean_box(0);
if (v_isShared_2677_ == 0)
{
lean_ctor_set(v___x_2676_, 0, v___x_2692_);
v___x_2694_ = v___x_2676_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v___x_2692_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
}
else
{
lean_object* v_a_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2704_; 
v_a_2697_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2704_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2699_ = v___x_2673_;
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_a_2697_);
lean_dec(v___x_2673_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2702_; 
if (v_isShared_2700_ == 0)
{
v___x_2702_ = v___x_2699_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v_a_2697_);
v___x_2702_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
return v___x_2702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg___boxed(lean_object* v_e_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg(v_e_2705_, v_a_2706_, v_a_2707_, v_a_2708_);
lean_dec(v_a_2708_);
lean_dec_ref(v_a_2707_);
lean_dec(v_a_2706_);
lean_dec_ref(v_e_2705_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f(lean_object* v_e_2711_, lean_object* v_a_2712_, lean_object* v_a_2713_, lean_object* v_a_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_){
_start:
{
lean_object* v___x_2723_; 
v___x_2723_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg(v_e_2711_, v_a_2712_, v_a_2720_, v_a_2721_);
return v___x_2723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___boxed(lean_object* v_e_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_, lean_object* v_a_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_){
_start:
{
lean_object* v_res_2736_; 
v_res_2736_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f(v_e_2724_, v_a_2725_, v_a_2726_, v_a_2727_, v_a_2728_, v_a_2729_, v_a_2730_, v_a_2731_, v_a_2732_, v_a_2733_, v_a_2734_);
lean_dec(v_a_2734_);
lean_dec_ref(v_a_2733_);
lean_dec(v_a_2732_);
lean_dec_ref(v_a_2731_);
lean_dec(v_a_2730_);
lean_dec_ref(v_a_2729_);
lean_dec(v_a_2728_);
lean_dec_ref(v_a_2727_);
lean_dec(v_a_2726_);
lean_dec(v_a_2725_);
lean_dec_ref(v_e_2724_);
return v_res_2736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq(lean_object* v_u_2737_, lean_object* v_v_2738_, lean_object* v_k_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_, lean_object* v_a_2742_, lean_object* v_a_2743_, lean_object* v_a_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_){
_start:
{
lean_object* v___y_2753_; lean_object* v___y_2754_; lean_object* v___y_2755_; uint8_t v___x_2795_; 
v___x_2795_ = lean_nat_dec_eq(v_u_2737_, v_v_2738_);
if (v___x_2795_ == 0)
{
lean_object* v___x_2796_; 
v___x_2796_ = l_Lean_Meta_Grind_Order_isPartialOrder(v_a_2740_, v_a_2741_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_);
if (lean_obj_tag(v___x_2796_) == 0)
{
lean_object* v_a_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2933_; 
v_a_2797_ = lean_ctor_get(v___x_2796_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2796_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2799_ = v___x_2796_;
v_isShared_2800_ = v_isSharedCheck_2933_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_a_2797_);
lean_dec(v___x_2796_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2933_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
uint8_t v___x_2806_; 
v___x_2806_ = lean_unbox(v_a_2797_);
lean_dec(v_a_2797_);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
lean_del_object(v___x_2799_);
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v___x_2807_ = lean_box(0);
v___x_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2807_);
return v___x_2808_;
}
else
{
uint8_t v___x_2809_; 
v___x_2809_ = l_Lean_Meta_Grind_Order_Weight_isZero(v_k_2739_);
if (v___x_2809_ == 0)
{
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
goto v___jp_2801_;
}
else
{
if (v___x_2795_ == 0)
{
lean_object* v___x_2810_; 
lean_del_object(v___x_2799_);
v___x_2810_ = l_Lean_Meta_Grind_Order_getDist_x3f(v_v_2738_, v_u_2737_, v_a_2740_, v_a_2741_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_);
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_object* v_a_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2924_; 
v_a_2811_ = lean_ctor_get(v___x_2810_, 0);
v_isSharedCheck_2924_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2813_ = v___x_2810_;
v_isShared_2814_ = v_isSharedCheck_2924_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_a_2811_);
lean_dec(v___x_2810_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2924_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
if (lean_obj_tag(v_a_2811_) == 1)
{
lean_object* v_val_2815_; uint8_t v___x_2816_; 
v_val_2815_ = lean_ctor_get(v_a_2811_, 0);
lean_inc(v_val_2815_);
lean_dec_ref(v_a_2811_);
v___x_2816_ = l_Lean_Meta_Grind_Order_Weight_isZero(v_val_2815_);
lean_dec(v_val_2815_);
if (v___x_2816_ == 0)
{
lean_object* v___x_2817_; lean_object* v___x_2819_; 
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v___x_2817_ = lean_box(0);
if (v_isShared_2814_ == 0)
{
lean_ctor_set(v___x_2813_, 0, v___x_2817_);
v___x_2819_ = v___x_2813_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v___x_2817_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
else
{
lean_object* v___x_2821_; 
lean_del_object(v___x_2813_);
v___x_2821_ = l_Lean_Meta_Grind_Order_getExpr(v_u_2737_, v_a_2740_, v_a_2741_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; lean_object* v___x_2823_; 
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
lean_inc(v_a_2822_);
lean_dec_ref(v___x_2821_);
v___x_2823_ = l_Lean_Meta_Grind_Order_getExpr(v_v_2738_, v_a_2740_, v_a_2741_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_);
if (lean_obj_tag(v___x_2823_) == 0)
{
lean_object* v_a_2824_; lean_object* v___y_2826_; lean_object* v___x_2900_; 
v_a_2824_ = lean_ctor_get(v___x_2823_, 0);
lean_inc(v_a_2824_);
lean_dec_ref(v___x_2823_);
v___x_2900_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_a_2822_, v_a_2741_, v_a_2750_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; uint8_t v___x_2902_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_a_2901_);
v___x_2902_ = lean_unbox(v_a_2901_);
lean_dec(v_a_2901_);
if (v___x_2902_ == 0)
{
v___y_2826_ = v___x_2900_;
goto v___jp_2825_;
}
else
{
lean_object* v___x_2903_; 
lean_dec_ref(v___x_2900_);
v___x_2903_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_a_2824_, v_a_2741_, v_a_2750_);
v___y_2826_ = v___x_2903_;
goto v___jp_2825_;
}
}
else
{
v___y_2826_ = v___x_2900_;
goto v___jp_2825_;
}
v___jp_2825_:
{
if (lean_obj_tag(v___y_2826_) == 0)
{
lean_object* v_a_2827_; uint8_t v___x_2828_; 
v_a_2827_ = lean_ctor_get(v___y_2826_, 0);
lean_inc(v_a_2827_);
lean_dec_ref(v___y_2826_);
v___x_2828_ = lean_unbox(v_a_2827_);
lean_dec(v_a_2827_);
if (v___x_2828_ == 0)
{
lean_object* v___x_2829_; 
v___x_2829_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg(v_a_2822_, v_a_2741_, v_a_2749_, v_a_2750_);
lean_dec(v_a_2822_);
if (lean_obj_tag(v___x_2829_) == 0)
{
lean_object* v_a_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2862_; 
v_a_2830_ = lean_ctor_get(v___x_2829_, 0);
v_isSharedCheck_2862_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2862_ == 0)
{
v___x_2832_ = v___x_2829_;
v_isShared_2833_ = v_isSharedCheck_2862_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_a_2830_);
lean_dec(v___x_2829_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2862_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
if (lean_obj_tag(v_a_2830_) == 1)
{
lean_object* v_val_2834_; lean_object* v___x_2835_; 
lean_del_object(v___x_2832_);
v_val_2834_ = lean_ctor_get(v_a_2830_, 0);
lean_inc(v_val_2834_);
lean_dec_ref(v_a_2830_);
v___x_2835_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg(v_a_2824_, v_a_2741_, v_a_2749_, v_a_2750_);
lean_dec(v_a_2824_);
if (lean_obj_tag(v___x_2835_) == 0)
{
lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2849_; 
v_a_2836_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2849_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2849_ == 0)
{
v___x_2838_ = v___x_2835_;
v_isShared_2839_ = v_isSharedCheck_2849_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___x_2835_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2849_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
if (lean_obj_tag(v_a_2836_) == 1)
{
lean_object* v_val_2840_; lean_object* v___x_2841_; 
lean_del_object(v___x_2838_);
v_val_2840_ = lean_ctor_get(v_a_2836_, 0);
lean_inc(v_val_2840_);
lean_dec_ref(v_a_2836_);
v___x_2841_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_val_2834_, v_a_2741_, v_a_2750_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; uint8_t v___x_2843_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_a_2842_);
v___x_2843_ = lean_unbox(v_a_2842_);
lean_dec(v_a_2842_);
if (v___x_2843_ == 0)
{
v___y_2753_ = v_val_2834_;
v___y_2754_ = v_val_2840_;
v___y_2755_ = v___x_2841_;
goto v___jp_2752_;
}
else
{
lean_object* v___x_2844_; 
lean_dec_ref(v___x_2841_);
v___x_2844_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_val_2840_, v_a_2741_, v_a_2750_);
v___y_2753_ = v_val_2834_;
v___y_2754_ = v_val_2840_;
v___y_2755_ = v___x_2844_;
goto v___jp_2752_;
}
}
else
{
v___y_2753_ = v_val_2834_;
v___y_2754_ = v_val_2840_;
v___y_2755_ = v___x_2841_;
goto v___jp_2752_;
}
}
else
{
lean_object* v___x_2845_; lean_object* v___x_2847_; 
lean_dec(v_a_2836_);
lean_dec(v_val_2834_);
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v___x_2845_ = lean_box(0);
if (v_isShared_2839_ == 0)
{
lean_ctor_set(v___x_2838_, 0, v___x_2845_);
v___x_2847_ = v___x_2838_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2848_, 0, v___x_2845_);
v___x_2847_ = v_reuseFailAlloc_2848_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
return v___x_2847_;
}
}
}
}
else
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2857_; 
lean_dec(v_val_2834_);
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v_a_2850_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2852_ = v___x_2835_;
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v___x_2835_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_a_2850_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
else
{
lean_object* v___x_2858_; lean_object* v___x_2860_; 
lean_dec(v_a_2830_);
lean_dec(v_a_2824_);
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v___x_2858_ = lean_box(0);
if (v_isShared_2833_ == 0)
{
lean_ctor_set(v___x_2832_, 0, v___x_2858_);
v___x_2860_ = v___x_2832_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v___x_2858_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
}
}
else
{
lean_object* v_a_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2870_; 
lean_dec(v_a_2824_);
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v_a_2863_ = lean_ctor_get(v___x_2829_, 0);
v_isSharedCheck_2870_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2870_ == 0)
{
v___x_2865_ = v___x_2829_;
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_a_2863_);
lean_dec(v___x_2829_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2868_; 
if (v_isShared_2866_ == 0)
{
v___x_2868_ = v___x_2865_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v_a_2863_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
}
}
}
}
else
{
lean_object* v___x_2871_; 
v___x_2871_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_2822_, v_a_2824_, v_a_2741_, v_a_2750_);
lean_dec(v_a_2824_);
lean_dec(v_a_2822_);
if (lean_obj_tag(v___x_2871_) == 0)
{
lean_object* v_a_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2883_; 
v_a_2872_ = lean_ctor_get(v___x_2871_, 0);
v_isSharedCheck_2883_ = !lean_is_exclusive(v___x_2871_);
if (v_isSharedCheck_2883_ == 0)
{
v___x_2874_ = v___x_2871_;
v_isShared_2875_ = v_isSharedCheck_2883_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_a_2872_);
lean_dec(v___x_2871_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2883_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
uint8_t v___x_2876_; 
v___x_2876_ = lean_unbox(v_a_2872_);
lean_dec(v_a_2872_);
if (v___x_2876_ == 0)
{
lean_object* v___x_2877_; lean_object* v___x_2878_; 
lean_del_object(v___x_2874_);
v___x_2877_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2877_, 0, v_u_2737_);
lean_ctor_set(v___x_2877_, 1, v_v_2738_);
v___x_2878_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(v___x_2877_, v_a_2740_, v_a_2741_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_);
return v___x_2878_;
}
else
{
lean_object* v___x_2879_; lean_object* v___x_2881_; 
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v___x_2879_ = lean_box(0);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 0, v___x_2879_);
v___x_2881_ = v___x_2874_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v___x_2879_);
v___x_2881_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
return v___x_2881_;
}
}
}
}
else
{
lean_object* v_a_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2891_; 
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v_a_2884_ = lean_ctor_get(v___x_2871_, 0);
v_isSharedCheck_2891_ = !lean_is_exclusive(v___x_2871_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2886_ = v___x_2871_;
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_a_2884_);
lean_dec(v___x_2871_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v___x_2889_; 
if (v_isShared_2887_ == 0)
{
v___x_2889_ = v___x_2886_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v_a_2884_);
v___x_2889_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
return v___x_2889_;
}
}
}
}
}
else
{
lean_object* v_a_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2899_; 
lean_dec(v_a_2824_);
lean_dec(v_a_2822_);
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v_a_2892_ = lean_ctor_get(v___y_2826_, 0);
v_isSharedCheck_2899_ = !lean_is_exclusive(v___y_2826_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2894_ = v___y_2826_;
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_a_2892_);
lean_dec(v___y_2826_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v___x_2897_; 
if (v_isShared_2895_ == 0)
{
v___x_2897_ = v___x_2894_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_a_2892_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
}
}
else
{
lean_object* v_a_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2911_; 
lean_dec(v_a_2822_);
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v_a_2904_ = lean_ctor_get(v___x_2823_, 0);
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2823_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2906_ = v___x_2823_;
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_a_2904_);
lean_dec(v___x_2823_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2909_; 
if (v_isShared_2907_ == 0)
{
v___x_2909_ = v___x_2906_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_a_2904_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
}
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v_a_2912_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2821_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2821_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
}
else
{
lean_object* v___x_2920_; lean_object* v___x_2922_; 
lean_dec(v_a_2811_);
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v___x_2920_ = lean_box(0);
if (v_isShared_2814_ == 0)
{
lean_ctor_set(v___x_2813_, 0, v___x_2920_);
v___x_2922_ = v___x_2813_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v___x_2920_);
v___x_2922_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
return v___x_2922_;
}
}
}
}
else
{
lean_object* v_a_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2932_; 
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v_a_2925_ = lean_ctor_get(v___x_2810_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2927_ = v___x_2810_;
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_a_2925_);
lean_dec(v___x_2810_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2930_; 
if (v_isShared_2928_ == 0)
{
v___x_2930_ = v___x_2927_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_a_2925_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
}
}
else
{
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
goto v___jp_2801_;
}
}
}
v___jp_2801_:
{
lean_object* v___x_2802_; lean_object* v___x_2804_; 
v___x_2802_ = lean_box(0);
if (v_isShared_2800_ == 0)
{
lean_ctor_set(v___x_2799_, 0, v___x_2802_);
v___x_2804_ = v___x_2799_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v___x_2802_);
v___x_2804_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
return v___x_2804_;
}
}
}
}
else
{
lean_object* v_a_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2941_; 
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v_a_2934_ = lean_ctor_get(v___x_2796_, 0);
v_isSharedCheck_2941_ = !lean_is_exclusive(v___x_2796_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2936_ = v___x_2796_;
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_a_2934_);
lean_dec(v___x_2796_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2939_; 
if (v_isShared_2937_ == 0)
{
v___x_2939_ = v___x_2936_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_a_2934_);
v___x_2939_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
return v___x_2939_;
}
}
}
}
else
{
lean_object* v___x_2942_; lean_object* v___x_2943_; 
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v___x_2942_ = lean_box(0);
v___x_2943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2942_);
return v___x_2943_;
}
v___jp_2752_:
{
if (lean_obj_tag(v___y_2755_) == 0)
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2786_; 
v_a_2756_ = lean_ctor_get(v___y_2755_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___y_2755_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2758_ = v___y_2755_;
v_isShared_2759_ = v_isSharedCheck_2786_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v___y_2755_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2786_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
uint8_t v___x_2760_; 
v___x_2760_ = lean_unbox(v_a_2756_);
lean_dec(v_a_2756_);
if (v___x_2760_ == 0)
{
lean_object* v___x_2761_; lean_object* v___x_2763_; 
lean_dec_ref(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v___x_2761_ = lean_box(0);
if (v_isShared_2759_ == 0)
{
lean_ctor_set(v___x_2758_, 0, v___x_2761_);
v___x_2763_ = v___x_2758_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v___x_2761_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
return v___x_2763_;
}
}
else
{
lean_object* v___x_2765_; 
lean_del_object(v___x_2758_);
v___x_2765_ = l_Lean_Meta_Grind_isEqv___redArg(v___y_2753_, v___y_2754_, v_a_2741_, v_a_2750_);
lean_dec_ref(v___y_2754_);
lean_dec_ref(v___y_2753_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2777_; 
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2768_ = v___x_2765_;
v_isShared_2769_ = v_isSharedCheck_2777_;
goto v_resetjp_2767_;
}
else
{
lean_inc(v_a_2766_);
lean_dec(v___x_2765_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2777_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
uint8_t v___x_2770_; 
v___x_2770_ = lean_unbox(v_a_2766_);
lean_dec(v_a_2766_);
if (v___x_2770_ == 0)
{
lean_object* v___x_2771_; lean_object* v___x_2772_; 
lean_del_object(v___x_2768_);
v___x_2771_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2771_, 0, v_u_2737_);
lean_ctor_set(v___x_2771_, 1, v_v_2738_);
v___x_2772_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(v___x_2771_, v_a_2740_, v_a_2741_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_);
return v___x_2772_;
}
else
{
lean_object* v___x_2773_; lean_object* v___x_2775_; 
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v___x_2773_ = lean_box(0);
if (v_isShared_2769_ == 0)
{
lean_ctor_set(v___x_2768_, 0, v___x_2773_);
v___x_2775_ = v___x_2768_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v___x_2773_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
}
else
{
lean_object* v_a_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2785_; 
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v_a_2778_ = lean_ctor_get(v___x_2765_, 0);
v_isSharedCheck_2785_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2785_ == 0)
{
v___x_2780_ = v___x_2765_;
v_isShared_2781_ = v_isSharedCheck_2785_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_a_2778_);
lean_dec(v___x_2765_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2785_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2783_; 
if (v_isShared_2781_ == 0)
{
v___x_2783_ = v___x_2780_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v_a_2778_);
v___x_2783_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
return v___x_2783_;
}
}
}
}
}
}
else
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2794_; 
lean_dec_ref(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v_v_2738_);
lean_dec(v_u_2737_);
v_a_2787_ = lean_ctor_get(v___y_2755_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___y_2755_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2789_ = v___y_2755_;
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___y_2755_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2792_; 
if (v_isShared_2790_ == 0)
{
v___x_2792_ = v___x_2789_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_a_2787_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq___boxed(lean_object* v_u_2944_, lean_object* v_v_2945_, lean_object* v_k_2946_, lean_object* v_a_2947_, lean_object* v_a_2948_, lean_object* v_a_2949_, lean_object* v_a_2950_, lean_object* v_a_2951_, lean_object* v_a_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_){
_start:
{
lean_object* v_res_2959_; 
v_res_2959_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq(v_u_2944_, v_v_2945_, v_k_2946_, v_a_2947_, v_a_2948_, v_a_2949_, v_a_2950_, v_a_2951_, v_a_2952_, v_a_2953_, v_a_2954_, v_a_2955_, v_a_2956_, v_a_2957_);
lean_dec(v_a_2957_);
lean_dec_ref(v_a_2956_);
lean_dec(v_a_2955_);
lean_dec_ref(v_a_2954_);
lean_dec(v_a_2953_);
lean_dec_ref(v_a_2952_);
lean_dec(v_a_2951_);
lean_dec_ref(v_a_2950_);
lean_dec(v_a_2949_);
lean_dec(v_a_2948_);
lean_dec(v_a_2947_);
lean_dec_ref(v_k_2946_);
return v_res_2959_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__2(lean_object* v_u_2960_, lean_object* v_v_2961_, lean_object* v_k_2962_, lean_object* v_as_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_){
_start:
{
if (lean_obj_tag(v_as_2963_) == 0)
{
lean_object* v___x_2976_; lean_object* v___x_2977_; 
lean_dec_ref(v_k_2962_);
lean_dec(v_v_2961_);
lean_dec(v_u_2960_);
v___x_2976_ = lean_box(0);
v___x_2977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2976_);
return v___x_2977_;
}
else
{
lean_object* v_head_2978_; lean_object* v_tail_2979_; lean_object* v_fst_2980_; lean_object* v_snd_2981_; lean_object* v___x_2982_; 
v_head_2978_ = lean_ctor_get(v_as_2963_, 0);
lean_inc(v_head_2978_);
v_tail_2979_ = lean_ctor_get(v_as_2963_, 1);
lean_inc(v_tail_2979_);
lean_dec_ref(v_as_2963_);
v_fst_2980_ = lean_ctor_get(v_head_2978_, 0);
lean_inc(v_fst_2980_);
v_snd_2981_ = lean_ctor_get(v_head_2978_, 1);
lean_inc(v_snd_2981_);
lean_dec(v_head_2978_);
lean_inc_ref(v_k_2962_);
lean_inc(v_v_2961_);
lean_inc(v_u_2960_);
v___x_2982_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue(v_u_2960_, v_v_2961_, v_k_2962_, v_fst_2980_, v_snd_2981_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_dec_ref(v___x_2982_);
v_as_2963_ = v_tail_2979_;
goto _start;
}
else
{
lean_dec(v_tail_2979_);
lean_dec_ref(v_k_2962_);
lean_dec(v_v_2961_);
lean_dec(v_u_2960_);
return v___x_2982_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__2___boxed(lean_object* v_u_2984_, lean_object* v_v_2985_, lean_object* v_k_2986_, lean_object* v_as_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_){
_start:
{
lean_object* v_res_3000_; 
v_res_3000_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__2(v_u_2984_, v_v_2985_, v_k_2986_, v_as_2987_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_);
lean_dec(v___y_2998_);
lean_dec_ref(v___y_2997_);
lean_dec(v___y_2996_);
lean_dec_ref(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec(v___y_2992_);
lean_dec_ref(v___y_2991_);
lean_dec(v___y_2990_);
lean_dec(v___y_2989_);
lean_dec(v___y_2988_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__1(lean_object* v_u_3001_, lean_object* v_v_3002_, lean_object* v_k_3003_, lean_object* v_as_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_){
_start:
{
if (lean_obj_tag(v_as_3004_) == 0)
{
lean_object* v___x_3017_; lean_object* v___x_3018_; 
lean_dec_ref(v_k_3003_);
lean_dec(v_v_3002_);
lean_dec(v_u_3001_);
v___x_3017_ = lean_box(0);
v___x_3018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3018_, 0, v___x_3017_);
return v___x_3018_;
}
else
{
lean_object* v_head_3019_; lean_object* v_tail_3020_; lean_object* v_fst_3021_; lean_object* v_snd_3022_; lean_object* v___x_3023_; 
v_head_3019_ = lean_ctor_get(v_as_3004_, 0);
lean_inc(v_head_3019_);
v_tail_3020_ = lean_ctor_get(v_as_3004_, 1);
lean_inc(v_tail_3020_);
lean_dec_ref(v_as_3004_);
v_fst_3021_ = lean_ctor_get(v_head_3019_, 0);
lean_inc(v_fst_3021_);
v_snd_3022_ = lean_ctor_get(v_head_3019_, 1);
lean_inc(v_snd_3022_);
lean_dec(v_head_3019_);
lean_inc_ref(v_k_3003_);
lean_inc(v_v_3002_);
lean_inc(v_u_3001_);
v___x_3023_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse(v_u_3001_, v_v_3002_, v_k_3003_, v_fst_3021_, v_snd_3022_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_);
if (lean_obj_tag(v___x_3023_) == 0)
{
lean_dec_ref(v___x_3023_);
v_as_3004_ = v_tail_3020_;
goto _start;
}
else
{
lean_dec(v_tail_3020_);
lean_dec_ref(v_k_3003_);
lean_dec(v_v_3002_);
lean_dec(v_u_3001_);
return v___x_3023_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__1___boxed(lean_object* v_u_3025_, lean_object* v_v_3026_, lean_object* v_k_3027_, lean_object* v_as_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_){
_start:
{
lean_object* v_res_3041_; 
v_res_3041_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__1(v_u_3025_, v_v_3026_, v_k_3027_, v_as_3028_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_);
lean_dec(v___y_3039_);
lean_dec_ref(v___y_3038_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3035_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
lean_dec(v___y_3031_);
lean_dec(v___y_3030_);
lean_dec(v___y_3029_);
return v_res_3041_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_3042_, lean_object* v_vals_3043_, lean_object* v_i_3044_, lean_object* v_k_3045_){
_start:
{
uint8_t v___y_3047_; lean_object* v___x_3053_; uint8_t v___x_3054_; 
v___x_3053_ = lean_array_get_size(v_keys_3042_);
v___x_3054_ = lean_nat_dec_lt(v_i_3044_, v___x_3053_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3055_; 
lean_dec(v_i_3044_);
v___x_3055_ = lean_box(0);
return v___x_3055_;
}
else
{
lean_object* v_fst_3056_; lean_object* v_snd_3057_; lean_object* v_k_x27_3058_; lean_object* v_fst_3059_; lean_object* v_snd_3060_; uint8_t v___x_3061_; 
v_fst_3056_ = lean_ctor_get(v_k_3045_, 0);
v_snd_3057_ = lean_ctor_get(v_k_3045_, 1);
v_k_x27_3058_ = lean_array_fget_borrowed(v_keys_3042_, v_i_3044_);
v_fst_3059_ = lean_ctor_get(v_k_x27_3058_, 0);
v_snd_3060_ = lean_ctor_get(v_k_x27_3058_, 1);
v___x_3061_ = lean_nat_dec_eq(v_fst_3056_, v_fst_3059_);
if (v___x_3061_ == 0)
{
v___y_3047_ = v___x_3061_;
goto v___jp_3046_;
}
else
{
uint8_t v___x_3062_; 
v___x_3062_ = lean_nat_dec_eq(v_snd_3057_, v_snd_3060_);
v___y_3047_ = v___x_3062_;
goto v___jp_3046_;
}
}
v___jp_3046_:
{
if (v___y_3047_ == 0)
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3048_ = lean_unsigned_to_nat(1u);
v___x_3049_ = lean_nat_add(v_i_3044_, v___x_3048_);
lean_dec(v_i_3044_);
v_i_3044_ = v___x_3049_;
goto _start;
}
else
{
lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___x_3051_ = lean_array_fget_borrowed(v_vals_3043_, v_i_3044_);
lean_dec(v_i_3044_);
lean_inc(v___x_3051_);
v___x_3052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3051_);
return v___x_3052_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_3063_, lean_object* v_vals_3064_, lean_object* v_i_3065_, lean_object* v_k_3066_){
_start:
{
lean_object* v_res_3067_; 
v_res_3067_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg(v_keys_3063_, v_vals_3064_, v_i_3065_, v_k_3066_);
lean_dec_ref(v_k_3066_);
lean_dec_ref(v_vals_3064_);
lean_dec_ref(v_keys_3063_);
return v_res_3067_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg(lean_object* v_x_3068_, size_t v_x_3069_, lean_object* v_x_3070_){
_start:
{
if (lean_obj_tag(v_x_3068_) == 0)
{
lean_object* v_es_3071_; lean_object* v___x_3072_; size_t v___x_3073_; size_t v___x_3074_; size_t v___x_3075_; lean_object* v_j_3076_; lean_object* v___x_3077_; 
v_es_3071_ = lean_ctor_get(v_x_3068_, 0);
v___x_3072_ = lean_box(2);
v___x_3073_ = ((size_t)5ULL);
v___x_3074_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___closed__1);
v___x_3075_ = lean_usize_land(v_x_3069_, v___x_3074_);
v_j_3076_ = lean_usize_to_nat(v___x_3075_);
v___x_3077_ = lean_array_get_borrowed(v___x_3072_, v_es_3071_, v_j_3076_);
lean_dec(v_j_3076_);
switch(lean_obj_tag(v___x_3077_))
{
case 0:
{
lean_object* v_key_3078_; lean_object* v_val_3079_; uint8_t v___y_3081_; lean_object* v_fst_3084_; lean_object* v_snd_3085_; lean_object* v_fst_3086_; lean_object* v_snd_3087_; uint8_t v___x_3088_; 
v_key_3078_ = lean_ctor_get(v___x_3077_, 0);
v_val_3079_ = lean_ctor_get(v___x_3077_, 1);
v_fst_3084_ = lean_ctor_get(v_x_3070_, 0);
v_snd_3085_ = lean_ctor_get(v_x_3070_, 1);
v_fst_3086_ = lean_ctor_get(v_key_3078_, 0);
v_snd_3087_ = lean_ctor_get(v_key_3078_, 1);
v___x_3088_ = lean_nat_dec_eq(v_fst_3084_, v_fst_3086_);
if (v___x_3088_ == 0)
{
v___y_3081_ = v___x_3088_;
goto v___jp_3080_;
}
else
{
uint8_t v___x_3089_; 
v___x_3089_ = lean_nat_dec_eq(v_snd_3085_, v_snd_3087_);
v___y_3081_ = v___x_3089_;
goto v___jp_3080_;
}
v___jp_3080_:
{
if (v___y_3081_ == 0)
{
lean_object* v___x_3082_; 
v___x_3082_ = lean_box(0);
return v___x_3082_;
}
else
{
lean_object* v___x_3083_; 
lean_inc(v_val_3079_);
v___x_3083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3083_, 0, v_val_3079_);
return v___x_3083_;
}
}
}
case 1:
{
lean_object* v_node_3090_; size_t v___x_3091_; 
v_node_3090_ = lean_ctor_get(v___x_3077_, 0);
v___x_3091_ = lean_usize_shift_right(v_x_3069_, v___x_3073_);
v_x_3068_ = v_node_3090_;
v_x_3069_ = v___x_3091_;
goto _start;
}
default: 
{
lean_object* v___x_3093_; 
v___x_3093_ = lean_box(0);
return v___x_3093_;
}
}
}
else
{
lean_object* v_ks_3094_; lean_object* v_vs_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
v_ks_3094_ = lean_ctor_get(v_x_3068_, 0);
v_vs_3095_ = lean_ctor_get(v_x_3068_, 1);
v___x_3096_ = lean_unsigned_to_nat(0u);
v___x_3097_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg(v_ks_3094_, v_vs_3095_, v___x_3096_, v_x_3070_);
return v___x_3097_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg___boxed(lean_object* v_x_3098_, lean_object* v_x_3099_, lean_object* v_x_3100_){
_start:
{
size_t v_x_4066__boxed_3101_; lean_object* v_res_3102_; 
v_x_4066__boxed_3101_ = lean_unbox_usize(v_x_3099_);
lean_dec(v_x_3099_);
v_res_3102_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg(v_x_3098_, v_x_4066__boxed_3101_, v_x_3100_);
lean_dec_ref(v_x_3100_);
lean_dec_ref(v_x_3098_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg(lean_object* v_x_3103_, lean_object* v_x_3104_){
_start:
{
lean_object* v_fst_3105_; lean_object* v_snd_3106_; uint64_t v___x_3107_; uint64_t v___x_3108_; uint64_t v___x_3109_; size_t v___x_3110_; lean_object* v___x_3111_; 
v_fst_3105_ = lean_ctor_get(v_x_3104_, 0);
v_snd_3106_ = lean_ctor_get(v_x_3104_, 1);
v___x_3107_ = lean_uint64_of_nat(v_fst_3105_);
v___x_3108_ = lean_uint64_of_nat(v_snd_3106_);
v___x_3109_ = lean_uint64_mix_hash(v___x_3107_, v___x_3108_);
v___x_3110_ = lean_uint64_to_usize(v___x_3109_);
v___x_3111_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg(v_x_3103_, v___x_3110_, v_x_3104_);
return v___x_3111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg___boxed(lean_object* v_x_3112_, lean_object* v_x_3113_){
_start:
{
lean_object* v_res_3114_; 
v_res_3114_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg(v_x_3112_, v_x_3113_);
lean_dec_ref(v_x_3113_);
lean_dec_ref(v_x_3112_);
return v_res_3114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate(lean_object* v_u_3115_, lean_object* v_v_3116_, lean_object* v_k_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_, lean_object* v_a_3128_){
_start:
{
lean_object* v___x_3148_; 
v___x_3148_ = l_Lean_Meta_Grind_Order_getStruct(v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_);
if (lean_obj_tag(v___x_3148_) == 0)
{
lean_object* v_a_3149_; lean_object* v_cnstrsOf_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; 
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
lean_inc(v_a_3149_);
lean_dec_ref(v___x_3148_);
v_cnstrsOf_3150_ = lean_ctor_get(v_a_3149_, 17);
lean_inc_ref(v_cnstrsOf_3150_);
lean_dec(v_a_3149_);
lean_inc(v_v_3116_);
lean_inc(v_u_3115_);
v___x_3151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3151_, 0, v_u_3115_);
lean_ctor_set(v___x_3151_, 1, v_v_3116_);
v___x_3152_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg(v_cnstrsOf_3150_, v___x_3151_);
lean_dec_ref(v___x_3151_);
lean_dec_ref(v_cnstrsOf_3150_);
if (lean_obj_tag(v___x_3152_) == 1)
{
lean_object* v_val_3153_; lean_object* v___x_3154_; 
v_val_3153_ = lean_ctor_get(v___x_3152_, 0);
lean_inc(v_val_3153_);
lean_dec_ref(v___x_3152_);
lean_inc_ref(v_k_3117_);
lean_inc(v_v_3116_);
lean_inc(v_u_3115_);
v___x_3154_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__2(v_u_3115_, v_v_3116_, v_k_3117_, v_val_3153_, v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_);
if (lean_obj_tag(v___x_3154_) == 0)
{
lean_dec_ref(v___x_3154_);
goto v___jp_3130_;
}
else
{
lean_dec_ref(v_k_3117_);
lean_dec(v_v_3116_);
lean_dec(v_u_3115_);
return v___x_3154_;
}
}
else
{
lean_dec(v___x_3152_);
goto v___jp_3130_;
}
}
else
{
lean_object* v_a_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3162_; 
lean_dec_ref(v_k_3117_);
lean_dec(v_v_3116_);
lean_dec(v_u_3115_);
v_a_3155_ = lean_ctor_get(v___x_3148_, 0);
v_isSharedCheck_3162_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3162_ == 0)
{
v___x_3157_ = v___x_3148_;
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_a_3155_);
lean_dec(v___x_3148_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v___x_3160_; 
if (v_isShared_3158_ == 0)
{
v___x_3160_ = v___x_3157_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v_a_3155_);
v___x_3160_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
return v___x_3160_;
}
}
}
v___jp_3130_:
{
lean_object* v___x_3131_; 
v___x_3131_ = l_Lean_Meta_Grind_Order_getStruct(v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_);
if (lean_obj_tag(v___x_3131_) == 0)
{
lean_object* v_a_3132_; lean_object* v_cnstrsOf_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v_a_3132_ = lean_ctor_get(v___x_3131_, 0);
lean_inc(v_a_3132_);
lean_dec_ref(v___x_3131_);
v_cnstrsOf_3133_ = lean_ctor_get(v_a_3132_, 17);
lean_inc_ref(v_cnstrsOf_3133_);
lean_dec(v_a_3132_);
lean_inc(v_u_3115_);
lean_inc(v_v_3116_);
v___x_3134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3134_, 0, v_v_3116_);
lean_ctor_set(v___x_3134_, 1, v_u_3115_);
v___x_3135_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg(v_cnstrsOf_3133_, v___x_3134_);
lean_dec_ref(v___x_3134_);
lean_dec_ref(v_cnstrsOf_3133_);
if (lean_obj_tag(v___x_3135_) == 1)
{
lean_object* v_val_3136_; lean_object* v___x_3137_; 
v_val_3136_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_val_3136_);
lean_dec_ref(v___x_3135_);
lean_inc_ref(v_k_3117_);
lean_inc(v_v_3116_);
lean_inc(v_u_3115_);
v___x_3137_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__1(v_u_3115_, v_v_3116_, v_k_3117_, v_val_3136_, v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v___x_3138_; 
lean_dec_ref(v___x_3137_);
v___x_3138_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq(v_u_3115_, v_v_3116_, v_k_3117_, v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_);
lean_dec_ref(v_k_3117_);
return v___x_3138_;
}
else
{
lean_dec_ref(v_k_3117_);
lean_dec(v_v_3116_);
lean_dec(v_u_3115_);
return v___x_3137_;
}
}
else
{
lean_object* v___x_3139_; 
lean_dec(v___x_3135_);
v___x_3139_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq(v_u_3115_, v_v_3116_, v_k_3117_, v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_);
lean_dec_ref(v_k_3117_);
return v___x_3139_;
}
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3147_; 
lean_dec_ref(v_k_3117_);
lean_dec(v_v_3116_);
lean_dec(v_u_3115_);
v_a_3140_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3142_ = v___x_3131_;
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3131_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3145_; 
if (v_isShared_3143_ == 0)
{
v___x_3145_ = v___x_3142_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3140_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
return v___x_3145_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate___boxed(lean_object* v_u_3163_, lean_object* v_v_3164_, lean_object* v_k_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_, lean_object* v_a_3170_, lean_object* v_a_3171_, lean_object* v_a_3172_, lean_object* v_a_3173_, lean_object* v_a_3174_, lean_object* v_a_3175_, lean_object* v_a_3176_, lean_object* v_a_3177_){
_start:
{
lean_object* v_res_3178_; 
v_res_3178_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate(v_u_3163_, v_v_3164_, v_k_3165_, v_a_3166_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_, v_a_3171_, v_a_3172_, v_a_3173_, v_a_3174_, v_a_3175_, v_a_3176_);
lean_dec(v_a_3176_);
lean_dec_ref(v_a_3175_);
lean_dec(v_a_3174_);
lean_dec_ref(v_a_3173_);
lean_dec(v_a_3172_);
lean_dec_ref(v_a_3171_);
lean_dec(v_a_3170_);
lean_dec_ref(v_a_3169_);
lean_dec(v_a_3168_);
lean_dec(v_a_3167_);
lean_dec(v_a_3166_);
return v_res_3178_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0(lean_object* v_00_u03b2_3179_, lean_object* v_x_3180_, lean_object* v_x_3181_){
_start:
{
lean_object* v___x_3182_; 
v___x_3182_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg(v_x_3180_, v_x_3181_);
return v___x_3182_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___boxed(lean_object* v_00_u03b2_3183_, lean_object* v_x_3184_, lean_object* v_x_3185_){
_start:
{
lean_object* v_res_3186_; 
v_res_3186_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0(v_00_u03b2_3183_, v_x_3184_, v_x_3185_);
lean_dec_ref(v_x_3185_);
lean_dec_ref(v_x_3184_);
return v_res_3186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0(lean_object* v_00_u03b2_3187_, lean_object* v_x_3188_, size_t v_x_3189_, lean_object* v_x_3190_){
_start:
{
lean_object* v___x_3191_; 
v___x_3191_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg(v_x_3188_, v_x_3189_, v_x_3190_);
return v___x_3191_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3192_, lean_object* v_x_3193_, lean_object* v_x_3194_, lean_object* v_x_3195_){
_start:
{
size_t v_x_4226__boxed_3196_; lean_object* v_res_3197_; 
v_x_4226__boxed_3196_ = lean_unbox_usize(v_x_3194_);
lean_dec(v_x_3194_);
v_res_3197_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0(v_00_u03b2_3192_, v_x_3193_, v_x_4226__boxed_3196_, v_x_3195_);
lean_dec_ref(v_x_3195_);
lean_dec_ref(v_x_3193_);
return v_res_3197_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3198_, lean_object* v_keys_3199_, lean_object* v_vals_3200_, lean_object* v_heq_3201_, lean_object* v_i_3202_, lean_object* v_k_3203_){
_start:
{
lean_object* v___x_3204_; 
v___x_3204_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg(v_keys_3199_, v_vals_3200_, v_i_3202_, v_k_3203_);
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3205_, lean_object* v_keys_3206_, lean_object* v_vals_3207_, lean_object* v_heq_3208_, lean_object* v_i_3209_, lean_object* v_k_3210_){
_start:
{
lean_object* v_res_3211_; 
v_res_3211_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1(v_00_u03b2_3205_, v_keys_3206_, v_vals_3207_, v_heq_3208_, v_i_3209_, v_k_3210_);
lean_dec_ref(v_k_3210_);
lean_dec_ref(v_vals_3207_);
lean_dec_ref(v_keys_3206_);
return v_res_3211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter(lean_object* v_u_3212_, lean_object* v_v_3213_, lean_object* v_k_3214_, lean_object* v_w_3215_, lean_object* v_a_3216_, lean_object* v_a_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_){
_start:
{
lean_object* v___x_3228_; 
v___x_3228_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter(v_u_3212_, v_v_3213_, v_k_3214_, v_a_3216_, v_a_3217_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_);
if (lean_obj_tag(v___x_3228_) == 0)
{
lean_object* v_a_3229_; lean_object* v___x_3231_; uint8_t v_isShared_3232_; uint8_t v_isSharedCheck_3251_; 
v_a_3229_ = lean_ctor_get(v___x_3228_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3228_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3231_ = v___x_3228_;
v_isShared_3232_ = v_isSharedCheck_3251_;
goto v_resetjp_3230_;
}
else
{
lean_inc(v_a_3229_);
lean_dec(v___x_3228_);
v___x_3231_ = lean_box(0);
v_isShared_3232_ = v_isSharedCheck_3251_;
goto v_resetjp_3230_;
}
v_resetjp_3230_:
{
uint8_t v___x_3233_; 
v___x_3233_ = lean_unbox(v_a_3229_);
lean_dec(v_a_3229_);
if (v___x_3233_ == 0)
{
lean_object* v___x_3234_; lean_object* v___x_3236_; 
lean_dec_ref(v_k_3214_);
lean_dec(v_v_3213_);
lean_dec(v_u_3212_);
v___x_3234_ = lean_box(0);
if (v_isShared_3232_ == 0)
{
lean_ctor_set(v___x_3231_, 0, v___x_3234_);
v___x_3236_ = v___x_3231_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v___x_3234_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
return v___x_3236_;
}
}
else
{
lean_object* v___x_3238_; 
lean_del_object(v___x_3231_);
lean_inc_ref(v_k_3214_);
lean_inc(v_v_3213_);
lean_inc(v_u_3212_);
v___x_3238_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg(v_u_3212_, v_v_3213_, v_k_3214_, v_a_3216_, v_a_3217_, v_a_3226_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_object* v___x_3239_; 
lean_dec_ref(v___x_3238_);
v___x_3239_ = l_Lean_Meta_Grind_Order_getProof(v_w_3215_, v_v_3213_, v_a_3216_, v_a_3217_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_a_3240_; lean_object* v___x_3241_; 
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3240_);
lean_dec_ref(v___x_3239_);
lean_inc(v_v_3213_);
lean_inc(v_u_3212_);
v___x_3241_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg(v_u_3212_, v_v_3213_, v_a_3240_, v_a_3216_, v_a_3217_, v_a_3226_);
if (lean_obj_tag(v___x_3241_) == 0)
{
lean_object* v___x_3242_; 
lean_dec_ref(v___x_3241_);
v___x_3242_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate(v_u_3212_, v_v_3213_, v_k_3214_, v_a_3216_, v_a_3217_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_);
return v___x_3242_;
}
else
{
lean_dec_ref(v_k_3214_);
lean_dec(v_v_3213_);
lean_dec(v_u_3212_);
return v___x_3241_;
}
}
else
{
lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3250_; 
lean_dec_ref(v_k_3214_);
lean_dec(v_v_3213_);
lean_dec(v_u_3212_);
v_a_3243_ = lean_ctor_get(v___x_3239_, 0);
v_isSharedCheck_3250_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3250_ == 0)
{
v___x_3245_ = v___x_3239_;
v_isShared_3246_ = v_isSharedCheck_3250_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3239_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3250_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3248_; 
if (v_isShared_3246_ == 0)
{
v___x_3248_ = v___x_3245_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v_a_3243_);
v___x_3248_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
return v___x_3248_;
}
}
}
}
else
{
lean_dec_ref(v_k_3214_);
lean_dec(v_v_3213_);
lean_dec(v_u_3212_);
return v___x_3238_;
}
}
}
}
else
{
lean_object* v_a_3252_; lean_object* v___x_3254_; uint8_t v_isShared_3255_; uint8_t v_isSharedCheck_3259_; 
lean_dec_ref(v_k_3214_);
lean_dec(v_v_3213_);
lean_dec(v_u_3212_);
v_a_3252_ = lean_ctor_get(v___x_3228_, 0);
v_isSharedCheck_3259_ = !lean_is_exclusive(v___x_3228_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3254_ = v___x_3228_;
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
else
{
lean_inc(v_a_3252_);
lean_dec(v___x_3228_);
v___x_3254_ = lean_box(0);
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
v_resetjp_3253_:
{
lean_object* v___x_3257_; 
if (v_isShared_3255_ == 0)
{
v___x_3257_ = v___x_3254_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v_a_3252_);
v___x_3257_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
return v___x_3257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter___boxed(lean_object* v_u_3260_, lean_object* v_v_3261_, lean_object* v_k_3262_, lean_object* v_w_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_, lean_object* v_a_3267_, lean_object* v_a_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_){
_start:
{
lean_object* v_res_3276_; 
v_res_3276_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter(v_u_3260_, v_v_3261_, v_k_3262_, v_w_3263_, v_a_3264_, v_a_3265_, v_a_3266_, v_a_3267_, v_a_3268_, v_a_3269_, v_a_3270_, v_a_3271_, v_a_3272_, v_a_3273_, v_a_3274_);
lean_dec(v_a_3274_);
lean_dec_ref(v_a_3273_);
lean_dec(v_a_3272_);
lean_dec_ref(v_a_3271_);
lean_dec(v_a_3270_);
lean_dec_ref(v_a_3269_);
lean_dec(v_a_3268_);
lean_dec_ref(v_a_3267_);
lean_dec(v_a_3266_);
lean_dec(v_a_3265_);
lean_dec(v_a_3264_);
lean_dec(v_w_3263_);
return v_res_3276_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(lean_object* v___x_3277_, lean_object* v_i_3278_, lean_object* v_v_3279_, lean_object* v_x_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_){
_start:
{
if (lean_obj_tag(v_x_3280_) == 0)
{
lean_object* v___x_3293_; lean_object* v___x_3294_; 
lean_dec(v_i_3278_);
v___x_3293_ = lean_box(0);
v___x_3294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3293_);
return v___x_3294_;
}
else
{
lean_object* v_key_3295_; lean_object* v_value_3296_; lean_object* v_tail_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; 
v_key_3295_ = lean_ctor_get(v_x_3280_, 0);
lean_inc(v_key_3295_);
v_value_3296_ = lean_ctor_get(v_x_3280_, 1);
lean_inc(v_value_3296_);
v_tail_3297_ = lean_ctor_get(v_x_3280_, 2);
lean_inc(v_tail_3297_);
lean_dec_ref(v_x_3280_);
v___x_3298_ = l_Lean_Meta_Grind_Order_Weight_add(v___x_3277_, v_value_3296_);
lean_inc(v_i_3278_);
v___x_3299_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter(v_i_3278_, v_key_3295_, v___x_3298_, v_v_3279_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_);
if (lean_obj_tag(v___x_3299_) == 0)
{
lean_dec_ref(v___x_3299_);
v_x_3280_ = v_tail_3297_;
goto _start;
}
else
{
lean_dec(v_tail_3297_);
lean_dec(v_i_3278_);
return v___x_3299_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0___boxed(lean_object* v___x_3301_, lean_object* v_i_3302_, lean_object* v_v_3303_, lean_object* v_x_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_){
_start:
{
lean_object* v_res_3317_; 
v_res_3317_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(v___x_3301_, v_i_3302_, v_v_3303_, v_x_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_);
lean_dec(v___y_3315_);
lean_dec_ref(v___y_3314_);
lean_dec(v___y_3313_);
lean_dec_ref(v___y_3312_);
lean_dec(v___y_3311_);
lean_dec_ref(v___y_3310_);
lean_dec(v___y_3309_);
lean_dec_ref(v___y_3308_);
lean_dec(v___y_3307_);
lean_dec(v___y_3306_);
lean_dec(v___y_3305_);
lean_dec(v_v_3303_);
lean_dec_ref(v___x_3301_);
return v_res_3317_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1(lean_object* v_k_3318_, lean_object* v_v_3319_, lean_object* v_u_3320_, lean_object* v_x_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
if (lean_obj_tag(v_x_3321_) == 0)
{
lean_object* v___x_3334_; lean_object* v___x_3335_; 
lean_dec(v_v_3319_);
lean_dec_ref(v_k_3318_);
v___x_3334_ = lean_box(0);
v___x_3335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3335_, 0, v___x_3334_);
return v___x_3335_;
}
else
{
lean_object* v_key_3336_; lean_object* v_value_3337_; lean_object* v_tail_3338_; lean_object* v___y_3340_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v_key_3336_ = lean_ctor_get(v_x_3321_, 0);
lean_inc_n(v_key_3336_, 2);
v_value_3337_ = lean_ctor_get(v_x_3321_, 1);
lean_inc(v_value_3337_);
v_tail_3338_ = lean_ctor_get(v_x_3321_, 2);
lean_inc(v_tail_3338_);
lean_dec_ref(v_x_3321_);
lean_inc_ref(v_k_3318_);
v___x_3342_ = l_Lean_Meta_Grind_Order_Weight_add(v_value_3337_, v_k_3318_);
lean_dec(v_value_3337_);
lean_inc_ref(v___x_3342_);
lean_inc(v_v_3319_);
v___x_3343_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter(v_key_3336_, v_v_3319_, v___x_3342_, v_u_3320_, v___y_3322_, v___y_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_);
if (lean_obj_tag(v___x_3343_) == 0)
{
lean_object* v___x_3344_; 
lean_dec_ref(v___x_3343_);
v___x_3344_ = l_Lean_Meta_Grind_Order_getStruct(v___y_3322_, v___y_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v_a_3345_; lean_object* v_targets_3346_; lean_object* v_size_3347_; lean_object* v___x_3348_; uint8_t v___x_3349_; 
v_a_3345_ = lean_ctor_get(v___x_3344_, 0);
lean_inc(v_a_3345_);
lean_dec_ref(v___x_3344_);
v_targets_3346_ = lean_ctor_get(v_a_3345_, 19);
lean_inc_ref(v_targets_3346_);
lean_dec(v_a_3345_);
v_size_3347_ = lean_ctor_get(v_targets_3346_, 2);
v___x_3348_ = lean_box(0);
v___x_3349_ = lean_nat_dec_lt(v_v_3319_, v_size_3347_);
if (v___x_3349_ == 0)
{
lean_object* v___x_3350_; lean_object* v___x_3351_; 
lean_dec_ref(v_targets_3346_);
v___x_3350_ = l_outOfBounds___redArg(v___x_3348_);
v___x_3351_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(v___x_3342_, v_key_3336_, v_v_3319_, v___x_3350_, v___y_3322_, v___y_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_);
lean_dec_ref(v___x_3342_);
v___y_3340_ = v___x_3351_;
goto v___jp_3339_;
}
else
{
lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3352_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3348_, v_targets_3346_, v_v_3319_);
lean_dec_ref(v_targets_3346_);
v___x_3353_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(v___x_3342_, v_key_3336_, v_v_3319_, v___x_3352_, v___y_3322_, v___y_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_);
lean_dec_ref(v___x_3342_);
v___y_3340_ = v___x_3353_;
goto v___jp_3339_;
}
}
else
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3361_; 
lean_dec_ref(v___x_3342_);
lean_dec(v_tail_3338_);
lean_dec(v_key_3336_);
lean_dec(v_v_3319_);
lean_dec_ref(v_k_3318_);
v_a_3354_ = lean_ctor_get(v___x_3344_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3344_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3356_ = v___x_3344_;
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3344_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3359_; 
if (v_isShared_3357_ == 0)
{
v___x_3359_ = v___x_3356_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_a_3354_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
return v___x_3359_;
}
}
}
}
else
{
lean_dec_ref(v___x_3342_);
lean_dec(v_key_3336_);
v___y_3340_ = v___x_3343_;
goto v___jp_3339_;
}
v___jp_3339_:
{
if (lean_obj_tag(v___y_3340_) == 0)
{
lean_dec_ref(v___y_3340_);
v_x_3321_ = v_tail_3338_;
goto _start;
}
else
{
lean_dec(v_tail_3338_);
lean_dec(v_v_3319_);
lean_dec_ref(v_k_3318_);
return v___y_3340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1___boxed(lean_object* v_k_3362_, lean_object* v_v_3363_, lean_object* v_u_3364_, lean_object* v_x_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_){
_start:
{
lean_object* v_res_3378_; 
v_res_3378_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1(v_k_3362_, v_v_3363_, v_u_3364_, v_x_3365_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_);
lean_dec(v___y_3376_);
lean_dec_ref(v___y_3375_);
lean_dec(v___y_3374_);
lean_dec_ref(v___y_3373_);
lean_dec(v___y_3372_);
lean_dec_ref(v___y_3371_);
lean_dec(v___y_3370_);
lean_dec_ref(v___y_3369_);
lean_dec(v___y_3368_);
lean_dec(v___y_3367_);
lean_dec(v___y_3366_);
lean_dec(v_u_3364_);
return v_res_3378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update(lean_object* v_u_3379_, lean_object* v_v_3380_, lean_object* v_k_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_, lean_object* v_a_3384_, lean_object* v_a_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_, lean_object* v_a_3392_){
_start:
{
lean_object* v___y_3395_; lean_object* v___x_3414_; 
v___x_3414_ = l_Lean_Meta_Grind_Order_getStruct(v_a_3382_, v_a_3383_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_object* v_a_3415_; lean_object* v_targets_3416_; lean_object* v_size_3417_; lean_object* v___x_3418_; uint8_t v___x_3419_; 
v_a_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3415_);
lean_dec_ref(v___x_3414_);
v_targets_3416_ = lean_ctor_get(v_a_3415_, 19);
lean_inc_ref(v_targets_3416_);
lean_dec(v_a_3415_);
v_size_3417_ = lean_ctor_get(v_targets_3416_, 2);
v___x_3418_ = lean_box(0);
v___x_3419_ = lean_nat_dec_lt(v_v_3380_, v_size_3417_);
if (v___x_3419_ == 0)
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
lean_dec_ref(v_targets_3416_);
v___x_3420_ = l_outOfBounds___redArg(v___x_3418_);
lean_inc(v_u_3379_);
v___x_3421_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(v_k_3381_, v_u_3379_, v_v_3380_, v___x_3420_, v_a_3382_, v_a_3383_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
v___y_3395_ = v___x_3421_;
goto v___jp_3394_;
}
else
{
lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3422_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3418_, v_targets_3416_, v_v_3380_);
lean_dec_ref(v_targets_3416_);
lean_inc(v_u_3379_);
v___x_3423_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(v_k_3381_, v_u_3379_, v_v_3380_, v___x_3422_, v_a_3382_, v_a_3383_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
v___y_3395_ = v___x_3423_;
goto v___jp_3394_;
}
}
else
{
lean_object* v_a_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3431_; 
lean_dec_ref(v_k_3381_);
lean_dec(v_v_3380_);
lean_dec(v_u_3379_);
v_a_3424_ = lean_ctor_get(v___x_3414_, 0);
v_isSharedCheck_3431_ = !lean_is_exclusive(v___x_3414_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3426_ = v___x_3414_;
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_a_3424_);
lean_dec(v___x_3414_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v___x_3429_; 
if (v_isShared_3427_ == 0)
{
v___x_3429_ = v___x_3426_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3430_, 0, v_a_3424_);
v___x_3429_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
return v___x_3429_;
}
}
}
v___jp_3394_:
{
if (lean_obj_tag(v___y_3395_) == 0)
{
lean_object* v___x_3396_; 
lean_dec_ref(v___y_3395_);
v___x_3396_ = l_Lean_Meta_Grind_Order_getStruct(v_a_3382_, v_a_3383_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
if (lean_obj_tag(v___x_3396_) == 0)
{
lean_object* v_a_3397_; lean_object* v_sources_3398_; lean_object* v_size_3399_; lean_object* v___x_3400_; uint8_t v___x_3401_; 
v_a_3397_ = lean_ctor_get(v___x_3396_, 0);
lean_inc(v_a_3397_);
lean_dec_ref(v___x_3396_);
v_sources_3398_ = lean_ctor_get(v_a_3397_, 18);
lean_inc_ref(v_sources_3398_);
lean_dec(v_a_3397_);
v_size_3399_ = lean_ctor_get(v_sources_3398_, 2);
v___x_3400_ = lean_box(0);
v___x_3401_ = lean_nat_dec_lt(v_u_3379_, v_size_3399_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3402_; lean_object* v___x_3403_; 
lean_dec_ref(v_sources_3398_);
v___x_3402_ = l_outOfBounds___redArg(v___x_3400_);
v___x_3403_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1(v_k_3381_, v_v_3380_, v_u_3379_, v___x_3402_, v_a_3382_, v_a_3383_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
lean_dec(v_u_3379_);
return v___x_3403_;
}
else
{
lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3404_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3400_, v_sources_3398_, v_u_3379_);
lean_dec_ref(v_sources_3398_);
v___x_3405_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1(v_k_3381_, v_v_3380_, v_u_3379_, v___x_3404_, v_a_3382_, v_a_3383_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_);
lean_dec(v_u_3379_);
return v___x_3405_;
}
}
else
{
lean_object* v_a_3406_; lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3413_; 
lean_dec_ref(v_k_3381_);
lean_dec(v_v_3380_);
lean_dec(v_u_3379_);
v_a_3406_ = lean_ctor_get(v___x_3396_, 0);
v_isSharedCheck_3413_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3408_ = v___x_3396_;
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
else
{
lean_inc(v_a_3406_);
lean_dec(v___x_3396_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3411_; 
if (v_isShared_3409_ == 0)
{
v___x_3411_ = v___x_3408_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_a_3406_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
return v___x_3411_;
}
}
}
}
else
{
lean_dec_ref(v_k_3381_);
lean_dec(v_v_3380_);
lean_dec(v_u_3379_);
return v___y_3395_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update___boxed(lean_object* v_u_3432_, lean_object* v_v_3433_, lean_object* v_k_3434_, lean_object* v_a_3435_, lean_object* v_a_3436_, lean_object* v_a_3437_, lean_object* v_a_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_, lean_object* v_a_3445_, lean_object* v_a_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update(v_u_3432_, v_v_3433_, v_k_3434_, v_a_3435_, v_a_3436_, v_a_3437_, v_a_3438_, v_a_3439_, v_a_3440_, v_a_3441_, v_a_3442_, v_a_3443_, v_a_3444_, v_a_3445_);
lean_dec(v_a_3445_);
lean_dec_ref(v_a_3444_);
lean_dec(v_a_3443_);
lean_dec_ref(v_a_3442_);
lean_dec(v_a_3441_);
lean_dec_ref(v_a_3440_);
lean_dec(v_a_3439_);
lean_dec_ref(v_a_3438_);
lean_dec(v_a_3437_);
lean_dec(v_a_3436_);
lean_dec(v_a_3435_);
return v_res_3447_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_addEdge___closed__0(void){
_start:
{
lean_object* v___x_3448_; 
v___x_3448_ = lean_mk_string_unchecked("add_edge", 8, 8);
return v___x_3448_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_addEdge___closed__1(void){
_start:
{
lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3449_ = lean_obj_once(&l_Lean_Meta_Grind_Order_addEdge___closed__0, &l_Lean_Meta_Grind_Order_addEdge___closed__0_once, _init_l_Lean_Meta_Grind_Order_addEdge___closed__0);
v___x_3450_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2);
v___x_3451_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1);
v___x_3452_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0);
v___x_3453_ = l_Lean_Name_mkStr4(v___x_3452_, v___x_3451_, v___x_3450_, v___x_3449_);
return v___x_3453_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_addEdge___closed__2(void){
_start:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3454_ = lean_obj_once(&l_Lean_Meta_Grind_Order_addEdge___closed__1, &l_Lean_Meta_Grind_Order_addEdge___closed__1_once, _init_l_Lean_Meta_Grind_Order_addEdge___closed__1);
v___x_3455_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6);
v___x_3456_ = l_Lean_Name_append(v___x_3455_, v___x_3454_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_addEdge(lean_object* v_u_3457_, lean_object* v_v_3458_, lean_object* v_k_3459_, lean_object* v_h_3460_, lean_object* v_a_3461_, lean_object* v_a_3462_, lean_object* v_a_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_, lean_object* v_a_3467_, lean_object* v_a_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_){
_start:
{
lean_object* v___y_3474_; lean_object* v___y_3475_; lean_object* v___y_3476_; lean_object* v___y_3477_; lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; lean_object* v___y_3511_; lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v___y_3514_; lean_object* v___y_3515_; lean_object* v___y_3516_; lean_object* v___y_3517_; lean_object* v___y_3518_; lean_object* v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___x_3548_; 
v___x_3548_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_3462_, v_a_3471_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v_a_3549_; lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3625_; 
v_a_3549_ = lean_ctor_get(v___x_3548_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3551_ = v___x_3548_;
v_isShared_3552_ = v_isSharedCheck_3625_;
goto v_resetjp_3550_;
}
else
{
lean_inc(v_a_3549_);
lean_dec(v___x_3548_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3625_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
uint8_t v___x_3553_; 
v___x_3553_ = lean_unbox(v_a_3549_);
lean_dec(v_a_3549_);
if (v___x_3553_ == 0)
{
uint8_t v___x_3554_; 
lean_del_object(v___x_3551_);
v___x_3554_ = lean_nat_dec_eq(v_u_3457_, v_v_3458_);
if (v___x_3554_ == 0)
{
lean_object* v_options_3555_; uint8_t v_hasTrace_3556_; 
v_options_3555_ = lean_ctor_get(v_a_3470_, 2);
v_hasTrace_3556_ = lean_ctor_get_uint8(v_options_3555_, sizeof(void*)*1);
if (v_hasTrace_3556_ == 0)
{
v___y_3511_ = v_a_3461_;
v___y_3512_ = v_a_3462_;
v___y_3513_ = v_a_3463_;
v___y_3514_ = v_a_3464_;
v___y_3515_ = v_a_3465_;
v___y_3516_ = v_a_3466_;
v___y_3517_ = v_a_3467_;
v___y_3518_ = v_a_3468_;
v___y_3519_ = v_a_3469_;
v___y_3520_ = v_a_3470_;
v___y_3521_ = v_a_3471_;
goto v___jp_3510_;
}
else
{
lean_object* v_inheritedTraceOptions_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; uint8_t v___x_3560_; 
v_inheritedTraceOptions_3557_ = lean_ctor_get(v_a_3470_, 13);
v___x_3558_ = lean_obj_once(&l_Lean_Meta_Grind_Order_addEdge___closed__1, &l_Lean_Meta_Grind_Order_addEdge___closed__1_once, _init_l_Lean_Meta_Grind_Order_addEdge___closed__1);
v___x_3559_ = lean_obj_once(&l_Lean_Meta_Grind_Order_addEdge___closed__2, &l_Lean_Meta_Grind_Order_addEdge___closed__2_once, _init_l_Lean_Meta_Grind_Order_addEdge___closed__2);
v___x_3560_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3557_, v_options_3555_, v___x_3559_);
if (v___x_3560_ == 0)
{
v___y_3511_ = v_a_3461_;
v___y_3512_ = v_a_3462_;
v___y_3513_ = v_a_3463_;
v___y_3514_ = v_a_3464_;
v___y_3515_ = v_a_3465_;
v___y_3516_ = v_a_3466_;
v___y_3517_ = v_a_3467_;
v___y_3518_ = v_a_3468_;
v___y_3519_ = v_a_3469_;
v___y_3520_ = v_a_3470_;
v___y_3521_ = v_a_3471_;
goto v___jp_3510_;
}
else
{
lean_object* v___x_3561_; 
v___x_3561_ = l_Lean_Meta_Grind_Order_getExpr(v_u_3457_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_, v_a_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_);
if (lean_obj_tag(v___x_3561_) == 0)
{
lean_object* v_a_3562_; lean_object* v___x_3563_; 
v_a_3562_ = lean_ctor_get(v___x_3561_, 0);
lean_inc(v_a_3562_);
lean_dec_ref(v___x_3561_);
v___x_3563_ = l_Lean_Meta_Grind_Order_getExpr(v_v_3458_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_, v_a_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v_a_3564_; lean_object* v_k_3565_; uint8_t v_strict_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___y_3574_; 
v_a_3564_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_a_3564_);
lean_dec_ref(v___x_3563_);
v_k_3565_ = lean_ctor_get(v_k_3459_, 0);
v_strict_3566_ = lean_ctor_get_uint8(v_k_3459_, sizeof(void*)*1);
v___x_3567_ = l_Lean_MessageData_ofExpr(v_a_3562_);
v___x_3568_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4);
v___x_3569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3569_, 0, v___x_3567_);
lean_ctor_set(v___x_3569_, 1, v___x_3568_);
v___x_3570_ = l_Lean_MessageData_ofExpr(v_a_3564_);
v___x_3571_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3571_, 0, v___x_3569_);
lean_ctor_set(v___x_3571_, 1, v___x_3570_);
v___x_3572_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3571_);
lean_ctor_set(v___x_3572_, 1, v___x_3568_);
if (v_strict_3566_ == 0)
{
lean_object* v___x_3579_; 
v___x_3579_ = l_Int_repr(v_k_3565_);
v___y_3574_ = v___x_3579_;
goto v___jp_3573_;
}
else
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; 
v___x_3580_ = l_Int_repr(v_k_3565_);
v___x_3581_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5);
v___x_3582_ = lean_string_append(v___x_3580_, v___x_3581_);
v___y_3574_ = v___x_3582_;
goto v___jp_3573_;
}
v___jp_3573_:
{
lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; 
v___x_3575_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3575_, 0, v___y_3574_);
v___x_3576_ = l_Lean_MessageData_ofFormat(v___x_3575_);
v___x_3577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3572_);
lean_ctor_set(v___x_3577_, 1, v___x_3576_);
v___x_3578_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v___x_3558_, v___x_3577_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_dec_ref(v___x_3578_);
v___y_3511_ = v_a_3461_;
v___y_3512_ = v_a_3462_;
v___y_3513_ = v_a_3463_;
v___y_3514_ = v_a_3464_;
v___y_3515_ = v_a_3465_;
v___y_3516_ = v_a_3466_;
v___y_3517_ = v_a_3467_;
v___y_3518_ = v_a_3468_;
v___y_3519_ = v_a_3469_;
v___y_3520_ = v_a_3470_;
v___y_3521_ = v_a_3471_;
goto v___jp_3510_;
}
else
{
lean_dec_ref(v_h_3460_);
lean_dec_ref(v_k_3459_);
lean_dec(v_v_3458_);
lean_dec(v_u_3457_);
return v___x_3578_;
}
}
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3590_; 
lean_dec(v_a_3562_);
lean_dec_ref(v_h_3460_);
lean_dec_ref(v_k_3459_);
lean_dec(v_v_3458_);
lean_dec(v_u_3457_);
v_a_3583_ = lean_ctor_get(v___x_3563_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3585_ = v___x_3563_;
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v___x_3563_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3588_; 
if (v_isShared_3586_ == 0)
{
v___x_3588_ = v___x_3585_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v_a_3583_);
v___x_3588_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
return v___x_3588_;
}
}
}
}
else
{
lean_object* v_a_3591_; lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3598_; 
lean_dec_ref(v_h_3460_);
lean_dec_ref(v_k_3459_);
lean_dec(v_v_3458_);
lean_dec(v_u_3457_);
v_a_3591_ = lean_ctor_get(v___x_3561_, 0);
v_isSharedCheck_3598_ = !lean_is_exclusive(v___x_3561_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3593_ = v___x_3561_;
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
else
{
lean_inc(v_a_3591_);
lean_dec(v___x_3561_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v___x_3596_; 
if (v_isShared_3594_ == 0)
{
v___x_3596_ = v___x_3593_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v_a_3591_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
return v___x_3596_;
}
}
}
}
}
}
else
{
uint8_t v___x_3599_; 
lean_dec(v_v_3458_);
v___x_3599_ = l_Lean_Meta_Grind_Order_Weight_isNeg(v_k_3459_);
if (v___x_3599_ == 0)
{
lean_dec_ref(v_h_3460_);
lean_dec_ref(v_k_3459_);
lean_dec(v_u_3457_);
goto v___jp_3545_;
}
else
{
lean_object* v___x_3600_; 
v___x_3600_ = l_Lean_Meta_Grind_Order_getExpr(v_u_3457_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_, v_a_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_);
lean_dec(v_u_3457_);
if (lean_obj_tag(v___x_3600_) == 0)
{
lean_object* v_a_3601_; lean_object* v___x_3602_; 
v_a_3601_ = lean_ctor_get(v___x_3600_, 0);
lean_inc(v_a_3601_);
lean_dec_ref(v___x_3600_);
v___x_3602_ = l_Lean_Meta_Grind_Order_mkSelfUnsatProof(v_a_3601_, v_k_3459_, v_h_3460_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_, v_a_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_);
lean_dec_ref(v_k_3459_);
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; lean_object* v___x_3604_; 
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
lean_inc(v_a_3603_);
lean_dec_ref(v___x_3602_);
v___x_3604_ = l_Lean_Meta_Grind_closeGoal(v_a_3603_, v_a_3462_, v_a_3463_, v_a_3464_, v_a_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_);
if (lean_obj_tag(v___x_3604_) == 0)
{
lean_dec_ref(v___x_3604_);
goto v___jp_3545_;
}
else
{
return v___x_3604_;
}
}
else
{
lean_object* v_a_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3612_; 
v_a_3605_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3607_ = v___x_3602_;
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_a_3605_);
lean_dec(v___x_3602_);
v___x_3607_ = lean_box(0);
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
v_resetjp_3606_:
{
lean_object* v___x_3610_; 
if (v_isShared_3608_ == 0)
{
v___x_3610_ = v___x_3607_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v_a_3605_);
v___x_3610_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
return v___x_3610_;
}
}
}
}
else
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3620_; 
lean_dec_ref(v_h_3460_);
lean_dec_ref(v_k_3459_);
v_a_3613_ = lean_ctor_get(v___x_3600_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3615_ = v___x_3600_;
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3600_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v___x_3618_; 
if (v_isShared_3616_ == 0)
{
v___x_3618_ = v___x_3615_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v_a_3613_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
}
}
}
else
{
lean_object* v___x_3621_; lean_object* v___x_3623_; 
lean_dec_ref(v_h_3460_);
lean_dec_ref(v_k_3459_);
lean_dec(v_v_3458_);
lean_dec(v_u_3457_);
v___x_3621_ = lean_box(0);
if (v_isShared_3552_ == 0)
{
lean_ctor_set(v___x_3551_, 0, v___x_3621_);
v___x_3623_ = v___x_3551_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v___x_3621_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
return v___x_3623_;
}
}
}
}
else
{
lean_object* v_a_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3633_; 
lean_dec_ref(v_h_3460_);
lean_dec_ref(v_k_3459_);
lean_dec(v_v_3458_);
lean_dec(v_u_3457_);
v_a_3626_ = lean_ctor_get(v___x_3548_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3628_ = v___x_3548_;
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_a_3626_);
lean_dec(v___x_3548_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3631_; 
if (v_isShared_3629_ == 0)
{
v___x_3631_ = v___x_3628_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_a_3626_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
v___jp_3473_:
{
lean_object* v___x_3485_; 
v___x_3485_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter(v_u_3457_, v_v_3458_, v_k_3459_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_);
if (lean_obj_tag(v___x_3485_) == 0)
{
lean_object* v_a_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3501_; 
v_a_3486_ = lean_ctor_get(v___x_3485_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v___x_3485_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3488_ = v___x_3485_;
v_isShared_3489_ = v_isSharedCheck_3501_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_a_3486_);
lean_dec(v___x_3485_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3501_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
uint8_t v___x_3490_; 
v___x_3490_ = lean_unbox(v_a_3486_);
lean_dec(v_a_3486_);
if (v___x_3490_ == 0)
{
lean_object* v___x_3491_; lean_object* v___x_3493_; 
lean_dec_ref(v_h_3460_);
lean_dec_ref(v_k_3459_);
lean_dec(v_v_3458_);
lean_dec(v_u_3457_);
v___x_3491_ = lean_box(0);
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 0, v___x_3491_);
v___x_3493_ = v___x_3488_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v___x_3491_);
v___x_3493_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
return v___x_3493_;
}
}
else
{
lean_object* v___x_3495_; 
lean_del_object(v___x_3488_);
lean_inc_ref(v_k_3459_);
lean_inc(v_v_3458_);
lean_inc(v_u_3457_);
v___x_3495_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg(v_u_3457_, v_v_3458_, v_k_3459_, v___y_3474_, v___y_3475_, v___y_3484_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v___x_3496_; lean_object* v___x_3497_; 
lean_dec_ref(v___x_3495_);
lean_inc_ref(v_k_3459_);
lean_inc_n(v_u_3457_, 2);
v___x_3496_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3496_, 0, v_u_3457_);
lean_ctor_set(v___x_3496_, 1, v_k_3459_);
lean_ctor_set(v___x_3496_, 2, v_h_3460_);
lean_inc(v_v_3458_);
v___x_3497_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg(v_u_3457_, v_v_3458_, v___x_3496_, v___y_3474_, v___y_3475_, v___y_3484_);
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_object* v___x_3498_; 
lean_dec_ref(v___x_3497_);
lean_inc_ref(v_k_3459_);
lean_inc(v_v_3458_);
lean_inc(v_u_3457_);
v___x_3498_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate(v_u_3457_, v_v_3458_, v_k_3459_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v___x_3499_; 
lean_dec_ref(v___x_3498_);
v___x_3499_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update(v_u_3457_, v_v_3458_, v_k_3459_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_);
if (lean_obj_tag(v___x_3499_) == 0)
{
lean_object* v___x_3500_; 
lean_dec_ref(v___x_3499_);
v___x_3500_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending(v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_);
return v___x_3500_;
}
else
{
return v___x_3499_;
}
}
else
{
lean_dec_ref(v_k_3459_);
lean_dec(v_v_3458_);
lean_dec(v_u_3457_);
return v___x_3498_;
}
}
else
{
lean_dec_ref(v_k_3459_);
lean_dec(v_v_3458_);
lean_dec(v_u_3457_);
return v___x_3497_;
}
}
else
{
lean_dec_ref(v_h_3460_);
lean_dec_ref(v_k_3459_);
lean_dec(v_v_3458_);
lean_dec(v_u_3457_);
return v___x_3495_;
}
}
}
}
else
{
lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3509_; 
lean_dec_ref(v_h_3460_);
lean_dec_ref(v_k_3459_);
lean_dec(v_v_3458_);
lean_dec(v_u_3457_);
v_a_3502_ = lean_ctor_get(v___x_3485_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v___x_3485_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3504_ = v___x_3485_;
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___x_3485_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3507_; 
if (v_isShared_3505_ == 0)
{
v___x_3507_ = v___x_3504_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_a_3502_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
}
}
v___jp_3510_:
{
lean_object* v___x_3522_; 
v___x_3522_ = l_Lean_Meta_Grind_Order_getDist_x3f(v_v_3458_, v_u_3457_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_a_3523_; 
v_a_3523_ = lean_ctor_get(v___x_3522_, 0);
lean_inc(v_a_3523_);
lean_dec_ref(v___x_3522_);
if (lean_obj_tag(v_a_3523_) == 1)
{
lean_object* v_val_3524_; lean_object* v___x_3525_; uint8_t v___x_3526_; 
v_val_3524_ = lean_ctor_get(v_a_3523_, 0);
lean_inc_n(v_val_3524_, 2);
lean_dec_ref(v_a_3523_);
v___x_3525_ = l_Lean_Meta_Grind_Order_Weight_add(v_k_3459_, v_val_3524_);
v___x_3526_ = l_Lean_Meta_Grind_Order_Weight_isNeg(v___x_3525_);
lean_dec_ref(v___x_3525_);
if (v___x_3526_ == 0)
{
lean_dec(v_val_3524_);
v___y_3474_ = v___y_3511_;
v___y_3475_ = v___y_3512_;
v___y_3476_ = v___y_3513_;
v___y_3477_ = v___y_3514_;
v___y_3478_ = v___y_3515_;
v___y_3479_ = v___y_3516_;
v___y_3480_ = v___y_3517_;
v___y_3481_ = v___y_3518_;
v___y_3482_ = v___y_3519_;
v___y_3483_ = v___y_3520_;
v___y_3484_ = v___y_3521_;
goto v___jp_3473_;
}
else
{
lean_object* v___x_3527_; 
v___x_3527_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setUnsat(v_u_3457_, v_v_3458_, v_k_3459_, v_h_3460_, v_val_3524_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_);
lean_dec(v_val_3524_);
lean_dec_ref(v_k_3459_);
lean_dec(v_v_3458_);
lean_dec(v_u_3457_);
if (lean_obj_tag(v___x_3527_) == 0)
{
lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3535_; 
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3527_);
if (v_isSharedCheck_3535_ == 0)
{
lean_object* v_unused_3536_; 
v_unused_3536_ = lean_ctor_get(v___x_3527_, 0);
lean_dec(v_unused_3536_);
v___x_3529_ = v___x_3527_;
v_isShared_3530_ = v_isSharedCheck_3535_;
goto v_resetjp_3528_;
}
else
{
lean_dec(v___x_3527_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3535_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___x_3531_; lean_object* v___x_3533_; 
v___x_3531_ = lean_box(0);
if (v_isShared_3530_ == 0)
{
lean_ctor_set(v___x_3529_, 0, v___x_3531_);
v___x_3533_ = v___x_3529_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v___x_3531_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
return v___x_3533_;
}
}
}
else
{
return v___x_3527_;
}
}
}
else
{
lean_dec(v_a_3523_);
v___y_3474_ = v___y_3511_;
v___y_3475_ = v___y_3512_;
v___y_3476_ = v___y_3513_;
v___y_3477_ = v___y_3514_;
v___y_3478_ = v___y_3515_;
v___y_3479_ = v___y_3516_;
v___y_3480_ = v___y_3517_;
v___y_3481_ = v___y_3518_;
v___y_3482_ = v___y_3519_;
v___y_3483_ = v___y_3520_;
v___y_3484_ = v___y_3521_;
goto v___jp_3473_;
}
}
else
{
lean_object* v_a_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3544_; 
lean_dec_ref(v_h_3460_);
lean_dec_ref(v_k_3459_);
lean_dec(v_v_3458_);
lean_dec(v_u_3457_);
v_a_3537_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3544_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3539_ = v___x_3522_;
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_a_3537_);
lean_dec(v___x_3522_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3542_; 
if (v_isShared_3540_ == 0)
{
v___x_3542_ = v___x_3539_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v_a_3537_);
v___x_3542_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
return v___x_3542_;
}
}
}
}
v___jp_3545_:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3546_ = lean_box(0);
v___x_3547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3546_);
return v___x_3547_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_addEdge___boxed(lean_object* v_u_3634_, lean_object* v_v_3635_, lean_object* v_k_3636_, lean_object* v_h_3637_, lean_object* v_a_3638_, lean_object* v_a_3639_, lean_object* v_a_3640_, lean_object* v_a_3641_, lean_object* v_a_3642_, lean_object* v_a_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_, lean_object* v_a_3646_, lean_object* v_a_3647_, lean_object* v_a_3648_, lean_object* v_a_3649_){
_start:
{
lean_object* v_res_3650_; 
v_res_3650_ = l_Lean_Meta_Grind_Order_addEdge(v_u_3634_, v_v_3635_, v_k_3636_, v_h_3637_, v_a_3638_, v_a_3639_, v_a_3640_, v_a_3641_, v_a_3642_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_, v_a_3647_, v_a_3648_);
lean_dec(v_a_3648_);
lean_dec_ref(v_a_3647_);
lean_dec(v_a_3646_);
lean_dec_ref(v_a_3645_);
lean_dec(v_a_3644_);
lean_dec_ref(v_a_3643_);
lean_dec(v_a_3642_);
lean_dec_ref(v_a_3641_);
lean_dec(v_a_3640_);
lean_dec(v_a_3639_);
lean_dec(v_a_3638_);
return v_res_3650_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__0(void){
_start:
{
lean_object* v___x_3651_; 
v___x_3651_ = lean_mk_string_unchecked("eq_mp", 5, 5);
return v___x_3651_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1(void){
_start:
{
lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; 
v___x_3652_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__0);
v___x_3653_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_3654_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_3655_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_3656_ = l_Lean_Name_mkStr4(v___x_3655_, v___x_3654_, v___x_3653_, v___x_3652_);
return v___x_3656_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__2(void){
_start:
{
lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; 
v___x_3657_ = lean_box(0);
v___x_3658_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1);
v___x_3659_ = l_Lean_mkConst(v___x_3658_, v___x_3657_);
return v___x_3659_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__3(void){
_start:
{
lean_object* v___x_3660_; 
v___x_3660_ = lean_mk_string_unchecked("assert", 6, 6);
return v___x_3660_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4(void){
_start:
{
lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v_cls_3664_; 
v___x_3661_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__3);
v___x_3662_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2);
v___x_3663_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0);
v_cls_3664_ = l_Lean_Name_mkStr3(v___x_3663_, v___x_3662_, v___x_3661_);
return v_cls_3664_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5(void){
_start:
{
lean_object* v_cls_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; 
v_cls_3665_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4);
v___x_3666_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6);
v___x_3667_ = l_Lean_Name_append(v___x_3666_, v_cls_3665_);
return v___x_3667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue(lean_object* v_c_3668_, lean_object* v_e_3669_, lean_object* v_he_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_, lean_object* v_a_3680_, lean_object* v_a_3681_){
_start:
{
lean_object* v___y_3684_; lean_object* v___y_3685_; lean_object* v___y_3686_; lean_object* v___y_3687_; lean_object* v___y_3688_; lean_object* v___y_3689_; lean_object* v___y_3690_; lean_object* v___y_3691_; lean_object* v___y_3692_; lean_object* v___y_3693_; lean_object* v___y_3694_; lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; uint8_t v___y_3699_; lean_object* v_h_3703_; lean_object* v___y_3704_; lean_object* v___y_3705_; lean_object* v___y_3706_; lean_object* v___y_3707_; lean_object* v___y_3708_; lean_object* v___y_3709_; lean_object* v___y_3710_; lean_object* v___y_3711_; lean_object* v___y_3712_; lean_object* v___y_3713_; lean_object* v___y_3714_; lean_object* v___y_3725_; lean_object* v___y_3726_; lean_object* v___y_3727_; lean_object* v___y_3728_; lean_object* v___y_3729_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v___y_3733_; lean_object* v___y_3734_; lean_object* v___y_3735_; lean_object* v_options_3743_; uint8_t v_hasTrace_3744_; 
v_options_3743_ = lean_ctor_get(v_a_3680_, 2);
v_hasTrace_3744_ = lean_ctor_get_uint8(v_options_3743_, sizeof(void*)*1);
if (v_hasTrace_3744_ == 0)
{
v___y_3725_ = v_a_3671_;
v___y_3726_ = v_a_3672_;
v___y_3727_ = v_a_3673_;
v___y_3728_ = v_a_3674_;
v___y_3729_ = v_a_3675_;
v___y_3730_ = v_a_3676_;
v___y_3731_ = v_a_3677_;
v___y_3732_ = v_a_3678_;
v___y_3733_ = v_a_3679_;
v___y_3734_ = v_a_3680_;
v___y_3735_ = v_a_3681_;
goto v___jp_3724_;
}
else
{
lean_object* v_inheritedTraceOptions_3745_; lean_object* v_cls_3746_; lean_object* v___x_3747_; uint8_t v___x_3748_; 
v_inheritedTraceOptions_3745_ = lean_ctor_get(v_a_3680_, 13);
v_cls_3746_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4);
v___x_3747_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5);
v___x_3748_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3745_, v_options_3743_, v___x_3747_);
if (v___x_3748_ == 0)
{
v___y_3725_ = v_a_3671_;
v___y_3726_ = v_a_3672_;
v___y_3727_ = v_a_3673_;
v___y_3728_ = v_a_3674_;
v___y_3729_ = v_a_3675_;
v___y_3730_ = v_a_3676_;
v___y_3731_ = v_a_3677_;
v___y_3732_ = v_a_3678_;
v___y_3733_ = v_a_3679_;
v___y_3734_ = v_a_3680_;
v___y_3735_ = v_a_3681_;
goto v___jp_3724_;
}
else
{
lean_object* v___x_3749_; 
v___x_3749_ = l_Lean_Meta_Grind_Order_Cnstr_pp(v_c_3668_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_, v_a_3680_, v_a_3681_);
if (lean_obj_tag(v___x_3749_) == 0)
{
lean_object* v_a_3750_; lean_object* v___x_3751_; 
v_a_3750_ = lean_ctor_get(v___x_3749_, 0);
lean_inc(v_a_3750_);
lean_dec_ref(v___x_3749_);
v___x_3751_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v_cls_3746_, v_a_3750_, v_a_3678_, v_a_3679_, v_a_3680_, v_a_3681_);
if (lean_obj_tag(v___x_3751_) == 0)
{
lean_dec_ref(v___x_3751_);
v___y_3725_ = v_a_3671_;
v___y_3726_ = v_a_3672_;
v___y_3727_ = v_a_3673_;
v___y_3728_ = v_a_3674_;
v___y_3729_ = v_a_3675_;
v___y_3730_ = v_a_3676_;
v___y_3731_ = v_a_3677_;
v___y_3732_ = v_a_3678_;
v___y_3733_ = v_a_3679_;
v___y_3734_ = v_a_3680_;
v___y_3735_ = v_a_3681_;
goto v___jp_3724_;
}
else
{
lean_dec_ref(v_he_3670_);
lean_dec_ref(v_e_3669_);
lean_dec_ref(v_c_3668_);
return v___x_3751_;
}
}
else
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3759_; 
lean_dec_ref(v_he_3670_);
lean_dec_ref(v_e_3669_);
lean_dec_ref(v_c_3668_);
v_a_3752_ = lean_ctor_get(v___x_3749_, 0);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3749_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3754_ = v___x_3749_;
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v___x_3749_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3757_; 
if (v_isShared_3755_ == 0)
{
v___x_3757_ = v___x_3754_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_a_3752_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
return v___x_3757_;
}
}
}
}
}
v___jp_3683_:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; 
v___x_3700_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3700_, 0, v___y_3697_);
lean_ctor_set_uint8(v___x_3700_, sizeof(void*)*1, v___y_3699_);
v___x_3701_ = l_Lean_Meta_Grind_Order_addEdge(v___y_3695_, v___y_3685_, v___x_3700_, v___y_3696_, v___y_3690_, v___y_3684_, v___y_3693_, v___y_3686_, v___y_3694_, v___y_3688_, v___y_3691_, v___y_3689_, v___y_3692_, v___y_3698_, v___y_3687_);
return v___x_3701_;
}
v___jp_3702_:
{
uint8_t v_kind_3715_; 
v_kind_3715_ = lean_ctor_get_uint8(v_c_3668_, sizeof(void*)*5);
if (v_kind_3715_ == 1)
{
lean_object* v_u_3716_; lean_object* v_v_3717_; lean_object* v_k_3718_; uint8_t v___x_3719_; 
v_u_3716_ = lean_ctor_get(v_c_3668_, 0);
lean_inc(v_u_3716_);
v_v_3717_ = lean_ctor_get(v_c_3668_, 1);
lean_inc(v_v_3717_);
v_k_3718_ = lean_ctor_get(v_c_3668_, 2);
lean_inc(v_k_3718_);
lean_dec_ref(v_c_3668_);
v___x_3719_ = 1;
v___y_3684_ = v___y_3705_;
v___y_3685_ = v_v_3717_;
v___y_3686_ = v___y_3707_;
v___y_3687_ = v___y_3714_;
v___y_3688_ = v___y_3709_;
v___y_3689_ = v___y_3711_;
v___y_3690_ = v___y_3704_;
v___y_3691_ = v___y_3710_;
v___y_3692_ = v___y_3712_;
v___y_3693_ = v___y_3706_;
v___y_3694_ = v___y_3708_;
v___y_3695_ = v_u_3716_;
v___y_3696_ = v_h_3703_;
v___y_3697_ = v_k_3718_;
v___y_3698_ = v___y_3713_;
v___y_3699_ = v___x_3719_;
goto v___jp_3683_;
}
else
{
lean_object* v_u_3720_; lean_object* v_v_3721_; lean_object* v_k_3722_; uint8_t v___x_3723_; 
v_u_3720_ = lean_ctor_get(v_c_3668_, 0);
lean_inc(v_u_3720_);
v_v_3721_ = lean_ctor_get(v_c_3668_, 1);
lean_inc(v_v_3721_);
v_k_3722_ = lean_ctor_get(v_c_3668_, 2);
lean_inc(v_k_3722_);
lean_dec_ref(v_c_3668_);
v___x_3723_ = 0;
v___y_3684_ = v___y_3705_;
v___y_3685_ = v_v_3721_;
v___y_3686_ = v___y_3707_;
v___y_3687_ = v___y_3714_;
v___y_3688_ = v___y_3709_;
v___y_3689_ = v___y_3711_;
v___y_3690_ = v___y_3704_;
v___y_3691_ = v___y_3710_;
v___y_3692_ = v___y_3712_;
v___y_3693_ = v___y_3706_;
v___y_3694_ = v___y_3708_;
v___y_3695_ = v_u_3720_;
v___y_3696_ = v_h_3703_;
v___y_3697_ = v_k_3722_;
v___y_3698_ = v___y_3713_;
v___y_3699_ = v___x_3723_;
goto v___jp_3683_;
}
}
v___jp_3724_:
{
lean_object* v_h_x3f_3736_; 
v_h_x3f_3736_ = lean_ctor_get(v_c_3668_, 4);
if (lean_obj_tag(v_h_x3f_3736_) == 1)
{
lean_object* v_e_3737_; lean_object* v_val_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; 
v_e_3737_ = lean_ctor_get(v_c_3668_, 3);
v_val_3738_ = lean_ctor_get(v_h_x3f_3736_, 0);
v___x_3739_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__2);
lean_inc_ref(v_e_3669_);
v___x_3740_ = l_Lean_Meta_mkOfEqTrueCore(v_e_3669_, v_he_3670_);
lean_inc(v_val_3738_);
lean_inc_ref(v_e_3737_);
v___x_3741_ = l_Lean_mkApp4(v___x_3739_, v_e_3669_, v_e_3737_, v_val_3738_, v___x_3740_);
v_h_3703_ = v___x_3741_;
v___y_3704_ = v___y_3725_;
v___y_3705_ = v___y_3726_;
v___y_3706_ = v___y_3727_;
v___y_3707_ = v___y_3728_;
v___y_3708_ = v___y_3729_;
v___y_3709_ = v___y_3730_;
v___y_3710_ = v___y_3731_;
v___y_3711_ = v___y_3732_;
v___y_3712_ = v___y_3733_;
v___y_3713_ = v___y_3734_;
v___y_3714_ = v___y_3735_;
goto v___jp_3702_;
}
else
{
lean_object* v___x_3742_; 
v___x_3742_ = l_Lean_Meta_mkOfEqTrueCore(v_e_3669_, v_he_3670_);
v_h_3703_ = v___x_3742_;
v___y_3704_ = v___y_3725_;
v___y_3705_ = v___y_3726_;
v___y_3706_ = v___y_3727_;
v___y_3707_ = v___y_3728_;
v___y_3708_ = v___y_3729_;
v___y_3709_ = v___y_3730_;
v___y_3710_ = v___y_3731_;
v___y_3711_ = v___y_3732_;
v___y_3712_ = v___y_3733_;
v___y_3713_ = v___y_3734_;
v___y_3714_ = v___y_3735_;
goto v___jp_3702_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___boxed(lean_object* v_c_3760_, lean_object* v_e_3761_, lean_object* v_he_3762_, lean_object* v_a_3763_, lean_object* v_a_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_, lean_object* v_a_3767_, lean_object* v_a_3768_, lean_object* v_a_3769_, lean_object* v_a_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_, lean_object* v_a_3773_, lean_object* v_a_3774_){
_start:
{
lean_object* v_res_3775_; 
v_res_3775_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue(v_c_3760_, v_e_3761_, v_he_3762_, v_a_3763_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_);
lean_dec(v_a_3773_);
lean_dec_ref(v_a_3772_);
lean_dec(v_a_3771_);
lean_dec_ref(v_a_3770_);
lean_dec(v_a_3769_);
lean_dec_ref(v_a_3768_);
lean_dec(v_a_3767_);
lean_dec_ref(v_a_3766_);
lean_dec(v_a_3765_);
lean_dec(v_a_3764_);
lean_dec(v_a_3763_);
return v_res_3775_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__0(void){
_start:
{
lean_object* v___x_3776_; 
v___x_3776_ = lean_mk_string_unchecked("int_lt", 6, 6);
return v___x_3776_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1(void){
_start:
{
lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; 
v___x_3777_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__0);
v___x_3778_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_3779_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_3780_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_3781_ = l_Lean_Name_mkStr4(v___x_3780_, v___x_3779_, v___x_3778_, v___x_3777_);
return v___x_3781_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__2(void){
_start:
{
lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; 
v___x_3782_ = lean_box(0);
v___x_3783_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1);
v___x_3784_ = l_Lean_mkConst(v___x_3783_, v___x_3782_);
return v___x_3784_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__3(void){
_start:
{
lean_object* v___x_3785_; lean_object* v___x_3786_; 
v___x_3785_ = lean_unsigned_to_nat(1u);
v___x_3786_ = lean_nat_to_int(v___x_3785_);
return v___x_3786_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4(void){
_start:
{
lean_object* v___x_3787_; lean_object* v___x_3788_; 
v___x_3787_ = lean_unsigned_to_nat(0u);
v___x_3788_ = lean_nat_to_int(v___x_3787_);
return v___x_3788_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__5(void){
_start:
{
lean_object* v___x_3789_; 
v___x_3789_ = lean_mk_string_unchecked("Neg", 3, 3);
return v___x_3789_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__6(void){
_start:
{
lean_object* v___x_3790_; 
v___x_3790_ = lean_mk_string_unchecked("neg", 3, 3);
return v___x_3790_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__7(void){
_start:
{
lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; 
v___x_3791_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__6, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__6);
v___x_3792_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__5);
v___x_3793_ = l_Lean_Name_mkStr2(v___x_3792_, v___x_3791_);
return v___x_3793_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__8(void){
_start:
{
lean_object* v___x_3794_; lean_object* v___x_3795_; 
v___x_3794_ = lean_unsigned_to_nat(0u);
v___x_3795_ = l_Lean_Level_ofNat(v___x_3794_);
return v___x_3795_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__9(void){
_start:
{
lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
v___x_3796_ = lean_box(0);
v___x_3797_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__8, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__8);
v___x_3798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3798_, 0, v___x_3797_);
lean_ctor_set(v___x_3798_, 1, v___x_3796_);
return v___x_3798_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10(void){
_start:
{
lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3799_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__9, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__9);
v___x_3800_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__7, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__7);
v___x_3801_ = l_Lean_Expr_const___override(v___x_3800_, v___x_3799_);
return v___x_3801_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11(void){
_start:
{
lean_object* v___x_3802_; 
v___x_3802_ = lean_mk_string_unchecked("Int", 3, 3);
return v___x_3802_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__12(void){
_start:
{
lean_object* v___x_3803_; lean_object* v___x_3804_; 
v___x_3803_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11);
v___x_3804_ = l_Lean_Name_mkStr1(v___x_3803_);
return v___x_3804_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13(void){
_start:
{
lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
v___x_3805_ = lean_box(0);
v___x_3806_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__12, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__12);
v___x_3807_ = l_Lean_Expr_const___override(v___x_3806_, v___x_3805_);
return v___x_3807_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__14(void){
_start:
{
lean_object* v___x_3808_; 
v___x_3808_ = lean_mk_string_unchecked("instNegInt", 10, 10);
return v___x_3808_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__15(void){
_start:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3809_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__14, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__14);
v___x_3810_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11);
v___x_3811_ = l_Lean_Name_mkStr2(v___x_3810_, v___x_3809_);
return v___x_3811_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16(void){
_start:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
v___x_3812_ = lean_box(0);
v___x_3813_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__15, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__15);
v___x_3814_ = l_Lean_Expr_const___override(v___x_3813_, v___x_3812_);
return v___x_3814_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__17(void){
_start:
{
lean_object* v___x_3815_; 
v___x_3815_ = lean_mk_string_unchecked("le_of_not_lt", 12, 12);
return v___x_3815_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18(void){
_start:
{
lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; 
v___x_3816_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__17, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__17_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__17);
v___x_3817_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_3818_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_3819_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_3820_ = l_Lean_Name_mkStr4(v___x_3819_, v___x_3818_, v___x_3817_, v___x_3816_);
return v___x_3820_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__19(void){
_start:
{
lean_object* v___x_3821_; 
v___x_3821_ = lean_mk_string_unchecked("le_of_not_le", 12, 12);
return v___x_3821_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20(void){
_start:
{
lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; 
v___x_3822_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__19, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__19_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__19);
v___x_3823_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_3824_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_3825_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_3826_ = l_Lean_Name_mkStr4(v___x_3825_, v___x_3824_, v___x_3823_, v___x_3822_);
return v___x_3826_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__21(void){
_start:
{
lean_object* v___x_3827_; 
v___x_3827_ = lean_mk_string_unchecked("lt_of_not_le", 12, 12);
return v___x_3827_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22(void){
_start:
{
lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; 
v___x_3828_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__21, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__21_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__21);
v___x_3829_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_3830_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_3831_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_3832_ = l_Lean_Name_mkStr4(v___x_3831_, v___x_3830_, v___x_3829_, v___x_3828_);
return v___x_3832_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__23(void){
_start:
{
lean_object* v___x_3833_; 
v___x_3833_ = lean_mk_string_unchecked("le_of_not_lt_k", 14, 14);
return v___x_3833_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24(void){
_start:
{
lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; 
v___x_3834_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__23, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__23_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__23);
v___x_3835_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_3836_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_3837_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_3838_ = l_Lean_Name_mkStr4(v___x_3837_, v___x_3836_, v___x_3835_, v___x_3834_);
return v___x_3838_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__25(void){
_start:
{
lean_object* v___x_3839_; 
v___x_3839_ = lean_mk_string_unchecked("lt_of_not_le_k", 14, 14);
return v___x_3839_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26(void){
_start:
{
lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; 
v___x_3840_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__25, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__25_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__25);
v___x_3841_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_3842_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_3843_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_3844_ = l_Lean_Name_mkStr4(v___x_3843_, v___x_3842_, v___x_3841_, v___x_3840_);
return v___x_3844_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__27(void){
_start:
{
lean_object* v___x_3845_; 
v___x_3845_ = lean_mk_string_unchecked("eq_mp_not", 9, 9);
return v___x_3845_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28(void){
_start:
{
lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; 
v___x_3846_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__27, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__27_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__27);
v___x_3847_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_3848_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_3849_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_3850_ = l_Lean_Name_mkStr4(v___x_3849_, v___x_3848_, v___x_3847_, v___x_3846_);
return v___x_3850_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__29(void){
_start:
{
lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; 
v___x_3851_ = lean_box(0);
v___x_3852_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28);
v___x_3853_ = l_Lean_mkConst(v___x_3852_, v___x_3851_);
return v___x_3853_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__30(void){
_start:
{
lean_object* v___x_3854_; 
v___x_3854_ = lean_mk_string_unchecked("¬ ", 3, 2);
return v___x_3854_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__31(void){
_start:
{
lean_object* v___x_3855_; lean_object* v___x_3856_; 
v___x_3855_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__30, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__30_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__30);
v___x_3856_ = l_Lean_stringToMessageData(v___x_3855_);
return v___x_3856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse(lean_object* v_c_3857_, lean_object* v_e_3858_, lean_object* v_he_3859_, lean_object* v_a_3860_, lean_object* v_a_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_, lean_object* v_a_3867_, lean_object* v_a_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_){
_start:
{
lean_object* v___y_3873_; lean_object* v___y_3874_; lean_object* v_k_x27_3875_; lean_object* v_h_3876_; uint8_t v_strict_3877_; lean_object* v___y_3878_; lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v___y_3881_; lean_object* v___y_3882_; lean_object* v___y_3883_; lean_object* v___y_3884_; lean_object* v___y_3885_; lean_object* v___y_3886_; lean_object* v___y_3887_; lean_object* v___y_3888_; lean_object* v___y_3892_; lean_object* v___y_3893_; lean_object* v___y_3894_; lean_object* v___y_3895_; lean_object* v___y_3896_; lean_object* v___y_3897_; lean_object* v___y_3898_; lean_object* v___y_3899_; lean_object* v___y_3900_; lean_object* v___y_3901_; lean_object* v___y_3902_; lean_object* v___y_3903_; lean_object* v___y_3904_; lean_object* v___y_3905_; lean_object* v___y_3906_; lean_object* v___y_3907_; lean_object* v___y_3908_; lean_object* v___y_3909_; lean_object* v___y_3910_; lean_object* v___y_3911_; lean_object* v___y_3912_; lean_object* v___y_3916_; lean_object* v___y_3917_; lean_object* v___y_3918_; lean_object* v___y_3919_; lean_object* v___y_3920_; lean_object* v___y_3921_; lean_object* v___y_3922_; lean_object* v___y_3923_; lean_object* v___y_3924_; lean_object* v___y_3925_; lean_object* v___y_3926_; lean_object* v___y_3927_; lean_object* v___y_3928_; lean_object* v___y_3929_; lean_object* v___y_3930_; lean_object* v___y_3931_; lean_object* v___y_3932_; uint8_t v___y_3933_; lean_object* v___x_3979_; 
v___x_3979_ = l_Lean_Meta_Grind_Order_isLinearPreorder(v_a_3860_, v_a_3861_, v_a_3862_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_, v_a_3867_, v_a_3868_, v_a_3869_, v_a_3870_);
if (lean_obj_tag(v___x_3979_) == 0)
{
lean_object* v_a_3980_; lean_object* v___x_3982_; uint8_t v_isShared_3983_; uint8_t v_isSharedCheck_4301_; 
v_a_3980_ = lean_ctor_get(v___x_3979_, 0);
v_isSharedCheck_4301_ = !lean_is_exclusive(v___x_3979_);
if (v_isSharedCheck_4301_ == 0)
{
v___x_3982_ = v___x_3979_;
v_isShared_3983_ = v_isSharedCheck_4301_;
goto v_resetjp_3981_;
}
else
{
lean_inc(v_a_3980_);
lean_dec(v___x_3979_);
v___x_3982_ = lean_box(0);
v_isShared_3983_ = v_isSharedCheck_4301_;
goto v_resetjp_3981_;
}
v_resetjp_3981_:
{
lean_object* v___y_3985_; lean_object* v___y_3986_; lean_object* v___y_3987_; lean_object* v___y_3988_; lean_object* v___y_3989_; lean_object* v___y_3990_; uint8_t v___y_3991_; lean_object* v___y_3992_; lean_object* v___y_3993_; lean_object* v___y_3994_; lean_object* v___y_3995_; lean_object* v___y_3996_; lean_object* v___y_3997_; lean_object* v___y_3998_; lean_object* v___y_3999_; lean_object* v___y_4000_; lean_object* v___y_4001_; lean_object* v___y_4002_; lean_object* v___y_4003_; lean_object* v___y_4004_; lean_object* v___y_4005_; lean_object* v___y_4011_; lean_object* v___y_4012_; lean_object* v___y_4013_; lean_object* v___y_4014_; lean_object* v___y_4015_; lean_object* v___y_4016_; uint8_t v___y_4017_; lean_object* v___y_4018_; lean_object* v___y_4019_; lean_object* v___y_4020_; lean_object* v___y_4021_; lean_object* v___y_4022_; lean_object* v___y_4023_; lean_object* v___y_4024_; lean_object* v___y_4025_; lean_object* v___y_4026_; lean_object* v___y_4027_; lean_object* v___y_4028_; lean_object* v___y_4029_; lean_object* v___y_4030_; lean_object* v___y_4043_; lean_object* v___y_4044_; lean_object* v___y_4045_; lean_object* v___y_4046_; lean_object* v___y_4047_; lean_object* v___y_4048_; uint8_t v___y_4049_; lean_object* v___y_4050_; lean_object* v___y_4051_; lean_object* v___y_4052_; lean_object* v___y_4053_; lean_object* v___y_4054_; lean_object* v___y_4055_; lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v___y_4058_; lean_object* v___y_4059_; lean_object* v_h_4102_; lean_object* v___y_4103_; lean_object* v___y_4104_; lean_object* v___y_4105_; lean_object* v___y_4106_; lean_object* v___y_4107_; lean_object* v___y_4108_; lean_object* v___y_4109_; lean_object* v___y_4110_; lean_object* v___y_4111_; lean_object* v___y_4112_; lean_object* v___y_4113_; lean_object* v___y_4259_; lean_object* v___y_4260_; lean_object* v___y_4261_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4264_; lean_object* v___y_4265_; lean_object* v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4268_; lean_object* v___y_4269_; uint8_t v___x_4277_; 
v___x_4277_ = lean_unbox(v_a_3980_);
if (v___x_4277_ == 0)
{
lean_object* v___x_4278_; lean_object* v___x_4280_; 
lean_dec(v_a_3980_);
lean_dec_ref(v_he_3859_);
lean_dec_ref(v_e_3858_);
lean_dec_ref(v_c_3857_);
v___x_4278_ = lean_box(0);
if (v_isShared_3983_ == 0)
{
lean_ctor_set(v___x_3982_, 0, v___x_4278_);
v___x_4280_ = v___x_3982_;
goto v_reusejp_4279_;
}
else
{
lean_object* v_reuseFailAlloc_4281_; 
v_reuseFailAlloc_4281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4281_, 0, v___x_4278_);
v___x_4280_ = v_reuseFailAlloc_4281_;
goto v_reusejp_4279_;
}
v_reusejp_4279_:
{
return v___x_4280_;
}
}
else
{
lean_object* v_options_4282_; uint8_t v_hasTrace_4283_; 
lean_del_object(v___x_3982_);
v_options_4282_ = lean_ctor_get(v_a_3869_, 2);
v_hasTrace_4283_ = lean_ctor_get_uint8(v_options_4282_, sizeof(void*)*1);
if (v_hasTrace_4283_ == 0)
{
v___y_4259_ = v_a_3860_;
v___y_4260_ = v_a_3861_;
v___y_4261_ = v_a_3862_;
v___y_4262_ = v_a_3863_;
v___y_4263_ = v_a_3864_;
v___y_4264_ = v_a_3865_;
v___y_4265_ = v_a_3866_;
v___y_4266_ = v_a_3867_;
v___y_4267_ = v_a_3868_;
v___y_4268_ = v_a_3869_;
v___y_4269_ = v_a_3870_;
goto v___jp_4258_;
}
else
{
lean_object* v_inheritedTraceOptions_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; uint8_t v___x_4287_; 
v_inheritedTraceOptions_4284_ = lean_ctor_get(v_a_3869_, 13);
v___x_4285_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4);
v___x_4286_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5);
v___x_4287_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4284_, v_options_4282_, v___x_4286_);
if (v___x_4287_ == 0)
{
v___y_4259_ = v_a_3860_;
v___y_4260_ = v_a_3861_;
v___y_4261_ = v_a_3862_;
v___y_4262_ = v_a_3863_;
v___y_4263_ = v_a_3864_;
v___y_4264_ = v_a_3865_;
v___y_4265_ = v_a_3866_;
v___y_4266_ = v_a_3867_;
v___y_4267_ = v_a_3868_;
v___y_4268_ = v_a_3869_;
v___y_4269_ = v_a_3870_;
goto v___jp_4258_;
}
else
{
lean_object* v___x_4288_; 
v___x_4288_ = l_Lean_Meta_Grind_Order_Cnstr_pp(v_c_3857_, v_a_3860_, v_a_3861_, v_a_3862_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_, v_a_3867_, v_a_3868_, v_a_3869_, v_a_3870_);
if (lean_obj_tag(v___x_4288_) == 0)
{
lean_object* v_a_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; 
v_a_4289_ = lean_ctor_get(v___x_4288_, 0);
lean_inc(v_a_4289_);
lean_dec_ref(v___x_4288_);
v___x_4290_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__31, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__31_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__31);
v___x_4291_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4291_, 0, v___x_4290_);
lean_ctor_set(v___x_4291_, 1, v_a_4289_);
v___x_4292_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v___x_4285_, v___x_4291_, v_a_3867_, v_a_3868_, v_a_3869_, v_a_3870_);
if (lean_obj_tag(v___x_4292_) == 0)
{
lean_dec_ref(v___x_4292_);
v___y_4259_ = v_a_3860_;
v___y_4260_ = v_a_3861_;
v___y_4261_ = v_a_3862_;
v___y_4262_ = v_a_3863_;
v___y_4263_ = v_a_3864_;
v___y_4264_ = v_a_3865_;
v___y_4265_ = v_a_3866_;
v___y_4266_ = v_a_3867_;
v___y_4267_ = v_a_3868_;
v___y_4268_ = v_a_3869_;
v___y_4269_ = v_a_3870_;
goto v___jp_4258_;
}
else
{
lean_dec(v_a_3980_);
lean_dec_ref(v_he_3859_);
lean_dec_ref(v_e_3858_);
lean_dec_ref(v_c_3857_);
return v___x_4292_;
}
}
else
{
lean_object* v_a_4293_; lean_object* v___x_4295_; uint8_t v_isShared_4296_; uint8_t v_isSharedCheck_4300_; 
lean_dec(v_a_3980_);
lean_dec_ref(v_he_3859_);
lean_dec_ref(v_e_3858_);
lean_dec_ref(v_c_3857_);
v_a_4293_ = lean_ctor_get(v___x_4288_, 0);
v_isSharedCheck_4300_ = !lean_is_exclusive(v___x_4288_);
if (v_isSharedCheck_4300_ == 0)
{
v___x_4295_ = v___x_4288_;
v_isShared_4296_ = v_isSharedCheck_4300_;
goto v_resetjp_4294_;
}
else
{
lean_inc(v_a_4293_);
lean_dec(v___x_4288_);
v___x_4295_ = lean_box(0);
v_isShared_4296_ = v_isSharedCheck_4300_;
goto v_resetjp_4294_;
}
v_resetjp_4294_:
{
lean_object* v___x_4298_; 
if (v_isShared_4296_ == 0)
{
v___x_4298_ = v___x_4295_;
goto v_reusejp_4297_;
}
else
{
lean_object* v_reuseFailAlloc_4299_; 
v_reuseFailAlloc_4299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4299_, 0, v_a_4293_);
v___x_4298_ = v_reuseFailAlloc_4299_;
goto v_reusejp_4297_;
}
v_reusejp_4297_:
{
return v___x_4298_;
}
}
}
}
}
}
v___jp_3984_:
{
lean_object* v___x_4006_; lean_object* v___x_4007_; 
v___x_4006_ = l_Lean_eagerReflBoolTrue;
lean_inc_ref(v___y_4005_);
v___x_4007_ = l_Lean_mkApp6(v___y_3992_, v___y_4003_, v___y_3994_, v___y_4000_, v___y_4005_, v___x_4006_, v___y_3986_);
if (v___y_3991_ == 0)
{
uint8_t v___x_4008_; 
v___x_4008_ = lean_unbox(v_a_3980_);
lean_dec(v_a_3980_);
v___y_3916_ = v___x_4006_;
v___y_3917_ = v___y_3985_;
v___y_3918_ = v___y_3987_;
v___y_3919_ = v___y_3988_;
v___y_3920_ = v___y_3989_;
v___y_3921_ = v___y_4005_;
v___y_3922_ = v___y_3990_;
v___y_3923_ = v___y_3993_;
v___y_3924_ = v___y_3996_;
v___y_3925_ = v___y_3995_;
v___y_3926_ = v___y_3997_;
v___y_3927_ = v___y_3999_;
v___y_3928_ = v___y_3998_;
v___y_3929_ = v___x_4007_;
v___y_3930_ = v___y_4001_;
v___y_3931_ = v___y_4002_;
v___y_3932_ = v___y_4004_;
v___y_3933_ = v___x_4008_;
goto v___jp_3915_;
}
else
{
uint8_t v___x_4009_; 
lean_dec(v_a_3980_);
v___x_4009_ = 0;
v___y_3916_ = v___x_4006_;
v___y_3917_ = v___y_3985_;
v___y_3918_ = v___y_3987_;
v___y_3919_ = v___y_3988_;
v___y_3920_ = v___y_3989_;
v___y_3921_ = v___y_4005_;
v___y_3922_ = v___y_3990_;
v___y_3923_ = v___y_3993_;
v___y_3924_ = v___y_3996_;
v___y_3925_ = v___y_3995_;
v___y_3926_ = v___y_3997_;
v___y_3927_ = v___y_3999_;
v___y_3928_ = v___y_3998_;
v___y_3929_ = v___x_4007_;
v___y_3930_ = v___y_4001_;
v___y_3931_ = v___y_4002_;
v___y_3932_ = v___y_4004_;
v___y_3933_ = v___x_4009_;
goto v___jp_3915_;
}
}
v___jp_4010_:
{
lean_object* v___x_4031_; uint8_t v___x_4032_; 
v___x_4031_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4032_ = lean_int_dec_le(v___x_4031_, v___y_4026_);
if (v___x_4032_ == 0)
{
lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; 
v___x_4033_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10);
v___x_4034_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13);
v___x_4035_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16);
v___x_4036_ = lean_int_neg(v___y_4026_);
v___x_4037_ = l_Int_toNat(v___x_4036_);
lean_dec(v___x_4036_);
v___x_4038_ = l_Lean_instToExprInt_mkNat(v___x_4037_);
v___x_4039_ = l_Lean_mkApp3(v___x_4033_, v___x_4034_, v___x_4035_, v___x_4038_);
v___y_3985_ = v___y_4011_;
v___y_3986_ = v___y_4012_;
v___y_3987_ = v___y_4013_;
v___y_3988_ = v___y_4014_;
v___y_3989_ = v___y_4015_;
v___y_3990_ = v___y_4016_;
v___y_3991_ = v___y_4017_;
v___y_3992_ = v___y_4018_;
v___y_3993_ = v___y_4019_;
v___y_3994_ = v___y_4020_;
v___y_3995_ = v___y_4021_;
v___y_3996_ = v___y_4022_;
v___y_3997_ = v___y_4023_;
v___y_3998_ = v___y_4025_;
v___y_3999_ = v___y_4024_;
v___y_4000_ = v___y_4030_;
v___y_4001_ = v___y_4026_;
v___y_4002_ = v___y_4027_;
v___y_4003_ = v___y_4028_;
v___y_4004_ = v___y_4029_;
v___y_4005_ = v___x_4039_;
goto v___jp_3984_;
}
else
{
lean_object* v___x_4040_; lean_object* v___x_4041_; 
v___x_4040_ = l_Int_toNat(v___y_4026_);
v___x_4041_ = l_Lean_instToExprInt_mkNat(v___x_4040_);
v___y_3985_ = v___y_4011_;
v___y_3986_ = v___y_4012_;
v___y_3987_ = v___y_4013_;
v___y_3988_ = v___y_4014_;
v___y_3989_ = v___y_4015_;
v___y_3990_ = v___y_4016_;
v___y_3991_ = v___y_4017_;
v___y_3992_ = v___y_4018_;
v___y_3993_ = v___y_4019_;
v___y_3994_ = v___y_4020_;
v___y_3995_ = v___y_4021_;
v___y_3996_ = v___y_4022_;
v___y_3997_ = v___y_4023_;
v___y_3998_ = v___y_4025_;
v___y_3999_ = v___y_4024_;
v___y_4000_ = v___y_4030_;
v___y_4001_ = v___y_4026_;
v___y_4002_ = v___y_4027_;
v___y_4003_ = v___y_4028_;
v___y_4004_ = v___y_4029_;
v___y_4005_ = v___x_4041_;
goto v___jp_3984_;
}
}
v___jp_4042_:
{
lean_object* v___x_4060_; 
lean_inc(v___y_4059_);
v___x_4060_ = l_Lean_Meta_Grind_Order_mkLinearOrdRingPrefix(v___y_4059_, v___y_4045_, v___y_4051_, v___y_4054_, v___y_4053_, v___y_4056_, v___y_4043_, v___y_4046_, v___y_4050_, v___y_4047_, v___y_4048_, v___y_4052_);
if (lean_obj_tag(v___x_4060_) == 0)
{
lean_object* v_a_4061_; lean_object* v___x_4062_; 
v_a_4061_ = lean_ctor_get(v___x_4060_, 0);
lean_inc(v_a_4061_);
lean_dec_ref(v___x_4060_);
v___x_4062_ = l_Lean_Meta_Grind_Order_getExpr(v___y_4055_, v___y_4045_, v___y_4051_, v___y_4054_, v___y_4053_, v___y_4056_, v___y_4043_, v___y_4046_, v___y_4050_, v___y_4047_, v___y_4048_, v___y_4052_);
if (lean_obj_tag(v___x_4062_) == 0)
{
lean_object* v_a_4063_; lean_object* v___x_4064_; 
v_a_4063_ = lean_ctor_get(v___x_4062_, 0);
lean_inc(v_a_4063_);
lean_dec_ref(v___x_4062_);
v___x_4064_ = l_Lean_Meta_Grind_Order_getExpr(v___y_4058_, v___y_4045_, v___y_4051_, v___y_4054_, v___y_4053_, v___y_4056_, v___y_4043_, v___y_4046_, v___y_4050_, v___y_4047_, v___y_4048_, v___y_4052_);
if (lean_obj_tag(v___x_4064_) == 0)
{
lean_object* v_a_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; uint8_t v___x_4068_; 
v_a_4065_ = lean_ctor_get(v___x_4064_, 0);
lean_inc(v_a_4065_);
lean_dec_ref(v___x_4064_);
v___x_4066_ = lean_int_neg(v___y_4057_);
v___x_4067_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4068_ = lean_int_dec_le(v___x_4067_, v___y_4057_);
if (v___x_4068_ == 0)
{
lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; 
lean_dec(v___y_4057_);
v___x_4069_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10);
v___x_4070_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13);
v___x_4071_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16);
v___x_4072_ = l_Int_toNat(v___x_4066_);
v___x_4073_ = l_Lean_instToExprInt_mkNat(v___x_4072_);
v___x_4074_ = l_Lean_mkApp3(v___x_4069_, v___x_4070_, v___x_4071_, v___x_4073_);
v___y_4011_ = v___y_4043_;
v___y_4012_ = v___y_4044_;
v___y_4013_ = v___y_4045_;
v___y_4014_ = v___y_4046_;
v___y_4015_ = v___y_4047_;
v___y_4016_ = v___y_4048_;
v___y_4017_ = v___y_4049_;
v___y_4018_ = v_a_4061_;
v___y_4019_ = v___y_4050_;
v___y_4020_ = v_a_4065_;
v___y_4021_ = v___y_4052_;
v___y_4022_ = v___y_4051_;
v___y_4023_ = v___y_4053_;
v___y_4024_ = v___y_4055_;
v___y_4025_ = v___y_4054_;
v___y_4026_ = v___x_4066_;
v___y_4027_ = v___y_4056_;
v___y_4028_ = v_a_4063_;
v___y_4029_ = v___y_4058_;
v___y_4030_ = v___x_4074_;
goto v___jp_4010_;
}
else
{
lean_object* v___x_4075_; lean_object* v___x_4076_; 
v___x_4075_ = l_Int_toNat(v___y_4057_);
lean_dec(v___y_4057_);
v___x_4076_ = l_Lean_instToExprInt_mkNat(v___x_4075_);
v___y_4011_ = v___y_4043_;
v___y_4012_ = v___y_4044_;
v___y_4013_ = v___y_4045_;
v___y_4014_ = v___y_4046_;
v___y_4015_ = v___y_4047_;
v___y_4016_ = v___y_4048_;
v___y_4017_ = v___y_4049_;
v___y_4018_ = v_a_4061_;
v___y_4019_ = v___y_4050_;
v___y_4020_ = v_a_4065_;
v___y_4021_ = v___y_4052_;
v___y_4022_ = v___y_4051_;
v___y_4023_ = v___y_4053_;
v___y_4024_ = v___y_4055_;
v___y_4025_ = v___y_4054_;
v___y_4026_ = v___x_4066_;
v___y_4027_ = v___y_4056_;
v___y_4028_ = v_a_4063_;
v___y_4029_ = v___y_4058_;
v___y_4030_ = v___x_4076_;
goto v___jp_4010_;
}
}
else
{
lean_object* v_a_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4084_; 
lean_dec(v_a_4063_);
lean_dec(v_a_4061_);
lean_dec(v___y_4058_);
lean_dec(v___y_4057_);
lean_dec(v___y_4055_);
lean_dec_ref(v___y_4044_);
lean_dec(v_a_3980_);
v_a_4077_ = lean_ctor_get(v___x_4064_, 0);
v_isSharedCheck_4084_ = !lean_is_exclusive(v___x_4064_);
if (v_isSharedCheck_4084_ == 0)
{
v___x_4079_ = v___x_4064_;
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_a_4077_);
lean_dec(v___x_4064_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4082_; 
if (v_isShared_4080_ == 0)
{
v___x_4082_ = v___x_4079_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4083_; 
v_reuseFailAlloc_4083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4083_, 0, v_a_4077_);
v___x_4082_ = v_reuseFailAlloc_4083_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
return v___x_4082_;
}
}
}
}
else
{
lean_object* v_a_4085_; lean_object* v___x_4087_; uint8_t v_isShared_4088_; uint8_t v_isSharedCheck_4092_; 
lean_dec(v_a_4061_);
lean_dec(v___y_4058_);
lean_dec(v___y_4057_);
lean_dec(v___y_4055_);
lean_dec_ref(v___y_4044_);
lean_dec(v_a_3980_);
v_a_4085_ = lean_ctor_get(v___x_4062_, 0);
v_isSharedCheck_4092_ = !lean_is_exclusive(v___x_4062_);
if (v_isSharedCheck_4092_ == 0)
{
v___x_4087_ = v___x_4062_;
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
else
{
lean_inc(v_a_4085_);
lean_dec(v___x_4062_);
v___x_4087_ = lean_box(0);
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
v_resetjp_4086_:
{
lean_object* v___x_4090_; 
if (v_isShared_4088_ == 0)
{
v___x_4090_ = v___x_4087_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v_a_4085_);
v___x_4090_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
return v___x_4090_;
}
}
}
}
else
{
lean_object* v_a_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4100_; 
lean_dec(v___y_4058_);
lean_dec(v___y_4057_);
lean_dec(v___y_4055_);
lean_dec_ref(v___y_4044_);
lean_dec(v_a_3980_);
v_a_4093_ = lean_ctor_get(v___x_4060_, 0);
v_isSharedCheck_4100_ = !lean_is_exclusive(v___x_4060_);
if (v_isSharedCheck_4100_ == 0)
{
v___x_4095_ = v___x_4060_;
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_a_4093_);
lean_dec(v___x_4060_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
lean_object* v___x_4098_; 
if (v_isShared_4096_ == 0)
{
v___x_4098_ = v___x_4095_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v_a_4093_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
}
}
v___jp_4101_:
{
lean_object* v___x_4114_; 
v___x_4114_ = l_Lean_Meta_Grind_Order_isRing(v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4114_) == 0)
{
lean_object* v_a_4115_; uint8_t v___x_4116_; 
v_a_4115_ = lean_ctor_get(v___x_4114_, 0);
lean_inc(v_a_4115_);
lean_dec_ref(v___x_4114_);
v___x_4116_ = lean_unbox(v_a_4115_);
if (v___x_4116_ == 0)
{
uint8_t v_kind_4117_; 
v_kind_4117_ = lean_ctor_get_uint8(v_c_3857_, sizeof(void*)*5);
if (v_kind_4117_ == 1)
{
lean_object* v_u_4118_; lean_object* v_v_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; 
lean_dec(v_a_3980_);
v_u_4118_ = lean_ctor_get(v_c_3857_, 0);
lean_inc(v_u_4118_);
v_v_4119_ = lean_ctor_get(v_c_3857_, 1);
lean_inc(v_v_4119_);
lean_dec_ref(v_c_3857_);
v___x_4120_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18);
v___x_4121_ = l_Lean_Meta_Grind_Order_mkLeLtLinearPrefix(v___x_4120_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4121_) == 0)
{
lean_object* v_a_4122_; lean_object* v___x_4123_; 
v_a_4122_ = lean_ctor_get(v___x_4121_, 0);
lean_inc(v_a_4122_);
lean_dec_ref(v___x_4121_);
v___x_4123_ = l_Lean_Meta_Grind_Order_getExpr(v_u_4118_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4123_) == 0)
{
lean_object* v_a_4124_; lean_object* v___x_4125_; 
v_a_4124_ = lean_ctor_get(v___x_4123_, 0);
lean_inc(v_a_4124_);
lean_dec_ref(v___x_4123_);
v___x_4125_ = l_Lean_Meta_Grind_Order_getExpr(v_v_4119_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4125_) == 0)
{
lean_object* v_a_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; uint8_t v___x_4130_; lean_object* v___x_4131_; 
v_a_4126_ = lean_ctor_get(v___x_4125_, 0);
lean_inc(v_a_4126_);
lean_dec_ref(v___x_4125_);
v___x_4127_ = l_Lean_mkApp3(v_a_4122_, v_a_4124_, v_a_4126_, v_h_4102_);
v___x_4128_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4129_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4129_, 0, v___x_4128_);
v___x_4130_ = lean_unbox(v_a_4115_);
lean_dec(v_a_4115_);
lean_ctor_set_uint8(v___x_4129_, sizeof(void*)*1, v___x_4130_);
v___x_4131_ = l_Lean_Meta_Grind_Order_addEdge(v_v_4119_, v_u_4118_, v___x_4129_, v___x_4127_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
return v___x_4131_;
}
else
{
lean_object* v_a_4132_; lean_object* v___x_4134_; uint8_t v_isShared_4135_; uint8_t v_isSharedCheck_4139_; 
lean_dec(v_a_4124_);
lean_dec(v_a_4122_);
lean_dec(v_v_4119_);
lean_dec(v_u_4118_);
lean_dec(v_a_4115_);
lean_dec_ref(v_h_4102_);
v_a_4132_ = lean_ctor_get(v___x_4125_, 0);
v_isSharedCheck_4139_ = !lean_is_exclusive(v___x_4125_);
if (v_isSharedCheck_4139_ == 0)
{
v___x_4134_ = v___x_4125_;
v_isShared_4135_ = v_isSharedCheck_4139_;
goto v_resetjp_4133_;
}
else
{
lean_inc(v_a_4132_);
lean_dec(v___x_4125_);
v___x_4134_ = lean_box(0);
v_isShared_4135_ = v_isSharedCheck_4139_;
goto v_resetjp_4133_;
}
v_resetjp_4133_:
{
lean_object* v___x_4137_; 
if (v_isShared_4135_ == 0)
{
v___x_4137_ = v___x_4134_;
goto v_reusejp_4136_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v_a_4132_);
v___x_4137_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4136_;
}
v_reusejp_4136_:
{
return v___x_4137_;
}
}
}
}
else
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4147_; 
lean_dec(v_a_4122_);
lean_dec(v_v_4119_);
lean_dec(v_u_4118_);
lean_dec(v_a_4115_);
lean_dec_ref(v_h_4102_);
v_a_4140_ = lean_ctor_get(v___x_4123_, 0);
v_isSharedCheck_4147_ = !lean_is_exclusive(v___x_4123_);
if (v_isSharedCheck_4147_ == 0)
{
v___x_4142_ = v___x_4123_;
v_isShared_4143_ = v_isSharedCheck_4147_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v___x_4123_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4147_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4145_; 
if (v_isShared_4143_ == 0)
{
v___x_4145_ = v___x_4142_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4146_; 
v_reuseFailAlloc_4146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4146_, 0, v_a_4140_);
v___x_4145_ = v_reuseFailAlloc_4146_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
return v___x_4145_;
}
}
}
}
else
{
lean_object* v_a_4148_; lean_object* v___x_4150_; uint8_t v_isShared_4151_; uint8_t v_isSharedCheck_4155_; 
lean_dec(v_v_4119_);
lean_dec(v_u_4118_);
lean_dec(v_a_4115_);
lean_dec_ref(v_h_4102_);
v_a_4148_ = lean_ctor_get(v___x_4121_, 0);
v_isSharedCheck_4155_ = !lean_is_exclusive(v___x_4121_);
if (v_isSharedCheck_4155_ == 0)
{
v___x_4150_ = v___x_4121_;
v_isShared_4151_ = v_isSharedCheck_4155_;
goto v_resetjp_4149_;
}
else
{
lean_inc(v_a_4148_);
lean_dec(v___x_4121_);
v___x_4150_ = lean_box(0);
v_isShared_4151_ = v_isSharedCheck_4155_;
goto v_resetjp_4149_;
}
v_resetjp_4149_:
{
lean_object* v___x_4153_; 
if (v_isShared_4151_ == 0)
{
v___x_4153_ = v___x_4150_;
goto v_reusejp_4152_;
}
else
{
lean_object* v_reuseFailAlloc_4154_; 
v_reuseFailAlloc_4154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4154_, 0, v_a_4148_);
v___x_4153_ = v_reuseFailAlloc_4154_;
goto v_reusejp_4152_;
}
v_reusejp_4152_:
{
return v___x_4153_;
}
}
}
}
else
{
lean_object* v_u_4156_; lean_object* v_v_4157_; lean_object* v___x_4158_; 
lean_dec(v_a_4115_);
v_u_4156_ = lean_ctor_get(v_c_3857_, 0);
lean_inc(v_u_4156_);
v_v_4157_ = lean_ctor_get(v_c_3857_, 1);
lean_inc(v_v_4157_);
lean_dec_ref(v_c_3857_);
v___x_4158_ = l_Lean_Meta_Grind_Order_hasLt(v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4158_) == 0)
{
lean_object* v_a_4159_; uint8_t v___x_4160_; 
v_a_4159_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4159_);
lean_dec_ref(v___x_4158_);
v___x_4160_ = lean_unbox(v_a_4159_);
if (v___x_4160_ == 0)
{
lean_object* v___x_4161_; lean_object* v___x_4162_; 
lean_dec(v_a_3980_);
v___x_4161_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20);
v___x_4162_ = l_Lean_Meta_Grind_Order_mkLeLinearPrefix(v___x_4161_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4162_) == 0)
{
lean_object* v_a_4163_; lean_object* v___x_4164_; 
v_a_4163_ = lean_ctor_get(v___x_4162_, 0);
lean_inc(v_a_4163_);
lean_dec_ref(v___x_4162_);
v___x_4164_ = l_Lean_Meta_Grind_Order_getExpr(v_u_4156_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4164_) == 0)
{
lean_object* v_a_4165_; lean_object* v___x_4166_; 
v_a_4165_ = lean_ctor_get(v___x_4164_, 0);
lean_inc(v_a_4165_);
lean_dec_ref(v___x_4164_);
v___x_4166_ = l_Lean_Meta_Grind_Order_getExpr(v_v_4157_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4166_) == 0)
{
lean_object* v_a_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; uint8_t v___x_4171_; lean_object* v___x_4172_; 
v_a_4167_ = lean_ctor_get(v___x_4166_, 0);
lean_inc(v_a_4167_);
lean_dec_ref(v___x_4166_);
v___x_4168_ = l_Lean_mkApp3(v_a_4163_, v_a_4165_, v_a_4167_, v_h_4102_);
v___x_4169_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4170_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4170_, 0, v___x_4169_);
v___x_4171_ = lean_unbox(v_a_4159_);
lean_dec(v_a_4159_);
lean_ctor_set_uint8(v___x_4170_, sizeof(void*)*1, v___x_4171_);
v___x_4172_ = l_Lean_Meta_Grind_Order_addEdge(v_v_4157_, v_u_4156_, v___x_4170_, v___x_4168_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
return v___x_4172_;
}
else
{
lean_object* v_a_4173_; lean_object* v___x_4175_; uint8_t v_isShared_4176_; uint8_t v_isSharedCheck_4180_; 
lean_dec(v_a_4165_);
lean_dec(v_a_4163_);
lean_dec(v_a_4159_);
lean_dec(v_v_4157_);
lean_dec(v_u_4156_);
lean_dec_ref(v_h_4102_);
v_a_4173_ = lean_ctor_get(v___x_4166_, 0);
v_isSharedCheck_4180_ = !lean_is_exclusive(v___x_4166_);
if (v_isSharedCheck_4180_ == 0)
{
v___x_4175_ = v___x_4166_;
v_isShared_4176_ = v_isSharedCheck_4180_;
goto v_resetjp_4174_;
}
else
{
lean_inc(v_a_4173_);
lean_dec(v___x_4166_);
v___x_4175_ = lean_box(0);
v_isShared_4176_ = v_isSharedCheck_4180_;
goto v_resetjp_4174_;
}
v_resetjp_4174_:
{
lean_object* v___x_4178_; 
if (v_isShared_4176_ == 0)
{
v___x_4178_ = v___x_4175_;
goto v_reusejp_4177_;
}
else
{
lean_object* v_reuseFailAlloc_4179_; 
v_reuseFailAlloc_4179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4179_, 0, v_a_4173_);
v___x_4178_ = v_reuseFailAlloc_4179_;
goto v_reusejp_4177_;
}
v_reusejp_4177_:
{
return v___x_4178_;
}
}
}
}
else
{
lean_object* v_a_4181_; lean_object* v___x_4183_; uint8_t v_isShared_4184_; uint8_t v_isSharedCheck_4188_; 
lean_dec(v_a_4163_);
lean_dec(v_a_4159_);
lean_dec(v_v_4157_);
lean_dec(v_u_4156_);
lean_dec_ref(v_h_4102_);
v_a_4181_ = lean_ctor_get(v___x_4164_, 0);
v_isSharedCheck_4188_ = !lean_is_exclusive(v___x_4164_);
if (v_isSharedCheck_4188_ == 0)
{
v___x_4183_ = v___x_4164_;
v_isShared_4184_ = v_isSharedCheck_4188_;
goto v_resetjp_4182_;
}
else
{
lean_inc(v_a_4181_);
lean_dec(v___x_4164_);
v___x_4183_ = lean_box(0);
v_isShared_4184_ = v_isSharedCheck_4188_;
goto v_resetjp_4182_;
}
v_resetjp_4182_:
{
lean_object* v___x_4186_; 
if (v_isShared_4184_ == 0)
{
v___x_4186_ = v___x_4183_;
goto v_reusejp_4185_;
}
else
{
lean_object* v_reuseFailAlloc_4187_; 
v_reuseFailAlloc_4187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4187_, 0, v_a_4181_);
v___x_4186_ = v_reuseFailAlloc_4187_;
goto v_reusejp_4185_;
}
v_reusejp_4185_:
{
return v___x_4186_;
}
}
}
}
else
{
lean_object* v_a_4189_; lean_object* v___x_4191_; uint8_t v_isShared_4192_; uint8_t v_isSharedCheck_4196_; 
lean_dec(v_a_4159_);
lean_dec(v_v_4157_);
lean_dec(v_u_4156_);
lean_dec_ref(v_h_4102_);
v_a_4189_ = lean_ctor_get(v___x_4162_, 0);
v_isSharedCheck_4196_ = !lean_is_exclusive(v___x_4162_);
if (v_isSharedCheck_4196_ == 0)
{
v___x_4191_ = v___x_4162_;
v_isShared_4192_ = v_isSharedCheck_4196_;
goto v_resetjp_4190_;
}
else
{
lean_inc(v_a_4189_);
lean_dec(v___x_4162_);
v___x_4191_ = lean_box(0);
v_isShared_4192_ = v_isSharedCheck_4196_;
goto v_resetjp_4190_;
}
v_resetjp_4190_:
{
lean_object* v___x_4194_; 
if (v_isShared_4192_ == 0)
{
v___x_4194_ = v___x_4191_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v_a_4189_);
v___x_4194_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
return v___x_4194_;
}
}
}
}
else
{
lean_object* v___x_4197_; lean_object* v___x_4198_; 
lean_dec(v_a_4159_);
v___x_4197_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22);
v___x_4198_ = l_Lean_Meta_Grind_Order_mkLeLtLinearPrefix(v___x_4197_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4198_) == 0)
{
lean_object* v_a_4199_; lean_object* v___x_4200_; 
v_a_4199_ = lean_ctor_get(v___x_4198_, 0);
lean_inc(v_a_4199_);
lean_dec_ref(v___x_4198_);
v___x_4200_ = l_Lean_Meta_Grind_Order_getExpr(v_u_4156_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4200_) == 0)
{
lean_object* v_a_4201_; lean_object* v___x_4202_; 
v_a_4201_ = lean_ctor_get(v___x_4200_, 0);
lean_inc(v_a_4201_);
lean_dec_ref(v___x_4200_);
v___x_4202_ = l_Lean_Meta_Grind_Order_getExpr(v_v_4157_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4202_) == 0)
{
lean_object* v_a_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; uint8_t v___x_4207_; lean_object* v___x_4208_; 
v_a_4203_ = lean_ctor_get(v___x_4202_, 0);
lean_inc(v_a_4203_);
lean_dec_ref(v___x_4202_);
v___x_4204_ = l_Lean_mkApp3(v_a_4199_, v_a_4201_, v_a_4203_, v_h_4102_);
v___x_4205_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4206_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4206_, 0, v___x_4205_);
v___x_4207_ = lean_unbox(v_a_3980_);
lean_dec(v_a_3980_);
lean_ctor_set_uint8(v___x_4206_, sizeof(void*)*1, v___x_4207_);
v___x_4208_ = l_Lean_Meta_Grind_Order_addEdge(v_v_4157_, v_u_4156_, v___x_4206_, v___x_4204_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
return v___x_4208_;
}
else
{
lean_object* v_a_4209_; lean_object* v___x_4211_; uint8_t v_isShared_4212_; uint8_t v_isSharedCheck_4216_; 
lean_dec(v_a_4201_);
lean_dec(v_a_4199_);
lean_dec(v_v_4157_);
lean_dec(v_u_4156_);
lean_dec_ref(v_h_4102_);
lean_dec(v_a_3980_);
v_a_4209_ = lean_ctor_get(v___x_4202_, 0);
v_isSharedCheck_4216_ = !lean_is_exclusive(v___x_4202_);
if (v_isSharedCheck_4216_ == 0)
{
v___x_4211_ = v___x_4202_;
v_isShared_4212_ = v_isSharedCheck_4216_;
goto v_resetjp_4210_;
}
else
{
lean_inc(v_a_4209_);
lean_dec(v___x_4202_);
v___x_4211_ = lean_box(0);
v_isShared_4212_ = v_isSharedCheck_4216_;
goto v_resetjp_4210_;
}
v_resetjp_4210_:
{
lean_object* v___x_4214_; 
if (v_isShared_4212_ == 0)
{
v___x_4214_ = v___x_4211_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4215_; 
v_reuseFailAlloc_4215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4215_, 0, v_a_4209_);
v___x_4214_ = v_reuseFailAlloc_4215_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
return v___x_4214_;
}
}
}
}
else
{
lean_object* v_a_4217_; lean_object* v___x_4219_; uint8_t v_isShared_4220_; uint8_t v_isSharedCheck_4224_; 
lean_dec(v_a_4199_);
lean_dec(v_v_4157_);
lean_dec(v_u_4156_);
lean_dec_ref(v_h_4102_);
lean_dec(v_a_3980_);
v_a_4217_ = lean_ctor_get(v___x_4200_, 0);
v_isSharedCheck_4224_ = !lean_is_exclusive(v___x_4200_);
if (v_isSharedCheck_4224_ == 0)
{
v___x_4219_ = v___x_4200_;
v_isShared_4220_ = v_isSharedCheck_4224_;
goto v_resetjp_4218_;
}
else
{
lean_inc(v_a_4217_);
lean_dec(v___x_4200_);
v___x_4219_ = lean_box(0);
v_isShared_4220_ = v_isSharedCheck_4224_;
goto v_resetjp_4218_;
}
v_resetjp_4218_:
{
lean_object* v___x_4222_; 
if (v_isShared_4220_ == 0)
{
v___x_4222_ = v___x_4219_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v_a_4217_);
v___x_4222_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
return v___x_4222_;
}
}
}
}
else
{
lean_object* v_a_4225_; lean_object* v___x_4227_; uint8_t v_isShared_4228_; uint8_t v_isSharedCheck_4232_; 
lean_dec(v_v_4157_);
lean_dec(v_u_4156_);
lean_dec_ref(v_h_4102_);
lean_dec(v_a_3980_);
v_a_4225_ = lean_ctor_get(v___x_4198_, 0);
v_isSharedCheck_4232_ = !lean_is_exclusive(v___x_4198_);
if (v_isSharedCheck_4232_ == 0)
{
v___x_4227_ = v___x_4198_;
v_isShared_4228_ = v_isSharedCheck_4232_;
goto v_resetjp_4226_;
}
else
{
lean_inc(v_a_4225_);
lean_dec(v___x_4198_);
v___x_4227_ = lean_box(0);
v_isShared_4228_ = v_isSharedCheck_4232_;
goto v_resetjp_4226_;
}
v_resetjp_4226_:
{
lean_object* v___x_4230_; 
if (v_isShared_4228_ == 0)
{
v___x_4230_ = v___x_4227_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v_a_4225_);
v___x_4230_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
return v___x_4230_;
}
}
}
}
}
else
{
lean_object* v_a_4233_; lean_object* v___x_4235_; uint8_t v_isShared_4236_; uint8_t v_isSharedCheck_4240_; 
lean_dec(v_v_4157_);
lean_dec(v_u_4156_);
lean_dec_ref(v_h_4102_);
lean_dec(v_a_3980_);
v_a_4233_ = lean_ctor_get(v___x_4158_, 0);
v_isSharedCheck_4240_ = !lean_is_exclusive(v___x_4158_);
if (v_isSharedCheck_4240_ == 0)
{
v___x_4235_ = v___x_4158_;
v_isShared_4236_ = v_isSharedCheck_4240_;
goto v_resetjp_4234_;
}
else
{
lean_inc(v_a_4233_);
lean_dec(v___x_4158_);
v___x_4235_ = lean_box(0);
v_isShared_4236_ = v_isSharedCheck_4240_;
goto v_resetjp_4234_;
}
v_resetjp_4234_:
{
lean_object* v___x_4238_; 
if (v_isShared_4236_ == 0)
{
v___x_4238_ = v___x_4235_;
goto v_reusejp_4237_;
}
else
{
lean_object* v_reuseFailAlloc_4239_; 
v_reuseFailAlloc_4239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4239_, 0, v_a_4233_);
v___x_4238_ = v_reuseFailAlloc_4239_;
goto v_reusejp_4237_;
}
v_reusejp_4237_:
{
return v___x_4238_;
}
}
}
}
}
else
{
uint8_t v_kind_4241_; 
lean_dec(v_a_4115_);
v_kind_4241_ = lean_ctor_get_uint8(v_c_3857_, sizeof(void*)*5);
if (v_kind_4241_ == 1)
{
lean_object* v_u_4242_; lean_object* v_v_4243_; lean_object* v_k_4244_; lean_object* v___x_4245_; 
v_u_4242_ = lean_ctor_get(v_c_3857_, 0);
lean_inc(v_u_4242_);
v_v_4243_ = lean_ctor_get(v_c_3857_, 1);
lean_inc(v_v_4243_);
v_k_4244_ = lean_ctor_get(v_c_3857_, 2);
lean_inc(v_k_4244_);
lean_dec_ref(v_c_3857_);
v___x_4245_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24);
v___y_4043_ = v___y_4108_;
v___y_4044_ = v_h_4102_;
v___y_4045_ = v___y_4103_;
v___y_4046_ = v___y_4109_;
v___y_4047_ = v___y_4111_;
v___y_4048_ = v___y_4112_;
v___y_4049_ = v_kind_4241_;
v___y_4050_ = v___y_4110_;
v___y_4051_ = v___y_4104_;
v___y_4052_ = v___y_4113_;
v___y_4053_ = v___y_4106_;
v___y_4054_ = v___y_4105_;
v___y_4055_ = v_u_4242_;
v___y_4056_ = v___y_4107_;
v___y_4057_ = v_k_4244_;
v___y_4058_ = v_v_4243_;
v___y_4059_ = v___x_4245_;
goto v___jp_4042_;
}
else
{
lean_object* v_u_4246_; lean_object* v_v_4247_; lean_object* v_k_4248_; lean_object* v___x_4249_; 
v_u_4246_ = lean_ctor_get(v_c_3857_, 0);
lean_inc(v_u_4246_);
v_v_4247_ = lean_ctor_get(v_c_3857_, 1);
lean_inc(v_v_4247_);
v_k_4248_ = lean_ctor_get(v_c_3857_, 2);
lean_inc(v_k_4248_);
lean_dec_ref(v_c_3857_);
v___x_4249_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26);
v___y_4043_ = v___y_4108_;
v___y_4044_ = v_h_4102_;
v___y_4045_ = v___y_4103_;
v___y_4046_ = v___y_4109_;
v___y_4047_ = v___y_4111_;
v___y_4048_ = v___y_4112_;
v___y_4049_ = v_kind_4241_;
v___y_4050_ = v___y_4110_;
v___y_4051_ = v___y_4104_;
v___y_4052_ = v___y_4113_;
v___y_4053_ = v___y_4106_;
v___y_4054_ = v___y_4105_;
v___y_4055_ = v_u_4246_;
v___y_4056_ = v___y_4107_;
v___y_4057_ = v_k_4248_;
v___y_4058_ = v_v_4247_;
v___y_4059_ = v___x_4249_;
goto v___jp_4042_;
}
}
}
else
{
lean_object* v_a_4250_; lean_object* v___x_4252_; uint8_t v_isShared_4253_; uint8_t v_isSharedCheck_4257_; 
lean_dec_ref(v_h_4102_);
lean_dec(v_a_3980_);
lean_dec_ref(v_c_3857_);
v_a_4250_ = lean_ctor_get(v___x_4114_, 0);
v_isSharedCheck_4257_ = !lean_is_exclusive(v___x_4114_);
if (v_isSharedCheck_4257_ == 0)
{
v___x_4252_ = v___x_4114_;
v_isShared_4253_ = v_isSharedCheck_4257_;
goto v_resetjp_4251_;
}
else
{
lean_inc(v_a_4250_);
lean_dec(v___x_4114_);
v___x_4252_ = lean_box(0);
v_isShared_4253_ = v_isSharedCheck_4257_;
goto v_resetjp_4251_;
}
v_resetjp_4251_:
{
lean_object* v___x_4255_; 
if (v_isShared_4253_ == 0)
{
v___x_4255_ = v___x_4252_;
goto v_reusejp_4254_;
}
else
{
lean_object* v_reuseFailAlloc_4256_; 
v_reuseFailAlloc_4256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4256_, 0, v_a_4250_);
v___x_4255_ = v_reuseFailAlloc_4256_;
goto v_reusejp_4254_;
}
v_reusejp_4254_:
{
return v___x_4255_;
}
}
}
}
v___jp_4258_:
{
lean_object* v_h_x3f_4270_; 
v_h_x3f_4270_ = lean_ctor_get(v_c_3857_, 4);
if (lean_obj_tag(v_h_x3f_4270_) == 1)
{
lean_object* v_e_4271_; lean_object* v_val_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; 
v_e_4271_ = lean_ctor_get(v_c_3857_, 3);
v_val_4272_ = lean_ctor_get(v_h_x3f_4270_, 0);
v___x_4273_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__29, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__29_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__29);
lean_inc_ref(v_e_3858_);
v___x_4274_ = l_Lean_Meta_mkOfEqFalseCore(v_e_3858_, v_he_3859_);
lean_inc(v_val_4272_);
lean_inc_ref(v_e_4271_);
v___x_4275_ = l_Lean_mkApp4(v___x_4273_, v_e_3858_, v_e_4271_, v_val_4272_, v___x_4274_);
v_h_4102_ = v___x_4275_;
v___y_4103_ = v___y_4259_;
v___y_4104_ = v___y_4260_;
v___y_4105_ = v___y_4261_;
v___y_4106_ = v___y_4262_;
v___y_4107_ = v___y_4263_;
v___y_4108_ = v___y_4264_;
v___y_4109_ = v___y_4265_;
v___y_4110_ = v___y_4266_;
v___y_4111_ = v___y_4267_;
v___y_4112_ = v___y_4268_;
v___y_4113_ = v___y_4269_;
goto v___jp_4101_;
}
else
{
lean_object* v___x_4276_; 
v___x_4276_ = l_Lean_Meta_mkOfEqFalseCore(v_e_3858_, v_he_3859_);
v_h_4102_ = v___x_4276_;
v___y_4103_ = v___y_4259_;
v___y_4104_ = v___y_4260_;
v___y_4105_ = v___y_4261_;
v___y_4106_ = v___y_4262_;
v___y_4107_ = v___y_4263_;
v___y_4108_ = v___y_4264_;
v___y_4109_ = v___y_4265_;
v___y_4110_ = v___y_4266_;
v___y_4111_ = v___y_4267_;
v___y_4112_ = v___y_4268_;
v___y_4113_ = v___y_4269_;
goto v___jp_4101_;
}
}
}
}
else
{
lean_object* v_a_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4309_; 
lean_dec_ref(v_he_3859_);
lean_dec_ref(v_e_3858_);
lean_dec_ref(v_c_3857_);
v_a_4302_ = lean_ctor_get(v___x_3979_, 0);
v_isSharedCheck_4309_ = !lean_is_exclusive(v___x_3979_);
if (v_isSharedCheck_4309_ == 0)
{
v___x_4304_ = v___x_3979_;
v_isShared_4305_ = v_isSharedCheck_4309_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_a_4302_);
lean_dec(v___x_3979_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4309_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
lean_object* v___x_4307_; 
if (v_isShared_4305_ == 0)
{
v___x_4307_ = v___x_4304_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4308_; 
v_reuseFailAlloc_4308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4308_, 0, v_a_4302_);
v___x_4307_ = v_reuseFailAlloc_4308_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
return v___x_4307_;
}
}
}
v___jp_3872_:
{
lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3889_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3889_, 0, v_k_x27_3875_);
lean_ctor_set_uint8(v___x_3889_, sizeof(void*)*1, v_strict_3877_);
v___x_3890_ = l_Lean_Meta_Grind_Order_addEdge(v___y_3874_, v___y_3873_, v___x_3889_, v_h_3876_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_, v___y_3888_);
return v___x_3890_;
}
v___jp_3891_:
{
lean_object* v___x_3913_; uint8_t v___x_3914_; 
lean_inc_ref(v___y_3910_);
v___x_3913_ = l_Lean_mkApp6(v___y_3910_, v___y_3899_, v___y_3904_, v___y_3898_, v___y_3912_, v___y_3892_, v___y_3908_);
v___x_3914_ = 0;
v___y_3873_ = v___y_3906_;
v___y_3874_ = v___y_3911_;
v_k_x27_3875_ = v___y_3901_;
v_h_3876_ = v___x_3913_;
v_strict_3877_ = v___x_3914_;
v___y_3878_ = v___y_3896_;
v___y_3879_ = v___y_3903_;
v___y_3880_ = v___y_3907_;
v___y_3881_ = v___y_3905_;
v___y_3882_ = v___y_3909_;
v___y_3883_ = v___y_3893_;
v___y_3884_ = v___y_3895_;
v___y_3885_ = v___y_3900_;
v___y_3886_ = v___y_3894_;
v___y_3887_ = v___y_3897_;
v___y_3888_ = v___y_3902_;
goto v___jp_3872_;
}
v___jp_3915_:
{
lean_object* v___x_3934_; 
v___x_3934_ = l_Lean_Meta_Grind_Order_isInt(v___y_3918_, v___y_3924_, v___y_3928_, v___y_3926_, v___y_3931_, v___y_3917_, v___y_3919_, v___y_3923_, v___y_3920_, v___y_3922_, v___y_3925_);
if (lean_obj_tag(v___x_3934_) == 0)
{
lean_object* v_a_3935_; uint8_t v___x_3936_; 
v_a_3935_ = lean_ctor_get(v___x_3934_, 0);
lean_inc(v_a_3935_);
lean_dec_ref(v___x_3934_);
v___x_3936_ = lean_unbox(v_a_3935_);
lean_dec(v_a_3935_);
if (v___x_3936_ == 0)
{
lean_dec_ref(v___y_3921_);
lean_dec_ref(v___y_3916_);
v___y_3873_ = v___y_3927_;
v___y_3874_ = v___y_3932_;
v_k_x27_3875_ = v___y_3930_;
v_h_3876_ = v___y_3929_;
v_strict_3877_ = v___y_3933_;
v___y_3878_ = v___y_3918_;
v___y_3879_ = v___y_3924_;
v___y_3880_ = v___y_3928_;
v___y_3881_ = v___y_3926_;
v___y_3882_ = v___y_3931_;
v___y_3883_ = v___y_3917_;
v___y_3884_ = v___y_3919_;
v___y_3885_ = v___y_3923_;
v___y_3886_ = v___y_3920_;
v___y_3887_ = v___y_3922_;
v___y_3888_ = v___y_3925_;
goto v___jp_3872_;
}
else
{
if (v___y_3933_ == 0)
{
lean_dec_ref(v___y_3921_);
lean_dec_ref(v___y_3916_);
v___y_3873_ = v___y_3927_;
v___y_3874_ = v___y_3932_;
v_k_x27_3875_ = v___y_3930_;
v_h_3876_ = v___y_3929_;
v_strict_3877_ = v___y_3933_;
v___y_3878_ = v___y_3918_;
v___y_3879_ = v___y_3924_;
v___y_3880_ = v___y_3928_;
v___y_3881_ = v___y_3926_;
v___y_3882_ = v___y_3931_;
v___y_3883_ = v___y_3917_;
v___y_3884_ = v___y_3919_;
v___y_3885_ = v___y_3923_;
v___y_3886_ = v___y_3920_;
v___y_3887_ = v___y_3922_;
v___y_3888_ = v___y_3925_;
goto v___jp_3872_;
}
else
{
lean_object* v___x_3937_; 
v___x_3937_ = l_Lean_Meta_Grind_Order_getExpr(v___y_3932_, v___y_3918_, v___y_3924_, v___y_3928_, v___y_3926_, v___y_3931_, v___y_3917_, v___y_3919_, v___y_3923_, v___y_3920_, v___y_3922_, v___y_3925_);
if (lean_obj_tag(v___x_3937_) == 0)
{
lean_object* v_a_3938_; lean_object* v___x_3939_; 
v_a_3938_ = lean_ctor_get(v___x_3937_, 0);
lean_inc(v_a_3938_);
lean_dec_ref(v___x_3937_);
v___x_3939_ = l_Lean_Meta_Grind_Order_getExpr(v___y_3927_, v___y_3918_, v___y_3924_, v___y_3928_, v___y_3926_, v___y_3931_, v___y_3917_, v___y_3919_, v___y_3923_, v___y_3920_, v___y_3922_, v___y_3925_);
if (lean_obj_tag(v___x_3939_) == 0)
{
lean_object* v_a_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; uint8_t v___x_3945_; 
v_a_3940_ = lean_ctor_get(v___x_3939_, 0);
lean_inc(v_a_3940_);
lean_dec_ref(v___x_3939_);
v___x_3941_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__2);
v___x_3942_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__3);
v___x_3943_ = lean_int_sub(v___y_3930_, v___x_3942_);
lean_dec(v___y_3930_);
v___x_3944_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_3945_ = lean_int_dec_le(v___x_3944_, v___x_3943_);
if (v___x_3945_ == 0)
{
lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
v___x_3946_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10);
v___x_3947_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13);
v___x_3948_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16);
v___x_3949_ = lean_int_neg(v___x_3943_);
v___x_3950_ = l_Int_toNat(v___x_3949_);
lean_dec(v___x_3949_);
v___x_3951_ = l_Lean_instToExprInt_mkNat(v___x_3950_);
v___x_3952_ = l_Lean_mkApp3(v___x_3946_, v___x_3947_, v___x_3948_, v___x_3951_);
v___y_3892_ = v___y_3916_;
v___y_3893_ = v___y_3917_;
v___y_3894_ = v___y_3920_;
v___y_3895_ = v___y_3919_;
v___y_3896_ = v___y_3918_;
v___y_3897_ = v___y_3922_;
v___y_3898_ = v___y_3921_;
v___y_3899_ = v_a_3938_;
v___y_3900_ = v___y_3923_;
v___y_3901_ = v___x_3943_;
v___y_3902_ = v___y_3925_;
v___y_3903_ = v___y_3924_;
v___y_3904_ = v_a_3940_;
v___y_3905_ = v___y_3926_;
v___y_3906_ = v___y_3927_;
v___y_3907_ = v___y_3928_;
v___y_3908_ = v___y_3929_;
v___y_3909_ = v___y_3931_;
v___y_3910_ = v___x_3941_;
v___y_3911_ = v___y_3932_;
v___y_3912_ = v___x_3952_;
goto v___jp_3891_;
}
else
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3953_ = l_Int_toNat(v___x_3943_);
v___x_3954_ = l_Lean_instToExprInt_mkNat(v___x_3953_);
v___y_3892_ = v___y_3916_;
v___y_3893_ = v___y_3917_;
v___y_3894_ = v___y_3920_;
v___y_3895_ = v___y_3919_;
v___y_3896_ = v___y_3918_;
v___y_3897_ = v___y_3922_;
v___y_3898_ = v___y_3921_;
v___y_3899_ = v_a_3938_;
v___y_3900_ = v___y_3923_;
v___y_3901_ = v___x_3943_;
v___y_3902_ = v___y_3925_;
v___y_3903_ = v___y_3924_;
v___y_3904_ = v_a_3940_;
v___y_3905_ = v___y_3926_;
v___y_3906_ = v___y_3927_;
v___y_3907_ = v___y_3928_;
v___y_3908_ = v___y_3929_;
v___y_3909_ = v___y_3931_;
v___y_3910_ = v___x_3941_;
v___y_3911_ = v___y_3932_;
v___y_3912_ = v___x_3954_;
goto v___jp_3891_;
}
}
else
{
lean_object* v_a_3955_; lean_object* v___x_3957_; uint8_t v_isShared_3958_; uint8_t v_isSharedCheck_3962_; 
lean_dec(v_a_3938_);
lean_dec(v___y_3932_);
lean_dec(v___y_3930_);
lean_dec_ref(v___y_3929_);
lean_dec(v___y_3927_);
lean_dec_ref(v___y_3921_);
lean_dec_ref(v___y_3916_);
v_a_3955_ = lean_ctor_get(v___x_3939_, 0);
v_isSharedCheck_3962_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_3962_ == 0)
{
v___x_3957_ = v___x_3939_;
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
else
{
lean_inc(v_a_3955_);
lean_dec(v___x_3939_);
v___x_3957_ = lean_box(0);
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
v_resetjp_3956_:
{
lean_object* v___x_3960_; 
if (v_isShared_3958_ == 0)
{
v___x_3960_ = v___x_3957_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_3961_; 
v_reuseFailAlloc_3961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3961_, 0, v_a_3955_);
v___x_3960_ = v_reuseFailAlloc_3961_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
return v___x_3960_;
}
}
}
}
else
{
lean_object* v_a_3963_; lean_object* v___x_3965_; uint8_t v_isShared_3966_; uint8_t v_isSharedCheck_3970_; 
lean_dec(v___y_3932_);
lean_dec(v___y_3930_);
lean_dec_ref(v___y_3929_);
lean_dec(v___y_3927_);
lean_dec_ref(v___y_3921_);
lean_dec_ref(v___y_3916_);
v_a_3963_ = lean_ctor_get(v___x_3937_, 0);
v_isSharedCheck_3970_ = !lean_is_exclusive(v___x_3937_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3965_ = v___x_3937_;
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
else
{
lean_inc(v_a_3963_);
lean_dec(v___x_3937_);
v___x_3965_ = lean_box(0);
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
v_resetjp_3964_:
{
lean_object* v___x_3968_; 
if (v_isShared_3966_ == 0)
{
v___x_3968_ = v___x_3965_;
goto v_reusejp_3967_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v_a_3963_);
v___x_3968_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3967_;
}
v_reusejp_3967_:
{
return v___x_3968_;
}
}
}
}
}
}
else
{
lean_object* v_a_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_3978_; 
lean_dec(v___y_3932_);
lean_dec(v___y_3930_);
lean_dec_ref(v___y_3929_);
lean_dec(v___y_3927_);
lean_dec_ref(v___y_3921_);
lean_dec_ref(v___y_3916_);
v_a_3971_ = lean_ctor_get(v___x_3934_, 0);
v_isSharedCheck_3978_ = !lean_is_exclusive(v___x_3934_);
if (v_isSharedCheck_3978_ == 0)
{
v___x_3973_ = v___x_3934_;
v_isShared_3974_ = v_isSharedCheck_3978_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_a_3971_);
lean_dec(v___x_3934_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_3978_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
lean_object* v___x_3976_; 
if (v_isShared_3974_ == 0)
{
v___x_3976_ = v___x_3973_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v_a_3971_);
v___x_3976_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
return v___x_3976_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___boxed(lean_object* v_c_4310_, lean_object* v_e_4311_, lean_object* v_he_4312_, lean_object* v_a_4313_, lean_object* v_a_4314_, lean_object* v_a_4315_, lean_object* v_a_4316_, lean_object* v_a_4317_, lean_object* v_a_4318_, lean_object* v_a_4319_, lean_object* v_a_4320_, lean_object* v_a_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_, lean_object* v_a_4324_){
_start:
{
lean_object* v_res_4325_; 
v_res_4325_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse(v_c_4310_, v_e_4311_, v_he_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, v_a_4318_, v_a_4319_, v_a_4320_, v_a_4321_, v_a_4322_, v_a_4323_);
lean_dec(v_a_4323_);
lean_dec_ref(v_a_4322_);
lean_dec(v_a_4321_);
lean_dec_ref(v_a_4320_);
lean_dec(v_a_4319_);
lean_dec_ref(v_a_4318_);
lean_dec(v_a_4317_);
lean_dec_ref(v_a_4316_);
lean_dec(v_a_4315_);
lean_dec(v_a_4314_);
lean_dec(v_a_4313_);
return v_res_4325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(lean_object* v_e_4326_, lean_object* v_a_4327_, lean_object* v_a_4328_, lean_object* v_a_4329_){
_start:
{
lean_object* v___x_4331_; 
v___x_4331_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_4327_, v_a_4328_, v_a_4329_);
if (lean_obj_tag(v___x_4331_) == 0)
{
lean_object* v_a_4332_; lean_object* v___x_4334_; uint8_t v_isShared_4335_; uint8_t v_isSharedCheck_4341_; 
v_a_4332_ = lean_ctor_get(v___x_4331_, 0);
v_isSharedCheck_4341_ = !lean_is_exclusive(v___x_4331_);
if (v_isSharedCheck_4341_ == 0)
{
v___x_4334_ = v___x_4331_;
v_isShared_4335_ = v_isSharedCheck_4341_;
goto v_resetjp_4333_;
}
else
{
lean_inc(v_a_4332_);
lean_dec(v___x_4331_);
v___x_4334_ = lean_box(0);
v_isShared_4335_ = v_isSharedCheck_4341_;
goto v_resetjp_4333_;
}
v_resetjp_4333_:
{
lean_object* v_exprToStructId_4336_; lean_object* v___x_4337_; lean_object* v___x_4339_; 
v_exprToStructId_4336_ = lean_ctor_get(v_a_4332_, 2);
lean_inc_ref(v_exprToStructId_4336_);
lean_dec(v_a_4332_);
v___x_4337_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_exprToStructId_4336_, v_e_4326_);
lean_dec_ref(v_exprToStructId_4336_);
if (v_isShared_4335_ == 0)
{
lean_ctor_set(v___x_4334_, 0, v___x_4337_);
v___x_4339_ = v___x_4334_;
goto v_reusejp_4338_;
}
else
{
lean_object* v_reuseFailAlloc_4340_; 
v_reuseFailAlloc_4340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4340_, 0, v___x_4337_);
v___x_4339_ = v_reuseFailAlloc_4340_;
goto v_reusejp_4338_;
}
v_reusejp_4338_:
{
return v___x_4339_;
}
}
}
else
{
lean_object* v_a_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4349_; 
v_a_4342_ = lean_ctor_get(v___x_4331_, 0);
v_isSharedCheck_4349_ = !lean_is_exclusive(v___x_4331_);
if (v_isSharedCheck_4349_ == 0)
{
v___x_4344_ = v___x_4331_;
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_a_4342_);
lean_dec(v___x_4331_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
lean_object* v___x_4347_; 
if (v_isShared_4345_ == 0)
{
v___x_4347_ = v___x_4344_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v_a_4342_);
v___x_4347_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
return v___x_4347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg___boxed(lean_object* v_e_4350_, lean_object* v_a_4351_, lean_object* v_a_4352_, lean_object* v_a_4353_, lean_object* v_a_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(v_e_4350_, v_a_4351_, v_a_4352_, v_a_4353_);
lean_dec(v_a_4353_);
lean_dec_ref(v_a_4352_);
lean_dec(v_a_4351_);
lean_dec_ref(v_e_4350_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f(lean_object* v_e_4356_, lean_object* v_a_4357_, lean_object* v_a_4358_, lean_object* v_a_4359_, lean_object* v_a_4360_, lean_object* v_a_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_, lean_object* v_a_4364_, lean_object* v_a_4365_, lean_object* v_a_4366_){
_start:
{
lean_object* v___x_4368_; 
v___x_4368_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(v_e_4356_, v_a_4357_, v_a_4365_, v_a_4366_);
return v___x_4368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___boxed(lean_object* v_e_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_, lean_object* v_a_4372_, lean_object* v_a_4373_, lean_object* v_a_4374_, lean_object* v_a_4375_, lean_object* v_a_4376_, lean_object* v_a_4377_, lean_object* v_a_4378_, lean_object* v_a_4379_, lean_object* v_a_4380_){
_start:
{
lean_object* v_res_4381_; 
v_res_4381_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f(v_e_4369_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_, v_a_4375_, v_a_4376_, v_a_4377_, v_a_4378_, v_a_4379_);
lean_dec(v_a_4379_);
lean_dec_ref(v_a_4378_);
lean_dec(v_a_4377_);
lean_dec_ref(v_a_4376_);
lean_dec(v_a_4375_);
lean_dec_ref(v_a_4374_);
lean_dec(v_a_4373_);
lean_dec_ref(v_a_4372_);
lean_dec(v_a_4371_);
lean_dec(v_a_4370_);
lean_dec_ref(v_e_4369_);
return v_res_4381_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__0(void){
_start:
{
lean_object* v___x_4382_; 
v___x_4382_ = lean_mk_string_unchecked("eq_trans_false'", 15, 15);
return v___x_4382_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1(void){
_start:
{
lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; 
v___x_4383_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__0);
v___x_4384_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_4385_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_4386_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_4387_ = l_Lean_Name_mkStr4(v___x_4386_, v___x_4385_, v___x_4384_, v___x_4383_);
return v___x_4387_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__2(void){
_start:
{
lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; 
v___x_4388_ = lean_box(0);
v___x_4389_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1);
v___x_4390_ = l_Lean_mkConst(v___x_4389_, v___x_4388_);
return v___x_4390_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__3(void){
_start:
{
lean_object* v___x_4391_; 
v___x_4391_ = lean_mk_string_unchecked("eq_trans_true'", 14, 14);
return v___x_4391_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4(void){
_start:
{
lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; 
v___x_4392_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__3);
v___x_4393_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_4394_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_4395_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_4396_ = l_Lean_Name_mkStr4(v___x_4395_, v___x_4394_, v___x_4393_, v___x_4392_);
return v___x_4396_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__5(void){
_start:
{
lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; 
v___x_4397_ = lean_box(0);
v___x_4398_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4);
v___x_4399_ = l_Lean_mkConst(v___x_4398_, v___x_4397_);
return v___x_4399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go(lean_object* v_e_4400_, lean_object* v_e_x27_4401_, lean_object* v_he_x3f_4402_, lean_object* v_a_4403_, lean_object* v_a_4404_, lean_object* v_a_4405_, lean_object* v_a_4406_, lean_object* v_a_4407_, lean_object* v_a_4408_, lean_object* v_a_4409_, lean_object* v_a_4410_, lean_object* v_a_4411_, lean_object* v_a_4412_){
_start:
{
lean_object* v___x_4414_; 
v___x_4414_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(v_e_x27_4401_, v_a_4403_, v_a_4411_, v_a_4412_);
if (lean_obj_tag(v___x_4414_) == 0)
{
lean_object* v_a_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4505_; 
v_a_4415_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4505_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4505_ == 0)
{
v___x_4417_ = v___x_4414_;
v_isShared_4418_ = v_isSharedCheck_4505_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_a_4415_);
lean_dec(v___x_4414_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4505_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
if (lean_obj_tag(v_a_4415_) == 1)
{
lean_object* v_val_4419_; lean_object* v___x_4420_; 
lean_del_object(v___x_4417_);
v_val_4419_ = lean_ctor_get(v_a_4415_, 0);
lean_inc(v_val_4419_);
lean_dec_ref(v_a_4415_);
v___x_4420_ = l_Lean_Meta_Grind_Order_getCnstr_x3f(v_e_x27_4401_, v_val_4419_, v_a_4403_, v_a_4404_, v_a_4405_, v_a_4406_, v_a_4407_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_);
if (lean_obj_tag(v___x_4420_) == 0)
{
lean_object* v_a_4421_; lean_object* v___x_4423_; uint8_t v_isShared_4424_; uint8_t v_isSharedCheck_4492_; 
v_a_4421_ = lean_ctor_get(v___x_4420_, 0);
v_isSharedCheck_4492_ = !lean_is_exclusive(v___x_4420_);
if (v_isSharedCheck_4492_ == 0)
{
v___x_4423_ = v___x_4420_;
v_isShared_4424_ = v_isSharedCheck_4492_;
goto v_resetjp_4422_;
}
else
{
lean_inc(v_a_4421_);
lean_dec(v___x_4420_);
v___x_4423_ = lean_box(0);
v_isShared_4424_ = v_isSharedCheck_4492_;
goto v_resetjp_4422_;
}
v_resetjp_4422_:
{
if (lean_obj_tag(v_a_4421_) == 1)
{
lean_object* v_val_4425_; lean_object* v___x_4426_; 
lean_del_object(v___x_4423_);
v_val_4425_ = lean_ctor_get(v_a_4421_, 0);
lean_inc(v_val_4425_);
lean_dec_ref(v_a_4421_);
lean_inc_ref(v_e_4400_);
v___x_4426_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_4400_, v_a_4403_, v_a_4407_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_);
if (lean_obj_tag(v___x_4426_) == 0)
{
lean_object* v_a_4427_; uint8_t v___x_4428_; 
v_a_4427_ = lean_ctor_get(v___x_4426_, 0);
lean_inc(v_a_4427_);
lean_dec_ref(v___x_4426_);
v___x_4428_ = lean_unbox(v_a_4427_);
lean_dec(v_a_4427_);
if (v___x_4428_ == 0)
{
lean_object* v___x_4429_; 
lean_inc_ref(v_e_4400_);
v___x_4429_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_4400_, v_a_4403_, v_a_4407_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_);
if (lean_obj_tag(v___x_4429_) == 0)
{
lean_object* v_a_4430_; lean_object* v___x_4432_; uint8_t v_isShared_4433_; uint8_t v_isSharedCheck_4455_; 
v_a_4430_ = lean_ctor_get(v___x_4429_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v___x_4429_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4432_ = v___x_4429_;
v_isShared_4433_ = v_isSharedCheck_4455_;
goto v_resetjp_4431_;
}
else
{
lean_inc(v_a_4430_);
lean_dec(v___x_4429_);
v___x_4432_ = lean_box(0);
v_isShared_4433_ = v_isSharedCheck_4455_;
goto v_resetjp_4431_;
}
v_resetjp_4431_:
{
uint8_t v___x_4434_; 
v___x_4434_ = lean_unbox(v_a_4430_);
lean_dec(v_a_4430_);
if (v___x_4434_ == 0)
{
lean_object* v___x_4435_; lean_object* v___x_4437_; 
lean_dec(v_val_4425_);
lean_dec(v_val_4419_);
lean_dec(v_he_x3f_4402_);
lean_dec_ref(v_e_x27_4401_);
lean_dec_ref(v_e_4400_);
v___x_4435_ = lean_box(0);
if (v_isShared_4433_ == 0)
{
lean_ctor_set(v___x_4432_, 0, v___x_4435_);
v___x_4437_ = v___x_4432_;
goto v_reusejp_4436_;
}
else
{
lean_object* v_reuseFailAlloc_4438_; 
v_reuseFailAlloc_4438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4438_, 0, v___x_4435_);
v___x_4437_ = v_reuseFailAlloc_4438_;
goto v_reusejp_4436_;
}
v_reusejp_4436_:
{
return v___x_4437_;
}
}
else
{
lean_object* v___x_4439_; 
lean_del_object(v___x_4432_);
lean_inc_ref(v_e_4400_);
v___x_4439_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_4400_, v_a_4403_, v_a_4404_, v_a_4405_, v_a_4406_, v_a_4407_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_);
if (lean_obj_tag(v___x_4439_) == 0)
{
if (lean_obj_tag(v_he_x3f_4402_) == 1)
{
lean_object* v_a_4440_; lean_object* v_val_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; 
v_a_4440_ = lean_ctor_get(v___x_4439_, 0);
lean_inc(v_a_4440_);
lean_dec_ref(v___x_4439_);
v_val_4441_ = lean_ctor_get(v_he_x3f_4402_, 0);
lean_inc(v_val_4441_);
lean_dec_ref(v_he_x3f_4402_);
v___x_4442_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__2);
lean_inc_ref(v_e_x27_4401_);
v___x_4443_ = l_Lean_mkApp4(v___x_4442_, v_e_4400_, v_e_x27_4401_, v_val_4441_, v_a_4440_);
v___x_4444_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse(v_val_4425_, v_e_x27_4401_, v___x_4443_, v_val_4419_, v_a_4403_, v_a_4404_, v_a_4405_, v_a_4406_, v_a_4407_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_);
lean_dec(v_val_4419_);
return v___x_4444_;
}
else
{
lean_object* v_a_4445_; lean_object* v___x_4446_; 
lean_dec(v_he_x3f_4402_);
lean_dec_ref(v_e_4400_);
v_a_4445_ = lean_ctor_get(v___x_4439_, 0);
lean_inc(v_a_4445_);
lean_dec_ref(v___x_4439_);
v___x_4446_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse(v_val_4425_, v_e_x27_4401_, v_a_4445_, v_val_4419_, v_a_4403_, v_a_4404_, v_a_4405_, v_a_4406_, v_a_4407_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_);
lean_dec(v_val_4419_);
return v___x_4446_;
}
}
else
{
lean_object* v_a_4447_; lean_object* v___x_4449_; uint8_t v_isShared_4450_; uint8_t v_isSharedCheck_4454_; 
lean_dec(v_val_4425_);
lean_dec(v_val_4419_);
lean_dec(v_he_x3f_4402_);
lean_dec_ref(v_e_x27_4401_);
lean_dec_ref(v_e_4400_);
v_a_4447_ = lean_ctor_get(v___x_4439_, 0);
v_isSharedCheck_4454_ = !lean_is_exclusive(v___x_4439_);
if (v_isSharedCheck_4454_ == 0)
{
v___x_4449_ = v___x_4439_;
v_isShared_4450_ = v_isSharedCheck_4454_;
goto v_resetjp_4448_;
}
else
{
lean_inc(v_a_4447_);
lean_dec(v___x_4439_);
v___x_4449_ = lean_box(0);
v_isShared_4450_ = v_isSharedCheck_4454_;
goto v_resetjp_4448_;
}
v_resetjp_4448_:
{
lean_object* v___x_4452_; 
if (v_isShared_4450_ == 0)
{
v___x_4452_ = v___x_4449_;
goto v_reusejp_4451_;
}
else
{
lean_object* v_reuseFailAlloc_4453_; 
v_reuseFailAlloc_4453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4453_, 0, v_a_4447_);
v___x_4452_ = v_reuseFailAlloc_4453_;
goto v_reusejp_4451_;
}
v_reusejp_4451_:
{
return v___x_4452_;
}
}
}
}
}
}
else
{
lean_object* v_a_4456_; lean_object* v___x_4458_; uint8_t v_isShared_4459_; uint8_t v_isSharedCheck_4463_; 
lean_dec(v_val_4425_);
lean_dec(v_val_4419_);
lean_dec(v_he_x3f_4402_);
lean_dec_ref(v_e_x27_4401_);
lean_dec_ref(v_e_4400_);
v_a_4456_ = lean_ctor_get(v___x_4429_, 0);
v_isSharedCheck_4463_ = !lean_is_exclusive(v___x_4429_);
if (v_isSharedCheck_4463_ == 0)
{
v___x_4458_ = v___x_4429_;
v_isShared_4459_ = v_isSharedCheck_4463_;
goto v_resetjp_4457_;
}
else
{
lean_inc(v_a_4456_);
lean_dec(v___x_4429_);
v___x_4458_ = lean_box(0);
v_isShared_4459_ = v_isSharedCheck_4463_;
goto v_resetjp_4457_;
}
v_resetjp_4457_:
{
lean_object* v___x_4461_; 
if (v_isShared_4459_ == 0)
{
v___x_4461_ = v___x_4458_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v_a_4456_);
v___x_4461_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
return v___x_4461_;
}
}
}
}
else
{
lean_object* v___x_4464_; 
lean_inc_ref(v_e_4400_);
v___x_4464_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_4400_, v_a_4403_, v_a_4404_, v_a_4405_, v_a_4406_, v_a_4407_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_);
if (lean_obj_tag(v___x_4464_) == 0)
{
if (lean_obj_tag(v_he_x3f_4402_) == 1)
{
lean_object* v_a_4465_; lean_object* v_val_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; 
v_a_4465_ = lean_ctor_get(v___x_4464_, 0);
lean_inc(v_a_4465_);
lean_dec_ref(v___x_4464_);
v_val_4466_ = lean_ctor_get(v_he_x3f_4402_, 0);
lean_inc(v_val_4466_);
lean_dec_ref(v_he_x3f_4402_);
v___x_4467_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__5);
lean_inc_ref(v_e_x27_4401_);
v___x_4468_ = l_Lean_mkApp4(v___x_4467_, v_e_4400_, v_e_x27_4401_, v_val_4466_, v_a_4465_);
v___x_4469_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue(v_val_4425_, v_e_x27_4401_, v___x_4468_, v_val_4419_, v_a_4403_, v_a_4404_, v_a_4405_, v_a_4406_, v_a_4407_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_);
lean_dec(v_val_4419_);
return v___x_4469_;
}
else
{
lean_object* v_a_4470_; lean_object* v___x_4471_; 
lean_dec(v_he_x3f_4402_);
lean_dec_ref(v_e_4400_);
v_a_4470_ = lean_ctor_get(v___x_4464_, 0);
lean_inc(v_a_4470_);
lean_dec_ref(v___x_4464_);
v___x_4471_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue(v_val_4425_, v_e_x27_4401_, v_a_4470_, v_val_4419_, v_a_4403_, v_a_4404_, v_a_4405_, v_a_4406_, v_a_4407_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_);
lean_dec(v_val_4419_);
return v___x_4471_;
}
}
else
{
lean_object* v_a_4472_; lean_object* v___x_4474_; uint8_t v_isShared_4475_; uint8_t v_isSharedCheck_4479_; 
lean_dec(v_val_4425_);
lean_dec(v_val_4419_);
lean_dec(v_he_x3f_4402_);
lean_dec_ref(v_e_x27_4401_);
lean_dec_ref(v_e_4400_);
v_a_4472_ = lean_ctor_get(v___x_4464_, 0);
v_isSharedCheck_4479_ = !lean_is_exclusive(v___x_4464_);
if (v_isSharedCheck_4479_ == 0)
{
v___x_4474_ = v___x_4464_;
v_isShared_4475_ = v_isSharedCheck_4479_;
goto v_resetjp_4473_;
}
else
{
lean_inc(v_a_4472_);
lean_dec(v___x_4464_);
v___x_4474_ = lean_box(0);
v_isShared_4475_ = v_isSharedCheck_4479_;
goto v_resetjp_4473_;
}
v_resetjp_4473_:
{
lean_object* v___x_4477_; 
if (v_isShared_4475_ == 0)
{
v___x_4477_ = v___x_4474_;
goto v_reusejp_4476_;
}
else
{
lean_object* v_reuseFailAlloc_4478_; 
v_reuseFailAlloc_4478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4478_, 0, v_a_4472_);
v___x_4477_ = v_reuseFailAlloc_4478_;
goto v_reusejp_4476_;
}
v_reusejp_4476_:
{
return v___x_4477_;
}
}
}
}
}
else
{
lean_object* v_a_4480_; lean_object* v___x_4482_; uint8_t v_isShared_4483_; uint8_t v_isSharedCheck_4487_; 
lean_dec(v_val_4425_);
lean_dec(v_val_4419_);
lean_dec(v_he_x3f_4402_);
lean_dec_ref(v_e_x27_4401_);
lean_dec_ref(v_e_4400_);
v_a_4480_ = lean_ctor_get(v___x_4426_, 0);
v_isSharedCheck_4487_ = !lean_is_exclusive(v___x_4426_);
if (v_isSharedCheck_4487_ == 0)
{
v___x_4482_ = v___x_4426_;
v_isShared_4483_ = v_isSharedCheck_4487_;
goto v_resetjp_4481_;
}
else
{
lean_inc(v_a_4480_);
lean_dec(v___x_4426_);
v___x_4482_ = lean_box(0);
v_isShared_4483_ = v_isSharedCheck_4487_;
goto v_resetjp_4481_;
}
v_resetjp_4481_:
{
lean_object* v___x_4485_; 
if (v_isShared_4483_ == 0)
{
v___x_4485_ = v___x_4482_;
goto v_reusejp_4484_;
}
else
{
lean_object* v_reuseFailAlloc_4486_; 
v_reuseFailAlloc_4486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4486_, 0, v_a_4480_);
v___x_4485_ = v_reuseFailAlloc_4486_;
goto v_reusejp_4484_;
}
v_reusejp_4484_:
{
return v___x_4485_;
}
}
}
}
else
{
lean_object* v___x_4488_; lean_object* v___x_4490_; 
lean_dec(v_a_4421_);
lean_dec(v_val_4419_);
lean_dec(v_he_x3f_4402_);
lean_dec_ref(v_e_x27_4401_);
lean_dec_ref(v_e_4400_);
v___x_4488_ = lean_box(0);
if (v_isShared_4424_ == 0)
{
lean_ctor_set(v___x_4423_, 0, v___x_4488_);
v___x_4490_ = v___x_4423_;
goto v_reusejp_4489_;
}
else
{
lean_object* v_reuseFailAlloc_4491_; 
v_reuseFailAlloc_4491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4491_, 0, v___x_4488_);
v___x_4490_ = v_reuseFailAlloc_4491_;
goto v_reusejp_4489_;
}
v_reusejp_4489_:
{
return v___x_4490_;
}
}
}
}
else
{
lean_object* v_a_4493_; lean_object* v___x_4495_; uint8_t v_isShared_4496_; uint8_t v_isSharedCheck_4500_; 
lean_dec(v_val_4419_);
lean_dec(v_he_x3f_4402_);
lean_dec_ref(v_e_x27_4401_);
lean_dec_ref(v_e_4400_);
v_a_4493_ = lean_ctor_get(v___x_4420_, 0);
v_isSharedCheck_4500_ = !lean_is_exclusive(v___x_4420_);
if (v_isSharedCheck_4500_ == 0)
{
v___x_4495_ = v___x_4420_;
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
else
{
lean_inc(v_a_4493_);
lean_dec(v___x_4420_);
v___x_4495_ = lean_box(0);
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
v_resetjp_4494_:
{
lean_object* v___x_4498_; 
if (v_isShared_4496_ == 0)
{
v___x_4498_ = v___x_4495_;
goto v_reusejp_4497_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v_a_4493_);
v___x_4498_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4497_;
}
v_reusejp_4497_:
{
return v___x_4498_;
}
}
}
}
else
{
lean_object* v___x_4501_; lean_object* v___x_4503_; 
lean_dec(v_a_4415_);
lean_dec(v_he_x3f_4402_);
lean_dec_ref(v_e_x27_4401_);
lean_dec_ref(v_e_4400_);
v___x_4501_ = lean_box(0);
if (v_isShared_4418_ == 0)
{
lean_ctor_set(v___x_4417_, 0, v___x_4501_);
v___x_4503_ = v___x_4417_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v___x_4501_);
v___x_4503_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
return v___x_4503_;
}
}
}
}
else
{
lean_object* v_a_4506_; lean_object* v___x_4508_; uint8_t v_isShared_4509_; uint8_t v_isSharedCheck_4513_; 
lean_dec(v_he_x3f_4402_);
lean_dec_ref(v_e_x27_4401_);
lean_dec_ref(v_e_4400_);
v_a_4506_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4508_ = v___x_4414_;
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
else
{
lean_inc(v_a_4506_);
lean_dec(v___x_4414_);
v___x_4508_ = lean_box(0);
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
v_resetjp_4507_:
{
lean_object* v___x_4511_; 
if (v_isShared_4509_ == 0)
{
v___x_4511_ = v___x_4508_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v_a_4506_);
v___x_4511_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
return v___x_4511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___boxed(lean_object* v_e_4514_, lean_object* v_e_x27_4515_, lean_object* v_he_x3f_4516_, lean_object* v_a_4517_, lean_object* v_a_4518_, lean_object* v_a_4519_, lean_object* v_a_4520_, lean_object* v_a_4521_, lean_object* v_a_4522_, lean_object* v_a_4523_, lean_object* v_a_4524_, lean_object* v_a_4525_, lean_object* v_a_4526_, lean_object* v_a_4527_){
_start:
{
lean_object* v_res_4528_; 
v_res_4528_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go(v_e_4514_, v_e_x27_4515_, v_he_x3f_4516_, v_a_4517_, v_a_4518_, v_a_4519_, v_a_4520_, v_a_4521_, v_a_4522_, v_a_4523_, v_a_4524_, v_a_4525_, v_a_4526_);
lean_dec(v_a_4526_);
lean_dec_ref(v_a_4525_);
lean_dec(v_a_4524_);
lean_dec_ref(v_a_4523_);
lean_dec(v_a_4522_);
lean_dec_ref(v_a_4521_);
lean_dec(v_a_4520_);
lean_dec_ref(v_a_4519_);
lean_dec(v_a_4518_);
lean_dec(v_a_4517_);
return v_res_4528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq(lean_object* v_e_4529_, lean_object* v_a_4530_, lean_object* v_a_4531_, lean_object* v_a_4532_, lean_object* v_a_4533_, lean_object* v_a_4534_, lean_object* v_a_4535_, lean_object* v_a_4536_, lean_object* v_a_4537_, lean_object* v_a_4538_, lean_object* v_a_4539_){
_start:
{
lean_object* v___x_4541_; 
v___x_4541_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_4530_, v_a_4538_, v_a_4539_);
if (lean_obj_tag(v___x_4541_) == 0)
{
lean_object* v_a_4542_; lean_object* v_termMap_4543_; lean_object* v___x_4544_; 
v_a_4542_ = lean_ctor_get(v___x_4541_, 0);
lean_inc(v_a_4542_);
lean_dec_ref(v___x_4541_);
v_termMap_4543_ = lean_ctor_get(v_a_4542_, 3);
lean_inc_ref(v_termMap_4543_);
lean_dec(v_a_4542_);
v___x_4544_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMap_4543_, v_e_4529_);
lean_dec_ref(v_termMap_4543_);
if (lean_obj_tag(v___x_4544_) == 1)
{
lean_object* v_val_4545_; lean_object* v___x_4547_; uint8_t v_isShared_4548_; uint8_t v_isSharedCheck_4555_; 
v_val_4545_ = lean_ctor_get(v___x_4544_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v___x_4544_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4547_ = v___x_4544_;
v_isShared_4548_ = v_isSharedCheck_4555_;
goto v_resetjp_4546_;
}
else
{
lean_inc(v_val_4545_);
lean_dec(v___x_4544_);
v___x_4547_ = lean_box(0);
v_isShared_4548_ = v_isSharedCheck_4555_;
goto v_resetjp_4546_;
}
v_resetjp_4546_:
{
lean_object* v_e_4549_; lean_object* v_h_4550_; lean_object* v___x_4552_; 
v_e_4549_ = lean_ctor_get(v_val_4545_, 0);
lean_inc_ref(v_e_4549_);
v_h_4550_ = lean_ctor_get(v_val_4545_, 1);
lean_inc_ref(v_h_4550_);
lean_dec(v_val_4545_);
if (v_isShared_4548_ == 0)
{
lean_ctor_set(v___x_4547_, 0, v_h_4550_);
v___x_4552_ = v___x_4547_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v_h_4550_);
v___x_4552_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
lean_object* v___x_4553_; 
v___x_4553_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go(v_e_4529_, v_e_4549_, v___x_4552_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_, v_a_4535_, v_a_4536_, v_a_4537_, v_a_4538_, v_a_4539_);
return v___x_4553_;
}
}
}
else
{
lean_object* v___x_4556_; lean_object* v___x_4557_; 
lean_dec(v___x_4544_);
v___x_4556_ = lean_box(0);
lean_inc_ref(v_e_4529_);
v___x_4557_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go(v_e_4529_, v_e_4529_, v___x_4556_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_, v_a_4535_, v_a_4536_, v_a_4537_, v_a_4538_, v_a_4539_);
return v___x_4557_;
}
}
else
{
lean_object* v_a_4558_; lean_object* v___x_4560_; uint8_t v_isShared_4561_; uint8_t v_isSharedCheck_4565_; 
lean_dec_ref(v_e_4529_);
v_a_4558_ = lean_ctor_get(v___x_4541_, 0);
v_isSharedCheck_4565_ = !lean_is_exclusive(v___x_4541_);
if (v_isSharedCheck_4565_ == 0)
{
v___x_4560_ = v___x_4541_;
v_isShared_4561_ = v_isSharedCheck_4565_;
goto v_resetjp_4559_;
}
else
{
lean_inc(v_a_4558_);
lean_dec(v___x_4541_);
v___x_4560_ = lean_box(0);
v_isShared_4561_ = v_isSharedCheck_4565_;
goto v_resetjp_4559_;
}
v_resetjp_4559_:
{
lean_object* v___x_4563_; 
if (v_isShared_4561_ == 0)
{
v___x_4563_ = v___x_4560_;
goto v_reusejp_4562_;
}
else
{
lean_object* v_reuseFailAlloc_4564_; 
v_reuseFailAlloc_4564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4564_, 0, v_a_4558_);
v___x_4563_ = v_reuseFailAlloc_4564_;
goto v_reusejp_4562_;
}
v_reusejp_4562_:
{
return v___x_4563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq___boxed(lean_object* v_e_4566_, lean_object* v_a_4567_, lean_object* v_a_4568_, lean_object* v_a_4569_, lean_object* v_a_4570_, lean_object* v_a_4571_, lean_object* v_a_4572_, lean_object* v_a_4573_, lean_object* v_a_4574_, lean_object* v_a_4575_, lean_object* v_a_4576_, lean_object* v_a_4577_){
_start:
{
lean_object* v_res_4578_; 
v_res_4578_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq(v_e_4566_, v_a_4567_, v_a_4568_, v_a_4569_, v_a_4570_, v_a_4571_, v_a_4572_, v_a_4573_, v_a_4574_, v_a_4575_, v_a_4576_);
lean_dec(v_a_4576_);
lean_dec_ref(v_a_4575_);
lean_dec(v_a_4574_);
lean_dec_ref(v_a_4573_);
lean_dec(v_a_4572_);
lean_dec_ref(v_a_4571_);
lean_dec(v_a_4570_);
lean_dec_ref(v_a_4569_);
lean_dec(v_a_4568_);
lean_dec(v_a_4567_);
return v_res_4578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE(lean_object* v_e_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_, lean_object* v_a_4585_, lean_object* v_a_4586_, lean_object* v_a_4587_, lean_object* v_a_4588_, lean_object* v_a_4589_){
_start:
{
lean_object* v___x_4591_; 
v___x_4591_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq(v_e_4579_, v_a_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_, v_a_4587_, v_a_4588_, v_a_4589_);
return v___x_4591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___boxed(lean_object* v_e_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_, lean_object* v_a_4596_, lean_object* v_a_4597_, lean_object* v_a_4598_, lean_object* v_a_4599_, lean_object* v_a_4600_, lean_object* v_a_4601_, lean_object* v_a_4602_, lean_object* v_a_4603_){
_start:
{
lean_object* v_res_4604_; 
v_res_4604_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE(v_e_4592_, v_a_4593_, v_a_4594_, v_a_4595_, v_a_4596_, v_a_4597_, v_a_4598_, v_a_4599_, v_a_4600_, v_a_4601_, v_a_4602_);
lean_dec(v_a_4602_);
lean_dec_ref(v_a_4601_);
lean_dec(v_a_4600_);
lean_dec_ref(v_a_4599_);
lean_dec(v_a_4598_);
lean_dec_ref(v_a_4597_);
lean_dec(v_a_4596_);
lean_dec_ref(v_a_4595_);
lean_dec(v_a_4594_);
lean_dec(v_a_4593_);
return v_res_4604_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___f_4605_; 
v___f_4605_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq___boxed), 12, 0);
return v___f_4605_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_4606_; 
v___x_4606_ = lean_mk_string_unchecked("LE", 2, 2);
return v___x_4606_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_4607_; 
v___x_4607_ = lean_mk_string_unchecked("le", 2, 2);
return v___x_4607_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__3_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; 
v___x_4608_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8__once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_);
v___x_4609_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8__once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_);
v___x_4610_ = l_Lean_Name_mkStr2(v___x_4609_, v___x_4608_);
return v___x_4610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_(){
_start:
{
lean_object* v___f_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; 
v___f_4612_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8__once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_);
v___x_4613_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__3_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__3_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8__once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__3_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_);
v___x_4614_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_4613_, v___f_4612_);
return v___x_4614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8____boxed(lean_object* v_a_4615_){
_start:
{
lean_object* v_res_4616_; 
v_res_4616_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_();
return v_res_4616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT(lean_object* v_e_4617_, lean_object* v_a_4618_, lean_object* v_a_4619_, lean_object* v_a_4620_, lean_object* v_a_4621_, lean_object* v_a_4622_, lean_object* v_a_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_){
_start:
{
lean_object* v___x_4629_; 
v___x_4629_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq(v_e_4617_, v_a_4618_, v_a_4619_, v_a_4620_, v_a_4621_, v_a_4622_, v_a_4623_, v_a_4624_, v_a_4625_, v_a_4626_, v_a_4627_);
return v___x_4629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___boxed(lean_object* v_e_4630_, lean_object* v_a_4631_, lean_object* v_a_4632_, lean_object* v_a_4633_, lean_object* v_a_4634_, lean_object* v_a_4635_, lean_object* v_a_4636_, lean_object* v_a_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_, lean_object* v_a_4640_, lean_object* v_a_4641_){
_start:
{
lean_object* v_res_4642_; 
v_res_4642_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT(v_e_4630_, v_a_4631_, v_a_4632_, v_a_4633_, v_a_4634_, v_a_4635_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_, v_a_4640_);
lean_dec(v_a_4640_);
lean_dec_ref(v_a_4639_);
lean_dec(v_a_4638_);
lean_dec_ref(v_a_4637_);
lean_dec(v_a_4636_);
lean_dec_ref(v_a_4635_);
lean_dec(v_a_4634_);
lean_dec_ref(v_a_4633_);
lean_dec(v_a_4632_);
lean_dec(v_a_4631_);
return v_res_4642_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_4643_; 
v___x_4643_ = lean_mk_string_unchecked("LT", 2, 2);
return v___x_4643_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_4644_; 
v___x_4644_ = lean_mk_string_unchecked("lt", 2, 2);
return v___x_4644_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; 
v___x_4645_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8__once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_);
v___x_4646_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8__once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_);
v___x_4647_ = l_Lean_Name_mkStr2(v___x_4646_, v___x_4645_);
return v___x_4647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_(){
_start:
{
lean_object* v___f_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; 
v___f_4649_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8__once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_);
v___x_4650_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8__once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_);
v___x_4651_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_4650_, v___f_4649_);
return v___x_4651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8____boxed(lean_object* v_a_4652_){
_start:
{
lean_object* v_res_4653_; 
v_res_4653_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_();
return v_res_4653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg(lean_object* v_e_4654_, lean_object* v_a_4655_, lean_object* v_a_4656_, lean_object* v_a_4657_){
_start:
{
lean_object* v___x_4659_; 
v___x_4659_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_4655_, v_a_4656_, v_a_4657_);
if (lean_obj_tag(v___x_4659_) == 0)
{
lean_object* v_a_4660_; lean_object* v___x_4662_; uint8_t v_isShared_4663_; uint8_t v_isSharedCheck_4669_; 
v_a_4660_ = lean_ctor_get(v___x_4659_, 0);
v_isSharedCheck_4669_ = !lean_is_exclusive(v___x_4659_);
if (v_isSharedCheck_4669_ == 0)
{
v___x_4662_ = v___x_4659_;
v_isShared_4663_ = v_isSharedCheck_4669_;
goto v_resetjp_4661_;
}
else
{
lean_inc(v_a_4660_);
lean_dec(v___x_4659_);
v___x_4662_ = lean_box(0);
v_isShared_4663_ = v_isSharedCheck_4669_;
goto v_resetjp_4661_;
}
v_resetjp_4661_:
{
lean_object* v_termMap_4664_; lean_object* v___x_4665_; lean_object* v___x_4667_; 
v_termMap_4664_ = lean_ctor_get(v_a_4660_, 3);
lean_inc_ref(v_termMap_4664_);
lean_dec(v_a_4660_);
v___x_4665_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMap_4664_, v_e_4654_);
lean_dec_ref(v_termMap_4664_);
if (v_isShared_4663_ == 0)
{
lean_ctor_set(v___x_4662_, 0, v___x_4665_);
v___x_4667_ = v___x_4662_;
goto v_reusejp_4666_;
}
else
{
lean_object* v_reuseFailAlloc_4668_; 
v_reuseFailAlloc_4668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4668_, 0, v___x_4665_);
v___x_4667_ = v_reuseFailAlloc_4668_;
goto v_reusejp_4666_;
}
v_reusejp_4666_:
{
return v___x_4667_;
}
}
}
else
{
lean_object* v_a_4670_; lean_object* v___x_4672_; uint8_t v_isShared_4673_; uint8_t v_isSharedCheck_4677_; 
v_a_4670_ = lean_ctor_get(v___x_4659_, 0);
v_isSharedCheck_4677_ = !lean_is_exclusive(v___x_4659_);
if (v_isSharedCheck_4677_ == 0)
{
v___x_4672_ = v___x_4659_;
v_isShared_4673_ = v_isSharedCheck_4677_;
goto v_resetjp_4671_;
}
else
{
lean_inc(v_a_4670_);
lean_dec(v___x_4659_);
v___x_4672_ = lean_box(0);
v_isShared_4673_ = v_isSharedCheck_4677_;
goto v_resetjp_4671_;
}
v_resetjp_4671_:
{
lean_object* v___x_4675_; 
if (v_isShared_4673_ == 0)
{
v___x_4675_ = v___x_4672_;
goto v_reusejp_4674_;
}
else
{
lean_object* v_reuseFailAlloc_4676_; 
v_reuseFailAlloc_4676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4676_, 0, v_a_4670_);
v___x_4675_ = v_reuseFailAlloc_4676_;
goto v_reusejp_4674_;
}
v_reusejp_4674_:
{
return v___x_4675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg___boxed(lean_object* v_e_4678_, lean_object* v_a_4679_, lean_object* v_a_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_){
_start:
{
lean_object* v_res_4683_; 
v_res_4683_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg(v_e_4678_, v_a_4679_, v_a_4680_, v_a_4681_);
lean_dec(v_a_4681_);
lean_dec_ref(v_a_4680_);
lean_dec(v_a_4679_);
lean_dec_ref(v_e_4678_);
return v_res_4683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f(lean_object* v_e_4684_, lean_object* v_a_4685_, lean_object* v_a_4686_, lean_object* v_a_4687_, lean_object* v_a_4688_, lean_object* v_a_4689_, lean_object* v_a_4690_, lean_object* v_a_4691_, lean_object* v_a_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_){
_start:
{
lean_object* v___x_4696_; 
v___x_4696_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg(v_e_4684_, v_a_4685_, v_a_4693_, v_a_4694_);
return v___x_4696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___boxed(lean_object* v_e_4697_, lean_object* v_a_4698_, lean_object* v_a_4699_, lean_object* v_a_4700_, lean_object* v_a_4701_, lean_object* v_a_4702_, lean_object* v_a_4703_, lean_object* v_a_4704_, lean_object* v_a_4705_, lean_object* v_a_4706_, lean_object* v_a_4707_, lean_object* v_a_4708_){
_start:
{
lean_object* v_res_4709_; 
v_res_4709_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f(v_e_4697_, v_a_4698_, v_a_4699_, v_a_4700_, v_a_4701_, v_a_4702_, v_a_4703_, v_a_4704_, v_a_4705_, v_a_4706_, v_a_4707_);
lean_dec(v_a_4707_);
lean_dec_ref(v_a_4706_);
lean_dec(v_a_4705_);
lean_dec_ref(v_a_4704_);
lean_dec(v_a_4703_);
lean_dec_ref(v_a_4702_);
lean_dec(v_a_4701_);
lean_dec_ref(v_a_4700_);
lean_dec(v_a_4699_);
lean_dec(v_a_4698_);
lean_dec_ref(v_e_4697_);
return v_res_4709_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__0(void){
_start:
{
lean_object* v___x_4710_; 
v___x_4710_ = lean_mk_string_unchecked("le_of_eq_1", 10, 10);
return v___x_4710_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1(void){
_start:
{
lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; 
v___x_4711_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__0);
v___x_4712_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_4713_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_4714_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_4715_ = l_Lean_Name_mkStr4(v___x_4714_, v___x_4713_, v___x_4712_, v___x_4711_);
return v___x_4715_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__2(void){
_start:
{
lean_object* v___x_4716_; 
v___x_4716_ = lean_mk_string_unchecked("le_of_eq_2", 10, 10);
return v___x_4716_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3(void){
_start:
{
lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; 
v___x_4717_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__2);
v___x_4718_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_4719_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_4720_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_4721_ = l_Lean_Name_mkStr4(v___x_4720_, v___x_4719_, v___x_4718_, v___x_4717_);
return v___x_4721_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__4(void){
_start:
{
lean_object* v___x_4722_; 
v___x_4722_ = lean_mk_string_unchecked("le_of_eq_1_k", 12, 12);
return v___x_4722_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5(void){
_start:
{
lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; 
v___x_4723_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__4);
v___x_4724_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_4725_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_4726_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_4727_ = l_Lean_Name_mkStr4(v___x_4726_, v___x_4725_, v___x_4724_, v___x_4723_);
return v___x_4727_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__6(void){
_start:
{
lean_object* v___x_4728_; 
v___x_4728_ = lean_mk_string_unchecked("le_of_eq_2_k", 12, 12);
return v___x_4728_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7(void){
_start:
{
lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; 
v___x_4729_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__6, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__6);
v___x_4730_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_4731_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_4732_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_4733_ = l_Lean_Name_mkStr4(v___x_4732_, v___x_4731_, v___x_4730_, v___x_4729_);
return v___x_4733_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__8(void){
_start:
{
uint8_t v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; 
v___x_4734_ = 0;
v___x_4735_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4736_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4736_, 0, v___x_4735_);
lean_ctor_set_uint8(v___x_4736_, sizeof(void*)*1, v___x_4734_);
return v___x_4736_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__9(void){
_start:
{
lean_object* v___x_4737_; 
v___x_4737_ = lean_mk_string_unchecked(" = ", 3, 3);
return v___x_4737_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__10(void){
_start:
{
lean_object* v___x_4738_; lean_object* v___x_4739_; 
v___x_4738_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__9, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__9);
v___x_4739_ = l_Lean_stringToMessageData(v___x_4738_);
return v___x_4739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go(lean_object* v_a_4740_, lean_object* v_b_4741_, lean_object* v_h_4742_, lean_object* v_a_4743_, lean_object* v_a_4744_, lean_object* v_a_4745_, lean_object* v_a_4746_, lean_object* v_a_4747_, lean_object* v_a_4748_, lean_object* v_a_4749_, lean_object* v_a_4750_, lean_object* v_a_4751_, lean_object* v_a_4752_){
_start:
{
lean_object* v___y_4755_; lean_object* v___y_4756_; lean_object* v___y_4757_; lean_object* v___y_4758_; lean_object* v___y_4759_; lean_object* v___y_4760_; lean_object* v___y_4761_; lean_object* v___y_4762_; lean_object* v___y_4763_; lean_object* v___y_4764_; lean_object* v___y_4765_; lean_object* v___x_4853_; 
v___x_4853_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(v_a_4740_, v_a_4743_, v_a_4751_, v_a_4752_);
if (lean_obj_tag(v___x_4853_) == 0)
{
lean_object* v_a_4854_; lean_object* v___x_4856_; uint8_t v_isShared_4857_; uint8_t v_isSharedCheck_4899_; 
v_a_4854_ = lean_ctor_get(v___x_4853_, 0);
v_isSharedCheck_4899_ = !lean_is_exclusive(v___x_4853_);
if (v_isSharedCheck_4899_ == 0)
{
v___x_4856_ = v___x_4853_;
v_isShared_4857_ = v_isSharedCheck_4899_;
goto v_resetjp_4855_;
}
else
{
lean_inc(v_a_4854_);
lean_dec(v___x_4853_);
v___x_4856_ = lean_box(0);
v_isShared_4857_ = v_isSharedCheck_4899_;
goto v_resetjp_4855_;
}
v_resetjp_4855_:
{
if (lean_obj_tag(v_a_4854_) == 1)
{
lean_object* v_val_4858_; lean_object* v___x_4859_; 
lean_del_object(v___x_4856_);
v_val_4858_ = lean_ctor_get(v_a_4854_, 0);
lean_inc(v_val_4858_);
lean_dec_ref(v_a_4854_);
v___x_4859_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(v_b_4741_, v_a_4743_, v_a_4751_, v_a_4752_);
if (lean_obj_tag(v___x_4859_) == 0)
{
lean_object* v_a_4860_; lean_object* v___x_4862_; uint8_t v_isShared_4863_; uint8_t v_isSharedCheck_4886_; 
v_a_4860_ = lean_ctor_get(v___x_4859_, 0);
v_isSharedCheck_4886_ = !lean_is_exclusive(v___x_4859_);
if (v_isSharedCheck_4886_ == 0)
{
v___x_4862_ = v___x_4859_;
v_isShared_4863_ = v_isSharedCheck_4886_;
goto v_resetjp_4861_;
}
else
{
lean_inc(v_a_4860_);
lean_dec(v___x_4859_);
v___x_4862_ = lean_box(0);
v_isShared_4863_ = v_isSharedCheck_4886_;
goto v_resetjp_4861_;
}
v_resetjp_4861_:
{
if (lean_obj_tag(v_a_4860_) == 1)
{
lean_object* v_val_4864_; uint8_t v___x_4865_; 
v_val_4864_ = lean_ctor_get(v_a_4860_, 0);
lean_inc(v_val_4864_);
lean_dec_ref(v_a_4860_);
v___x_4865_ = lean_nat_dec_eq(v_val_4858_, v_val_4864_);
lean_dec(v_val_4864_);
if (v___x_4865_ == 0)
{
lean_object* v___x_4866_; lean_object* v___x_4868_; 
lean_dec(v_val_4858_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
v___x_4866_ = lean_box(0);
if (v_isShared_4863_ == 0)
{
lean_ctor_set(v___x_4862_, 0, v___x_4866_);
v___x_4868_ = v___x_4862_;
goto v_reusejp_4867_;
}
else
{
lean_object* v_reuseFailAlloc_4869_; 
v_reuseFailAlloc_4869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4869_, 0, v___x_4866_);
v___x_4868_ = v_reuseFailAlloc_4869_;
goto v_reusejp_4867_;
}
v_reusejp_4867_:
{
return v___x_4868_;
}
}
else
{
lean_object* v_options_4870_; uint8_t v_hasTrace_4871_; 
lean_del_object(v___x_4862_);
v_options_4870_ = lean_ctor_get(v_a_4751_, 2);
v_hasTrace_4871_ = lean_ctor_get_uint8(v_options_4870_, sizeof(void*)*1);
if (v_hasTrace_4871_ == 0)
{
v___y_4755_ = v_val_4858_;
v___y_4756_ = v_a_4743_;
v___y_4757_ = v_a_4744_;
v___y_4758_ = v_a_4745_;
v___y_4759_ = v_a_4746_;
v___y_4760_ = v_a_4747_;
v___y_4761_ = v_a_4748_;
v___y_4762_ = v_a_4749_;
v___y_4763_ = v_a_4750_;
v___y_4764_ = v_a_4751_;
v___y_4765_ = v_a_4752_;
goto v___jp_4754_;
}
else
{
lean_object* v_inheritedTraceOptions_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; uint8_t v___x_4875_; 
v_inheritedTraceOptions_4872_ = lean_ctor_get(v_a_4751_, 13);
v___x_4873_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4);
v___x_4874_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5);
v___x_4875_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4872_, v_options_4870_, v___x_4874_);
if (v___x_4875_ == 0)
{
v___y_4755_ = v_val_4858_;
v___y_4756_ = v_a_4743_;
v___y_4757_ = v_a_4744_;
v___y_4758_ = v_a_4745_;
v___y_4759_ = v_a_4746_;
v___y_4760_ = v_a_4747_;
v___y_4761_ = v_a_4748_;
v___y_4762_ = v_a_4749_;
v___y_4763_ = v_a_4750_;
v___y_4764_ = v_a_4751_;
v___y_4765_ = v_a_4752_;
goto v___jp_4754_;
}
else
{
lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; 
lean_inc_ref(v_a_4740_);
v___x_4876_ = l_Lean_MessageData_ofExpr(v_a_4740_);
v___x_4877_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__10, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__10);
v___x_4878_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4878_, 0, v___x_4876_);
lean_ctor_set(v___x_4878_, 1, v___x_4877_);
lean_inc_ref(v_b_4741_);
v___x_4879_ = l_Lean_MessageData_ofExpr(v_b_4741_);
v___x_4880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4880_, 0, v___x_4878_);
lean_ctor_set(v___x_4880_, 1, v___x_4879_);
v___x_4881_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v___x_4873_, v___x_4880_, v_a_4749_, v_a_4750_, v_a_4751_, v_a_4752_);
if (lean_obj_tag(v___x_4881_) == 0)
{
lean_dec_ref(v___x_4881_);
v___y_4755_ = v_val_4858_;
v___y_4756_ = v_a_4743_;
v___y_4757_ = v_a_4744_;
v___y_4758_ = v_a_4745_;
v___y_4759_ = v_a_4746_;
v___y_4760_ = v_a_4747_;
v___y_4761_ = v_a_4748_;
v___y_4762_ = v_a_4749_;
v___y_4763_ = v_a_4750_;
v___y_4764_ = v_a_4751_;
v___y_4765_ = v_a_4752_;
goto v___jp_4754_;
}
else
{
lean_dec(v_val_4858_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
return v___x_4881_;
}
}
}
}
}
else
{
lean_object* v___x_4882_; lean_object* v___x_4884_; 
lean_dec(v_a_4860_);
lean_dec(v_val_4858_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
v___x_4882_ = lean_box(0);
if (v_isShared_4863_ == 0)
{
lean_ctor_set(v___x_4862_, 0, v___x_4882_);
v___x_4884_ = v___x_4862_;
goto v_reusejp_4883_;
}
else
{
lean_object* v_reuseFailAlloc_4885_; 
v_reuseFailAlloc_4885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4885_, 0, v___x_4882_);
v___x_4884_ = v_reuseFailAlloc_4885_;
goto v_reusejp_4883_;
}
v_reusejp_4883_:
{
return v___x_4884_;
}
}
}
}
else
{
lean_object* v_a_4887_; lean_object* v___x_4889_; uint8_t v_isShared_4890_; uint8_t v_isSharedCheck_4894_; 
lean_dec(v_val_4858_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
v_a_4887_ = lean_ctor_get(v___x_4859_, 0);
v_isSharedCheck_4894_ = !lean_is_exclusive(v___x_4859_);
if (v_isSharedCheck_4894_ == 0)
{
v___x_4889_ = v___x_4859_;
v_isShared_4890_ = v_isSharedCheck_4894_;
goto v_resetjp_4888_;
}
else
{
lean_inc(v_a_4887_);
lean_dec(v___x_4859_);
v___x_4889_ = lean_box(0);
v_isShared_4890_ = v_isSharedCheck_4894_;
goto v_resetjp_4888_;
}
v_resetjp_4888_:
{
lean_object* v___x_4892_; 
if (v_isShared_4890_ == 0)
{
v___x_4892_ = v___x_4889_;
goto v_reusejp_4891_;
}
else
{
lean_object* v_reuseFailAlloc_4893_; 
v_reuseFailAlloc_4893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4893_, 0, v_a_4887_);
v___x_4892_ = v_reuseFailAlloc_4893_;
goto v_reusejp_4891_;
}
v_reusejp_4891_:
{
return v___x_4892_;
}
}
}
}
else
{
lean_object* v___x_4895_; lean_object* v___x_4897_; 
lean_dec(v_a_4854_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
v___x_4895_ = lean_box(0);
if (v_isShared_4857_ == 0)
{
lean_ctor_set(v___x_4856_, 0, v___x_4895_);
v___x_4897_ = v___x_4856_;
goto v_reusejp_4896_;
}
else
{
lean_object* v_reuseFailAlloc_4898_; 
v_reuseFailAlloc_4898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4898_, 0, v___x_4895_);
v___x_4897_ = v_reuseFailAlloc_4898_;
goto v_reusejp_4896_;
}
v_reusejp_4896_:
{
return v___x_4897_;
}
}
}
}
else
{
lean_object* v_a_4900_; lean_object* v___x_4902_; uint8_t v_isShared_4903_; uint8_t v_isSharedCheck_4907_; 
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
v_a_4900_ = lean_ctor_get(v___x_4853_, 0);
v_isSharedCheck_4907_ = !lean_is_exclusive(v___x_4853_);
if (v_isSharedCheck_4907_ == 0)
{
v___x_4902_ = v___x_4853_;
v_isShared_4903_ = v_isSharedCheck_4907_;
goto v_resetjp_4901_;
}
else
{
lean_inc(v_a_4900_);
lean_dec(v___x_4853_);
v___x_4902_ = lean_box(0);
v_isShared_4903_ = v_isSharedCheck_4907_;
goto v_resetjp_4901_;
}
v_resetjp_4901_:
{
lean_object* v___x_4905_; 
if (v_isShared_4903_ == 0)
{
v___x_4905_ = v___x_4902_;
goto v_reusejp_4904_;
}
else
{
lean_object* v_reuseFailAlloc_4906_; 
v_reuseFailAlloc_4906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4906_, 0, v_a_4900_);
v___x_4905_ = v_reuseFailAlloc_4906_;
goto v_reusejp_4904_;
}
v_reusejp_4904_:
{
return v___x_4905_;
}
}
}
v___jp_4754_:
{
lean_object* v___x_4766_; 
lean_inc_ref(v_a_4740_);
v___x_4766_ = l_Lean_Meta_Grind_Order_getNodeId(v_a_4740_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
if (lean_obj_tag(v___x_4766_) == 0)
{
lean_object* v_a_4767_; lean_object* v___x_4768_; 
v_a_4767_ = lean_ctor_get(v___x_4766_, 0);
lean_inc(v_a_4767_);
lean_dec_ref(v___x_4766_);
lean_inc_ref(v_b_4741_);
v___x_4768_ = l_Lean_Meta_Grind_Order_getNodeId(v_b_4741_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
if (lean_obj_tag(v___x_4768_) == 0)
{
lean_object* v_a_4769_; lean_object* v___x_4770_; 
v_a_4769_ = lean_ctor_get(v___x_4768_, 0);
lean_inc(v_a_4769_);
lean_dec_ref(v___x_4768_);
v___x_4770_ = l_Lean_Meta_Grind_Order_isRing(v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
if (lean_obj_tag(v___x_4770_) == 0)
{
lean_object* v_a_4771_; uint8_t v___x_4772_; 
v_a_4771_ = lean_ctor_get(v___x_4770_, 0);
lean_inc(v_a_4771_);
lean_dec_ref(v___x_4770_);
v___x_4772_ = lean_unbox(v_a_4771_);
if (v___x_4772_ == 0)
{
lean_object* v___x_4773_; lean_object* v___x_4774_; 
v___x_4773_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1);
v___x_4774_ = l_Lean_Meta_Grind_Order_mkLePreorderPrefix(v___x_4773_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
if (lean_obj_tag(v___x_4774_) == 0)
{
lean_object* v_a_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; 
v_a_4775_ = lean_ctor_get(v___x_4774_, 0);
lean_inc(v_a_4775_);
lean_dec_ref(v___x_4774_);
v___x_4776_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3);
v___x_4777_ = l_Lean_Meta_Grind_Order_mkLePreorderPrefix(v___x_4776_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
if (lean_obj_tag(v___x_4777_) == 0)
{
lean_object* v_a_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; uint8_t v___x_4782_; lean_object* v___x_4783_; 
v_a_4778_ = lean_ctor_get(v___x_4777_, 0);
lean_inc(v_a_4778_);
lean_dec_ref(v___x_4777_);
lean_inc_ref(v_h_4742_);
lean_inc_ref(v_b_4741_);
lean_inc_ref(v_a_4740_);
v___x_4779_ = l_Lean_mkApp3(v_a_4775_, v_a_4740_, v_b_4741_, v_h_4742_);
v___x_4780_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4781_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4781_, 0, v___x_4780_);
v___x_4782_ = lean_unbox(v_a_4771_);
lean_dec(v_a_4771_);
lean_ctor_set_uint8(v___x_4781_, sizeof(void*)*1, v___x_4782_);
lean_inc_ref(v___x_4781_);
lean_inc(v_a_4769_);
lean_inc(v_a_4767_);
v___x_4783_ = l_Lean_Meta_Grind_Order_addEdge(v_a_4767_, v_a_4769_, v___x_4781_, v___x_4779_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
if (lean_obj_tag(v___x_4783_) == 0)
{
lean_object* v___x_4784_; lean_object* v___x_4785_; 
lean_dec_ref(v___x_4783_);
v___x_4784_ = l_Lean_mkApp3(v_a_4778_, v_a_4740_, v_b_4741_, v_h_4742_);
v___x_4785_ = l_Lean_Meta_Grind_Order_addEdge(v_a_4769_, v_a_4767_, v___x_4781_, v___x_4784_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
lean_dec(v___y_4755_);
return v___x_4785_;
}
else
{
lean_dec_ref(v___x_4781_);
lean_dec(v_a_4778_);
lean_dec(v_a_4769_);
lean_dec(v_a_4767_);
lean_dec(v___y_4755_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
return v___x_4783_;
}
}
else
{
lean_object* v_a_4786_; lean_object* v___x_4788_; uint8_t v_isShared_4789_; uint8_t v_isSharedCheck_4793_; 
lean_dec(v_a_4775_);
lean_dec(v_a_4771_);
lean_dec(v_a_4769_);
lean_dec(v_a_4767_);
lean_dec(v___y_4755_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
v_a_4786_ = lean_ctor_get(v___x_4777_, 0);
v_isSharedCheck_4793_ = !lean_is_exclusive(v___x_4777_);
if (v_isSharedCheck_4793_ == 0)
{
v___x_4788_ = v___x_4777_;
v_isShared_4789_ = v_isSharedCheck_4793_;
goto v_resetjp_4787_;
}
else
{
lean_inc(v_a_4786_);
lean_dec(v___x_4777_);
v___x_4788_ = lean_box(0);
v_isShared_4789_ = v_isSharedCheck_4793_;
goto v_resetjp_4787_;
}
v_resetjp_4787_:
{
lean_object* v___x_4791_; 
if (v_isShared_4789_ == 0)
{
v___x_4791_ = v___x_4788_;
goto v_reusejp_4790_;
}
else
{
lean_object* v_reuseFailAlloc_4792_; 
v_reuseFailAlloc_4792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4792_, 0, v_a_4786_);
v___x_4791_ = v_reuseFailAlloc_4792_;
goto v_reusejp_4790_;
}
v_reusejp_4790_:
{
return v___x_4791_;
}
}
}
}
else
{
lean_object* v_a_4794_; lean_object* v___x_4796_; uint8_t v_isShared_4797_; uint8_t v_isSharedCheck_4801_; 
lean_dec(v_a_4771_);
lean_dec(v_a_4769_);
lean_dec(v_a_4767_);
lean_dec(v___y_4755_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
v_a_4794_ = lean_ctor_get(v___x_4774_, 0);
v_isSharedCheck_4801_ = !lean_is_exclusive(v___x_4774_);
if (v_isSharedCheck_4801_ == 0)
{
v___x_4796_ = v___x_4774_;
v_isShared_4797_ = v_isSharedCheck_4801_;
goto v_resetjp_4795_;
}
else
{
lean_inc(v_a_4794_);
lean_dec(v___x_4774_);
v___x_4796_ = lean_box(0);
v_isShared_4797_ = v_isSharedCheck_4801_;
goto v_resetjp_4795_;
}
v_resetjp_4795_:
{
lean_object* v___x_4799_; 
if (v_isShared_4797_ == 0)
{
v___x_4799_ = v___x_4796_;
goto v_reusejp_4798_;
}
else
{
lean_object* v_reuseFailAlloc_4800_; 
v_reuseFailAlloc_4800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4800_, 0, v_a_4794_);
v___x_4799_ = v_reuseFailAlloc_4800_;
goto v_reusejp_4798_;
}
v_reusejp_4798_:
{
return v___x_4799_;
}
}
}
}
else
{
lean_object* v___x_4802_; lean_object* v___x_4803_; 
lean_dec(v_a_4771_);
v___x_4802_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5);
v___x_4803_ = l_Lean_Meta_Grind_Order_mkOrdRingPrefix(v___x_4802_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
if (lean_obj_tag(v___x_4803_) == 0)
{
lean_object* v_a_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; 
v_a_4804_ = lean_ctor_get(v___x_4803_, 0);
lean_inc(v_a_4804_);
lean_dec_ref(v___x_4803_);
v___x_4805_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7);
v___x_4806_ = l_Lean_Meta_Grind_Order_mkOrdRingPrefix(v___x_4805_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
if (lean_obj_tag(v___x_4806_) == 0)
{
lean_object* v_a_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; 
v_a_4807_ = lean_ctor_get(v___x_4806_, 0);
lean_inc(v_a_4807_);
lean_dec_ref(v___x_4806_);
lean_inc_ref(v_h_4742_);
lean_inc_ref(v_b_4741_);
lean_inc_ref(v_a_4740_);
v___x_4808_ = l_Lean_mkApp3(v_a_4804_, v_a_4740_, v_b_4741_, v_h_4742_);
v___x_4809_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__8, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__8);
lean_inc(v_a_4769_);
lean_inc(v_a_4767_);
v___x_4810_ = l_Lean_Meta_Grind_Order_addEdge(v_a_4767_, v_a_4769_, v___x_4809_, v___x_4808_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
if (lean_obj_tag(v___x_4810_) == 0)
{
lean_object* v___x_4811_; lean_object* v___x_4812_; 
lean_dec_ref(v___x_4810_);
v___x_4811_ = l_Lean_mkApp3(v_a_4807_, v_a_4740_, v_b_4741_, v_h_4742_);
v___x_4812_ = l_Lean_Meta_Grind_Order_addEdge(v_a_4769_, v_a_4767_, v___x_4809_, v___x_4811_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_);
lean_dec(v___y_4755_);
return v___x_4812_;
}
else
{
lean_dec(v_a_4807_);
lean_dec(v_a_4769_);
lean_dec(v_a_4767_);
lean_dec(v___y_4755_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
return v___x_4810_;
}
}
else
{
lean_object* v_a_4813_; lean_object* v___x_4815_; uint8_t v_isShared_4816_; uint8_t v_isSharedCheck_4820_; 
lean_dec(v_a_4804_);
lean_dec(v_a_4769_);
lean_dec(v_a_4767_);
lean_dec(v___y_4755_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
v_a_4813_ = lean_ctor_get(v___x_4806_, 0);
v_isSharedCheck_4820_ = !lean_is_exclusive(v___x_4806_);
if (v_isSharedCheck_4820_ == 0)
{
v___x_4815_ = v___x_4806_;
v_isShared_4816_ = v_isSharedCheck_4820_;
goto v_resetjp_4814_;
}
else
{
lean_inc(v_a_4813_);
lean_dec(v___x_4806_);
v___x_4815_ = lean_box(0);
v_isShared_4816_ = v_isSharedCheck_4820_;
goto v_resetjp_4814_;
}
v_resetjp_4814_:
{
lean_object* v___x_4818_; 
if (v_isShared_4816_ == 0)
{
v___x_4818_ = v___x_4815_;
goto v_reusejp_4817_;
}
else
{
lean_object* v_reuseFailAlloc_4819_; 
v_reuseFailAlloc_4819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4819_, 0, v_a_4813_);
v___x_4818_ = v_reuseFailAlloc_4819_;
goto v_reusejp_4817_;
}
v_reusejp_4817_:
{
return v___x_4818_;
}
}
}
}
else
{
lean_object* v_a_4821_; lean_object* v___x_4823_; uint8_t v_isShared_4824_; uint8_t v_isSharedCheck_4828_; 
lean_dec(v_a_4769_);
lean_dec(v_a_4767_);
lean_dec(v___y_4755_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
v_a_4821_ = lean_ctor_get(v___x_4803_, 0);
v_isSharedCheck_4828_ = !lean_is_exclusive(v___x_4803_);
if (v_isSharedCheck_4828_ == 0)
{
v___x_4823_ = v___x_4803_;
v_isShared_4824_ = v_isSharedCheck_4828_;
goto v_resetjp_4822_;
}
else
{
lean_inc(v_a_4821_);
lean_dec(v___x_4803_);
v___x_4823_ = lean_box(0);
v_isShared_4824_ = v_isSharedCheck_4828_;
goto v_resetjp_4822_;
}
v_resetjp_4822_:
{
lean_object* v___x_4826_; 
if (v_isShared_4824_ == 0)
{
v___x_4826_ = v___x_4823_;
goto v_reusejp_4825_;
}
else
{
lean_object* v_reuseFailAlloc_4827_; 
v_reuseFailAlloc_4827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4827_, 0, v_a_4821_);
v___x_4826_ = v_reuseFailAlloc_4827_;
goto v_reusejp_4825_;
}
v_reusejp_4825_:
{
return v___x_4826_;
}
}
}
}
}
else
{
lean_object* v_a_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4836_; 
lean_dec(v_a_4769_);
lean_dec(v_a_4767_);
lean_dec(v___y_4755_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
v_a_4829_ = lean_ctor_get(v___x_4770_, 0);
v_isSharedCheck_4836_ = !lean_is_exclusive(v___x_4770_);
if (v_isSharedCheck_4836_ == 0)
{
v___x_4831_ = v___x_4770_;
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
else
{
lean_inc(v_a_4829_);
lean_dec(v___x_4770_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4834_; 
if (v_isShared_4832_ == 0)
{
v___x_4834_ = v___x_4831_;
goto v_reusejp_4833_;
}
else
{
lean_object* v_reuseFailAlloc_4835_; 
v_reuseFailAlloc_4835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4835_, 0, v_a_4829_);
v___x_4834_ = v_reuseFailAlloc_4835_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
return v___x_4834_;
}
}
}
}
else
{
lean_object* v_a_4837_; lean_object* v___x_4839_; uint8_t v_isShared_4840_; uint8_t v_isSharedCheck_4844_; 
lean_dec(v_a_4767_);
lean_dec(v___y_4755_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
v_a_4837_ = lean_ctor_get(v___x_4768_, 0);
v_isSharedCheck_4844_ = !lean_is_exclusive(v___x_4768_);
if (v_isSharedCheck_4844_ == 0)
{
v___x_4839_ = v___x_4768_;
v_isShared_4840_ = v_isSharedCheck_4844_;
goto v_resetjp_4838_;
}
else
{
lean_inc(v_a_4837_);
lean_dec(v___x_4768_);
v___x_4839_ = lean_box(0);
v_isShared_4840_ = v_isSharedCheck_4844_;
goto v_resetjp_4838_;
}
v_resetjp_4838_:
{
lean_object* v___x_4842_; 
if (v_isShared_4840_ == 0)
{
v___x_4842_ = v___x_4839_;
goto v_reusejp_4841_;
}
else
{
lean_object* v_reuseFailAlloc_4843_; 
v_reuseFailAlloc_4843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4843_, 0, v_a_4837_);
v___x_4842_ = v_reuseFailAlloc_4843_;
goto v_reusejp_4841_;
}
v_reusejp_4841_:
{
return v___x_4842_;
}
}
}
}
else
{
lean_object* v_a_4845_; lean_object* v___x_4847_; uint8_t v_isShared_4848_; uint8_t v_isSharedCheck_4852_; 
lean_dec(v___y_4755_);
lean_dec_ref(v_h_4742_);
lean_dec_ref(v_b_4741_);
lean_dec_ref(v_a_4740_);
v_a_4845_ = lean_ctor_get(v___x_4766_, 0);
v_isSharedCheck_4852_ = !lean_is_exclusive(v___x_4766_);
if (v_isSharedCheck_4852_ == 0)
{
v___x_4847_ = v___x_4766_;
v_isShared_4848_ = v_isSharedCheck_4852_;
goto v_resetjp_4846_;
}
else
{
lean_inc(v_a_4845_);
lean_dec(v___x_4766_);
v___x_4847_ = lean_box(0);
v_isShared_4848_ = v_isSharedCheck_4852_;
goto v_resetjp_4846_;
}
v_resetjp_4846_:
{
lean_object* v___x_4850_; 
if (v_isShared_4848_ == 0)
{
v___x_4850_ = v___x_4847_;
goto v_reusejp_4849_;
}
else
{
lean_object* v_reuseFailAlloc_4851_; 
v_reuseFailAlloc_4851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4851_, 0, v_a_4845_);
v___x_4850_ = v_reuseFailAlloc_4851_;
goto v_reusejp_4849_;
}
v_reusejp_4849_:
{
return v___x_4850_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___boxed(lean_object* v_a_4908_, lean_object* v_b_4909_, lean_object* v_h_4910_, lean_object* v_a_4911_, lean_object* v_a_4912_, lean_object* v_a_4913_, lean_object* v_a_4914_, lean_object* v_a_4915_, lean_object* v_a_4916_, lean_object* v_a_4917_, lean_object* v_a_4918_, lean_object* v_a_4919_, lean_object* v_a_4920_, lean_object* v_a_4921_){
_start:
{
lean_object* v_res_4922_; 
v_res_4922_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go(v_a_4908_, v_b_4909_, v_h_4910_, v_a_4911_, v_a_4912_, v_a_4913_, v_a_4914_, v_a_4915_, v_a_4916_, v_a_4917_, v_a_4918_, v_a_4919_, v_a_4920_);
lean_dec(v_a_4920_);
lean_dec_ref(v_a_4919_);
lean_dec(v_a_4918_);
lean_dec_ref(v_a_4917_);
lean_dec(v_a_4916_);
lean_dec_ref(v_a_4915_);
lean_dec(v_a_4914_);
lean_dec_ref(v_a_4913_);
lean_dec(v_a_4912_);
lean_dec(v_a_4911_);
return v_res_4922_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_processNewEq___closed__0(void){
_start:
{
lean_object* v___x_4923_; 
v___x_4923_ = lean_mk_string_unchecked("NatCast", 7, 7);
return v___x_4923_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_processNewEq___closed__1(void){
_start:
{
lean_object* v___x_4924_; lean_object* v___x_4925_; 
v___x_4924_ = lean_obj_once(&l_Lean_Meta_Grind_Order_processNewEq___closed__0, &l_Lean_Meta_Grind_Order_processNewEq___closed__0_once, _init_l_Lean_Meta_Grind_Order_processNewEq___closed__0);
v___x_4925_ = l_Lean_Name_mkStr1(v___x_4924_);
return v___x_4925_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_processNewEq___closed__2(void){
_start:
{
lean_object* v___x_4926_; 
v___x_4926_ = lean_mk_string_unchecked("of_natCast_eq", 13, 13);
return v___x_4926_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_processNewEq___closed__3(void){
_start:
{
lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; 
v___x_4927_ = lean_obj_once(&l_Lean_Meta_Grind_Order_processNewEq___closed__2, &l_Lean_Meta_Grind_Order_processNewEq___closed__2_once, _init_l_Lean_Meta_Grind_Order_processNewEq___closed__2);
v___x_4928_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_4929_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_4930_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_4931_ = l_Lean_Name_mkStr4(v___x_4930_, v___x_4929_, v___x_4928_, v___x_4927_);
return v___x_4931_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_processNewEq___closed__4(void){
_start:
{
lean_object* v___x_4932_; 
v___x_4932_ = lean_mk_string_unchecked("of_nat_eq", 9, 9);
return v___x_4932_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_processNewEq___closed__5(void){
_start:
{
lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; 
v___x_4933_ = lean_obj_once(&l_Lean_Meta_Grind_Order_processNewEq___closed__4, &l_Lean_Meta_Grind_Order_processNewEq___closed__4_once, _init_l_Lean_Meta_Grind_Order_processNewEq___closed__4);
v___x_4934_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2);
v___x_4935_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1);
v___x_4936_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0);
v___x_4937_ = l_Lean_Name_mkStr4(v___x_4936_, v___x_4935_, v___x_4934_, v___x_4933_);
return v___x_4937_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_processNewEq___closed__6(void){
_start:
{
lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; 
v___x_4938_ = lean_box(0);
v___x_4939_ = lean_obj_once(&l_Lean_Meta_Grind_Order_processNewEq___closed__5, &l_Lean_Meta_Grind_Order_processNewEq___closed__5_once, _init_l_Lean_Meta_Grind_Order_processNewEq___closed__5);
v___x_4940_ = l_Lean_mkConst(v___x_4939_, v___x_4938_);
return v___x_4940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_processNewEq(lean_object* v_a_4941_, lean_object* v_b_4942_, lean_object* v_a_4943_, lean_object* v_a_4944_, lean_object* v_a_4945_, lean_object* v_a_4946_, lean_object* v_a_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_, lean_object* v_a_4952_){
_start:
{
uint8_t v___x_4954_; 
v___x_4954_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_a_4941_, v_b_4942_);
if (v___x_4954_ == 0)
{
lean_object* v___x_4955_; 
lean_inc(v_a_4952_);
lean_inc_ref(v_a_4951_);
lean_inc(v_a_4950_);
lean_inc_ref(v_a_4949_);
lean_inc(v_a_4948_);
lean_inc_ref(v_a_4947_);
lean_inc(v_a_4946_);
lean_inc_ref(v_a_4945_);
lean_inc(v_a_4944_);
lean_inc(v_a_4943_);
lean_inc_ref(v_b_4942_);
lean_inc_ref(v_a_4941_);
v___x_4955_ = lean_grind_mk_eq_proof(v_a_4941_, v_b_4942_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
if (lean_obj_tag(v___x_4955_) == 0)
{
lean_object* v_a_4956_; lean_object* v___x_4957_; 
v_a_4956_ = lean_ctor_get(v___x_4955_, 0);
lean_inc(v_a_4956_);
lean_dec_ref(v___x_4955_);
v___x_4957_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg(v_a_4941_, v_a_4943_, v_a_4951_, v_a_4952_);
if (lean_obj_tag(v___x_4957_) == 0)
{
lean_object* v_a_4958_; 
v_a_4958_ = lean_ctor_get(v___x_4957_, 0);
lean_inc(v_a_4958_);
lean_dec_ref(v___x_4957_);
if (lean_obj_tag(v_a_4958_) == 1)
{
lean_object* v_val_4959_; lean_object* v_e_4960_; lean_object* v_h_4961_; lean_object* v_00_u03b1_4962_; lean_object* v___x_4963_; 
v_val_4959_ = lean_ctor_get(v_a_4958_, 0);
lean_inc(v_val_4959_);
lean_dec_ref(v_a_4958_);
v_e_4960_ = lean_ctor_get(v_val_4959_, 0);
lean_inc_ref(v_e_4960_);
v_h_4961_ = lean_ctor_get(v_val_4959_, 1);
lean_inc_ref(v_h_4961_);
v_00_u03b1_4962_ = lean_ctor_get(v_val_4959_, 2);
lean_inc_ref(v_00_u03b1_4962_);
lean_dec(v_val_4959_);
v___x_4963_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg(v_b_4942_, v_a_4943_, v_a_4951_, v_a_4952_);
if (lean_obj_tag(v___x_4963_) == 0)
{
lean_object* v_a_4964_; lean_object* v___x_4966_; uint8_t v_isShared_4967_; uint8_t v_isSharedCheck_5009_; 
v_a_4964_ = lean_ctor_get(v___x_4963_, 0);
v_isSharedCheck_5009_ = !lean_is_exclusive(v___x_4963_);
if (v_isSharedCheck_5009_ == 0)
{
v___x_4966_ = v___x_4963_;
v_isShared_4967_ = v_isSharedCheck_5009_;
goto v_resetjp_4965_;
}
else
{
lean_inc(v_a_4964_);
lean_dec(v___x_4963_);
v___x_4966_ = lean_box(0);
v_isShared_4967_ = v_isSharedCheck_5009_;
goto v_resetjp_4965_;
}
v_resetjp_4965_:
{
if (lean_obj_tag(v_a_4964_) == 1)
{
lean_object* v_val_4968_; lean_object* v_e_4969_; lean_object* v_h_4970_; lean_object* v___x_4971_; uint8_t v___x_4972_; 
lean_del_object(v___x_4966_);
v_val_4968_ = lean_ctor_get(v_a_4964_, 0);
lean_inc(v_val_4968_);
lean_dec_ref(v_a_4964_);
v_e_4969_ = lean_ctor_get(v_val_4968_, 0);
lean_inc_ref(v_e_4969_);
v_h_4970_ = lean_ctor_get(v_val_4968_, 1);
lean_inc_ref(v_h_4970_);
lean_dec(v_val_4968_);
v___x_4971_ = l_Lean_Int_mkType;
v___x_4972_ = lean_expr_eqv(v_00_u03b1_4962_, v___x_4971_);
if (v___x_4972_ == 0)
{
lean_object* v___x_4973_; 
lean_inc_ref(v_00_u03b1_4962_);
v___x_4973_ = l_Lean_Meta_getDecLevel(v_00_u03b1_4962_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
if (lean_obj_tag(v___x_4973_) == 0)
{
lean_object* v_a_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; 
v_a_4974_ = lean_ctor_get(v___x_4973_, 0);
lean_inc(v_a_4974_);
lean_dec_ref(v___x_4973_);
v___x_4975_ = lean_obj_once(&l_Lean_Meta_Grind_Order_processNewEq___closed__1, &l_Lean_Meta_Grind_Order_processNewEq___closed__1_once, _init_l_Lean_Meta_Grind_Order_processNewEq___closed__1);
v___x_4976_ = lean_box(0);
v___x_4977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4977_, 0, v_a_4974_);
lean_ctor_set(v___x_4977_, 1, v___x_4976_);
lean_inc_ref(v___x_4977_);
v___x_4978_ = l_Lean_mkConst(v___x_4975_, v___x_4977_);
lean_inc_ref(v_00_u03b1_4962_);
v___x_4979_ = l_Lean_Expr_app___override(v___x_4978_, v_00_u03b1_4962_);
v___x_4980_ = l_Lean_Meta_Sym_synthInstance(v___x_4979_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
if (lean_obj_tag(v___x_4980_) == 0)
{
lean_object* v_a_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; 
v_a_4981_ = lean_ctor_get(v___x_4980_, 0);
lean_inc(v_a_4981_);
lean_dec_ref(v___x_4980_);
v___x_4982_ = lean_obj_once(&l_Lean_Meta_Grind_Order_processNewEq___closed__3, &l_Lean_Meta_Grind_Order_processNewEq___closed__3_once, _init_l_Lean_Meta_Grind_Order_processNewEq___closed__3);
v___x_4983_ = l_Lean_mkConst(v___x_4982_, v___x_4977_);
lean_inc_ref(v_e_4969_);
lean_inc_ref(v_e_4960_);
v___x_4984_ = l_Lean_mkApp9(v___x_4983_, v_00_u03b1_4962_, v_a_4981_, v_a_4941_, v_b_4942_, v_e_4960_, v_e_4969_, v_h_4961_, v_h_4970_, v_a_4956_);
v___x_4985_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go(v_e_4960_, v_e_4969_, v___x_4984_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
return v___x_4985_;
}
else
{
lean_object* v_a_4986_; lean_object* v___x_4988_; uint8_t v_isShared_4989_; uint8_t v_isSharedCheck_4993_; 
lean_dec_ref(v___x_4977_);
lean_dec_ref(v_h_4970_);
lean_dec_ref(v_e_4969_);
lean_dec_ref(v_00_u03b1_4962_);
lean_dec_ref(v_h_4961_);
lean_dec_ref(v_e_4960_);
lean_dec(v_a_4956_);
lean_dec_ref(v_b_4942_);
lean_dec_ref(v_a_4941_);
v_a_4986_ = lean_ctor_get(v___x_4980_, 0);
v_isSharedCheck_4993_ = !lean_is_exclusive(v___x_4980_);
if (v_isSharedCheck_4993_ == 0)
{
v___x_4988_ = v___x_4980_;
v_isShared_4989_ = v_isSharedCheck_4993_;
goto v_resetjp_4987_;
}
else
{
lean_inc(v_a_4986_);
lean_dec(v___x_4980_);
v___x_4988_ = lean_box(0);
v_isShared_4989_ = v_isSharedCheck_4993_;
goto v_resetjp_4987_;
}
v_resetjp_4987_:
{
lean_object* v___x_4991_; 
if (v_isShared_4989_ == 0)
{
v___x_4991_ = v___x_4988_;
goto v_reusejp_4990_;
}
else
{
lean_object* v_reuseFailAlloc_4992_; 
v_reuseFailAlloc_4992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4992_, 0, v_a_4986_);
v___x_4991_ = v_reuseFailAlloc_4992_;
goto v_reusejp_4990_;
}
v_reusejp_4990_:
{
return v___x_4991_;
}
}
}
}
else
{
lean_object* v_a_4994_; lean_object* v___x_4996_; uint8_t v_isShared_4997_; uint8_t v_isSharedCheck_5001_; 
lean_dec_ref(v_h_4970_);
lean_dec_ref(v_e_4969_);
lean_dec_ref(v_00_u03b1_4962_);
lean_dec_ref(v_h_4961_);
lean_dec_ref(v_e_4960_);
lean_dec(v_a_4956_);
lean_dec_ref(v_b_4942_);
lean_dec_ref(v_a_4941_);
v_a_4994_ = lean_ctor_get(v___x_4973_, 0);
v_isSharedCheck_5001_ = !lean_is_exclusive(v___x_4973_);
if (v_isSharedCheck_5001_ == 0)
{
v___x_4996_ = v___x_4973_;
v_isShared_4997_ = v_isSharedCheck_5001_;
goto v_resetjp_4995_;
}
else
{
lean_inc(v_a_4994_);
lean_dec(v___x_4973_);
v___x_4996_ = lean_box(0);
v_isShared_4997_ = v_isSharedCheck_5001_;
goto v_resetjp_4995_;
}
v_resetjp_4995_:
{
lean_object* v___x_4999_; 
if (v_isShared_4997_ == 0)
{
v___x_4999_ = v___x_4996_;
goto v_reusejp_4998_;
}
else
{
lean_object* v_reuseFailAlloc_5000_; 
v_reuseFailAlloc_5000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5000_, 0, v_a_4994_);
v___x_4999_ = v_reuseFailAlloc_5000_;
goto v_reusejp_4998_;
}
v_reusejp_4998_:
{
return v___x_4999_;
}
}
}
}
else
{
lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; 
lean_dec_ref(v_00_u03b1_4962_);
v___x_5002_ = lean_obj_once(&l_Lean_Meta_Grind_Order_processNewEq___closed__6, &l_Lean_Meta_Grind_Order_processNewEq___closed__6_once, _init_l_Lean_Meta_Grind_Order_processNewEq___closed__6);
lean_inc_ref(v_e_4969_);
lean_inc_ref(v_e_4960_);
v___x_5003_ = l_Lean_mkApp7(v___x_5002_, v_a_4941_, v_b_4942_, v_e_4960_, v_e_4969_, v_h_4961_, v_h_4970_, v_a_4956_);
v___x_5004_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go(v_e_4960_, v_e_4969_, v___x_5003_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
return v___x_5004_;
}
}
else
{
lean_object* v___x_5005_; lean_object* v___x_5007_; 
lean_dec(v_a_4964_);
lean_dec_ref(v_00_u03b1_4962_);
lean_dec_ref(v_h_4961_);
lean_dec_ref(v_e_4960_);
lean_dec(v_a_4956_);
lean_dec_ref(v_b_4942_);
lean_dec_ref(v_a_4941_);
v___x_5005_ = lean_box(0);
if (v_isShared_4967_ == 0)
{
lean_ctor_set(v___x_4966_, 0, v___x_5005_);
v___x_5007_ = v___x_4966_;
goto v_reusejp_5006_;
}
else
{
lean_object* v_reuseFailAlloc_5008_; 
v_reuseFailAlloc_5008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5008_, 0, v___x_5005_);
v___x_5007_ = v_reuseFailAlloc_5008_;
goto v_reusejp_5006_;
}
v_reusejp_5006_:
{
return v___x_5007_;
}
}
}
}
else
{
lean_object* v_a_5010_; lean_object* v___x_5012_; uint8_t v_isShared_5013_; uint8_t v_isSharedCheck_5017_; 
lean_dec_ref(v_00_u03b1_4962_);
lean_dec_ref(v_h_4961_);
lean_dec_ref(v_e_4960_);
lean_dec(v_a_4956_);
lean_dec_ref(v_b_4942_);
lean_dec_ref(v_a_4941_);
v_a_5010_ = lean_ctor_get(v___x_4963_, 0);
v_isSharedCheck_5017_ = !lean_is_exclusive(v___x_4963_);
if (v_isSharedCheck_5017_ == 0)
{
v___x_5012_ = v___x_4963_;
v_isShared_5013_ = v_isSharedCheck_5017_;
goto v_resetjp_5011_;
}
else
{
lean_inc(v_a_5010_);
lean_dec(v___x_4963_);
v___x_5012_ = lean_box(0);
v_isShared_5013_ = v_isSharedCheck_5017_;
goto v_resetjp_5011_;
}
v_resetjp_5011_:
{
lean_object* v___x_5015_; 
if (v_isShared_5013_ == 0)
{
v___x_5015_ = v___x_5012_;
goto v_reusejp_5014_;
}
else
{
lean_object* v_reuseFailAlloc_5016_; 
v_reuseFailAlloc_5016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5016_, 0, v_a_5010_);
v___x_5015_ = v_reuseFailAlloc_5016_;
goto v_reusejp_5014_;
}
v_reusejp_5014_:
{
return v___x_5015_;
}
}
}
}
else
{
lean_object* v___x_5018_; 
lean_dec(v_a_4958_);
v___x_5018_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go(v_a_4941_, v_b_4942_, v_a_4956_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
return v___x_5018_;
}
}
else
{
lean_object* v_a_5019_; lean_object* v___x_5021_; uint8_t v_isShared_5022_; uint8_t v_isSharedCheck_5026_; 
lean_dec(v_a_4956_);
lean_dec_ref(v_b_4942_);
lean_dec_ref(v_a_4941_);
v_a_5019_ = lean_ctor_get(v___x_4957_, 0);
v_isSharedCheck_5026_ = !lean_is_exclusive(v___x_4957_);
if (v_isSharedCheck_5026_ == 0)
{
v___x_5021_ = v___x_4957_;
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
else
{
lean_inc(v_a_5019_);
lean_dec(v___x_4957_);
v___x_5021_ = lean_box(0);
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
v_resetjp_5020_:
{
lean_object* v___x_5024_; 
if (v_isShared_5022_ == 0)
{
v___x_5024_ = v___x_5021_;
goto v_reusejp_5023_;
}
else
{
lean_object* v_reuseFailAlloc_5025_; 
v_reuseFailAlloc_5025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5025_, 0, v_a_5019_);
v___x_5024_ = v_reuseFailAlloc_5025_;
goto v_reusejp_5023_;
}
v_reusejp_5023_:
{
return v___x_5024_;
}
}
}
}
else
{
lean_object* v_a_5027_; lean_object* v___x_5029_; uint8_t v_isShared_5030_; uint8_t v_isSharedCheck_5034_; 
lean_dec_ref(v_b_4942_);
lean_dec_ref(v_a_4941_);
v_a_5027_ = lean_ctor_get(v___x_4955_, 0);
v_isSharedCheck_5034_ = !lean_is_exclusive(v___x_4955_);
if (v_isSharedCheck_5034_ == 0)
{
v___x_5029_ = v___x_4955_;
v_isShared_5030_ = v_isSharedCheck_5034_;
goto v_resetjp_5028_;
}
else
{
lean_inc(v_a_5027_);
lean_dec(v___x_4955_);
v___x_5029_ = lean_box(0);
v_isShared_5030_ = v_isSharedCheck_5034_;
goto v_resetjp_5028_;
}
v_resetjp_5028_:
{
lean_object* v___x_5032_; 
if (v_isShared_5030_ == 0)
{
v___x_5032_ = v___x_5029_;
goto v_reusejp_5031_;
}
else
{
lean_object* v_reuseFailAlloc_5033_; 
v_reuseFailAlloc_5033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5033_, 0, v_a_5027_);
v___x_5032_ = v_reuseFailAlloc_5033_;
goto v_reusejp_5031_;
}
v_reusejp_5031_:
{
return v___x_5032_;
}
}
}
}
else
{
lean_object* v___x_5035_; lean_object* v___x_5036_; 
lean_dec_ref(v_b_4942_);
lean_dec_ref(v_a_4941_);
v___x_5035_ = lean_box(0);
v___x_5036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5036_, 0, v___x_5035_);
return v___x_5036_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_processNewEq___boxed(lean_object* v_a_5037_, lean_object* v_b_5038_, lean_object* v_a_5039_, lean_object* v_a_5040_, lean_object* v_a_5041_, lean_object* v_a_5042_, lean_object* v_a_5043_, lean_object* v_a_5044_, lean_object* v_a_5045_, lean_object* v_a_5046_, lean_object* v_a_5047_, lean_object* v_a_5048_, lean_object* v_a_5049_){
_start:
{
lean_object* v_res_5050_; 
v_res_5050_ = l_Lean_Meta_Grind_Order_processNewEq(v_a_5037_, v_b_5038_, v_a_5039_, v_a_5040_, v_a_5041_, v_a_5042_, v_a_5043_, v_a_5044_, v_a_5045_, v_a_5046_, v_a_5047_, v_a_5048_);
lean_dec(v_a_5048_);
lean_dec_ref(v_a_5047_);
lean_dec(v_a_5046_);
lean_dec_ref(v_a_5045_);
lean_dec(v_a_5044_);
lean_dec_ref(v_a_5043_);
lean_dec(v_a_5042_);
lean_dec_ref(v_a_5041_);
lean_dec(v_a_5040_);
lean_dec(v_a_5039_);
return v_res_5050_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Order_OrderM(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Propagator(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Order(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Order_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Order_Proof(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Order_Assert(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Order_OrderM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Propagator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Order_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Order_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_2746986335____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1670379118____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Order_Assert(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Order_OrderM(uint8_t builtin);
lean_object* initialize_Init_Grind_Propagator(uint8_t builtin);
lean_object* initialize_Init_Grind_Order(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Order_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Order_Proof(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Order_Assert(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Order_OrderM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Propagator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Order_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Order_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Order_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Order_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Order_Assert(builtin);
}
#ifdef __cplusplus
}
#endif
