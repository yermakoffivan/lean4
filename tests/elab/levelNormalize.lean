import Lean
/-!
# Tests of level normalization (`Level.normalize`)
-/

open Lean Elab Command Term

def norm_level [Monad m] [MonadLog m] [AddMessageContext m] [MonadOptions m] (u : Level) : m Unit := do
  let u' := u.normalize
  logInfo m!"`{u}` => `{u'}`"

elab "#norm_level " l:level : command => runTermElabM fun _ => do
    let u ← elabLevel l
    norm_level u

universe u v w

/-- info: `0` => `0` -/
#guard_msgs in #norm_level 0
/-- info: `max (u + 1) (v + 2)` => `max (u + 1) (v + 2)` -/
#guard_msgs in #norm_level max (u + 1) (v + 2)
/-- info: `(max u (v + 1)) + 1` => `max (u + 1) (v + 2)` -/
#guard_msgs in #norm_level (max u (v + 1)) + 1
/-- info: `(max u v) + 2` => `max (u + 2) (v + 2)` -/
#guard_msgs in #norm_level max 0 (max u v + 2)
/-- info: `(max u v) + 2` => `max (u + 2) (v + 2)` -/
#guard_msgs in #norm_level max 1 (max u v + 2)
/-- info: `(max u v) + 2` => `max (u + 2) (v + 2)` -/
#guard_msgs in #norm_level max 2 (max u v + 2)
/-- info: `max 3 ((max u v) + 2)` => `max 3 (u + 2) (v + 2)` -/
#guard_msgs in #norm_level max 3 (max u v + 2)

/-! Used to be `max (max u v) w` -/
/-- info: `max u v w` => `max u v w` -/
#guard_msgs in #norm_level max u v w
/-- info: `max (max u v) w` => `max u v w` -/
#guard_msgs in #norm_level max (max u v) w

/-! Used to be `(max u v) + 1` -/
/-- info: `(imax (max u v) (max v u)) + 1` => `max (u + 1) (v + 1)` -/
#guard_msgs in #norm_level (imax (max u v) (max v u)) + 1

/-! Used to be `(max u (v + 1)) + 3` -/
/-- info: `(imax u (v + 1)) + 3` => `max (u + 3) (v + 4)` -/
#guard_msgs in #eval do
  let u := Level.addOffset (Level.imax (Level.param `u) (Level.succ (Level.param `v))) 3
  norm_level u
