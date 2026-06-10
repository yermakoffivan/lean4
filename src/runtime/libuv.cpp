/*
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Markus Himmel, Sofia Rodrigues
 */
#include <pthread.h>
#include "runtime/libuv.h"
#include "runtime/object.h"

#ifndef LEAN_EMSCRIPTEN
#include <uv.h>
#endif

namespace lean {

#ifndef LEAN_EMSCRIPTEN

extern "C" void initialize_libuv() {
    initialize_libuv_timer();
    initialize_libuv_tcp_socket();
    initialize_libuv_udp_socket();
    initialize_libuv_signal();
    initialize_libuv_loop();

    lthread([]() { event_loop_run_loop(&global_ev); });
}

extern "C" void finalize_libuv() {
    // TODO: implement a clean libuv shutdown. The event-loop thread spawned in
    // `initialize_libuv` is detached and kept alive indefinitely by the persistent
    // `global_ev.async` handle, so stopping it cleanly requires: a join handle for the
    // loop thread; a shutdown signal that breaks `event_loop_run_loop`, closes the async
    // handle, and calls `uv_loop_close`; and resolving any in-flight promises so dedicated
    // workers blocked on libuv operations are released before the task-manager drain.
    // See the (also unimplemented) `event_loop_cleanup`. For now this is a no-op, matching
    // the prior behaviour where libuv was never finalized.
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
