-- Test: hovering on empty `by` where `pushNone` fallback fires (non-indented sorry follows)
example : True := by
                --^ $/lean/plainGoal
                 --^ $/lean/plainGoal
sorry

-- Test: "hanging by" at EOF — hover below `by` at column 0 should still show goals
example : True := by
-- hover below
--^ $/lean/plainGoal
