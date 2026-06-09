/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
module

prelude
public import Std.Path.Basic
public import Std.Internal.Parsec.String

public section

/-!
# Path.Parser

POSIX and Windows path parsers for `Std.Path`.
-/

namespace Std.Path.Internal

open Std.Internal.Parsec Std.Internal.Parsec.String

private def classifySegment (s : String) : Path.Component :=
  if s == ".." then .parent
  else if s == "." then .current
  else .normal s

private def isWinSep (c : Char) : Bool :=
  c == '\\' || c == '/'

private def isDriveLetter (c : Char) : Bool :=
  ('A' ≤ c && c ≤ 'Z') || ('a' ≤ c && c ≤ 'z')

private def parseDrive : Parser (Option String) :=
  attempt (do
    let c ← satisfy isDriveLetter
    discard <| pchar ':'
    return some (String.singleton c ++ ":")) <|> pure none

private def posixSeg : Parser Path.Component :=
  many1Chars (satisfy (· != '/')) <&> classifySegment

private def winSeg : Parser Path.Component :=
  many1Chars (satisfy (fun c => !isWinSep c)) <&> classifySegment

def posixPathParser : Parser (Array Path.Component) := do
  let hasRoot ← flag (pchar '/')
  discard <| manyChars (attempt (pchar '/'))
  let init : Array Path.Component := if hasRoot then #[.root "/"] else #[]
  let first? ← optional posixSeg
  match first? with
  | none => return init
  | some first =>
    let rest ← many (attempt (many1Chars (pchar '/') *> posixSeg))
    discard <| manyChars (pchar '/')
    return init ++ #[first] ++ rest

def windowsPathParser : Parser (Array Path.Component) := do
  let drive ← parseDrive
  let init := drive.elim #[] (#[.drivePrefix ·])
  let hasRoot ← flag (satisfy isWinSep)
  let init := if hasRoot then init.push (.root "\\") else init
  return init ++ (← sepBy (many1Chars (satisfy isWinSep)) winSeg)

end Std.Path.Internal
