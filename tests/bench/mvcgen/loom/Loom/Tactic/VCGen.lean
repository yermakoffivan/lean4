/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

prelude
public import Loom.Tactic.Types
public import Loom.Tactic.SpecDB
public import Loom.Tactic.RuleConstruct.Spec
public import Loom.Tactic.RuleConstruct.Logic
public import Loom.Tactic.RuleConstruct.Match
public import Loom.Tactic.Intros
public import Loom.Tactic.RuleCache
public import Loom.Tactic.Solve
public import Loom.Tactic.Driver
public import Loom.Tactic.Frontend

/-!
The `lmvcgen` tactic, split across the modules above.

- `VCGen.Types` — `VCGenM`, its `Context`/`State`, config-facing types, and shared caches.
- `VCGen.SpecDB` — `SpecTheoremNew`/`SpecTheoremsNew` plus database migration and lookup.
- `VCGen.RuleConstruct.Spec` — rule construction from `⊑ wp` spec theorems.
- `VCGen.RuleConstruct.Logic` — rule construction for lattice connectives such as `⊓`, `⇨`,
  and `⌜_⌝`.
- `VCGen.RuleConstruct.Match` — rule construction for `ite`, `dite`, and matcher splits.
- `VCGen.Intros` — triple unfolding, excess-state intros, precondition intros, and simp/intros.
- `VCGen.RuleCache` — `VCGenM` cache wrappers around rule constructors.
- `VCGen.Solve` — the main `solve` step and goal classification.
- `VCGen.Driver` — the worklist driver (`work`, `emitVC`, `main`, `Result`).
- `VCGen.Frontend` — the `lmvcgen` syntax, tactic elaborator, and `mkSpecContext`.
-/
