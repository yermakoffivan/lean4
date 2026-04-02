/-
Tests for tactic completion in empty `by` blocks where the `pushNone` fallback
fires (non-indented content follows) or where no content follows at all.

Tests cover:
- Top-level `by` (where `withPosition commandParser` sets saved position)
- Nested `by` inside expressions (where `by` has its own saved position context)
- Completion at various columns relative to `by`

Note: `--^` tests at the column of `^`; `--⬑` tests at the column of `--` itself (for column 0).
-/

-- ===== Top-level `by`, non-indented content following =====

-- Tactic completions expected (column 21, indented past `by`)
example : True := by
                   --^ completion
sorry

-- Tactic completions expected (column 0)
example : True := by
--⬑ completion
sorry

-- Tactic completions expected (column 2)
example : True := by
--^ completion
sorry

-- ===== Top-level `by`, no tactics following =====

-- Tactic completions expected (column 21, indented past `by`)
example : True := by
                   --^ completion

-- Tactic completions expected (column 0)
example : True := by
--⬑ completion

-- Tactic completions expected (column 2)
example : True := by
--^ completion

-- ===== Nested `by`, content following =====

-- Tactic completions expected (column 21, indented past `by`)
example : True := id <|
  have : True := by
                   --^ completion
  sorry

-- No completions expected (column 2, at column of `have` line)
example : True := id <|
  have : True := by
--^ completion
  sorry

-- No completions expected (column 0)
example : True := id <|
  have : True := by
--⬑ completion
  sorry

-- No completions expected (column 4, indented past `have` but not past `by`)
example : True := id <|
  have : True := by
  --^ completion
  sorry

-- ===== Nested `by`, no tactics following =====

-- Tactic completions expected (column 21, indented past `by`)
example : True := id <|
  have : True := by
                   --^ completion

-- No completions expected (column 2, at column of `have` line)
example : True := id <|
  have : True := by
--^ completion

-- No completions expected (column 0)
example : True := id <|
  have : True := by
--⬑ completion

-- No completions expected (column 4)
example : True := id <|
  have : True := by
  --^ completion
