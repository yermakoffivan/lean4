/-!
This test checks if the aux lemma created by simp for `[← foo]` is tagged with `[defeq]` when `foo`
is tagged with `[defeq]`, and that the aux lemma cache does not confuse this.
-/

@[implicit_reducible] def f : Nat := 0

@[defeq] theorem f_defeq : f = 0 := rfl
theorem f_not_defeq : f = 0 := (rfl)


example : f = 0 := by dsimp only [← f_defeq]

/-- error: `dsimp` made no progress -/
#guard_msgs in
example : f = 0 := by dsimp only [← f_not_defeq]


-- This does not work:

/--
@ +3:2...30
error: unsolved goals
case left
⊢ f = 0
-/
#guard_msgs (positions := true) in
example : f = 0 ∧ f = 0 := by
  constructor
  · dsimp only [← f_not_defeq]
  · dsimp only [← f_defeq]


-- This should also not work (but worked at some point)

/--
@ +4:2...30
error: unsolved goals
case right
⊢ f = 0
-/
#guard_msgs (positions := true) in
example : f = 0 ∧ f = 0 := by
  constructor
  · dsimp only [← f_defeq]
  · dsimp only [← f_not_defeq]
