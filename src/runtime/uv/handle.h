/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Sofia Rodrigues
*/
#pragma once
#include <stdlib.h>
#include <lean/lean.h>

#ifndef LEAN_EMSCRIPTEN
#include <uv.h>
#endif

namespace lean {

#ifndef LEAN_EMSCRIPTEN

typedef struct {
    uv_handle_t * m_uv_handle;
    size_t        m_uv_ref_count;
} lean_uv_handle_object;

static inline void lean_uv_handle_init(lean_uv_handle_object * handle, uv_handle_t * uv_handle) {
    handle->m_uv_handle = uv_handle;
    handle->m_uv_ref_count = 0;
}

static inline void lean_uv_handle_acquire(lean_uv_handle_object * handle) {
    handle->m_uv_ref_count++;
}

static inline void lean_uv_handle_release(lean_uv_handle_object * handle) {
    lean_assert(handle->m_uv_ref_count > 0);
    handle->m_uv_ref_count--;
}

static inline size_t lean_uv_handle_release_one(lean_uv_handle_object * handle) {
    if (handle->m_uv_ref_count > 0) {
        lean_uv_handle_release(handle);
        return 1;
    }
    return 0;
}

// Frees a handle wrapper once the loop has been finalized. Callers must first synchronize with
// `event_loop_wait_finalized`, after which the teardown walk has already detached (nulled) and
// closed the `uv_handle_t`, leaving it for libuv to free. The null check is therefore expected to
// hold in the finalized case; it also stays defensive in case the handle was never registered.
static inline void lean_uv_handle_free_detached(lean_uv_handle_object * handle, void * struct_ptr) {
    if (handle->m_uv_handle != nullptr) {
        free(handle->m_uv_handle);
    }
    free(struct_ptr);
}

#endif

}
