module

meta import Module.Basic
meta import Module.PrivateImported

/-! Basic phase restriction tests. -/
/--
error: Invalid definition `nonMeta`, may not access declaration `f` imported as `meta`; consider adding `import Module.Basic`
-/
#guard_msgs in
def nonMeta := f

/--
error: Invalid public `meta` definition `pubMetaImp`, `pubMeta` is not accessible here; consider adding `public import Module.Basic`
-/
#guard_msgs in
public meta def pubMetaImp := pubMeta

/-! `Module.PrivateImported`'s initializer calls a function from its *private* dependency
`Module.MetaPrivCallee`, whose `.olean` is not loaded here (reached only IR-only, through this meta
import). The interpreter must still resolve it, via `const2ModIdx` populated from the loaded
`declMapExt`. -/

/-- info: 105 -/
#guard_msgs in
#eval nInitVal
