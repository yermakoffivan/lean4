/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

prelude
public import Lean.Elab.Tactic.Basic

public section

/--
If `true`, proof-mode tactics (`mintro`, `mcases`, `mexact`, ...) dispatch to the new
`Std.Internal.Do.CompleteLattice`-based implementations in
`Lean.Elab.Tactic.Internal.Do.ProofMode`. If `false` (default), they use the legacy
`SPred`-based implementations in `Lean.Elab.Tactic.Do.ProofMode`.
-/
register_option new_proof_mode : Bool := {
  defValue := false
  descr := "use the new CompleteLattice-based proof-mode tactics instead of the legacy SPred ones"
}
