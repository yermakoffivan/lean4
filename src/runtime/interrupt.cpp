/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <limits>
#include <cstdlib>
#include <ctime>
#include <execinfo.h>
#ifdef __linux__
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/perf_event.h>
#include <sys/syscall.h>
#endif
#include "runtime/thread.h"
#include "runtime/interrupt.h"
#include "runtime/exception.h"
#include "runtime/memory.h"
#include "lean/lean.h"
#include "util/io.h"

namespace lean {
LEAN_THREAD_VALUE(size_t, g_max_heartbeat, 0);
LEAN_THREAD_VALUE(size_t, g_heartbeat, 0);

// --- check_system interval monitoring ---
//
// Two modes (mutually exclusive, instruction count takes priority):
//
// 1. LEAN_CHECK_SYSTEM_INTERVAL_INSN=N — warn if more than N million retired
//    instructions elapse between consecutive check_system calls. Uses
//    perf_event_open (Linux only). Deterministic and load-independent.
//
// 2. LEAN_CHECK_SYSTEM_INTERVAL_MS=N — warn if more than N milliseconds of
//    CPU time elapse. Uses CLOCK_THREAD_CPUTIME_ID. Subject to CPU frequency
//    scaling and machine load.

// 0 = disabled
static uint64_t g_check_system_interval_threshold = 0;
static bool g_check_system_interval_initialized = false;
// false = CPU time (ns), true = instructions
static bool g_check_system_use_insn = false;

#ifdef __linux__
LEAN_THREAD_VALUE(int, g_perf_fd, -1);

static int perf_open_insn_counter() {
    struct perf_event_attr pe = {};
    pe.type = PERF_TYPE_HARDWARE;
    pe.size = sizeof(pe);
    pe.config = PERF_COUNT_HW_INSTRUCTIONS;
    pe.disabled = 0;
    pe.exclude_kernel = 1;
    pe.exclude_hv = 1;
    // pid=0, cpu=-1: count calling thread on any CPU
    return syscall(SYS_perf_event_open, &pe, 0, -1, -1, 0);
}

static uint64_t read_insn_counter() {
    int fd = g_perf_fd;
    if (fd < 0) {
        fd = perf_open_insn_counter();
        g_perf_fd = fd;
        if (fd < 0) return 0; // perf not available
    }
    uint64_t count = 0;
    if (read(fd, &count, sizeof(count)) != sizeof(count))
        return 0;
    return count;
}
#else
static uint64_t read_insn_counter() { return 0; }
#endif

static void init_check_system_interval() {
    if (g_check_system_interval_initialized) return;
    g_check_system_interval_initialized = true;
    if (const char * env = std::getenv("LEAN_CHECK_SYSTEM_INTERVAL_INSN")) {
        uint64_t millions = std::atoll(env);
        if (millions > 0) {
            g_check_system_interval_threshold = millions * 1000000ULL;
            g_check_system_use_insn = true;
            return;
        }
    }
    if (const char * env = std::getenv("LEAN_CHECK_SYSTEM_INTERVAL_MS")) {
        unsigned ms = std::atoi(env);
        if (ms > 0) {
            g_check_system_interval_threshold = static_cast<uint64_t>(ms) * 1000000ULL; // ms -> ns
            g_check_system_use_insn = false;
        }
    }
}

static uint64_t thread_cpu_time_ns() {
    struct timespec ts;
    clock_gettime(CLOCK_THREAD_CPUTIME_ID, &ts);
    return static_cast<uint64_t>(ts.tv_sec) * 1000000000ULL + static_cast<uint64_t>(ts.tv_nsec);
}

static uint64_t current_counter() {
    return g_check_system_use_insn ? read_insn_counter() : thread_cpu_time_ns();
}

// Thread-local: last counter value when check_system was called on this thread.
LEAN_THREAD_VALUE(uint64_t, g_last_check_system_counter, 0);

static void check_system_interval(char const * component_name) {
    init_check_system_interval();
    uint64_t threshold = g_check_system_interval_threshold;
    if (threshold > 0) {
        uint64_t now = current_counter();
        uint64_t last = g_last_check_system_counter;
        g_last_check_system_counter = now;
        if (last != 0 && now > last) {
            uint64_t elapsed = now - last;
            if (elapsed > threshold) {
                if (g_check_system_use_insn) {
                    fprintf(stderr,
                        "[check_system] WARNING: %llu M instructions since last check_system call "
                        "(component: %s)\n",
                        (unsigned long long)(elapsed / 1000000), component_name);
                } else {
                    fprintf(stderr,
                        "[check_system] WARNING: %llu ms CPU time since last check_system call "
                        "(component: %s)\n",
                        (unsigned long long)(elapsed / 1000000), component_name);
                }
                void * bt_buf[64];
                int nptrs = backtrace(bt_buf, 64);
                backtrace_symbols_fd(bt_buf, nptrs, 2); // fd 2 = stderr
                // Reset counter after printing to avoid backtrace overhead cascading
                g_last_check_system_counter = current_counter();
            }
        }
    }
}

extern "C" LEAN_EXPORT obj_res lean_check_system_interval(b_lean_obj_arg component_name) {
    check_system_interval(lean_string_cstr(component_name));
    return lean_io_result_mk_ok(lean_box(0));
}

extern "C" LEAN_EXPORT obj_res lean_internal_get_default_max_heartbeat() {
#ifdef LEAN_DEFAULT_MAX_HEARTBEAT
    return lean_box(LEAN_DEFAULT_MAX_HEARTBEAT);
#else
    return lean_box(0);
#endif
}

void inc_heartbeat() { g_heartbeat++; }

void reset_heartbeat() { g_heartbeat = 0; }

void set_max_heartbeat(size_t max) { g_max_heartbeat = max; }

extern "C" LEAN_EXPORT obj_res lean_internal_set_max_heartbeat(usize max) {
    set_max_heartbeat(max);
    return lean_box(0);
}

size_t get_max_heartbeat() { return g_max_heartbeat; }

void set_max_heartbeat_thousands(unsigned max) { g_max_heartbeat = static_cast<size_t>(max) * 1000; }

scope_heartbeat::scope_heartbeat(size_t max):flet<size_t>(g_heartbeat, max) {}
LEAN_EXPORT scope_max_heartbeat::scope_max_heartbeat(size_t max):flet<size_t>(g_max_heartbeat, max) {}

// separate definition to allow breakpoint in debugger
void throw_heartbeat_exception() {
    throw heartbeat_exception();
}

void check_heartbeat() {
    inc_heartbeat();
    if (g_max_heartbeat > 0 && g_heartbeat > g_max_heartbeat)
        throw_heartbeat_exception();
}

LEAN_THREAD_VALUE(lean_object *, g_cancel_tk, nullptr);

LEAN_EXPORT scope_cancel_tk::scope_cancel_tk(lean_object * o):flet<lean_object *>(g_cancel_tk, o) {}

/* CancelToken.isSet : @& IO.CancelToken → BaseIO Bool */
extern "C" lean_obj_res lean_io_cancel_token_is_set(b_lean_obj_arg cancel_tk);

void check_interrupted() {
    if (g_cancel_tk) {
        inc_ref(g_cancel_tk);
        if (lean_io_cancel_token_is_set(g_cancel_tk) &&
            !std::uncaught_exceptions()) {
            throw interrupted();
        }
    }
}

void check_system(char const * component_name, bool do_check_interrupted) {
    check_system_interval(component_name);
    check_stack(component_name);
    check_memory(component_name);
    if (do_check_interrupted) {
        check_interrupted();
        check_heartbeat();
    }
}

void sleep_for(unsigned ms, unsigned step_ms) {
    if (step_ms == 0)
        step_ms = 1;
    unsigned rounds = ms / step_ms;
    chrono::milliseconds c(step_ms);
    chrono::milliseconds r(ms % step_ms);
    for (unsigned i = 0; i < rounds; i++) {
        this_thread::sleep_for(c);
        check_interrupted();
    }
    this_thread::sleep_for(r);
    check_interrupted();
}
}
