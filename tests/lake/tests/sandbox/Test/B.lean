-- A module with an innocuous-looking diff. It does NOT import `Test.A`, but its
-- elaboration tries to overwrite `Test.A`'s `.olean` on disk. Without the
-- sandbox this succeeds (the cache-poisoning attack); under `--sandbox` the
-- write is denied by Landlock and is caught here.
def Test.B.value : Nat := 2

#eval show IO Unit from do
  let target : System.FilePath := ".lake/build/lib/lean/Test/A.olean"
  try
    IO.FS.writeFile target "POISONED-BY-B"
    IO.eprintln "B: overwrote Test/A.olean"
  catch e =>
    IO.eprintln s!"B: write to Test/A.olean was blocked: {e}"
