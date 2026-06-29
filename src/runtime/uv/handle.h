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
    _Atomic(size_t) m_uv_ref_count;
} lean_uv_handle_object;

inline void lean_uv_handle_init(lean_uv_handle_object * handle, uv_handle_t * uv_handle) {
    handle->m_uv_handle = uv_handle;
    handle->m_uv_ref_count.store(0, std::memory_order_relaxed);
}

inline void lean_uv_handle_acquire(lean_uv_handle_object * handle) {
    handle->m_uv_ref_count.fetch_add(1, std::memory_order_relaxed);
}

inline bool lean_uv_handle_try_release(lean_uv_handle_object * handle) {
    size_t count = handle->m_uv_ref_count.load(std::memory_order_relaxed);
    while (count > 0 && !handle->m_uv_ref_count.compare_exchange_weak(count, count - 1, std::memory_order_relaxed));
    return count > 0;
}

inline void lean_uv_handle_release(lean_uv_handle_object * handle) {
    bool released = lean_uv_handle_try_release(handle);
    lean_assert(released);
    (void)released;
}

inline size_t lean_uv_handle_release_one(lean_uv_handle_object * handle) {
    return lean_uv_handle_try_release(handle) ? 1 : 0;
}

inline void lean_uv_handle_free_detached(lean_uv_handle_object * handle, void * struct_ptr) {
    if (handle->m_uv_handle != nullptr) {
        free(handle->m_uv_handle);
    }
    free(struct_ptr);
}

#endif

}
