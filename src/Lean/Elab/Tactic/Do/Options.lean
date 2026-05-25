/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

prelude
public import Lean.Data.Options

public section

/--
If `true`, tactics and attributes that have both legacy `Std.Do` and new
`Std.Internal.Do` implementations dispatch to the new `WPMonad`/CompleteLattice-based
implementation. This affects proof-mode tactic dispatch and the `@[spec]` database
selected when the attribute is applied.
-/
register_option new_wp_monad : Bool := {
  defValue := false
  descr := "use the new WPMonad-based implementations for do tactics and specs"
}
