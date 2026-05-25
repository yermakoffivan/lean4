import Lake
open Lake DSL

package loom where
  precompileModules := true

@[test_driver]
lean_lib Loom where
  globs := #[`Loom.+]
  moreLeanArgs := #["--tstack=102400"]
