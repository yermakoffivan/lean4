set_option warn.sorry false

opaque rel {α : Type u} : α → α → Prop

theorem foo {σ : Type u} {α : Type v} {f g : σ → α} : rel f g := sorry

set_option trace.Meta.debug true in
theorem bar {Pred : Type u} (f : Nat → Pred) :
  rel f f := by
  sym => apply foo -- fails
