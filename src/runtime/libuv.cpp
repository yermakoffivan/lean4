/*
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Markus Himmel, Sofia Rodrigues
 */
#include <pthread.h>
#include <memory>
#include <vector>
#include "runtime/libuv.h"
#include "runtime/object.h"

#ifndef LEAN_EMSCRIPTEN
#include <uv.h>
#endif

namespace lean {

#ifndef LEAN_EMSCRIPTEN

// The thread running the global event loop. Retained so that it can be joined in
// `finalize_libuv`.
static std::unique_ptr<lthread> g_loop_thread;

extern "C" void initialize_libuv() {
    // Initializing while the loop thread of a previous initialization is still running is not
    // supported; `finalize_libuv` must run in between. Since `finalize_libuv` always sets
    // `g_libuv_finalized` (and nulls `g_loop_thread`), the flag being set here means this is a
    // restart rather than the first initialization.
    lean_always_assert(g_loop_thread == nullptr);

    if (g_libuv_finalized) {
        // Restart after a `finalize_libuv` (e.g. an embedder cycling the runtime). The external
        // classes and `global_ev` survive finalization (see `event_loop_cleanup`), so only the
        // loop is re-armed; the one-time setup below is not repeated -- it is not idempotent
        // (`lean_register_external_class` would leak and duplicate, `event_loop_init` would
        // re-init the still-queued async handle and corrupt the loop).
        //
        // Lean objects backed by handles of the previous loop incarnation must not survive into
        // the restart: their handles were already closed and dequeued by the teardown, and their
        // finalizers free memory directly only while `g_libuv_finalized` is set -- so both using
        // such an object and dropping its last reference after this point is undefined behavior
        // (its finalizer would close an already-closed handle).
        event_loop_restart(&global_ev);
    } else {
        initialize_libuv_timer();
        initialize_libuv_tcp_socket();
        initialize_libuv_udp_socket();
        initialize_libuv_signal();
        initialize_libuv_loop();
    }

    g_loop_thread.reset(new lthread([]() { event_loop_run_loop(&global_ev); }));
}

// Atomically takes a reference to `obj`, failing if the reference count already reached zero. In
// that case the object's finalizer is already running on a worker thread — blocked on the
// event-loop mutex held by `finalize_libuv` — and the object must not be touched: a dying handle
// has no loop-held references left to release, and the blocked finalizer frees the handle and
// object memory once the teardown is done (`lean_inc`/`lean_dec` cannot be used here, as they
// treat a zero count as a persistent object and would let the walk read fields the finalizer
// concurrently frees). All handle-backed objects are `lean_mark_mt`ed at creation, so the count
// is never positive and can be accessed atomically (multi-threaded objects count negatively).
static bool try_pin(lean_object * obj) {
    _Atomic(int) * rc = lean_get_rc_mt_addr(obj);
    int v = rc->load(std::memory_order_acquire);
    lean_assert(v <= 0);

    while (v < 0) {
        if (rc->compare_exchange_weak(v, v - 1, std::memory_order_acq_rel, std::memory_order_acquire)) {
            return true;
        }
    }

    return false;
}

extern "C" void finalize_libuv() {
    if (!g_loop_thread)
        return;

    event_loop_request_stop(&global_ev);
    g_loop_thread->join();
    g_loop_thread.reset();

    std::vector<lean_object *> pinned;

    event_loop_lock(&global_ev);

    uv_walk(global_ev.loop, [](uv_handle_t * handle, void * arg) {
        auto * pinned = static_cast<std::vector<lean_object *> *>(arg);

        if (uv_is_closing(handle)) {
            return;
        }

        uv_handle_type type = uv_handle_get_type(handle);

        if (type != UV_TIMER && type != UV_TCP && type != UV_UDP && type != UV_SIGNAL) {
            return;
        }

        auto * obj = (lean_object *)handle->data;

        if (!try_pin(obj)) {
            return;
        }

        pinned->push_back(obj);

        switch (type) {
        case UV_TIMER:
            lean_uv_timer_shutdown(obj);
            break;
        case UV_TCP:
            lean_uv_tcp_socket_shutdown(obj);
            break;
        case UV_UDP:
            lean_uv_udp_socket_shutdown(obj);
            break;
        case UV_SIGNAL:
            lean_uv_signal_shutdown(obj);
            break;
        default:
            break;
        }
    }, &pinned);

    g_libuv_finalized = true;

    event_loop_cleanup(&global_ev);
    event_loop_unlock(&global_ev);

    for (lean_object * obj : pinned) {
        lean_dec(obj);
    }
}

extern "C" LEAN_EXPORT char ** lean_setup_args(int argc, char ** argv) {
    return uv_setup_args(argc, argv);
}

/* Lean.libUVVersionFn : Unit → Nat */
extern "C" LEAN_EXPORT lean_obj_res lean_libuv_version(lean_obj_arg o) {
    return lean_unsigned_to_nat(uv_version());
}

#else

extern "C" void initialize_libuv() {}

extern "C" void finalize_libuv() {}

extern "C" LEAN_EXPORT lean_obj_res lean_libuv_version(lean_obj_arg o) {
    return lean_box(0);
}

extern "C" LEAN_EXPORT char ** lean_setup_args(int argc, char ** argv) {
    return argv;
}


#endif
}
