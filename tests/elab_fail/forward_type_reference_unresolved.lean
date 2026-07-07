/-!
Tests that a `forward_type_reference%` whose target is never defined is reported at end of file.
-/
abbrev M := ReaderT (forward_type_reference% NeverDefined) (StateM Nat)
