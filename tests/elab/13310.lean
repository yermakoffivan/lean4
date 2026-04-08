-- Regression test for https://github.com/leanprover/lean4/issues/13310
-- `include_str` should not require `public meta import Init.System.FilePath`

module

-- Before the fix, this would produce:
--   Invalid `meta` definition `_tmp✝`, `System.FilePath.mk` is not accessible here;
--   consider adding `public meta import Init.System.FilePath`
-- After the fix, `include_str` evaluates the file path without meta checks, so the
-- only error is about computing the parent directory (expected in the elab test runner
-- which passes a bare filename without a directory prefix).
/--
error: cannot compute parent directory of `13310.lean`
-/
#guard_msgs in
def hello := include_str "13310.txt"
