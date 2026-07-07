/-!
Tests that `forward_type_reference%` reports a clear error when one of the names it would generate is
already declared, whether the clash predates the reference or appears before the target's definition.
-/

def A.FwdRef := Nat
abbrev AM := ReaderT (forward_type_reference% A) (StateM Nat)

def B.toFwdRef := Nat
abbrev BM := ReaderT (forward_type_reference% B) (StateM Nat)

abbrev CM := ReaderT (forward_type_reference% C) (StateM Nat)
def C.toFwdRef := Nat
structure C where c : Nat deriving Nonempty
