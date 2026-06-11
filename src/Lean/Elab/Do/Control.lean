/-
Copyright (c) 2025 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
import Lean.Meta.ProdN
public import Lean.Elab.Do.Basic
import Init.Control.Do

public section

namespace Lean.Elab.Do

open Lean Meta Elab

structure ControlStack where
  description : Unit → MessageData
  m : DoElabM Expr
  stM : Expr → DoElabM Expr
  /-- The result-type wrapper this layer adds; `stM` composes it with the layers below. -/
  localStM : Expr → DoElabM Expr
  runInBase : Expr → DoElabM Expr
  restoreCont : DoElemCont → DoElabM DoElemCont

def ControlStack.unStM (m : ControlStack) (stMα : Expr) : DoElabM Expr := do
  let α ← mkFreshResultType `α
  let stMα' ← m.stM α
  unless ← isDefEq stMα stMα' do
    throwError "Could not take apart {stMα} as a `{stMα'}`. This is a bug in the `do` elaborator."
  return α

def ControlStack.base (mi : MonadInfo) : ControlStack where
  description _ := "base"
  m := pure mi.m
  stM α := pure α
  localStM α := pure α
  runInBase e := pure e
  restoreCont dec := pure dec

def ControlStack.stateT (baseMonadInfo : MonadInfo) (mutVarIdents : Array Ident) (σ : Expr) (base : ControlStack) : ControlStack where
  description _ := m!"StateT {σ} over {base.description ()}"
  m := return mkApp2 (mkConst ``StateT [baseMonadInfo.u, baseMonadInfo.v]) (← getσ) (← base.m)
  stM α := stM α >>= base.stM
  localStM := stM
  runInBase e := do
    -- `e : StateT σ m α`. Fetch the state tuple `s : σ` and apply it to `e`, `e.run s`.
    -- See also `StateT.monadControl.liftWith`.
    let mutExprs ← mutVarIdents.mapM fun x => do
      let defn ← getLocalDeclFromUserName x.getId
      Term.addTermInfo' x defn.toExpr
      pure defn.toExpr
    let (tuple, tupleTy) ← mkProdMkN mutExprs baseMonadInfo.u
    unless ← isDefEq tupleTy σ do -- just for sanity; maybe delete in the future
      throwError "State tuple type mismatch: expected {σ}, got {tupleTy}. This is a bug in the `do` elaborator."
    base.runInBase <| mkApp e tuple
  restoreCont dec := do
    -- Wrap `dec` such that the result type is `(dec.resultType × σ)` by unpacking the state tuple
    -- before calling `dec.k`. See also `StateT.monadControl.restoreM`.
    let resultName ← mkFreshUserName `p
    let resultType ← stM dec.resultType
    let k : DoElabM Expr := do
      let p ← getFVarFromUserName resultName
      bindMutVarsFromTuple (dec.resultName :: mutVarNames.toList) p.fvarId! do
        dec.k
    base.restoreCont { resultName, resultType, k }
where
  mutVarNames := mutVarIdents.map (·.getId)
  getσ := do mkProdN (← mutVarNames.mapM (LocalDecl.type <$> getLocalDeclFromUserName ·)) baseMonadInfo.u
  stM α := return mkApp2 (mkConst ``Prod [baseMonadInfo.u, baseMonadInfo.u]) α (← getσ) -- NB: muts `σ` might have been refined by dependent pattern matches

def ControlStack.optionT (baseMonadInfo : MonadInfo) (optionTWrapper casesOnWrapper : Name)
    (getCont : DoElabM (DoElabM Expr)) (base : ControlStack) : ControlStack where
  description _ := m!"OptionT over {base.description ()}"
  m := return mkApp (mkConst optionTWrapper [baseMonadInfo.u, baseMonadInfo.v]) (← base.m)
  stM := base.stM ∘ stM
  localStM α := pure (stM α)
  runInBase e := do
    -- `e : OptionT m α`. Return `e`, which is defeq to `OptionT.run e`.
    -- See also `instMonadControlOptionTOfMonad.liftWith`.
    base.runInBase (← mkAppM ``OptionT.run #[e])
  restoreCont dec := do
    -- Wrap `dec` such that the result type is `Option dec.resultType` by unpacking
    -- the option, calling `dec.k` in the success case.
    -- See also `instMonadControlOptionTOfMonad.restoreM`.
    let resultName ← mkFreshUserName `e
    let resultType := stM dec.resultType
    let k : DoElabM Expr := do
      let e ← getFVarFromUserName resultName
      let outerCont ← getCont
      let kexit ← withLocalDeclD (← mkFreshUserName `r) (mkConst ``Unit) fun r => do
        mkLambdaFVars #[r] (← outerCont)
      let ksuccess ← withLocalDeclD dec.resultName dec.resultType fun r => do
        mkLambdaFVars #[r] (← dec.k)
      let β ← mkMonadApp (← read).doBlockResultType
      return mkApp5 (mkConst casesOnWrapper [baseMonadInfo.u, baseMonadInfo.v]) dec.resultType β e kexit ksuccess
    base.restoreCont { resultName, resultType, k }
where
  stM α := mkApp (mkConst ``Option [baseMonadInfo.u]) α

def ControlStack.exceptT (baseMonadInfo : MonadInfo) (exceptTWrapper casesOnWrapper : Name)
    (getCont : DoElabM ReturnCont) (ε : Expr) (base : ControlStack) : ControlStack where
  description _ := m!"ExceptT ({ε}) over {base.description ()}"
  m := return mkApp2 (mkConst exceptTWrapper [baseMonadInfo.u, baseMonadInfo.v]) ε (← base.m)
  stM α := stM α >>= base.stM
  localStM := stM
  runInBase e := do
    -- `e : ExceptT ε m α`. Return `e`, which is defeq to `ExceptT.run e`.
    -- See also `instMonadControlExceptTOfMonad.liftWith`.
    base.runInBase (← mkAppM ``ExceptT.run #[e])
  restoreCont dec := do
    -- Wrap `dec` such that the result type is `Except ε dec.resultType` by unpacking the exception,
    -- calling `dec.k` in the success case. See also `instMonadControlExceptTOfMonad.restoreM`.
    let resultName ← mkFreshUserName `e
    let k := do
      let e ← getFVarFromUserName resultName
      let outerCont ← getCont
      let kexit ← withLocalDeclD (← mkFreshUserName `r) outerCont.resultType fun r => do
        mkLambdaFVars #[r] (← outerCont.k r)
      let (ksuccess, β) ← withLocalDeclD dec.resultName dec.resultType fun r => do
        let body ← dec.k
        let ksuccess ← mkLambdaFVars #[r] body
        let β ← inferType body
        return (ksuccess, β)
      return mkApp6 (mkConst casesOnWrapper [baseMonadInfo.u, baseMonadInfo.v]) ε dec.resultType β e kexit ksuccess
    let resultType ← stM dec.resultType
    base.restoreCont { resultName, resultType, k }
where
  -- Like `σ`, we need to refine `ε` because it is the early return value.
  stM α := return mkApp2 (mkConst ``Except [baseMonadInfo.u, baseMonadInfo.u]) (← getCont).resultType α

def ControlStack.earlyReturnT (baseMonadInfo : MonadInfo) (ρ : Expr) (m : ControlStack) : ControlStack :=
  exceptT baseMonadInfo ``EarlyReturnT ``EarlyReturn.runK getReturnCont ρ m

def ControlStack.breakT (baseMonadInfo : MonadInfo) (m : ControlStack) : ControlStack :=
  let getCont := getBreakCont >>= (·.getDM (throwError "`break` must be nested inside a loop"))
  optionT baseMonadInfo ``BreakT ``Break.runK getCont m

def ControlStack.continueT (baseMonadInfo : MonadInfo) (m : ControlStack) : ControlStack :=
  let getCont := getContinueCont >>= (·.getDM (throwError "`continue` must be nested inside a loop"))
  optionT baseMonadInfo ``ContinueT ``Continue.runK getCont m

/-- An `EarlyReturnT` layer for `return` to the labeled `do` block `l`. -/
def ControlStack.labeledReturnT (baseMonadInfo : MonadInfo) (l : Name) (ρ : Expr) (m : ControlStack) : ControlStack :=
  let getCont : DoElabM ReturnCont := do
    match ← getLabeledTarget? l with
    | some (.block returnCont) => pure returnCont
    | _ => throwError "Internal error in the `do` elaborator: labeled block `{l}` is not in scope"
  exceptT baseMonadInfo ``EarlyReturnT ``EarlyReturn.runK getCont ρ m

/-- A `BreakT` layer for `break` to the labeled loop `l`. -/
def ControlStack.labeledBreakT (baseMonadInfo : MonadInfo) (l : Name) (m : ControlStack) : ControlStack :=
  let getCont : DoElabM (DoElabM Expr) := do
    match ← getLabeledTarget? l with
    | some (.loop breakCont _) => pure breakCont
    | _ => throwError "Internal error in the `do` elaborator: labeled loop `{l}` is not in scope"
  optionT baseMonadInfo ``BreakT ``Break.runK getCont m

/-- A `ContinueT` layer for `continue` to the labeled loop `l`. -/
def ControlStack.labeledContinueT (baseMonadInfo : MonadInfo) (l : Name) (m : ControlStack) : ControlStack :=
  let getCont : DoElabM (DoElabM Expr) := do
    match ← getLabeledTarget? l with
    | some (.loop _ continueCont) => pure continueCont
    | _ => throwError "Internal error in the `do` elaborator: labeled loop `{l}` is not in scope"
  optionT baseMonadInfo ``ContinueT ``Continue.runK getCont m

private def mkInstMonad (mi : MonadInfo) : TermElabM Expr := do
  Term.mkInstMVar (mkApp (mkConst ``Monad [mi.u, mi.v]) mi.m)

private def synthUsingDefEq (msg : String) (expected : Expr) (actual : Expr) : DoElabM Unit := do
  unless ← isDefEq expected actual do
    throwError "Failed to synthesize {msg}. {expected} is not definitionally equal to {actual}."

/--
The layer of a jump in a `ControlStack`, together with what is needed to construct jump
expressions: the stack below the layer, and the composed result-type wrappers of the layers above,
which the jump's fresh result type must pass through.
-/
structure ControlStack.JumpLayer where
  base : ControlStack
  stMAbove : Expr → DoElabM Expr

/-- Builds a jump expression for an `OptionT`-encoded layer (`BreakT.break`/`ContinueT.continue`). -/
def ControlStack.JumpLayer.mkOptionJump (jp : JumpLayer) (jumpFn : Name) : DoElabM Expr := do
  let mi := { (← read).monadInfo with m := (← jp.base.m) }
  let inst ← mkInstMonad mi
  let α ← jp.stMAbove (← mkFreshResultType `α)
  let mγ ← mkMonadApp (← read).doBlockResultType
  let res ← jp.base.runInBase <| mkApp3 (mkConst jumpFn [mi.u, mi.v]) α mi.m inst
  let ty ← inferType res
  -- Now instantiate `α`
  synthUsingDefEq "lifted jump result type" mγ ty
  return res

/-- Builds a jump expression for an `EarlyReturnT` layer. -/
def ControlStack.JumpLayer.mkReturn (jp : JumpLayer) (r : Expr) : DoElabM Expr := do
  let mi := { (← read).monadInfo with m := (← jp.base.m) }
  let instMonad ← mkInstMonad mi
  let ρ ← inferType r
  let δ ← jp.stMAbove (← mkFreshResultType `δ)
  let mγ ← mkMonadApp (← read).doBlockResultType
  let res ← jp.base.runInBase <| mkApp5 (mkConst ``EarlyReturnT.return [mi.u, mi.v]) ρ mi.m δ instMonad r
  let ty ← inferType res
  -- Now instantiate `δ`
  synthUsingDefEq "early return result type" mγ ty
  return res

def ControlStack.mkPure (base : ControlStack) (resultName : Name) : DoElabM Expr := do
  let mi := { (← read).monadInfo with m := (← base.m) }
  let instMonad ← mkInstMonad mi
  let instPure := instMonad |> mkApp2 (mkConst ``Monad.toApplicative [mi.u, mi.v]) mi.m
                            |> mkApp2 (mkConst ``Applicative.toPure [mi.u, mi.v]) mi.m
  let r ← getFVarFromUserName resultName
  base.runInBase <| mkApp4 (mkConst ``Pure.pure [mi.u, mi.v]) mi.m instPure (← inferType r) r

structure ControlLifter where
  origCont : DoElemCont
  returnJump? : Option ControlStack.JumpLayer
  breakJump? : Option ControlStack.JumpLayer
  continueJump? : Option ControlStack.JumpLayer
  labeledReturnJumps : List (Name × Expr × ControlStack.JumpLayer)
  labeledBreakJumps : List (Name × ControlStack.JumpLayer)
  labeledContinueJumps : List (Name × ControlStack.JumpLayer)
  pureBase : ControlStack
  pureDeadCode : CodeLiveness
  liftedDoBlockResultType : Expr

-- abbrev M := List
-- #reduce (types := true) M (Except Nat (Option (Option Bool) × String))
-- #reduce (types := true) OptionT (OptionT (StateT String (ExceptT Nat M))) Bool

private inductive LiftedJump where
  | ret (l : Name) (resultType : Expr)
  | brk (l : Name)
  | cont (l : Name)

def ControlLifter.ofCont (info : ControlInfo) (dec : DoElemCont) : DoElabM ControlLifter := do
  let mi := (← read).monadInfo
  let reassignedMutVars := (← read).mutVars |>.filter (info.reassigns.contains ·.getId)
  let reassignedMutVarNames := reassignedMutVars.map (·.getId)
  let σ ← mkProdN (← reassignedMutVarNames.mapM (LocalDecl.type <$> getLocalDeclFromUserName ·)) mi.u

  -- Build the transformer stack bottom-up: default return, labeled returns, state, default
  -- break/continue, labeled breaks/continues. For each jump, record the stack below its layer
  -- and the position of the layers above it (`Name.anonymous` keys the unlabeled jumps). Jumps to
  -- unknown or kind-mismatched labels get no layer; they are reported when the jump is elaborated.
  let mut pending : Array (LiftedJump × ControlStack × Nat) := #[]
  let mut top := ControlStack.base mi
  let mut locals : Array (Expr → DoElabM Expr) := #[]
  if info.returns.contains Name.anonymous then
    let ρ := (← getReturnCont).resultType
    pending := pending.push (.ret Name.anonymous ρ, top, locals.size + 1)
    top := ControlStack.earlyReturnT mi ρ top
    locals := locals.push top.localStM
  unless reassignedMutVars.isEmpty do
    top := ControlStack.stateT mi reassignedMutVars σ top
    locals := locals.push top.localStM
  -- Labeled returns sit above the state layer: the jump resumes after the labeled block with the
  -- mut vars alive, so it must capture the state tuple at the jump site, like `break`/`continue`.
  for (l, _) in info.returns.toList do
    unless l == Name.anonymous do
      if let some (.block returnCont) ← getLabeledTarget? l then
        pending := pending.push (.ret l returnCont.resultType, top, locals.size + 1)
        top := ControlStack.labeledReturnT mi l returnCont.resultType top
        locals := locals.push top.localStM
  if info.breaks.contains Name.anonymous && (← getBreakCont).isSome then
    pending := pending.push (.brk Name.anonymous, top, locals.size + 1)
    top := ControlStack.breakT mi top
    locals := locals.push top.localStM
  if info.continues.contains Name.anonymous && (← getContinueCont).isSome then
    pending := pending.push (.cont Name.anonymous, top, locals.size + 1)
    top := ControlStack.continueT mi top
    locals := locals.push top.localStM
  for l in info.breaks.toList do
    unless l == Name.anonymous do
      if let some (.loop ..) ← getLabeledTarget? l then
        pending := pending.push (.brk l, top, locals.size + 1)
        top := ControlStack.labeledBreakT mi l top
        locals := locals.push top.localStM
  for l in info.continues.toList do
    unless l == Name.anonymous do
      if let some (.loop ..) ← getLabeledTarget? l then
        pending := pending.push (.cont l, top, locals.size + 1)
        top := ControlStack.labeledContinueT mi l top
        locals := locals.push top.localStM

  -- The composed wrappers of the layers above the one at `aboveFrom - 1`, innermost-first from
  -- the topmost layer down.
  let allLocals := locals
  let mkLayer (base : ControlStack) (aboveFrom : Nat) : ControlStack.JumpLayer := {
    base
    stMAbove := fun α => do
      let mut a := α
      for f in (allLocals.toList.drop aboveFrom).reverse do
        a ← f a
      return a
  }
  let mut returnJump? := none
  let mut breakJump? := none
  let mut continueJump? := none
  let mut labeledReturnJumps := []
  let mut labeledBreakJumps := []
  let mut labeledContinueJumps := []
  for (jump, base, aboveFrom) in pending do
    let layer := mkLayer base aboveFrom
    match jump with
    | .ret l ρ =>
      if l == Name.anonymous then returnJump? := some layer
      else labeledReturnJumps := (l, ρ, layer) :: labeledReturnJumps
    | .brk l =>
      if l == Name.anonymous then breakJump? := some layer
      else labeledBreakJumps := (l, layer) :: labeledBreakJumps
    | .cont l =>
      if l == Name.anonymous then continueJump? := some layer
      else labeledContinueJumps := (l, layer) :: labeledContinueJumps
  return {
    origCont := dec,
    returnJump?, breakJump?, continueJump?,
    labeledReturnJumps, labeledBreakJumps, labeledContinueJumps,
    pureBase := top,
    -- The success continuation `origCont` is dead code iff the `ControlInfo` says so semantically.
    pureDeadCode := if info.noFallthrough then .deadSemantically else .alive,
    liftedDoBlockResultType := (← top.stM dec.resultType),
  }

/--
This function is like `MonadControl.liftWith fun runInBase => elabElem (runInBase pure)`.
All continuations should be thought of as wrapped in `runInBase`, so that their effects are embedded
in the terminal `stM m (t m)` result type. This wrapping will be realized by
`ControlStack.synthesizeConts`, after we know what the transformer stack `t` looks like.
What `t` looks like depends on whether reassignments, early `return`, `break` and `continue` are
used, considering *all* the use sites of `ControlLifter.lift`.
-/
def ControlLifter.lift (l : ControlLifter) (elabElem : DoElemCont → DoElabM Expr) : DoElabM Expr := do
  let old := (← read).contInfo.toContInfo
  let breakCont :=
    match l.breakJump? with
    | some jp => some <| jp.mkOptionJump ``BreakT.break
    | none => old.breakCont
  let continueCont :=
    match l.continueJump? with
    | some jp => some <| jp.mkOptionJump ``ContinueT.continue
    | none => old.continueCont
  let returnCont :=
    match l.returnJump? with
    | some jp => { old.returnCont with k := jp.mkReturn }
    | none => old.returnCont
  -- Labeled targets with a layer get lifted jumps. Control-flow analysis accounts for every jump
  -- in the lifted element, so the remaining targets cannot be jumped to from inside; they turn
  -- into internal errors while keeping their kind for diagnostics.
  let unusedJump : DoElabM Expr :=
    throwError "Internal error in the `do` elaborator: jump to a label that was not lifted"
  let mut labeled : NameMap LabeledTarget := {}
  for (n, target) in old.labeled do
    labeled := labeled.insert n <| match target with
      | .block returnCont => .block { returnCont with k := fun _ => unusedJump }
      | .loop .. => .loop unusedJump unusedJump
  for (n, ρ, jp) in l.labeledReturnJumps do
    labeled := labeled.insert n (.block { resultType := ρ, k := jp.mkReturn })
  let mut loopJumps : NameMap (Option (DoElabM Expr) × Option (DoElabM Expr)) := {}
  for (n, jp) in l.labeledBreakJumps do
    let (_, c?) := loopJumps.getD n (none, none)
    loopJumps := loopJumps.insert n (some (jp.mkOptionJump ``BreakT.break), c?)
  for (n, jp) in l.labeledContinueJumps do
    let (b?, _) := loopJumps.getD n (none, none)
    loopJumps := loopJumps.insert n (b?, some (jp.mkOptionJump ``ContinueT.continue))
  for (n, b?, c?) in loopJumps.toList do
    labeled := labeled.insert n (.loop (b?.getD unusedJump) (c?.getD unusedJump))
  let contInfo := ContInfo.toContInfoRef { breakCont, continueCont, returnCont, labeled }
  let pureCont := { l.origCont with k := l.pureBase.mkPure l.origCont.resultName, kind := .duplicable }
  withReader (fun ctx => { ctx with contInfo, doBlockResultType := l.liftedDoBlockResultType }) do
    elabElem pureCont

def ControlLifter.restoreCont (l : ControlLifter) : DoElabM DoElemCont := do
  l.pureBase.restoreCont { l.origCont with k := withDeadCode l.pureDeadCode l.origCont.k }
