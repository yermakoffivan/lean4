prelude
import Init.Notation
/-!
Tests that while working on the prelude, try?-on-by does not run when not all infrastructure is
availbe.
-/


/--
error: unsolved goals
⊢ True
-/
#guard_msgs in
theorem test : True := by
