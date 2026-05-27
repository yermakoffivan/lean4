import Std
import Lean.Elab.Tactic.Grind.LintExceptions

/-! `BitVec` exceptions -/

/-! Check BitVec namespace: -/

#guard_msgs in
#grind_lint check (min := 20) in BitVec
