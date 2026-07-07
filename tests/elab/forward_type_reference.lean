/-!
Tests `forward_type_reference%`: an opaque stand-in `T.FwdRef` for a not-yet-defined type `T`, with
`T.toFwdRef`/`T.FwdRef.fromFwdRef` casts auto-generated once `T` is defined. Covers monomorphic,
parametric, universe-polymorphic, and dependent-telescope targets, a namespaced target, and the
kernel rejection of the unlaundered form.
-/

abbrev Step := Nat
abbrev BaseM := StateM Nat

/-! ## Monomorphic target (the `Simp.MethodsRef` shape) -/

abbrev SimpM := ReaderT (forward_type_reference% Methods) BaseM

structure Methods where
  pre : Nat → SimpM Step
deriving Nonempty

def getMethods : SimpM Methods := return Methods.FwdRef.fromFwdRef (← read)
def runWith (m : Methods) (act : SimpM α) : α := (act (Methods.toFwdRef m)).run' 0
def demo : Nat := runWith { pre := fun n => pure (n + 1) } do (← getMethods).pre 41

/-- info: 42 -/
#guard_msgs in #eval demo
/-- info: 'demo' depends on axioms: [Classical.choice] -/
#guard_msgs in #print axioms demo

/-! ## Parametric target -/

abbrev PSimpM (σ : Type) := ReaderT (forward_type_reference% PMethods σ) BaseM

structure PMethods (σ : Type) where
  pre : σ → PSimpM σ σ
deriving Nonempty

def pGet [Nonempty σ] : PSimpM σ (PMethods σ) := return PMethods.FwdRef.fromFwdRef (← read)
def pRun (m : PMethods σ) (act : PSimpM σ β) : β := (act (PMethods.toFwdRef m)).run' 0
def pDemo : Nat := pRun (σ := Nat) { pre := fun n => pure (n + 1) } do (← pGet).pre 41

/-- info: 42 -/
#guard_msgs in #eval pDemo
/-- info: PMethods.FwdRef : Type → Type -/
#guard_msgs in #check @PMethods.FwdRef

/-! ## Universe-polymorphic target -/

abbrev UM (σ : Type u) := ReaderT (forward_type_reference% UBox σ) (StateM Nat)

structure UBox (σ : Type u) where
  run : σ → UM σ PUnit
deriving Nonempty

/-- info: @UBox.toFwdRef : {p1 : Type u_1} → UBox p1 → UBox.FwdRef p1 -/
#guard_msgs in #check @UBox.toFwdRef

/-! ## Dependent telescope (a value/index parameter depending on a sibling) -/

abbrev DM (α : Type) (a : α) := ReaderT (forward_type_reference% DBox α a) (StateM Nat)

structure DBox (α : Type) (a : α) where
  run : α → DM α a Nat
deriving Nonempty

/-- info: DBox.FwdRef : (x0 : Type) → x0 → Type -/
#guard_msgs in #check @DBox.FwdRef

def dGet [Nonempty α] : DM α a (DBox α a) := return DBox.FwdRef.fromFwdRef (← read)
def dRun (m : DBox α a) (act : DM α a β) : β := (act (DBox.toFwdRef m)).run' 0
def dDemo : Nat := dRun (α := Nat) (a := 7) { run := fun n => pure (n + 1) } do (← dGet).run 41

/-- info: 42 -/
#guard_msgs in #eval dDemo

/-! ## Namespaced target: casts land at `Foo.Bar.*` -/

namespace Foo

abbrev NM := ReaderT (forward_type_reference% Bar) BaseM

structure Bar where
  run : Nat → NM Nat
deriving Nonempty

def nGet : NM Bar := return Bar.FwdRef.fromFwdRef (← read)
def nRun (m : Bar) (act : NM β) : β := (act (Bar.toFwdRef m)).run' 0
def nDemo : Nat := nRun { run := fun n => pure (n + 1) } do (← nGet).run 41

/-- info: 42 -/
#guard_msgs in #eval nDemo

end Foo

/-- info: Foo.Bar.toFwdRef : Foo.Bar → Foo.Bar.FwdRef -/
#guard_msgs in #check @Foo.Bar.toFwdRef

/-! ## Already-defined target: bridged in the same command -/

structure Pre where
  x : Nat
deriving Nonempty

abbrev PreM := ReaderT (forward_type_reference% Pre) BaseM

/-- info: Pre.toFwdRef : Pre → Pre.FwdRef -/
#guard_msgs in #check @Pre.toFwdRef

/-! ## The laundering is load-bearing: the unlaundered form is kernel-rejected -/

/--
error: (kernel) arg #1 of 'BadMethods.mk' has a non positive occurrence of the datatypes being declared
-/
#guard_msgs in
structure BadMethods where
  pre : Nat → ReaderT BadMethods BaseM Step
