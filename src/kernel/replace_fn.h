/*
Copyright (c) 2013-2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include <tuple>
#include <utility>
#include "runtime/interrupt.h"
#include "kernel/expr.h"
#include "kernel/expr_maps.h"
#include "util/alloc.h"

namespace lean {

/**
   \brief Class-template implementation of `replace`. Stores the user functor by
   value (not via `std::function`) so calls into it inline at every recursion
   step. Hot callers should instantiate this directly via `replace<F>(...)`;
   the legacy `std::function`-typed `replace` overload below is a thin wrapper
   for cold/external callers that need type erasure.

   The functor `F` must be callable as `F(expr const &, unsigned) -> optional<expr>`.
*/
template<typename F>
class replace_rec_fn {
    struct key_hasher {
        std::size_t operator()(std::pair<lean_object *, unsigned> const & p) const {
            return hash((size_t)p.first >> 3, p.second);
        }
    };
    lean::unordered_map<std::pair<lean_object *, unsigned>, expr, key_hasher> m_cache;
    F    m_f;
    bool m_use_cache;

    expr save_result(expr const & e, unsigned offset, expr r, bool shared) {
        if (shared)
            m_cache.insert(mk_pair(mk_pair(e.raw(), offset), r));
        return r;
    }

    expr apply(expr const & e, unsigned offset) {
        bool shared = false;
        if (m_use_cache && !is_likely_unshared(e)) {
            auto it = m_cache.find(mk_pair(e.raw(), offset));
            if (it != m_cache.end())
                return it->second;
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
    template<typename G>
    replace_rec_fn(G && f, bool use_cache):m_f(std::forward<G>(f)), m_use_cache(use_cache) {}

    expr operator()(expr const & e) { return apply(e, 0); }
};

/**
   \brief Apply <tt>f</tt> to the subexpressions of a given expression.

   f is invoked for each subexpression \c s of the input expression e.
   In a call <tt>f(s, n)</tt>, n is the scope level, i.e., the number of
   bindings operators that enclosing \c s. The replaces only visits children of \c e
   if f return none_expr.

   These templated overloads monomorphize on the functor type so the call into
   `f` inlines at every recursion step. Prefer them over the `std::function`
   overloads for hot callers. The first overload accepts functors taking
   `(expr const &, unsigned)`; the second accepts functors taking just
   `(expr const &)` and adapts them by ignoring the offset argument.
*/
template<typename F, std::enable_if_t<std::is_invocable_v<F const &, expr const &, unsigned>, int> = 0>
inline expr replace(expr const & e, F && f, bool use_cache = true) {
    return replace_rec_fn<std::decay_t<F>>(std::forward<F>(f), use_cache)(e);
}

template<typename F, std::enable_if_t<std::is_invocable_v<F const &, expr const &> &&
                                      !std::is_invocable_v<F const &, expr const &, unsigned>, int> = 0>
inline expr replace(expr const & e, F && f, bool use_cache = true) {
    auto adapter = [f = std::forward<F>(f)](expr const & e, unsigned) { return f(e); };
    return replace_rec_fn<decltype(adapter)>(std::move(adapter), use_cache)(e);
}

/**
   \brief Type-erased overload of `replace` for cold callers and external use.
   Internally instantiates `replace_rec_fn<std::function<...>>`, so it pays the
   `std::function` indirection on every recursive call.
*/
expr replace(expr const & e, std::function<optional<expr>(expr const &, unsigned)> const & f, bool use_cache = true);
inline expr replace(expr const & e, std::function<optional<expr>(expr const &)> const & f, bool use_cache = true) {
    return replace(e, [&](expr const & e, unsigned) { return f(e); }, use_cache);
}
}
