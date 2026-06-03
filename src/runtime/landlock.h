/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Kim Morrison
*/
#pragma once

/* Self-exec sandbox entry point.

   When the `lean` binary is invoked as

       lean --sandbox-exec --rw <dir> [--rw <dir>...] -- <prog> <args...>

   it forks a child that starts a new process group, closes inherited file
   descriptors, applies a Linux Landlock policy permitting filesystem *writes*
   only beneath the given `--rw` directories (reads and execution stay
   unrestricted), and then `execvp`s `<prog> <args...>`. The parent supervises:
   once the child exits it `SIGKILL`s the whole process group, so no backgrounded
   process can mutate a sandboxed output after this returns.

   This must be called as the very first thing in `main`, before any thread or
   runtime state exists, so that the (inherited-across-execve) Landlock domain
   covers the inner process and all of its future threads.

   Returns the inner program's exit code (or 128+signal), or a nonzero error
   code if the sandbox could not be set up. */
extern "C" int lean_sandbox_exec(int argc, char ** argv);
