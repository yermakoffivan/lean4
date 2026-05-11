/-!
Tests for `Environment.localConstantInfos` (lean4#13705): we walk into the nested `AsyncConsts`
of non-theorem decls (so `where`-clause helpers inside a `def` are visible to `exact?`), but stop
at theorems (whose body is elaborated asynchronously, so any nested decls — `where` helpers,
`match` matchers, etc. — would be race-visible).
-/

opaque P : Prop
opaque Q : Prop
opaque R : Prop

/-! `where` in a `def`: the helper is reachable. -/
def d : True := True.intro
  where helper : P → R := fun _ => sorry

/--
info: Try this:
  [apply] exact fun a => d.helper a
-/
#guard_msgs in
example : P → R := by exact?

/-! `where` in a `theorem`: the helper is intentionally hidden, so `exact?` cannot use it even
though it would have the right type. -/
theorem t : True := True.intro
  where helper : P → Q := fun _ => sorry

/-- error: `exact?` could not close the goal. Try `apply?` to see partial suggestions. -/
#guard_msgs in
example : P → Q := by exact?
