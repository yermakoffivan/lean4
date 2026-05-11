# Restrict worker thread count for this test.
#
# CI has reported timeouts on this test with empty output (no `dbg_trace` markers
# observed during the entire 1500s window). The hang has not been reproduced
# locally even under heavy contention, which points at something in the
# scheduling space rather than a logic bug. Limiting thread count makes the
# task graph more deterministic and reduces the surface for unobserved races.
#
# `LEAN_NUM_THREADS` is honored by `lean_initialize_thread_local_runtime` and
# applies to the file worker spawned by `lean --server`.
export LEAN_NUM_THREADS=2
