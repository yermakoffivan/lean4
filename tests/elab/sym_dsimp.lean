

example (h : a = c) : ((fun x => x) a, b).1 = c := by
  sym =>
    dsimp
    exact h

example (h : 10 + a = b) : let x := 10; x + a = b := by
  sym =>
    intro x
    dsimp [x]
    exact h

/--
trace: case grind
a b : Nat
h : 10 + a = b
x : Nat := 10
y : Nat := a
⊢ 10 + a = b
-/
#guard_msgs in
example (h : 10 + a = b) : let x := 10; let y := a; x + y = b := by
  sym =>
    intro x y
    dsimp [*]
    show_goals
    exact h
