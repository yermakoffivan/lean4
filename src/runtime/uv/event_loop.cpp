/*
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Sofia Rodrigues, Henrik Böving
*/
#include "runtime/uv/event_loop.h"


/*
This file builds a thread safe event loop on top of the thread unsafe libuv event loop.
We achieve this by always having a `uv_async_t` associated with the libuv event loop.
As `uv_async_t` are a thread safe primitive it is safe to send a notification to it from another
thread. Once this notification arrives the event loop suspends its own execution and unlocks a mutex
that protects it. This mutex can then be taken by another thread that wants to work with the event
loop. After that work is done it signals a condition variable that the event loop is waiting on
to continue its execution.
*/

namespace lean {
#ifndef LEAN_EMSCRIPTEN
using namespace std;

event_loop_t global_ev;

// It's only accessed under lock.
bool g_libuv_finalized = false;

// Helpers

void lean_promise_resolve_with_code(int status, obj_arg promise) {
    obj_arg res = status == 0
        ? mk_except_ok(lean_box(0))
        : mk_except_err(lean_decode_uv_error(status, nullptr));

    lean_promise_resolve(res, promise);
}

// Utility function for error checking. This function is only used inside the
// initializition of the event loop.
static void check_uv(int result, const char * msg) {
    if (result != 0) {
        std::string err_message = std::string(msg) + ": " + uv_strerror(result);
        lean_internal_panic(err_message.c_str());
    }
}

// The callback that stops the loop when it's called.
void async_callback(uv_async_t * handle) {
    uv_stop(handle->loop);
}

// Interrupts the event loop and stops it so it can receive future requests.
void event_loop_interrupt(event_loop_t * event_loop) {
    int result = uv_async_send(&event_loop->async);
    (void)result;
    lean_assert(result == 0);
}

// Requests that the thread running `event_loop_run_loop` exit. The `shutdown` flag is read at the
// top of every loop iteration, and the async interrupt wakes the loop in case it is currently
// blocked inside `uv_run`.
void event_loop_request_stop(event_loop_t * event_loop) {
    event_loop->shutdown = true;
    event_loop_interrupt(event_loop);
}

// Initializes the event loop
void event_loop_init(event_loop_t * event_loop) {
    event_loop->loop = uv_default_loop();
    check_uv(uv_mutex_init_recursive(&event_loop->mutex), "Failed to initialize mutex");
    check_uv(uv_cond_init(&event_loop->cond_var), "Failed to initialize condition variable");
    check_uv(uv_async_init(event_loop->loop, &event_loop->async, NULL), "Failed to initialize async");
    event_loop->n_waiters = 0;
    event_loop->shutdown = false;
}

// Locks the event loop for the side of the requesters.
void event_loop_lock(event_loop_t * event_loop) {
    if (uv_mutex_trylock(&event_loop->mutex) != 0) {
        event_loop->n_waiters++;
        event_loop_interrupt(event_loop);
        uv_mutex_lock(&event_loop->mutex);
        event_loop->n_waiters--;
    }
}

// Unlock event loop
void event_loop_unlock(event_loop_t * event_loop) {
    if (event_loop->n_waiters == 0) {
        uv_cond_signal(&event_loop->cond_var);
    }
    uv_mutex_unlock(&event_loop->mutex);
}

lean_obj_res lean_uv_loop_finalized_error() {
    return lean_io_result_mk_error(lean_decode_uv_error(UV_ECANCELED, nullptr));
}

// See event_loop.h.
void lean_uv_close_and_free(uv_handle_t * handle, void * obj_mem) {
    event_loop_lock(&global_ev);

    bool finalized = g_libuv_finalized;

    if (!finalized) {
        uv_close(handle, [](uv_handle_t * h) {
            free(h);
        });
    }

    event_loop_unlock(&global_ev);

    if (finalized) {
        free(handle);
    }

    free(obj_mem);
}

// Runs the loop and stops when it needs to register new requests.
void event_loop_run_loop(event_loop_t * event_loop) {
    while (!event_loop->shutdown && uv_loop_alive(event_loop->loop)) {
        uv_mutex_lock(&event_loop->mutex);

        while (event_loop->n_waiters != 0) {
            uv_cond_wait(&event_loop->cond_var, &event_loop->mutex);
        }

        uv_run(event_loop->loop, UV_RUN_ONCE);
        /*
         * We leave `uv_run` only when `uv_stop` is called as there is always the `uv_async_t` so
         * we can never run out of things to wait on. `uv_stop` is only called from `async_callback`
         * when another thread wants to work with the event loop so we need to give up the mutex.
         */

        uv_mutex_unlock(&event_loop->mutex);
    }
}

/* Std.Internal.UV.Loop.configure (options : Loop.Options) : BaseIO Unit */
extern "C" LEAN_EXPORT lean_obj_res lean_uv_event_loop_configure(b_obj_arg options) {
    bool accum = lean_ctor_get_uint8(options, 0);
    bool block = lean_ctor_get_uint8(options, 1);

    event_loop_lock(&global_ev);

    // Vacuous success: the function is `BaseIO Unit`, which cannot carry an error, and
    // configuring a torn-down loop has no observable effect anyway.
    if (g_libuv_finalized) {
        event_loop_unlock(&global_ev);
        return lean_box(0);
    }

    if (accum) {
        int result = uv_loop_configure(global_ev.loop, UV_METRICS_IDLE_TIME);
        if (result != 0) {
            event_loop_unlock(&global_ev);
            return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
        }
    }

    #if !defined(WIN32) && !defined(_WIN32)
    if (block) {
        int result = uv_loop_configure(global_ev.loop, UV_LOOP_BLOCK_SIGNAL, SIGPROF);
        if (result != 0) {
            event_loop_unlock(&global_ev);
            return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
        }
    }
    #endif

    event_loop_unlock(&global_ev);

    return lean_box(0);
}

/* Std.Internal.UV.Loop.alive : BaseIO Bool */
extern "C" LEAN_EXPORT uint8_t lean_uv_event_loop_alive() {
    event_loop_lock(&global_ev);

    if (g_libuv_finalized) {
        event_loop_unlock(&global_ev);
        return 0;
    }

    uint8_t is_alive = uv_loop_alive(global_ev.loop);

    event_loop_unlock(&global_ev);

    return is_alive;
}

// Tears down the event loop. Must only be called by `finalize_libuv`, after the thread running
// `event_loop_run_loop` has been joined and while holding the requester lock, so the loop can be
// driven from the calling thread without racing FFI calls from still-live task-manager workers.
//
// The loop, the async handle, and the mutex/condition-variable pair are intentionally *not*
// destroyed: workers keep racing into `event_loop_lock` (and, when contended, into
// `event_loop_interrupt`'s `uv_async_send`, which happens *before* the mutex is held and therefore
// cannot be excluded by any locking) until `lean_finalize_task_manager` has joined them. Keeping
// these primitives alive makes those late calls harmless: the mutex stays lockable, and a stray
// `uv_async_send` just writes to an eventfd nobody reads anymore. All of them live in static
// storage (`global_ev` and libuv's static default loop), so nothing is reported as leaked.
void event_loop_cleanup(event_loop_t * event_loop) {
    // Unreference the async handle (instead of closing it, see above) so the flush below can
    // terminate: unreferenced handles do not keep `uv_run` alive.
    uv_unref((uv_handle_t*)&event_loop->async);

    // Close every remaining handle (timers/sockets/etc. whose backing references were already
    // released) so that their close callbacks can free the handle memory — except the async
    // handle, which must stay open for late `event_loop_interrupt` calls (see above).
    uv_walk(event_loop->loop, [](uv_handle_t * handle, void * async) {
        if (handle != static_cast<uv_handle_t *>(async) && !uv_is_closing(handle)) {
            uv_close(handle, nullptr);
        }
    }, &event_loop->async);

    // Drive the loop to completion: this runs all pending close callbacks, fires the
    // `UV_ECANCELED` callbacks of in-flight stream requests, and waits for in-flight
    // threadpool-backed requests (`uv_getaddrinfo`, `uv_random`, ...) to complete and deliver, so
    // every promise the loop still owes is resolved before the task manager is drained.
    uv_run(event_loop->loop, UV_RUN_DEFAULT);
}

// See event_loop.h. Everything `event_loop_cleanup` intentionally kept alive — the loop, the
// async handle, and the mutex/condition-variable pair — is reused; restarting only needs to take
// back a reference to the async handle (undoing the teardown's `uv_unref`, so the loop blocks in
// `uv_run` again instead of exiting), clear the shutdown request, and lift `g_libuv_finalized` so
// the FFI entry points stop failing. The lock pairs the flag write with its readers; no loop
// thread exists at this point, so there is nothing else to synchronize with.
void event_loop_restart(event_loop_t * event_loop) {
    event_loop_lock(event_loop);

    uv_ref((uv_handle_t *)&event_loop->async);
    event_loop->shutdown = false;
    g_libuv_finalized = false;

    event_loop_unlock(event_loop);
}

void initialize_libuv_loop() {
    event_loop_init(&global_ev);
}

#else

/* Std.Internal.UV.Loop.configure (options : Loop.Options) : BaseIO Unit */
extern "C" LEAN_EXPORT lean_obj_res lean_uv_event_loop_configure(b_obj_arg options) {
    return io_result_mk_error("lean_uv_event_loop_configure is not supported");
}

/* Std.Internal.UV.Loop.alive : BaseIO UInt64 */
extern "C" LEAN_EXPORT lean_obj_res lean_uv_event_loop_alive() {
    return io_result_mk_error("lean_uv_event_loop_alive is not supported");
}

#endif

}
