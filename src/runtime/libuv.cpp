/*
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Markus Himmel, Sofia Rodrigues
 */
#include <memory>
#include <utility>
#include <vector>
#include "runtime/libuv.h"
#include "runtime/object.h"
#include "runtime/thread.h"

#ifndef LEAN_EMSCRIPTEN
#include <uv.h>
#endif

namespace lean {

#ifndef LEAN_EMSCRIPTEN

static std::unique_ptr<lthread> g_libuv_thread;

extern "C" void initialize_libuv() {
    initialize_libuv_timer();
    initialize_libuv_tcp_socket();
    initialize_libuv_udp_socket();
    initialize_libuv_signal();
    initialize_libuv_loop();

    g_libuv_thread.reset(new lthread([]() { event_loop_run_loop(&global_ev); }));
}

extern "C" void finalize_libuv() {
    if (g_libuv_thread == nullptr) {
        return;
    }

    event_loop_lock_internal(&global_ev);
    event_loop_request_stop(&global_ev);
    event_loop_unlock(&global_ev);

    g_libuv_thread->join();
    g_libuv_thread = nullptr;

    event_loop_drain_active(&global_ev);
    event_loop_lock_internal(&global_ev);

    std::vector<std::pair<lean_object *, size_t>> pending_releases;

    uv_walk(global_ev.loop, [](uv_handle_t * handle, void * arg) {
        if (uv_is_closing(handle)) {
            return;
        }

        if (uv_handle_get_type(handle) == UV_ASYNC) {
            uv_close(handle, nullptr);
            return;
        }

        lean_object * obj = (lean_object*)handle->data;

        if (obj != nullptr) {
            size_t releases = 0;

            switch (uv_handle_get_type(handle)) {
                case UV_TIMER:
                    releases = lean_uv_timer_shutdown(lean_to_uv_timer(obj));
                    break;
                case UV_TCP:
                    releases = lean_uv_tcp_socket_shutdown(lean_to_uv_tcp_socket(obj));
                    break;
                case UV_UDP:
                    releases = lean_uv_udp_socket_shutdown(lean_to_uv_udp_socket(obj));
                    break;
                case UV_SIGNAL:
                    releases = lean_uv_signal_shutdown(lean_to_uv_signal(obj));
                    break;
                default:
                    lean_assert(false);
                    break;
            }

            if (releases > 0) {
                ((std::vector<std::pair<lean_object *, size_t>>*)arg)->emplace_back(obj, releases);
            }
        }

        uv_close(handle, [](uv_handle_t * handle) { free(handle); });
    }, &pending_releases);

    uv_run(global_ev.loop, UV_RUN_DEFAULT);

    int close_result = uv_loop_close(global_ev.loop);
    lean_assert(close_result == 0);
    (void)close_result;

    event_loop_mark_finalized(&global_ev);

    for (auto & release : pending_releases) {
        for (size_t i = 0; i < release.second; i++) {
            lean_dec(release.first);
        }
    }

    event_loop_unlock(&global_ev);
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
