/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Vladimir Gladshtein, Sebastian Graf
-/
import Std.Do
import Std.Tactic.Do
import Std.Internal.Do.Order.Lemmas
import Lean.Elab.Tactic.Do.ProofMode

set_option new_proof_mode true

open Std.Internal.Tactic.Do
open Lean.Order

variable {l : Type u} [CompleteLattice l] [Frame l]

theorem start_stop (Q : l) (H : Q ⊑ Q) : Q ⊑ Q := by
  mstart
  mintro HQ
  mstop
  exact H

theorem exact (Q : l) : Q ⊑ Q := by
  mstart
  mintro HQ
  mexact HQ

theorem exact_pure (P Q : l) (hP : ⊤ ⊑ P) : Q ⊑ P := by
  mintro -
  mexact hP

theorem clear (P Q : l) : P ⊑ (Q ⇨ Q) := by
  mintro HP
  mintro HQ
  mclear HP
  mexact HQ

theorem assumption (P Q : l) : Q ⊑ (P ⇨ Q) := by
  mintro _
  mintro _
  massumption

theorem assumption_pure (P Q : l) (hP : ⊤ ⊑ P) : Q ⊑ P := by
  mintro _
  massumption

namespace pure

theorem move (Q : l) (ψ : φ → ⊤ ⊑ Q) : (⌜φ⌝ : l) ⊑ Q := by
  mintro Hφ
  mpure Hφ
  mexact (ψ Hφ)

theorem move_multiple (Q : l) : (⌜φ₁⌝ : l) ⊑ ⌜φ₂⌝ ⇨ Q ⇨ Q := by
  mintro Hφ1
  mintro Hφ2
  mintro HQ
  mpure Hφ1
  mpure Hφ2
  mexact HQ

theorem move_conjunction (Q : l) : ((⌜φ₁⌝ : l) ⊓ ⌜φ₂⌝) ⊑ Q ⇨ Q := by
  mintro Hφ
  mintro HQ
  mpure Hφ
  mexact HQ

theorem rename_i1 (P Q R : l) : ⊤ ⊑ P ⇨ Q ⇨ R ⇨ Q := by
  mintro _ _ _
  mrename_i HQ _
  mexact HQ

theorem rename_i2 (P Q R : l) : ⊤ ⊑ P ⇨ Q ⇨ R ⇨ R ⇨ Q := by
  mintro H H H H
  mrename_i _ HQ _
  mexact HQ

end pure

namespace pureintro

omit [Frame l] in
theorem simple : ⊤ ⊑ (⌜True⌝ : l) := by
  mpure_intro
  exact True.intro

omit [Frame l] in
theorem or' : ⊤ ⊑ ((⌜True⌝ : l) ⊔ ⌜False⌝) := by
  mpure_intro
  left
  exact True.intro

theorem with_proof (H : A → B) (P Q : l) : P ⊑ Q ⇨ ⌜A⌝ ⇨ ⌜B⌝ := by
  mintro _HP _HQ
  mpure_intro
  exact H

end pureintro

namespace emptyhyp

theorem true_named : ⊤ ⊑ ((⌜True⌝ : l) ⇨ ⌜True⌝) := by
  mintro h
  mexact h

theorem true_unnamed_hidden : ⊤ ⊑ ((⌜True⌝ : l) ⇨ ⌜True⌝) := by
  mintro _
  mpure_intro
  exact True.intro

omit [Frame l] in
theorem or' : ⊤ ⊑ ((⌜True⌝ : l) ⊔ ⌜False⌝) := by
  mpure_intro
  left
  exact True.intro

theorem with_proof (H : A → B) (P Q : l) : P ⊑ Q ⇨ ⌜A⌝ ⇨ ⌜B⌝ := by
  mintro _HP _HQ
  mpure_intro
  exact H

end emptyhyp

namespace frame

theorem move (P Q : l) : ⊤ ⊑ ((⌜p⌝ ⊓ Q ⊓ ⌜q⌝ ⊓ ⌜r⌝ ⊓ P ⊓ ⌜s⌝ ⊓ ⌜t⌝ : l) ⇨ Q) := by
  mintro _
  mframe
  mrename_i HQ H
  mcases H with HP
  mexact HQ

theorem move_multiple (P Q : l) : ⊤ ⊑ ((⌜p⌝ ⊓ Q ⊓ ⌜q⌝ ⊓ ⌜r⌝ ⊓ P ⊓ ⌜s⌝ ⊓ ⌜t⌝ : l) ⇨ Q) := by
  mintro h
  mcases h with ⟨hp, hQ, hq, rest⟩
  mframe
  mexact hQ

theorem move_all : ⊤ ⊑ ((⌜p⌝ ⊓ ⌜q⌝ ⊓ ⌜r⌝ ⊓ ⌜s⌝ ⊓ ⌜t⌝ : Prop) ⇨ ⌜t⌝) := by
  mintro h
  mframe
  mpure_intro
  grind

end frame

theorem revert (P Q R : l) : (P ⊓ Q ⊓ R) ⊑ R := by
  mintro ⟨HP, HQ, HR⟩
  mrevert HR
  mrevert HP
  mintro HP'
  mintro HR'
  mexact HR'

namespace constructor

theorem and_ (Q : l) : Q ⊑ (Q ⊓ Q) := by
  mintro HQ
  mconstructor <;> mexact HQ

end constructor

theorem exfalso (P : l) : (⊥ : l) ⊑ P := by
  mintro HP
  mexfalso
  mexact HP

namespace leftright

theorem left' (P Q : l) : P ⊑ (P ⊔ Q) := by
  mintro HP
  mleft
  mexact HP

