module

/-! A public function called only from `Module.PrivateImported`'s initializer, which imports this
module *privately*. When `Module.PrivateImported` is meta-imported (`Module.MetaImported`), this
module's `.olean` is not loaded, exercising the per-`.ir` side table / `const2ModIdx` routing.
`@[noinline]` keeps the call in the initializer's IR instead of folding it away. -/

@[noinline] public def metaPrivCallee : Nat := 105
