// Lean compiler output
// Module: Lean.Server.Requests
// Imports: public import Lean.Server.RequestCancellation public import Lean.Server.FileSource public import Lean.Server.FileWorker.Utils public import Std.Sync.Mutex
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint64_t lean_string_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_IO_AsyncList_waitFind_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_Server_ServerTask_EIO_mapTaskCostly___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Server_ServerTask_mapCheap___redArg(lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___aux__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Mutex_atomically___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_String_hash___boxed(lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentHashMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftBaseIOEIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftT___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l_instMonadFinallyEIO___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_tryFinally___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_InfoTree_foldInfo___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Server_ServerTask_EIO_bindTaskCostly___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_runCommandElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_runTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_lspPosToUtf8Pos(lean_object*, lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_endPos(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_Range_overlaps(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Server_ServerTask_bindCheap___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Server_ServerTask_EIO_bindTaskCheap___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Server_RequestCancellationToken_wasCancelledByCancelRequest(lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_runCoreM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_range_x3f(lean_object*);
lean_object* l_Lean_Server_ServerTask_EIO_mapTaskCheap___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_instToSnapshotTreeCommandElaboratingSnapshot_go(lean_object*);
extern lean_object* l_Lean_MessageLog_empty;
uint8_t l_Lean_Syntax_Range_includes(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Server_ServerTask_EIO_asTask___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeContainsHoverPos(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeContainsHoverPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeOverlapsRequestedRange(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeOverlapsRequestedRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeIncludesRequestedRange(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeIncludesRequestedRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0;
static lean_once_cell_t l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_instInhabitedRequestError_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instInhabitedRequestError_default___closed__0;
static lean_once_cell_t l_Lean_Server_instInhabitedRequestError_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instInhabitedRequestError_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedRequestError_default;
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedRequestError;
static lean_once_cell_t l_Lean_Server_RequestError_fileChanged___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestError_fileChanged___closed__0;
static lean_once_cell_t l_Lean_Server_RequestError_fileChanged___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestError_fileChanged___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_fileChanged;
static lean_once_cell_t l_Lean_Server_RequestError_methodNotFound___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestError_methodNotFound___closed__0;
static lean_once_cell_t l_Lean_Server_RequestError_methodNotFound___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestError_methodNotFound___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_methodNotFound(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_methodNotFound___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_invalidParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_internalError(lean_object*);
static lean_once_cell_t l_Lean_Server_RequestError_requestCancelled___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestError_requestCancelled___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_requestCancelled;
static lean_once_cell_t l_Lean_Server_RequestError_rpcNeedsReconnect___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestError_rpcNeedsReconnect___closed__0;
static lean_once_cell_t l_Lean_Server_RequestError_rpcNeedsReconnect___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestError_rpcNeedsReconnect___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_rpcNeedsReconnect;
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_ofException(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_ofException___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_ofIoError(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_toLspResponseError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_toLspResponseError___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_parseRequestParams___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_parseRequestParams___redArg___closed__0;
static lean_once_cell_t l_Lean_Server_parseRequestParams___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_parseRequestParams___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_success_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_success_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_failure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_failure_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_instInhabitedServerRequestResponse_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instInhabitedServerRequestResponse_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedServerRequestResponse_default(lean_object*);
static lean_once_cell_t l_Lean_Server_instInhabitedServerRequestResponse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instInhabitedServerRequestResponse___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedServerRequestResponse(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_run___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_run(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestTask_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestTask_pure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftIORequestM___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftIORequestM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_instMonadLiftIORequestM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instMonadLiftIORequestM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftIORequestM;
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftEIOExceptionRequestM___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftEIOExceptionRequestM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_instMonadLiftEIOExceptionRequestM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instMonadLiftEIOExceptionRequestM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftEIOExceptionRequestM;
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftCancellableMRequestM___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftCancellableMRequestM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_instMonadLiftCancellableMRequestM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instMonadLiftCancellableMRequestM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftCancellableMRequestM;
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runInIO___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runInIO___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runInIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runInIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_asTask___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_asTask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_asTask___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_asTask___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_asTask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_pureTask___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_pureTask___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_pureTask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_pureTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCheap___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCheap___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCheap___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCheap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCheap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCheap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCostly___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCostly___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCostly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCostly___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCheap___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCheap___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCheap___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCheap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCheap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCheap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCostly___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCostly___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCostly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCostly___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCheap___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCheap___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCheap___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCheap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCheap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCheap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCostly___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCostly___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCostly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCostly___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCheap___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCheap___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCheap___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCheap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCheap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCheap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCostly___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCostly___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCostly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCostly___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_checkCancelled(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_checkCancelled___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_RequestM_sendServerRequest___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestM_sendServerRequest___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_sendServerRequest___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_sendServerRequest___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_sendServerRequest___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_sendServerRequest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_sendServerRequest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_waitFindSnapAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_waitFindSnapAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_waitFindSnapAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_waitFindSnapAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnap___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindWaitFindSnap___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindWaitFindSnap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindWaitFindSnap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindWaitFindSnap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_RequestM_withWaitFindSnapAtPos_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_RequestM_withWaitFindSnapAtPos_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__0;
static lean_once_cell_t l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__1;
static lean_once_cell_t l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__2;
static lean_once_cell_t l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_isAfterHoverPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_isAfterHoverPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_containsHoverPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_containsHoverPos___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdParsedSnap___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdParsedSnap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_RequestM_findCmdDataAtPos_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__0;
static lean_once_cell_t l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__1;
static lean_once_cell_t l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__2;
static lean_once_cell_t l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_RequestM_findCmdDataAtPos___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__2___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__2(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdDataAtPos(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findInfoTreeAtPos___lam__0(lean_object*);
static lean_once_cell_t l_Lean_Server_RequestM_findInfoTreeAtPos___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_RequestM_findInfoTreeAtPos___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findInfoTreeAtPos(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findInfoTreeAtPos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCommandElabM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCommandElabM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCommandElabM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCommandElabM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCoreM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCoreM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCoreM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCoreM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runTermElabM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runTermElabM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runTermElabM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runTermElabM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__0;
static lean_once_cell_t l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__1;
static lean_once_cell_t l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__2;
static lean_once_cell_t l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__3;
static lean_once_cell_t l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__4;
static lean_once_cell_t l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__5;
LEAN_EXPORT lean_object* l_Lean_Server_SerializedLspResponse_toSerializedMessage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_SerializedLspResponse_toSerializedMessage___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_initFn_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_initFn_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_requestHandlers;
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_registerLspRequestHandler___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_registerLspRequestHandler___redArg___closed__0;
static lean_once_cell_t l_Lean_Server_registerLspRequestHandler___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_registerLspRequestHandler___redArg___closed__1;
static lean_once_cell_t l_Lean_Server_registerLspRequestHandler___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_registerLspRequestHandler___redArg___closed__2;
static lean_once_cell_t l_Lean_Server_registerLspRequestHandler___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_registerLspRequestHandler___redArg___closed__3;
static lean_once_cell_t l_Lean_Server_registerLspRequestHandler___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_registerLspRequestHandler___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_lookupLspRequestHandler(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_lookupLspRequestHandler___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_chainLspRequestHandler___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_chainLspRequestHandler___redArg___closed__0;
static lean_once_cell_t l_Lean_Server_chainLspRequestHandler___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_chainLspRequestHandler___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_complete_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_complete_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_partial_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_partial_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_initFn_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_initFn_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_statefulRequestHandlers;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getIOState_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getIOState_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getIOState_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getIOState_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__4;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__5;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__6;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__7;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__8;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__9;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__10;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__11;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__12;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__13;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__14;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__15;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__16;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__17;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__18;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__19;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__20;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__21;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerCompleteStatefulLspRequestHandler___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerCompleteStatefulLspRequestHandler___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerCompleteStatefulLspRequestHandler___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerCompleteStatefulLspRequestHandler___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerCompleteStatefulLspRequestHandler(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerCompleteStatefulLspRequestHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_isStatefulLspRequestMethod(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_isStatefulLspRequestMethod___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_lookupStatefulLspRequestHandler(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_lookupStatefulLspRequestHandler___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_partialLspRequestHandlerMethods();
LEAN_EXPORT lean_object* l_Lean_Server_partialLspRequestHandlerMethods___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__0;
static lean_once_cell_t l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__1;
static lean_once_cell_t l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__2;
static lean_once_cell_t l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_chainStatefulLspRequestHandler___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleOnDidChange___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleOnDidChange___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleOnDidChange(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleOnDidChange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_handleLspRequest___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_handleLspRequest___closed__0;
static lean_once_cell_t l_Lean_Server_handleLspRequest___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_handleLspRequest___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_handleLspRequest(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleLspRequest___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_routeLspRequest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_routeLspRequest___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeContainsHoverPos(lean_object* v_text_1_, lean_object* v_r_2_, lean_object* v_hoverPos_3_, uint8_t v_includeStop_4_){
_start:
{
if (v_includeStop_4_ == 0)
{
lean_object* v_stop_5_; lean_object* v_source_6_; lean_object* v___x_7_; uint8_t v_isRangeAtEOF_8_; uint8_t v___x_9_; 
v_stop_5_ = lean_ctor_get(v_r_2_, 1);
v_source_6_ = lean_ctor_get(v_text_1_, 0);
v___x_7_ = lean_string_utf8_byte_size(v_source_6_);
v_isRangeAtEOF_8_ = lean_nat_dec_eq(v_stop_5_, v___x_7_);
v___x_9_ = l_Lean_Syntax_Range_contains(v_r_2_, v_hoverPos_3_, v_isRangeAtEOF_8_);
return v___x_9_;
}
else
{
uint8_t v___x_10_; 
v___x_10_ = l_Lean_Syntax_Range_contains(v_r_2_, v_hoverPos_3_, v_includeStop_4_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeContainsHoverPos___boxed(lean_object* v_text_11_, lean_object* v_r_12_, lean_object* v_hoverPos_13_, lean_object* v_includeStop_14_){
_start:
{
uint8_t v_includeStop_boxed_15_; uint8_t v_res_16_; lean_object* v_r_17_; 
v_includeStop_boxed_15_ = lean_unbox(v_includeStop_14_);
v_res_16_ = l_Lean_FileMap_rangeContainsHoverPos(v_text_11_, v_r_12_, v_hoverPos_13_, v_includeStop_boxed_15_);
lean_dec(v_hoverPos_13_);
lean_dec_ref(v_r_12_);
lean_dec_ref(v_text_11_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeOverlapsRequestedRange(lean_object* v_text_18_, lean_object* v_documentRange_19_, lean_object* v_requestedRange_20_, uint8_t v_includeDocumentRangeStop_21_, uint8_t v_includeRequestedRangeStop_22_){
_start:
{
if (v_includeDocumentRangeStop_21_ == 0)
{
lean_object* v_stop_23_; lean_object* v_source_24_; lean_object* v___x_25_; uint8_t v_isDocumentRangeAtEOF_26_; uint8_t v___x_27_; 
v_stop_23_ = lean_ctor_get(v_documentRange_19_, 1);
v_source_24_ = lean_ctor_get(v_text_18_, 0);
v___x_25_ = lean_string_utf8_byte_size(v_source_24_);
v_isDocumentRangeAtEOF_26_ = lean_nat_dec_eq(v_stop_23_, v___x_25_);
v___x_27_ = l_Lean_Syntax_Range_overlaps(v_documentRange_19_, v_requestedRange_20_, v_isDocumentRangeAtEOF_26_, v_includeRequestedRangeStop_22_);
return v___x_27_;
}
else
{
uint8_t v___x_28_; 
v___x_28_ = l_Lean_Syntax_Range_overlaps(v_documentRange_19_, v_requestedRange_20_, v_includeDocumentRangeStop_21_, v_includeRequestedRangeStop_22_);
return v___x_28_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeOverlapsRequestedRange___boxed(lean_object* v_text_29_, lean_object* v_documentRange_30_, lean_object* v_requestedRange_31_, lean_object* v_includeDocumentRangeStop_32_, lean_object* v_includeRequestedRangeStop_33_){
_start:
{
uint8_t v_includeDocumentRangeStop_boxed_34_; uint8_t v_includeRequestedRangeStop_boxed_35_; uint8_t v_res_36_; lean_object* v_r_37_; 
v_includeDocumentRangeStop_boxed_34_ = lean_unbox(v_includeDocumentRangeStop_32_);
v_includeRequestedRangeStop_boxed_35_ = lean_unbox(v_includeRequestedRangeStop_33_);
v_res_36_ = l_Lean_FileMap_rangeOverlapsRequestedRange(v_text_29_, v_documentRange_30_, v_requestedRange_31_, v_includeDocumentRangeStop_boxed_34_, v_includeRequestedRangeStop_boxed_35_);
lean_dec_ref(v_requestedRange_31_);
lean_dec_ref(v_documentRange_30_);
lean_dec_ref(v_text_29_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeIncludesRequestedRange(lean_object* v_text_38_, lean_object* v_documentRange_39_, lean_object* v_requestedRange_40_, uint8_t v_includeDocumentRangeStop_41_, uint8_t v_includeRequestedRangeStop_42_){
_start:
{
if (v_includeDocumentRangeStop_41_ == 0)
{
lean_object* v_stop_43_; lean_object* v_source_44_; lean_object* v___x_45_; uint8_t v_isDocumentRangeAtEOF_46_; uint8_t v___x_47_; 
v_stop_43_ = lean_ctor_get(v_documentRange_39_, 1);
v_source_44_ = lean_ctor_get(v_text_38_, 0);
v___x_45_ = lean_string_utf8_byte_size(v_source_44_);
v_isDocumentRangeAtEOF_46_ = lean_nat_dec_eq(v_stop_43_, v___x_45_);
v___x_47_ = l_Lean_Syntax_Range_includes(v_documentRange_39_, v_requestedRange_40_, v_isDocumentRangeAtEOF_46_, v_includeRequestedRangeStop_42_);
return v___x_47_;
}
else
{
uint8_t v___x_48_; 
v___x_48_ = l_Lean_Syntax_Range_includes(v_documentRange_39_, v_requestedRange_40_, v_includeDocumentRangeStop_41_, v_includeRequestedRangeStop_42_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeIncludesRequestedRange___boxed(lean_object* v_text_49_, lean_object* v_documentRange_50_, lean_object* v_requestedRange_51_, lean_object* v_includeDocumentRangeStop_52_, lean_object* v_includeRequestedRangeStop_53_){
_start:
{
uint8_t v_includeDocumentRangeStop_boxed_54_; uint8_t v_includeRequestedRangeStop_boxed_55_; uint8_t v_res_56_; lean_object* v_r_57_; 
v_includeDocumentRangeStop_boxed_54_ = lean_unbox(v_includeDocumentRangeStop_52_);
v_includeRequestedRangeStop_boxed_55_ = lean_unbox(v_includeRequestedRangeStop_53_);
v_res_56_ = l_Lean_FileMap_rangeIncludesRequestedRange(v_text_49_, v_documentRange_50_, v_requestedRange_51_, v_includeDocumentRangeStop_boxed_54_, v_includeRequestedRangeStop_boxed_55_);
lean_dec_ref(v_requestedRange_51_);
lean_dec_ref(v_documentRange_50_);
lean_dec_ref(v_text_49_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx(lean_object* v_x_58_){
_start:
{
if (lean_obj_tag(v_x_58_) == 0)
{
lean_object* v___x_59_; 
v___x_59_ = lean_unsigned_to_nat(0u);
return v___x_59_;
}
else
{
lean_object* v___x_60_; 
v___x_60_ = lean_unsigned_to_nat(1u);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx___boxed(lean_object* v_x_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx(v_x_61_);
lean_dec(v_x_61_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(lean_object* v_t_63_, lean_object* v_k_64_){
_start:
{
if (lean_obj_tag(v_t_63_) == 0)
{
return v_k_64_;
}
else
{
uint8_t v_foldChildren_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v_foldChildren_65_ = lean_ctor_get_uint8(v_t_63_, 0);
v___x_66_ = lean_box(v_foldChildren_65_);
v___x_67_ = lean_apply_1(v_k_64_, v___x_66_);
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg___boxed(lean_object* v_t_68_, lean_object* v_k_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_68_, v_k_69_);
lean_dec(v_t_68_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim(lean_object* v_motive_71_, lean_object* v_ctorIdx_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_k_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_73_, v_k_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___boxed(lean_object* v_motive_77_, lean_object* v_ctorIdx_78_, lean_object* v_t_79_, lean_object* v_h_80_, lean_object* v_k_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim(v_motive_77_, v_ctorIdx_78_, v_t_79_, v_h_80_, v_k_81_);
lean_dec(v_t_79_);
lean_dec(v_ctorIdx_78_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg(lean_object* v_t_83_, lean_object* v_done_84_){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_83_, v_done_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg___boxed(lean_object* v_t_86_, lean_object* v_done_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg(v_t_86_, v_done_87_);
lean_dec(v_t_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim(lean_object* v_motive_89_, lean_object* v_t_90_, lean_object* v_h_91_, lean_object* v_done_92_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_90_, v_done_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___boxed(lean_object* v_motive_94_, lean_object* v_t_95_, lean_object* v_h_96_, lean_object* v_done_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim(v_motive_94_, v_t_95_, v_h_96_, v_done_97_);
lean_dec(v_t_95_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg(lean_object* v_t_99_, lean_object* v_proceed_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_99_, v_proceed_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg___boxed(lean_object* v_t_102_, lean_object* v_proceed_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg(v_t_102_, v_proceed_103_);
lean_dec(v_t_102_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim(lean_object* v_motive_105_, lean_object* v_t_106_, lean_object* v_h_107_, lean_object* v_proceed_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_106_, v_proceed_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___boxed(lean_object* v_motive_110_, lean_object* v_t_111_, lean_object* v_h_112_, lean_object* v_proceed_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim(v_motive_110_, v_t_111_, v_h_112_, v_proceed_113_);
lean_dec(v_t_111_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__0(lean_object* v_f_115_, lean_object* v_tail_116_, lean_object* v_x_117_){
_start:
{
lean_object* v_snd_118_; uint8_t v___x_119_; 
v_snd_118_ = lean_ctor_get(v_x_117_, 1);
v___x_119_ = lean_unbox(v_snd_118_);
if (v___x_119_ == 0)
{
lean_object* v_fst_120_; lean_object* v___x_121_; 
v_fst_120_ = lean_ctor_get(v_x_117_, 0);
lean_inc(v_fst_120_);
lean_dec_ref(v_x_117_);
v___x_121_ = l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(v_f_115_, v_fst_120_, v_tail_116_);
return v___x_121_;
}
else
{
lean_object* v___x_122_; 
lean_dec(v_tail_116_);
lean_dec_ref(v_f_115_);
v___x_122_ = lean_task_pure(v_x_117_);
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__2(lean_object* v_f_123_, lean_object* v_tail_124_, lean_object* v_head_125_, lean_object* v___f_126_, lean_object* v_x_127_){
_start:
{
lean_object* v_snd_128_; 
v_snd_128_ = lean_ctor_get(v_x_127_, 1);
if (lean_obj_tag(v_snd_128_) == 1)
{
uint8_t v_foldChildren_129_; 
v_foldChildren_129_ = lean_ctor_get_uint8(v_snd_128_, 0);
if (v_foldChildren_129_ == 0)
{
lean_object* v_fst_130_; lean_object* v___x_131_; 
lean_dec_ref(v___f_126_);
lean_dec_ref(v_head_125_);
v_fst_130_ = lean_ctor_get(v_x_127_, 0);
lean_inc(v_fst_130_);
lean_dec_ref(v_x_127_);
v___x_131_ = l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(v_f_123_, v_fst_130_, v_tail_124_);
return v___x_131_;
}
else
{
lean_object* v_fst_132_; lean_object* v_task_133_; lean_object* v___f_134_; lean_object* v_subtreeTask_135_; lean_object* v___x_136_; 
lean_dec(v_tail_124_);
v_fst_132_ = lean_ctor_get(v_x_127_, 0);
lean_inc(v_fst_132_);
lean_dec_ref(v_x_127_);
v_task_133_ = lean_ctor_get(v_head_125_, 3);
lean_inc_ref(v_task_133_);
lean_dec_ref(v_head_125_);
v___f_134_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__1), 3, 2);
lean_closure_set(v___f_134_, 0, v_f_123_);
lean_closure_set(v___f_134_, 1, v_fst_132_);
v_subtreeTask_135_ = l_Lean_Server_ServerTask_bindCheap___redArg(v_task_133_, v___f_134_);
v___x_136_ = l_Lean_Server_ServerTask_bindCheap___redArg(v_subtreeTask_135_, v___f_126_);
return v___x_136_;
}
}
else
{
lean_object* v_fst_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_147_; 
lean_dec_ref(v___f_126_);
lean_dec_ref(v_head_125_);
lean_dec(v_tail_124_);
lean_dec_ref(v_f_123_);
v_fst_137_ = lean_ctor_get(v_x_127_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v_x_127_);
if (v_isSharedCheck_147_ == 0)
{
lean_object* v_unused_148_; 
v_unused_148_ = lean_ctor_get(v_x_127_, 1);
lean_dec(v_unused_148_);
v___x_139_ = v_x_127_;
v_isShared_140_ = v_isSharedCheck_147_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_fst_137_);
lean_dec(v_x_127_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_147_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
uint8_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_141_ = 1;
v___x_142_ = lean_box(v___x_141_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 1, v___x_142_);
v___x_144_ = v___x_139_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_fst_137_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v___x_142_);
v___x_144_ = v_reuseFailAlloc_146_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v___x_145_; 
v___x_145_ = lean_task_pure(v___x_144_);
return v___x_145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(lean_object* v_f_149_, lean_object* v_acc_150_, lean_object* v_a_151_){
_start:
{
if (lean_obj_tag(v_a_151_) == 0)
{
uint8_t v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
lean_dec_ref(v_f_149_);
v___x_152_ = 0;
v___x_153_ = lean_box(v___x_152_);
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v_acc_150_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
v___x_155_ = lean_task_pure(v___x_154_);
return v___x_155_;
}
else
{
lean_object* v_head_156_; lean_object* v_tail_157_; lean_object* v___f_158_; lean_object* v___f_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v_head_156_ = lean_ctor_get(v_a_151_, 0);
lean_inc_n(v_head_156_, 2);
v_tail_157_ = lean_ctor_get(v_a_151_, 1);
lean_inc_n(v_tail_157_, 2);
lean_dec_ref(v_a_151_);
lean_inc_ref_n(v_f_149_, 2);
v___f_158_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__0), 3, 2);
lean_closure_set(v___f_158_, 0, v_f_149_);
lean_closure_set(v___f_158_, 1, v_tail_157_);
v___f_159_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__2), 5, 4);
lean_closure_set(v___f_159_, 0, v_f_149_);
lean_closure_set(v___f_159_, 1, v_tail_157_);
lean_closure_set(v___f_159_, 2, v_head_156_);
lean_closure_set(v___f_159_, 3, v___f_158_);
v___x_160_ = lean_apply_2(v_f_149_, v_head_156_, v_acc_150_);
v___x_161_ = l_Lean_Server_ServerTask_bindCheap___redArg(v___x_160_, v___f_159_);
return v___x_161_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(lean_object* v_f_162_, lean_object* v_acc_163_, lean_object* v_tree_164_){
_start:
{
lean_object* v_children_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v_children_165_ = lean_ctor_get(v_tree_164_, 1);
lean_inc_ref(v_children_165_);
lean_dec_ref(v_tree_164_);
v___x_166_ = lean_array_to_list(v_children_165_);
v___x_167_ = l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(v_f_162_, v_acc_163_, v___x_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__1(lean_object* v_f_168_, lean_object* v_fst_169_, lean_object* v_tree_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(v_f_168_, v_fst_169_, v_tree_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree(lean_object* v_00_u03b1_172_, lean_object* v_f_173_, lean_object* v_acc_174_, lean_object* v_tree_175_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(v_f_173_, v_acc_174_, v_tree_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren(lean_object* v_00_u03b1_177_, lean_object* v_f_178_, lean_object* v_acc_179_, lean_object* v_a_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(v_f_178_, v_acc_179_, v_a_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0(lean_object* v_x_182_){
_start:
{
lean_object* v_fst_183_; 
v_fst_183_ = lean_ctor_get(v_x_182_, 0);
lean_inc(v_fst_183_);
return v_fst_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0___boxed(lean_object* v_x_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0(v_x_184_);
lean_dec_ref(v_x_184_);
return v_res_185_;
}
}
static lean_object* _init_l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0(void){
_start:
{
lean_object* v___f_186_; 
v___f_186_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0___boxed), 1, 0);
return v___f_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg(lean_object* v_tree_187_, lean_object* v_init_188_, lean_object* v_f_189_){
_start:
{
lean_object* v___f_190_; lean_object* v_t_191_; lean_object* v___x_192_; 
v___f_190_ = lean_obj_once(&l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0, &l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0_once, _init_l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0);
v_t_191_ = l___private_Lean_Server_Requests_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(v_f_189_, v_init_188_, v_tree_187_);
v___x_192_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_190_, v_t_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps(lean_object* v_00_u03b1_193_, lean_object* v_tree_194_, lean_object* v_init_195_, lean_object* v_f_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg(v_tree_194_, v_init_195_, v_f_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0(uint8_t v___x_198_, lean_object* v___x_199_, lean_object* v_tree_200_){
_start:
{
lean_object* v_element_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_214_; 
v_element_201_ = lean_ctor_get(v_tree_200_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v_tree_200_);
if (v_isSharedCheck_214_ == 0)
{
lean_object* v_unused_215_; 
v_unused_215_ = lean_ctor_get(v_tree_200_, 1);
lean_dec(v_unused_215_);
v___x_203_ = v_tree_200_;
v_isShared_204_ = v_isSharedCheck_214_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_element_201_);
lean_dec(v_tree_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_214_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v_infoTree_x3f_205_; 
v_infoTree_x3f_205_ = lean_ctor_get(v_element_201_, 2);
lean_inc(v_infoTree_x3f_205_);
lean_dec_ref(v_element_201_);
if (lean_obj_tag(v_infoTree_x3f_205_) == 1)
{
lean_object* v___x_206_; lean_object* v___x_208_; 
lean_dec(v___x_199_);
v___x_206_ = lean_box(0);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 1, v___x_206_);
lean_ctor_set(v___x_203_, 0, v_infoTree_x3f_205_);
v___x_208_ = v___x_203_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_infoTree_x3f_205_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v___x_206_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
else
{
lean_object* v___x_210_; lean_object* v___x_212_; 
lean_dec(v_infoTree_x3f_205_);
v___x_210_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_210_, 0, v___x_198_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 1, v___x_210_);
lean_ctor_set(v___x_203_, 0, v___x_199_);
v___x_212_ = v___x_203_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_199_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v___x_210_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0___boxed(lean_object* v___x_216_, lean_object* v___x_217_, lean_object* v_tree_218_){
_start:
{
uint8_t v___x_469__boxed_219_; lean_object* v_res_220_; 
v___x_469__boxed_219_ = lean_unbox(v___x_216_);
v_res_220_ = l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0(v___x_469__boxed_219_, v___x_217_, v_tree_218_);
return v_res_220_;
}
}
static lean_object* _init_l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0(void){
_start:
{
uint8_t v___x_221_; lean_object* v___x_222_; 
v___x_221_ = 1;
v___x_222_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_222_, 0, v___x_221_);
return v___x_222_;
}
}
static lean_object* _init_l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1(void){
_start:
{
uint8_t v___x_223_; lean_object* v___x_224_; 
v___x_223_ = 0;
v___x_224_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_224_, 0, v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1(lean_object* v_text_225_, lean_object* v_hoverPos_226_, uint8_t v_includeStop_227_, lean_object* v___x_228_, lean_object* v_snap_229_, lean_object* v_x_230_){
_start:
{
lean_object* v_stx_x3f_231_; 
v_stx_x3f_231_ = lean_ctor_get(v_snap_229_, 0);
lean_inc(v_stx_x3f_231_);
if (lean_obj_tag(v_stx_x3f_231_) == 1)
{
lean_object* v_task_232_; lean_object* v_val_233_; uint8_t v___x_234_; lean_object* v___x_235_; 
v_task_232_ = lean_ctor_get(v_snap_229_, 3);
lean_inc_ref(v_task_232_);
lean_dec_ref(v_snap_229_);
v_val_233_ = lean_ctor_get(v_stx_x3f_231_, 0);
lean_inc(v_val_233_);
lean_dec_ref(v_stx_x3f_231_);
v___x_234_ = 1;
v___x_235_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_val_233_, v___x_234_);
lean_dec(v_val_233_);
if (lean_obj_tag(v___x_235_) == 1)
{
lean_object* v_val_236_; uint8_t v___x_237_; 
v_val_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_val_236_);
lean_dec_ref(v___x_235_);
v___x_237_ = l_Lean_FileMap_rangeContainsHoverPos(v_text_225_, v_val_236_, v_hoverPos_226_, v_includeStop_227_);
lean_dec(v_val_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
lean_dec_ref(v_task_232_);
v___x_238_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_238_, 0, v___x_237_);
v___x_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_228_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = lean_task_pure(v___x_239_);
return v___x_240_;
}
else
{
lean_object* v___x_241_; lean_object* v___f_242_; lean_object* v___x_243_; 
v___x_241_ = lean_box(v___x_237_);
v___f_242_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0___boxed), 3, 2);
lean_closure_set(v___f_242_, 0, v___x_241_);
lean_closure_set(v___f_242_, 1, v___x_228_);
v___x_243_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_242_, v_task_232_);
return v___x_243_;
}
}
else
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
lean_dec(v___x_235_);
lean_dec_ref(v_task_232_);
v___x_244_ = lean_obj_once(&l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0, &l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0_once, _init_l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0);
v___x_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_228_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = lean_task_pure(v___x_245_);
return v___x_246_;
}
}
else
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
lean_dec(v_stx_x3f_231_);
lean_dec_ref(v_snap_229_);
v___x_247_ = lean_obj_once(&l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1, &l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1_once, _init_l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_228_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
v___x_249_ = lean_task_pure(v___x_248_);
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___boxed(lean_object* v_text_250_, lean_object* v_hoverPos_251_, lean_object* v_includeStop_252_, lean_object* v___x_253_, lean_object* v_snap_254_, lean_object* v_x_255_){
_start:
{
uint8_t v_includeStop_boxed_256_; lean_object* v_res_257_; 
v_includeStop_boxed_256_ = lean_unbox(v_includeStop_252_);
v_res_257_ = l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1(v_text_250_, v_hoverPos_251_, v_includeStop_boxed_256_, v___x_253_, v_snap_254_, v_x_255_);
lean_dec(v_x_255_);
lean_dec(v_hoverPos_251_);
lean_dec_ref(v_text_250_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos(lean_object* v_text_258_, lean_object* v_tree_259_, lean_object* v_hoverPos_260_, uint8_t v_includeStop_261_){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___f_264_; lean_object* v___x_265_; 
v___x_262_ = lean_box(0);
v___x_263_ = lean_box(v_includeStop_261_);
v___f_264_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___boxed), 6, 4);
lean_closure_set(v___f_264_, 0, v_text_258_);
lean_closure_set(v___f_264_, 1, v_hoverPos_260_);
lean_closure_set(v___f_264_, 2, v___x_263_);
lean_closure_set(v___f_264_, 3, v___x_262_);
v___x_265_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg(v_tree_259_, v___x_262_, v___f_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___boxed(lean_object* v_text_266_, lean_object* v_tree_267_, lean_object* v_hoverPos_268_, lean_object* v_includeStop_269_){
_start:
{
uint8_t v_includeStop_boxed_270_; lean_object* v_res_271_; 
v_includeStop_boxed_270_ = lean_unbox(v_includeStop_269_);
v_res_271_ = l_Lean_Language_SnapshotTree_findInfoTreeAtPos(v_text_266_, v_tree_267_, v_hoverPos_268_, v_includeStop_boxed_270_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0(lean_object* v_requestedRange_272_, uint8_t v___x_273_, lean_object* v_f_274_, lean_object* v_ctx_275_, lean_object* v_i_276_, lean_object* v_acc_277_){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_Elab_Info_range_x3f(v_i_276_);
if (lean_obj_tag(v___x_278_) == 1)
{
lean_object* v_val_279_; uint8_t v___x_280_; 
v_val_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_val_279_);
lean_dec_ref(v___x_278_);
v___x_280_ = l_Lean_Syntax_Range_overlaps(v_val_279_, v_requestedRange_272_, v___x_273_, v___x_273_);
lean_dec(v_val_279_);
if (v___x_280_ == 0)
{
lean_dec_ref(v_i_276_);
lean_dec_ref(v_ctx_275_);
lean_dec(v_f_274_);
return v_acc_277_;
}
else
{
lean_object* v___x_281_; 
v___x_281_ = lean_apply_3(v_f_274_, v_ctx_275_, v_i_276_, v_acc_277_);
return v___x_281_;
}
}
else
{
lean_dec(v___x_278_);
lean_dec_ref(v_i_276_);
lean_dec_ref(v_ctx_275_);
lean_dec(v_f_274_);
return v_acc_277_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0___boxed(lean_object* v_requestedRange_282_, lean_object* v___x_283_, lean_object* v_f_284_, lean_object* v_ctx_285_, lean_object* v_i_286_, lean_object* v_acc_287_){
_start:
{
uint8_t v___x_631__boxed_288_; lean_object* v_res_289_; 
v___x_631__boxed_288_ = lean_unbox(v___x_283_);
v_res_289_ = l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0(v_requestedRange_282_, v___x_631__boxed_288_, v_f_284_, v_ctx_285_, v_i_286_, v_acc_287_);
lean_dec_ref(v_requestedRange_282_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1(lean_object* v___f_290_, lean_object* v_acc_291_, uint8_t v___x_292_, lean_object* v_tree_293_){
_start:
{
lean_object* v_element_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_309_; 
v_element_294_ = lean_ctor_get(v_tree_293_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v_tree_293_);
if (v_isSharedCheck_309_ == 0)
{
lean_object* v_unused_310_; 
v_unused_310_ = lean_ctor_get(v_tree_293_, 1);
lean_dec(v_unused_310_);
v___x_296_ = v_tree_293_;
v_isShared_297_ = v_isSharedCheck_309_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_element_294_);
lean_dec(v_tree_293_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_309_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v_infoTree_x3f_298_; 
v_infoTree_x3f_298_ = lean_ctor_get(v_element_294_, 2);
lean_inc(v_infoTree_x3f_298_);
lean_dec_ref(v_element_294_);
if (lean_obj_tag(v_infoTree_x3f_298_) == 1)
{
lean_object* v_val_299_; lean_object* v_acc_300_; lean_object* v___x_301_; lean_object* v___x_303_; 
v_val_299_ = lean_ctor_get(v_infoTree_x3f_298_, 0);
lean_inc(v_val_299_);
lean_dec_ref(v_infoTree_x3f_298_);
v_acc_300_ = l_Lean_Elab_InfoTree_foldInfo___redArg(v___f_290_, v_acc_291_, v_val_299_);
v___x_301_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_301_, 0, v___x_292_);
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 1, v___x_301_);
lean_ctor_set(v___x_296_, 0, v_acc_300_);
v___x_303_ = v___x_296_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_acc_300_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
else
{
lean_object* v___x_305_; lean_object* v___x_307_; 
lean_dec(v_infoTree_x3f_298_);
lean_dec(v___f_290_);
v___x_305_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_305_, 0, v___x_292_);
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 1, v___x_305_);
lean_ctor_set(v___x_296_, 0, v_acc_291_);
v___x_307_ = v___x_296_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_acc_291_);
lean_ctor_set(v_reuseFailAlloc_308_, 1, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1___boxed(lean_object* v___f_311_, lean_object* v_acc_312_, lean_object* v___x_313_, lean_object* v_tree_314_){
_start:
{
uint8_t v___x_643__boxed_315_; lean_object* v_res_316_; 
v___x_643__boxed_315_ = lean_unbox(v___x_313_);
v_res_316_ = l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1(v___f_311_, v_acc_312_, v___x_643__boxed_315_, v_tree_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__2(lean_object* v_requestedRange_317_, lean_object* v_f_318_, lean_object* v_snap_319_, lean_object* v_acc_320_){
_start:
{
lean_object* v_stx_x3f_321_; 
v_stx_x3f_321_ = lean_ctor_get(v_snap_319_, 0);
lean_inc(v_stx_x3f_321_);
if (lean_obj_tag(v_stx_x3f_321_) == 1)
{
lean_object* v_task_322_; lean_object* v_val_323_; uint8_t v___x_324_; lean_object* v___x_325_; 
v_task_322_ = lean_ctor_get(v_snap_319_, 3);
lean_inc_ref(v_task_322_);
lean_dec_ref(v_snap_319_);
v_val_323_ = lean_ctor_get(v_stx_x3f_321_, 0);
lean_inc(v_val_323_);
lean_dec_ref(v_stx_x3f_321_);
v___x_324_ = 1;
v___x_325_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_val_323_, v___x_324_);
lean_dec(v_val_323_);
if (lean_obj_tag(v___x_325_) == 1)
{
lean_object* v_val_326_; uint8_t v___x_327_; 
v_val_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc(v_val_326_);
lean_dec_ref(v___x_325_);
v___x_327_ = l_Lean_Syntax_Range_overlaps(v_val_326_, v_requestedRange_317_, v___x_324_, v___x_324_);
lean_dec(v_val_326_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
lean_dec_ref(v_task_322_);
lean_dec(v_f_318_);
lean_dec_ref(v_requestedRange_317_);
v___x_328_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_328_, 0, v___x_327_);
v___x_329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_329_, 0, v_acc_320_);
lean_ctor_set(v___x_329_, 1, v___x_328_);
v___x_330_ = lean_task_pure(v___x_329_);
return v___x_330_;
}
else
{
lean_object* v___x_331_; lean_object* v___f_332_; lean_object* v___x_333_; lean_object* v___f_334_; lean_object* v___x_335_; 
v___x_331_ = lean_box(v___x_324_);
v___f_332_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_332_, 0, v_requestedRange_317_);
lean_closure_set(v___f_332_, 1, v___x_331_);
lean_closure_set(v___f_332_, 2, v_f_318_);
v___x_333_ = lean_box(v___x_324_);
v___f_334_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_334_, 0, v___f_332_);
lean_closure_set(v___f_334_, 1, v_acc_320_);
lean_closure_set(v___f_334_, 2, v___x_333_);
v___x_335_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_334_, v_task_322_);
return v___x_335_;
}
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
lean_dec(v___x_325_);
lean_dec_ref(v_task_322_);
lean_dec(v_f_318_);
lean_dec_ref(v_requestedRange_317_);
v___x_336_ = lean_obj_once(&l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0, &l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0_once, _init_l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0);
v___x_337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_337_, 0, v_acc_320_);
lean_ctor_set(v___x_337_, 1, v___x_336_);
v___x_338_ = lean_task_pure(v___x_337_);
return v___x_338_;
}
}
else
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
lean_dec(v_stx_x3f_321_);
lean_dec_ref(v_snap_319_);
lean_dec(v_f_318_);
lean_dec_ref(v_requestedRange_317_);
v___x_339_ = lean_obj_once(&l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1, &l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1_once, _init_l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1);
v___x_340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_340_, 0, v_acc_320_);
lean_ctor_set(v___x_340_, 1, v___x_339_);
v___x_341_ = lean_task_pure(v___x_340_);
return v___x_341_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg(lean_object* v_tree_342_, lean_object* v_requestedRange_343_, lean_object* v_init_344_, lean_object* v_f_345_){
_start:
{
lean_object* v___f_346_; lean_object* v___x_347_; 
v___f_346_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__2), 4, 2);
lean_closure_set(v___f_346_, 0, v_requestedRange_343_);
lean_closure_set(v___f_346_, 1, v_f_345_);
v___x_347_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg(v_tree_342_, v_init_344_, v___f_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange(lean_object* v_00_u03b1_348_, lean_object* v_tree_349_, lean_object* v_requestedRange_350_, lean_object* v_init_351_, lean_object* v_f_352_){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = l_Lean_Language_SnapshotTree_foldInfosInRange___redArg(v_tree_349_, v_requestedRange_350_, v_init_351_, v_f_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0(lean_object* v_log_354_, uint8_t v___x_355_, lean_object* v_tree_356_){
_start:
{
lean_object* v_element_357_; lean_object* v_diagnostics_358_; lean_object* v_msgLog_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_368_; 
v_element_357_ = lean_ctor_get(v_tree_356_, 0);
lean_inc_ref(v_element_357_);
lean_dec_ref(v_tree_356_);
v_diagnostics_358_ = lean_ctor_get(v_element_357_, 1);
lean_inc_ref(v_diagnostics_358_);
lean_dec_ref(v_element_357_);
v_msgLog_359_ = lean_ctor_get(v_diagnostics_358_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v_diagnostics_358_);
if (v_isSharedCheck_368_ == 0)
{
lean_object* v_unused_369_; 
v_unused_369_ = lean_ctor_get(v_diagnostics_358_, 1);
lean_dec(v_unused_369_);
v___x_361_ = v_diagnostics_358_;
v_isShared_362_ = v_isSharedCheck_368_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_msgLog_359_);
lean_dec(v_diagnostics_358_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_368_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_363_ = l_Lean_MessageLog_append(v_log_354_, v_msgLog_359_);
v___x_364_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_364_, 0, v___x_355_);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 1, v___x_364_);
lean_ctor_set(v___x_361_, 0, v___x_363_);
v___x_366_ = v___x_361_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_363_);
lean_ctor_set(v_reuseFailAlloc_367_, 1, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0___boxed(lean_object* v_log_370_, lean_object* v___x_371_, lean_object* v_tree_372_){
_start:
{
uint8_t v___x_422__boxed_373_; lean_object* v_res_374_; 
v___x_422__boxed_373_ = lean_unbox(v___x_371_);
v_res_374_ = l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0(v_log_370_, v___x_422__boxed_373_, v_tree_372_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1(lean_object* v_requestedRange_375_, lean_object* v_snap_376_, lean_object* v_log_377_){
_start:
{
lean_object* v_stx_x3f_378_; 
v_stx_x3f_378_ = lean_ctor_get(v_snap_376_, 0);
lean_inc(v_stx_x3f_378_);
if (lean_obj_tag(v_stx_x3f_378_) == 1)
{
lean_object* v_task_379_; lean_object* v_val_380_; uint8_t v___x_381_; lean_object* v___x_382_; 
v_task_379_ = lean_ctor_get(v_snap_376_, 3);
lean_inc_ref(v_task_379_);
lean_dec_ref(v_snap_376_);
v_val_380_ = lean_ctor_get(v_stx_x3f_378_, 0);
lean_inc(v_val_380_);
lean_dec_ref(v_stx_x3f_378_);
v___x_381_ = 1;
v___x_382_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_val_380_, v___x_381_);
lean_dec(v_val_380_);
if (lean_obj_tag(v___x_382_) == 1)
{
lean_object* v_val_383_; uint8_t v___x_384_; 
v_val_383_ = lean_ctor_get(v___x_382_, 0);
lean_inc(v_val_383_);
lean_dec_ref(v___x_382_);
v___x_384_ = l_Lean_Syntax_Range_overlaps(v_val_383_, v_requestedRange_375_, v___x_381_, v___x_381_);
lean_dec(v_val_383_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
lean_dec_ref(v_task_379_);
v___x_385_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_385_, 0, v___x_384_);
v___x_386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_386_, 0, v_log_377_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_task_pure(v___x_386_);
return v___x_387_;
}
else
{
lean_object* v___x_388_; lean_object* v___f_389_; lean_object* v___x_390_; 
v___x_388_ = lean_box(v___x_381_);
v___f_389_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0___boxed), 3, 2);
lean_closure_set(v___f_389_, 0, v_log_377_);
lean_closure_set(v___f_389_, 1, v___x_388_);
v___x_390_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_389_, v_task_379_);
return v___x_390_;
}
}
else
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
lean_dec(v___x_382_);
lean_dec_ref(v_task_379_);
v___x_391_ = lean_obj_once(&l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0, &l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0_once, _init_l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0);
v___x_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_392_, 0, v_log_377_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = lean_task_pure(v___x_392_);
return v___x_393_;
}
}
else
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
lean_dec(v_stx_x3f_378_);
lean_dec_ref(v_snap_376_);
v___x_394_ = lean_obj_once(&l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0, &l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0_once, _init_l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0);
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v_log_377_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = lean_task_pure(v___x_395_);
return v___x_396_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1___boxed(lean_object* v_requestedRange_397_, lean_object* v_snap_398_, lean_object* v_log_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1(v_requestedRange_397_, v_snap_398_, v_log_399_);
lean_dec_ref(v_requestedRange_397_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange(lean_object* v_tree_401_, lean_object* v_requestedRange_402_){
_start:
{
lean_object* v___f_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___f_403_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1___boxed), 3, 1);
lean_closure_set(v___f_403_, 0, v_requestedRange_402_);
v___x_404_ = l_Lean_MessageLog_empty;
v___x_405_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg(v_tree_401_, v___x_404_, v___f_403_);
return v___x_405_;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedRequestError_default___closed__0(void){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = lean_mk_string_unchecked("", 0, 0);
return v___x_406_;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedRequestError_default___closed__1(void){
_start:
{
lean_object* v___x_407_; uint8_t v___x_408_; lean_object* v___x_409_; 
v___x_407_ = lean_obj_once(&l_Lean_Server_instInhabitedRequestError_default___closed__0, &l_Lean_Server_instInhabitedRequestError_default___closed__0_once, _init_l_Lean_Server_instInhabitedRequestError_default___closed__0);
v___x_408_ = 0;
v___x_409_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_409_, 0, v___x_407_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*1, v___x_408_);
return v___x_409_;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedRequestError_default(void){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = lean_obj_once(&l_Lean_Server_instInhabitedRequestError_default___closed__1, &l_Lean_Server_instInhabitedRequestError_default___closed__1_once, _init_l_Lean_Server_instInhabitedRequestError_default___closed__1);
return v___x_410_;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedRequestError(void){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Lean_Server_instInhabitedRequestError_default;
return v___x_411_;
}
}
static lean_object* _init_l_Lean_Server_RequestError_fileChanged___closed__0(void){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = lean_mk_string_unchecked("File changed.", 13, 13);
return v___x_412_;
}
}
static lean_object* _init_l_Lean_Server_RequestError_fileChanged___closed__1(void){
_start:
{
lean_object* v___x_413_; uint8_t v___x_414_; lean_object* v___x_415_; 
v___x_413_ = lean_obj_once(&l_Lean_Server_RequestError_fileChanged___closed__0, &l_Lean_Server_RequestError_fileChanged___closed__0_once, _init_l_Lean_Server_RequestError_fileChanged___closed__0);
v___x_414_ = 7;
v___x_415_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_415_, 0, v___x_413_);
lean_ctor_set_uint8(v___x_415_, sizeof(void*)*1, v___x_414_);
return v___x_415_;
}
}
static lean_object* _init_l_Lean_Server_RequestError_fileChanged(void){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = lean_obj_once(&l_Lean_Server_RequestError_fileChanged___closed__1, &l_Lean_Server_RequestError_fileChanged___closed__1_once, _init_l_Lean_Server_RequestError_fileChanged___closed__1);
return v___x_416_;
}
}
static lean_object* _init_l_Lean_Server_RequestError_methodNotFound___closed__0(void){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = lean_mk_string_unchecked("No request handler found for '", 30, 30);
return v___x_417_;
}
}
static lean_object* _init_l_Lean_Server_RequestError_methodNotFound___closed__1(void){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_methodNotFound(lean_object* v_method_419_){
_start:
{
uint8_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_420_ = 2;
v___x_421_ = lean_obj_once(&l_Lean_Server_RequestError_methodNotFound___closed__0, &l_Lean_Server_RequestError_methodNotFound___closed__0_once, _init_l_Lean_Server_RequestError_methodNotFound___closed__0);
v___x_422_ = lean_string_append(v___x_421_, v_method_419_);
v___x_423_ = lean_obj_once(&l_Lean_Server_RequestError_methodNotFound___closed__1, &l_Lean_Server_RequestError_methodNotFound___closed__1_once, _init_l_Lean_Server_RequestError_methodNotFound___closed__1);
v___x_424_ = lean_string_append(v___x_422_, v___x_423_);
v___x_425_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_425_, 0, v___x_424_);
lean_ctor_set_uint8(v___x_425_, sizeof(void*)*1, v___x_420_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_methodNotFound___boxed(lean_object* v_method_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_Server_RequestError_methodNotFound(v_method_426_);
lean_dec_ref(v_method_426_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_invalidParams(lean_object* v_message_428_){
_start:
{
uint8_t v___x_429_; lean_object* v___x_430_; 
v___x_429_ = 3;
v___x_430_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_430_, 0, v_message_428_);
lean_ctor_set_uint8(v___x_430_, sizeof(void*)*1, v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_internalError(lean_object* v_message_431_){
_start:
{
uint8_t v___x_432_; lean_object* v___x_433_; 
v___x_432_ = 4;
v___x_433_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_433_, 0, v_message_431_);
lean_ctor_set_uint8(v___x_433_, sizeof(void*)*1, v___x_432_);
return v___x_433_;
}
}
static lean_object* _init_l_Lean_Server_RequestError_requestCancelled___closed__0(void){
_start:
{
lean_object* v___x_434_; uint8_t v___x_435_; lean_object* v___x_436_; 
v___x_434_ = lean_obj_once(&l_Lean_Server_instInhabitedRequestError_default___closed__0, &l_Lean_Server_instInhabitedRequestError_default___closed__0_once, _init_l_Lean_Server_instInhabitedRequestError_default___closed__0);
v___x_435_ = 8;
v___x_436_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_436_, 0, v___x_434_);
lean_ctor_set_uint8(v___x_436_, sizeof(void*)*1, v___x_435_);
return v___x_436_;
}
}
static lean_object* _init_l_Lean_Server_RequestError_requestCancelled(void){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = lean_obj_once(&l_Lean_Server_RequestError_requestCancelled___closed__0, &l_Lean_Server_RequestError_requestCancelled___closed__0_once, _init_l_Lean_Server_RequestError_requestCancelled___closed__0);
return v___x_437_;
}
}
static lean_object* _init_l_Lean_Server_RequestError_rpcNeedsReconnect___closed__0(void){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = lean_mk_string_unchecked("Outdated RPC session", 20, 20);
return v___x_438_;
}
}
static lean_object* _init_l_Lean_Server_RequestError_rpcNeedsReconnect___closed__1(void){
_start:
{
lean_object* v___x_439_; uint8_t v___x_440_; lean_object* v___x_441_; 
v___x_439_ = lean_obj_once(&l_Lean_Server_RequestError_rpcNeedsReconnect___closed__0, &l_Lean_Server_RequestError_rpcNeedsReconnect___closed__0_once, _init_l_Lean_Server_RequestError_rpcNeedsReconnect___closed__0);
v___x_440_ = 9;
v___x_441_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_441_, 0, v___x_439_);
lean_ctor_set_uint8(v___x_441_, sizeof(void*)*1, v___x_440_);
return v___x_441_;
}
}
static lean_object* _init_l_Lean_Server_RequestError_rpcNeedsReconnect(void){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = lean_obj_once(&l_Lean_Server_RequestError_rpcNeedsReconnect___closed__1, &l_Lean_Server_RequestError_rpcNeedsReconnect___closed__1_once, _init_l_Lean_Server_RequestError_rpcNeedsReconnect___closed__1);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_ofException(lean_object* v_e_443_){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_445_ = l_Lean_Exception_toMessageData(v_e_443_);
v___x_446_ = l_Lean_MessageData_toString(v___x_445_);
v___x_447_ = l_Lean_Server_RequestError_internalError(v___x_446_);
v___x_448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_ofException___boxed(lean_object* v_e_449_, lean_object* v_a_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lean_Server_RequestError_ofException(v_e_449_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_ofIoError(lean_object* v_e_452_){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = lean_io_error_to_string(v_e_452_);
v___x_454_ = l_Lean_Server_RequestError_internalError(v___x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_toLspResponseError(lean_object* v_id_455_, lean_object* v_e_456_){
_start:
{
uint8_t v_code_457_; lean_object* v_message_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v_code_457_ = lean_ctor_get_uint8(v_e_456_, sizeof(void*)*1);
v_message_458_ = lean_ctor_get(v_e_456_, 0);
v___x_459_ = lean_box(0);
lean_inc_ref(v_message_458_);
v___x_460_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_460_, 0, v_id_455_);
lean_ctor_set(v___x_460_, 1, v_message_458_);
lean_ctor_set(v___x_460_, 2, v___x_459_);
lean_ctor_set_uint8(v___x_460_, sizeof(void*)*3, v_code_457_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestError_toLspResponseError___boxed(lean_object* v_id_461_, lean_object* v_e_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_Server_RequestError_toLspResponseError(v_id_461_, v_e_462_);
lean_dec_ref(v_e_462_);
return v_res_463_;
}
}
static lean_object* _init_l_Lean_Server_parseRequestParams___redArg___closed__0(void){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = lean_mk_string_unchecked("Cannot parse request params: ", 29, 29);
return v___x_464_;
}
}
static lean_object* _init_l_Lean_Server_parseRequestParams___redArg___closed__1(void){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = lean_mk_string_unchecked("\n", 1, 1);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___redArg(lean_object* v_inst_466_, lean_object* v_params_467_){
_start:
{
lean_object* v___x_468_; 
lean_inc(v_params_467_);
v___x_468_ = lean_apply_1(v_inst_466_, v_params_467_);
if (lean_obj_tag(v___x_468_) == 0)
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_484_; 
v_a_469_ = lean_ctor_get(v___x_468_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_484_ == 0)
{
v___x_471_ = v___x_468_;
v_isShared_472_ = v_isSharedCheck_484_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_468_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_484_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
uint8_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_482_; 
v___x_473_ = 3;
v___x_474_ = lean_obj_once(&l_Lean_Server_parseRequestParams___redArg___closed__0, &l_Lean_Server_parseRequestParams___redArg___closed__0_once, _init_l_Lean_Server_parseRequestParams___redArg___closed__0);
v___x_475_ = l_Lean_Json_compress(v_params_467_);
v___x_476_ = lean_string_append(v___x_474_, v___x_475_);
lean_dec_ref(v___x_475_);
v___x_477_ = lean_obj_once(&l_Lean_Server_parseRequestParams___redArg___closed__1, &l_Lean_Server_parseRequestParams___redArg___closed__1_once, _init_l_Lean_Server_parseRequestParams___redArg___closed__1);
v___x_478_ = lean_string_append(v___x_476_, v___x_477_);
v___x_479_ = lean_string_append(v___x_478_, v_a_469_);
lean_dec(v_a_469_);
v___x_480_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set_uint8(v___x_480_, sizeof(void*)*1, v___x_473_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v___x_480_);
v___x_482_ = v___x_471_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_480_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_dec(v_params_467_);
v_a_485_ = lean_ctor_get(v___x_468_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_468_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_468_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_485_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams(lean_object* v_paramType_493_, lean_object* v_inst_494_, lean_object* v_params_495_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = l_Lean_Server_parseRequestParams___redArg(v_inst_494_, v_params_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorIdx___redArg(lean_object* v_x_497_){
_start:
{
if (lean_obj_tag(v_x_497_) == 0)
{
lean_object* v___x_498_; 
v___x_498_ = lean_unsigned_to_nat(0u);
return v___x_498_;
}
else
{
lean_object* v___x_499_; 
v___x_499_ = lean_unsigned_to_nat(1u);
return v___x_499_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorIdx___redArg___boxed(lean_object* v_x_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lean_Server_ServerRequestResponse_ctorIdx___redArg(v_x_500_);
lean_dec_ref(v_x_500_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorIdx(lean_object* v_00_u03b1_502_, lean_object* v_x_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l_Lean_Server_ServerRequestResponse_ctorIdx___redArg(v_x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorIdx___boxed(lean_object* v_00_u03b1_505_, lean_object* v_x_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_Server_ServerRequestResponse_ctorIdx(v_00_u03b1_505_, v_x_506_);
lean_dec_ref(v_x_506_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorElim___redArg(lean_object* v_t_508_, lean_object* v_k_509_){
_start:
{
if (lean_obj_tag(v_t_508_) == 0)
{
lean_object* v_response_510_; lean_object* v___x_511_; 
v_response_510_ = lean_ctor_get(v_t_508_, 0);
lean_inc(v_response_510_);
lean_dec_ref(v_t_508_);
v___x_511_ = lean_apply_1(v_k_509_, v_response_510_);
return v___x_511_;
}
else
{
uint8_t v_code_512_; lean_object* v_message_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v_code_512_ = lean_ctor_get_uint8(v_t_508_, sizeof(void*)*1);
v_message_513_ = lean_ctor_get(v_t_508_, 0);
lean_inc_ref(v_message_513_);
lean_dec_ref(v_t_508_);
v___x_514_ = lean_box(v_code_512_);
v___x_515_ = lean_apply_2(v_k_509_, v___x_514_, v_message_513_);
return v___x_515_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorElim(lean_object* v_00_u03b1_516_, lean_object* v_motive_517_, lean_object* v_ctorIdx_518_, lean_object* v_t_519_, lean_object* v_h_520_, lean_object* v_k_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Lean_Server_ServerRequestResponse_ctorElim___redArg(v_t_519_, v_k_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_ctorElim___boxed(lean_object* v_00_u03b1_523_, lean_object* v_motive_524_, lean_object* v_ctorIdx_525_, lean_object* v_t_526_, lean_object* v_h_527_, lean_object* v_k_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Lean_Server_ServerRequestResponse_ctorElim(v_00_u03b1_523_, v_motive_524_, v_ctorIdx_525_, v_t_526_, v_h_527_, v_k_528_);
lean_dec(v_ctorIdx_525_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_success_elim___redArg(lean_object* v_t_530_, lean_object* v_success_531_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l_Lean_Server_ServerRequestResponse_ctorElim___redArg(v_t_530_, v_success_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_success_elim(lean_object* v_00_u03b1_533_, lean_object* v_motive_534_, lean_object* v_t_535_, lean_object* v_h_536_, lean_object* v_success_537_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l_Lean_Server_ServerRequestResponse_ctorElim___redArg(v_t_535_, v_success_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_failure_elim___redArg(lean_object* v_t_539_, lean_object* v_failure_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = l_Lean_Server_ServerRequestResponse_ctorElim___redArg(v_t_539_, v_failure_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_ServerRequestResponse_failure_elim(lean_object* v_00_u03b1_542_, lean_object* v_motive_543_, lean_object* v_t_544_, lean_object* v_h_545_, lean_object* v_failure_546_){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = l_Lean_Server_ServerRequestResponse_ctorElim___redArg(v_t_544_, v_failure_546_);
return v___x_547_;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedServerRequestResponse_default___closed__0(void){
_start:
{
lean_object* v___x_548_; uint8_t v___x_549_; lean_object* v___x_550_; 
v___x_548_ = lean_obj_once(&l_Lean_Server_instInhabitedRequestError_default___closed__0, &l_Lean_Server_instInhabitedRequestError_default___closed__0_once, _init_l_Lean_Server_instInhabitedRequestError_default___closed__0);
v___x_549_ = 0;
v___x_550_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_550_, 0, v___x_548_);
lean_ctor_set_uint8(v___x_550_, sizeof(void*)*1, v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedServerRequestResponse_default(lean_object* v_00_u03b1_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = lean_obj_once(&l_Lean_Server_instInhabitedServerRequestResponse_default___closed__0, &l_Lean_Server_instInhabitedServerRequestResponse_default___closed__0_once, _init_l_Lean_Server_instInhabitedServerRequestResponse_default___closed__0);
return v___x_552_;
}
}
static lean_object* _init_l_Lean_Server_instInhabitedServerRequestResponse___closed__0(void){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_Lean_Server_instInhabitedServerRequestResponse_default(lean_box(0));
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedServerRequestResponse(lean_object* v_a_554_){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = lean_obj_once(&l_Lean_Server_instInhabitedServerRequestResponse___closed__0, &l_Lean_Server_instInhabitedServerRequestResponse___closed__0_once, _init_l_Lean_Server_instInhabitedServerRequestResponse___closed__0);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_run___redArg(lean_object* v_act_556_, lean_object* v_rc_557_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = lean_apply_2(v_act_556_, v_rc_557_, lean_box(0));
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_run___redArg___boxed(lean_object* v_act_560_, lean_object* v_rc_561_, lean_object* v_a_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Lean_Server_RequestM_run___redArg(v_act_560_, v_rc_561_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_run(lean_object* v_00_u03b1_564_, lean_object* v_act_565_, lean_object* v_rc_566_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = lean_apply_2(v_act_565_, v_rc_566_, lean_box(0));
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_run___boxed(lean_object* v_00_u03b1_569_, lean_object* v_act_570_, lean_object* v_rc_571_, lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_Server_RequestM_run(v_00_u03b1_569_, v_act_570_, v_rc_571_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestTask_pure___redArg(lean_object* v_a_574_){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_575_, 0, v_a_574_);
v___x_576_ = lean_task_pure(v___x_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestTask_pure(lean_object* v_00_u03b1_577_, lean_object* v_a_578_){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_579_, 0, v_a_578_);
v___x_580_ = lean_task_pure(v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftIORequestM___lam__0(lean_object* v_00_u03b1_581_, lean_object* v_x_582_, lean_object* v___y_583_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = lean_apply_1(v_x_582_, lean_box(0));
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_585_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_585_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_591_; 
if (v_isShared_589_ == 0)
{
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
else
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_602_; 
v_a_594_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_602_ == 0)
{
v___x_596_ = v___x_585_;
v_isShared_597_ = v_isSharedCheck_602_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_585_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_602_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_598_; lean_object* v___x_600_; 
v___x_598_ = l_Lean_Server_RequestError_ofIoError(v_a_594_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v___x_598_);
v___x_600_ = v___x_596_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_598_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftIORequestM___lam__0___boxed(lean_object* v_00_u03b1_603_, lean_object* v_x_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lean_Server_instMonadLiftIORequestM___lam__0(v_00_u03b1_603_, v_x_604_, v___y_605_);
lean_dec_ref(v___y_605_);
return v_res_607_;
}
}
static lean_object* _init_l_Lean_Server_instMonadLiftIORequestM___closed__0(void){
_start:
{
lean_object* v___f_608_; 
v___f_608_ = lean_alloc_closure((void*)(l_Lean_Server_instMonadLiftIORequestM___lam__0___boxed), 4, 0);
return v___f_608_;
}
}
static lean_object* _init_l_Lean_Server_instMonadLiftIORequestM(void){
_start:
{
lean_object* v___f_609_; 
v___f_609_ = lean_obj_once(&l_Lean_Server_instMonadLiftIORequestM___closed__0, &l_Lean_Server_instMonadLiftIORequestM___closed__0_once, _init_l_Lean_Server_instMonadLiftIORequestM___closed__0);
return v___f_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftEIOExceptionRequestM___lam__0(lean_object* v_00_u03b1_610_, lean_object* v_x_611_, lean_object* v___y_612_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = lean_apply_1(v_x_611_, lean_box(0));
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_614_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_614_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_615_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
else
{
lean_object* v_a_623_; lean_object* v___x_624_; lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
v_a_623_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_a_623_);
lean_dec_ref(v___x_614_);
v___x_624_ = l_Lean_Server_RequestError_ofException(v_a_623_);
v_a_625_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_624_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_624_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
lean_ctor_set_tag(v___x_627_, 1);
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftEIOExceptionRequestM___lam__0___boxed(lean_object* v_00_u03b1_633_, lean_object* v_x_634_, lean_object* v___y_635_, lean_object* v___y_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_Lean_Server_instMonadLiftEIOExceptionRequestM___lam__0(v_00_u03b1_633_, v_x_634_, v___y_635_);
lean_dec_ref(v___y_635_);
return v_res_637_;
}
}
static lean_object* _init_l_Lean_Server_instMonadLiftEIOExceptionRequestM___closed__0(void){
_start:
{
lean_object* v___f_638_; 
v___f_638_ = lean_alloc_closure((void*)(l_Lean_Server_instMonadLiftEIOExceptionRequestM___lam__0___boxed), 4, 0);
return v___f_638_;
}
}
static lean_object* _init_l_Lean_Server_instMonadLiftEIOExceptionRequestM(void){
_start:
{
lean_object* v___f_639_; 
v___f_639_ = lean_obj_once(&l_Lean_Server_instMonadLiftEIOExceptionRequestM___closed__0, &l_Lean_Server_instMonadLiftEIOExceptionRequestM___closed__0_once, _init_l_Lean_Server_instMonadLiftEIOExceptionRequestM___closed__0);
return v___f_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftCancellableMRequestM___lam__0(lean_object* v_00_u03b1_640_, lean_object* v_x_641_, lean_object* v___y_642_){
_start:
{
lean_object* v_cancelTk_644_; lean_object* v___x_645_; 
v_cancelTk_644_ = lean_ctor_get(v___y_642_, 4);
lean_inc_ref(v_cancelTk_644_);
v___x_645_ = lean_apply_2(v_x_641_, v_cancelTk_644_, lean_box(0));
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_658_; 
v_a_646_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_658_ == 0)
{
v___x_648_ = v___x_645_;
v_isShared_649_ = v_isSharedCheck_658_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_645_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_658_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
if (lean_obj_tag(v_a_646_) == 0)
{
lean_object* v___x_650_; lean_object* v___x_652_; 
lean_dec_ref(v_a_646_);
v___x_650_ = l_Lean_Server_RequestError_requestCancelled;
if (v_isShared_649_ == 0)
{
lean_ctor_set_tag(v___x_648_, 1);
lean_ctor_set(v___x_648_, 0, v___x_650_);
v___x_652_ = v___x_648_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; 
v_a_654_ = lean_ctor_get(v_a_646_, 0);
lean_inc(v_a_654_);
lean_dec_ref(v_a_646_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 0, v_a_654_);
v___x_656_ = v___x_648_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_654_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
else
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_667_; 
v_a_659_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_667_ == 0)
{
v___x_661_ = v___x_645_;
v_isShared_662_ = v_isSharedCheck_667_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_645_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_667_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v___x_665_; 
v___x_663_ = l_Lean_Server_RequestError_ofIoError(v_a_659_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 0, v___x_663_);
v___x_665_ = v___x_661_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_663_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instMonadLiftCancellableMRequestM___lam__0___boxed(lean_object* v_00_u03b1_668_, lean_object* v_x_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lean_Server_instMonadLiftCancellableMRequestM___lam__0(v_00_u03b1_668_, v_x_669_, v___y_670_);
lean_dec_ref(v___y_670_);
return v_res_672_;
}
}
static lean_object* _init_l_Lean_Server_instMonadLiftCancellableMRequestM___closed__0(void){
_start:
{
lean_object* v___f_673_; 
v___f_673_ = lean_alloc_closure((void*)(l_Lean_Server_instMonadLiftCancellableMRequestM___lam__0___boxed), 4, 0);
return v___f_673_;
}
}
static lean_object* _init_l_Lean_Server_instMonadLiftCancellableMRequestM(void){
_start:
{
lean_object* v___f_674_; 
v___f_674_ = lean_obj_once(&l_Lean_Server_instMonadLiftCancellableMRequestM___closed__0, &l_Lean_Server_instMonadLiftCancellableMRequestM___closed__0_once, _init_l_Lean_Server_instMonadLiftCancellableMRequestM___closed__0);
return v___f_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runInIO___redArg(lean_object* v_x_675_, lean_object* v_ctx_676_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = lean_apply_2(v_x_675_, v_ctx_676_, lean_box(0));
if (lean_obj_tag(v___x_678_) == 0)
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_686_; 
v_a_679_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_686_ == 0)
{
v___x_681_ = v___x_678_;
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_678_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_684_; 
if (v_isShared_682_ == 0)
{
v___x_684_ = v___x_681_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_679_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
else
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_696_; 
v_a_687_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_696_ == 0)
{
v___x_689_ = v___x_678_;
v_isShared_690_ = v_isSharedCheck_696_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_678_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_696_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v_message_691_; lean_object* v___x_692_; lean_object* v___x_694_; 
v_message_691_ = lean_ctor_get(v_a_687_, 0);
lean_inc_ref(v_message_691_);
lean_dec(v_a_687_);
v___x_692_ = lean_mk_io_user_error(v_message_691_);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 0, v___x_692_);
v___x_694_ = v___x_689_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runInIO___redArg___boxed(lean_object* v_x_697_, lean_object* v_ctx_698_, lean_object* v_a_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lean_Server_RequestM_runInIO___redArg(v_x_697_, v_ctx_698_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runInIO(lean_object* v_00_u03b1_701_, lean_object* v_x_702_, lean_object* v_ctx_703_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = l_Lean_Server_RequestM_runInIO___redArg(v_x_702_, v_ctx_703_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runInIO___boxed(lean_object* v_00_u03b1_706_, lean_object* v_x_707_, lean_object* v_ctx_708_, lean_object* v_a_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Lean_Server_RequestM_runInIO(v_00_u03b1_706_, v_x_707_, v_ctx_708_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___redArg___lam__0(lean_object* v_toPure_711_, lean_object* v_rc_712_){
_start:
{
lean_object* v_doc_713_; lean_object* v___x_714_; 
v_doc_713_ = lean_ctor_get(v_rc_712_, 1);
lean_inc_ref(v_doc_713_);
lean_dec_ref(v_rc_712_);
v___x_714_ = lean_apply_2(v_toPure_711_, lean_box(0), v_doc_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___redArg(lean_object* v_inst_715_, lean_object* v_inst_716_){
_start:
{
lean_object* v_toApplicative_717_; lean_object* v_toBind_718_; lean_object* v_toPure_719_; lean_object* v___f_720_; lean_object* v___x_721_; 
v_toApplicative_717_ = lean_ctor_get(v_inst_715_, 0);
lean_inc_ref(v_toApplicative_717_);
v_toBind_718_ = lean_ctor_get(v_inst_715_, 1);
lean_inc(v_toBind_718_);
lean_dec_ref(v_inst_715_);
v_toPure_719_ = lean_ctor_get(v_toApplicative_717_, 1);
lean_inc(v_toPure_719_);
lean_dec_ref(v_toApplicative_717_);
v___f_720_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_readDoc___redArg___lam__0), 2, 1);
lean_closure_set(v___f_720_, 0, v_toPure_719_);
v___x_721_ = lean_apply_4(v_toBind_718_, lean_box(0), lean_box(0), v_inst_716_, v___f_720_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc(lean_object* v_m_722_, lean_object* v_inst_723_, lean_object* v_inst_724_){
_start:
{
lean_object* v___x_725_; 
v___x_725_ = l_Lean_Server_RequestM_readDoc___redArg(v_inst_723_, v_inst_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_asTask___redArg___lam__0(lean_object* v_t_726_, lean_object* v_a_727_){
_start:
{
lean_object* v___x_729_; 
lean_inc_ref(v_a_727_);
v___x_729_ = lean_apply_2(v_t_726_, v_a_727_, lean_box(0));
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_asTask___redArg___lam__0___boxed(lean_object* v_t_730_, lean_object* v_a_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lean_Server_RequestM_asTask___redArg___lam__0(v_t_730_, v_a_731_);
lean_dec_ref(v_a_731_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_asTask___redArg(lean_object* v_t_734_, lean_object* v_a_735_){
_start:
{
lean_object* v___f_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
lean_inc_ref(v_a_735_);
v___f_737_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_asTask___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_737_, 0, v_t_734_);
lean_closure_set(v___f_737_, 1, v_a_735_);
v___x_738_ = l_Lean_Server_ServerTask_EIO_asTask___redArg(v___f_737_);
v___x_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_asTask___redArg___boxed(lean_object* v_t_740_, lean_object* v_a_741_, lean_object* v_a_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Lean_Server_RequestM_asTask___redArg(v_t_740_, v_a_741_);
lean_dec_ref(v_a_741_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_asTask(lean_object* v_00_u03b1_744_, lean_object* v_t_745_, lean_object* v_a_746_){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l_Lean_Server_RequestM_asTask___redArg(v_t_745_, v_a_746_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_asTask___boxed(lean_object* v_00_u03b1_749_, lean_object* v_t_750_, lean_object* v_a_751_, lean_object* v_a_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_Server_RequestM_asTask(v_00_u03b1_749_, v_t_750_, v_a_751_);
lean_dec_ref(v_a_751_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_pureTask___redArg(lean_object* v_t_754_, lean_object* v_a_755_){
_start:
{
lean_object* v___x_757_; 
lean_inc_ref(v_a_755_);
v___x_757_ = lean_apply_2(v_t_754_, v_a_755_, lean_box(0));
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_767_; 
v_a_758_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_767_ == 0)
{
v___x_760_ = v___x_757_;
v_isShared_761_ = v_isSharedCheck_767_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_757_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_767_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_765_; 
v___x_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_762_, 0, v_a_758_);
v___x_763_ = lean_task_pure(v___x_762_);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 0, v___x_763_);
v___x_765_ = v___x_760_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v___x_763_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
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
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_pureTask___redArg___boxed(lean_object* v_t_776_, lean_object* v_a_777_, lean_object* v_a_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lean_Server_RequestM_pureTask___redArg(v_t_776_, v_a_777_);
lean_dec_ref(v_a_777_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_pureTask(lean_object* v_00_u03b1_780_, lean_object* v_t_781_, lean_object* v_a_782_){
_start:
{
lean_object* v___x_784_; 
v___x_784_ = l_Lean_Server_RequestM_pureTask___redArg(v_t_781_, v_a_782_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_pureTask___boxed(lean_object* v_00_u03b1_785_, lean_object* v_t_786_, lean_object* v_a_787_, lean_object* v_a_788_){
_start:
{
lean_object* v_res_789_; 
v_res_789_ = l_Lean_Server_RequestM_pureTask(v_00_u03b1_785_, v_t_786_, v_a_787_);
lean_dec_ref(v_a_787_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCheap___redArg___lam__0(lean_object* v_f_790_, lean_object* v_a_791_, lean_object* v_x_792_){
_start:
{
lean_object* v___x_794_; 
lean_inc_ref(v_a_791_);
v___x_794_ = lean_apply_3(v_f_790_, v_x_792_, v_a_791_, lean_box(0));
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCheap___redArg___lam__0___boxed(lean_object* v_f_795_, lean_object* v_a_796_, lean_object* v_x_797_, lean_object* v___y_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_Lean_Server_RequestM_mapTaskCheap___redArg___lam__0(v_f_795_, v_a_796_, v_x_797_);
lean_dec_ref(v_a_796_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCheap___redArg(lean_object* v_t_800_, lean_object* v_f_801_, lean_object* v_a_802_){
_start:
{
lean_object* v___f_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
lean_inc_ref(v_a_802_);
v___f_804_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_mapTaskCheap___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_804_, 0, v_f_801_);
lean_closure_set(v___f_804_, 1, v_a_802_);
v___x_805_ = l_Lean_Server_ServerTask_EIO_mapTaskCheap___redArg(v___f_804_, v_t_800_);
v___x_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCheap___redArg___boxed(lean_object* v_t_807_, lean_object* v_f_808_, lean_object* v_a_809_, lean_object* v_a_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_Lean_Server_RequestM_mapTaskCheap___redArg(v_t_807_, v_f_808_, v_a_809_);
lean_dec_ref(v_a_809_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCheap(lean_object* v_00_u03b1_812_, lean_object* v_00_u03b2_813_, lean_object* v_t_814_, lean_object* v_f_815_, lean_object* v_a_816_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_Server_RequestM_mapTaskCheap___redArg(v_t_814_, v_f_815_, v_a_816_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCheap___boxed(lean_object* v_00_u03b1_819_, lean_object* v_00_u03b2_820_, lean_object* v_t_821_, lean_object* v_f_822_, lean_object* v_a_823_, lean_object* v_a_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lean_Server_RequestM_mapTaskCheap(v_00_u03b1_819_, v_00_u03b2_820_, v_t_821_, v_f_822_, v_a_823_);
lean_dec_ref(v_a_823_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCostly___redArg(lean_object* v_t_826_, lean_object* v_f_827_, lean_object* v_a_828_){
_start:
{
lean_object* v___f_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
lean_inc_ref(v_a_828_);
v___f_830_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_mapTaskCheap___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_830_, 0, v_f_827_);
lean_closure_set(v___f_830_, 1, v_a_828_);
v___x_831_ = l_Lean_Server_ServerTask_EIO_mapTaskCostly___redArg(v___f_830_, v_t_826_);
v___x_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCostly___redArg___boxed(lean_object* v_t_833_, lean_object* v_f_834_, lean_object* v_a_835_, lean_object* v_a_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v_t_833_, v_f_834_, v_a_835_);
lean_dec_ref(v_a_835_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCostly(lean_object* v_00_u03b1_838_, lean_object* v_00_u03b2_839_, lean_object* v_t_840_, lean_object* v_f_841_, lean_object* v_a_842_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v_t_840_, v_f_841_, v_a_842_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapTaskCostly___boxed(lean_object* v_00_u03b1_845_, lean_object* v_00_u03b2_846_, lean_object* v_t_847_, lean_object* v_f_848_, lean_object* v_a_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lean_Server_RequestM_mapTaskCostly(v_00_u03b1_845_, v_00_u03b2_846_, v_t_847_, v_f_848_, v_a_849_);
lean_dec_ref(v_a_849_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCheap___redArg___lam__0(lean_object* v_f_852_, lean_object* v_a_853_, lean_object* v_x_854_){
_start:
{
lean_object* v___x_856_; 
lean_inc_ref(v_a_853_);
v___x_856_ = lean_apply_3(v_f_852_, v_x_854_, v_a_853_, lean_box(0));
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCheap___redArg___lam__0___boxed(lean_object* v_f_857_, lean_object* v_a_858_, lean_object* v_x_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lean_Server_RequestM_bindTaskCheap___redArg___lam__0(v_f_857_, v_a_858_, v_x_859_);
lean_dec_ref(v_a_858_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCheap___redArg(lean_object* v_t_862_, lean_object* v_f_863_, lean_object* v_a_864_){
_start:
{
lean_object* v___f_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
lean_inc_ref(v_a_864_);
v___f_866_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_bindTaskCheap___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_866_, 0, v_f_863_);
lean_closure_set(v___f_866_, 1, v_a_864_);
v___x_867_ = l_Lean_Server_ServerTask_EIO_bindTaskCheap___redArg(v_t_862_, v___f_866_);
v___x_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCheap___redArg___boxed(lean_object* v_t_869_, lean_object* v_f_870_, lean_object* v_a_871_, lean_object* v_a_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lean_Server_RequestM_bindTaskCheap___redArg(v_t_869_, v_f_870_, v_a_871_);
lean_dec_ref(v_a_871_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCheap(lean_object* v_00_u03b1_874_, lean_object* v_00_u03b2_875_, lean_object* v_t_876_, lean_object* v_f_877_, lean_object* v_a_878_){
_start:
{
lean_object* v___x_880_; 
v___x_880_ = l_Lean_Server_RequestM_bindTaskCheap___redArg(v_t_876_, v_f_877_, v_a_878_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCheap___boxed(lean_object* v_00_u03b1_881_, lean_object* v_00_u03b2_882_, lean_object* v_t_883_, lean_object* v_f_884_, lean_object* v_a_885_, lean_object* v_a_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_Lean_Server_RequestM_bindTaskCheap(v_00_u03b1_881_, v_00_u03b2_882_, v_t_883_, v_f_884_, v_a_885_);
lean_dec_ref(v_a_885_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCostly___redArg(lean_object* v_t_888_, lean_object* v_f_889_, lean_object* v_a_890_){
_start:
{
lean_object* v___f_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
lean_inc_ref(v_a_890_);
v___f_892_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_bindTaskCheap___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_892_, 0, v_f_889_);
lean_closure_set(v___f_892_, 1, v_a_890_);
v___x_893_ = l_Lean_Server_ServerTask_EIO_bindTaskCostly___redArg(v_t_888_, v___f_892_);
v___x_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_894_, 0, v___x_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCostly___redArg___boxed(lean_object* v_t_895_, lean_object* v_f_896_, lean_object* v_a_897_, lean_object* v_a_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l_Lean_Server_RequestM_bindTaskCostly___redArg(v_t_895_, v_f_896_, v_a_897_);
lean_dec_ref(v_a_897_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCostly(lean_object* v_00_u03b1_900_, lean_object* v_00_u03b2_901_, lean_object* v_t_902_, lean_object* v_f_903_, lean_object* v_a_904_){
_start:
{
lean_object* v___x_906_; 
v___x_906_ = l_Lean_Server_RequestM_bindTaskCostly___redArg(v_t_902_, v_f_903_, v_a_904_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindTaskCostly___boxed(lean_object* v_00_u03b1_907_, lean_object* v_00_u03b2_908_, lean_object* v_t_909_, lean_object* v_f_910_, lean_object* v_a_911_, lean_object* v_a_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Lean_Server_RequestM_bindTaskCostly(v_00_u03b1_907_, v_00_u03b2_908_, v_t_909_, v_f_910_, v_a_911_);
lean_dec_ref(v_a_911_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCheap___redArg___lam__0(lean_object* v_f_914_, lean_object* v_x_915_, lean_object* v___y_916_){
_start:
{
if (lean_obj_tag(v_x_915_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec_ref(v_f_914_);
v_a_918_ = lean_ctor_get(v_x_915_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v_x_915_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v_x_915_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v_x_915_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
lean_ctor_set_tag(v___x_920_, 1);
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_927_; 
v_a_926_ = lean_ctor_get(v_x_915_, 0);
lean_inc(v_a_926_);
lean_dec_ref(v_x_915_);
lean_inc_ref(v___y_916_);
v___x_927_ = lean_apply_3(v_f_914_, v_a_926_, v___y_916_, lean_box(0));
return v___x_927_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCheap___redArg___lam__0___boxed(lean_object* v_f_928_, lean_object* v_x_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_Server_RequestM_mapRequestTaskCheap___redArg___lam__0(v_f_928_, v_x_929_, v___y_930_);
lean_dec_ref(v___y_930_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCheap___redArg(lean_object* v_t_933_, lean_object* v_f_934_, lean_object* v_a_935_){
_start:
{
lean_object* v___f_937_; lean_object* v___x_938_; 
v___f_937_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_mapRequestTaskCheap___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_937_, 0, v_f_934_);
v___x_938_ = l_Lean_Server_RequestM_mapTaskCheap___redArg(v_t_933_, v___f_937_, v_a_935_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCheap___redArg___boxed(lean_object* v_t_939_, lean_object* v_f_940_, lean_object* v_a_941_, lean_object* v_a_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_Lean_Server_RequestM_mapRequestTaskCheap___redArg(v_t_939_, v_f_940_, v_a_941_);
lean_dec_ref(v_a_941_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCheap(lean_object* v_00_u03b1_944_, lean_object* v_00_u03b2_945_, lean_object* v_t_946_, lean_object* v_f_947_, lean_object* v_a_948_){
_start:
{
lean_object* v___x_950_; 
v___x_950_ = l_Lean_Server_RequestM_mapRequestTaskCheap___redArg(v_t_946_, v_f_947_, v_a_948_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCheap___boxed(lean_object* v_00_u03b1_951_, lean_object* v_00_u03b2_952_, lean_object* v_t_953_, lean_object* v_f_954_, lean_object* v_a_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lean_Server_RequestM_mapRequestTaskCheap(v_00_u03b1_951_, v_00_u03b2_952_, v_t_953_, v_f_954_, v_a_955_);
lean_dec_ref(v_a_955_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCostly___redArg(lean_object* v_t_958_, lean_object* v_f_959_, lean_object* v_a_960_){
_start:
{
lean_object* v___f_962_; lean_object* v___x_963_; 
v___f_962_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_mapRequestTaskCheap___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_962_, 0, v_f_959_);
v___x_963_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v_t_958_, v___f_962_, v_a_960_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCostly___redArg___boxed(lean_object* v_t_964_, lean_object* v_f_965_, lean_object* v_a_966_, lean_object* v_a_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lean_Server_RequestM_mapRequestTaskCostly___redArg(v_t_964_, v_f_965_, v_a_966_);
lean_dec_ref(v_a_966_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCostly(lean_object* v_00_u03b1_969_, lean_object* v_00_u03b2_970_, lean_object* v_t_971_, lean_object* v_f_972_, lean_object* v_a_973_){
_start:
{
lean_object* v___x_975_; 
v___x_975_ = l_Lean_Server_RequestM_mapRequestTaskCostly___redArg(v_t_971_, v_f_972_, v_a_973_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_mapRequestTaskCostly___boxed(lean_object* v_00_u03b1_976_, lean_object* v_00_u03b2_977_, lean_object* v_t_978_, lean_object* v_f_979_, lean_object* v_a_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lean_Server_RequestM_mapRequestTaskCostly(v_00_u03b1_976_, v_00_u03b2_977_, v_t_978_, v_f_979_, v_a_980_);
lean_dec_ref(v_a_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCheap___redArg___lam__0(lean_object* v_f_983_, lean_object* v_x_984_, lean_object* v___y_985_){
_start:
{
if (lean_obj_tag(v_x_984_) == 0)
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
lean_dec_ref(v_f_983_);
v_a_987_ = lean_ctor_get(v_x_984_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v_x_984_);
if (v_isSharedCheck_994_ == 0)
{
v___x_989_ = v_x_984_;
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_a_987_);
lean_dec(v_x_984_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_990_ == 0)
{
lean_ctor_set_tag(v___x_989_, 1);
v___x_992_ = v___x_989_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_a_987_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
else
{
lean_object* v_a_995_; lean_object* v___x_996_; 
v_a_995_ = lean_ctor_get(v_x_984_, 0);
lean_inc(v_a_995_);
lean_dec_ref(v_x_984_);
lean_inc_ref(v___y_985_);
v___x_996_ = lean_apply_3(v_f_983_, v_a_995_, v___y_985_, lean_box(0));
return v___x_996_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCheap___redArg___lam__0___boxed(lean_object* v_f_997_, lean_object* v_x_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_Lean_Server_RequestM_bindRequestTaskCheap___redArg___lam__0(v_f_997_, v_x_998_, v___y_999_);
lean_dec_ref(v___y_999_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCheap___redArg(lean_object* v_t_1002_, lean_object* v_f_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v___f_1006_; lean_object* v___x_1007_; 
v___f_1006_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_bindRequestTaskCheap___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1006_, 0, v_f_1003_);
v___x_1007_ = l_Lean_Server_RequestM_bindTaskCheap___redArg(v_t_1002_, v___f_1006_, v_a_1004_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCheap___redArg___boxed(lean_object* v_t_1008_, lean_object* v_f_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_Lean_Server_RequestM_bindRequestTaskCheap___redArg(v_t_1008_, v_f_1009_, v_a_1010_);
lean_dec_ref(v_a_1010_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCheap(lean_object* v_00_u03b1_1013_, lean_object* v_00_u03b2_1014_, lean_object* v_t_1015_, lean_object* v_f_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l_Lean_Server_RequestM_bindRequestTaskCheap___redArg(v_t_1015_, v_f_1016_, v_a_1017_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCheap___boxed(lean_object* v_00_u03b1_1020_, lean_object* v_00_u03b2_1021_, lean_object* v_t_1022_, lean_object* v_f_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lean_Server_RequestM_bindRequestTaskCheap(v_00_u03b1_1020_, v_00_u03b2_1021_, v_t_1022_, v_f_1023_, v_a_1024_);
lean_dec_ref(v_a_1024_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCostly___redArg(lean_object* v_t_1027_, lean_object* v_f_1028_, lean_object* v_a_1029_){
_start:
{
lean_object* v___f_1031_; lean_object* v___x_1032_; 
v___f_1031_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_bindRequestTaskCheap___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1031_, 0, v_f_1028_);
v___x_1032_ = l_Lean_Server_RequestM_bindTaskCostly___redArg(v_t_1027_, v___f_1031_, v_a_1029_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCostly___redArg___boxed(lean_object* v_t_1033_, lean_object* v_f_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l_Lean_Server_RequestM_bindRequestTaskCostly___redArg(v_t_1033_, v_f_1034_, v_a_1035_);
lean_dec_ref(v_a_1035_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCostly(lean_object* v_00_u03b1_1038_, lean_object* v_00_u03b2_1039_, lean_object* v_t_1040_, lean_object* v_f_1041_, lean_object* v_a_1042_){
_start:
{
lean_object* v___x_1044_; 
v___x_1044_ = l_Lean_Server_RequestM_bindRequestTaskCostly___redArg(v_t_1040_, v_f_1041_, v_a_1042_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindRequestTaskCostly___boxed(lean_object* v_00_u03b1_1045_, lean_object* v_00_u03b2_1046_, lean_object* v_t_1047_, lean_object* v_f_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l_Lean_Server_RequestM_bindRequestTaskCostly(v_00_u03b1_1045_, v_00_u03b2_1046_, v_t_1047_, v_f_1048_, v_a_1049_);
lean_dec_ref(v_a_1049_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___redArg(lean_object* v_inst_1052_, lean_object* v_params_1053_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lean_Server_parseRequestParams___redArg(v_inst_1052_, v_params_1053_);
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
v_a_1056_ = lean_ctor_get(v___x_1055_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1055_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_1055_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1055_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
lean_ctor_set_tag(v___x_1058_, 1);
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1071_; 
v_a_1064_ = lean_ctor_get(v___x_1055_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1055_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1066_ = v___x_1055_;
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_dec(v___x_1055_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
lean_ctor_set_tag(v___x_1066_, 0);
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_a_1064_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___redArg___boxed(lean_object* v_inst_1072_, lean_object* v_params_1073_, lean_object* v_a_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l_Lean_Server_RequestM_parseRequestParams___redArg(v_inst_1072_, v_params_1073_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams(lean_object* v_paramType_1076_, lean_object* v_inst_1077_, lean_object* v_params_1078_, lean_object* v_a_1079_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lean_Server_RequestM_parseRequestParams___redArg(v_inst_1077_, v_params_1078_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___boxed(lean_object* v_paramType_1082_, lean_object* v_inst_1083_, lean_object* v_params_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lean_Server_RequestM_parseRequestParams(v_paramType_1082_, v_inst_1083_, v_params_1084_, v_a_1085_);
lean_dec_ref(v_a_1085_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_checkCancelled(lean_object* v_a_1088_){
_start:
{
lean_object* v_cancelTk_1090_; uint8_t v___x_1091_; 
v_cancelTk_1090_ = lean_ctor_get(v_a_1088_, 4);
v___x_1091_ = l_Lean_Server_RequestCancellationToken_wasCancelledByCancelRequest(v_cancelTk_1090_);
if (v___x_1091_ == 0)
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = lean_box(0);
v___x_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
return v___x_1093_;
}
else
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1094_ = l_Lean_Server_RequestError_requestCancelled;
v___x_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1094_);
return v___x_1095_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_checkCancelled___boxed(lean_object* v_a_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lean_Server_RequestM_checkCancelled(v_a_1096_);
lean_dec_ref(v_a_1096_);
return v_res_1098_;
}
}
static lean_object* _init_l_Lean_Server_RequestM_sendServerRequest___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = lean_mk_string_unchecked("Cannot parse server request response: ", 38, 38);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_sendServerRequest___redArg___lam__0(lean_object* v_inst_1100_, lean_object* v_x_1101_){
_start:
{
if (lean_obj_tag(v_x_1101_) == 0)
{
lean_object* v_response_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1120_; 
v_response_1102_ = lean_ctor_get(v_x_1101_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v_x_1101_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1104_ = v_x_1101_;
v_isShared_1105_ = v_isSharedCheck_1120_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_response_1102_);
lean_dec(v_x_1101_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1120_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1106_; 
lean_inc(v_response_1102_);
v___x_1106_ = lean_apply_1(v_inst_1100_, v_response_1102_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v_a_1107_; uint8_t v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
lean_del_object(v___x_1104_);
v_a_1107_ = lean_ctor_get(v___x_1106_, 0);
lean_inc(v_a_1107_);
lean_dec_ref(v___x_1106_);
v___x_1108_ = 0;
v___x_1109_ = lean_obj_once(&l_Lean_Server_RequestM_sendServerRequest___redArg___lam__0___closed__0, &l_Lean_Server_RequestM_sendServerRequest___redArg___lam__0___closed__0_once, _init_l_Lean_Server_RequestM_sendServerRequest___redArg___lam__0___closed__0);
v___x_1110_ = l_Lean_Json_compress(v_response_1102_);
v___x_1111_ = lean_string_append(v___x_1109_, v___x_1110_);
lean_dec_ref(v___x_1110_);
v___x_1112_ = lean_obj_once(&l_Lean_Server_parseRequestParams___redArg___closed__1, &l_Lean_Server_parseRequestParams___redArg___closed__1_once, _init_l_Lean_Server_parseRequestParams___redArg___closed__1);
v___x_1113_ = lean_string_append(v___x_1111_, v___x_1112_);
v___x_1114_ = lean_string_append(v___x_1113_, v_a_1107_);
lean_dec(v_a_1107_);
v___x_1115_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_1115_, 0, v___x_1114_);
lean_ctor_set_uint8(v___x_1115_, sizeof(void*)*1, v___x_1108_);
return v___x_1115_;
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; 
lean_dec(v_response_1102_);
v_a_1116_ = lean_ctor_get(v___x_1106_, 0);
lean_inc(v_a_1116_);
lean_dec_ref(v___x_1106_);
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 0, v_a_1116_);
v___x_1118_ = v___x_1104_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1116_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
}
else
{
uint8_t v_code_1121_; lean_object* v_message_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1129_; 
lean_dec_ref(v_inst_1100_);
v_code_1121_ = lean_ctor_get_uint8(v_x_1101_, sizeof(void*)*1);
v_message_1122_ = lean_ctor_get(v_x_1101_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v_x_1101_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1124_ = v_x_1101_;
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_message_1122_);
lean_dec(v_x_1101_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1127_; 
if (v_isShared_1125_ == 0)
{
v___x_1127_ = v___x_1124_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_message_1122_);
lean_ctor_set_uint8(v_reuseFailAlloc_1128_, sizeof(void*)*1, v_code_1121_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_sendServerRequest___redArg(lean_object* v_inst_1130_, lean_object* v_inst_1131_, lean_object* v_method_1132_, lean_object* v_param_1133_, lean_object* v_a_1134_){
_start:
{
lean_object* v_serverRequestEmitter_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___f_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
v_serverRequestEmitter_1136_ = lean_ctor_get(v_a_1134_, 5);
v___x_1137_ = lean_apply_1(v_inst_1130_, v_param_1133_);
lean_inc_ref(v_serverRequestEmitter_1136_);
v___x_1138_ = lean_apply_3(v_serverRequestEmitter_1136_, v_method_1132_, v___x_1137_, lean_box(0));
v___f_1139_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_sendServerRequest___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1139_, 0, v_inst_1131_);
v___x_1140_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_1139_, v___x_1138_);
v___x_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_sendServerRequest___redArg___boxed(lean_object* v_inst_1142_, lean_object* v_inst_1143_, lean_object* v_method_1144_, lean_object* v_param_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l_Lean_Server_RequestM_sendServerRequest___redArg(v_inst_1142_, v_inst_1143_, v_method_1144_, v_param_1145_, v_a_1146_);
lean_dec_ref(v_a_1146_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_sendServerRequest(lean_object* v_paramType_1149_, lean_object* v_inst_1150_, lean_object* v_responseType_1151_, lean_object* v_inst_1152_, lean_object* v_inst_1153_, lean_object* v_method_1154_, lean_object* v_param_1155_, lean_object* v_a_1156_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_Lean_Server_RequestM_sendServerRequest___redArg(v_inst_1150_, v_inst_1152_, v_method_1154_, v_param_1155_, v_a_1156_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_sendServerRequest___boxed(lean_object* v_paramType_1159_, lean_object* v_inst_1160_, lean_object* v_responseType_1161_, lean_object* v_inst_1162_, lean_object* v_inst_1163_, lean_object* v_method_1164_, lean_object* v_param_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Lean_Server_RequestM_sendServerRequest(v_paramType_1159_, v_inst_1160_, v_responseType_1161_, v_inst_1162_, v_inst_1163_, v_method_1164_, v_param_1165_, v_a_1166_);
lean_dec_ref(v_a_1166_);
lean_dec(v_inst_1163_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_waitFindSnapAux___redArg(lean_object* v_notFoundX_1169_, lean_object* v_x_1170_, lean_object* v_x_1171_, lean_object* v_a_1172_){
_start:
{
if (lean_obj_tag(v_x_1171_) == 0)
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1182_; 
lean_dec_ref(v_x_1170_);
lean_dec_ref(v_notFoundX_1169_);
v_a_1174_ = lean_ctor_get(v_x_1171_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v_x_1171_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1176_ = v_x_1171_;
v_isShared_1177_ = v_isSharedCheck_1182_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v_x_1171_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1182_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1180_; 
v___x_1178_ = l_Lean_Server_RequestError_ofIoError(v_a_1174_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set_tag(v___x_1176_, 1);
lean_ctor_set(v___x_1176_, 0, v___x_1178_);
v___x_1180_ = v___x_1176_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1178_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
else
{
lean_object* v_a_1183_; 
v_a_1183_ = lean_ctor_get(v_x_1171_, 0);
lean_inc(v_a_1183_);
lean_dec_ref(v_x_1171_);
if (lean_obj_tag(v_a_1183_) == 0)
{
lean_object* v___x_1184_; 
lean_dec_ref(v_x_1170_);
lean_inc_ref(v_a_1172_);
v___x_1184_ = lean_apply_2(v_notFoundX_1169_, v_a_1172_, lean_box(0));
return v___x_1184_;
}
else
{
lean_object* v_val_1185_; lean_object* v___x_1186_; 
lean_dec_ref(v_notFoundX_1169_);
v_val_1185_ = lean_ctor_get(v_a_1183_, 0);
lean_inc(v_val_1185_);
lean_dec_ref(v_a_1183_);
lean_inc_ref(v_a_1172_);
v___x_1186_ = lean_apply_3(v_x_1170_, v_val_1185_, v_a_1172_, lean_box(0));
return v___x_1186_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_waitFindSnapAux___redArg___boxed(lean_object* v_notFoundX_1187_, lean_object* v_x_1188_, lean_object* v_x_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_Lean_Server_RequestM_waitFindSnapAux___redArg(v_notFoundX_1187_, v_x_1188_, v_x_1189_, v_a_1190_);
lean_dec_ref(v_a_1190_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_waitFindSnapAux(lean_object* v_00_u03b1_1193_, lean_object* v_notFoundX_1194_, lean_object* v_x_1195_, lean_object* v_x_1196_, lean_object* v_a_1197_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lean_Server_RequestM_waitFindSnapAux___redArg(v_notFoundX_1194_, v_x_1195_, v_x_1196_, v_a_1197_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_waitFindSnapAux___boxed(lean_object* v_00_u03b1_1200_, lean_object* v_notFoundX_1201_, lean_object* v_x_1202_, lean_object* v_x_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Lean_Server_RequestM_waitFindSnapAux(v_00_u03b1_1200_, v_notFoundX_1201_, v_x_1202_, v_x_1203_, v_a_1204_);
lean_dec_ref(v_a_1204_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnap___redArg(lean_object* v_doc_1207_, lean_object* v_p_1208_, lean_object* v_notFoundX_1209_, lean_object* v_x_1210_, lean_object* v_a_1211_){
_start:
{
lean_object* v_toEditableDocumentCore_1213_; lean_object* v_cmdSnaps_1214_; lean_object* v_findTask_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v_toEditableDocumentCore_1213_ = lean_ctor_get(v_doc_1207_, 0);
lean_inc_ref(v_toEditableDocumentCore_1213_);
lean_dec_ref(v_doc_1207_);
v_cmdSnaps_1214_ = lean_ctor_get(v_toEditableDocumentCore_1213_, 2);
lean_inc(v_cmdSnaps_1214_);
lean_dec_ref(v_toEditableDocumentCore_1213_);
v_findTask_1215_ = l_IO_AsyncList_waitFind_x3f___redArg(v_p_1208_, v_cmdSnaps_1214_);
v___x_1216_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_waitFindSnapAux___boxed), 6, 3);
lean_closure_set(v___x_1216_, 0, lean_box(0));
lean_closure_set(v___x_1216_, 1, v_notFoundX_1209_);
lean_closure_set(v___x_1216_, 2, v_x_1210_);
v___x_1217_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v_findTask_1215_, v___x_1216_, v_a_1211_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnap___redArg___boxed(lean_object* v_doc_1218_, lean_object* v_p_1219_, lean_object* v_notFoundX_1220_, lean_object* v_x_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lean_Server_RequestM_withWaitFindSnap___redArg(v_doc_1218_, v_p_1219_, v_notFoundX_1220_, v_x_1221_, v_a_1222_);
lean_dec_ref(v_a_1222_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnap(lean_object* v_00_u03b2_1225_, lean_object* v_doc_1226_, lean_object* v_p_1227_, lean_object* v_notFoundX_1228_, lean_object* v_x_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Lean_Server_RequestM_withWaitFindSnap___redArg(v_doc_1226_, v_p_1227_, v_notFoundX_1228_, v_x_1229_, v_a_1230_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnap___boxed(lean_object* v_00_u03b2_1233_, lean_object* v_doc_1234_, lean_object* v_p_1235_, lean_object* v_notFoundX_1236_, lean_object* v_x_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Lean_Server_RequestM_withWaitFindSnap(v_00_u03b2_1233_, v_doc_1234_, v_p_1235_, v_notFoundX_1236_, v_x_1237_, v_a_1238_);
lean_dec_ref(v_a_1238_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindWaitFindSnap___redArg(lean_object* v_doc_1241_, lean_object* v_p_1242_, lean_object* v_notFoundX_1243_, lean_object* v_x_1244_, lean_object* v_a_1245_){
_start:
{
lean_object* v_toEditableDocumentCore_1247_; lean_object* v_cmdSnaps_1248_; lean_object* v_findTask_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v_toEditableDocumentCore_1247_ = lean_ctor_get(v_doc_1241_, 0);
lean_inc_ref(v_toEditableDocumentCore_1247_);
lean_dec_ref(v_doc_1241_);
v_cmdSnaps_1248_ = lean_ctor_get(v_toEditableDocumentCore_1247_, 2);
lean_inc(v_cmdSnaps_1248_);
lean_dec_ref(v_toEditableDocumentCore_1247_);
v_findTask_1249_ = l_IO_AsyncList_waitFind_x3f___redArg(v_p_1242_, v_cmdSnaps_1248_);
v___x_1250_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_waitFindSnapAux___boxed), 6, 3);
lean_closure_set(v___x_1250_, 0, lean_box(0));
lean_closure_set(v___x_1250_, 1, v_notFoundX_1243_);
lean_closure_set(v___x_1250_, 2, v_x_1244_);
v___x_1251_ = l_Lean_Server_RequestM_bindTaskCostly___redArg(v_findTask_1249_, v___x_1250_, v_a_1245_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindWaitFindSnap___redArg___boxed(lean_object* v_doc_1252_, lean_object* v_p_1253_, lean_object* v_notFoundX_1254_, lean_object* v_x_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l_Lean_Server_RequestM_bindWaitFindSnap___redArg(v_doc_1252_, v_p_1253_, v_notFoundX_1254_, v_x_1255_, v_a_1256_);
lean_dec_ref(v_a_1256_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindWaitFindSnap(lean_object* v_00_u03b2_1259_, lean_object* v_doc_1260_, lean_object* v_p_1261_, lean_object* v_notFoundX_1262_, lean_object* v_x_1263_, lean_object* v_a_1264_){
_start:
{
lean_object* v___x_1266_; 
v___x_1266_ = l_Lean_Server_RequestM_bindWaitFindSnap___redArg(v_doc_1260_, v_p_1261_, v_notFoundX_1262_, v_x_1263_, v_a_1264_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_bindWaitFindSnap___boxed(lean_object* v_00_u03b2_1267_, lean_object* v_doc_1268_, lean_object* v_p_1269_, lean_object* v_notFoundX_1270_, lean_object* v_x_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lean_Server_RequestM_bindWaitFindSnap(v_00_u03b2_1267_, v_doc_1268_, v_p_1269_, v_notFoundX_1270_, v_x_1271_, v_a_1272_);
lean_dec_ref(v_a_1272_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_RequestM_withWaitFindSnapAtPos_spec__0(lean_object* v___y_1275_){
_start:
{
lean_object* v_doc_1277_; lean_object* v___x_1278_; 
v_doc_1277_ = lean_ctor_get(v___y_1275_, 1);
lean_inc_ref(v_doc_1277_);
v___x_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1278_, 0, v_doc_1277_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_RequestM_withWaitFindSnapAtPos_spec__0___boxed(lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Server_RequestM_withWaitFindSnapAtPos_spec__0(v___y_1279_);
lean_dec_ref(v___y_1279_);
return v_res_1281_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___lam__0(lean_object* v___x_1282_, lean_object* v_s_1283_){
_start:
{
lean_object* v___x_1284_; uint8_t v___x_1285_; 
v___x_1284_ = l_Lean_Server_Snapshots_Snapshot_endPos(v_s_1283_);
v___x_1285_ = lean_nat_dec_le(v___x_1282_, v___x_1284_);
lean_dec(v___x_1284_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___lam__0___boxed(lean_object* v___x_1286_, lean_object* v_s_1287_){
_start:
{
uint8_t v_res_1288_; lean_object* v_r_1289_; 
v_res_1288_ = l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___lam__0(v___x_1286_, v_s_1287_);
lean_dec_ref(v_s_1287_);
lean_dec(v___x_1286_);
v_r_1289_ = lean_box(v_res_1288_);
return v_r_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___lam__1(lean_object* v___x_1290_, lean_object* v___y_1291_){
_start:
{
lean_object* v___x_1293_; 
v___x_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1290_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___lam__1___boxed(lean_object* v___x_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___lam__1(v___x_1294_, v___y_1295_);
lean_dec_ref(v___y_1295_);
return v_res_1297_;
}
}
static lean_object* _init_l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__0(void){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = lean_mk_string_unchecked("no snapshot found at ", 21, 21);
return v___x_1298_;
}
}
static lean_object* _init_l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__1(void){
_start:
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_mk_string_unchecked("(", 1, 1);
return v___x_1299_;
}
}
static lean_object* _init_l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__2(void){
_start:
{
lean_object* v___x_1300_; 
v___x_1300_ = lean_mk_string_unchecked(", ", 2, 2);
return v___x_1300_;
}
}
static lean_object* _init_l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__3(void){
_start:
{
lean_object* v___x_1301_; 
v___x_1301_ = lean_mk_string_unchecked(")", 1, 1);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg(lean_object* v_lspPos_1302_, lean_object* v_f_1303_, lean_object* v_a_1304_){
_start:
{
lean_object* v___x_1306_; lean_object* v_a_1307_; lean_object* v_toEditableDocumentCore_1308_; lean_object* v_meta_1309_; lean_object* v_text_1310_; lean_object* v_line_1311_; lean_object* v_character_1312_; lean_object* v___x_1313_; lean_object* v___f_1314_; uint8_t v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___f_1328_; lean_object* v___x_1329_; 
v___x_1306_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Server_RequestM_withWaitFindSnapAtPos_spec__0(v_a_1304_);
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1307_);
lean_dec_ref(v___x_1306_);
v_toEditableDocumentCore_1308_ = lean_ctor_get(v_a_1307_, 0);
v_meta_1309_ = lean_ctor_get(v_toEditableDocumentCore_1308_, 0);
v_text_1310_ = lean_ctor_get(v_meta_1309_, 3);
v_line_1311_ = lean_ctor_get(v_lspPos_1302_, 0);
lean_inc(v_line_1311_);
v_character_1312_ = lean_ctor_get(v_lspPos_1302_, 1);
lean_inc(v_character_1312_);
v___x_1313_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_1310_, v_lspPos_1302_);
v___f_1314_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1314_, 0, v___x_1313_);
v___x_1315_ = 3;
v___x_1316_ = lean_obj_once(&l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__0, &l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__0_once, _init_l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__0);
v___x_1317_ = lean_obj_once(&l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__1, &l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__1_once, _init_l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__1);
v___x_1318_ = l_Nat_reprFast(v_line_1311_);
v___x_1319_ = lean_string_append(v___x_1317_, v___x_1318_);
lean_dec_ref(v___x_1318_);
v___x_1320_ = lean_obj_once(&l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__2, &l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__2_once, _init_l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__2);
v___x_1321_ = lean_string_append(v___x_1319_, v___x_1320_);
v___x_1322_ = l_Nat_reprFast(v_character_1312_);
v___x_1323_ = lean_string_append(v___x_1321_, v___x_1322_);
lean_dec_ref(v___x_1322_);
v___x_1324_ = lean_obj_once(&l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__3, &l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__3_once, _init_l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___closed__3);
v___x_1325_ = lean_string_append(v___x_1323_, v___x_1324_);
v___x_1326_ = lean_string_append(v___x_1316_, v___x_1325_);
lean_dec_ref(v___x_1325_);
v___x_1327_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
lean_ctor_set_uint8(v___x_1327_, sizeof(void*)*1, v___x_1315_);
v___f_1328_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1328_, 0, v___x_1327_);
v___x_1329_ = l_Lean_Server_RequestM_withWaitFindSnap___redArg(v_a_1307_, v___f_1314_, v___f_1328_, v_f_1303_, v_a_1304_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg___boxed(lean_object* v_lspPos_1330_, lean_object* v_f_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg(v_lspPos_1330_, v_f_1331_, v_a_1332_);
lean_dec_ref(v_a_1332_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos(lean_object* v_00_u03b1_1335_, lean_object* v_lspPos_1336_, lean_object* v_f_1337_, lean_object* v_a_1338_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lean_Server_RequestM_withWaitFindSnapAtPos___redArg(v_lspPos_1336_, v_f_1337_, v_a_1338_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_withWaitFindSnapAtPos___boxed(lean_object* v_00_u03b1_1341_, lean_object* v_lspPos_1342_, lean_object* v_f_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l_Lean_Server_RequestM_withWaitFindSnapAtPos(v_00_u03b1_1341_, v_lspPos_1342_, v_f_1343_, v_a_1344_);
lean_dec_ref(v_a_1344_);
return v_res_1346_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_isAfterHoverPos(lean_object* v_hoverPos_1347_, lean_object* v_cmdParsed_1348_){
_start:
{
lean_object* v_stx_1349_; uint8_t v___x_1350_; lean_object* v___x_1351_; 
v_stx_1349_ = lean_ctor_get(v_cmdParsed_1348_, 1);
v___x_1350_ = 1;
v___x_1351_ = l_Lean_Syntax_getPos_x3f(v_stx_1349_, v___x_1350_);
if (lean_obj_tag(v___x_1351_) == 1)
{
lean_object* v_val_1352_; uint8_t v___x_1353_; 
v_val_1352_ = lean_ctor_get(v___x_1351_, 0);
lean_inc(v_val_1352_);
lean_dec_ref(v___x_1351_);
v___x_1353_ = lean_nat_dec_lt(v_hoverPos_1347_, v_val_1352_);
lean_dec(v_val_1352_);
return v___x_1353_;
}
else
{
uint8_t v___x_1354_; 
lean_dec(v___x_1351_);
v___x_1354_ = 0;
return v___x_1354_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_isAfterHoverPos___boxed(lean_object* v_hoverPos_1355_, lean_object* v_cmdParsed_1356_){
_start:
{
uint8_t v_res_1357_; lean_object* v_r_1358_; 
v_res_1357_ = l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_isAfterHoverPos(v_hoverPos_1355_, v_cmdParsed_1356_);
lean_dec_ref(v_cmdParsed_1356_);
lean_dec(v_hoverPos_1355_);
v_r_1358_ = lean_box(v_res_1357_);
return v_r_1358_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_containsHoverPos(lean_object* v_doc_1359_, lean_object* v_hoverPos_1360_, lean_object* v_cmdParsed_1361_){
_start:
{
lean_object* v_stx_1362_; uint8_t v___x_1363_; lean_object* v___x_1364_; 
v_stx_1362_ = lean_ctor_get(v_cmdParsed_1361_, 1);
v___x_1363_ = 1;
v___x_1364_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_stx_1362_, v___x_1363_);
if (lean_obj_tag(v___x_1364_) == 1)
{
lean_object* v_toEditableDocumentCore_1365_; lean_object* v_meta_1366_; lean_object* v_val_1367_; lean_object* v_text_1368_; uint8_t v___x_1369_; uint8_t v___x_1370_; 
v_toEditableDocumentCore_1365_ = lean_ctor_get(v_doc_1359_, 0);
v_meta_1366_ = lean_ctor_get(v_toEditableDocumentCore_1365_, 0);
v_val_1367_ = lean_ctor_get(v___x_1364_, 0);
lean_inc(v_val_1367_);
lean_dec_ref(v___x_1364_);
v_text_1368_ = lean_ctor_get(v_meta_1366_, 3);
v___x_1369_ = 0;
v___x_1370_ = l_Lean_FileMap_rangeContainsHoverPos(v_text_1368_, v_val_1367_, v_hoverPos_1360_, v___x_1369_);
lean_dec(v_val_1367_);
return v___x_1370_;
}
else
{
uint8_t v___x_1371_; 
lean_dec(v___x_1364_);
v___x_1371_ = 0;
return v___x_1371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_containsHoverPos___boxed(lean_object* v_doc_1372_, lean_object* v_hoverPos_1373_, lean_object* v_cmdParsed_1374_){
_start:
{
uint8_t v_res_1375_; lean_object* v_r_1376_; 
v_res_1375_ = l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_containsHoverPos(v_doc_1372_, v_hoverPos_1373_, v_cmdParsed_1374_);
lean_dec_ref(v_cmdParsed_1374_);
lean_dec(v_hoverPos_1373_);
lean_dec_ref(v_doc_1372_);
v_r_1376_ = lean_box(v_res_1375_);
return v_r_1376_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0(void){
_start:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1377_ = lean_box(0);
v___x_1378_ = lean_task_pure(v___x_1377_);
return v___x_1378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go(lean_object* v_doc_1379_, lean_object* v_hoverPos_1380_, lean_object* v_cmdParsed_1381_){
_start:
{
uint8_t v___x_1382_; 
v___x_1382_ = l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_containsHoverPos(v_doc_1379_, v_hoverPos_1380_, v_cmdParsed_1381_);
if (v___x_1382_ == 0)
{
uint8_t v___x_1383_; 
v___x_1383_ = l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_isAfterHoverPos(v_hoverPos_1380_, v_cmdParsed_1381_);
if (v___x_1383_ == 0)
{
lean_object* v_nextCmdSnap_x3f_1384_; 
v_nextCmdSnap_x3f_1384_ = lean_ctor_get(v_cmdParsed_1381_, 4);
lean_inc(v_nextCmdSnap_x3f_1384_);
lean_dec_ref(v_cmdParsed_1381_);
if (lean_obj_tag(v_nextCmdSnap_x3f_1384_) == 0)
{
lean_object* v___x_1385_; 
lean_dec(v_hoverPos_1380_);
lean_dec_ref(v_doc_1379_);
v___x_1385_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0, &l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0);
return v___x_1385_;
}
else
{
lean_object* v_val_1386_; lean_object* v_task_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v_val_1386_ = lean_ctor_get(v_nextCmdSnap_x3f_1384_, 0);
lean_inc(v_val_1386_);
lean_dec_ref(v_nextCmdSnap_x3f_1384_);
v_task_1387_ = lean_ctor_get(v_val_1386_, 3);
lean_inc_ref(v_task_1387_);
lean_dec(v_val_1386_);
v___x_1388_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go), 3, 2);
lean_closure_set(v___x_1388_, 0, v_doc_1379_);
lean_closure_set(v___x_1388_, 1, v_hoverPos_1380_);
v___x_1389_ = l_Lean_Server_ServerTask_bindCheap___redArg(v_task_1387_, v___x_1388_);
return v___x_1389_;
}
}
else
{
lean_object* v___x_1390_; 
lean_dec_ref(v_cmdParsed_1381_);
lean_dec(v_hoverPos_1380_);
lean_dec_ref(v_doc_1379_);
v___x_1390_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0, &l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0);
return v___x_1390_;
}
}
else
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
lean_dec(v_hoverPos_1380_);
lean_dec_ref(v_doc_1379_);
v___x_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1391_, 0, v_cmdParsed_1381_);
v___x_1392_ = lean_task_pure(v___x_1391_);
return v___x_1392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdParsedSnap___lam__0(lean_object* v_doc_1393_, lean_object* v_hoverPos_1394_, lean_object* v_headerProcessed_1395_){
_start:
{
lean_object* v_result_x3f_1396_; 
v_result_x3f_1396_ = lean_ctor_get(v_headerProcessed_1395_, 2);
lean_inc(v_result_x3f_1396_);
lean_dec_ref(v_headerProcessed_1395_);
if (lean_obj_tag(v_result_x3f_1396_) == 1)
{
lean_object* v_val_1397_; lean_object* v_firstCmdSnap_1398_; lean_object* v_task_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v_val_1397_ = lean_ctor_get(v_result_x3f_1396_, 0);
lean_inc(v_val_1397_);
lean_dec_ref(v_result_x3f_1396_);
v_firstCmdSnap_1398_ = lean_ctor_get(v_val_1397_, 1);
lean_inc_ref(v_firstCmdSnap_1398_);
lean_dec(v_val_1397_);
v_task_1399_ = lean_ctor_get(v_firstCmdSnap_1398_, 3);
lean_inc_ref(v_task_1399_);
lean_dec_ref(v_firstCmdSnap_1398_);
v___x_1400_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go), 3, 2);
lean_closure_set(v___x_1400_, 0, v_doc_1393_);
lean_closure_set(v___x_1400_, 1, v_hoverPos_1394_);
v___x_1401_ = l_Lean_Server_ServerTask_bindCheap___redArg(v_task_1399_, v___x_1400_);
return v___x_1401_;
}
else
{
lean_object* v___x_1402_; 
lean_dec(v_result_x3f_1396_);
lean_dec(v_hoverPos_1394_);
lean_dec_ref(v_doc_1393_);
v___x_1402_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0, &l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0);
return v___x_1402_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdParsedSnap(lean_object* v_doc_1403_, lean_object* v_hoverPos_1404_){
_start:
{
lean_object* v_toEditableDocumentCore_1405_; lean_object* v_initSnap_1406_; lean_object* v_result_x3f_1407_; 
v_toEditableDocumentCore_1405_ = lean_ctor_get(v_doc_1403_, 0);
v_initSnap_1406_ = lean_ctor_get(v_toEditableDocumentCore_1405_, 1);
v_result_x3f_1407_ = lean_ctor_get(v_initSnap_1406_, 4);
if (lean_obj_tag(v_result_x3f_1407_) == 1)
{
lean_object* v_val_1408_; lean_object* v_processedSnap_1409_; lean_object* v_task_1410_; lean_object* v___f_1411_; lean_object* v___x_1412_; 
v_val_1408_ = lean_ctor_get(v_result_x3f_1407_, 0);
v_processedSnap_1409_ = lean_ctor_get(v_val_1408_, 1);
v_task_1410_ = lean_ctor_get(v_processedSnap_1409_, 3);
lean_inc_ref(v_task_1410_);
v___f_1411_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_findCmdParsedSnap___lam__0), 3, 2);
lean_closure_set(v___f_1411_, 0, v_doc_1403_);
lean_closure_set(v___f_1411_, 1, v_hoverPos_1404_);
v___x_1412_ = l_Lean_Server_ServerTask_bindCheap___redArg(v_task_1410_, v___f_1411_);
return v___x_1412_;
}
else
{
lean_object* v___x_1413_; 
lean_dec(v_hoverPos_1404_);
lean_dec_ref(v_doc_1403_);
v___x_1413_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0, &l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_RequestM_findCmdParsedSnap_go___closed__0);
return v___x_1413_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_RequestM_findCmdDataAtPos_spec__0(lean_object* v_msg_1414_){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1415_ = lean_box(0);
v___x_1416_ = lean_panic_fn_borrowed(v___x_1415_, v_msg_1414_);
return v___x_1416_;
}
}
static lean_object* _init_l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1417_; 
v___x_1417_ = lean_mk_string_unchecked("Lean.Server.Requests", 20, 20);
return v___x_1417_;
}
}
static lean_object* _init_l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1418_; 
v___x_1418_ = lean_mk_string_unchecked("Lean.Server.RequestM.findCmdDataAtPos", 37, 37);
return v___x_1418_;
}
}
static lean_object* _init_l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1419_; 
v___x_1419_ = lean_mk_string_unchecked("assertion violation: s.infoTree\?.isSome\n        ", 48, 48);
return v___x_1419_;
}
}
static lean_object* _init_l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1420_ = lean_obj_once(&l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__2, &l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__2_once, _init_l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__2);
v___x_1421_ = lean_unsigned_to_nat(8u);
v___x_1422_ = lean_unsigned_to_nat(418u);
v___x_1423_ = lean_obj_once(&l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__1, &l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__1_once, _init_l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__1);
v___x_1424_ = lean_obj_once(&l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__0, &l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__0_once, _init_l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__0);
v___x_1425_ = l_mkPanicMessageWithDecl(v___x_1424_, v___x_1423_, v___x_1422_, v___x_1421_, v___x_1420_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__0(lean_object* v_stx_1426_, lean_object* v_s_1427_){
_start:
{
lean_object* v_infoTree_x3f_1428_; 
v_infoTree_x3f_1428_ = lean_ctor_get(v_s_1427_, 2);
lean_inc(v_infoTree_x3f_1428_);
lean_dec_ref(v_s_1427_);
if (lean_obj_tag(v_infoTree_x3f_1428_) == 0)
{
lean_object* v___x_1429_; lean_object* v___x_1430_; 
lean_dec(v_stx_1426_);
v___x_1429_ = lean_obj_once(&l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__3, &l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__3_once, _init_l_Lean_Server_RequestM_findCmdDataAtPos___lam__0___closed__3);
v___x_1430_ = l_panic___at___00Lean_Server_RequestM_findCmdDataAtPos_spec__0(v___x_1429_);
return v___x_1430_;
}
else
{
lean_object* v_val_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1439_; 
v_val_1431_ = lean_ctor_get(v_infoTree_x3f_1428_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v_infoTree_x3f_1428_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1433_ = v_infoTree_x3f_1428_;
v_isShared_1434_ = v_isSharedCheck_1439_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_val_1431_);
lean_dec(v_infoTree_x3f_1428_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1439_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1435_; lean_object* v___x_1437_; 
v___x_1435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1435_, 0, v_stx_1426_);
lean_ctor_set(v___x_1435_, 1, v_val_1431_);
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 0, v___x_1435_);
v___x_1437_ = v___x_1433_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1435_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__1(lean_object* v_elabSnap_1440_, lean_object* v___f_1441_, lean_object* v_stx_1442_, lean_object* v_x_1443_){
_start:
{
if (lean_obj_tag(v_x_1443_) == 0)
{
lean_object* v_infoTreeSnap_1444_; lean_object* v_task_1445_; lean_object* v___x_1446_; 
lean_dec(v_stx_1442_);
v_infoTreeSnap_1444_ = lean_ctor_get(v_elabSnap_1440_, 3);
lean_inc_ref(v_infoTreeSnap_1444_);
lean_dec_ref(v_elabSnap_1440_);
v_task_1445_ = lean_ctor_get(v_infoTreeSnap_1444_, 3);
lean_inc_ref(v_task_1445_);
lean_dec_ref(v_infoTreeSnap_1444_);
v___x_1446_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_1441_, v_task_1445_);
return v___x_1446_;
}
else
{
lean_object* v_val_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1456_; 
lean_dec_ref(v___f_1441_);
lean_dec_ref(v_elabSnap_1440_);
v_val_1447_ = lean_ctor_get(v_x_1443_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v_x_1443_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1449_ = v_x_1443_;
v_isShared_1450_ = v_isSharedCheck_1456_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_val_1447_);
lean_dec(v_x_1443_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1456_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1451_; lean_object* v___x_1453_; 
v___x_1451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1451_, 0, v_stx_1442_);
lean_ctor_set(v___x_1451_, 1, v_val_1447_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 0, v___x_1451_);
v___x_1453_ = v___x_1449_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1451_);
v___x_1453_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
lean_object* v___x_1454_; 
v___x_1454_ = lean_task_pure(v___x_1453_);
return v___x_1454_;
}
}
}
}
}
static lean_object* _init_l_Lean_Server_RequestM_findCmdDataAtPos___lam__2___closed__0(void){
_start:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___x_1457_ = lean_box(0);
v___x_1458_ = lean_task_pure(v___x_1457_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__2(lean_object* v_doc_1459_, lean_object* v_hoverPos_1460_, uint8_t v_includeStop_1461_, lean_object* v_x_1462_){
_start:
{
if (lean_obj_tag(v_x_1462_) == 0)
{
lean_object* v___x_1463_; 
lean_dec(v_hoverPos_1460_);
lean_dec_ref(v_doc_1459_);
v___x_1463_ = lean_obj_once(&l_Lean_Server_RequestM_findCmdDataAtPos___lam__2___closed__0, &l_Lean_Server_RequestM_findCmdDataAtPos___lam__2___closed__0_once, _init_l_Lean_Server_RequestM_findCmdDataAtPos___lam__2___closed__0);
return v___x_1463_;
}
else
{
lean_object* v_toEditableDocumentCore_1464_; lean_object* v_meta_1465_; lean_object* v_val_1466_; lean_object* v_text_1467_; lean_object* v_stx_1468_; lean_object* v_elabSnap_1469_; lean_object* v___f_1470_; lean_object* v___f_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v_toEditableDocumentCore_1464_ = lean_ctor_get(v_doc_1459_, 0);
lean_inc_ref(v_toEditableDocumentCore_1464_);
lean_dec_ref(v_doc_1459_);
v_meta_1465_ = lean_ctor_get(v_toEditableDocumentCore_1464_, 0);
lean_inc_ref(v_meta_1465_);
lean_dec_ref(v_toEditableDocumentCore_1464_);
v_val_1466_ = lean_ctor_get(v_x_1462_, 0);
lean_inc(v_val_1466_);
lean_dec_ref(v_x_1462_);
v_text_1467_ = lean_ctor_get(v_meta_1465_, 3);
lean_inc_ref(v_text_1467_);
lean_dec_ref(v_meta_1465_);
v_stx_1468_ = lean_ctor_get(v_val_1466_, 1);
lean_inc_n(v_stx_1468_, 2);
v_elabSnap_1469_ = lean_ctor_get(v_val_1466_, 3);
lean_inc_ref_n(v_elabSnap_1469_, 2);
lean_dec(v_val_1466_);
v___f_1470_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_findCmdDataAtPos___lam__0), 2, 1);
lean_closure_set(v___f_1470_, 0, v_stx_1468_);
v___f_1471_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_findCmdDataAtPos___lam__1), 4, 3);
lean_closure_set(v___f_1471_, 0, v_elabSnap_1469_);
lean_closure_set(v___f_1471_, 1, v___f_1470_);
lean_closure_set(v___f_1471_, 2, v_stx_1468_);
v___x_1472_ = l_Lean_Language_Lean_instToSnapshotTreeCommandElaboratingSnapshot_go(v_elabSnap_1469_);
v___x_1473_ = l_Lean_Language_SnapshotTree_findInfoTreeAtPos(v_text_1467_, v___x_1472_, v_hoverPos_1460_, v_includeStop_1461_);
v___x_1474_ = l_Lean_Server_ServerTask_bindCheap___redArg(v___x_1473_, v___f_1471_);
return v___x_1474_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___lam__2___boxed(lean_object* v_doc_1475_, lean_object* v_hoverPos_1476_, lean_object* v_includeStop_1477_, lean_object* v_x_1478_){
_start:
{
uint8_t v_includeStop_boxed_1479_; lean_object* v_res_1480_; 
v_includeStop_boxed_1479_ = lean_unbox(v_includeStop_1477_);
v_res_1480_ = l_Lean_Server_RequestM_findCmdDataAtPos___lam__2(v_doc_1475_, v_hoverPos_1476_, v_includeStop_boxed_1479_, v_x_1478_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdDataAtPos(lean_object* v_doc_1481_, lean_object* v_hoverPos_1482_, uint8_t v_includeStop_1483_){
_start:
{
lean_object* v___x_1484_; lean_object* v___f_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1484_ = lean_box(v_includeStop_1483_);
lean_inc(v_hoverPos_1482_);
lean_inc_ref(v_doc_1481_);
v___f_1485_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_findCmdDataAtPos___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1485_, 0, v_doc_1481_);
lean_closure_set(v___f_1485_, 1, v_hoverPos_1482_);
lean_closure_set(v___f_1485_, 2, v___x_1484_);
v___x_1486_ = l_Lean_Server_RequestM_findCmdParsedSnap(v_doc_1481_, v_hoverPos_1482_);
v___x_1487_ = l_Lean_Server_ServerTask_bindCheap___redArg(v___x_1486_, v___f_1485_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findCmdDataAtPos___boxed(lean_object* v_doc_1488_, lean_object* v_hoverPos_1489_, lean_object* v_includeStop_1490_){
_start:
{
uint8_t v_includeStop_boxed_1491_; lean_object* v_res_1492_; 
v_includeStop_boxed_1491_ = lean_unbox(v_includeStop_1490_);
v_res_1492_ = l_Lean_Server_RequestM_findCmdDataAtPos(v_doc_1488_, v_hoverPos_1489_, v_includeStop_boxed_1491_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findInfoTreeAtPos___lam__0(lean_object* v_x_1493_){
_start:
{
if (lean_obj_tag(v_x_1493_) == 0)
{
lean_object* v___x_1494_; 
v___x_1494_ = lean_box(0);
return v___x_1494_;
}
else
{
lean_object* v_val_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1503_; 
v_val_1495_ = lean_ctor_get(v_x_1493_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v_x_1493_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1497_ = v_x_1493_;
v_isShared_1498_ = v_isSharedCheck_1503_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_val_1495_);
lean_dec(v_x_1493_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1503_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v_snd_1499_; lean_object* v___x_1501_; 
v_snd_1499_ = lean_ctor_get(v_val_1495_, 1);
lean_inc(v_snd_1499_);
lean_dec(v_val_1495_);
if (v_isShared_1498_ == 0)
{
lean_ctor_set(v___x_1497_, 0, v_snd_1499_);
v___x_1501_ = v___x_1497_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_snd_1499_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
}
static lean_object* _init_l_Lean_Server_RequestM_findInfoTreeAtPos___closed__0(void){
_start:
{
lean_object* v___f_1504_; 
v___f_1504_ = lean_alloc_closure((void*)(l_Lean_Server_RequestM_findInfoTreeAtPos___lam__0), 1, 0);
return v___f_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findInfoTreeAtPos(lean_object* v_doc_1505_, lean_object* v_hoverPos_1506_, uint8_t v_includeStop_1507_){
_start:
{
lean_object* v___f_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___f_1508_ = lean_obj_once(&l_Lean_Server_RequestM_findInfoTreeAtPos___closed__0, &l_Lean_Server_RequestM_findInfoTreeAtPos___closed__0_once, _init_l_Lean_Server_RequestM_findInfoTreeAtPos___closed__0);
v___x_1509_ = l_Lean_Server_RequestM_findCmdDataAtPos(v_doc_1505_, v_hoverPos_1506_, v_includeStop_1507_);
v___x_1510_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_1508_, v___x_1509_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_findInfoTreeAtPos___boxed(lean_object* v_doc_1511_, lean_object* v_hoverPos_1512_, lean_object* v_includeStop_1513_){
_start:
{
uint8_t v_includeStop_boxed_1514_; lean_object* v_res_1515_; 
v_includeStop_boxed_1514_ = lean_unbox(v_includeStop_1513_);
v_res_1515_ = l_Lean_Server_RequestM_findInfoTreeAtPos(v_doc_1511_, v_hoverPos_1512_, v_includeStop_boxed_1514_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCommandElabM___redArg(lean_object* v_snap_1516_, lean_object* v_c_1517_, lean_object* v_a_1518_){
_start:
{
lean_object* v_doc_1520_; lean_object* v_toEditableDocumentCore_1521_; lean_object* v_meta_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v_doc_1520_ = lean_ctor_get(v_a_1518_, 1);
v_toEditableDocumentCore_1521_ = lean_ctor_get(v_doc_1520_, 0);
v_meta_1522_ = lean_ctor_get(v_toEditableDocumentCore_1521_, 0);
lean_inc_ref(v_a_1518_);
v___x_1523_ = lean_apply_1(v_c_1517_, v_a_1518_);
v___x_1524_ = l_Lean_Server_Snapshots_Snapshot_runCommandElabM___redArg(v_snap_1516_, v_meta_1522_, v___x_1523_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1537_; 
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1527_ = v___x_1524_;
v_isShared_1528_ = v_isSharedCheck_1537_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1524_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1537_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
if (lean_obj_tag(v_a_1525_) == 0)
{
lean_object* v_a_1529_; lean_object* v___x_1531_; 
v_a_1529_ = lean_ctor_get(v_a_1525_, 0);
lean_inc(v_a_1529_);
lean_dec_ref(v_a_1525_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set_tag(v___x_1527_, 1);
lean_ctor_set(v___x_1527_, 0, v_a_1529_);
v___x_1531_ = v___x_1527_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v_a_1529_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
else
{
lean_object* v_a_1533_; lean_object* v___x_1535_; 
v_a_1533_ = lean_ctor_get(v_a_1525_, 0);
lean_inc(v_a_1533_);
lean_dec_ref(v_a_1525_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 0, v_a_1533_);
v___x_1535_ = v___x_1527_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_a_1533_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1539_; lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1547_; 
v_a_1538_ = lean_ctor_get(v___x_1524_, 0);
lean_inc(v_a_1538_);
lean_dec_ref(v___x_1524_);
v___x_1539_ = l_Lean_Server_RequestError_ofException(v_a_1538_);
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1542_ = v___x_1539_;
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1539_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1545_; 
if (v_isShared_1543_ == 0)
{
lean_ctor_set_tag(v___x_1542_, 1);
v___x_1545_ = v___x_1542_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_a_1540_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCommandElabM___redArg___boxed(lean_object* v_snap_1548_, lean_object* v_c_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_Lean_Server_RequestM_runCommandElabM___redArg(v_snap_1548_, v_c_1549_, v_a_1550_);
lean_dec_ref(v_a_1550_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCommandElabM(lean_object* v_00_u03b1_1553_, lean_object* v_snap_1554_, lean_object* v_c_1555_, lean_object* v_a_1556_){
_start:
{
lean_object* v___x_1558_; 
v___x_1558_ = l_Lean_Server_RequestM_runCommandElabM___redArg(v_snap_1554_, v_c_1555_, v_a_1556_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCommandElabM___boxed(lean_object* v_00_u03b1_1559_, lean_object* v_snap_1560_, lean_object* v_c_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lean_Server_RequestM_runCommandElabM(v_00_u03b1_1559_, v_snap_1560_, v_c_1561_, v_a_1562_);
lean_dec_ref(v_a_1562_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCoreM___redArg(lean_object* v_snap_1565_, lean_object* v_c_1566_, lean_object* v_a_1567_){
_start:
{
lean_object* v_doc_1569_; lean_object* v_toEditableDocumentCore_1570_; lean_object* v_meta_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v_doc_1569_ = lean_ctor_get(v_a_1567_, 1);
v_toEditableDocumentCore_1570_ = lean_ctor_get(v_doc_1569_, 0);
v_meta_1571_ = lean_ctor_get(v_toEditableDocumentCore_1570_, 0);
lean_inc_ref(v_a_1567_);
v___x_1572_ = lean_apply_1(v_c_1566_, v_a_1567_);
v___x_1573_ = l_Lean_Server_Snapshots_Snapshot_runCoreM___redArg(v_snap_1565_, v_meta_1571_, v___x_1572_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1586_; 
v_a_1574_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1586_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1576_ = v___x_1573_;
v_isShared_1577_ = v_isSharedCheck_1586_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1573_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1586_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
if (lean_obj_tag(v_a_1574_) == 0)
{
lean_object* v_a_1578_; lean_object* v___x_1580_; 
v_a_1578_ = lean_ctor_get(v_a_1574_, 0);
lean_inc(v_a_1578_);
lean_dec_ref(v_a_1574_);
if (v_isShared_1577_ == 0)
{
lean_ctor_set_tag(v___x_1576_, 1);
lean_ctor_set(v___x_1576_, 0, v_a_1578_);
v___x_1580_ = v___x_1576_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1578_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; 
v_a_1582_ = lean_ctor_get(v_a_1574_, 0);
lean_inc(v_a_1582_);
lean_dec_ref(v_a_1574_);
if (v_isShared_1577_ == 0)
{
lean_ctor_set(v___x_1576_, 0, v_a_1582_);
v___x_1584_ = v___x_1576_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v_a_1582_);
v___x_1584_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
return v___x_1584_;
}
}
}
}
else
{
lean_object* v_a_1587_; lean_object* v___x_1588_; lean_object* v_a_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1596_; 
v_a_1587_ = lean_ctor_get(v___x_1573_, 0);
lean_inc(v_a_1587_);
lean_dec_ref(v___x_1573_);
v___x_1588_ = l_Lean_Server_RequestError_ofException(v_a_1587_);
v_a_1589_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1596_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1591_ = v___x_1588_;
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_a_1589_);
lean_dec(v___x_1588_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1594_; 
if (v_isShared_1592_ == 0)
{
lean_ctor_set_tag(v___x_1591_, 1);
v___x_1594_ = v___x_1591_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_a_1589_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCoreM___redArg___boxed(lean_object* v_snap_1597_, lean_object* v_c_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = l_Lean_Server_RequestM_runCoreM___redArg(v_snap_1597_, v_c_1598_, v_a_1599_);
lean_dec_ref(v_a_1599_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCoreM(lean_object* v_00_u03b1_1602_, lean_object* v_snap_1603_, lean_object* v_c_1604_, lean_object* v_a_1605_){
_start:
{
lean_object* v___x_1607_; 
v___x_1607_ = l_Lean_Server_RequestM_runCoreM___redArg(v_snap_1603_, v_c_1604_, v_a_1605_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runCoreM___boxed(lean_object* v_00_u03b1_1608_, lean_object* v_snap_1609_, lean_object* v_c_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_){
_start:
{
lean_object* v_res_1613_; 
v_res_1613_ = l_Lean_Server_RequestM_runCoreM(v_00_u03b1_1608_, v_snap_1609_, v_c_1610_, v_a_1611_);
lean_dec_ref(v_a_1611_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runTermElabM___redArg(lean_object* v_snap_1614_, lean_object* v_c_1615_, lean_object* v_a_1616_){
_start:
{
lean_object* v_doc_1618_; lean_object* v_toEditableDocumentCore_1619_; lean_object* v_meta_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
v_doc_1618_ = lean_ctor_get(v_a_1616_, 1);
v_toEditableDocumentCore_1619_ = lean_ctor_get(v_doc_1618_, 0);
v_meta_1620_ = lean_ctor_get(v_toEditableDocumentCore_1619_, 0);
lean_inc_ref(v_a_1616_);
v___x_1621_ = lean_apply_1(v_c_1615_, v_a_1616_);
v___x_1622_ = l_Lean_Server_Snapshots_Snapshot_runTermElabM___redArg(v_snap_1614_, v_meta_1620_, v___x_1621_);
if (lean_obj_tag(v___x_1622_) == 0)
{
lean_object* v_a_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1635_; 
v_a_1623_ = lean_ctor_get(v___x_1622_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1622_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1625_ = v___x_1622_;
v_isShared_1626_ = v_isSharedCheck_1635_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_a_1623_);
lean_dec(v___x_1622_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1635_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
if (lean_obj_tag(v_a_1623_) == 0)
{
lean_object* v_a_1627_; lean_object* v___x_1629_; 
v_a_1627_ = lean_ctor_get(v_a_1623_, 0);
lean_inc(v_a_1627_);
lean_dec_ref(v_a_1623_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set_tag(v___x_1625_, 1);
lean_ctor_set(v___x_1625_, 0, v_a_1627_);
v___x_1629_ = v___x_1625_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_a_1627_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
else
{
lean_object* v_a_1631_; lean_object* v___x_1633_; 
v_a_1631_ = lean_ctor_get(v_a_1623_, 0);
lean_inc(v_a_1631_);
lean_dec_ref(v_a_1623_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 0, v_a_1631_);
v___x_1633_ = v___x_1625_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1631_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
else
{
lean_object* v_a_1636_; lean_object* v___x_1637_; lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1645_; 
v_a_1636_ = lean_ctor_get(v___x_1622_, 0);
lean_inc(v_a_1636_);
lean_dec_ref(v___x_1622_);
v___x_1637_ = l_Lean_Server_RequestError_ofException(v_a_1636_);
v_a_1638_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1640_ = v___x_1637_;
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1637_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
lean_ctor_set_tag(v___x_1640_, 1);
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1638_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runTermElabM___redArg___boxed(lean_object* v_snap_1646_, lean_object* v_c_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Lean_Server_RequestM_runTermElabM___redArg(v_snap_1646_, v_c_1647_, v_a_1648_);
lean_dec_ref(v_a_1648_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runTermElabM(lean_object* v_00_u03b1_1651_, lean_object* v_snap_1652_, lean_object* v_c_1653_, lean_object* v_a_1654_){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l_Lean_Server_RequestM_runTermElabM___redArg(v_snap_1652_, v_c_1653_, v_a_1654_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_runTermElabM___boxed(lean_object* v_00_u03b1_1657_, lean_object* v_snap_1658_, lean_object* v_c_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l_Lean_Server_RequestM_runTermElabM(v_00_u03b1_1657_, v_snap_1658_, v_c_1659_, v_a_1660_);
lean_dec_ref(v_a_1660_);
return v_res_1662_;
}
}
static lean_object* _init_l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__0(void){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = lean_mk_string_unchecked("{", 1, 1);
return v___x_1663_;
}
}
static lean_object* _init_l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__1(void){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = lean_mk_string_unchecked("\"id\":", 5, 5);
return v___x_1664_;
}
}
static lean_object* _init_l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__2(void){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = lean_mk_string_unchecked(",", 1, 1);
return v___x_1665_;
}
}
static lean_object* _init_l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__3(void){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = lean_mk_string_unchecked("\"jsonrpc\":\"2.0\",", 16, 16);
return v___x_1666_;
}
}
static lean_object* _init_l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__4(void){
_start:
{
lean_object* v___x_1667_; 
v___x_1667_ = lean_mk_string_unchecked("\"result\":", 9, 9);
return v___x_1667_;
}
}
static lean_object* _init_l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__5(void){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = lean_mk_string_unchecked("}", 1, 1);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_SerializedLspResponse_toSerializedMessage(lean_object* v_id_1669_, lean_object* v_r_1670_){
_start:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___y_1674_; 
v___x_1671_ = lean_obj_once(&l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__0, &l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__0_once, _init_l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__0);
v___x_1672_ = lean_obj_once(&l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__1, &l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__1_once, _init_l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__1);
switch(lean_obj_tag(v_id_1669_))
{
case 0:
{
lean_object* v_s_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1695_; 
v_s_1688_ = lean_ctor_get(v_id_1669_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v_id_1669_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1690_ = v_id_1669_;
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_s_1688_);
lean_dec(v_id_1669_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___x_1693_; 
if (v_isShared_1691_ == 0)
{
lean_ctor_set_tag(v___x_1690_, 3);
v___x_1693_ = v___x_1690_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_s_1688_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
v___y_1674_ = v___x_1693_;
goto v___jp_1673_;
}
}
}
case 1:
{
lean_object* v_n_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1703_; 
v_n_1696_ = lean_ctor_get(v_id_1669_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v_id_1669_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1698_ = v_id_1669_;
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_n_1696_);
lean_dec(v_id_1669_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1701_; 
if (v_isShared_1699_ == 0)
{
lean_ctor_set_tag(v___x_1698_, 2);
v___x_1701_ = v___x_1698_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_n_1696_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
v___y_1674_ = v___x_1701_;
goto v___jp_1673_;
}
}
}
default: 
{
lean_object* v___x_1704_; 
v___x_1704_ = lean_box(0);
v___y_1674_ = v___x_1704_;
goto v___jp_1673_;
}
}
v___jp_1673_:
{
lean_object* v_serialized_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v_serialized_1675_ = lean_ctor_get(v_r_1670_, 1);
v___x_1676_ = l_Lean_Json_compress(v___y_1674_);
v___x_1677_ = lean_string_append(v___x_1672_, v___x_1676_);
lean_dec_ref(v___x_1676_);
v___x_1678_ = lean_obj_once(&l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__2, &l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__2_once, _init_l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__2);
v___x_1679_ = lean_string_append(v___x_1677_, v___x_1678_);
v___x_1680_ = lean_string_append(v___x_1671_, v___x_1679_);
lean_dec_ref(v___x_1679_);
v___x_1681_ = lean_obj_once(&l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__3, &l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__3_once, _init_l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__3);
v___x_1682_ = lean_string_append(v___x_1680_, v___x_1681_);
v___x_1683_ = lean_obj_once(&l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__4, &l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__4_once, _init_l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__4);
v___x_1684_ = lean_string_append(v___x_1683_, v_serialized_1675_);
v___x_1685_ = lean_string_append(v___x_1682_, v___x_1684_);
lean_dec_ref(v___x_1684_);
v___x_1686_ = lean_obj_once(&l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__5, &l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__5_once, _init_l_Lean_Server_SerializedLspResponse_toSerializedMessage___closed__5);
v___x_1687_ = lean_string_append(v___x_1685_, v___x_1686_);
return v___x_1687_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_SerializedLspResponse_toSerializedMessage___boxed(lean_object* v_id_1705_, lean_object* v_r_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_Lean_Server_SerializedLspResponse_toSerializedMessage(v_id_1705_, v_r_1706_);
lean_dec_ref(v_r_1706_);
return v_res_1707_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1708_; 
v___x_1708_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1708_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1709_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2_, &l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2_);
v___x_1710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1709_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_initFn_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1712_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2_, &l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2_);
v___x_1713_ = lean_st_mk_ref(v___x_1712_);
v___x_1714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1713_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_initFn_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2____boxed(lean_object* v_a_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l___private_Lean_Server_Requests_0__Lean_Server_initFn_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2_();
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg___lam__0(lean_object* v_inst_1717_, lean_object* v_inst_1718_, lean_object* v_j_1719_){
_start:
{
lean_object* v___x_1720_; 
v___x_1720_ = l_Lean_Server_parseRequestParams___redArg(v_inst_1717_, v_j_1719_);
if (lean_obj_tag(v___x_1720_) == 0)
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec_ref(v_inst_1718_);
v_a_1721_ = lean_ctor_get(v___x_1720_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1720_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1720_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1720_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1721_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
else
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1737_; 
v_a_1729_ = lean_ctor_get(v___x_1720_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1720_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1731_ = v___x_1720_;
v_isShared_1732_ = v_isSharedCheck_1737_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1720_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1737_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1733_; lean_object* v___x_1735_; 
v___x_1733_ = lean_apply_1(v_inst_1718_, v_a_1729_);
if (v_isShared_1732_ == 0)
{
lean_ctor_set(v___x_1731_, 0, v___x_1733_);
v___x_1735_ = v___x_1731_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1733_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg___lam__1(lean_object* v_serialize_x3f_1738_, uint8_t v_a_1739_, lean_object* v_inst_1740_, lean_object* v_r_1741_){
_start:
{
if (lean_obj_tag(v_serialize_x3f_1738_) == 1)
{
lean_object* v_val_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
lean_dec_ref(v_inst_1740_);
v_val_1742_ = lean_ctor_get(v_serialize_x3f_1738_, 0);
lean_inc(v_val_1742_);
lean_dec_ref(v_serialize_x3f_1738_);
v___x_1743_ = lean_box(0);
v___x_1744_ = lean_apply_1(v_val_1742_, v_r_1741_);
v___x_1745_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1745_, 0, v___x_1743_);
lean_ctor_set(v___x_1745_, 1, v___x_1744_);
lean_ctor_set_uint8(v___x_1745_, sizeof(void*)*2, v_a_1739_);
return v___x_1745_;
}
else
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
lean_dec(v_serialize_x3f_1738_);
v___x_1746_ = lean_apply_1(v_inst_1740_, v_r_1741_);
lean_inc(v___x_1746_);
v___x_1747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1746_);
v___x_1748_ = l_Lean_Json_compress(v___x_1746_);
v___x_1749_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1749_, 0, v___x_1747_);
lean_ctor_set(v___x_1749_, 1, v___x_1748_);
lean_ctor_set_uint8(v___x_1749_, sizeof(void*)*2, v_a_1739_);
return v___x_1749_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg___lam__1___boxed(lean_object* v_serialize_x3f_1750_, lean_object* v_a_1751_, lean_object* v_inst_1752_, lean_object* v_r_1753_){
_start:
{
uint8_t v_a_1617__boxed_1754_; lean_object* v_res_1755_; 
v_a_1617__boxed_1754_ = lean_unbox(v_a_1751_);
v_res_1755_ = l_Lean_Server_registerLspRequestHandler___redArg___lam__1(v_serialize_x3f_1750_, v_a_1617__boxed_1754_, v_inst_1752_, v_r_1753_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg___lam__2(lean_object* v_inst_1756_, lean_object* v_handler_1757_, lean_object* v___f_1758_, lean_object* v_j_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v___x_1762_; 
v___x_1762_ = l_Lean_Server_RequestM_parseRequestParams___redArg(v_inst_1756_, v_j_1759_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_object* v_a_1763_; lean_object* v___x_1764_; 
v_a_1763_ = lean_ctor_get(v___x_1762_, 0);
lean_inc(v_a_1763_);
lean_dec_ref(v___x_1762_);
lean_inc_ref(v___y_1760_);
v___x_1764_ = lean_apply_3(v_handler_1757_, v_a_1763_, v___y_1760_, lean_box(0));
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1774_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1767_ = v___x_1764_;
v_isShared_1768_ = v_isSharedCheck_1774_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_dec(v___x_1764_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1774_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1772_; 
v___x_1769_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_1769_, 0, lean_box(0));
lean_closure_set(v___x_1769_, 1, lean_box(0));
lean_closure_set(v___x_1769_, 2, lean_box(0));
lean_closure_set(v___x_1769_, 3, v___f_1758_);
v___x_1770_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___x_1769_, v_a_1765_);
if (v_isShared_1768_ == 0)
{
lean_ctor_set(v___x_1767_, 0, v___x_1770_);
v___x_1772_ = v___x_1767_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v___x_1770_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
else
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1782_; 
lean_dec_ref(v___f_1758_);
v_a_1775_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1777_ = v___x_1764_;
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1764_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1780_; 
if (v_isShared_1778_ == 0)
{
v___x_1780_ = v___x_1777_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1775_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
}
else
{
lean_object* v_a_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1790_; 
lean_dec_ref(v___f_1758_);
lean_dec_ref(v_handler_1757_);
v_a_1783_ = lean_ctor_get(v___x_1762_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1785_ = v___x_1762_;
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_a_1783_);
lean_dec(v___x_1762_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1788_; 
if (v_isShared_1786_ == 0)
{
v___x_1788_ = v___x_1785_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_a_1783_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg___lam__2___boxed(lean_object* v_inst_1791_, lean_object* v_handler_1792_, lean_object* v___f_1793_, lean_object* v_j_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v_res_1797_; 
v_res_1797_ = l_Lean_Server_registerLspRequestHandler___redArg___lam__2(v_inst_1791_, v_handler_1792_, v___f_1793_, v_j_1794_, v___y_1795_);
lean_dec_ref(v___y_1795_);
return v_res_1797_;
}
}
static lean_object* _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__0(void){
_start:
{
lean_object* v___x_1798_; 
v___x_1798_ = lean_mk_string_unchecked("Failed to register LSP request handler for '", 44, 44);
return v___x_1798_;
}
}
static lean_object* _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__1(void){
_start:
{
lean_object* v___x_1799_; 
v___x_1799_ = lean_mk_string_unchecked("': only possible during initialization", 38, 38);
return v___x_1799_;
}
}
static lean_object* _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__2(void){
_start:
{
lean_object* v___x_1800_; 
v___x_1800_ = lean_alloc_closure((void*)(l_String_hash___boxed), 1, 0);
return v___x_1800_;
}
}
static lean_object* _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__3(void){
_start:
{
lean_object* v___x_1801_; lean_object* v___f_1802_; 
v___x_1801_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___f_1802_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1802_, 0, v___x_1801_);
return v___f_1802_;
}
}
static lean_object* _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__4(void){
_start:
{
lean_object* v___x_1803_; 
v___x_1803_ = lean_mk_string_unchecked("': already registered", 21, 21);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg(lean_object* v_method_1804_, lean_object* v_inst_1805_, lean_object* v_inst_1806_, lean_object* v_inst_1807_, lean_object* v_handler_1808_, lean_object* v_serialize_x3f_1809_){
_start:
{
lean_object* v___x_1811_; 
v___x_1811_ = l_Lean_initializing();
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1848_; 
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1814_ = v___x_1811_;
v_isShared_1815_ = v_isSharedCheck_1848_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1811_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1848_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
uint8_t v___x_1816_; 
v___x_1816_ = lean_unbox(v_a_1812_);
if (v___x_1816_ == 0)
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1823_; 
lean_dec(v_a_1812_);
lean_dec(v_serialize_x3f_1809_);
lean_dec_ref(v_handler_1808_);
lean_dec_ref(v_inst_1807_);
lean_dec_ref(v_inst_1806_);
lean_dec_ref(v_inst_1805_);
v___x_1817_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__0, &l_Lean_Server_registerLspRequestHandler___redArg___closed__0_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__0);
v___x_1818_ = lean_string_append(v___x_1817_, v_method_1804_);
lean_dec_ref(v_method_1804_);
v___x_1819_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__1, &l_Lean_Server_registerLspRequestHandler___redArg___closed__1_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__1);
v___x_1820_ = lean_string_append(v___x_1818_, v___x_1819_);
v___x_1821_ = lean_mk_io_user_error(v___x_1820_);
if (v_isShared_1815_ == 0)
{
lean_ctor_set_tag(v___x_1814_, 1);
lean_ctor_set(v___x_1814_, 0, v___x_1821_);
v___x_1823_ = v___x_1814_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
else
{
lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___f_1828_; uint8_t v___x_1829_; 
v___x_1825_ = l_Lean_Server_requestHandlers;
v___x_1826_ = lean_st_ref_get(v___x_1825_);
v___x_1827_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__2, &l_Lean_Server_registerLspRequestHandler___redArg___closed__2_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__2);
v___f_1828_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__3, &l_Lean_Server_registerLspRequestHandler___redArg___closed__3_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__3);
lean_inc_ref(v_method_1804_);
v___x_1829_ = l_Lean_PersistentHashMap_contains___redArg(v___f_1828_, v___x_1827_, v___x_1826_, v_method_1804_);
if (v___x_1829_ == 0)
{
lean_object* v___x_1830_; lean_object* v___f_1831_; lean_object* v___f_1832_; lean_object* v___f_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1830_ = lean_st_ref_take(v___x_1825_);
lean_inc_ref(v_inst_1805_);
v___f_1831_ = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1831_, 0, v_inst_1805_);
lean_closure_set(v___f_1831_, 1, v_inst_1806_);
v___f_1832_ = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1832_, 0, v_serialize_x3f_1809_);
lean_closure_set(v___f_1832_, 1, v_a_1812_);
lean_closure_set(v___f_1832_, 2, v_inst_1807_);
v___f_1833_ = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_1833_, 0, v_inst_1805_);
lean_closure_set(v___f_1833_, 1, v_handler_1808_);
lean_closure_set(v___f_1833_, 2, v___f_1832_);
v___x_1834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1834_, 0, v___f_1831_);
lean_ctor_set(v___x_1834_, 1, v___f_1833_);
v___x_1835_ = l_Lean_PersistentHashMap_insert___redArg(v___f_1828_, v___x_1827_, v___x_1830_, v_method_1804_, v___x_1834_);
v___x_1836_ = lean_st_ref_set(v___x_1825_, v___x_1835_);
if (v_isShared_1815_ == 0)
{
lean_ctor_set(v___x_1814_, 0, v___x_1836_);
v___x_1838_ = v___x_1814_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
else
{
lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1846_; 
lean_dec(v_a_1812_);
lean_dec(v_serialize_x3f_1809_);
lean_dec_ref(v_handler_1808_);
lean_dec_ref(v_inst_1807_);
lean_dec_ref(v_inst_1806_);
lean_dec_ref(v_inst_1805_);
v___x_1840_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__0, &l_Lean_Server_registerLspRequestHandler___redArg___closed__0_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__0);
v___x_1841_ = lean_string_append(v___x_1840_, v_method_1804_);
lean_dec_ref(v_method_1804_);
v___x_1842_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__4, &l_Lean_Server_registerLspRequestHandler___redArg___closed__4_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__4);
v___x_1843_ = lean_string_append(v___x_1841_, v___x_1842_);
v___x_1844_ = lean_mk_io_user_error(v___x_1843_);
if (v_isShared_1815_ == 0)
{
lean_ctor_set_tag(v___x_1814_, 1);
lean_ctor_set(v___x_1814_, 0, v___x_1844_);
v___x_1846_ = v___x_1814_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v___x_1844_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1856_; 
lean_dec(v_serialize_x3f_1809_);
lean_dec_ref(v_handler_1808_);
lean_dec_ref(v_inst_1807_);
lean_dec_ref(v_inst_1806_);
lean_dec_ref(v_inst_1805_);
lean_dec_ref(v_method_1804_);
v_a_1849_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1851_ = v___x_1811_;
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1811_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1854_; 
if (v_isShared_1852_ == 0)
{
v___x_1854_ = v___x_1851_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1849_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___redArg___boxed(lean_object* v_method_1857_, lean_object* v_inst_1858_, lean_object* v_inst_1859_, lean_object* v_inst_1860_, lean_object* v_handler_1861_, lean_object* v_serialize_x3f_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l_Lean_Server_registerLspRequestHandler___redArg(v_method_1857_, v_inst_1858_, v_inst_1859_, v_inst_1860_, v_handler_1861_, v_serialize_x3f_1862_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler(lean_object* v_method_1865_, lean_object* v_paramType_1866_, lean_object* v_inst_1867_, lean_object* v_inst_1868_, lean_object* v_respType_1869_, lean_object* v_inst_1870_, lean_object* v_handler_1871_, lean_object* v_serialize_x3f_1872_){
_start:
{
lean_object* v___x_1874_; 
v___x_1874_ = l_Lean_Server_registerLspRequestHandler___redArg(v_method_1865_, v_inst_1867_, v_inst_1868_, v_inst_1870_, v_handler_1871_, v_serialize_x3f_1872_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___boxed(lean_object* v_method_1875_, lean_object* v_paramType_1876_, lean_object* v_inst_1877_, lean_object* v_inst_1878_, lean_object* v_respType_1879_, lean_object* v_inst_1880_, lean_object* v_handler_1881_, lean_object* v_serialize_x3f_1882_, lean_object* v_a_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = l_Lean_Server_registerLspRequestHandler(v_method_1875_, v_paramType_1876_, v_inst_1877_, v_inst_1878_, v_respType_1879_, v_inst_1880_, v_handler_1881_, v_serialize_x3f_1882_);
return v_res_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1885_, lean_object* v_vals_1886_, lean_object* v_i_1887_, lean_object* v_k_1888_){
_start:
{
lean_object* v___x_1889_; uint8_t v___x_1890_; 
v___x_1889_ = lean_array_get_size(v_keys_1885_);
v___x_1890_ = lean_nat_dec_lt(v_i_1887_, v___x_1889_);
if (v___x_1890_ == 0)
{
lean_object* v___x_1891_; 
lean_dec(v_i_1887_);
v___x_1891_ = lean_box(0);
return v___x_1891_;
}
else
{
lean_object* v_k_x27_1892_; uint8_t v___x_1893_; 
v_k_x27_1892_ = lean_array_fget_borrowed(v_keys_1885_, v_i_1887_);
v___x_1893_ = lean_string_dec_eq(v_k_1888_, v_k_x27_1892_);
if (v___x_1893_ == 0)
{
lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1894_ = lean_unsigned_to_nat(1u);
v___x_1895_ = lean_nat_add(v_i_1887_, v___x_1894_);
lean_dec(v_i_1887_);
v_i_1887_ = v___x_1895_;
goto _start;
}
else
{
lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1897_ = lean_array_fget_borrowed(v_vals_1886_, v_i_1887_);
lean_dec(v_i_1887_);
lean_inc(v___x_1897_);
v___x_1898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1897_);
return v___x_1898_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1899_, lean_object* v_vals_1900_, lean_object* v_i_1901_, lean_object* v_k_1902_){
_start:
{
lean_object* v_res_1903_; 
v_res_1903_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0_spec__1___redArg(v_keys_1899_, v_vals_1900_, v_i_1901_, v_k_1902_);
lean_dec_ref(v_k_1902_);
lean_dec_ref(v_vals_1900_);
lean_dec_ref(v_keys_1899_);
return v_res_1903_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_1904_; size_t v___x_1905_; size_t v___x_1906_; 
v___x_1904_ = ((size_t)5ULL);
v___x_1905_ = ((size_t)1ULL);
v___x_1906_ = lean_usize_shift_left(v___x_1905_, v___x_1904_);
return v___x_1906_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1907_; size_t v___x_1908_; size_t v___x_1909_; 
v___x_1907_ = ((size_t)1ULL);
v___x_1908_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__0);
v___x_1909_ = lean_usize_sub(v___x_1908_, v___x_1907_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg(lean_object* v_x_1910_, size_t v_x_1911_, lean_object* v_x_1912_){
_start:
{
if (lean_obj_tag(v_x_1910_) == 0)
{
lean_object* v_es_1913_; lean_object* v___x_1914_; size_t v___x_1915_; size_t v___x_1916_; size_t v___x_1917_; lean_object* v_j_1918_; lean_object* v___x_1919_; 
v_es_1913_ = lean_ctor_get(v_x_1910_, 0);
v___x_1914_ = lean_box(2);
v___x_1915_ = ((size_t)5ULL);
v___x_1916_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__1);
v___x_1917_ = lean_usize_land(v_x_1911_, v___x_1916_);
v_j_1918_ = lean_usize_to_nat(v___x_1917_);
v___x_1919_ = lean_array_get_borrowed(v___x_1914_, v_es_1913_, v_j_1918_);
lean_dec(v_j_1918_);
switch(lean_obj_tag(v___x_1919_))
{
case 0:
{
lean_object* v_key_1920_; lean_object* v_val_1921_; uint8_t v___x_1922_; 
v_key_1920_ = lean_ctor_get(v___x_1919_, 0);
v_val_1921_ = lean_ctor_get(v___x_1919_, 1);
v___x_1922_ = lean_string_dec_eq(v_x_1912_, v_key_1920_);
if (v___x_1922_ == 0)
{
lean_object* v___x_1923_; 
v___x_1923_ = lean_box(0);
return v___x_1923_;
}
else
{
lean_object* v___x_1924_; 
lean_inc(v_val_1921_);
v___x_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1924_, 0, v_val_1921_);
return v___x_1924_;
}
}
case 1:
{
lean_object* v_node_1925_; size_t v___x_1926_; 
v_node_1925_ = lean_ctor_get(v___x_1919_, 0);
v___x_1926_ = lean_usize_shift_right(v_x_1911_, v___x_1915_);
v_x_1910_ = v_node_1925_;
v_x_1911_ = v___x_1926_;
goto _start;
}
default: 
{
lean_object* v___x_1928_; 
v___x_1928_ = lean_box(0);
return v___x_1928_;
}
}
}
else
{
lean_object* v_ks_1929_; lean_object* v_vs_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; 
v_ks_1929_ = lean_ctor_get(v_x_1910_, 0);
v_vs_1930_ = lean_ctor_get(v_x_1910_, 1);
v___x_1931_ = lean_unsigned_to_nat(0u);
v___x_1932_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0_spec__1___redArg(v_ks_1929_, v_vs_1930_, v___x_1931_, v_x_1912_);
return v___x_1932_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___boxed(lean_object* v_x_1933_, lean_object* v_x_1934_, lean_object* v_x_1935_){
_start:
{
size_t v_x_279__boxed_1936_; lean_object* v_res_1937_; 
v_x_279__boxed_1936_ = lean_unbox_usize(v_x_1934_);
lean_dec(v_x_1934_);
v_res_1937_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg(v_x_1933_, v_x_279__boxed_1936_, v_x_1935_);
lean_dec_ref(v_x_1935_);
lean_dec_ref(v_x_1933_);
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0___redArg(lean_object* v_x_1938_, lean_object* v_x_1939_){
_start:
{
uint64_t v___x_1940_; size_t v___x_1941_; lean_object* v___x_1942_; 
v___x_1940_ = lean_string_hash(v_x_1939_);
v___x_1941_ = lean_uint64_to_usize(v___x_1940_);
v___x_1942_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg(v_x_1938_, v___x_1941_, v_x_1939_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0___redArg___boxed(lean_object* v_x_1943_, lean_object* v_x_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0___redArg(v_x_1943_, v_x_1944_);
lean_dec_ref(v_x_1944_);
lean_dec_ref(v_x_1943_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_lookupLspRequestHandler(lean_object* v_method_1946_){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1948_ = l_Lean_Server_requestHandlers;
v___x_1949_ = lean_st_ref_get(v___x_1948_);
v___x_1950_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0___redArg(v___x_1949_, v_method_1946_);
lean_dec(v___x_1949_);
v___x_1951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1950_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_lookupLspRequestHandler___boxed(lean_object* v_method_1952_, lean_object* v_a_1953_){
_start:
{
lean_object* v_res_1954_; 
v_res_1954_ = l_Lean_Server_lookupLspRequestHandler(v_method_1952_);
lean_dec_ref(v_method_1952_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0(lean_object* v_00_u03b2_1955_, lean_object* v_x_1956_, lean_object* v_x_1957_){
_start:
{
lean_object* v___x_1958_; 
v___x_1958_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0___redArg(v_x_1956_, v_x_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0___boxed(lean_object* v_00_u03b2_1959_, lean_object* v_x_1960_, lean_object* v_x_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0(v_00_u03b2_1959_, v_x_1960_, v_x_1961_);
lean_dec_ref(v_x_1961_);
lean_dec_ref(v_x_1960_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0(lean_object* v_00_u03b2_1963_, lean_object* v_x_1964_, size_t v_x_1965_, lean_object* v_x_1966_){
_start:
{
lean_object* v___x_1967_; 
v___x_1967_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg(v_x_1964_, v_x_1965_, v_x_1966_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1968_, lean_object* v_x_1969_, lean_object* v_x_1970_, lean_object* v_x_1971_){
_start:
{
size_t v_x_363__boxed_1972_; lean_object* v_res_1973_; 
v_x_363__boxed_1972_ = lean_unbox_usize(v_x_1970_);
lean_dec(v_x_1970_);
v_res_1973_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0(v_00_u03b2_1968_, v_x_1969_, v_x_363__boxed_1972_, v_x_1971_);
lean_dec_ref(v_x_1971_);
lean_dec_ref(v_x_1969_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1974_, lean_object* v_keys_1975_, lean_object* v_vals_1976_, lean_object* v_heq_1977_, lean_object* v_i_1978_, lean_object* v_k_1979_){
_start:
{
lean_object* v___x_1980_; 
v___x_1980_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0_spec__1___redArg(v_keys_1975_, v_vals_1976_, v_i_1978_, v_k_1979_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1981_, lean_object* v_keys_1982_, lean_object* v_vals_1983_, lean_object* v_heq_1984_, lean_object* v_i_1985_, lean_object* v_k_1986_){
_start:
{
lean_object* v_res_1987_; 
v_res_1987_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0_spec__1(v_00_u03b2_1981_, v_keys_1982_, v_vals_1983_, v_heq_1984_, v_i_1985_, v_k_1986_);
lean_dec_ref(v_k_1986_);
lean_dec_ref(v_vals_1983_);
lean_dec_ref(v_keys_1982_);
return v_res_1987_;
}
}
static lean_object* _init_l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = lean_mk_string_unchecked("Failed to parse original LSP response for `", 43, 43);
return v___x_1988_;
}
}
static lean_object* _init_l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1989_; 
v___x_1989_ = lean_mk_string_unchecked("` when chaining: ", 17, 17);
return v___x_1989_;
}
}
static lean_object* _init_l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1990_; 
v___x_1990_ = lean_mk_string_unchecked("Failed to parse original LSP response JSON for `", 48, 48);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__0(lean_object* v_inst_1991_, lean_object* v_method_1992_, lean_object* v_x_1993_){
_start:
{
lean_object* v_response_1995_; 
if (lean_obj_tag(v_x_1993_) == 0)
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2026_; 
lean_dec_ref(v_inst_1991_);
v_a_2019_ = lean_ctor_get(v_x_1993_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v_x_1993_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2021_ = v_x_1993_;
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v_x_1993_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2024_; 
if (v_isShared_2022_ == 0)
{
v___x_2024_ = v___x_2021_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v_a_2019_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
else
{
lean_object* v_a_2027_; lean_object* v_response_x3f_2028_; 
v_a_2027_ = lean_ctor_get(v_x_1993_, 0);
lean_inc(v_a_2027_);
lean_dec_ref(v_x_1993_);
v_response_x3f_2028_ = lean_ctor_get(v_a_2027_, 0);
if (lean_obj_tag(v_response_x3f_2028_) == 0)
{
lean_object* v_serialized_2029_; lean_object* v___x_2030_; 
v_serialized_2029_ = lean_ctor_get(v_a_2027_, 1);
lean_inc_ref(v_serialized_2029_);
lean_dec(v_a_2027_);
v___x_2030_ = l_Lean_Json_parse(v_serialized_2029_);
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2044_; 
lean_dec_ref(v_inst_1991_);
v_a_2031_ = lean_ctor_get(v___x_2030_, 0);
v_isSharedCheck_2044_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2044_ == 0)
{
v___x_2033_ = v___x_2030_;
v_isShared_2034_ = v_isSharedCheck_2044_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2030_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2044_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2042_; 
v___x_2035_ = lean_obj_once(&l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__2, &l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__2_once, _init_l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__2);
v___x_2036_ = lean_string_append(v___x_2035_, v_method_1992_);
v___x_2037_ = lean_obj_once(&l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__1, &l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__1_once, _init_l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__1);
v___x_2038_ = lean_string_append(v___x_2036_, v___x_2037_);
v___x_2039_ = lean_string_append(v___x_2038_, v_a_2031_);
lean_dec(v_a_2031_);
v___x_2040_ = l_Lean_Server_RequestError_internalError(v___x_2039_);
if (v_isShared_2034_ == 0)
{
lean_ctor_set(v___x_2033_, 0, v___x_2040_);
v___x_2042_ = v___x_2033_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v___x_2040_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
return v___x_2042_;
}
}
}
else
{
lean_object* v_a_2045_; 
v_a_2045_ = lean_ctor_get(v___x_2030_, 0);
lean_inc(v_a_2045_);
lean_dec_ref(v___x_2030_);
v_response_1995_ = v_a_2045_;
goto v___jp_1994_;
}
}
else
{
lean_object* v_val_2046_; 
lean_inc_ref(v_response_x3f_2028_);
lean_dec(v_a_2027_);
v_val_2046_ = lean_ctor_get(v_response_x3f_2028_, 0);
lean_inc(v_val_2046_);
lean_dec_ref(v_response_x3f_2028_);
v_response_1995_ = v_val_2046_;
goto v___jp_1994_;
}
}
v___jp_1994_:
{
lean_object* v___x_1996_; 
v___x_1996_ = lean_apply_1(v_inst_1991_, v_response_1995_);
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v_a_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2010_; 
v_a_1997_ = lean_ctor_get(v___x_1996_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_1999_ = v___x_1996_;
v_isShared_2000_ = v_isSharedCheck_2010_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_a_1997_);
lean_dec(v___x_1996_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2010_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2008_; 
v___x_2001_ = lean_obj_once(&l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__0, &l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__0_once, _init_l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__0);
v___x_2002_ = lean_string_append(v___x_2001_, v_method_1992_);
v___x_2003_ = lean_obj_once(&l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__1, &l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__1_once, _init_l_Lean_Server_chainLspRequestHandler___redArg___lam__0___closed__1);
v___x_2004_ = lean_string_append(v___x_2002_, v___x_2003_);
v___x_2005_ = lean_string_append(v___x_2004_, v_a_1997_);
lean_dec(v_a_1997_);
v___x_2006_ = l_Lean_Server_RequestError_internalError(v___x_2005_);
if (v_isShared_2000_ == 0)
{
lean_ctor_set(v___x_1999_, 0, v___x_2006_);
v___x_2008_ = v___x_1999_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v___x_2006_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
return v___x_2008_;
}
}
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
v_a_2011_ = lean_ctor_get(v___x_1996_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_1996_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_1996_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__0___boxed(lean_object* v_inst_2047_, lean_object* v_method_2048_, lean_object* v_x_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l_Lean_Server_chainLspRequestHandler___redArg___lam__0(v_inst_2047_, v_method_2048_, v_x_2049_);
lean_dec_ref(v_method_2048_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__1(lean_object* v_inst_2051_, uint8_t v_a_2052_, lean_object* v_r_2053_){
_start:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2054_ = lean_apply_1(v_inst_2051_, v_r_2053_);
lean_inc(v___x_2054_);
v___x_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2054_);
v___x_2056_ = l_Lean_Json_compress(v___x_2054_);
v___x_2057_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2057_, 0, v___x_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
lean_ctor_set_uint8(v___x_2057_, sizeof(void*)*2, v_a_2052_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__1___boxed(lean_object* v_inst_2058_, lean_object* v_a_2059_, lean_object* v_r_2060_){
_start:
{
uint8_t v_a_2455__boxed_2061_; lean_object* v_res_2062_; 
v_a_2455__boxed_2061_ = lean_unbox(v_a_2059_);
v_res_2062_ = l_Lean_Server_chainLspRequestHandler___redArg___lam__1(v_inst_2058_, v_a_2455__boxed_2061_, v_r_2060_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__2(lean_object* v_handle_2063_, lean_object* v_inst_2064_, lean_object* v___f_2065_, lean_object* v_handler_2066_, lean_object* v___f_2067_, lean_object* v_j_2068_, lean_object* v___y_2069_){
_start:
{
lean_object* v___x_2071_; 
lean_inc_ref(v___y_2069_);
lean_inc(v_j_2068_);
v___x_2071_ = lean_apply_3(v_handle_2063_, v_j_2068_, v___y_2069_, lean_box(0));
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_object* v_a_2072_; lean_object* v___x_2073_; 
v_a_2072_ = lean_ctor_get(v___x_2071_, 0);
lean_inc(v_a_2072_);
lean_dec_ref(v___x_2071_);
v___x_2073_ = l_Lean_Server_RequestM_parseRequestParams___redArg(v_inst_2064_, v_j_2068_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v_a_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; 
v_a_2074_ = lean_ctor_get(v___x_2073_, 0);
lean_inc(v_a_2074_);
lean_dec_ref(v___x_2073_);
v___x_2075_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_2065_, v_a_2072_);
lean_inc_ref(v___y_2069_);
v___x_2076_ = lean_apply_4(v_handler_2066_, v_a_2074_, v___x_2075_, v___y_2069_, lean_box(0));
if (lean_obj_tag(v___x_2076_) == 0)
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2086_; 
v_a_2077_ = lean_ctor_get(v___x_2076_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2076_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_2079_ = v___x_2076_;
v_isShared_2080_ = v_isSharedCheck_2086_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2076_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2086_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2084_; 
v___x_2081_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_2081_, 0, lean_box(0));
lean_closure_set(v___x_2081_, 1, lean_box(0));
lean_closure_set(v___x_2081_, 2, lean_box(0));
lean_closure_set(v___x_2081_, 3, v___f_2067_);
v___x_2082_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___x_2081_, v_a_2077_);
if (v_isShared_2080_ == 0)
{
lean_ctor_set(v___x_2079_, 0, v___x_2082_);
v___x_2084_ = v___x_2079_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v___x_2082_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
}
else
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2094_; 
lean_dec_ref(v___f_2067_);
v_a_2087_ = lean_ctor_get(v___x_2076_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2076_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2089_ = v___x_2076_;
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2076_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2092_; 
if (v_isShared_2090_ == 0)
{
v___x_2092_ = v___x_2089_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_a_2087_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
}
else
{
lean_object* v_a_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2102_; 
lean_dec(v_a_2072_);
lean_dec_ref(v___f_2067_);
lean_dec_ref(v_handler_2066_);
lean_dec_ref(v___f_2065_);
v_a_2095_ = lean_ctor_get(v___x_2073_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2097_ = v___x_2073_;
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_a_2095_);
lean_dec(v___x_2073_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2100_; 
if (v_isShared_2098_ == 0)
{
v___x_2100_ = v___x_2097_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_a_2095_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
}
else
{
lean_dec(v_j_2068_);
lean_dec_ref(v___f_2067_);
lean_dec_ref(v_handler_2066_);
lean_dec_ref(v___f_2065_);
lean_dec_ref(v_inst_2064_);
return v___x_2071_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___lam__2___boxed(lean_object* v_handle_2103_, lean_object* v_inst_2104_, lean_object* v___f_2105_, lean_object* v_handler_2106_, lean_object* v___f_2107_, lean_object* v_j_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_){
_start:
{
lean_object* v_res_2111_; 
v_res_2111_ = l_Lean_Server_chainLspRequestHandler___redArg___lam__2(v_handle_2103_, v_inst_2104_, v___f_2105_, v_handler_2106_, v___f_2107_, v_j_2108_, v___y_2109_);
lean_dec_ref(v___y_2109_);
return v_res_2111_;
}
}
static lean_object* _init_l_Lean_Server_chainLspRequestHandler___redArg___closed__0(void){
_start:
{
lean_object* v___x_2112_; 
v___x_2112_ = lean_mk_string_unchecked("Failed to chain LSP request handler for '", 41, 41);
return v___x_2112_;
}
}
static lean_object* _init_l_Lean_Server_chainLspRequestHandler___redArg___closed__1(void){
_start:
{
lean_object* v___x_2113_; 
v___x_2113_ = lean_mk_string_unchecked("': no initial handler registered", 32, 32);
return v___x_2113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg(lean_object* v_method_2114_, lean_object* v_inst_2115_, lean_object* v_inst_2116_, lean_object* v_inst_2117_, lean_object* v_handler_2118_){
_start:
{
lean_object* v___x_2120_; 
v___x_2120_ = l_Lean_initializing();
if (lean_obj_tag(v___x_2120_) == 0)
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2170_; 
v_a_2121_ = lean_ctor_get(v___x_2120_, 0);
v_isSharedCheck_2170_ = !lean_is_exclusive(v___x_2120_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2123_ = v___x_2120_;
v_isShared_2124_ = v_isSharedCheck_2170_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2120_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2170_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
uint8_t v___x_2125_; 
v___x_2125_ = lean_unbox(v_a_2121_);
if (v___x_2125_ == 0)
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2132_; 
lean_dec(v_a_2121_);
lean_dec_ref(v_handler_2118_);
lean_dec_ref(v_inst_2117_);
lean_dec_ref(v_inst_2116_);
lean_dec_ref(v_inst_2115_);
v___x_2126_ = lean_obj_once(&l_Lean_Server_chainLspRequestHandler___redArg___closed__0, &l_Lean_Server_chainLspRequestHandler___redArg___closed__0_once, _init_l_Lean_Server_chainLspRequestHandler___redArg___closed__0);
v___x_2127_ = lean_string_append(v___x_2126_, v_method_2114_);
lean_dec_ref(v_method_2114_);
v___x_2128_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__1, &l_Lean_Server_registerLspRequestHandler___redArg___closed__1_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__1);
v___x_2129_ = lean_string_append(v___x_2127_, v___x_2128_);
v___x_2130_ = lean_mk_io_user_error(v___x_2129_);
if (v_isShared_2124_ == 0)
{
lean_ctor_set_tag(v___x_2123_, 1);
lean_ctor_set(v___x_2123_, 0, v___x_2130_);
v___x_2132_ = v___x_2123_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v___x_2130_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
else
{
lean_object* v___x_2134_; lean_object* v_a_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2169_; 
lean_del_object(v___x_2123_);
v___x_2134_ = l_Lean_Server_lookupLspRequestHandler(v_method_2114_);
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2137_ = v___x_2134_;
v_isShared_2138_ = v_isSharedCheck_2169_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_a_2135_);
lean_dec(v___x_2134_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2169_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
if (lean_obj_tag(v_a_2135_) == 1)
{
lean_object* v_val_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v_fileSource_2142_; lean_object* v_handle_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2160_; 
v_val_2139_ = lean_ctor_get(v_a_2135_, 0);
lean_inc(v_val_2139_);
lean_dec_ref(v_a_2135_);
v___x_2140_ = l_Lean_Server_requestHandlers;
v___x_2141_ = lean_st_ref_take(v___x_2140_);
v_fileSource_2142_ = lean_ctor_get(v_val_2139_, 0);
v_handle_2143_ = lean_ctor_get(v_val_2139_, 1);
v_isSharedCheck_2160_ = !lean_is_exclusive(v_val_2139_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2145_ = v_val_2139_;
v_isShared_2146_ = v_isSharedCheck_2160_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_handle_2143_);
lean_inc(v_fileSource_2142_);
lean_dec(v_val_2139_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2160_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___f_2147_; lean_object* v___x_2148_; lean_object* v___f_2149_; lean_object* v___f_2150_; lean_object* v___f_2151_; lean_object* v___x_2153_; 
lean_inc_ref(v_method_2114_);
v___f_2147_ = lean_alloc_closure((void*)(l_Lean_Server_chainLspRequestHandler___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2147_, 0, v_inst_2116_);
lean_closure_set(v___f_2147_, 1, v_method_2114_);
v___x_2148_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__2, &l_Lean_Server_registerLspRequestHandler___redArg___closed__2_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__2);
v___f_2149_ = lean_alloc_closure((void*)(l_Lean_Server_chainLspRequestHandler___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2149_, 0, v_inst_2117_);
lean_closure_set(v___f_2149_, 1, v_a_2121_);
v___f_2150_ = lean_alloc_closure((void*)(l_Lean_Server_chainLspRequestHandler___redArg___lam__2___boxed), 8, 5);
lean_closure_set(v___f_2150_, 0, v_handle_2143_);
lean_closure_set(v___f_2150_, 1, v_inst_2115_);
lean_closure_set(v___f_2150_, 2, v___f_2147_);
lean_closure_set(v___f_2150_, 3, v_handler_2118_);
lean_closure_set(v___f_2150_, 4, v___f_2149_);
v___f_2151_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__3, &l_Lean_Server_registerLspRequestHandler___redArg___closed__3_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__3);
if (v_isShared_2146_ == 0)
{
lean_ctor_set(v___x_2145_, 1, v___f_2150_);
v___x_2153_ = v___x_2145_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_fileSource_2142_);
lean_ctor_set(v_reuseFailAlloc_2159_, 1, v___f_2150_);
v___x_2153_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2157_; 
v___x_2154_ = l_Lean_PersistentHashMap_insert___redArg(v___f_2151_, v___x_2148_, v___x_2141_, v_method_2114_, v___x_2153_);
v___x_2155_ = lean_st_ref_set(v___x_2140_, v___x_2154_);
if (v_isShared_2138_ == 0)
{
lean_ctor_set(v___x_2137_, 0, v___x_2155_);
v___x_2157_ = v___x_2137_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v___x_2155_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
}
else
{
lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2167_; 
lean_dec(v_a_2135_);
lean_dec(v_a_2121_);
lean_dec_ref(v_handler_2118_);
lean_dec_ref(v_inst_2117_);
lean_dec_ref(v_inst_2116_);
lean_dec_ref(v_inst_2115_);
v___x_2161_ = lean_obj_once(&l_Lean_Server_chainLspRequestHandler___redArg___closed__0, &l_Lean_Server_chainLspRequestHandler___redArg___closed__0_once, _init_l_Lean_Server_chainLspRequestHandler___redArg___closed__0);
v___x_2162_ = lean_string_append(v___x_2161_, v_method_2114_);
lean_dec_ref(v_method_2114_);
v___x_2163_ = lean_obj_once(&l_Lean_Server_chainLspRequestHandler___redArg___closed__1, &l_Lean_Server_chainLspRequestHandler___redArg___closed__1_once, _init_l_Lean_Server_chainLspRequestHandler___redArg___closed__1);
v___x_2164_ = lean_string_append(v___x_2162_, v___x_2163_);
v___x_2165_ = lean_mk_io_user_error(v___x_2164_);
if (v_isShared_2138_ == 0)
{
lean_ctor_set_tag(v___x_2137_, 1);
lean_ctor_set(v___x_2137_, 0, v___x_2165_);
v___x_2167_ = v___x_2137_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2165_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
}
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2178_; 
lean_dec_ref(v_handler_2118_);
lean_dec_ref(v_inst_2117_);
lean_dec_ref(v_inst_2116_);
lean_dec_ref(v_inst_2115_);
lean_dec_ref(v_method_2114_);
v_a_2171_ = lean_ctor_get(v___x_2120_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2120_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2173_ = v___x_2120_;
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2120_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v___x_2176_; 
if (v_isShared_2174_ == 0)
{
v___x_2176_ = v___x_2173_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2171_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___redArg___boxed(lean_object* v_method_2179_, lean_object* v_inst_2180_, lean_object* v_inst_2181_, lean_object* v_inst_2182_, lean_object* v_handler_2183_, lean_object* v_a_2184_){
_start:
{
lean_object* v_res_2185_; 
v_res_2185_ = l_Lean_Server_chainLspRequestHandler___redArg(v_method_2179_, v_inst_2180_, v_inst_2181_, v_inst_2182_, v_handler_2183_);
return v_res_2185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler(lean_object* v_method_2186_, lean_object* v_paramType_2187_, lean_object* v_inst_2188_, lean_object* v_respType_2189_, lean_object* v_inst_2190_, lean_object* v_inst_2191_, lean_object* v_handler_2192_){
_start:
{
lean_object* v___x_2194_; 
v___x_2194_ = l_Lean_Server_chainLspRequestHandler___redArg(v_method_2186_, v_inst_2188_, v_inst_2190_, v_inst_2191_, v_handler_2192_);
return v___x_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainLspRequestHandler___boxed(lean_object* v_method_2195_, lean_object* v_paramType_2196_, lean_object* v_inst_2197_, lean_object* v_respType_2198_, lean_object* v_inst_2199_, lean_object* v_inst_2200_, lean_object* v_handler_2201_, lean_object* v_a_2202_){
_start:
{
lean_object* v_res_2203_; 
v_res_2203_ = l_Lean_Server_chainLspRequestHandler(v_method_2195_, v_paramType_2196_, v_inst_2197_, v_respType_2198_, v_inst_2199_, v_inst_2200_, v_handler_2201_);
return v_res_2203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_ctorIdx(lean_object* v_x_2204_){
_start:
{
if (lean_obj_tag(v_x_2204_) == 0)
{
lean_object* v___x_2205_; 
v___x_2205_ = lean_unsigned_to_nat(0u);
return v___x_2205_;
}
else
{
lean_object* v___x_2206_; 
v___x_2206_ = lean_unsigned_to_nat(1u);
return v___x_2206_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_ctorIdx___boxed(lean_object* v_x_2207_){
_start:
{
lean_object* v_res_2208_; 
v_res_2208_ = l_Lean_Server_RequestHandlerCompleteness_ctorIdx(v_x_2207_);
lean_dec(v_x_2207_);
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_ctorElim___redArg(lean_object* v_t_2209_, lean_object* v_k_2210_){
_start:
{
if (lean_obj_tag(v_t_2209_) == 0)
{
return v_k_2210_;
}
else
{
lean_object* v_refreshMethod_2211_; lean_object* v_refreshIntervalMs_2212_; lean_object* v___x_2213_; 
v_refreshMethod_2211_ = lean_ctor_get(v_t_2209_, 0);
lean_inc_ref(v_refreshMethod_2211_);
v_refreshIntervalMs_2212_ = lean_ctor_get(v_t_2209_, 1);
lean_inc(v_refreshIntervalMs_2212_);
lean_dec_ref(v_t_2209_);
v___x_2213_ = lean_apply_2(v_k_2210_, v_refreshMethod_2211_, v_refreshIntervalMs_2212_);
return v___x_2213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_ctorElim(lean_object* v_motive_2214_, lean_object* v_ctorIdx_2215_, lean_object* v_t_2216_, lean_object* v_h_2217_, lean_object* v_k_2218_){
_start:
{
lean_object* v___x_2219_; 
v___x_2219_ = l_Lean_Server_RequestHandlerCompleteness_ctorElim___redArg(v_t_2216_, v_k_2218_);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_ctorElim___boxed(lean_object* v_motive_2220_, lean_object* v_ctorIdx_2221_, lean_object* v_t_2222_, lean_object* v_h_2223_, lean_object* v_k_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_Lean_Server_RequestHandlerCompleteness_ctorElim(v_motive_2220_, v_ctorIdx_2221_, v_t_2222_, v_h_2223_, v_k_2224_);
lean_dec(v_ctorIdx_2221_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_complete_elim___redArg(lean_object* v_t_2226_, lean_object* v_complete_2227_){
_start:
{
lean_object* v___x_2228_; 
v___x_2228_ = l_Lean_Server_RequestHandlerCompleteness_ctorElim___redArg(v_t_2226_, v_complete_2227_);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_complete_elim(lean_object* v_motive_2229_, lean_object* v_t_2230_, lean_object* v_h_2231_, lean_object* v_complete_2232_){
_start:
{
lean_object* v___x_2233_; 
v___x_2233_ = l_Lean_Server_RequestHandlerCompleteness_ctorElim___redArg(v_t_2230_, v_complete_2232_);
return v___x_2233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_partial_elim___redArg(lean_object* v_t_2234_, lean_object* v_partial_2235_){
_start:
{
lean_object* v___x_2236_; 
v___x_2236_ = l_Lean_Server_RequestHandlerCompleteness_ctorElim___redArg(v_t_2234_, v_partial_2235_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestHandlerCompleteness_partial_elim(lean_object* v_motive_2237_, lean_object* v_t_2238_, lean_object* v_h_2239_, lean_object* v_partial_2240_){
_start:
{
lean_object* v___x_2241_; 
v___x_2241_ = l_Lean_Server_RequestHandlerCompleteness_ctorElim___redArg(v_t_2238_, v_partial_2240_);
return v___x_2241_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2242_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2243_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2_, &l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2_);
v___x_2244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2243_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_initFn_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2246_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2_, &l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Requests_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2_);
v___x_2247_ = lean_st_mk_ref(v___x_2246_);
v___x_2248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_initFn_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2____boxed(lean_object* v_a_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l___private_Lean_Server_Requests_0__Lean_Server_initFn_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2_();
return v_res_2250_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg___closed__0(void){
_start:
{
lean_object* v___x_2251_; 
v___x_2251_ = lean_mk_string_unchecked("Got invalid state type in stateful LSP request handler for ", 59, 59);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg(lean_object* v_method_2252_, lean_object* v_state_2253_, lean_object* v_inst_2254_){
_start:
{
lean_object* v___x_2256_; 
v___x_2256_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_state_2253_, v_inst_2254_);
if (lean_obj_tag(v___x_2256_) == 1)
{
lean_object* v_val_2257_; lean_object* v___x_2259_; uint8_t v_isShared_2260_; uint8_t v_isSharedCheck_2264_; 
v_val_2257_ = lean_ctor_get(v___x_2256_, 0);
v_isSharedCheck_2264_ = !lean_is_exclusive(v___x_2256_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2259_ = v___x_2256_;
v_isShared_2260_ = v_isSharedCheck_2264_;
goto v_resetjp_2258_;
}
else
{
lean_inc(v_val_2257_);
lean_dec(v___x_2256_);
v___x_2259_ = lean_box(0);
v_isShared_2260_ = v_isSharedCheck_2264_;
goto v_resetjp_2258_;
}
v_resetjp_2258_:
{
lean_object* v___x_2262_; 
if (v_isShared_2260_ == 0)
{
lean_ctor_set_tag(v___x_2259_, 0);
v___x_2262_ = v___x_2259_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v_val_2257_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
return v___x_2262_;
}
}
}
else
{
lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; 
lean_dec(v___x_2256_);
v___x_2265_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg___closed__0, &l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg___closed__0_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg___closed__0);
v___x_2266_ = lean_string_append(v___x_2265_, v_method_2252_);
v___x_2267_ = l_Lean_Server_RequestError_internalError(v___x_2266_);
v___x_2268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2267_);
return v___x_2268_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg___boxed(lean_object* v_method_2269_, lean_object* v_state_2270_, lean_object* v_inst_2271_, lean_object* v_a_2272_){
_start:
{
lean_object* v_res_2273_; 
v_res_2273_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg(v_method_2269_, v_state_2270_, v_inst_2271_);
lean_dec(v_inst_2271_);
lean_dec(v_state_2270_);
lean_dec_ref(v_method_2269_);
return v_res_2273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(lean_object* v_method_2274_, lean_object* v_state_2275_, lean_object* v_stateType_2276_, lean_object* v_inst_2277_, lean_object* v_a_2278_){
_start:
{
lean_object* v___x_2280_; 
v___x_2280_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg(v_method_2274_, v_state_2275_, v_inst_2277_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___boxed(lean_object* v_method_2281_, lean_object* v_state_2282_, lean_object* v_stateType_2283_, lean_object* v_inst_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(v_method_2281_, v_state_2282_, v_stateType_2283_, v_inst_2284_, v_a_2285_);
lean_dec_ref(v_a_2285_);
lean_dec(v_inst_2284_);
lean_dec(v_state_2282_);
lean_dec_ref(v_method_2281_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getIOState_x21___redArg(lean_object* v_method_2288_, lean_object* v_state_2289_, lean_object* v_inst_2290_){
_start:
{
lean_object* v___x_2292_; 
v___x_2292_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_state_2289_, v_inst_2290_);
if (lean_obj_tag(v___x_2292_) == 1)
{
lean_object* v_val_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
v_val_2293_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2292_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_val_2293_);
lean_dec(v___x_2292_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
lean_ctor_set_tag(v___x_2295_, 0);
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_val_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
else
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; 
lean_dec(v___x_2292_);
v___x_2301_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg___closed__0, &l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg___closed__0_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg___closed__0);
v___x_2302_ = lean_string_append(v___x_2301_, v_method_2288_);
v___x_2303_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
v___x_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
return v___x_2304_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getIOState_x21___redArg___boxed(lean_object* v_method_2305_, lean_object* v_state_2306_, lean_object* v_inst_2307_, lean_object* v_a_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = l___private_Lean_Server_Requests_0__Lean_Server_getIOState_x21___redArg(v_method_2305_, v_state_2306_, v_inst_2307_);
lean_dec(v_inst_2307_);
lean_dec(v_state_2306_);
lean_dec_ref(v_method_2305_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getIOState_x21(lean_object* v_method_2310_, lean_object* v_state_2311_, lean_object* v_stateType_2312_, lean_object* v_inst_2313_){
_start:
{
lean_object* v___x_2315_; 
v___x_2315_ = l___private_Lean_Server_Requests_0__Lean_Server_getIOState_x21___redArg(v_method_2310_, v_state_2311_, v_inst_2313_);
return v___x_2315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getIOState_x21___boxed(lean_object* v_method_2316_, lean_object* v_state_2317_, lean_object* v_stateType_2318_, lean_object* v_inst_2319_, lean_object* v_a_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = l___private_Lean_Server_Requests_0__Lean_Server_getIOState_x21(v_method_2316_, v_state_2317_, v_stateType_2318_, v_inst_2319_);
lean_dec(v_inst_2319_);
lean_dec(v_state_2317_);
lean_dec_ref(v_method_2316_);
return v_res_2321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__1(lean_object* v_inst_2322_, lean_object* v_method_2323_, lean_object* v_inst_2324_, lean_object* v_handler_2325_, lean_object* v_inst_2326_, lean_object* v_param_2327_, lean_object* v_state_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v___x_2331_; 
v___x_2331_ = l_Lean_Server_RequestM_parseRequestParams___redArg(v_inst_2322_, v_param_2327_);
if (lean_obj_tag(v___x_2331_) == 0)
{
lean_object* v_a_2332_; lean_object* v___x_2333_; 
v_a_2332_ = lean_ctor_get(v___x_2331_, 0);
lean_inc(v_a_2332_);
lean_dec_ref(v___x_2331_);
v___x_2333_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg(v_method_2323_, v_state_2328_, v_inst_2324_);
if (lean_obj_tag(v___x_2333_) == 0)
{
lean_object* v_a_2334_; lean_object* v___x_2335_; 
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
lean_inc(v_a_2334_);
lean_dec_ref(v___x_2333_);
lean_inc_ref(v___y_2329_);
v___x_2335_ = lean_apply_4(v_handler_2325_, v_a_2332_, v_a_2334_, v___y_2329_, lean_box(0));
if (lean_obj_tag(v___x_2335_) == 0)
{
lean_object* v_a_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2359_; 
v_a_2336_ = lean_ctor_get(v___x_2335_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2335_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2338_ = v___x_2335_;
v_isShared_2339_ = v_isSharedCheck_2359_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_a_2336_);
lean_dec(v___x_2335_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2359_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v_fst_2340_; lean_object* v_snd_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2358_; 
v_fst_2340_ = lean_ctor_get(v_a_2336_, 0);
v_snd_2341_ = lean_ctor_get(v_a_2336_, 1);
v_isSharedCheck_2358_ = !lean_is_exclusive(v_a_2336_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2343_ = v_a_2336_;
v_isShared_2344_ = v_isSharedCheck_2358_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_snd_2341_);
lean_inc(v_fst_2340_);
lean_dec(v_a_2336_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2358_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v_response_2345_; uint8_t v_isComplete_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2352_; 
v_response_2345_ = lean_ctor_get(v_fst_2340_, 0);
lean_inc(v_response_2345_);
v_isComplete_2346_ = lean_ctor_get_uint8(v_fst_2340_, sizeof(void*)*1);
lean_dec(v_fst_2340_);
v___x_2347_ = lean_apply_1(v_inst_2326_, v_response_2345_);
lean_inc(v___x_2347_);
v___x_2348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
v___x_2349_ = l_Lean_Json_compress(v___x_2347_);
v___x_2350_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2350_, 0, v___x_2348_);
lean_ctor_set(v___x_2350_, 1, v___x_2349_);
lean_ctor_set_uint8(v___x_2350_, sizeof(void*)*2, v_isComplete_2346_);
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 0, v_inst_2324_);
v___x_2352_ = v___x_2343_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_inst_2324_);
lean_ctor_set(v_reuseFailAlloc_2357_, 1, v_snd_2341_);
v___x_2352_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
lean_object* v___x_2353_; lean_object* v___x_2355_; 
v___x_2353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2350_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
if (v_isShared_2339_ == 0)
{
lean_ctor_set(v___x_2338_, 0, v___x_2353_);
v___x_2355_ = v___x_2338_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v___x_2353_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
}
else
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2367_; 
lean_dec_ref(v_inst_2326_);
lean_dec(v_inst_2324_);
v_a_2360_ = lean_ctor_get(v___x_2335_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2335_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2362_ = v___x_2335_;
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2335_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2365_; 
if (v_isShared_2363_ == 0)
{
v___x_2365_ = v___x_2362_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_a_2360_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2375_; 
lean_dec(v_a_2332_);
lean_dec_ref(v_inst_2326_);
lean_dec_ref(v_handler_2325_);
lean_dec(v_inst_2324_);
v_a_2368_ = lean_ctor_get(v___x_2333_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2370_ = v___x_2333_;
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2333_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_a_2368_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
lean_dec_ref(v_inst_2326_);
lean_dec_ref(v_handler_2325_);
lean_dec(v_inst_2324_);
v_a_2376_ = lean_ctor_get(v___x_2331_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2331_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2331_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2331_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__1___boxed(lean_object* v_inst_2384_, lean_object* v_method_2385_, lean_object* v_inst_2386_, lean_object* v_handler_2387_, lean_object* v_inst_2388_, lean_object* v_param_2389_, lean_object* v_state_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__1(v_inst_2384_, v_method_2385_, v_inst_2386_, v_handler_2387_, v_inst_2388_, v_param_2389_, v_state_2390_, v___y_2391_);
lean_dec_ref(v___y_2391_);
lean_dec(v_state_2390_);
lean_dec_ref(v_method_2385_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__0(lean_object* v_method_2394_, lean_object* v_inst_2395_, lean_object* v_onDidChange_2396_, lean_object* v_param_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg(v_method_2394_, v___y_2398_, v_inst_2395_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; lean_object* v___x_2403_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2402_);
lean_dec_ref(v___x_2401_);
lean_inc_ref(v___y_2399_);
v___x_2403_ = lean_apply_4(v_onDidChange_2396_, v_param_2397_, v_a_2402_, v___y_2399_, lean_box(0));
if (lean_obj_tag(v___x_2403_) == 0)
{
lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2422_; 
v_a_2404_ = lean_ctor_get(v___x_2403_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2403_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2406_ = v___x_2403_;
v_isShared_2407_ = v_isSharedCheck_2422_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v___x_2403_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2422_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v_snd_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2420_; 
v_snd_2408_ = lean_ctor_get(v_a_2404_, 1);
v_isSharedCheck_2420_ = !lean_is_exclusive(v_a_2404_);
if (v_isSharedCheck_2420_ == 0)
{
lean_object* v_unused_2421_; 
v_unused_2421_ = lean_ctor_get(v_a_2404_, 0);
lean_dec(v_unused_2421_);
v___x_2410_ = v_a_2404_;
v_isShared_2411_ = v_isSharedCheck_2420_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_snd_2408_);
lean_dec(v_a_2404_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2420_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___x_2413_; 
if (v_isShared_2411_ == 0)
{
lean_ctor_set(v___x_2410_, 0, v_inst_2395_);
v___x_2413_ = v___x_2410_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v_inst_2395_);
lean_ctor_set(v_reuseFailAlloc_2419_, 1, v_snd_2408_);
v___x_2413_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2417_; 
v___x_2414_ = lean_box(0);
v___x_2415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2415_, 0, v___x_2414_);
lean_ctor_set(v___x_2415_, 1, v___x_2413_);
if (v_isShared_2407_ == 0)
{
lean_ctor_set(v___x_2406_, 0, v___x_2415_);
v___x_2417_ = v___x_2406_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v___x_2415_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
return v___x_2417_;
}
}
}
}
}
else
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2430_; 
lean_dec(v_inst_2395_);
v_a_2423_ = lean_ctor_get(v___x_2403_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2403_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2425_ = v___x_2403_;
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2403_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2428_; 
if (v_isShared_2426_ == 0)
{
v___x_2428_ = v___x_2425_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_a_2423_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
}
else
{
lean_object* v_a_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2438_; 
lean_dec_ref(v_param_2397_);
lean_dec_ref(v_onDidChange_2396_);
lean_dec(v_inst_2395_);
v_a_2431_ = lean_ctor_get(v___x_2401_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2433_ = v___x_2401_;
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_a_2431_);
lean_dec(v___x_2401_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2436_; 
if (v_isShared_2434_ == 0)
{
v___x_2436_ = v___x_2433_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_a_2431_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__0___boxed(lean_object* v_method_2439_, lean_object* v_inst_2440_, lean_object* v_onDidChange_2441_, lean_object* v_param_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__0(v_method_2439_, v_inst_2440_, v_onDidChange_2441_, v_param_2442_, v___y_2443_, v___y_2444_);
lean_dec_ref(v___y_2444_);
lean_dec(v___y_2443_);
lean_dec_ref(v_method_2439_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__2(lean_object* v___x_2447_, lean_object* v_x_2448_){
_start:
{
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__2___boxed(lean_object* v___x_2449_, lean_object* v_x_2450_){
_start:
{
lean_object* v_res_2451_; 
v_res_2451_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__2(v___x_2449_, v_x_2450_);
lean_dec_ref(v_x_2450_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__3(lean_object* v___x_2452_, lean_object* v_x_2453_){
_start:
{
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__3___boxed(lean_object* v___x_2454_, lean_object* v_x_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__3(v___x_2454_, v_x_2455_);
lean_dec_ref(v_x_2455_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__4(lean_object* v_val_2457_, lean_object* v___f_2458_, lean_object* v_param_2459_, lean_object* v_x_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2463_ = lean_st_ref_get(v_val_2457_);
lean_inc_ref(v___y_2461_);
v___x_2464_ = lean_apply_4(v___f_2458_, v_param_2459_, v___x_2463_, v___y_2461_, lean_box(0));
if (lean_obj_tag(v___x_2464_) == 0)
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2475_; 
v_a_2465_ = lean_ctor_get(v___x_2464_, 0);
v_isSharedCheck_2475_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2467_ = v___x_2464_;
v_isShared_2468_ = v_isSharedCheck_2475_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2464_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2475_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v_fst_2469_; lean_object* v_snd_2470_; lean_object* v___x_2471_; lean_object* v___x_2473_; 
v_fst_2469_ = lean_ctor_get(v_a_2465_, 0);
lean_inc(v_fst_2469_);
v_snd_2470_ = lean_ctor_get(v_a_2465_, 1);
lean_inc(v_snd_2470_);
lean_dec(v_a_2465_);
v___x_2471_ = lean_st_ref_set(v_val_2457_, v_snd_2470_);
if (v_isShared_2468_ == 0)
{
lean_ctor_set(v___x_2467_, 0, v_fst_2469_);
v___x_2473_ = v___x_2467_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_fst_2469_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
return v___x_2473_;
}
}
}
else
{
lean_object* v_a_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2483_; 
v_a_2476_ = lean_ctor_get(v___x_2464_, 0);
v_isSharedCheck_2483_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2483_ == 0)
{
v___x_2478_ = v___x_2464_;
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_a_2476_);
lean_dec(v___x_2464_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
lean_object* v___x_2481_; 
if (v_isShared_2479_ == 0)
{
v___x_2481_ = v___x_2478_;
goto v_reusejp_2480_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_a_2476_);
v___x_2481_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2480_;
}
v_reusejp_2480_:
{
return v___x_2481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__4___boxed(lean_object* v_val_2484_, lean_object* v___f_2485_, lean_object* v_param_2486_, lean_object* v_x_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__4(v_val_2484_, v___f_2485_, v_param_2486_, v_x_2487_, v___y_2488_);
lean_dec_ref(v___y_2488_);
lean_dec(v_val_2484_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__5(lean_object* v___f_2491_, lean_object* v___f_2492_, lean_object* v_lastTask_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_){
_start:
{
lean_object* v___x_2497_; lean_object* v_a_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2507_; 
v___x_2497_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v_lastTask_2493_, v___f_2491_, v___y_2495_);
v_a_2498_ = lean_ctor_get(v___x_2497_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2497_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2500_ = v___x_2497_;
v_isShared_2501_ = v_isSharedCheck_2507_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_a_2498_);
lean_dec(v___x_2497_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2507_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2505_; 
lean_inc(v_a_2498_);
v___x_2502_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_2492_, v_a_2498_);
v___x_2503_ = lean_st_ref_set(v___y_2494_, v___x_2502_);
if (v_isShared_2501_ == 0)
{
v___x_2505_ = v___x_2500_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_a_2498_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__5___boxed(lean_object* v___f_2508_, lean_object* v___f_2509_, lean_object* v_lastTask_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v_res_2514_; 
v_res_2514_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__5(v___f_2508_, v___f_2509_, v_lastTask_2510_, v___y_2511_, v___y_2512_);
lean_dec_ref(v___y_2512_);
lean_dec(v___y_2511_);
return v_res_2514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__6(lean_object* v_val_2515_, lean_object* v___f_2516_, lean_object* v___f_2517_, lean_object* v___f_2518_, lean_object* v___x_2519_, lean_object* v___f_2520_, lean_object* v___f_2521_, lean_object* v_val_2522_, lean_object* v_param_2523_, lean_object* v___y_2524_){
_start:
{
lean_object* v___f_2526_; lean_object* v___f_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_9069__overap_2530_; lean_object* v___x_2531_; 
v___f_2526_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__4___boxed), 6, 3);
lean_closure_set(v___f_2526_, 0, v_val_2515_);
lean_closure_set(v___f_2526_, 1, v___f_2516_);
lean_closure_set(v___f_2526_, 2, v_param_2523_);
v___f_2527_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__5___boxed), 6, 2);
lean_closure_set(v___f_2527_, 0, v___f_2526_);
lean_closure_set(v___f_2527_, 1, v___f_2517_);
v___x_2528_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_2528_, 0, lean_box(0));
lean_closure_set(v___x_2528_, 1, lean_box(0));
lean_closure_set(v___x_2528_, 2, lean_box(0));
lean_closure_set(v___x_2528_, 3, v___f_2518_);
lean_inc_ref(v___x_2519_);
v___x_2529_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__13___boxed), 9, 8);
lean_closure_set(v___x_2529_, 0, lean_box(0));
lean_closure_set(v___x_2529_, 1, lean_box(0));
lean_closure_set(v___x_2529_, 2, lean_box(0));
lean_closure_set(v___x_2529_, 3, v___x_2519_);
lean_closure_set(v___x_2529_, 4, lean_box(0));
lean_closure_set(v___x_2529_, 5, lean_box(0));
lean_closure_set(v___x_2529_, 6, v___x_2528_);
lean_closure_set(v___x_2529_, 7, v___f_2527_);
v___x_9069__overap_2530_ = l_Std_Mutex_atomically___redArg(v___x_2519_, v___f_2520_, v___f_2521_, v_val_2522_, v___x_2529_);
lean_inc_ref(v___y_2524_);
v___x_2531_ = lean_apply_2(v___x_9069__overap_2530_, v___y_2524_, lean_box(0));
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__6___boxed(lean_object* v_val_2532_, lean_object* v___f_2533_, lean_object* v___f_2534_, lean_object* v___f_2535_, lean_object* v___x_2536_, lean_object* v___f_2537_, lean_object* v___f_2538_, lean_object* v_val_2539_, lean_object* v_param_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__6(v_val_2532_, v___f_2533_, v___f_2534_, v___f_2535_, v___x_2536_, v___f_2537_, v___f_2538_, v_val_2539_, v_param_2540_, v___y_2541_);
lean_dec_ref(v___y_2541_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__7(lean_object* v_val_2544_, lean_object* v___f_2545_, lean_object* v_param_2546_, lean_object* v_x_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = lean_st_ref_get(v_val_2544_);
lean_inc_ref(v___y_2548_);
v___x_2551_ = lean_apply_4(v___f_2545_, v_param_2546_, v___x_2550_, v___y_2548_, lean_box(0));
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v_a_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2561_; 
v_a_2552_ = lean_ctor_get(v___x_2551_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2551_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2554_ = v___x_2551_;
v_isShared_2555_ = v_isSharedCheck_2561_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_a_2552_);
lean_dec(v___x_2551_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2561_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v_snd_2556_; lean_object* v___x_2557_; lean_object* v___x_2559_; 
v_snd_2556_ = lean_ctor_get(v_a_2552_, 1);
lean_inc(v_snd_2556_);
lean_dec(v_a_2552_);
v___x_2557_ = lean_st_ref_set(v_val_2544_, v_snd_2556_);
if (v_isShared_2555_ == 0)
{
lean_ctor_set(v___x_2554_, 0, v___x_2557_);
v___x_2559_ = v___x_2554_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v___x_2557_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
v_a_2562_ = lean_ctor_get(v___x_2551_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2551_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2551_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2551_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__7___boxed(lean_object* v_val_2570_, lean_object* v___f_2571_, lean_object* v_param_2572_, lean_object* v_x_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__7(v_val_2570_, v___f_2571_, v_param_2572_, v_x_2573_, v___y_2574_);
lean_dec_ref(v___y_2574_);
lean_dec(v_val_2570_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__8(lean_object* v___f_2577_, lean_object* v___f_2578_, lean_object* v_lastTask_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_){
_start:
{
lean_object* v___x_2583_; lean_object* v_a_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2593_; 
v___x_2583_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v_lastTask_2579_, v___f_2577_, v___y_2581_);
v_a_2584_ = lean_ctor_get(v___x_2583_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v___x_2583_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2586_ = v___x_2583_;
v_isShared_2587_ = v_isSharedCheck_2593_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_a_2584_);
lean_dec(v___x_2583_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2593_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2591_; 
v___x_2588_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_2578_, v_a_2584_);
v___x_2589_ = lean_st_ref_set(v___y_2580_, v___x_2588_);
if (v_isShared_2587_ == 0)
{
lean_ctor_set(v___x_2586_, 0, v___x_2589_);
v___x_2591_ = v___x_2586_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v___x_2589_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
return v___x_2591_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__8___boxed(lean_object* v___f_2594_, lean_object* v___f_2595_, lean_object* v_lastTask_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
lean_object* v_res_2600_; 
v_res_2600_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__8(v___f_2594_, v___f_2595_, v_lastTask_2596_, v___y_2597_, v___y_2598_);
lean_dec_ref(v___y_2598_);
lean_dec(v___y_2597_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__9(lean_object* v_val_2601_, lean_object* v___f_2602_, lean_object* v___f_2603_, lean_object* v___f_2604_, lean_object* v___x_2605_, lean_object* v___f_2606_, lean_object* v___f_2607_, lean_object* v_val_2608_, lean_object* v_param_2609_, lean_object* v___y_2610_){
_start:
{
lean_object* v___f_2612_; lean_object* v___f_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_9120__overap_2616_; lean_object* v___x_2617_; 
v___f_2612_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__7___boxed), 6, 3);
lean_closure_set(v___f_2612_, 0, v_val_2601_);
lean_closure_set(v___f_2612_, 1, v___f_2602_);
lean_closure_set(v___f_2612_, 2, v_param_2609_);
v___f_2613_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__8___boxed), 6, 2);
lean_closure_set(v___f_2613_, 0, v___f_2612_);
lean_closure_set(v___f_2613_, 1, v___f_2603_);
v___x_2614_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_2614_, 0, lean_box(0));
lean_closure_set(v___x_2614_, 1, lean_box(0));
lean_closure_set(v___x_2614_, 2, lean_box(0));
lean_closure_set(v___x_2614_, 3, v___f_2604_);
lean_inc_ref(v___x_2605_);
v___x_2615_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonad___aux__13___boxed), 9, 8);
lean_closure_set(v___x_2615_, 0, lean_box(0));
lean_closure_set(v___x_2615_, 1, lean_box(0));
lean_closure_set(v___x_2615_, 2, lean_box(0));
lean_closure_set(v___x_2615_, 3, v___x_2605_);
lean_closure_set(v___x_2615_, 4, lean_box(0));
lean_closure_set(v___x_2615_, 5, lean_box(0));
lean_closure_set(v___x_2615_, 6, v___x_2614_);
lean_closure_set(v___x_2615_, 7, v___f_2613_);
v___x_9120__overap_2616_ = l_Std_Mutex_atomically___redArg(v___x_2605_, v___f_2606_, v___f_2607_, v_val_2608_, v___x_2615_);
lean_inc_ref(v___y_2610_);
v___x_2617_ = lean_apply_2(v___x_9120__overap_2616_, v___y_2610_, lean_box(0));
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__9___boxed(lean_object* v_val_2618_, lean_object* v___f_2619_, lean_object* v___f_2620_, lean_object* v___f_2621_, lean_object* v___x_2622_, lean_object* v___f_2623_, lean_object* v___f_2624_, lean_object* v_val_2625_, lean_object* v_param_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_){
_start:
{
lean_object* v_res_2629_; 
v_res_2629_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__9(v_val_2618_, v___f_2619_, v___f_2620_, v___f_2621_, v___x_2622_, v___f_2623_, v___f_2624_, v_val_2625_, v_param_2626_, v___y_2627_);
lean_dec_ref(v___y_2627_);
return v_res_2629_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__0(void){
_start:
{
lean_object* v___x_2630_; 
v___x_2630_ = l_instMonadEIO(lean_box(0));
return v___x_2630_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__1(void){
_start:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2631_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__0, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__0_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__0);
v___x_2632_ = l_ReaderT_instMonad___redArg(v___x_2631_);
return v___x_2632_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__2(void){
_start:
{
lean_object* v___x_2633_; 
v___x_2633_ = lean_mk_string_unchecked("Failed to register stateful LSP request handler for '", 53, 53);
return v___x_2633_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__3(void){
_start:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2634_ = lean_box(0);
v___x_2635_ = lean_task_pure(v___x_2634_);
return v___x_2635_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__4(void){
_start:
{
lean_object* v___f_2636_; 
v___f_2636_ = lean_alloc_closure((void*)(l_instMonadLiftBaseIOEIO___lam__0___boxed), 3, 0);
return v___f_2636_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__5(void){
_start:
{
lean_object* v___f_2637_; 
v___f_2637_ = lean_alloc_closure((void*)(l_instMonadLiftT___lam__0___boxed), 2, 0);
return v___f_2637_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__6(void){
_start:
{
lean_object* v___f_2638_; lean_object* v___f_2639_; lean_object* v___f_2640_; 
v___f_2638_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__4, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__4_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__4);
v___f_2639_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__5, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__5_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__5);
v___f_2640_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2640_, 0, v___f_2639_);
lean_closure_set(v___f_2640_, 1, v___f_2638_);
return v___f_2640_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__7(void){
_start:
{
lean_object* v___f_2641_; 
v___f_2641_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___lam__0___boxed), 3, 0);
return v___f_2641_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__8(void){
_start:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2642_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__0, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__0_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__0);
v___x_2643_ = lean_alloc_closure((void*)(l_ExceptT_lift), 5, 3);
lean_closure_set(v___x_2643_, 0, lean_box(0));
lean_closure_set(v___x_2643_, 1, lean_box(0));
lean_closure_set(v___x_2643_, 2, v___x_2642_);
return v___x_2643_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__9(void){
_start:
{
lean_object* v___x_2644_; lean_object* v___f_2645_; lean_object* v___f_2646_; 
v___x_2644_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__8, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__8_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__8);
v___f_2645_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__6, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__6_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__6);
v___f_2646_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2646_, 0, v___f_2645_);
lean_closure_set(v___f_2646_, 1, v___x_2644_);
return v___f_2646_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__10(void){
_start:
{
lean_object* v___f_2647_; lean_object* v___f_2648_; lean_object* v___f_2649_; 
v___f_2647_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__7, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__7_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__7);
v___f_2648_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__9, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__9_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__9);
v___f_2649_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2649_, 0, v___f_2648_);
lean_closure_set(v___f_2649_, 1, v___f_2647_);
return v___f_2649_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__11(void){
_start:
{
lean_object* v___f_2650_; lean_object* v___f_2651_; lean_object* v___f_2652_; 
v___f_2650_ = lean_obj_once(&l_Lean_Server_instMonadLiftCancellableMRequestM___closed__0, &l_Lean_Server_instMonadLiftCancellableMRequestM___closed__0_once, _init_l_Lean_Server_instMonadLiftCancellableMRequestM___closed__0);
v___f_2651_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__10, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__10_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__10);
v___f_2652_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2652_, 0, v___f_2651_);
lean_closure_set(v___f_2652_, 1, v___f_2650_);
return v___f_2652_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__12(void){
_start:
{
lean_object* v___x_2653_; 
v___x_2653_ = lean_alloc_closure((void*)(l_instMonadFinallyEIO___aux__1___boxed), 6, 1);
lean_closure_set(v___x_2653_, 0, lean_box(0));
return v___x_2653_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__13(void){
_start:
{
lean_object* v___x_2654_; lean_object* v___f_2655_; 
v___x_2654_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__12, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__12_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__12);
v___f_2655_ = lean_alloc_closure((void*)(l_ReaderT_tryFinally___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2655_, 0, v___x_2654_);
return v___f_2655_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__14(void){
_start:
{
lean_object* v___f_2656_; 
v___f_2656_ = lean_alloc_closure((void*)(l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed), 3, 0);
return v___f_2656_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__15(void){
_start:
{
lean_object* v___f_2657_; lean_object* v___f_2658_; lean_object* v___f_2659_; 
v___f_2657_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__14, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__14_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__14);
v___f_2658_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__5, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__5_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__5);
v___f_2659_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2659_, 0, v___f_2658_);
lean_closure_set(v___f_2659_, 1, v___f_2657_);
return v___f_2659_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__16(void){
_start:
{
lean_object* v___f_2660_; lean_object* v___f_2661_; lean_object* v___f_2662_; 
v___f_2660_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__4, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__4_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__4);
v___f_2661_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__15, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__15_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__15);
v___f_2662_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2662_, 0, v___f_2661_);
lean_closure_set(v___f_2662_, 1, v___f_2660_);
return v___f_2662_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__17(void){
_start:
{
lean_object* v___x_2663_; lean_object* v___f_2664_; lean_object* v___f_2665_; 
v___x_2663_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__8, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__8_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__8);
v___f_2664_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__16, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__16_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__16);
v___f_2665_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2665_, 0, v___f_2664_);
lean_closure_set(v___f_2665_, 1, v___x_2663_);
return v___f_2665_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__18(void){
_start:
{
lean_object* v___f_2666_; lean_object* v___f_2667_; lean_object* v___f_2668_; 
v___f_2666_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__7, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__7_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__7);
v___f_2667_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__17, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__17_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__17);
v___f_2668_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2668_, 0, v___f_2667_);
lean_closure_set(v___f_2668_, 1, v___f_2666_);
return v___f_2668_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__19(void){
_start:
{
lean_object* v___f_2669_; lean_object* v___f_2670_; lean_object* v___f_2671_; 
v___f_2669_ = lean_obj_once(&l_Lean_Server_instMonadLiftCancellableMRequestM___closed__0, &l_Lean_Server_instMonadLiftCancellableMRequestM___closed__0_once, _init_l_Lean_Server_instMonadLiftCancellableMRequestM___closed__0);
v___f_2670_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__18, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__18_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__18);
v___f_2671_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2671_, 0, v___f_2670_);
lean_closure_set(v___f_2671_, 1, v___f_2669_);
return v___f_2671_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__20(void){
_start:
{
lean_object* v___x_2672_; lean_object* v___f_2673_; 
v___x_2672_ = lean_box(0);
v___f_2673_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_2673_, 0, v___x_2672_);
return v___f_2673_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__21(void){
_start:
{
lean_object* v___x_2674_; lean_object* v___f_2675_; 
v___x_2674_ = lean_box(0);
v___f_2675_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__3___boxed), 2, 1);
lean_closure_set(v___f_2675_, 0, v___x_2674_);
return v___f_2675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg(lean_object* v_method_2676_, lean_object* v_completeness_2677_, lean_object* v_inst_2678_, lean_object* v_inst_2679_, lean_object* v_inst_2680_, lean_object* v_inst_2681_, lean_object* v_initState_2682_, lean_object* v_handler_2683_, lean_object* v_onDidChange_2684_){
_start:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; 
v___x_2686_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__1, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__1_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__1);
v___x_2687_ = l_Lean_initializing();
if (lean_obj_tag(v___x_2687_) == 0)
{
lean_object* v_a_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2725_; 
v_a_2688_ = lean_ctor_get(v___x_2687_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2687_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2690_ = v___x_2687_;
v_isShared_2691_ = v_isSharedCheck_2725_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_a_2688_);
lean_dec(v___x_2687_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2725_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
uint8_t v___x_2692_; 
v___x_2692_ = lean_unbox(v_a_2688_);
lean_dec(v_a_2688_);
if (v___x_2692_ == 0)
{
lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2699_; 
lean_dec_ref(v_onDidChange_2684_);
lean_dec_ref(v_handler_2683_);
lean_dec(v_initState_2682_);
lean_dec(v_inst_2681_);
lean_dec_ref(v_inst_2680_);
lean_dec_ref(v_inst_2679_);
lean_dec_ref(v_inst_2678_);
lean_dec(v_completeness_2677_);
v___x_2693_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__2, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__2_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__2);
v___x_2694_ = lean_string_append(v___x_2693_, v_method_2676_);
lean_dec_ref(v_method_2676_);
v___x_2695_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__1, &l_Lean_Server_registerLspRequestHandler___redArg___closed__1_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__1);
v___x_2696_ = lean_string_append(v___x_2694_, v___x_2695_);
v___x_2697_ = lean_mk_io_user_error(v___x_2696_);
if (v_isShared_2691_ == 0)
{
lean_ctor_set_tag(v___x_2690_, 1);
lean_ctor_set(v___x_2690_, 0, v___x_2697_);
v___x_2699_ = v___x_2690_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2697_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
else
{
lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___f_2707_; lean_object* v___f_2708_; lean_object* v___f_2709_; lean_object* v___f_2710_; lean_object* v___f_2711_; lean_object* v___f_2712_; lean_object* v___x_2713_; lean_object* v___f_2714_; lean_object* v___f_2715_; lean_object* v___f_2716_; lean_object* v___f_2717_; lean_object* v___f_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2723_; 
v___x_2701_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__3, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__3_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__3);
v___x_2702_ = l_Std_Mutex_new___redArg(v___x_2701_);
lean_inc_n(v_inst_2681_, 2);
v___x_2703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2703_, 0, v_inst_2681_);
lean_ctor_set(v___x_2703_, 1, v_initState_2682_);
lean_inc_ref(v___x_2703_);
v___x_2704_ = lean_st_mk_ref(v___x_2703_);
v___x_2705_ = l_Lean_Server_statefulRequestHandlers;
v___x_2706_ = lean_st_ref_take(v___x_2705_);
v___f_2707_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__11, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__11_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__11);
lean_inc_ref(v_inst_2678_);
v___f_2708_ = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2708_, 0, v_inst_2678_);
lean_closure_set(v___f_2708_, 1, v_inst_2679_);
lean_inc_ref_n(v_method_2676_, 2);
v___f_2709_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__1___boxed), 9, 5);
lean_closure_set(v___f_2709_, 0, v_inst_2678_);
lean_closure_set(v___f_2709_, 1, v_method_2676_);
lean_closure_set(v___f_2709_, 2, v_inst_2681_);
lean_closure_set(v___f_2709_, 3, v_handler_2683_);
lean_closure_set(v___f_2709_, 4, v_inst_2680_);
v___f_2710_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__0___boxed), 7, 3);
lean_closure_set(v___f_2710_, 0, v_method_2676_);
lean_closure_set(v___f_2710_, 1, v_inst_2681_);
lean_closure_set(v___f_2710_, 2, v_onDidChange_2684_);
v___f_2711_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__13, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__13_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__13);
v___f_2712_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__19, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__19_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__19);
v___x_2713_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__2, &l_Lean_Server_registerLspRequestHandler___redArg___closed__2_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__2);
v___f_2714_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__20, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__20_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__20);
v___f_2715_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__21, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__21_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__21);
lean_inc_ref_n(v___x_2702_, 2);
lean_inc_ref(v___f_2709_);
lean_inc_n(v___x_2704_, 2);
v___f_2716_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__6___boxed), 11, 8);
lean_closure_set(v___f_2716_, 0, v___x_2704_);
lean_closure_set(v___f_2716_, 1, v___f_2709_);
lean_closure_set(v___f_2716_, 2, v___f_2714_);
lean_closure_set(v___f_2716_, 3, v___f_2712_);
lean_closure_set(v___f_2716_, 4, v___x_2686_);
lean_closure_set(v___f_2716_, 5, v___f_2707_);
lean_closure_set(v___f_2716_, 6, v___f_2711_);
lean_closure_set(v___f_2716_, 7, v___x_2702_);
lean_inc_ref(v___f_2710_);
v___f_2717_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___lam__9___boxed), 11, 8);
lean_closure_set(v___f_2717_, 0, v___x_2704_);
lean_closure_set(v___f_2717_, 1, v___f_2710_);
lean_closure_set(v___f_2717_, 2, v___f_2715_);
lean_closure_set(v___f_2717_, 3, v___f_2712_);
lean_closure_set(v___f_2717_, 4, v___x_2686_);
lean_closure_set(v___f_2717_, 5, v___f_2707_);
lean_closure_set(v___f_2717_, 6, v___f_2711_);
lean_closure_set(v___f_2717_, 7, v___x_2702_);
v___f_2718_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__3, &l_Lean_Server_registerLspRequestHandler___redArg___closed__3_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__3);
v___x_2719_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2719_, 0, v___f_2708_);
lean_ctor_set(v___x_2719_, 1, v___f_2709_);
lean_ctor_set(v___x_2719_, 2, v___f_2716_);
lean_ctor_set(v___x_2719_, 3, v___f_2710_);
lean_ctor_set(v___x_2719_, 4, v___f_2717_);
lean_ctor_set(v___x_2719_, 5, v___x_2702_);
lean_ctor_set(v___x_2719_, 6, v___x_2703_);
lean_ctor_set(v___x_2719_, 7, v___x_2704_);
lean_ctor_set(v___x_2719_, 8, v_completeness_2677_);
v___x_2720_ = l_Lean_PersistentHashMap_insert___redArg(v___f_2718_, v___x_2713_, v___x_2706_, v_method_2676_, v___x_2719_);
v___x_2721_ = lean_st_ref_set(v___x_2705_, v___x_2720_);
if (v_isShared_2691_ == 0)
{
lean_ctor_set(v___x_2690_, 0, v___x_2721_);
v___x_2723_ = v___x_2690_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v___x_2721_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec_ref(v_onDidChange_2684_);
lean_dec_ref(v_handler_2683_);
lean_dec(v_initState_2682_);
lean_dec(v_inst_2681_);
lean_dec_ref(v_inst_2680_);
lean_dec_ref(v_inst_2679_);
lean_dec_ref(v_inst_2678_);
lean_dec(v_completeness_2677_);
lean_dec_ref(v_method_2676_);
v_a_2726_ = lean_ctor_get(v___x_2687_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2687_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2687_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2687_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___boxed(lean_object* v_method_2734_, lean_object* v_completeness_2735_, lean_object* v_inst_2736_, lean_object* v_inst_2737_, lean_object* v_inst_2738_, lean_object* v_inst_2739_, lean_object* v_initState_2740_, lean_object* v_handler_2741_, lean_object* v_onDidChange_2742_, lean_object* v_a_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg(v_method_2734_, v_completeness_2735_, v_inst_2736_, v_inst_2737_, v_inst_2738_, v_inst_2739_, v_initState_2740_, v_handler_2741_, v_onDidChange_2742_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler(lean_object* v_method_2745_, lean_object* v_completeness_2746_, lean_object* v_paramType_2747_, lean_object* v_inst_2748_, lean_object* v_inst_2749_, lean_object* v_respType_2750_, lean_object* v_inst_2751_, lean_object* v_stateType_2752_, lean_object* v_inst_2753_, lean_object* v_initState_2754_, lean_object* v_handler_2755_, lean_object* v_onDidChange_2756_){
_start:
{
lean_object* v___x_2758_; 
v___x_2758_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg(v_method_2745_, v_completeness_2746_, v_inst_2748_, v_inst_2749_, v_inst_2751_, v_inst_2753_, v_initState_2754_, v_handler_2755_, v_onDidChange_2756_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___boxed(lean_object* v_method_2759_, lean_object* v_completeness_2760_, lean_object* v_paramType_2761_, lean_object* v_inst_2762_, lean_object* v_inst_2763_, lean_object* v_respType_2764_, lean_object* v_inst_2765_, lean_object* v_stateType_2766_, lean_object* v_inst_2767_, lean_object* v_initState_2768_, lean_object* v_handler_2769_, lean_object* v_onDidChange_2770_, lean_object* v_a_2771_){
_start:
{
lean_object* v_res_2772_; 
v_res_2772_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler(v_method_2759_, v_completeness_2760_, v_paramType_2761_, v_inst_2762_, v_inst_2763_, v_respType_2764_, v_inst_2765_, v_stateType_2766_, v_inst_2767_, v_initState_2768_, v_handler_2769_, v_onDidChange_2770_);
return v_res_2772_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___redArg(lean_object* v_method_2773_, lean_object* v_completeness_2774_, lean_object* v_inst_2775_, lean_object* v_inst_2776_, lean_object* v_inst_2777_, lean_object* v_inst_2778_, lean_object* v_initState_2779_, lean_object* v_handler_2780_, lean_object* v_onDidChange_2781_){
_start:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___f_2786_; uint8_t v___x_2787_; 
v___x_2783_ = l_Lean_Server_requestHandlers;
v___x_2784_ = lean_st_ref_get(v___x_2783_);
v___x_2785_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__2, &l_Lean_Server_registerLspRequestHandler___redArg___closed__2_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__2);
v___f_2786_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__3, &l_Lean_Server_registerLspRequestHandler___redArg___closed__3_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__3);
lean_inc_ref(v_method_2773_);
v___x_2787_ = l_Lean_PersistentHashMap_contains___redArg(v___f_2786_, v___x_2785_, v___x_2784_, v_method_2773_);
if (v___x_2787_ == 0)
{
lean_object* v___x_2788_; 
v___x_2788_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg(v_method_2773_, v_completeness_2774_, v_inst_2775_, v_inst_2776_, v_inst_2777_, v_inst_2778_, v_initState_2779_, v_handler_2780_, v_onDidChange_2781_);
return v___x_2788_;
}
else
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; 
lean_dec_ref(v_onDidChange_2781_);
lean_dec_ref(v_handler_2780_);
lean_dec(v_initState_2779_);
lean_dec(v_inst_2778_);
lean_dec_ref(v_inst_2777_);
lean_dec_ref(v_inst_2776_);
lean_dec_ref(v_inst_2775_);
lean_dec(v_completeness_2774_);
v___x_2789_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__2, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__2_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg___closed__2);
v___x_2790_ = lean_string_append(v___x_2789_, v_method_2773_);
lean_dec_ref(v_method_2773_);
v___x_2791_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__4, &l_Lean_Server_registerLspRequestHandler___redArg___closed__4_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__4);
v___x_2792_ = lean_string_append(v___x_2790_, v___x_2791_);
v___x_2793_ = lean_mk_io_user_error(v___x_2792_);
v___x_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2794_, 0, v___x_2793_);
return v___x_2794_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___redArg___boxed(lean_object* v_method_2795_, lean_object* v_completeness_2796_, lean_object* v_inst_2797_, lean_object* v_inst_2798_, lean_object* v_inst_2799_, lean_object* v_inst_2800_, lean_object* v_initState_2801_, lean_object* v_handler_2802_, lean_object* v_onDidChange_2803_, lean_object* v_a_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___redArg(v_method_2795_, v_completeness_2796_, v_inst_2797_, v_inst_2798_, v_inst_2799_, v_inst_2800_, v_initState_2801_, v_handler_2802_, v_onDidChange_2803_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler(lean_object* v_method_2806_, lean_object* v_completeness_2807_, lean_object* v_paramType_2808_, lean_object* v_inst_2809_, lean_object* v_inst_2810_, lean_object* v_respType_2811_, lean_object* v_inst_2812_, lean_object* v_stateType_2813_, lean_object* v_inst_2814_, lean_object* v_initState_2815_, lean_object* v_handler_2816_, lean_object* v_onDidChange_2817_){
_start:
{
lean_object* v___x_2819_; 
v___x_2819_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___redArg(v_method_2806_, v_completeness_2807_, v_inst_2809_, v_inst_2810_, v_inst_2812_, v_inst_2814_, v_initState_2815_, v_handler_2816_, v_onDidChange_2817_);
return v___x_2819_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___boxed(lean_object* v_method_2820_, lean_object* v_completeness_2821_, lean_object* v_paramType_2822_, lean_object* v_inst_2823_, lean_object* v_inst_2824_, lean_object* v_respType_2825_, lean_object* v_inst_2826_, lean_object* v_stateType_2827_, lean_object* v_inst_2828_, lean_object* v_initState_2829_, lean_object* v_handler_2830_, lean_object* v_onDidChange_2831_, lean_object* v_a_2832_){
_start:
{
lean_object* v_res_2833_; 
v_res_2833_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler(v_method_2820_, v_completeness_2821_, v_paramType_2822_, v_inst_2823_, v_inst_2824_, v_respType_2825_, v_inst_2826_, v_stateType_2827_, v_inst_2828_, v_initState_2829_, v_handler_2830_, v_onDidChange_2831_);
return v_res_2833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerCompleteStatefulLspRequestHandler___redArg___lam__0(lean_object* v_handler_2834_, lean_object* v_p_2835_, lean_object* v_s_2836_, lean_object* v___y_2837_){
_start:
{
lean_object* v___x_2839_; 
lean_inc_ref(v___y_2837_);
v___x_2839_ = lean_apply_4(v_handler_2834_, v_p_2835_, v_s_2836_, v___y_2837_, lean_box(0));
if (lean_obj_tag(v___x_2839_) == 0)
{
lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2858_; 
v_a_2840_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2842_ = v___x_2839_;
v_isShared_2843_ = v_isSharedCheck_2858_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v___x_2839_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2858_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v_fst_2844_; lean_object* v_snd_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2857_; 
v_fst_2844_ = lean_ctor_get(v_a_2840_, 0);
v_snd_2845_ = lean_ctor_get(v_a_2840_, 1);
v_isSharedCheck_2857_ = !lean_is_exclusive(v_a_2840_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2847_ = v_a_2840_;
v_isShared_2848_ = v_isSharedCheck_2857_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_snd_2845_);
lean_inc(v_fst_2844_);
lean_dec(v_a_2840_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2857_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
uint8_t v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2852_; 
v___x_2849_ = 1;
v___x_2850_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2850_, 0, v_fst_2844_);
lean_ctor_set_uint8(v___x_2850_, sizeof(void*)*1, v___x_2849_);
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 0, v___x_2850_);
v___x_2852_ = v___x_2847_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v___x_2850_);
lean_ctor_set(v_reuseFailAlloc_2856_, 1, v_snd_2845_);
v___x_2852_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
lean_object* v___x_2854_; 
if (v_isShared_2843_ == 0)
{
lean_ctor_set(v___x_2842_, 0, v___x_2852_);
v___x_2854_ = v___x_2842_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v___x_2852_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
v_a_2859_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2839_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2839_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2864_; 
if (v_isShared_2862_ == 0)
{
v___x_2864_ = v___x_2861_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_a_2859_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerCompleteStatefulLspRequestHandler___redArg___lam__0___boxed(lean_object* v_handler_2867_, lean_object* v_p_2868_, lean_object* v_s_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = l_Lean_Server_registerCompleteStatefulLspRequestHandler___redArg___lam__0(v_handler_2867_, v_p_2868_, v_s_2869_, v___y_2870_);
lean_dec_ref(v___y_2870_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerCompleteStatefulLspRequestHandler___redArg(lean_object* v_method_2873_, lean_object* v_inst_2874_, lean_object* v_inst_2875_, lean_object* v_inst_2876_, lean_object* v_inst_2877_, lean_object* v_initState_2878_, lean_object* v_handler_2879_, lean_object* v_onDidChange_2880_){
_start:
{
lean_object* v_handler_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v_handler_2882_ = lean_alloc_closure((void*)(l_Lean_Server_registerCompleteStatefulLspRequestHandler___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v_handler_2882_, 0, v_handler_2879_);
v___x_2883_ = lean_box(0);
v___x_2884_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___redArg(v_method_2873_, v___x_2883_, v_inst_2874_, v_inst_2875_, v_inst_2876_, v_inst_2877_, v_initState_2878_, v_handler_2882_, v_onDidChange_2880_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerCompleteStatefulLspRequestHandler___redArg___boxed(lean_object* v_method_2885_, lean_object* v_inst_2886_, lean_object* v_inst_2887_, lean_object* v_inst_2888_, lean_object* v_inst_2889_, lean_object* v_initState_2890_, lean_object* v_handler_2891_, lean_object* v_onDidChange_2892_, lean_object* v_a_2893_){
_start:
{
lean_object* v_res_2894_; 
v_res_2894_ = l_Lean_Server_registerCompleteStatefulLspRequestHandler___redArg(v_method_2885_, v_inst_2886_, v_inst_2887_, v_inst_2888_, v_inst_2889_, v_initState_2890_, v_handler_2891_, v_onDidChange_2892_);
return v_res_2894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerCompleteStatefulLspRequestHandler(lean_object* v_method_2895_, lean_object* v_paramType_2896_, lean_object* v_inst_2897_, lean_object* v_inst_2898_, lean_object* v_respType_2899_, lean_object* v_inst_2900_, lean_object* v_stateType_2901_, lean_object* v_inst_2902_, lean_object* v_initState_2903_, lean_object* v_handler_2904_, lean_object* v_onDidChange_2905_){
_start:
{
lean_object* v___x_2907_; 
v___x_2907_ = l_Lean_Server_registerCompleteStatefulLspRequestHandler___redArg(v_method_2895_, v_inst_2897_, v_inst_2898_, v_inst_2900_, v_inst_2902_, v_initState_2903_, v_handler_2904_, v_onDidChange_2905_);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerCompleteStatefulLspRequestHandler___boxed(lean_object* v_method_2908_, lean_object* v_paramType_2909_, lean_object* v_inst_2910_, lean_object* v_inst_2911_, lean_object* v_respType_2912_, lean_object* v_inst_2913_, lean_object* v_stateType_2914_, lean_object* v_inst_2915_, lean_object* v_initState_2916_, lean_object* v_handler_2917_, lean_object* v_onDidChange_2918_, lean_object* v_a_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l_Lean_Server_registerCompleteStatefulLspRequestHandler(v_method_2908_, v_paramType_2909_, v_inst_2910_, v_inst_2911_, v_respType_2912_, v_inst_2913_, v_stateType_2914_, v_inst_2915_, v_initState_2916_, v_handler_2917_, v_onDidChange_2918_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___redArg(lean_object* v_method_2921_, lean_object* v_refreshMethod_2922_, lean_object* v_refreshIntervalMs_2923_, lean_object* v_inst_2924_, lean_object* v_inst_2925_, lean_object* v_inst_2926_, lean_object* v_inst_2927_, lean_object* v_initState_2928_, lean_object* v_handler_2929_, lean_object* v_onDidChange_2930_){
_start:
{
lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2932_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2932_, 0, v_refreshMethod_2922_);
lean_ctor_set(v___x_2932_, 1, v_refreshIntervalMs_2923_);
v___x_2933_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___redArg(v_method_2921_, v___x_2932_, v_inst_2924_, v_inst_2925_, v_inst_2926_, v_inst_2927_, v_initState_2928_, v_handler_2929_, v_onDidChange_2930_);
return v___x_2933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___redArg___boxed(lean_object* v_method_2934_, lean_object* v_refreshMethod_2935_, lean_object* v_refreshIntervalMs_2936_, lean_object* v_inst_2937_, lean_object* v_inst_2938_, lean_object* v_inst_2939_, lean_object* v_inst_2940_, lean_object* v_initState_2941_, lean_object* v_handler_2942_, lean_object* v_onDidChange_2943_, lean_object* v_a_2944_){
_start:
{
lean_object* v_res_2945_; 
v_res_2945_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___redArg(v_method_2934_, v_refreshMethod_2935_, v_refreshIntervalMs_2936_, v_inst_2937_, v_inst_2938_, v_inst_2939_, v_inst_2940_, v_initState_2941_, v_handler_2942_, v_onDidChange_2943_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler(lean_object* v_method_2946_, lean_object* v_refreshMethod_2947_, lean_object* v_refreshIntervalMs_2948_, lean_object* v_paramType_2949_, lean_object* v_inst_2950_, lean_object* v_inst_2951_, lean_object* v_respType_2952_, lean_object* v_inst_2953_, lean_object* v_stateType_2954_, lean_object* v_inst_2955_, lean_object* v_initState_2956_, lean_object* v_handler_2957_, lean_object* v_onDidChange_2958_){
_start:
{
lean_object* v___x_2960_; 
v___x_2960_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___redArg(v_method_2946_, v_refreshMethod_2947_, v_refreshIntervalMs_2948_, v_inst_2950_, v_inst_2951_, v_inst_2953_, v_inst_2955_, v_initState_2956_, v_handler_2957_, v_onDidChange_2958_);
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___boxed(lean_object* v_method_2961_, lean_object* v_refreshMethod_2962_, lean_object* v_refreshIntervalMs_2963_, lean_object* v_paramType_2964_, lean_object* v_inst_2965_, lean_object* v_inst_2966_, lean_object* v_respType_2967_, lean_object* v_inst_2968_, lean_object* v_stateType_2969_, lean_object* v_inst_2970_, lean_object* v_initState_2971_, lean_object* v_handler_2972_, lean_object* v_onDidChange_2973_, lean_object* v_a_2974_){
_start:
{
lean_object* v_res_2975_; 
v_res_2975_ = l_Lean_Server_registerPartialStatefulLspRequestHandler(v_method_2961_, v_refreshMethod_2962_, v_refreshIntervalMs_2963_, v_paramType_2964_, v_inst_2965_, v_inst_2966_, v_respType_2967_, v_inst_2968_, v_stateType_2969_, v_inst_2970_, v_initState_2971_, v_handler_2972_, v_onDidChange_2973_);
return v_res_2975_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_2976_, lean_object* v_i_2977_, lean_object* v_k_2978_){
_start:
{
lean_object* v___x_2979_; uint8_t v___x_2980_; 
v___x_2979_ = lean_array_get_size(v_keys_2976_);
v___x_2980_ = lean_nat_dec_lt(v_i_2977_, v___x_2979_);
if (v___x_2980_ == 0)
{
lean_dec(v_i_2977_);
return v___x_2980_;
}
else
{
lean_object* v_k_x27_2981_; uint8_t v___x_2982_; 
v_k_x27_2981_ = lean_array_fget_borrowed(v_keys_2976_, v_i_2977_);
v___x_2982_ = lean_string_dec_eq(v_k_2978_, v_k_x27_2981_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2983_ = lean_unsigned_to_nat(1u);
v___x_2984_ = lean_nat_add(v_i_2977_, v___x_2983_);
lean_dec(v_i_2977_);
v_i_2977_ = v___x_2984_;
goto _start;
}
else
{
lean_dec(v_i_2977_);
return v___x_2982_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_2986_, lean_object* v_i_2987_, lean_object* v_k_2988_){
_start:
{
uint8_t v_res_2989_; lean_object* v_r_2990_; 
v_res_2989_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0_spec__1___redArg(v_keys_2986_, v_i_2987_, v_k_2988_);
lean_dec_ref(v_k_2988_);
lean_dec_ref(v_keys_2986_);
v_r_2990_ = lean_box(v_res_2989_);
return v_r_2990_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0___redArg(lean_object* v_x_2991_, size_t v_x_2992_, lean_object* v_x_2993_){
_start:
{
if (lean_obj_tag(v_x_2991_) == 0)
{
lean_object* v_es_2994_; lean_object* v___x_2995_; size_t v___x_2996_; size_t v___x_2997_; size_t v___x_2998_; lean_object* v_j_2999_; lean_object* v___x_3000_; 
v_es_2994_ = lean_ctor_get(v_x_2991_, 0);
v___x_2995_ = lean_box(2);
v___x_2996_ = ((size_t)5ULL);
v___x_2997_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0_spec__0___redArg___closed__1);
v___x_2998_ = lean_usize_land(v_x_2992_, v___x_2997_);
v_j_2999_ = lean_usize_to_nat(v___x_2998_);
v___x_3000_ = lean_array_get_borrowed(v___x_2995_, v_es_2994_, v_j_2999_);
lean_dec(v_j_2999_);
switch(lean_obj_tag(v___x_3000_))
{
case 0:
{
lean_object* v_key_3001_; uint8_t v___x_3002_; 
v_key_3001_ = lean_ctor_get(v___x_3000_, 0);
v___x_3002_ = lean_string_dec_eq(v_x_2993_, v_key_3001_);
return v___x_3002_;
}
case 1:
{
lean_object* v_node_3003_; size_t v___x_3004_; 
v_node_3003_ = lean_ctor_get(v___x_3000_, 0);
v___x_3004_ = lean_usize_shift_right(v_x_2992_, v___x_2996_);
v_x_2991_ = v_node_3003_;
v_x_2992_ = v___x_3004_;
goto _start;
}
default: 
{
uint8_t v___x_3006_; 
v___x_3006_ = 0;
return v___x_3006_;
}
}
}
else
{
lean_object* v_ks_3007_; lean_object* v___x_3008_; uint8_t v___x_3009_; 
v_ks_3007_ = lean_ctor_get(v_x_2991_, 0);
v___x_3008_ = lean_unsigned_to_nat(0u);
v___x_3009_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0_spec__1___redArg(v_ks_3007_, v___x_3008_, v_x_2993_);
return v___x_3009_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0___redArg___boxed(lean_object* v_x_3010_, lean_object* v_x_3011_, lean_object* v_x_3012_){
_start:
{
size_t v_x_224__boxed_3013_; uint8_t v_res_3014_; lean_object* v_r_3015_; 
v_x_224__boxed_3013_ = lean_unbox_usize(v_x_3011_);
lean_dec(v_x_3011_);
v_res_3014_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0___redArg(v_x_3010_, v_x_224__boxed_3013_, v_x_3012_);
lean_dec_ref(v_x_3012_);
lean_dec_ref(v_x_3010_);
v_r_3015_ = lean_box(v_res_3014_);
return v_r_3015_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0___redArg(lean_object* v_x_3016_, lean_object* v_x_3017_){
_start:
{
uint64_t v___x_3018_; size_t v___x_3019_; uint8_t v___x_3020_; 
v___x_3018_ = lean_string_hash(v_x_3017_);
v___x_3019_ = lean_uint64_to_usize(v___x_3018_);
v___x_3020_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0___redArg(v_x_3016_, v___x_3019_, v_x_3017_);
return v___x_3020_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0___redArg___boxed(lean_object* v_x_3021_, lean_object* v_x_3022_){
_start:
{
uint8_t v_res_3023_; lean_object* v_r_3024_; 
v_res_3023_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0___redArg(v_x_3021_, v_x_3022_);
lean_dec_ref(v_x_3022_);
lean_dec_ref(v_x_3021_);
v_r_3024_ = lean_box(v_res_3023_);
return v_r_3024_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_isStatefulLspRequestMethod(lean_object* v_method_3025_){
_start:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; uint8_t v___x_3029_; 
v___x_3027_ = l_Lean_Server_statefulRequestHandlers;
v___x_3028_ = lean_st_ref_get(v___x_3027_);
v___x_3029_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0___redArg(v___x_3028_, v_method_3025_);
lean_dec(v___x_3028_);
return v___x_3029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_isStatefulLspRequestMethod___boxed(lean_object* v_method_3030_, lean_object* v_a_3031_){
_start:
{
uint8_t v_res_3032_; lean_object* v_r_3033_; 
v_res_3032_ = l_Lean_Server_isStatefulLspRequestMethod(v_method_3030_);
lean_dec_ref(v_method_3030_);
v_r_3033_ = lean_box(v_res_3032_);
return v_r_3033_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0(lean_object* v_00_u03b2_3034_, lean_object* v_x_3035_, lean_object* v_x_3036_){
_start:
{
uint8_t v___x_3037_; 
v___x_3037_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0___redArg(v_x_3035_, v_x_3036_);
return v___x_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0___boxed(lean_object* v_00_u03b2_3038_, lean_object* v_x_3039_, lean_object* v_x_3040_){
_start:
{
uint8_t v_res_3041_; lean_object* v_r_3042_; 
v_res_3041_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0(v_00_u03b2_3038_, v_x_3039_, v_x_3040_);
lean_dec_ref(v_x_3040_);
lean_dec_ref(v_x_3039_);
v_r_3042_ = lean_box(v_res_3041_);
return v_r_3042_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0(lean_object* v_00_u03b2_3043_, lean_object* v_x_3044_, size_t v_x_3045_, lean_object* v_x_3046_){
_start:
{
uint8_t v___x_3047_; 
v___x_3047_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0___redArg(v_x_3044_, v_x_3045_, v_x_3046_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3048_, lean_object* v_x_3049_, lean_object* v_x_3050_, lean_object* v_x_3051_){
_start:
{
size_t v_x_296__boxed_3052_; uint8_t v_res_3053_; lean_object* v_r_3054_; 
v_x_296__boxed_3052_ = lean_unbox_usize(v_x_3050_);
lean_dec(v_x_3050_);
v_res_3053_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0(v_00_u03b2_3048_, v_x_3049_, v_x_296__boxed_3052_, v_x_3051_);
lean_dec_ref(v_x_3051_);
lean_dec_ref(v_x_3049_);
v_r_3054_ = lean_box(v_res_3053_);
return v_r_3054_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3055_, lean_object* v_keys_3056_, lean_object* v_vals_3057_, lean_object* v_heq_3058_, lean_object* v_i_3059_, lean_object* v_k_3060_){
_start:
{
uint8_t v___x_3061_; 
v___x_3061_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0_spec__1___redArg(v_keys_3056_, v_i_3059_, v_k_3060_);
return v___x_3061_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3062_, lean_object* v_keys_3063_, lean_object* v_vals_3064_, lean_object* v_heq_3065_, lean_object* v_i_3066_, lean_object* v_k_3067_){
_start:
{
uint8_t v_res_3068_; lean_object* v_r_3069_; 
v_res_3068_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_isStatefulLspRequestMethod_spec__0_spec__0_spec__1(v_00_u03b2_3062_, v_keys_3063_, v_vals_3064_, v_heq_3065_, v_i_3066_, v_k_3067_);
lean_dec_ref(v_k_3067_);
lean_dec_ref(v_vals_3064_);
lean_dec_ref(v_keys_3063_);
v_r_3069_ = lean_box(v_res_3068_);
return v_r_3069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_lookupStatefulLspRequestHandler(lean_object* v_method_3070_){
_start:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; 
v___x_3072_ = l_Lean_Server_statefulRequestHandlers;
v___x_3073_ = lean_st_ref_get(v___x_3072_);
v___x_3074_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Server_lookupLspRequestHandler_spec__0___redArg(v___x_3073_, v_method_3070_);
lean_dec(v___x_3073_);
return v___x_3074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_lookupStatefulLspRequestHandler___boxed(lean_object* v_method_3075_, lean_object* v_a_3076_){
_start:
{
lean_object* v_res_3077_; 
v_res_3077_ = l_Lean_Server_lookupStatefulLspRequestHandler(v_method_3075_);
lean_dec_ref(v_method_3075_);
return v_res_3077_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___lam__0(lean_object* v_ps_3078_, lean_object* v_k_3079_, lean_object* v_v_3080_){
_start:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3081_, 0, v_k_3079_);
lean_ctor_set(v___x_3081_, 1, v_v_3080_);
v___x_3082_ = lean_array_push(v_ps_3078_, v___x_3081_);
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__6___redArg(lean_object* v_f_3083_, lean_object* v_keys_3084_, lean_object* v_vals_3085_, lean_object* v_i_3086_, lean_object* v_acc_3087_){
_start:
{
lean_object* v___x_3088_; uint8_t v___x_3089_; 
v___x_3088_ = lean_array_get_size(v_keys_3084_);
v___x_3089_ = lean_nat_dec_lt(v_i_3086_, v___x_3088_);
if (v___x_3089_ == 0)
{
lean_dec(v_i_3086_);
lean_dec(v_f_3083_);
return v_acc_3087_;
}
else
{
lean_object* v_k_3090_; lean_object* v_v_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; 
v_k_3090_ = lean_array_fget_borrowed(v_keys_3084_, v_i_3086_);
v_v_3091_ = lean_array_fget_borrowed(v_vals_3085_, v_i_3086_);
lean_inc(v_f_3083_);
lean_inc(v_v_3091_);
lean_inc(v_k_3090_);
v___x_3092_ = lean_apply_3(v_f_3083_, v_acc_3087_, v_k_3090_, v_v_3091_);
v___x_3093_ = lean_unsigned_to_nat(1u);
v___x_3094_ = lean_nat_add(v_i_3086_, v___x_3093_);
lean_dec(v_i_3086_);
v_i_3086_ = v___x_3094_;
v_acc_3087_ = v___x_3092_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_f_3096_, lean_object* v_keys_3097_, lean_object* v_vals_3098_, lean_object* v_i_3099_, lean_object* v_acc_3100_){
_start:
{
lean_object* v_res_3101_; 
v_res_3101_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__6___redArg(v_f_3096_, v_keys_3097_, v_vals_3098_, v_i_3099_, v_acc_3100_);
lean_dec_ref(v_vals_3098_);
lean_dec_ref(v_keys_3097_);
return v_res_3101_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_3102_, lean_object* v_x_3103_, lean_object* v_x_3104_){
_start:
{
if (lean_obj_tag(v_x_3103_) == 0)
{
lean_object* v_es_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; uint8_t v___x_3108_; 
v_es_3105_ = lean_ctor_get(v_x_3103_, 0);
v___x_3106_ = lean_unsigned_to_nat(0u);
v___x_3107_ = lean_array_get_size(v_es_3105_);
v___x_3108_ = lean_nat_dec_lt(v___x_3106_, v___x_3107_);
if (v___x_3108_ == 0)
{
lean_dec(v_f_3102_);
return v_x_3104_;
}
else
{
uint8_t v___x_3109_; 
v___x_3109_ = lean_nat_dec_le(v___x_3107_, v___x_3107_);
if (v___x_3109_ == 0)
{
if (v___x_3108_ == 0)
{
lean_dec(v_f_3102_);
return v_x_3104_;
}
else
{
size_t v___x_3110_; size_t v___x_3111_; lean_object* v___x_3112_; 
v___x_3110_ = ((size_t)0ULL);
v___x_3111_ = lean_usize_of_nat(v___x_3107_);
v___x_3112_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_3102_, v_es_3105_, v___x_3110_, v___x_3111_, v_x_3104_);
return v___x_3112_;
}
}
else
{
size_t v___x_3113_; size_t v___x_3114_; lean_object* v___x_3115_; 
v___x_3113_ = ((size_t)0ULL);
v___x_3114_ = lean_usize_of_nat(v___x_3107_);
v___x_3115_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_3102_, v_es_3105_, v___x_3113_, v___x_3114_, v_x_3104_);
return v___x_3115_;
}
}
}
else
{
lean_object* v_ks_3116_; lean_object* v_vs_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v_ks_3116_ = lean_ctor_get(v_x_3103_, 0);
v_vs_3117_ = lean_ctor_get(v_x_3103_, 1);
v___x_3118_ = lean_unsigned_to_nat(0u);
v___x_3119_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__6___redArg(v_f_3102_, v_ks_3116_, v_vs_3117_, v___x_3118_, v_x_3104_);
return v___x_3119_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_f_3120_, lean_object* v_as_3121_, size_t v_i_3122_, size_t v_stop_3123_, lean_object* v_b_3124_){
_start:
{
lean_object* v___y_3126_; uint8_t v___x_3130_; 
v___x_3130_ = lean_usize_dec_eq(v_i_3122_, v_stop_3123_);
if (v___x_3130_ == 0)
{
lean_object* v___x_3131_; 
v___x_3131_ = lean_array_uget_borrowed(v_as_3121_, v_i_3122_);
switch(lean_obj_tag(v___x_3131_))
{
case 0:
{
lean_object* v_key_3132_; lean_object* v_val_3133_; lean_object* v___x_3134_; 
v_key_3132_ = lean_ctor_get(v___x_3131_, 0);
v_val_3133_ = lean_ctor_get(v___x_3131_, 1);
lean_inc(v_f_3120_);
lean_inc(v_val_3133_);
lean_inc(v_key_3132_);
v___x_3134_ = lean_apply_3(v_f_3120_, v_b_3124_, v_key_3132_, v_val_3133_);
v___y_3126_ = v___x_3134_;
goto v___jp_3125_;
}
case 1:
{
lean_object* v_node_3135_; lean_object* v___x_3136_; 
v_node_3135_ = lean_ctor_get(v___x_3131_, 0);
lean_inc(v_f_3120_);
v___x_3136_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3___redArg(v_f_3120_, v_node_3135_, v_b_3124_);
v___y_3126_ = v___x_3136_;
goto v___jp_3125_;
}
default: 
{
v___y_3126_ = v_b_3124_;
goto v___jp_3125_;
}
}
}
else
{
lean_dec(v_f_3120_);
return v_b_3124_;
}
v___jp_3125_:
{
size_t v___x_3127_; size_t v___x_3128_; 
v___x_3127_ = ((size_t)1ULL);
v___x_3128_ = lean_usize_add(v_i_3122_, v___x_3127_);
v_i_3122_ = v___x_3128_;
v_b_3124_ = v___y_3126_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_f_3137_, lean_object* v_as_3138_, lean_object* v_i_3139_, lean_object* v_stop_3140_, lean_object* v_b_3141_){
_start:
{
size_t v_i_boxed_3142_; size_t v_stop_boxed_3143_; lean_object* v_res_3144_; 
v_i_boxed_3142_ = lean_unbox_usize(v_i_3139_);
lean_dec(v_i_3139_);
v_stop_boxed_3143_ = lean_unbox_usize(v_stop_3140_);
lean_dec(v_stop_3140_);
v_res_3144_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_3137_, v_as_3138_, v_i_boxed_3142_, v_stop_boxed_3143_, v_b_3141_);
lean_dec_ref(v_as_3138_);
return v_res_3144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_3145_, lean_object* v_x_3146_, lean_object* v_x_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3___redArg(v_f_3145_, v_x_3146_, v_x_3147_);
lean_dec_ref(v_x_3146_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0___redArg___lam__0(lean_object* v_f_3149_, lean_object* v_x1_3150_, lean_object* v_x2_3151_, lean_object* v_x3_3152_){
_start:
{
lean_object* v___x_3153_; 
v___x_3153_ = lean_apply_3(v_f_3149_, v_x1_3150_, v_x2_3151_, v_x3_3152_);
return v___x_3153_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0___redArg(lean_object* v_map_3154_, lean_object* v_f_3155_, lean_object* v_init_3156_){
_start:
{
lean_object* v___f_3157_; lean_object* v___x_3158_; 
v___f_3157_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_3157_, 0, v_f_3155_);
v___x_3158_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3___redArg(v___f_3157_, v_map_3154_, v_init_3156_);
return v___x_3158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0___redArg___boxed(lean_object* v_map_3159_, lean_object* v_f_3160_, lean_object* v_init_3161_){
_start:
{
lean_object* v_res_3162_; 
v_res_3162_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0___redArg(v_map_3159_, v_f_3160_, v_init_3161_);
lean_dec_ref(v_map_3159_);
return v_res_3162_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___f_3163_; 
v___f_3163_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___lam__0), 3, 0);
return v___f_3163_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_3164_; lean_object* v___x_3165_; 
v___x_3164_ = lean_unsigned_to_nat(0u);
v___x_3165_ = lean_mk_empty_array_with_capacity(v___x_3164_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg(lean_object* v_m_3166_){
_start:
{
lean_object* v___f_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
v___f_3167_ = lean_obj_once(&l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___closed__0);
v___x_3168_ = lean_obj_once(&l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___closed__1);
v___x_3169_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0___redArg(v_m_3166_, v___f_3167_, v___x_3168_);
return v___x_3169_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg___boxed(lean_object* v_m_3170_){
_start:
{
lean_object* v_res_3171_; 
v_res_3171_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg(v_m_3170_);
lean_dec_ref(v_m_3170_);
return v_res_3171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1_spec__2(lean_object* v_as_3172_, size_t v_i_3173_, size_t v_stop_3174_, lean_object* v_b_3175_){
_start:
{
lean_object* v___y_3177_; uint8_t v___x_3181_; 
v___x_3181_ = lean_usize_dec_eq(v_i_3173_, v_stop_3174_);
if (v___x_3181_ == 0)
{
lean_object* v___x_3182_; lean_object* v_snd_3183_; lean_object* v_completeness_3184_; 
v___x_3182_ = lean_array_uget(v_as_3172_, v_i_3173_);
v_snd_3183_ = lean_ctor_get(v___x_3182_, 1);
v_completeness_3184_ = lean_ctor_get(v_snd_3183_, 8);
lean_inc(v_completeness_3184_);
if (lean_obj_tag(v_completeness_3184_) == 1)
{
lean_object* v_fst_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3202_; 
v_fst_3185_ = lean_ctor_get(v___x_3182_, 0);
v_isSharedCheck_3202_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3202_ == 0)
{
lean_object* v_unused_3203_; 
v_unused_3203_ = lean_ctor_get(v___x_3182_, 1);
lean_dec(v_unused_3203_);
v___x_3187_ = v___x_3182_;
v_isShared_3188_ = v_isSharedCheck_3202_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_fst_3185_);
lean_dec(v___x_3182_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3202_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v_refreshMethod_3189_; lean_object* v_refreshIntervalMs_3190_; lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3201_; 
v_refreshMethod_3189_ = lean_ctor_get(v_completeness_3184_, 0);
v_refreshIntervalMs_3190_ = lean_ctor_get(v_completeness_3184_, 1);
v_isSharedCheck_3201_ = !lean_is_exclusive(v_completeness_3184_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3192_ = v_completeness_3184_;
v_isShared_3193_ = v_isSharedCheck_3201_;
goto v_resetjp_3191_;
}
else
{
lean_inc(v_refreshIntervalMs_3190_);
lean_inc(v_refreshMethod_3189_);
lean_dec(v_completeness_3184_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3201_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v___x_3195_; 
if (v_isShared_3188_ == 0)
{
lean_ctor_set(v___x_3187_, 1, v_refreshIntervalMs_3190_);
lean_ctor_set(v___x_3187_, 0, v_refreshMethod_3189_);
v___x_3195_ = v___x_3187_;
goto v_reusejp_3194_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v_refreshMethod_3189_);
lean_ctor_set(v_reuseFailAlloc_3200_, 1, v_refreshIntervalMs_3190_);
v___x_3195_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3194_;
}
v_reusejp_3194_:
{
lean_object* v___x_3197_; 
if (v_isShared_3193_ == 0)
{
lean_ctor_set_tag(v___x_3192_, 0);
lean_ctor_set(v___x_3192_, 1, v___x_3195_);
lean_ctor_set(v___x_3192_, 0, v_fst_3185_);
v___x_3197_ = v___x_3192_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v_fst_3185_);
lean_ctor_set(v_reuseFailAlloc_3199_, 1, v___x_3195_);
v___x_3197_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
lean_object* v___x_3198_; 
v___x_3198_ = lean_array_push(v_b_3175_, v___x_3197_);
v___y_3177_ = v___x_3198_;
goto v___jp_3176_;
}
}
}
}
}
else
{
lean_dec(v_completeness_3184_);
lean_dec(v___x_3182_);
v___y_3177_ = v_b_3175_;
goto v___jp_3176_;
}
}
else
{
return v_b_3175_;
}
v___jp_3176_:
{
size_t v___x_3178_; size_t v___x_3179_; 
v___x_3178_ = ((size_t)1ULL);
v___x_3179_ = lean_usize_add(v_i_3173_, v___x_3178_);
v_i_3173_ = v___x_3179_;
v_b_3175_ = v___y_3177_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1_spec__2___boxed(lean_object* v_as_3204_, lean_object* v_i_3205_, lean_object* v_stop_3206_, lean_object* v_b_3207_){
_start:
{
size_t v_i_boxed_3208_; size_t v_stop_boxed_3209_; lean_object* v_res_3210_; 
v_i_boxed_3208_ = lean_unbox_usize(v_i_3205_);
lean_dec(v_i_3205_);
v_stop_boxed_3209_ = lean_unbox_usize(v_stop_3206_);
lean_dec(v_stop_3206_);
v_res_3210_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1_spec__2(v_as_3204_, v_i_boxed_3208_, v_stop_boxed_3209_, v_b_3207_);
lean_dec_ref(v_as_3204_);
return v_res_3210_;
}
}
static lean_object* _init_l_Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3211_ = lean_unsigned_to_nat(0u);
v___x_3212_ = lean_mk_empty_array_with_capacity(v___x_3211_);
return v___x_3212_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1(lean_object* v_as_3213_, lean_object* v_start_3214_, lean_object* v_stop_3215_){
_start:
{
lean_object* v___x_3216_; uint8_t v___x_3217_; 
v___x_3216_ = lean_obj_once(&l_Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1___closed__0, &l_Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1___closed__0_once, _init_l_Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1___closed__0);
v___x_3217_ = lean_nat_dec_lt(v_start_3214_, v_stop_3215_);
if (v___x_3217_ == 0)
{
return v___x_3216_;
}
else
{
lean_object* v___x_3218_; uint8_t v___x_3219_; 
v___x_3218_ = lean_array_get_size(v_as_3213_);
v___x_3219_ = lean_nat_dec_le(v_stop_3215_, v___x_3218_);
if (v___x_3219_ == 0)
{
uint8_t v___x_3220_; 
v___x_3220_ = lean_nat_dec_lt(v_start_3214_, v___x_3218_);
if (v___x_3220_ == 0)
{
return v___x_3216_;
}
else
{
size_t v___x_3221_; size_t v___x_3222_; lean_object* v___x_3223_; 
v___x_3221_ = lean_usize_of_nat(v_start_3214_);
v___x_3222_ = lean_usize_of_nat(v___x_3218_);
v___x_3223_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1_spec__2(v_as_3213_, v___x_3221_, v___x_3222_, v___x_3216_);
return v___x_3223_;
}
}
else
{
size_t v___x_3224_; size_t v___x_3225_; lean_object* v___x_3226_; 
v___x_3224_ = lean_usize_of_nat(v_start_3214_);
v___x_3225_ = lean_usize_of_nat(v_stop_3215_);
v___x_3226_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1_spec__2(v_as_3213_, v___x_3224_, v___x_3225_, v___x_3216_);
return v___x_3226_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1___boxed(lean_object* v_as_3227_, lean_object* v_start_3228_, lean_object* v_stop_3229_){
_start:
{
lean_object* v_res_3230_; 
v_res_3230_ = l_Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1(v_as_3227_, v_start_3228_, v_stop_3229_);
lean_dec(v_stop_3229_);
lean_dec(v_start_3228_);
lean_dec_ref(v_as_3227_);
return v_res_3230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_partialLspRequestHandlerMethods(){
_start:
{
lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; 
v___x_3232_ = l_Lean_Server_statefulRequestHandlers;
v___x_3233_ = lean_st_ref_get(v___x_3232_);
v___x_3234_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg(v___x_3233_);
lean_dec(v___x_3233_);
v___x_3235_ = lean_unsigned_to_nat(0u);
v___x_3236_ = lean_array_get_size(v___x_3234_);
v___x_3237_ = l_Array_filterMapM___at___00Lean_Server_partialLspRequestHandlerMethods_spec__1(v___x_3234_, v___x_3235_, v___x_3236_);
lean_dec_ref(v___x_3234_);
v___x_3238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3238_, 0, v___x_3237_);
return v___x_3238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_partialLspRequestHandlerMethods___boxed(lean_object* v_a_3239_){
_start:
{
lean_object* v_res_3240_; 
v_res_3240_ = l_Lean_Server_partialLspRequestHandlerMethods();
return v_res_3240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0(lean_object* v_00_u03b2_3241_, lean_object* v_m_3242_){
_start:
{
lean_object* v___x_3243_; 
v___x_3243_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___redArg(v_m_3242_);
return v___x_3243_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0___boxed(lean_object* v_00_u03b2_3244_, lean_object* v_m_3245_){
_start:
{
lean_object* v_res_3246_; 
v_res_3246_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0(v_00_u03b2_3244_, v_m_3245_);
lean_dec_ref(v_m_3245_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0(lean_object* v_00_u03c3_3247_, lean_object* v_00_u03b2_3248_, lean_object* v_map_3249_, lean_object* v_f_3250_, lean_object* v_init_3251_){
_start:
{
lean_object* v___x_3252_; 
v___x_3252_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0___redArg(v_map_3249_, v_f_3250_, v_init_3251_);
return v___x_3252_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0___boxed(lean_object* v_00_u03c3_3253_, lean_object* v_00_u03b2_3254_, lean_object* v_map_3255_, lean_object* v_f_3256_, lean_object* v_init_3257_){
_start:
{
lean_object* v_res_3258_; 
v_res_3258_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0(v_00_u03c3_3253_, v_00_u03b2_3254_, v_map_3255_, v_f_3256_, v_init_3257_);
lean_dec_ref(v_map_3255_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1___redArg(lean_object* v_map_3259_, lean_object* v_f_3260_, lean_object* v_init_3261_){
_start:
{
lean_object* v___x_3262_; 
v___x_3262_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3___redArg(v_f_3260_, v_map_3259_, v_init_3261_);
return v___x_3262_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_map_3263_, lean_object* v_f_3264_, lean_object* v_init_3265_){
_start:
{
lean_object* v_res_3266_; 
v_res_3266_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1___redArg(v_map_3263_, v_f_3264_, v_init_3265_);
lean_dec_ref(v_map_3263_);
return v_res_3266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_3267_, lean_object* v_00_u03b2_3268_, lean_object* v_map_3269_, lean_object* v_f_3270_, lean_object* v_init_3271_){
_start:
{
lean_object* v___x_3272_; 
v___x_3272_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3___redArg(v_f_3270_, v_map_3269_, v_init_3271_);
return v___x_3272_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_3273_, lean_object* v_00_u03b2_3274_, lean_object* v_map_3275_, lean_object* v_f_3276_, lean_object* v_init_3277_){
_start:
{
lean_object* v_res_3278_; 
v_res_3278_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1(v_00_u03c3_3273_, v_00_u03b2_3274_, v_map_3275_, v_f_3276_, v_init_3277_);
lean_dec_ref(v_map_3275_);
return v_res_3278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03c3_3279_, lean_object* v_00_u03b1_3280_, lean_object* v_00_u03b2_3281_, lean_object* v_f_3282_, lean_object* v_x_3283_, lean_object* v_x_3284_){
_start:
{
lean_object* v___x_3285_; 
v___x_3285_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3___redArg(v_f_3282_, v_x_3283_, v_x_3284_);
return v___x_3285_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03c3_3286_, lean_object* v_00_u03b1_3287_, lean_object* v_00_u03b2_3288_, lean_object* v_f_3289_, lean_object* v_x_3290_, lean_object* v_x_3291_){
_start:
{
lean_object* v_res_3292_; 
v_res_3292_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3(v_00_u03c3_3286_, v_00_u03b1_3287_, v_00_u03b2_3288_, v_f_3289_, v_x_3290_, v_x_3291_);
lean_dec_ref(v_x_3290_);
return v_res_3292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b1_3293_, lean_object* v_00_u03b2_3294_, lean_object* v_00_u03c3_3295_, lean_object* v_f_3296_, lean_object* v_as_3297_, size_t v_i_3298_, size_t v_stop_3299_, lean_object* v_b_3300_){
_start:
{
lean_object* v___x_3301_; 
v___x_3301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_3296_, v_as_3297_, v_i_3298_, v_stop_3299_, v_b_3300_);
return v___x_3301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b1_3302_, lean_object* v_00_u03b2_3303_, lean_object* v_00_u03c3_3304_, lean_object* v_f_3305_, lean_object* v_as_3306_, lean_object* v_i_3307_, lean_object* v_stop_3308_, lean_object* v_b_3309_){
_start:
{
size_t v_i_boxed_3310_; size_t v_stop_boxed_3311_; lean_object* v_res_3312_; 
v_i_boxed_3310_ = lean_unbox_usize(v_i_3307_);
lean_dec(v_i_3307_);
v_stop_boxed_3311_ = lean_unbox_usize(v_stop_3308_);
lean_dec(v_stop_3308_);
v_res_3312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__5(v_00_u03b1_3302_, v_00_u03b2_3303_, v_00_u03c3_3304_, v_f_3305_, v_as_3306_, v_i_boxed_3310_, v_stop_boxed_3311_, v_b_3309_);
lean_dec_ref(v_as_3306_);
return v_res_3312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__6(lean_object* v_00_u03c3_3313_, lean_object* v_00_u03b1_3314_, lean_object* v_00_u03b2_3315_, lean_object* v_f_3316_, lean_object* v_keys_3317_, lean_object* v_vals_3318_, lean_object* v_heq_3319_, lean_object* v_i_3320_, lean_object* v_acc_3321_){
_start:
{
lean_object* v___x_3322_; 
v___x_3322_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__6___redArg(v_f_3316_, v_keys_3317_, v_vals_3318_, v_i_3320_, v_acc_3321_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03c3_3323_, lean_object* v_00_u03b1_3324_, lean_object* v_00_u03b2_3325_, lean_object* v_f_3326_, lean_object* v_keys_3327_, lean_object* v_vals_3328_, lean_object* v_heq_3329_, lean_object* v_i_3330_, lean_object* v_acc_3331_){
_start:
{
lean_object* v_res_3332_; 
v_res_3332_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00Lean_Server_partialLspRequestHandlerMethods_spec__0_spec__0_spec__1_spec__3_spec__6(v_00_u03c3_3323_, v_00_u03b1_3324_, v_00_u03b2_3325_, v_f_3326_, v_keys_3327_, v_vals_3328_, v_heq_3329_, v_i_3330_, v_acc_3331_);
lean_dec_ref(v_vals_3328_);
lean_dec_ref(v_keys_3327_);
return v_res_3332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__0(lean_object* v_inst_3333_, lean_object* v_pureOnDidChange_3334_, lean_object* v_method_3335_, lean_object* v_onDidChange_3336_, lean_object* v_p_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_){
_start:
{
lean_object* v___x_3341_; lean_object* v___x_3342_; 
lean_inc(v_inst_3333_);
v___x_3341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3341_, 0, v_inst_3333_);
lean_ctor_set(v___x_3341_, 1, v___y_3338_);
lean_inc_ref(v___y_3339_);
lean_inc_ref(v_p_3337_);
v___x_3342_ = lean_apply_4(v_pureOnDidChange_3334_, v_p_3337_, v___x_3341_, v___y_3339_, lean_box(0));
if (lean_obj_tag(v___x_3342_) == 0)
{
lean_object* v_a_3343_; lean_object* v_snd_3344_; lean_object* v___x_3345_; 
v_a_3343_ = lean_ctor_get(v___x_3342_, 0);
lean_inc(v_a_3343_);
lean_dec_ref(v___x_3342_);
v_snd_3344_ = lean_ctor_get(v_a_3343_, 1);
lean_inc(v_snd_3344_);
lean_dec(v_a_3343_);
v___x_3345_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg(v_method_3335_, v_snd_3344_, v_inst_3333_);
lean_dec(v_inst_3333_);
lean_dec(v_snd_3344_);
if (lean_obj_tag(v___x_3345_) == 0)
{
lean_object* v_a_3346_; lean_object* v___x_3347_; 
v_a_3346_ = lean_ctor_get(v___x_3345_, 0);
lean_inc(v_a_3346_);
lean_dec_ref(v___x_3345_);
lean_inc_ref(v___y_3339_);
v___x_3347_ = lean_apply_4(v_onDidChange_3336_, v_p_3337_, v_a_3346_, v___y_3339_, lean_box(0));
if (lean_obj_tag(v___x_3347_) == 0)
{
lean_object* v_a_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3365_; 
v_a_3348_ = lean_ctor_get(v___x_3347_, 0);
v_isSharedCheck_3365_ = !lean_is_exclusive(v___x_3347_);
if (v_isSharedCheck_3365_ == 0)
{
v___x_3350_ = v___x_3347_;
v_isShared_3351_ = v_isSharedCheck_3365_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_a_3348_);
lean_dec(v___x_3347_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3365_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v_snd_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3363_; 
v_snd_3352_ = lean_ctor_get(v_a_3348_, 1);
v_isSharedCheck_3363_ = !lean_is_exclusive(v_a_3348_);
if (v_isSharedCheck_3363_ == 0)
{
lean_object* v_unused_3364_; 
v_unused_3364_ = lean_ctor_get(v_a_3348_, 0);
lean_dec(v_unused_3364_);
v___x_3354_ = v_a_3348_;
v_isShared_3355_ = v_isSharedCheck_3363_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_snd_3352_);
lean_dec(v_a_3348_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3363_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3356_; lean_object* v___x_3358_; 
v___x_3356_ = lean_box(0);
if (v_isShared_3355_ == 0)
{
lean_ctor_set(v___x_3354_, 0, v___x_3356_);
v___x_3358_ = v___x_3354_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v___x_3356_);
lean_ctor_set(v_reuseFailAlloc_3362_, 1, v_snd_3352_);
v___x_3358_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
lean_object* v___x_3360_; 
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 0, v___x_3358_);
v___x_3360_ = v___x_3350_;
goto v_reusejp_3359_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v___x_3358_);
v___x_3360_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3359_;
}
v_reusejp_3359_:
{
return v___x_3360_;
}
}
}
}
}
else
{
return v___x_3347_;
}
}
else
{
lean_object* v_a_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3373_; 
lean_dec_ref(v_p_3337_);
lean_dec_ref(v_onDidChange_3336_);
v_a_3366_ = lean_ctor_get(v___x_3345_, 0);
v_isSharedCheck_3373_ = !lean_is_exclusive(v___x_3345_);
if (v_isSharedCheck_3373_ == 0)
{
v___x_3368_ = v___x_3345_;
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_a_3366_);
lean_dec(v___x_3345_);
v___x_3368_ = lean_box(0);
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
v_resetjp_3367_:
{
lean_object* v___x_3371_; 
if (v_isShared_3369_ == 0)
{
v___x_3371_ = v___x_3368_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v_a_3366_);
v___x_3371_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
return v___x_3371_;
}
}
}
}
else
{
lean_object* v_a_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3381_; 
lean_dec_ref(v_p_3337_);
lean_dec_ref(v_onDidChange_3336_);
lean_dec(v_inst_3333_);
v_a_3374_ = lean_ctor_get(v___x_3342_, 0);
v_isSharedCheck_3381_ = !lean_is_exclusive(v___x_3342_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3376_ = v___x_3342_;
v_isShared_3377_ = v_isSharedCheck_3381_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_a_3374_);
lean_dec(v___x_3342_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3381_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
lean_object* v___x_3379_; 
if (v_isShared_3377_ == 0)
{
v___x_3379_ = v___x_3376_;
goto v_reusejp_3378_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v_a_3374_);
v___x_3379_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3378_;
}
v_reusejp_3378_:
{
return v___x_3379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__0___boxed(lean_object* v_inst_3382_, lean_object* v_pureOnDidChange_3383_, lean_object* v_method_3384_, lean_object* v_onDidChange_3385_, lean_object* v_p_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_){
_start:
{
lean_object* v_res_3390_; 
v_res_3390_ = l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__0(v_inst_3382_, v_pureOnDidChange_3383_, v_method_3384_, v_onDidChange_3385_, v_p_3386_, v___y_3387_, v___y_3388_);
lean_dec_ref(v___y_3388_);
lean_dec_ref(v_method_3384_);
return v_res_3390_;
}
}
static lean_object* _init_l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_3391_; 
v___x_3391_ = lean_mk_string_unchecked("Failed to convert response of previous request handler when chaining stateful LSP request handlers", 98, 98);
return v___x_3391_;
}
}
static lean_object* _init_l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___x_3392_ = lean_obj_once(&l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__0, &l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__0_once, _init_l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__0);
v___x_3393_ = l_Lean_Server_RequestError_internalError(v___x_3392_);
return v___x_3393_;
}
}
static lean_object* _init_l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__2(void){
_start:
{
lean_object* v___x_3394_; 
v___x_3394_ = lean_mk_string_unchecked("Failed to parse response of previous request handler when chaining stateful LSP request handlers", 96, 96);
return v___x_3394_;
}
}
static lean_object* _init_l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3395_ = lean_obj_once(&l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__2, &l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__2_once, _init_l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__2);
v___x_3396_ = l_Lean_Server_RequestError_internalError(v___x_3395_);
return v___x_3396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1(lean_object* v_inst_3397_, lean_object* v_inst_3398_, lean_object* v_pureHandle_3399_, lean_object* v_inst_3400_, lean_object* v_method_3401_, lean_object* v_handler_3402_, lean_object* v_p_3403_, lean_object* v_s_3404_, lean_object* v___y_3405_){
_start:
{
lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; 
lean_inc(v_p_3403_);
v___x_3407_ = lean_apply_1(v_inst_3397_, v_p_3403_);
lean_inc(v_inst_3398_);
v___x_3408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3408_, 0, v_inst_3398_);
lean_ctor_set(v___x_3408_, 1, v_s_3404_);
lean_inc_ref(v___y_3405_);
v___x_3409_ = lean_apply_4(v_pureHandle_3399_, v___x_3407_, v___x_3408_, v___y_3405_, lean_box(0));
if (lean_obj_tag(v___x_3409_) == 0)
{
lean_object* v_a_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3444_; 
v_a_3410_ = lean_ctor_get(v___x_3409_, 0);
v_isSharedCheck_3444_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3412_ = v___x_3409_;
v_isShared_3413_ = v_isSharedCheck_3444_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_a_3410_);
lean_dec(v___x_3409_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3444_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v_fst_3414_; lean_object* v_snd_3415_; lean_object* v_response_x3f_3416_; lean_object* v_serialized_3417_; uint8_t v_isComplete_3418_; lean_object* v_a_3420_; 
v_fst_3414_ = lean_ctor_get(v_a_3410_, 0);
lean_inc(v_fst_3414_);
v_snd_3415_ = lean_ctor_get(v_a_3410_, 1);
lean_inc(v_snd_3415_);
lean_dec(v_a_3410_);
v_response_x3f_3416_ = lean_ctor_get(v_fst_3414_, 0);
lean_inc(v_response_x3f_3416_);
v_serialized_3417_ = lean_ctor_get(v_fst_3414_, 1);
lean_inc_ref(v_serialized_3417_);
v_isComplete_3418_ = lean_ctor_get_uint8(v_fst_3414_, sizeof(void*)*2);
lean_dec(v_fst_3414_);
if (lean_obj_tag(v_response_x3f_3416_) == 0)
{
lean_object* v___x_3439_; 
v___x_3439_ = l_Lean_Json_parse(v_serialized_3417_);
if (lean_obj_tag(v___x_3439_) == 1)
{
lean_object* v_a_3440_; 
v_a_3440_ = lean_ctor_get(v___x_3439_, 0);
lean_inc(v_a_3440_);
lean_dec_ref(v___x_3439_);
v_a_3420_ = v_a_3440_;
goto v___jp_3419_;
}
else
{
lean_object* v___x_3441_; lean_object* v___x_3442_; 
lean_dec_ref(v___x_3439_);
lean_dec(v_snd_3415_);
lean_del_object(v___x_3412_);
lean_dec(v_p_3403_);
lean_dec_ref(v_handler_3402_);
lean_dec_ref(v_inst_3400_);
lean_dec(v_inst_3398_);
v___x_3441_ = lean_obj_once(&l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__3, &l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__3_once, _init_l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__3);
v___x_3442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3441_);
return v___x_3442_;
}
}
else
{
lean_object* v_val_3443_; 
lean_dec_ref(v_serialized_3417_);
v_val_3443_ = lean_ctor_get(v_response_x3f_3416_, 0);
lean_inc(v_val_3443_);
lean_dec_ref(v_response_x3f_3416_);
v_a_3420_ = v_val_3443_;
goto v___jp_3419_;
}
v___jp_3419_:
{
lean_object* v___x_3421_; 
v___x_3421_ = lean_apply_1(v_inst_3400_, v_a_3420_);
if (lean_obj_tag(v___x_3421_) == 1)
{
lean_object* v_a_3422_; lean_object* v___x_3423_; 
lean_del_object(v___x_3412_);
v_a_3422_ = lean_ctor_get(v___x_3421_, 0);
lean_inc(v_a_3422_);
lean_dec_ref(v___x_3421_);
v___x_3423_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21___redArg(v_method_3401_, v_snd_3415_, v_inst_3398_);
lean_dec(v_inst_3398_);
lean_dec(v_snd_3415_);
if (lean_obj_tag(v___x_3423_) == 0)
{
lean_object* v_a_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
v_a_3424_ = lean_ctor_get(v___x_3423_, 0);
lean_inc(v_a_3424_);
lean_dec_ref(v___x_3423_);
v___x_3425_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3425_, 0, v_a_3422_);
lean_ctor_set_uint8(v___x_3425_, sizeof(void*)*1, v_isComplete_3418_);
lean_inc_ref(v___y_3405_);
v___x_3426_ = lean_apply_5(v_handler_3402_, v_p_3403_, v___x_3425_, v_a_3424_, v___y_3405_, lean_box(0));
return v___x_3426_;
}
else
{
lean_object* v_a_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3434_; 
lean_dec(v_a_3422_);
lean_dec(v_p_3403_);
lean_dec_ref(v_handler_3402_);
v_a_3427_ = lean_ctor_get(v___x_3423_, 0);
v_isSharedCheck_3434_ = !lean_is_exclusive(v___x_3423_);
if (v_isSharedCheck_3434_ == 0)
{
v___x_3429_ = v___x_3423_;
v_isShared_3430_ = v_isSharedCheck_3434_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_a_3427_);
lean_dec(v___x_3423_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3434_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v___x_3432_; 
if (v_isShared_3430_ == 0)
{
v___x_3432_ = v___x_3429_;
goto v_reusejp_3431_;
}
else
{
lean_object* v_reuseFailAlloc_3433_; 
v_reuseFailAlloc_3433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3433_, 0, v_a_3427_);
v___x_3432_ = v_reuseFailAlloc_3433_;
goto v_reusejp_3431_;
}
v_reusejp_3431_:
{
return v___x_3432_;
}
}
}
}
else
{
lean_object* v___x_3435_; lean_object* v___x_3437_; 
lean_dec_ref(v___x_3421_);
lean_dec(v_snd_3415_);
lean_dec(v_p_3403_);
lean_dec_ref(v_handler_3402_);
lean_dec(v_inst_3398_);
v___x_3435_ = lean_obj_once(&l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__1, &l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__1_once, _init_l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___closed__1);
if (v_isShared_3413_ == 0)
{
lean_ctor_set_tag(v___x_3412_, 1);
lean_ctor_set(v___x_3412_, 0, v___x_3435_);
v___x_3437_ = v___x_3412_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v___x_3435_);
v___x_3437_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
return v___x_3437_;
}
}
}
}
}
else
{
lean_object* v_a_3445_; lean_object* v___x_3447_; uint8_t v_isShared_3448_; uint8_t v_isSharedCheck_3452_; 
lean_dec(v_p_3403_);
lean_dec_ref(v_handler_3402_);
lean_dec_ref(v_inst_3400_);
lean_dec(v_inst_3398_);
v_a_3445_ = lean_ctor_get(v___x_3409_, 0);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3452_ == 0)
{
v___x_3447_ = v___x_3409_;
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
else
{
lean_inc(v_a_3445_);
lean_dec(v___x_3409_);
v___x_3447_ = lean_box(0);
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
v_resetjp_3446_:
{
lean_object* v___x_3450_; 
if (v_isShared_3448_ == 0)
{
v___x_3450_ = v___x_3447_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v_a_3445_);
v___x_3450_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
return v___x_3450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___boxed(lean_object* v_inst_3453_, lean_object* v_inst_3454_, lean_object* v_pureHandle_3455_, lean_object* v_inst_3456_, lean_object* v_method_3457_, lean_object* v_handler_3458_, lean_object* v_p_3459_, lean_object* v_s_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_){
_start:
{
lean_object* v_res_3463_; 
v_res_3463_ = l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1(v_inst_3453_, v_inst_3454_, v_pureHandle_3455_, v_inst_3456_, v_method_3457_, v_handler_3458_, v_p_3459_, v_s_3460_, v___y_3461_);
lean_dec_ref(v___y_3461_);
lean_dec_ref(v_method_3457_);
return v_res_3463_;
}
}
static lean_object* _init_l_Lean_Server_chainStatefulLspRequestHandler___redArg___closed__0(void){
_start:
{
lean_object* v___x_3464_; 
v___x_3464_ = lean_mk_string_unchecked("Failed to chain stateful LSP request handler for '", 50, 50);
return v___x_3464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg(lean_object* v_method_3465_, lean_object* v_inst_3466_, lean_object* v_inst_3467_, lean_object* v_inst_3468_, lean_object* v_inst_3469_, lean_object* v_inst_3470_, lean_object* v_inst_3471_, lean_object* v_handler_3472_, lean_object* v_onDidChange_3473_){
_start:
{
lean_object* v___x_3475_; 
v___x_3475_ = l_Lean_initializing();
if (lean_obj_tag(v___x_3475_) == 0)
{
lean_object* v_a_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3516_; 
v_a_3476_ = lean_ctor_get(v___x_3475_, 0);
v_isSharedCheck_3516_ = !lean_is_exclusive(v___x_3475_);
if (v_isSharedCheck_3516_ == 0)
{
v___x_3478_ = v___x_3475_;
v_isShared_3479_ = v_isSharedCheck_3516_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_a_3476_);
lean_dec(v___x_3475_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3516_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
uint8_t v___x_3480_; 
v___x_3480_ = lean_unbox(v_a_3476_);
lean_dec(v_a_3476_);
if (v___x_3480_ == 0)
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3487_; 
lean_dec_ref(v_onDidChange_3473_);
lean_dec_ref(v_handler_3472_);
lean_dec(v_inst_3471_);
lean_dec_ref(v_inst_3470_);
lean_dec_ref(v_inst_3469_);
lean_dec_ref(v_inst_3468_);
lean_dec_ref(v_inst_3467_);
lean_dec_ref(v_inst_3466_);
v___x_3481_ = lean_obj_once(&l_Lean_Server_chainStatefulLspRequestHandler___redArg___closed__0, &l_Lean_Server_chainStatefulLspRequestHandler___redArg___closed__0_once, _init_l_Lean_Server_chainStatefulLspRequestHandler___redArg___closed__0);
v___x_3482_ = lean_string_append(v___x_3481_, v_method_3465_);
lean_dec_ref(v_method_3465_);
v___x_3483_ = lean_obj_once(&l_Lean_Server_registerLspRequestHandler___redArg___closed__1, &l_Lean_Server_registerLspRequestHandler___redArg___closed__1_once, _init_l_Lean_Server_registerLspRequestHandler___redArg___closed__1);
v___x_3484_ = lean_string_append(v___x_3482_, v___x_3483_);
v___x_3485_ = lean_mk_io_user_error(v___x_3484_);
if (v_isShared_3479_ == 0)
{
lean_ctor_set_tag(v___x_3478_, 1);
lean_ctor_set(v___x_3478_, 0, v___x_3485_);
v___x_3487_ = v___x_3478_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v___x_3485_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
else
{
lean_object* v___x_3489_; 
v___x_3489_ = l_Lean_Server_lookupStatefulLspRequestHandler(v_method_3465_);
if (lean_obj_tag(v___x_3489_) == 1)
{
lean_object* v_val_3490_; lean_object* v_pureHandle_3491_; lean_object* v_pureOnDidChange_3492_; lean_object* v_initState_3493_; lean_object* v_completeness_3494_; lean_object* v___x_3495_; 
lean_del_object(v___x_3478_);
v_val_3490_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_val_3490_);
lean_dec_ref(v___x_3489_);
v_pureHandle_3491_ = lean_ctor_get(v_val_3490_, 1);
lean_inc_ref(v_pureHandle_3491_);
v_pureOnDidChange_3492_ = lean_ctor_get(v_val_3490_, 3);
lean_inc_ref(v_pureOnDidChange_3492_);
v_initState_3493_ = lean_ctor_get(v_val_3490_, 6);
lean_inc(v_initState_3493_);
v_completeness_3494_ = lean_ctor_get(v_val_3490_, 8);
lean_inc(v_completeness_3494_);
lean_dec(v_val_3490_);
v___x_3495_ = l___private_Lean_Server_Requests_0__Lean_Server_getIOState_x21___redArg(v_method_3465_, v_initState_3493_, v_inst_3471_);
lean_dec(v_initState_3493_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; lean_object* v___f_3497_; lean_object* v___f_3498_; lean_object* v___x_3499_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3496_);
lean_dec_ref(v___x_3495_);
lean_inc_ref_n(v_method_3465_, 2);
lean_inc_n(v_inst_3471_, 2);
v___f_3497_ = lean_alloc_closure((void*)(l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__0___boxed), 8, 4);
lean_closure_set(v___f_3497_, 0, v_inst_3471_);
lean_closure_set(v___f_3497_, 1, v_pureOnDidChange_3492_);
lean_closure_set(v___f_3497_, 2, v_method_3465_);
lean_closure_set(v___f_3497_, 3, v_onDidChange_3473_);
v___f_3498_ = lean_alloc_closure((void*)(l_Lean_Server_chainStatefulLspRequestHandler___redArg___lam__1___boxed), 10, 6);
lean_closure_set(v___f_3498_, 0, v_inst_3467_);
lean_closure_set(v___f_3498_, 1, v_inst_3471_);
lean_closure_set(v___f_3498_, 2, v_pureHandle_3491_);
lean_closure_set(v___f_3498_, 3, v_inst_3469_);
lean_closure_set(v___f_3498_, 4, v_method_3465_);
lean_closure_set(v___f_3498_, 5, v_handler_3472_);
v___x_3499_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___redArg(v_method_3465_, v_completeness_3494_, v_inst_3466_, v_inst_3468_, v_inst_3470_, v_inst_3471_, v_a_3496_, v___f_3498_, v___f_3497_);
return v___x_3499_;
}
else
{
lean_object* v_a_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3507_; 
lean_dec(v_completeness_3494_);
lean_dec_ref(v_pureOnDidChange_3492_);
lean_dec_ref(v_pureHandle_3491_);
lean_dec_ref(v_onDidChange_3473_);
lean_dec_ref(v_handler_3472_);
lean_dec(v_inst_3471_);
lean_dec_ref(v_inst_3470_);
lean_dec_ref(v_inst_3469_);
lean_dec_ref(v_inst_3468_);
lean_dec_ref(v_inst_3467_);
lean_dec_ref(v_inst_3466_);
lean_dec_ref(v_method_3465_);
v_a_3500_ = lean_ctor_get(v___x_3495_, 0);
v_isSharedCheck_3507_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3502_ = v___x_3495_;
v_isShared_3503_ = v_isSharedCheck_3507_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_a_3500_);
lean_dec(v___x_3495_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3507_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3505_; 
if (v_isShared_3503_ == 0)
{
v___x_3505_ = v___x_3502_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v_a_3500_);
v___x_3505_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
return v___x_3505_;
}
}
}
}
else
{
lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3514_; 
lean_dec(v___x_3489_);
lean_dec_ref(v_onDidChange_3473_);
lean_dec_ref(v_handler_3472_);
lean_dec(v_inst_3471_);
lean_dec_ref(v_inst_3470_);
lean_dec_ref(v_inst_3469_);
lean_dec_ref(v_inst_3468_);
lean_dec_ref(v_inst_3467_);
lean_dec_ref(v_inst_3466_);
v___x_3508_ = lean_obj_once(&l_Lean_Server_chainStatefulLspRequestHandler___redArg___closed__0, &l_Lean_Server_chainStatefulLspRequestHandler___redArg___closed__0_once, _init_l_Lean_Server_chainStatefulLspRequestHandler___redArg___closed__0);
v___x_3509_ = lean_string_append(v___x_3508_, v_method_3465_);
lean_dec_ref(v_method_3465_);
v___x_3510_ = lean_obj_once(&l_Lean_Server_chainLspRequestHandler___redArg___closed__1, &l_Lean_Server_chainLspRequestHandler___redArg___closed__1_once, _init_l_Lean_Server_chainLspRequestHandler___redArg___closed__1);
v___x_3511_ = lean_string_append(v___x_3509_, v___x_3510_);
v___x_3512_ = lean_mk_io_user_error(v___x_3511_);
if (v_isShared_3479_ == 0)
{
lean_ctor_set_tag(v___x_3478_, 1);
lean_ctor_set(v___x_3478_, 0, v___x_3512_);
v___x_3514_ = v___x_3478_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v___x_3512_);
v___x_3514_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
return v___x_3514_;
}
}
}
}
}
else
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3524_; 
lean_dec_ref(v_onDidChange_3473_);
lean_dec_ref(v_handler_3472_);
lean_dec(v_inst_3471_);
lean_dec_ref(v_inst_3470_);
lean_dec_ref(v_inst_3469_);
lean_dec_ref(v_inst_3468_);
lean_dec_ref(v_inst_3467_);
lean_dec_ref(v_inst_3466_);
lean_dec_ref(v_method_3465_);
v_a_3517_ = lean_ctor_get(v___x_3475_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3475_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3519_ = v___x_3475_;
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3475_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3522_; 
if (v_isShared_3520_ == 0)
{
v___x_3522_ = v___x_3519_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_a_3517_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___redArg___boxed(lean_object* v_method_3525_, lean_object* v_inst_3526_, lean_object* v_inst_3527_, lean_object* v_inst_3528_, lean_object* v_inst_3529_, lean_object* v_inst_3530_, lean_object* v_inst_3531_, lean_object* v_handler_3532_, lean_object* v_onDidChange_3533_, lean_object* v_a_3534_){
_start:
{
lean_object* v_res_3535_; 
v_res_3535_ = l_Lean_Server_chainStatefulLspRequestHandler___redArg(v_method_3525_, v_inst_3526_, v_inst_3527_, v_inst_3528_, v_inst_3529_, v_inst_3530_, v_inst_3531_, v_handler_3532_, v_onDidChange_3533_);
return v_res_3535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler(lean_object* v_method_3536_, lean_object* v_paramType_3537_, lean_object* v_inst_3538_, lean_object* v_inst_3539_, lean_object* v_inst_3540_, lean_object* v_respType_3541_, lean_object* v_inst_3542_, lean_object* v_inst_3543_, lean_object* v_stateType_3544_, lean_object* v_inst_3545_, lean_object* v_handler_3546_, lean_object* v_onDidChange_3547_){
_start:
{
lean_object* v___x_3549_; 
v___x_3549_ = l_Lean_Server_chainStatefulLspRequestHandler___redArg(v_method_3536_, v_inst_3538_, v_inst_3539_, v_inst_3540_, v_inst_3542_, v_inst_3543_, v_inst_3545_, v_handler_3546_, v_onDidChange_3547_);
return v___x_3549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_chainStatefulLspRequestHandler___boxed(lean_object* v_method_3550_, lean_object* v_paramType_3551_, lean_object* v_inst_3552_, lean_object* v_inst_3553_, lean_object* v_inst_3554_, lean_object* v_respType_3555_, lean_object* v_inst_3556_, lean_object* v_inst_3557_, lean_object* v_stateType_3558_, lean_object* v_inst_3559_, lean_object* v_handler_3560_, lean_object* v_onDidChange_3561_, lean_object* v_a_3562_){
_start:
{
lean_object* v_res_3563_; 
v_res_3563_ = l_Lean_Server_chainStatefulLspRequestHandler(v_method_3550_, v_paramType_3551_, v_inst_3552_, v_inst_3553_, v_inst_3554_, v_respType_3555_, v_inst_3556_, v_inst_3557_, v_stateType_3558_, v_inst_3559_, v_handler_3560_, v_onDidChange_3561_);
return v_res_3563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleOnDidChange___lam__0(lean_object* v_p_3564_, lean_object* v_x_3565_, lean_object* v_handler_3566_, lean_object* v___y_3567_){
_start:
{
lean_object* v_onDidChange_3569_; lean_object* v___x_3570_; 
v_onDidChange_3569_ = lean_ctor_get(v_handler_3566_, 4);
lean_inc_ref(v_onDidChange_3569_);
lean_dec_ref(v_handler_3566_);
lean_inc_ref(v___y_3567_);
v___x_3570_ = lean_apply_3(v_onDidChange_3569_, v_p_3564_, v___y_3567_, lean_box(0));
return v___x_3570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleOnDidChange___lam__0___boxed(lean_object* v_p_3571_, lean_object* v_x_3572_, lean_object* v_handler_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_){
_start:
{
lean_object* v_res_3576_; 
v_res_3576_ = l_Lean_Server_handleOnDidChange___lam__0(v_p_3571_, v_x_3572_, v_handler_3573_, v___y_3574_);
lean_dec_ref(v___y_3574_);
lean_dec_ref(v_x_3572_);
return v_res_3576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_3577_, lean_object* v_keys_3578_, lean_object* v_vals_3579_, lean_object* v_i_3580_, lean_object* v_acc_3581_, lean_object* v___y_3582_){
_start:
{
lean_object* v___x_3584_; uint8_t v___x_3585_; 
v___x_3584_ = lean_array_get_size(v_keys_3578_);
v___x_3585_ = lean_nat_dec_lt(v_i_3580_, v___x_3584_);
if (v___x_3585_ == 0)
{
lean_object* v___x_3586_; 
lean_dec(v_i_3580_);
lean_dec_ref(v_f_3577_);
v___x_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3586_, 0, v_acc_3581_);
return v___x_3586_;
}
else
{
lean_object* v_k_3587_; lean_object* v_v_3588_; lean_object* v___x_3589_; 
v_k_3587_ = lean_array_fget_borrowed(v_keys_3578_, v_i_3580_);
v_v_3588_ = lean_array_fget_borrowed(v_vals_3579_, v_i_3580_);
lean_inc_ref(v_f_3577_);
lean_inc_ref(v___y_3582_);
lean_inc(v_v_3588_);
lean_inc(v_k_3587_);
v___x_3589_ = lean_apply_5(v_f_3577_, v_acc_3581_, v_k_3587_, v_v_3588_, v___y_3582_, lean_box(0));
if (lean_obj_tag(v___x_3589_) == 0)
{
lean_object* v_a_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; 
v_a_3590_ = lean_ctor_get(v___x_3589_, 0);
lean_inc(v_a_3590_);
lean_dec_ref(v___x_3589_);
v___x_3591_ = lean_unsigned_to_nat(1u);
v___x_3592_ = lean_nat_add(v_i_3580_, v___x_3591_);
lean_dec(v_i_3580_);
v_i_3580_ = v___x_3592_;
v_acc_3581_ = v_a_3590_;
goto _start;
}
else
{
lean_dec(v_i_3580_);
lean_dec_ref(v_f_3577_);
return v___x_3589_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_3594_, lean_object* v_keys_3595_, lean_object* v_vals_3596_, lean_object* v_i_3597_, lean_object* v_acc_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_){
_start:
{
lean_object* v_res_3601_; 
v_res_3601_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__3___redArg(v_f_3594_, v_keys_3595_, v_vals_3596_, v_i_3597_, v_acc_3598_, v___y_3599_);
lean_dec_ref(v___y_3599_);
lean_dec_ref(v_vals_3596_);
lean_dec_ref(v_keys_3595_);
return v_res_3601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1___redArg(lean_object* v_f_3602_, lean_object* v_x_3603_, lean_object* v_x_3604_, lean_object* v___y_3605_){
_start:
{
if (lean_obj_tag(v_x_3603_) == 0)
{
lean_object* v_es_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3627_; 
v_es_3607_ = lean_ctor_get(v_x_3603_, 0);
v_isSharedCheck_3627_ = !lean_is_exclusive(v_x_3603_);
if (v_isSharedCheck_3627_ == 0)
{
v___x_3609_ = v_x_3603_;
v_isShared_3610_ = v_isSharedCheck_3627_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_es_3607_);
lean_dec(v_x_3603_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3627_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___x_3611_; lean_object* v___x_3612_; uint8_t v___x_3613_; 
v___x_3611_ = lean_unsigned_to_nat(0u);
v___x_3612_ = lean_array_get_size(v_es_3607_);
v___x_3613_ = lean_nat_dec_lt(v___x_3611_, v___x_3612_);
if (v___x_3613_ == 0)
{
lean_object* v___x_3615_; 
lean_dec_ref(v_es_3607_);
lean_dec_ref(v_f_3602_);
if (v_isShared_3610_ == 0)
{
lean_ctor_set(v___x_3609_, 0, v_x_3604_);
v___x_3615_ = v___x_3609_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3616_; 
v_reuseFailAlloc_3616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3616_, 0, v_x_3604_);
v___x_3615_ = v_reuseFailAlloc_3616_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
return v___x_3615_;
}
}
else
{
uint8_t v___x_3617_; 
v___x_3617_ = lean_nat_dec_le(v___x_3612_, v___x_3612_);
if (v___x_3617_ == 0)
{
if (v___x_3613_ == 0)
{
lean_object* v___x_3619_; 
lean_dec_ref(v_es_3607_);
lean_dec_ref(v_f_3602_);
if (v_isShared_3610_ == 0)
{
lean_ctor_set(v___x_3609_, 0, v_x_3604_);
v___x_3619_ = v___x_3609_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v_x_3604_);
v___x_3619_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
return v___x_3619_;
}
}
else
{
size_t v___x_3621_; size_t v___x_3622_; lean_object* v___x_3623_; 
lean_del_object(v___x_3609_);
v___x_3621_ = ((size_t)0ULL);
v___x_3622_ = lean_usize_of_nat(v___x_3612_);
v___x_3623_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3602_, v_es_3607_, v___x_3621_, v___x_3622_, v_x_3604_, v___y_3605_);
lean_dec_ref(v_es_3607_);
return v___x_3623_;
}
}
else
{
size_t v___x_3624_; size_t v___x_3625_; lean_object* v___x_3626_; 
lean_del_object(v___x_3609_);
v___x_3624_ = ((size_t)0ULL);
v___x_3625_ = lean_usize_of_nat(v___x_3612_);
v___x_3626_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3602_, v_es_3607_, v___x_3624_, v___x_3625_, v_x_3604_, v___y_3605_);
lean_dec_ref(v_es_3607_);
return v___x_3626_;
}
}
}
}
else
{
lean_object* v_ks_3628_; lean_object* v_vs_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; 
v_ks_3628_ = lean_ctor_get(v_x_3603_, 0);
lean_inc_ref(v_ks_3628_);
v_vs_3629_ = lean_ctor_get(v_x_3603_, 1);
lean_inc_ref(v_vs_3629_);
lean_dec_ref(v_x_3603_);
v___x_3630_ = lean_unsigned_to_nat(0u);
v___x_3631_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__3___redArg(v_f_3602_, v_ks_3628_, v_vs_3629_, v___x_3630_, v_x_3604_, v___y_3605_);
lean_dec_ref(v_vs_3629_);
lean_dec_ref(v_ks_3628_);
return v___x_3631_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_f_3632_, lean_object* v_as_3633_, size_t v_i_3634_, size_t v_stop_3635_, lean_object* v_b_3636_, lean_object* v___y_3637_){
_start:
{
lean_object* v_a_3640_; lean_object* v___y_3645_; uint8_t v___x_3647_; 
v___x_3647_ = lean_usize_dec_eq(v_i_3634_, v_stop_3635_);
if (v___x_3647_ == 0)
{
lean_object* v___x_3648_; 
v___x_3648_ = lean_array_uget_borrowed(v_as_3633_, v_i_3634_);
switch(lean_obj_tag(v___x_3648_))
{
case 0:
{
lean_object* v_key_3649_; lean_object* v_val_3650_; lean_object* v___x_3651_; 
v_key_3649_ = lean_ctor_get(v___x_3648_, 0);
v_val_3650_ = lean_ctor_get(v___x_3648_, 1);
lean_inc_ref(v_f_3632_);
lean_inc_ref(v___y_3637_);
lean_inc(v_val_3650_);
lean_inc(v_key_3649_);
v___x_3651_ = lean_apply_5(v_f_3632_, v_b_3636_, v_key_3649_, v_val_3650_, v___y_3637_, lean_box(0));
v___y_3645_ = v___x_3651_;
goto v___jp_3644_;
}
case 1:
{
lean_object* v_node_3652_; lean_object* v___x_3653_; 
v_node_3652_ = lean_ctor_get(v___x_3648_, 0);
lean_inc(v_node_3652_);
lean_inc_ref(v_f_3632_);
v___x_3653_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1___redArg(v_f_3632_, v_node_3652_, v_b_3636_, v___y_3637_);
v___y_3645_ = v___x_3653_;
goto v___jp_3644_;
}
default: 
{
v_a_3640_ = v_b_3636_;
goto v___jp_3639_;
}
}
}
else
{
lean_object* v___x_3654_; 
lean_dec_ref(v_f_3632_);
v___x_3654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3654_, 0, v_b_3636_);
return v___x_3654_;
}
v___jp_3639_:
{
size_t v___x_3641_; size_t v___x_3642_; 
v___x_3641_ = ((size_t)1ULL);
v___x_3642_ = lean_usize_add(v_i_3634_, v___x_3641_);
v_i_3634_ = v___x_3642_;
v_b_3636_ = v_a_3640_;
goto _start;
}
v___jp_3644_:
{
if (lean_obj_tag(v___y_3645_) == 0)
{
lean_object* v_a_3646_; 
v_a_3646_ = lean_ctor_get(v___y_3645_, 0);
lean_inc(v_a_3646_);
lean_dec_ref(v___y_3645_);
v_a_3640_ = v_a_3646_;
goto v___jp_3639_;
}
else
{
lean_dec_ref(v_f_3632_);
return v___y_3645_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_3655_, lean_object* v_as_3656_, lean_object* v_i_3657_, lean_object* v_stop_3658_, lean_object* v_b_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_){
_start:
{
size_t v_i_boxed_3662_; size_t v_stop_boxed_3663_; lean_object* v_res_3664_; 
v_i_boxed_3662_ = lean_unbox_usize(v_i_3657_);
lean_dec(v_i_3657_);
v_stop_boxed_3663_ = lean_unbox_usize(v_stop_3658_);
lean_dec(v_stop_3658_);
v_res_3664_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3655_, v_as_3656_, v_i_boxed_3662_, v_stop_boxed_3663_, v_b_3659_, v___y_3660_);
lean_dec_ref(v___y_3660_);
lean_dec_ref(v_as_3656_);
return v_res_3664_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_3665_, lean_object* v_x_3666_, lean_object* v_x_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_){
_start:
{
lean_object* v_res_3670_; 
v_res_3670_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1___redArg(v_f_3665_, v_x_3666_, v_x_3667_, v___y_3668_);
lean_dec_ref(v___y_3668_);
return v_res_3670_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg___lam__0(lean_object* v_f_3671_, lean_object* v_x_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_){
_start:
{
lean_object* v___x_3677_; 
lean_inc_ref(v___y_3675_);
v___x_3677_ = lean_apply_4(v_f_3671_, v___y_3673_, v___y_3674_, v___y_3675_, lean_box(0));
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg___lam__0___boxed(lean_object* v_f_3678_, lean_object* v_x_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_){
_start:
{
lean_object* v_res_3684_; 
v_res_3684_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg___lam__0(v_f_3678_, v_x_3679_, v___y_3680_, v___y_3681_, v___y_3682_);
lean_dec_ref(v___y_3682_);
return v_res_3684_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg(lean_object* v_map_3685_, lean_object* v_f_3686_, lean_object* v___y_3687_){
_start:
{
lean_object* v___f_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; 
v___f_3689_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3689_, 0, v_f_3686_);
v___x_3690_ = lean_box(0);
v___x_3691_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1___redArg(v___f_3689_, v_map_3685_, v___x_3690_, v___y_3687_);
return v___x_3691_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg___boxed(lean_object* v_map_3692_, lean_object* v_f_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_){
_start:
{
lean_object* v_res_3696_; 
v_res_3696_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg(v_map_3692_, v_f_3693_, v___y_3694_);
lean_dec_ref(v___y_3694_);
return v_res_3696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleOnDidChange(lean_object* v_p_3697_, lean_object* v_a_3698_){
_start:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___f_3702_; lean_object* v___x_3703_; 
v___x_3700_ = l_Lean_Server_statefulRequestHandlers;
v___x_3701_ = lean_st_ref_get(v___x_3700_);
v___f_3702_ = lean_alloc_closure((void*)(l_Lean_Server_handleOnDidChange___lam__0___boxed), 5, 1);
lean_closure_set(v___f_3702_, 0, v_p_3697_);
v___x_3703_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg(v___x_3701_, v___f_3702_, v_a_3698_);
return v___x_3703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleOnDidChange___boxed(lean_object* v_p_3704_, lean_object* v_a_3705_, lean_object* v_a_3706_){
_start:
{
lean_object* v_res_3707_; 
v_res_3707_ = l_Lean_Server_handleOnDidChange(v_p_3704_, v_a_3705_);
lean_dec_ref(v_a_3705_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0(lean_object* v_00_u03b2_3708_, lean_object* v_map_3709_, lean_object* v_f_3710_, lean_object* v___y_3711_){
_start:
{
lean_object* v___x_3713_; 
v___x_3713_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___redArg(v_map_3709_, v_f_3710_, v___y_3711_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0___boxed(lean_object* v_00_u03b2_3714_, lean_object* v_map_3715_, lean_object* v_f_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_){
_start:
{
lean_object* v_res_3719_; 
v_res_3719_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0(v_00_u03b2_3714_, v_map_3715_, v_f_3716_, v___y_3717_);
lean_dec_ref(v___y_3717_);
return v_res_3719_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0___redArg(lean_object* v_map_3720_, lean_object* v_f_3721_, lean_object* v_init_3722_, lean_object* v___y_3723_){
_start:
{
lean_object* v___x_3725_; 
v___x_3725_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1___redArg(v_f_3721_, v_map_3720_, v_init_3722_, v___y_3723_);
return v___x_3725_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0___redArg___boxed(lean_object* v_map_3726_, lean_object* v_f_3727_, lean_object* v_init_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_){
_start:
{
lean_object* v_res_3731_; 
v_res_3731_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0___redArg(v_map_3726_, v_f_3727_, v_init_3728_, v___y_3729_);
lean_dec_ref(v___y_3729_);
return v_res_3731_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0(lean_object* v_00_u03c3_3732_, lean_object* v_00_u03b2_3733_, lean_object* v_map_3734_, lean_object* v_f_3735_, lean_object* v_init_3736_, lean_object* v___y_3737_){
_start:
{
lean_object* v___x_3739_; 
v___x_3739_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1___redArg(v_f_3735_, v_map_3734_, v_init_3736_, v___y_3737_);
return v___x_3739_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0___boxed(lean_object* v_00_u03c3_3740_, lean_object* v_00_u03b2_3741_, lean_object* v_map_3742_, lean_object* v_f_3743_, lean_object* v_init_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_){
_start:
{
lean_object* v_res_3747_; 
v_res_3747_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0(v_00_u03c3_3740_, v_00_u03b2_3741_, v_map_3742_, v_f_3743_, v_init_3744_, v___y_3745_);
lean_dec_ref(v___y_3745_);
return v_res_3747_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_3748_, lean_object* v_00_u03b1_3749_, lean_object* v_00_u03b2_3750_, lean_object* v_f_3751_, lean_object* v_x_3752_, lean_object* v_x_3753_, lean_object* v___y_3754_){
_start:
{
lean_object* v___x_3756_; 
v___x_3756_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1___redArg(v_f_3751_, v_x_3752_, v_x_3753_, v___y_3754_);
return v___x_3756_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_3757_, lean_object* v_00_u03b1_3758_, lean_object* v_00_u03b2_3759_, lean_object* v_f_3760_, lean_object* v_x_3761_, lean_object* v_x_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_){
_start:
{
lean_object* v_res_3765_; 
v_res_3765_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1(v_00_u03c3_3757_, v_00_u03b1_3758_, v_00_u03b2_3759_, v_f_3760_, v_x_3761_, v_x_3762_, v___y_3763_);
lean_dec_ref(v___y_3763_);
return v_res_3765_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_3766_, lean_object* v_00_u03b2_3767_, lean_object* v_00_u03c3_3768_, lean_object* v_f_3769_, lean_object* v_as_3770_, size_t v_i_3771_, size_t v_stop_3772_, lean_object* v_b_3773_, lean_object* v___y_3774_){
_start:
{
lean_object* v___x_3776_; 
v___x_3776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3769_, v_as_3770_, v_i_3771_, v_stop_3772_, v_b_3773_, v___y_3774_);
return v___x_3776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3777_, lean_object* v_00_u03b2_3778_, lean_object* v_00_u03c3_3779_, lean_object* v_f_3780_, lean_object* v_as_3781_, lean_object* v_i_3782_, lean_object* v_stop_3783_, lean_object* v_b_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_){
_start:
{
size_t v_i_boxed_3787_; size_t v_stop_boxed_3788_; lean_object* v_res_3789_; 
v_i_boxed_3787_ = lean_unbox_usize(v_i_3782_);
lean_dec(v_i_3782_);
v_stop_boxed_3788_ = lean_unbox_usize(v_stop_3783_);
lean_dec(v_stop_3783_);
v_res_3789_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_3777_, v_00_u03b2_3778_, v_00_u03c3_3779_, v_f_3780_, v_as_3781_, v_i_boxed_3787_, v_stop_boxed_3788_, v_b_3784_, v___y_3785_);
lean_dec_ref(v___y_3785_);
lean_dec_ref(v_as_3781_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03c3_3790_, lean_object* v_00_u03b1_3791_, lean_object* v_00_u03b2_3792_, lean_object* v_f_3793_, lean_object* v_keys_3794_, lean_object* v_vals_3795_, lean_object* v_heq_3796_, lean_object* v_i_3797_, lean_object* v_acc_3798_, lean_object* v___y_3799_){
_start:
{
lean_object* v___x_3801_; 
v___x_3801_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__3___redArg(v_f_3793_, v_keys_3794_, v_vals_3795_, v_i_3797_, v_acc_3798_, v___y_3799_);
return v___x_3801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03c3_3802_, lean_object* v_00_u03b1_3803_, lean_object* v_00_u03b2_3804_, lean_object* v_f_3805_, lean_object* v_keys_3806_, lean_object* v_vals_3807_, lean_object* v_heq_3808_, lean_object* v_i_3809_, lean_object* v_acc_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_){
_start:
{
lean_object* v_res_3813_; 
v_res_3813_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_handleOnDidChange_spec__0_spec__0_spec__1_spec__3(v_00_u03c3_3802_, v_00_u03b1_3803_, v_00_u03b2_3804_, v_f_3805_, v_keys_3806_, v_vals_3807_, v_heq_3808_, v_i_3809_, v_acc_3810_, v___y_3811_);
lean_dec_ref(v___y_3811_);
lean_dec_ref(v_vals_3807_);
lean_dec_ref(v_keys_3806_);
return v_res_3813_;
}
}
static lean_object* _init_l_Lean_Server_handleLspRequest___closed__0(void){
_start:
{
lean_object* v___x_3814_; 
v___x_3814_ = lean_mk_string_unchecked("request '", 9, 9);
return v___x_3814_;
}
}
static lean_object* _init_l_Lean_Server_handleLspRequest___closed__1(void){
_start:
{
lean_object* v___x_3815_; 
v___x_3815_ = lean_mk_string_unchecked("' routed through watchdog but unknown in worker; are both using the same plugins\?", 81, 81);
return v___x_3815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleLspRequest(lean_object* v_method_3816_, lean_object* v_params_3817_, lean_object* v_a_3818_){
_start:
{
uint8_t v___x_3820_; 
v___x_3820_ = l_Lean_Server_isStatefulLspRequestMethod(v_method_3816_);
if (v___x_3820_ == 0)
{
lean_object* v___x_3821_; lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3837_; 
v___x_3821_ = l_Lean_Server_lookupLspRequestHandler(v_method_3816_);
v_a_3822_ = lean_ctor_get(v___x_3821_, 0);
v_isSharedCheck_3837_ = !lean_is_exclusive(v___x_3821_);
if (v_isSharedCheck_3837_ == 0)
{
v___x_3824_ = v___x_3821_;
v_isShared_3825_ = v_isSharedCheck_3837_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v___x_3821_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3837_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
if (lean_obj_tag(v_a_3822_) == 0)
{
lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3832_; 
lean_dec(v_params_3817_);
v___x_3826_ = lean_obj_once(&l_Lean_Server_handleLspRequest___closed__0, &l_Lean_Server_handleLspRequest___closed__0_once, _init_l_Lean_Server_handleLspRequest___closed__0);
v___x_3827_ = lean_string_append(v___x_3826_, v_method_3816_);
v___x_3828_ = lean_obj_once(&l_Lean_Server_handleLspRequest___closed__1, &l_Lean_Server_handleLspRequest___closed__1_once, _init_l_Lean_Server_handleLspRequest___closed__1);
v___x_3829_ = lean_string_append(v___x_3827_, v___x_3828_);
v___x_3830_ = l_Lean_Server_RequestError_internalError(v___x_3829_);
if (v_isShared_3825_ == 0)
{
lean_ctor_set_tag(v___x_3824_, 1);
lean_ctor_set(v___x_3824_, 0, v___x_3830_);
v___x_3832_ = v___x_3824_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v___x_3830_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
return v___x_3832_;
}
}
else
{
lean_object* v_val_3834_; lean_object* v_handle_3835_; lean_object* v___x_3836_; 
lean_del_object(v___x_3824_);
v_val_3834_ = lean_ctor_get(v_a_3822_, 0);
lean_inc(v_val_3834_);
lean_dec_ref(v_a_3822_);
v_handle_3835_ = lean_ctor_get(v_val_3834_, 1);
lean_inc_ref(v_handle_3835_);
lean_dec(v_val_3834_);
lean_inc_ref(v_a_3818_);
v___x_3836_ = lean_apply_3(v_handle_3835_, v_params_3817_, v_a_3818_, lean_box(0));
return v___x_3836_;
}
}
}
else
{
lean_object* v___x_3838_; 
v___x_3838_ = l_Lean_Server_lookupStatefulLspRequestHandler(v_method_3816_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; 
lean_dec(v_params_3817_);
v___x_3839_ = lean_obj_once(&l_Lean_Server_handleLspRequest___closed__0, &l_Lean_Server_handleLspRequest___closed__0_once, _init_l_Lean_Server_handleLspRequest___closed__0);
v___x_3840_ = lean_string_append(v___x_3839_, v_method_3816_);
v___x_3841_ = lean_obj_once(&l_Lean_Server_handleLspRequest___closed__1, &l_Lean_Server_handleLspRequest___closed__1_once, _init_l_Lean_Server_handleLspRequest___closed__1);
v___x_3842_ = lean_string_append(v___x_3840_, v___x_3841_);
v___x_3843_ = l_Lean_Server_RequestError_internalError(v___x_3842_);
v___x_3844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3844_, 0, v___x_3843_);
return v___x_3844_;
}
else
{
lean_object* v_val_3845_; lean_object* v_handle_3846_; lean_object* v___x_3847_; 
v_val_3845_ = lean_ctor_get(v___x_3838_, 0);
lean_inc(v_val_3845_);
lean_dec_ref(v___x_3838_);
v_handle_3846_ = lean_ctor_get(v_val_3845_, 2);
lean_inc_ref(v_handle_3846_);
lean_dec(v_val_3845_);
lean_inc_ref(v_a_3818_);
v___x_3847_ = lean_apply_3(v_handle_3846_, v_params_3817_, v_a_3818_, lean_box(0));
return v___x_3847_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleLspRequest___boxed(lean_object* v_method_3848_, lean_object* v_params_3849_, lean_object* v_a_3850_, lean_object* v_a_3851_){
_start:
{
lean_object* v_res_3852_; 
v_res_3852_ = l_Lean_Server_handleLspRequest(v_method_3848_, v_params_3849_, v_a_3850_);
lean_dec_ref(v_a_3850_);
lean_dec_ref(v_method_3848_);
return v_res_3852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_routeLspRequest(lean_object* v_method_3853_, lean_object* v_params_3854_){
_start:
{
uint8_t v___x_3856_; 
v___x_3856_ = l_Lean_Server_isStatefulLspRequestMethod(v_method_3853_);
if (v___x_3856_ == 0)
{
lean_object* v___x_3857_; lean_object* v_a_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3873_; 
v___x_3857_ = l_Lean_Server_lookupLspRequestHandler(v_method_3853_);
v_a_3858_ = lean_ctor_get(v___x_3857_, 0);
v_isSharedCheck_3873_ = !lean_is_exclusive(v___x_3857_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3860_ = v___x_3857_;
v_isShared_3861_ = v_isSharedCheck_3873_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_a_3858_);
lean_dec(v___x_3857_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3873_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
if (lean_obj_tag(v_a_3858_) == 0)
{
lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3865_; 
lean_dec(v_params_3854_);
v___x_3862_ = l_Lean_Server_RequestError_methodNotFound(v_method_3853_);
v___x_3863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3863_, 0, v___x_3862_);
if (v_isShared_3861_ == 0)
{
lean_ctor_set(v___x_3860_, 0, v___x_3863_);
v___x_3865_ = v___x_3860_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v___x_3863_);
v___x_3865_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
return v___x_3865_;
}
}
else
{
lean_object* v_val_3867_; lean_object* v_fileSource_3868_; lean_object* v___x_3869_; lean_object* v___x_3871_; 
v_val_3867_ = lean_ctor_get(v_a_3858_, 0);
lean_inc(v_val_3867_);
lean_dec_ref(v_a_3858_);
v_fileSource_3868_ = lean_ctor_get(v_val_3867_, 0);
lean_inc_ref(v_fileSource_3868_);
lean_dec(v_val_3867_);
v___x_3869_ = lean_apply_1(v_fileSource_3868_, v_params_3854_);
if (v_isShared_3861_ == 0)
{
lean_ctor_set(v___x_3860_, 0, v___x_3869_);
v___x_3871_ = v___x_3860_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v___x_3869_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
}
else
{
lean_object* v___x_3874_; 
v___x_3874_ = l_Lean_Server_lookupStatefulLspRequestHandler(v_method_3853_);
if (lean_obj_tag(v___x_3874_) == 0)
{
lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; 
lean_dec(v_params_3854_);
v___x_3875_ = l_Lean_Server_RequestError_methodNotFound(v_method_3853_);
v___x_3876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3876_, 0, v___x_3875_);
v___x_3877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3877_, 0, v___x_3876_);
return v___x_3877_;
}
else
{
lean_object* v_val_3878_; lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3887_; 
v_val_3878_ = lean_ctor_get(v___x_3874_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3874_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3880_ = v___x_3874_;
v_isShared_3881_ = v_isSharedCheck_3887_;
goto v_resetjp_3879_;
}
else
{
lean_inc(v_val_3878_);
lean_dec(v___x_3874_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3887_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
lean_object* v_fileSource_3882_; lean_object* v___x_3883_; lean_object* v___x_3885_; 
v_fileSource_3882_ = lean_ctor_get(v_val_3878_, 0);
lean_inc_ref(v_fileSource_3882_);
lean_dec(v_val_3878_);
v___x_3883_ = lean_apply_1(v_fileSource_3882_, v_params_3854_);
if (v_isShared_3881_ == 0)
{
lean_ctor_set_tag(v___x_3880_, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3883_);
v___x_3885_ = v___x_3880_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v___x_3883_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
return v___x_3885_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_routeLspRequest___boxed(lean_object* v_method_3888_, lean_object* v_params_3889_, lean_object* v_a_3890_){
_start:
{
lean_object* v_res_3891_; 
v_res_3891_ = l_Lean_Server_routeLspRequest(v_method_3888_, v_params_3889_);
lean_dec_ref(v_method_3888_);
return v_res_3891_;
}
}
lean_object* runtime_initialize_Lean_Server_RequestCancellation(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_FileSource(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_FileWorker_Utils(uint8_t builtin);
lean_object* runtime_initialize_Std_Sync_Mutex(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Requests(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Server_RequestCancellation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_FileSource(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_FileWorker_Utils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Server_instInhabitedRequestError_default = _init_l_Lean_Server_instInhabitedRequestError_default();
lean_mark_persistent(l_Lean_Server_instInhabitedRequestError_default);
l_Lean_Server_instInhabitedRequestError = _init_l_Lean_Server_instInhabitedRequestError();
lean_mark_persistent(l_Lean_Server_instInhabitedRequestError);
l_Lean_Server_RequestError_fileChanged = _init_l_Lean_Server_RequestError_fileChanged();
lean_mark_persistent(l_Lean_Server_RequestError_fileChanged);
l_Lean_Server_RequestError_requestCancelled = _init_l_Lean_Server_RequestError_requestCancelled();
lean_mark_persistent(l_Lean_Server_RequestError_requestCancelled);
l_Lean_Server_RequestError_rpcNeedsReconnect = _init_l_Lean_Server_RequestError_rpcNeedsReconnect();
lean_mark_persistent(l_Lean_Server_RequestError_rpcNeedsReconnect);
l_Lean_Server_instMonadLiftIORequestM = _init_l_Lean_Server_instMonadLiftIORequestM();
lean_mark_persistent(l_Lean_Server_instMonadLiftIORequestM);
l_Lean_Server_instMonadLiftEIOExceptionRequestM = _init_l_Lean_Server_instMonadLiftEIOExceptionRequestM();
lean_mark_persistent(l_Lean_Server_instMonadLiftEIOExceptionRequestM);
l_Lean_Server_instMonadLiftCancellableMRequestM = _init_l_Lean_Server_instMonadLiftCancellableMRequestM();
lean_mark_persistent(l_Lean_Server_instMonadLiftCancellableMRequestM);
res = l___private_Lean_Server_Requests_0__Lean_Server_initFn_00___x40_Lean_Server_Requests_2412314327____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_requestHandlers = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_requestHandlers);
lean_dec_ref(res);
res = l___private_Lean_Server_Requests_0__Lean_Server_initFn_00___x40_Lean_Server_Requests_1324610322____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_statefulRequestHandlers = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_statefulRequestHandlers);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Requests(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_RequestCancellation(uint8_t builtin);
lean_object* initialize_Lean_Server_FileSource(uint8_t builtin);
lean_object* initialize_Lean_Server_FileWorker_Utils(uint8_t builtin);
lean_object* initialize_Std_Sync_Mutex(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Requests(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_RequestCancellation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_FileSource(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_FileWorker_Utils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sync_Mutex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Requests(builtin);
}
#ifdef __cplusplus
}
#endif
