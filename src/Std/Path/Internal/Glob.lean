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
# Path.Glob

Internal glob pattern representation and matching for `Path.matchGlob`.
-/

namespace Std.Path.Internal

/--
A single token inside a glob segment pattern.
-/
inductive GlobPart where
  | lit (c : Char)
  | star
  | question
  | charClass (negated : Bool) (elems : Array (Char ⊕ Char × Char))
deriving Inhabited

/--
A single segment of a compiled glob pattern.
-/
inductive GlobSegment where
  | doublestar
  | pattern (parts : Array GlobPart)
deriving Inhabited

/--
A compiled glob pattern: a sequence of segments separated by `/`.
-/
abbrev Glob := Array GlobSegment

open Std Internal Parsec String

/--
Parse the body of a `[...]` character class, after the opening `[`.
-/
private partial def globClassBody : Parser (Array (Char ⊕ Char × Char)) := do
  if ← flag (pchar ']') then return #[]
  let c ← satisfy (· != ']')
  let elem ← attempt (do
      let _ ← pchar '-'
      let d ← satisfy (· != ']')
      return Sum.inr (c, d))
    <|> pure (Sum.inl c)
  return #[elem] ++ (← globClassBody)

/-- Parse one `GlobPart` token within a single path segment (stops at `/`). -/
private def globPart : Parser GlobPart :=
  attempt do
    let c ← satisfy (· != '/')
    match c with
    | '*' => return .star
    | '?' => return .question
    | '[' =>
      let negated ← flag (pchar '!')
      return .charClass negated (← globClassBody)
    | c => return .lit c

/-- Parse one glob segment: `**` (doublestar) or a sequence of `GlobPart`s. -/
private def globSegment : Parser GlobSegment :=
  attempt (pstring "**" *> notFollowedBy (satisfy (· != '/')) *> pure .doublestar) <|>
  (.pattern <$> many (attempt globPart))

/-- Parse a full glob pattern into a `Glob`. -/
private def globPatternParser : Parser Glob := do
  if ← isEof then return #[]
  sepBy1 (pchar '/') globSegment

/--
Parse `pattern` into a `Glob`, or `none` if it is syntactically invalid (e.g. an unterminated
`[...]` character class).
-/
def parseGlob (pattern : String) : Option Glob :=
  match Parser.run globPatternParser pattern with
  | .ok g => some g
  | .error _ => none

private partial def starThenParser (p : Parser Unit) : Parser Unit :=
  attempt p <|> (any *> starThenParser p)

private def globPartToParser (part : GlobPart) (cont : Parser Unit) : Parser Unit :=
  match part with
  | .lit c => pchar c *> cont
  | .question => any *> cont
  | .star => starThenParser cont
  | .charClass neg elems =>
    attempt (do
      let c ← any
      let m := elems.any fun | .inl c' => c == c' | .inr (lo, hi) => lo ≤ c && c ≤ hi
      unless (if neg then !m else m) do fail "no match")
    *> cont

private def matchParts (parts : Array GlobPart) (s : String) : Bool :=
  match Parser.run (parts.foldr globPartToParser eof) s with
  | .ok _ => true
  | .error _ => false

partial def matchSegments (glob : Glob) (comps : Array String) (gi ci : Nat) : Bool :=
  if h : gi >= glob.size then ci >= comps.size
  else match glob[gi]'(Nat.lt_of_not_le h) with
  | .doublestar =>
    let rec tryFrom (ci' : Nat) : Bool :=
      matchSegments glob comps (gi + 1) ci' ||
      (ci' < comps.size && tryFrom (ci' + 1))
    tryFrom ci
  | .pattern parts =>
    ci < comps.size &&
    matchParts parts comps[ci]! &&
    matchSegments glob comps (gi + 1) (ci + 1)

end Std.Path.Internal
