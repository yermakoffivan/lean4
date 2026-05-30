/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Sofia Rodrigues
*/

#include "runtime/openssl/context.h"

namespace lean {

lean_external_class * g_ssl_context_external_class = nullptr;

#ifndef LEAN_EMSCRIPTEN

static void configure_ctx_options(SSL_CTX * ctx) {
    SSL_CTX_set_options(ctx, SSL_OP_NO_RENEGOTIATION);
    // Allow SSL_write to be retried with a different pointer when the same
    // payload is copied into pending_writes and replayed after WANT_READ/WANT_WRITE.
    SSL_CTX_set_mode(ctx, SSL_MODE_ACCEPT_MOVING_WRITE_BUFFER);
}

static void lean_ssl_context_finalizer(void * ptr) {
    lean_ssl_context_object * obj = (lean_ssl_context_object*)ptr;
    SSL_CTX_free(obj->ctx);
    free(obj);
}

void initialize_openssl_context() {
    g_ssl_context_external_class = lean_register_external_class(lean_ssl_context_finalizer, [](void * obj, lean_object * f) {
        (void)obj;
        (void)f;
    });
}

static lean_obj_res mk_ssl_context(const SSL_METHOD * method) {
    SSL_CTX * ctx = SSL_CTX_new(method);
    if (ctx == nullptr) {
        return mk_openssl_io_error("SSL_CTX_new failed");
    }

    configure_ctx_options(ctx);

    lean_ssl_context_object * obj = (lean_ssl_context_object*)malloc(sizeof(lean_ssl_context_object));
    if (obj == nullptr) {
        SSL_CTX_free(ctx);
        return mk_openssl_io_error("failed to allocate SSL context object");
    }

    obj->ctx = ctx;
    lean_object * lean_obj = lean_ssl_context_object_new(obj);
    lean_mark_mt(lean_obj);
    return lean_io_result_mk_ok(lean_obj);
}

/* Std.Internal.SSL.Context.mkServer : IO Context */
extern "C" LEAN_EXPORT lean_obj_res lean_uv_ssl_ctx_mk_server() {
    return mk_ssl_context(TLS_server_method());
}

/* Std.Internal.SSL.Context.mkClient : IO Context */
extern "C" LEAN_EXPORT lean_obj_res lean_uv_ssl_ctx_mk_client() {
    return mk_ssl_context(TLS_client_method());
}

/* Std.Internal.SSL.Context.configureServer (ctx : @& Context) (certFile keyFile : @& String) : IO Unit */
extern "C" LEAN_EXPORT lean_obj_res lean_uv_ssl_ctx_configure_server(b_obj_arg ctx_obj, b_obj_arg cert_file, b_obj_arg key_file) {
    lean_ssl_context_object * obj = lean_to_ssl_context_object(ctx_obj);
    const char * cert = lean_string_cstr(cert_file);
    const char * key = lean_string_cstr(key_file);

    if (SSL_CTX_use_certificate_file(obj->ctx, cert, SSL_FILETYPE_PEM) <= 0) {
        return mk_openssl_io_error("SSL_CTX_use_certificate_file failed");
    }
    if (SSL_CTX_use_PrivateKey_file(obj->ctx, key, SSL_FILETYPE_PEM) <= 0) {
        return mk_openssl_io_error("SSL_CTX_use_PrivateKey_file failed");
    }
    if (SSL_CTX_check_private_key(obj->ctx) != 1) {
        return mk_openssl_io_error("SSL_CTX_check_private_key failed");
    }

    return lean_io_result_mk_ok(lean_box(0));
}

/* Std.Internal.SSL.Context.configureClient (ctx : @& Context) (caFile : @& String) (verifyPeer : Bool) : IO Unit */
extern "C" LEAN_EXPORT lean_obj_res lean_uv_ssl_ctx_configure_client(b_obj_arg ctx_obj, b_obj_arg ca_file, uint8_t verify_peer) {
    lean_ssl_context_object * obj = lean_to_ssl_context_object(ctx_obj);
    const char * ca = lean_string_cstr(ca_file);

    if (ca != nullptr && ca[0] != '\0') {
        if (SSL_CTX_load_verify_locations(obj->ctx, ca, nullptr) != 1) {
            return mk_openssl_io_error("SSL_CTX_load_verify_locations failed");
        }
    } else if (verify_peer) {
        if (SSL_CTX_set_default_verify_paths(obj->ctx) != 1) {
            return mk_openssl_io_error("SSL_CTX_set_default_verify_paths failed");
        }
    }

    SSL_CTX_set_verify(obj->ctx, verify_peer ? SSL_VERIFY_PEER : SSL_VERIFY_NONE, nullptr);
    return lean_io_result_mk_ok(lean_box(0));
}

#else

void initialize_openssl_context() {}

extern "C" LEAN_EXPORT lean_obj_res lean_uv_ssl_ctx_mk_server() {
    lean_always_assert(false && "Please build a version of Lean4 with OpenSSL to invoke this.");
}

extern "C" LEAN_EXPORT lean_obj_res lean_uv_ssl_ctx_mk_client() {
    lean_always_assert(false && "Please build a version of Lean4 with OpenSSL to invoke this.");
}

extern "C" LEAN_EXPORT lean_obj_res lean_uv_ssl_ctx_configure_server(b_obj_arg ctx_obj, b_obj_arg cert_file, b_obj_arg key_file) {
    lean_always_assert(false && "Please build a version of Lean4 with OpenSSL to invoke this.");
}

extern "C" LEAN_EXPORT lean_obj_res lean_uv_ssl_ctx_configure_client(b_obj_arg ctx_obj, b_obj_arg ca_file, uint8_t verify_peer) {
    lean_always_assert(false && "Please build a version of Lean4 with OpenSSL to invoke this.");
}

#endif

}
