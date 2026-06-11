/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Lean.Elab.BuiltinDo.Basic
meta import Lean.Parser.Do
import Init.Control.Do
import Lean.Meta.ProdN

public section

namespace Lean.Elab.Do

open Lean.Parser.Term
open Lean.Meta

@[builtin_macro Lean.Parser.Term.doFor] def expandDoFor : Macro := fun stx => do
  match stx with
  | `(doFor| for $_:optConfig $[$_ : ]? $_:ident in $_ do $_) =>
    -- This is the target form of the expander, handled by `elabDoFor` below.
    Macro.throwUnsupported
  | `(doFor| for%$tk $cfg:optConfig $decls:doForDecl,* do $body) => expand tk decls.getElems cfg body
  | _ => Macro.throwUnsupported
where expand (tk : Syntax) (decls : Array (TSyntax ``doForDecl)) (cfg : TSyntax ``optConfig)
    (body : TSyntax ``doSeq) : MacroM Syntax := do
  let `(doForDecl| $[$h? : ]? $pattern in $xs) := decls[0]! | Macro.throwUnsupported
  let mut doElems := #[]
  let mut body : TSyntax ``doSeq := body
  -- Expand `pattern` into an `Ident` `x`:
  let x ←
    if pattern.raw.isIdent then
      pure ⟨pattern⟩
    else if pattern.raw.isOfKind ``Lean.Parser.Term.hole then
      Term.mkFreshIdent pattern
    else
      -- This case is a last resort, because it introduces a `match` and that will cause eager
      -- defaulting. In practice this means that `mut` vars default to `Nat` too often.
      -- Hence we try to only generate a `match` if we absolutely must.
      let x ← Term.mkFreshIdent pattern
      body ← `(doSeq| match $x:term with | $pattern => $body)
      pure x
  -- Expand the remaining `doForDecl`s:
  for doForDecl in decls[1...*] do
    /-
      Expand
      ```
      for x in xs, y in ys do
        body
      ```
      into
      ```
      let mut s := Std.toStream ys
      for x in xs do
        match Std.Stream.next? s with
        | none => break
        | some (y, s') =>
          s := s'
          body
      ```
    -/
    let `(doForDecl| $[$h? : ]? $y in $ys) := doForDecl | Macro.throwUnsupported
    if let some h := h? then
      Macro.throwErrorAt h "The proof annotation here has not been implemented yet."
    /- Recall that `@` (explicit) disables `coeAtOutParam`.
       We used `@` at `Stream` functions to make sure `resultIsOutParamSupport` is not used. -/
    let toStreamApp ← withRef ys `(@Std.toStream _ _ _ $ys)
    let s := mkIdentFrom ys (← withFreshMacroScope <| MonadQuotation.addMacroScope `__s)
    doElems := doElems.push (← `(doSeqItem| let mut $s := $toStreamApp:term))
    body ← `(doSeq|
      match @Std.Stream.next? _ _ _ $s with
        | none => break
        | some ($y, s') =>
          $s:ident := s'
          do $body)
  doElems := doElems.push (← `(doSeqItem| for%$tk $cfg:optConfig $[$h? : ]? $x:ident in $xs do $body))
  `(doElem| do $doElems*)

private inductive JumpKind where
  | «return» | «break» | «continue»

/--
A jump out of a `for` loop body: an early `return`, or a `break` or `continue` targeting an
enclosing labeled loop. Such jumps thread through the `forIn` state tuple: the loop body sets the
jump's `Option`-typed slot and stops iterating via `ForInStep.done`, and the dispatch code after
the loop invokes the jump's continuation when its slot is set.
-/
private structure TunneledJump where
  /-- The jump's target label; `Name.anonymous` for the unlabeled `return`. -/
  label : Name
  kind : JumpKind
  /-- The name bound to the slot value in the loop body and after the loop. -/
  varName : Name
  /-- The payload type `τ` of the slot of type `Option τ`; `PUnit` for `break`/`continue`. -/
  payloadType : Expr
  /-- Builds the jump expression after the loop from the slot payload. -/
  afterLoop : Expr → DoElabM Expr

@[builtin_doElem_elab Lean.Parser.Term.doFor] def elabDoFor : DoElab := fun stx dec => do
  let `(doFor| for%$tk $cfg:optConfig $[$h? : ]? $x:ident in $xs do $body) := stx | throwUnsupportedSyntax
  let config ← elabDoConfig cfg
  let dec ← dec.ensureUnitAt tk
  checkMutVarsForShadowing #[x]
  let uα ← mkFreshLevelMVar
  let uρ ← mkFreshLevelMVar
  let α ← mkFreshExprMVar (mkSort (uα.succ)) (userName := `α) -- assigned by outParam
  let ρ ← mkFreshExprMVar (mkSort (uρ.succ)) (userName := `ρ) -- assigned in the next line
  let xs ← Term.elabTermEnsuringType xs ρ
  let mi := (← read).monadInfo
  let mutVars := (← read).mutVars

  let info ← inferControlInfoSeq body
  let oldReturnCont ← getReturnCont
  let loopMutVars := mutVars.filter fun x => info.reassigns.contains x.getId

  -- Collect the jumps that tunnel through the `forIn` state tuple. Jumps to unknown or
  -- kind-mismatched labels are not tunneled; they are reported when the jump itself is elaborated.
  let ownLabels := Name.anonymous :: (config.label?.map (·.getId)).toList
  let mut tunnelsAcc : Array TunneledJump := #[]
  for (l, _) in info.returns.toList do
    let returnCont? ←
      if l == Name.anonymous then
        pure (some oldReturnCont)
      else
        match ← getLabeledTarget? l with
        | some (.block returnCont) => pure (some returnCont)
        | _ => pure none
    if let some returnCont := returnCont? then
      tunnelsAcc := tunnelsAcc.push { label := l, kind := .return, varName := ← mkFreshUserName `__r,
                                      payloadType := returnCont.resultType, afterLoop := returnCont.k }
  for l in info.breaks.toList do
    unless ownLabels.contains l do
      if let some (.loop breakCont _) ← getLabeledTarget? l then
        tunnelsAcc := tunnelsAcc.push { label := l, kind := .break, varName := ← mkFreshUserName `__b,
                                        payloadType := ← mkPUnit, afterLoop := fun _ => breakCont }
  for l in info.continues.toList do
    unless ownLabels.contains l do
      if let some (.loop _ continueCont) ← getLabeledTarget? l then
        tunnelsAcc := tunnelsAcc.push { label := l, kind := .continue, varName := ← mkFreshUserName `__c,
                                        payloadType := ← mkPUnit, afterLoop := fun _ => continueCont }
  let tunnels := tunnelsAcc

  let loopStateNames := tunnels.toList.map (·.varName) ++ (loopMutVars.map (·.getId)).toList
  let useLoopState (fired? : Option (Nat × Expr)) : TermElabM (Array Expr) := do
    let mut defs := #[]
    for (t, i) in tunnels.zipIdx do
      let slot ← match fired? with
        | some (j, e) => if i == j then mkSome t.payloadType e else mkNone t.payloadType
        | none => mkNone t.payloadType
      defs := defs.push slot
    for x in loopMutVars do
      let defn ← getLocalDeclFromUserName x.getId
      Term.addTermInfo' x defn.toExpr
      -- ForIn forces the mut tuple into the universe mi.u: that of the do block result type.
      -- If we don't do this, then we are stuck on solving constraints such as
      --   `max ?u.46 ?u.47 =?= max (max ?u.22 ?u.46) ?u.47`
      -- It's important we do this as a separate isLevelDefEq check on the decremented level because
      -- otherwise (`ensureHasType (mkSort mi.u.succ)`) we are stuck on constraints like
      --   `max (?u+1) (?v+1) =?= ?u+1`
      let u ← getDecLevel defn.type
      discard <| isLevelDefEq u mi.u
      defs := defs.push defn.toExpr
    if tunnels.size == 1 && loopMutVars.isEmpty then
      defs := defs.push (mkConst ``Unit.unit)
    return defs

  let (preS, σ) ← mkProdMkN (← useLoopState none) mi.u

  let (app, p?) ← match h? with
    | none =>
      let instForIn ← Term.mkInstMVar <| mkApp3 (mkConst ``ForIn [uρ, uα, mi.u, mi.v]) mi.m ρ α
      let app := mkConst ``ForIn.forIn [uρ, uα, mi.u, mi.v]
      -- ForIn.forIn : {m ρ α : _} → [ForIn m ρ α] → {β : _} → ρ → β → (α → β → m (ForInStep β)) → m β
      let app := mkApp7 app mi.m ρ α instForIn σ xs preS -- 1 arg remaining: loop body
      pure (app, none)
    | some _ =>
      let d ← mkFreshExprMVar (mkApp2 (mkConst ``Membership [uα, uρ]) α ρ) (userName := `d) -- outParam
      let instForIn ← Term.mkInstMVar <| mkApp4 (mkConst ``ForIn' [uρ, uα, mi.u, mi.v]) mi.m ρ α d
      let app := mkConst ``ForIn'.forIn' [uρ, uα, mi.u, mi.v]
      -- ForIn'.forIn' : {m ρ α : _} → [Membership α ρ] → [ForIn' m ρ α d] → {β : _} → ρ → β → ((a : α) → a ∈ x → β → m (ForInStep β)) → m β
      let app := mkApp8 app mi.m ρ α d instForIn σ xs preS -- 1 arg remaining: loop body
      pure (app, some d)
  let s ← mkFreshUserName `__s
  let xh : Array (Name × (Array Expr → DoElabM Expr)) := match h?, p? with
    | some h, some d =>
      #[(x.getId, fun _ => pure α),
        (h.getId, fun x => pure (mkApp5 (mkConst ``Membership.mem [uα, uρ]) α ρ d xs x[0]!))]
    | _, _ =>
      #[(x.getId, fun _ => pure α)]

  let body ←
    withLocalDeclsD xh fun xh => do
    Term.addLocalVarInfo x xh[0]!
    if let some h := h? then
      Term.addLocalVarInfo h xh[1]!
    withLocalDecl s .default σ (kind := .implDetail) fun loopS => do
    mkLambdaFVars (xh.push loopS) <| ← do
    bindMutVarsFromTuple loopStateNames loopS.fvarId! do
    let newDoBlockResultType := mkApp (mkConst ``ForInStep [mi.u]) σ
    withDoBlockResultType newDoBlockResultType do
    let mkDone (fired? : Option (Nat × Expr)) : DoElabM Expr := do
      let (tuple, _tupleTy) ← mkProdMkN (← useLoopState fired?) mi.u
      let done := mkApp2 (mkConst ``ForInStep.done [mi.u]) σ tuple
      mkPureApp newDoBlockResultType done
    let continueCont := do
      let (tuple, _tupleTy) ← mkProdMkN (← useLoopState none) mi.u
      let yield := mkApp2 (mkConst ``ForInStep.yield [mi.u]) σ tuple
      mkPureApp newDoBlockResultType yield
    let breakCont := mkDone none
    -- Body-side continuations for the tunneled jumps: fire the jump's slot and stop iterating.
    let mut returnCont := { oldReturnCont with k := fun e => (do
        throwError "Early returning {e} but the info said there is no early return" : DoElabM Expr) }
    let mut loopOverrides : NameMap (Option (DoElabM Expr) × Option (DoElabM Expr)) := {}
    let mut blockOverrides : List (Name × LabeledTarget) := []
    for (t, i) in tunnels.zipIdx do
      match t.kind with
      | .return =>
        let k := fun e => mkDone (some (i, e))
        if t.label == Name.anonymous then
          returnCont := { oldReturnCont with k }
        else
          blockOverrides := (t.label, .block { resultType := t.payloadType, k }) :: blockOverrides
      | .break =>
        let jump := do mkDone (some (i, ← mkPUnitUnit))
        let (_, c?) := loopOverrides.getD t.label (none, none)
        loopOverrides := loopOverrides.insert t.label (some jump, c?)
      | .continue =>
        let jump := do mkDone (some (i, ← mkPUnitUnit))
        let (b?, _) := loopOverrides.getD t.label (none, none)
        loopOverrides := loopOverrides.insert t.label (b?, some jump)
    let unused : DoElabM Expr :=
      throwError "Internal error in the `do` elaborator: unused tunneled jump continuation"
    let labeledOverrides := blockOverrides ++ loopOverrides.toList.map fun (l, b?, c?) =>
      (l, LabeledTarget.loop (b?.getD unused) (c?.getD unused))
    enterLoopBody config.label? breakCont continueCont returnCont labeledOverrides do
    -- Elaborate the loop body, which must have result type `PUnit`, just like the whole `for` loop.
    elabDoSeq body { dec with k := continueCont, kind := .duplicable }

  let forIn := mkApp app body

  let γ := (← read).doBlockResultType
  let rest ←
    withLocalDeclD s σ fun postS => do mkLambdaFVars #[postS] <| ← do
      bindMutVarsFromTuple loopStateNames postS.fvarId! do
        -- Dispatch on the tunneled jump slots: the first slot that is set jumps to its target;
        -- if no slot is set, the loop completed normally and control falls through.
        let rec dispatch : List TunneledJump → DoElabM Expr
          | [] => dec.continueWithUnit
          | t :: rest => do
            let slot ← getFVarFromUserName t.varName
            let slot ← if tunnels.size == 1 && loopMutVars.isEmpty then
                mkAppM ``Prod.fst #[slot]
              else
                pure slot
            let motive := mkLambda `_ .default (← inferType slot) (← mkMonadApp γ)
            let app := mkApp3 (mkConst ``Break.runK.match_1 [mi.u, mi.v.succ]) t.payloadType motive slot
            let noneCase := mkSimpleThunk (← dispatch rest)
            let someCase ← withLocalDeclD (← mkFreshUserName `r) t.payloadType fun r => do
              mkLambdaFVars #[r] (← t.afterLoop r)
            return mkApp2 app someCase noneCase
        dispatch tunnels.toList

  mkBindApp σ γ forIn rest
