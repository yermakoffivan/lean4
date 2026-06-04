/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
module

prelude
public import Lean.Elab.Tactic.Do.Internal.VCGen.Types
public import Lean.Elab.Tactic.Do.Internal.VCGen.SpecDB
public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Spec
public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Simp
public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Logic
public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Match
public import Lean.Elab.Tactic.Do.Internal.VCGen.Utils
public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleCache
public import Lean.Elab.Tactic.Do.Internal.VCGen.EPost
public import Lean.Elab.Tactic.Do.Internal.VCGen.Solve
public import Lean.Elab.Tactic.Do.Internal.VCGen.Driver
public import Lean.Elab.Tactic.Do.Internal.VCGen.Frontend

/-!
The `lmvcgen` tactic, split across the modules above.

- `VCGen.Types` — `VCGenM`, its `Context`/`Scope`/`State`, config-facing types, and shared caches.
- `VCGen.SpecDB` — `SpecTheoremNew`/`SpecTheoremsNew` plus database migration and lookup.
- `VCGen.RuleConstruct.Spec` — rule construction from `⊑ wp` spec theorems.
- `VCGen.RuleConstruct.Simp` — rule construction from equality spec theorems.
- `VCGen.RuleConstruct.Logic` — rule construction for lattice connectives such as `⊓`, `⇨`,
  and `⌜_⌝`.
- `VCGen.RuleConstruct.Match` — rule construction for `ite`, `dite`, and matcher splits.
- `VCGen.Utils` — state intro, precondition intros, simp, and backward-rule application helpers.
- `VCGen.RuleCache` — `VCGenM` cache wrappers around rule constructors.
- `VCGen.Solve` — the main `solve` step and goal classification.
- `VCGen.Driver` — the worklist driver (`work`, `emitVC`, `main`, `Result`).
- `VCGen.Frontend` — the `lmvcgen` syntax, tactic elaborator, and `mkContext`.
-/
