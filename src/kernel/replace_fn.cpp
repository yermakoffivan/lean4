/*
Copyright (c) 2013-2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <vector>
#include <memory>
#include <utility>
#include <unordered_map>
#include "kernel/replace_fn.h"
#include "util/alloc.h"

namespace lean {

// Small-buffer cache for `replace_rec_fn`. The histogram of cache sizes during a
// typical run is heavily skewed toward small caches: ~87% of instances hold ≤15
// entries and ~99% hold ≤63, with a long thin tail up to a few thousand. A linear
// scan over a stack-resident array beats any hash map at that scale, so we keep
// the first `INLINE_CAP` entries inline and only fall back to a real hash map
// (lazily allocated) for the rare large traversal.
class replace_cache {
    struct key_hasher {
        std::size_t operator()(std::pair<lean_object *, unsigned> const & p) const {
            return hash((size_t)p.first >> 3, p.second);
        }
    };
    using key_t = std::pair<lean_object *, unsigned>;
    using map_t = lean::unordered_map<key_t, expr, key_hasher>;
    static constexpr unsigned INLINE_CAP = 16;
    struct entry { key_t k; expr v; };
    // Uninitialized storage; only entries [0, m_size) are constructed. This
    // avoids paying for `INLINE_CAP` default-constructed `expr`s on every
    // `replace_rec_fn` instance, which matters because the typical traversal
    // creates a fresh cache holding only a handful of entries.
    alignas(entry) std::byte m_inline_storage[sizeof(entry) * INLINE_CAP];
    unsigned m_size = 0;
    std::unique_ptr<map_t> m_overflow;

    entry * inline_at(unsigned i) {
        return std::launder(reinterpret_cast<entry *>(m_inline_storage) + i);
    }
    entry const * inline_at(unsigned i) const {
        return std::launder(reinterpret_cast<entry const *>(m_inline_storage) + i);
    }
public:
    replace_cache() = default;
    replace_cache(replace_cache const &) = delete;
    replace_cache & operator=(replace_cache const &) = delete;
    ~replace_cache() {
        for (unsigned i = 0; i < m_size; ++i) inline_at(i)->~entry();
    }

    expr const * find(key_t const & k) const {
        for (unsigned i = 0; i < m_size; ++i) {
            entry const * e = inline_at(i);
            if (e->k == k) return &e->v;
        }
        if (m_overflow) {
            auto it = m_overflow->find(k);
            if (it != m_overflow->end()) return &it->second;
        }
        return nullptr;
    }
    void insert(key_t const & k, expr const & v) {
        if (!m_overflow) {
            if (m_size < INLINE_CAP) {
                new (inline_at(m_size)) entry{k, v};
                ++m_size;
                return;
            }
            m_overflow.reset(new map_t());
            m_overflow->reserve(INLINE_CAP * 4);
            for (unsigned i = 0; i < m_size; ++i) {
                entry * e = inline_at(i);
                m_overflow->emplace(e->k, std::move(e->v));
                e->~entry();
            }
            m_size = 0;
        }
        m_overflow->insert(mk_pair(k, v));
    }
};

class replace_rec_fn {
    replace_cache m_cache;
    std::function<optional<expr>(expr const &, unsigned)> m_f;
    bool                                                  m_use_cache;

    expr save_result(expr const & e, unsigned offset, expr r, bool shared) {
        if (shared)
            m_cache.insert(mk_pair(e.raw(), offset), r);
        return r;
    }

    expr apply(expr const & e, unsigned offset) {
        bool shared = false;
        if (m_use_cache && !is_likely_unshared(e)) {
            if (expr const * cached = m_cache.find(mk_pair(e.raw(), offset)))
                return *cached;
            shared = true;
        }
        if (optional<expr> r = m_f(e, offset)) {
            return save_result(e, offset, std::move(*r), shared);
        } else {
            switch (e.kind()) {
            case expr_kind::Const: case expr_kind::Sort:
            case expr_kind::BVar:  case expr_kind::Lit:
            case expr_kind::MVar:  case expr_kind::FVar:
                return save_result(e, offset, e, shared);
            case expr_kind::MData: {
                expr new_e = apply(mdata_expr(e), offset);
                return save_result(e, offset, update_mdata(e, new_e), shared);
            }
            case expr_kind::Proj: {
                expr new_e = apply(proj_expr(e), offset);
                return save_result(e, offset, update_proj(e, new_e), shared);
            }
            case expr_kind::App: {
                expr new_f = apply(app_fn(e), offset);
                expr new_a = apply(app_arg(e), offset);
                return save_result(e, offset, update_app(e, new_f, new_a), shared);
            }
            case expr_kind::Pi: case expr_kind::Lambda: {
                expr new_d = apply(binding_domain(e), offset);
                expr new_b = apply(binding_body(e), offset+1);
                return save_result(e, offset, update_binding(e, new_d, new_b), shared);
            }
            case expr_kind::Let: {
                expr new_t = apply(let_type(e), offset);
                expr new_v = apply(let_value(e), offset);
                expr new_b = apply(let_body(e), offset+1);
                return save_result(e, offset, update_let(e, new_t, new_v, new_b), shared);
            }
            }
            lean_unreachable();
        }
    }
public:
    template<typename F>
    replace_rec_fn(F const & f, bool use_cache):m_f(f), m_use_cache(use_cache) {}

    expr operator()(expr const & e) { return apply(e, 0); }
};

expr replace(expr const & e, std::function<optional<expr>(expr const &, unsigned)> const & f, bool use_cache) {
    return replace_rec_fn(f, use_cache)(e);
}

class replace_fn {
    lean::unordered_map<lean_object *, expr> m_cache;
    lean_object * m_f;

    expr save_result(expr const & e, expr const & r, bool shared) {
        if (shared)
            m_cache.insert(mk_pair(e.raw(), r));
        return r;
    }

    expr apply(expr const & e) {
        bool shared = false;
        if (is_shared(e)) {
            auto it = m_cache.find(e.raw());
            if (it != m_cache.end())
                return it->second;
            shared = true;
        }

        lean_inc(e.raw());
        lean_inc_ref(m_f);
        lean_object * r = lean_apply_1(m_f, e.raw());
        if (!lean_is_scalar(r)) {
            expr e_new(lean_ctor_get(r, 0), true);
            lean_dec_ref(r);
            return save_result(e, e_new, shared);
        }

        switch (e.kind()) {
        case expr_kind::Const: case expr_kind::Sort:
        case expr_kind::BVar:  case expr_kind::Lit:
        case expr_kind::MVar:  case expr_kind::FVar:
            return save_result(e, e, shared);
        case expr_kind::MData: {
            expr new_e = apply(mdata_expr(e));
            return save_result(e, update_mdata(e, new_e), shared);
        }
        case expr_kind::Proj: {
            expr new_e = apply(proj_expr(e));
            return save_result(e, update_proj(e, new_e), shared);
        }
        case expr_kind::App: {
            expr new_f = apply(app_fn(e));
            expr new_a = apply(app_arg(e));
            return save_result(e, update_app(e, new_f, new_a), shared);
        }
        case expr_kind::Pi: case expr_kind::Lambda: {
            expr new_d = apply(binding_domain(e));
            expr new_b = apply(binding_body(e));
            return save_result(e, update_binding(e, new_d, new_b), shared);
        }
        case expr_kind::Let: {
            expr new_t = apply(let_type(e));
            expr new_v = apply(let_value(e));
            expr new_b = apply(let_body(e));
            return save_result(e, update_let(e, new_t, new_v, new_b), shared);
        }}
        lean_unreachable();
    }
public:
    replace_fn(lean_object * f):m_f(f) {}
    expr operator()(expr const & e) { return apply(e); }
};

extern "C" LEAN_EXPORT obj_res lean_replace_expr(b_obj_arg f, b_obj_arg e) {
    expr r = replace_fn(f)(TO_REF(expr, e));
    return r.steal();
}
}
