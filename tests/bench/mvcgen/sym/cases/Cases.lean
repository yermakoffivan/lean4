import Cases.AddSubCancel
import Cases.AddSubCancelDeep
import Cases.AddSubCancelSimp
import Cases.DiteSplit
import Cases.GetThrowSet
import Cases.LetBinding
import Cases.MatchIota
import Cases.MatchSplit
import Cases.PurePrecond
import Cases.ReaderState
/-!
# Loom VCGen Case Suite

Loom ports of the `Sym/Cases` test cases. Each case lives in its own file under
`Loom/Test/Cases/` and defines `step`/`loop`/`Goal` plus the relevant `@[spec]` theorems,
together with a `runTests` driver. This module aggregates them and runs each at a small size
(`n = 10`) to verify VC generation works end-to-end.

- `AddSubCancel`: basic add/sub loop in `StateM`
- `AddSubCancelDeep`: same loop through a deep monad transformer stack (leaf specs axiomatized)
- `AddSubCancelSimp`: like `AddSubCancel` but using equality (`simp`) specs
- `DiteSplit`: dependent if-then-else (`if h : cond then ...`)
- `GetThrowSet`: exception handling with `ExceptT`/`StateM` (never throws)
- `LetBinding`: pure `let` binding producing a `letE` node in the program
- `MatchIota`: pattern match on a concrete discriminant (iota-reduced, throws)
- `MatchSplit`: pattern match on the symbolic state (genuine match split)
- `PurePrecond`: pure propositional hypotheses in preconditions
- `ReaderState`: `ReaderT`/`StateM` combination
-/

set_option maxRecDepth 10000
set_option maxHeartbeats 10000000

#eval AddSubCancel.runTests [10]
#eval AddSubCancelDeep.runTests [10]
#eval AddSubCancelSimp.runTests [10]
#eval DiteSplit.runTests [10]
#eval GetThrowSet.runTests [10]
#eval LetBinding.runTests [10]
#eval MatchIota.runTests [10]
#eval MatchSplit.runTests [10]
#eval PurePrecond.runTests [10]
#eval ReaderState.runTests [10]