theorem right' (P Q : l) : Q ⊑ (P ⊔ Q) := by
  mintro HQ
  mright
  mexact HQ

theorem complex (P Q R : l) : ⊤ ⊑ (P ⇨ Q ⇨ P ⊓ (R ⊔ Q ⊔ R)) := by
  mintro HP HQ
  mconstructor
  · massumption
  mleft
  mright
  mexact HQ

end leftright

namespace specialize

theorem simple (P Q : l) : P ⊑ ((P ⇨ Q) ⇨ Q) := by
  mintro HP HPQ
  mspecialize HPQ HP
  mexact HPQ

theorem multiple (P Q R : l) : ⊤ ⊑ (P ⇨ Q ⇨ (P ⇨ Q ⇨ R) ⇨ R) := by
  mintro HP HQ HPQR
  mspecialize HPQR HP HQ
  mexact HPQR

theorem pure_imp (P Q R : l) : (⊤ ⊑ P) → ⊤ ⊑ (Q ⇨ (P ⇨ Q ⇨ R) ⇨ R) := by
  intro HP
  mintro HQ HPQR
  mspecialize HPQR HP HQ
  mexact HPQR

theorem pure_with_local (P : l) (hc : c) : ((⌜c⌝ : l) ⇨ P) ⊑ P := by
  mintro HP
  mspecialize HP hc
  mexact HP

end specialize

namespace havereplace

theorem mrepl (P Q : l) : P ⊑ ((P ⇨ Q) ⇨ Q) := by
  mintro HP HPQ
  mreplace HPQ : Q := by mspecialize HPQ HP; mexact HPQ
  mexact HPQ

theorem mhave_ (P Q : l) : P ⊑ ((P ⇨ Q) ⇨ Q) := by
  mintro HP HPQ
  mhave HQ : Q := by mspecialize HPQ HP; mexact HPQ
  mhave HQ := by mspecialize HPQ HP; mexact HPQ
  mexact HQ

end havereplace

namespace cases

theorem rename (P : l) : P ⊑ P := by
  mintro HP
  mcases HP with HP'
  mexact HP'

theorem clear' (P Q : l) : ⊤ ⊑ (P ⇨ Q ⇨ P) := by
  mintro HP HQ
  mcases HQ with -
  mexact HP

theorem pure (P : l) (Q : Prop) : φ → ⊤ ⊑ (P ⇨ ⌜Q⌝ ⇨ P) := by
  intro hφ
  mintro HP HQ
  mcases HQ with ⌜hQ⌝
  mexact HP

theorem pure_exact (P : l) (Q : Prop) (hqr : Q → ⊤ ⊑ R) : ⊤ ⊑ (P ⇨ ⌜Q⌝ ⇨ R) := by
  mintro HP HQ
  mcases HQ with ⌜hQ⌝
  mexact hqr hQ

theorem and_ (P Q R : l) : (P ⊓ Q ⊓ R) ⊑ R := by
  mintro HPQR
  mcases HPQR with ⟨HP, HQ, HR⟩
  mexact HR

theorem and_clear_pure (P Q R : l) (φ : Prop) : (P ⊓ Q ⊓ ⌜φ⌝ ⊓ R) ⊑ R := by
  mintro HPQR
  mcases HPQR with ⟨_, -, ⌜hφ⌝, HR⟩
  mexact HR

theorem or_ (P Q R : l) : (P ⊓ (Q ⊔ R) ⊓ (Q ⇨ R)) ⊑ R := by
  mintro H
  mcases H with ⟨-, ⟨HQ | HR⟩, HQR⟩
  · mspecialize HQR HQ
    mexact HQR
  · mexact HR

theorem and_pure (P Q R : Prop) : ((⌜P⌝ ⊓ ⌜Q⌝ ⊓ ⌜R⌝ : l) ⊑ ⌜R⌝) := by
  mintro HPQR
  mcases HPQR with ⟨%HP, ⌜HQ⌝, HR⟩
  mpure_intro
  exact HR

end cases

namespace refine

theorem and_ (P Q R : l) : (P ⊓ Q ⊓ R) ⊑ (P ⊓ R) := by
  mintro ⟨HP, HQ, HR⟩
  mrefine ⟨HP, HR⟩

theorem exists_1 (ψ : Nat → l) : ψ 42 ⊑ iSup ψ := by
  mintro H
  mrefine ⟨⌜42⌝, H⟩

theorem exists_2 (ψ : Nat → l) : ψ 42 ⊑ iSup ψ := by
  mintro H
  mexists 42

end refine

theorem mosel1 {α : Type} (P : l) (Φ Ψ : α → l) :
    (P ⊓ iSup (fun a => Φ a ⊔ Ψ a)) ⊑ iSup (fun a => (P ⊓ Φ a) ⊔ (P ⊓ Ψ a)) := by
  mintro ⟨HP, ⟨a, ⟨HΦ | HΨ⟩⟩⟩
  · mexists a
    mleft
    mrefine ⟨HP, HΦ⟩
  · mexists a
    mright
    mrefine ⟨HP, HΨ⟩

theorem mosel3 {α : Type} (P : l) (Φ Ψ : α → l) :
    (P ⊓ iSup (fun a => Φ a ⊔ Ψ a)) ⊑ iSup (fun a => Φ a ⊔ (P ⊓ P ⊓ Ψ a)) := by
  mintro ⟨HP, ⟨a, ⟨HΦ | HΨ⟩⟩⟩
  · mexists a
    mleft
    mexact HΦ
  · mexists a
    mright
    mrefine ⟨HP, HP, HΨ⟩
