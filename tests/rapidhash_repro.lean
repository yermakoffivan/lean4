module
prelude
public import Lean.Meta.Basic

/-!
# Repro: `try`/`catch` in `OptionT MetaM` is hash-order-fragile

## TL;DR
- Three stdlib files fail with `Failed to infer universe levels in binder type
  PUnit.{?u + 1}` after switching the runtime hash from MurmurHash to rapidhash.
- The failing pattern is `try ... catch _ => ...` inside `OptionT MetaM` (or
  `OptionT TacticM`).
- The cause is *not* the hash function itself — it is a latent ambiguity in
  instance resolution between
    `MonadExceptOf PUnit  (OptionT m)`     -- the bare-OptionT instance
    `MonadExceptOf ε      (OptionT m)`     -- lifted from the inner monad's
                                           --   `[MonadExceptOf ε m]`
  When `m = MetaM` (which has `MonadExceptOf Lean.Exception MetaM`), *both*
  instances apply. Which one wins depends on the order in which the
  `DiscrTree.getUnify` lookup returns them — and that order is built from a
  hash-keyed structure. The synthesizer iterates the candidate array from
  *end to start* (see `Lean.Meta.SynthInstance.generate`,
  `src/Lean/Meta/SynthInstance.lean:553`:
    `let idx := gNode.currInstanceIdx - 1`),
  so whichever instance lands *last* in the array is tried *first*.
- Master + MurmurHash: the lifted `MonadExceptOf Lean.Exception` happens to
  land last → tried first → ε := Lean.Exception → success.
- Master + rapidhash:   the bare `MonadExceptOf PUnit` lands last → tried
  first → ε := PUnit with a free universe metavariable → "succeeds" with a
  leftover `?u` → outParam check `PUnit ≠ Lean.Exception` fails → leftover
  `PUnit.{?u + 1}` surfaces as a binder-universe error.
- The PUnit instance was *previously* `MonadExceptOf Unit (OptionT m)`. `Unit`
  has a fixed universe (`Type 0`), so even when the "wrong" instance was
  picked, `?u` was already pinned. Commit `d54a68cb8a` (Oct 2025) generalized
  `Unit` → `PUnit`, making the latent fragility *user-visible* whenever the
  PUnit instance happens to win.

This file is self-contained: it reproduces the broken synthesis with the
current `OptionT` instances, then shows the same code working once the bare
`PUnit` instance is shadowed by a higher-priority copy of the lifted one.
-/

namespace RapidhashRepro

/-- The monad that triggers the bug. The inner monad has its own
`MonadExceptOf Lean.Exception MetaM`, so the lifted instance applies; `OptionT`
itself contributes a `MonadExceptOf PUnit` instance. Both apply → ambiguous. -/
abbrev M := OptionT Lean.MetaM

/-! ### 1. Minimal failure -/

-- Untyped `catch _` lets the elaborator pick any ε that satisfies
-- `MonadExceptOf ε M`. With the current discr-tree order in this branch's
-- stage0, ε is resolved to `PUnit.{?u}` and `?u` never gets pinned.
-- Compile this file with the broken stage0 to observe:
--
--   error: Failed to infer universe levels in binder type
--     PUnit.{?u.4 + 1}
--
-- (uncomment to reproduce the failure)
/-
def broken : M Lean.Expr := do
  try
    return Lean.mkConst ``Nat
  catch _ =>
    return Lean.mkConst ``Nat
-/

/-! ### 2. Annotating the exception type fixes it -/

-- Forcing ε := Lean.Exception bypasses the ambiguity entirely. This is the
-- workaround the failing stdlib files would need *if* we did not fix the
-- root cause.
def workaroundAnnotated : M Lean.Expr := do
  tryCatchThe Lean.Exception
    (return Lean.mkConst ``Nat)
    (fun _ => return Lean.mkConst ``Nat)

/-! ### 3. Direct evidence of which instance wins -/

-- Asking the synthesizer for `MonadExcept Lean.Exception M` *fails* on the
-- broken stage0, even though the lifted instance is in scope. The trace
--   `set_option trace.Meta.synthInstance true`
-- shows the candidate array
--   #[OptionT.instMonadExceptOf, MonadError.toMonadExceptOf,
--     OptionT.instMonadExceptOfPUnit]
-- and shows the synthesizer applying `OptionT.instMonadExceptOfPUnit` first
-- (because it is *last* in the array — see `SynthInstance.generate` iterating
-- from `currInstanceIdx - 1` downward). The PUnit search succeeds with
-- ε := PUnit, the outParam check fails, and synthesis returns
-- "not available".
--
-- (uncomment to reproduce)
-- example : MonadExcept Lean.Exception M := inferInstance

-- Conversely, asking for the PUnit instance directly succeeds — confirming
-- it *is* the candidate the broken search latches onto.
example : MonadExcept PUnit M := inferInstance

/-! ### 4. Proof that the fix is to lower the PUnit instance's priority -/

-- We register a copy of the lifted instance at *higher* priority than the
-- bare PUnit one. Once the lifted candidate dominates by priority, the
-- discr-tree-order tiebreaker is irrelevant, and `try ... catch _ => ...`
-- elaborates against `Lean.Exception` regardless of hash distribution.

instance (priority := 1500) liftedFix (ε : Type u) [MonadExceptOf ε Lean.MetaM] :
    MonadExceptOf ε M where
  throw e           := OptionT.mk <| throwThe ε e
  tryCatch x handle := OptionT.mk <| tryCatchThe ε x handle

-- With the higher-priority lifted instance available, the same broken
-- definition now elaborates without an annotation:
def repaired : M Lean.Expr := do
  try
    return Lean.mkConst ``Nat
  catch _ =>
    return Lean.mkConst ``Nat

-- And the synthesis goal that previously failed now succeeds:
example : MonadExcept Lean.Exception M := inferInstance

/-!
### Conclusion / recommended upstream fix

In `src/Init/Control/Option.lean` (currently lines 107 and 111):

    instance : MonadExceptOf PUnit (OptionT m) where ...
    instance (ε : Type u) [MonadExceptOf ε m] : MonadExceptOf ε (OptionT m) where ...

The PUnit instance should be marked low priority (or, equivalently, the
lifted instance marked high priority) so that the order in which the
discrimination tree happens to return them stops mattering. e.g.:

    @[instance low_priority]
    instance : MonadExceptOf PUnit (OptionT m) where ...

That removes the hash-order dependency for every downstream user — including
the three stdlib files that broke under rapidhash:

  - src/Lean/Meta/Tactic/Grind/Arith/FieldNormNum.lean
  - src/Lean/Elab/Tactic/Do/ProofMode/Pure.lean
  - src/Lean/Elab/Tactic/Do/ProofMode/Specialize.lean
-/

end RapidhashRepro
