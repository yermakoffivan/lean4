/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Sofia Rodrigues
*/
#pragma once
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

#endif

}
