import Lean

/-!
# The `linter.declCheckImplicit` linter

`linter.declCheckImplicit` warns when a declaration's type is type-correct at `.default`
transparency but not at `.implicit` transparency, suggesting the semireducible definitions that
should be marked `@[implicit_reducible]`.

Because the check runs in `addDecl`, the warning fires for *every* declaration, including ones
synthesized by attributes such as `@[simps]` and `@[reassoc]` (here modeled with a hand-written
lemma whose type mentions a semireducible definition).
-/

structure Fn where
  toFun : Nat → Nat

/-- `MyFn` is semireducible, so it does not unfold at `.implicit` transparency. -/
def MyFn : Type := Fn

def idFn : MyFn := (⟨id⟩ : Fn)

/-! ## Off by default: no warning even though the type is not correct at `.implicit`. -/

#guard_msgs in
theorem idFn_toFun_off : (idFn : Fn).toFun = id := rfl

set_option linter.declCheckImplicit true

/-! ## Enabled: the ill-typed-at-`.implicit` type is reported, blaming `MyFn`. -/

/--
warning: declaration idFn_toFun is not type-correct at `.implicit` transparency; consider marking some of the following as `@[implicit_reducible]`:
  MyFn

Note: This linter can be disabled with `set_option linter.declCheckImplicit false`
-/
#guard_msgs in
theorem idFn_toFun : (idFn : Fn).toFun = id := rfl

/-! ## A type that is fine at `.implicit` is not reported. -/

#guard_msgs in
theorem reflexive_eq : (1 : Nat) = 1 := rfl

/-! ## Marking `MyFn` `@[implicit_reducible]` fixes the mismatch: no more warning. -/

attribute [implicit_reducible] MyFn

#guard_msgs in
theorem idFn_toFun_fixed : (idFn : Fn).toFun = id := rfl
