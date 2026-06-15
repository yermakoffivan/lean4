/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sofia Rodrigues
-/
import Std.Http.Protocol.H1

open Std.Http
open Std.Http.Protocol.H1

/-!
# Redirect planning tests

Exercises the pure redirect-decision logic in `Std.Http.Protocol.H1.decideRedirect`
(PR #13901). Each `#guard` asserts an observable outcome of `decideRedirect` against
the RFC 9110 §15.4 / RFC 9112 §3.2 rules: when a redirect is followed vs. terminal,
how the method is chosen, how the target is rewritten, and how headers are scrubbed.
-/

/-- Base origin all tests redirect away from: `http://example.com/a/b` (port 80). -/
private def base : URI := URI.parse! "http://example.com/a/b"

private def origin : URI.Origin :=
  { scheme := base.scheme, host := base.host?.get!, port := base.port }

private def mkReq (method : Method) (headers : Headers := .empty) (version : Version := .v11) :
    Request.Head :=
  { method, version, uri := base.originTarget, headers }

private def withLocation (loc : String) : Headers :=
  Headers.empty.insert .location (Header.Value.ofString! loc)

private def credHeaders : Headers :=
  Headers.empty
    |>.insert .host (Header.Value.ofString! "example.com")
    |>.insert .authorization (Header.Value.ofString! "Bearer secret")
    |>.insert .cookie (Header.Value.ofString! "sid=abc")

private def contentHeaders : Headers :=
  Headers.empty
    |>.insert .contentType (Header.Value.ofString! "text/plain")
    |>.insert .contentLength (Header.Value.ofString! "3")

private def isDone : RedirectOutcome → Bool
  | .done => true
  | .follow _ => false

private def plan? : RedirectOutcome → Option RedirectPlan
  | .follow p => some p
  | .done => none

private def isEmptyBody : RedirectBodyAction → Bool
  | .empty => true
  | .replay => false

private def isReplayBody : RedirectBodyAction → Bool
  | .replay => true
  | .empty => false

/-! ## Terminal responses (`.done`) -/

-- A non-3xx status is never a redirect.
#guard isDone (decideRedirect origin (mkReq .get) false false .v11 .ok (withLocation "/x"))

-- A 3xx status with no `Location` header cannot be followed.
#guard isDone (decideRedirect origin (mkReq .get) false false .v11 .found Headers.empty)

-- SSRF guard: a `Location` resolving to a non-http(s) scheme is rejected.
#guard isDone (decideRedirect origin (mkReq .get) false false .v11 .found (withLocation "file:///etc/passwd"))

-- 305 Use Proxy / 306 Unused / 304 Not Modified / 300 Multiple Choices are terminal.
#guard isDone (decideRedirect origin (mkReq .get) false false .v11 .useProxy (withLocation "/x"))
#guard isDone (decideRedirect origin (mkReq .get) false false .v11 .unused (withLocation "/x"))
#guard isDone (decideRedirect origin (mkReq .get) false false .v11 .notModified (withLocation "/x"))
#guard isDone (decideRedirect origin (mkReq .get) false false .v11 .multipleChoices (withLocation "/x"))

-- `onlySafeRedirects` blocks redirects of unsafe methods.
#guard isDone (decideRedirect origin (mkReq .post) false true .v11 .found (withLocation "/x"))

-- 301/302 only auto-follow GET/HEAD/POST; other unsafe methods are terminal.
#guard isDone (decideRedirect origin (mkReq .put) false false .v11 .movedPermanently (withLocation "/x"))

-- 307/308 preserve the method, so a non-GET/HEAD request with a non-replayable body is terminal.
#guard isDone (decideRedirect origin (mkReq .post) false false .v11 .temporaryRedirect (withLocation "/x"))

-- HTTP/1.0 only defines 301/302; HTTP/1.1-only codes (e.g. 303) must not auto-follow.
#guard isDone (decideRedirect origin (mkReq .get) false false .v10 .seeOther (withLocation "/x"))

/-! ## Followed redirects: method selection -/

-- Same-origin 302 on GET: method preserved, target rewritten to origin-form, empty body.
#guard match plan? (decideRedirect origin (mkReq .get) false false .v11 .found (withLocation "/next")) with
  | some p => p.method == .get && !p.isCrossOrigin && toString p.target == "/next" && isEmptyBody p.bodyAction
  | none => false

-- HTTP/1.0 302 on GET is followed.
#guard match plan? (decideRedirect origin (mkReq .get) false false .v10 .found (withLocation "/x")) with
  | some _ => true
  | none => false

-- 303 See Other downgrades to GET with an empty body.
#guard match plan? (decideRedirect origin (mkReq .post) false false .v11 .seeOther (withLocation "/next")) with
  | some p => p.method == .get && isEmptyBody p.bodyAction
  | none => false

-- 301/302 on POST downgrade to GET under HTTP/1.1.
#guard match plan? (decideRedirect origin (mkReq .post) false false .v11 .movedPermanently (withLocation "/x")) with
  | some p => p.method == .get
  | none => false

-- HTTP/1.0 301 preserves POST (with a replayable body so it is followed).
#guard match plan? (decideRedirect origin (mkReq .post (version := .v10)) true false .v10 .movedPermanently (withLocation "/x")) with
  | some p => p.method == .post && isReplayBody p.bodyAction
  | none => false

-- 307 preserves POST and replays the body when replayable.
#guard match plan? (decideRedirect origin (mkReq .post) true false .v11 .temporaryRedirect (withLocation "/x")) with
  | some p => p.method == .post && isReplayBody p.bodyAction
  | none => false

-- 307 on GET is followed with the method preserved.
#guard match plan? (decideRedirect origin (mkReq .get) false false .v11 .temporaryRedirect (withLocation "/x")) with
  | some p => p.method == .get
  | none => false

/-! ## Target rewriting -/

-- Absolute-path `Location` replaces the path.
#guard match plan? (decideRedirect origin (mkReq .get) false false .v11 .found (withLocation "/x")) with
  | some p => toString p.target == "/x"
  | none => false

-- Relative-path `Location` is merged against the base path (`/a/b` + `c` → `/a/c`).
#guard match plan? (decideRedirect origin (mkReq .get) false false .v11 .found (withLocation "c")) with
  | some p => toString p.target == "/a/c"
  | none => false

-- Cross-origin absolute `Location` keeps absolute-form on the wire.
#guard match plan? (decideRedirect origin (mkReq .get credHeaders) false false .v11 .found (withLocation "http://other.com/x")) with
  | some p => p.isCrossOrigin && toString p.target == "http://other.com/x"
  | none => false

/-! ## Header scrubbing -/

-- Cross-origin hop strips credential headers and rewrites Host to the new origin.
#guard match plan? (decideRedirect origin (mkReq .get credHeaders) false false .v11 .found (withLocation "http://other.com/x")) with
  | some p =>
      !p.headers.contains .authorization
        && !p.headers.contains .cookie
        && (p.headers.get? .host).map (·.value) == some "other.com"
  | none => false

-- Same-origin hop keeps credential headers.
#guard match plan? (decideRedirect origin (mkReq .get credHeaders) false false .v11 .found (withLocation "/next")) with
  | some p => p.headers.contains .authorization && p.headers.contains .cookie && !p.isCrossOrigin
  | none => false

-- Changing the method to GET strips resource-specific content headers.
#guard match plan? (decideRedirect origin (mkReq .post contentHeaders) false false .v11 .seeOther (withLocation "/next")) with
  | some p => p.method == .get && !p.headers.contains .contentType && !p.headers.contains .contentLength
  | none => false
