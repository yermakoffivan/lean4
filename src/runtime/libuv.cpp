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
    lean_always_assert(g_loop_thread == nullptr);

    if (g_libuv_finalized) {
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
