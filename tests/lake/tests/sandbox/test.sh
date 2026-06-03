#!/usr/bin/env bash
source ../common.sh

./clean.sh

# `lake build --sandbox` confines each module compilation so the `lean`
# subprocess can only write beneath a private per-module scratch directory
# (Linux Landlock). This prevents one module's build from poisoning another
# module's `.olean` -- see the "Hardening the cache" discussion.

OLEAN=.lake/build/lib/lean/Test/A.olean

# Probe whether Landlock (and thus `--sandbox`) is available on this host.
# `--sandbox` hard-fails where Landlock is unavailable, so on such hosts we
# skip the behavioural assertions rather than report a spurious failure.
echo "# probe --sandbox availability"
if ! "$LAKE" build --sandbox Test.A >probe.out 2>&1; then
  if grep -qi "landlock\|sandbox" probe.out; then
    echo "SKIP: Landlock unavailable on this host"
    cat probe.out
    ./clean.sh
    exit 0
  fi
  cat probe.out
  echo "FAILURE: --sandbox probe failed for a non-Landlock reason"
  exit 1
fi
./clean.sh

# 1. Threat reproduction: without the sandbox, building `Test.B` overwrites the
#    already-built `Test.A.olean`.
echo "# TEST: without --sandbox, a sibling module poisons A.olean"
test_run build Test.A   # build A first, so its .olean exists to be clobbered
test_run build Test.B   # B's elaboration overwrites A.olean
if grep -qa "POISONED-BY-B" "$OLEAN"; then
  echo "OK: A.olean was poisoned without the sandbox (threat reproduced)"
else
  echo "FAILURE: expected A.olean to be poisoned without --sandbox"
  exit 1
fi

./clean.sh

# 2. With the sandbox, B's write to A.olean is denied and A.olean stays intact.
echo "# TEST: with --sandbox, the sibling write is denied"
test_run build --sandbox Test.A
test_run build --sandbox Test.B
if grep -qa "POISONED-BY-B" "$OLEAN"; then
  echo "FAILURE: A.olean was poisoned despite --sandbox"
  exit 1
fi
echo "OK: A.olean intact under --sandbox"

# Sanity: the sandboxed build still produces a usable A.olean.
test_run build --sandbox Test.A Test.B

./clean.sh
rm -f produced.out probe.out
