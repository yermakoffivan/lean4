import Std.Http
import Std.Http.Protocol.H1

open Std.Http
open Std.Http.Protocol.H1
open Std.Http.URIReference

private instance : BEq RedirectOutcome where
  beq
    | .done, .done => true
    | .follow _, .follow _ => true
    | _, _ => false

def mkOrigin (scheme host : String) (port : UInt16) : URI.Origin :=
  let uri := URI.parse! s!"{scheme}://{host}:{port}/"

  { scheme := uri.scheme
    host := match uri.authority with | some auth => auth.host | none => default
    port := port }

def makeHeaders (kvs : List (Header.Name × String)) : Headers :=
  kvs.foldl (fun h (k, v) => h.insert k (Header.Value.ofString! v)) .empty

def locationHeader (url : String) : Headers :=
  makeHeaders [(.location, url)]

def makeRequest (method : Method) (extraHeaders : List (Header.Name × String) := []) : Request.Head where
  method := method
  version := .v11
  uri := RequestTarget.parse! "/"
  headers := makeHeaders extraHeaders

def current : URI.Origin := mkOrigin "http" "example.com" 80

def redirect'
    (status : Status)
    (location : String)
    (method : Method := .get)
    (version : Version := .v11)
    (replayable : Bool := false)
    (onlySafe : Bool := false)
    (org : URI.Origin := current)
    (reqHeaders : List (Header.Name × String) := []) : RedirectOutcome :=

  decideRedirect org (makeRequest method reqHeaders) replayable onlySafe
    version status (locationHeader location)

def isFollow : RedirectOutcome → Bool
  | .follow _ => true
  | .done => false

def getPlan : RedirectOutcome → Option RedirectPlan
  | .follow p => some p
  | .done => none

def planMethod : RedirectOutcome → Option Method
  | .follow p => some p.method
  | .done => none

def planBodyAction : RedirectOutcome → Option RedirectBodyAction
  | .follow p => some p.bodyAction
  | .done => none

def planIsCrossOrigin : RedirectOutcome → Option Bool
  | .follow p => some p.isCrossOrigin
  | .done => none

-- Tests

-- §15.4: Non-3xx responses are not redirects
#guard redirect' .ok "http://other.com/" == .done
#guard redirect' .created "http://other.com/" == .done
#guard redirect' .noContent "http://other.com/" == .done
#guard redirect' .badRequest "http://other.com/" == .done
#guard redirect' .notFound "http://other.com/" == .done
#guard redirect' .internalServerError "http://other.com/" == .done

-- §15.4: Missing Location header → .done
#guard decideRedirect current (makeRequest .get) false false .v11 .movedPermanently .empty == .done

-- §15.4: Unparseable Location → .done
#guard redirect' .movedPermanently "not a valid uri >:T" == .done

-- Absolute-path relative ref → same-origin, origin-form target
#guard
  match getPlan (redirect' .movedPermanently "/new/path") with
  | some plan =>
    !plan.isCrossOrigin &&
    match plan.target with
    | .originForm p _ => toString p == "/new/path"
    | _ => false
  | none => false

-- Relative ref with query → origin-form with query preserved
#guard
  match getPlan (redirect' .movedPermanently "/search?q=lean") with
  | some plan =>
    match plan.target with
    | .originForm _ (some q) => !q.isEmpty
    | _ => false
  | none => false

-- Relative ref without leading slash (path-noscheme) → same-origin follow
#guard redirect' .movedPermanently "other-page" |> isFollow

-- Query-only relative ref → same-origin follow
#guard redirect' .movedPermanently "?updated=1" |> isFollow

-- Empty relative ref → same-origin follow (RFC 3986 §4.1 allows empty reference)
#guard redirect' .movedPermanently "" |> isFollow

-- §15.4.6 / security: non-http(s) absolute URIs in Location are blocked (SSRF guard).
-- Note: strings that look like non-http schemes but lack "://" parse as relative references
-- under RFC 3986 §4.1 and resolve to the current (http/https) origin — they are not SSRF risks.
#guard redirect' .movedPermanently "ftp://files.example.com/"  == .done
#guard redirect' .movedPermanently "custom://loop/cinema"      == .done
-- "file:///etc/passwd" parses as a relative-ref (path-noscheme: first segment "file:"),
-- so resolveOrigin returns current (http://example.com) — not an SSRF path.
#guard redirect' .movedPermanently "file:///etc/passwd" |> isFollow
-- "javascript:alert(1)" parses as an absolute URI (scheme "javascript") → blocked by SSRF guard
#guard redirect' .movedPermanently "javascript:alert(1)" == .done

-- §15.4.6 (305 Use Proxy) — MUST NOT follow (deprecated, security risk)
#guard redirect' .useProxy "http://proxy.example.com/" == .done

-- §15.4.5 (304 Not Modified) — cache revalidation, not a navigation redirect
#guard redirect' .notModified "http://example.com/new" == .done

-- §15.4 (300 Multiple Choices) — no automatic selection
#guard redirect' .multipleChoices "http://example.com/a" == .done

-- §15.4.2 (301 Moved Permanently)
#guard redirect' .movedPermanently "http://example.com/new" |> isFollow

-- 301 GET → GET (safe method preserved)
#guard planMethod (redirect' .movedPermanently "http://example.com/new") == some .get

-- 301 HEAD → HEAD
#guard planMethod (redirect' .movedPermanently "http://example.com/new" (method := .head)) == some .head

-- RFC 9110 §15.4.2: prevailing practice — POST downgraded to GET on HTTP/1.1
#guard planMethod (redirect' .movedPermanently "http://example.com/new" (method := .post)) == some .get

-- 301 POST on HTTP/1.0 response — chooseMethod preserves POST, but the post-method-resolve
-- guard (for method-preserving redirects with non-replayable bodies) returns .done
-- unless bodyReplayable=true.  Pass replayable=true to allow the hop.
#guard planMethod (redirect' .movedPermanently "http://example.com/new" (method := .post) (version := .v10) (replayable := true)) == some .post

-- 301 PUT — unsafe non-POST, MUST NOT follow (RFC 9110 §15.4.2)
#guard redirect' .movedPermanently "http://example.com/new" (method := .put) == .done

-- 301 DELETE — unsafe non-POST, MUST NOT follow
#guard redirect' .movedPermanently "http://example.com/new" (method := .delete) == .done

-- §15.4.3 (302 Found)
#guard redirect' .found "http://example.com/new" |> isFollow

-- 302 POST → GET (prevailing practice on HTTP/1.1)
#guard planMethod (redirect' .found "http://example.com/new" (method := .post)) == some .get

-- 302 POST on HTTP/1.0 — chooseMethod preserves POST; body must be replayable to follow
#guard planMethod (redirect' .found "http://example.com/new" (method := .post) (version := .v10) (replayable := true)) == some .post

-- 302 PUT — MUST NOT follow
#guard redirect' .found "http://example.com/new" (method := .put) == .done

-- §15.4.4 (303 See Other) — MUST use GET regardless of original method
#guard planMethod (redirect' .seeOther "http://example.com/result" (method := .post))   == some .get
#guard planMethod (redirect' .seeOther "http://example.com/result" (method := .put))    == some .get
#guard planMethod (redirect' .seeOther "http://example.com/result" (method := .get))    == some .get
#guard planMethod (redirect' .seeOther "http://example.com/result" (method := .delete)) == some .get

-- 303 with onlySafeRedirects=true and POST: the guard checks the original method (POST is unsafe)
-- before the 303→GET rewrite happens, so it returns .done.
#guard redirect' .seeOther "http://example.com/result" (method := .post) (onlySafe := true) == .done

-- §15.4.8 (307 Temporary Redirect) — MUST NOT change method; replay if replayable

-- 307 GET → GET, replayable=false: safe method, follows
#guard planMethod (redirect' .temporaryRedirect "http://example.com/new") == some .get

-- 307 POST replayable → follow, bodyAction = .replay
#guard planBodyAction (redirect' .temporaryRedirect "http://example.com/new" (method := .post) (replayable := true)) == some .replay

-- 307 POST non-replayable → MUST NOT follow (RFC 9110 §15.4.8)
#guard redirect' .temporaryRedirect "http://example.com/new" (method := .post) (replayable := false) == .done

-- 307 PUT replayable → follow (method preserved)
#guard planMethod (redirect' .temporaryRedirect "http://example.com/new" (method := .put) (replayable := true)) == some .put

-- §15.4.9 (308 Permanent Redirect) — same rules as 307
#guard redirect' .permanentRedirect "http://example.com/new" (method := .get) |> isFollow

-- 308 POST replayable → follow, bodyAction = .replay
#guard planBodyAction (redirect' .permanentRedirect "http://example.com/new" (method := .post) (replayable := true)) == some .replay

-- 308 POST non-replayable → MUST NOT follow
#guard redirect' .permanentRedirect "http://example.com/new" (method := .post) (replayable := false) == .done

-- HTTP/1.0 responses: only 301 and 302 are defined (RFC 2616 §10.3)
#guard redirect' .seeOther "http://example.com/" (version := .v10) == .done
#guard redirect' .temporaryRedirect "http://example.com/" (version := .v10) == .done
#guard redirect' .permanentRedirect "http://example.com/" (version := .v10) == .done

-- 301 and 302 remain valid on HTTP/1.0
#guard redirect' .movedPermanently "http://example.com/new" (version := .v10) |> isFollow
#guard redirect' .found "http://example.com/new" (version := .v10) |> isFollow

-- GET is safe — always follows
#guard redirect' .movedPermanently "http://example.com/" (onlySafe := true) |> isFollow

-- POST is unsafe — blocked when onlySafeRedirects=true
#guard redirect' .movedPermanently "http://example.com/" (method := .post) (onlySafe := true) == .done

-- HEAD is safe
#guard redirect' .found "http://example.com/" (method := .head) (onlySafe := true) |> isFollow

-- §15.4 / §4.2.4: Same-origin redirect — target collapses to origin-form

-- Same-origin absolute-form Location → collapses to origin-form (RFC 9112 §3.2.1)
#guard
  match getPlan (redirect' .movedPermanently "http://example.com/new?q=1") with
  | some plan => match plan.target with | .originForm _ _ => true | _ => false
  | none => false

-- §4.2.4: Userinfo in same-origin Location is stripped; result stays same-origin
#guard
  match getPlan (redirect' .movedPermanently "http://user:pass@example.com/path") with
  | some plan =>
    match plan.target with
    | .originForm _ _ => !plan.isCrossOrigin
    | _ => false
  | none => false

-- §15.4 / §4.2.4: Cross-origin redirect — target stays absolute-form, userinfo stripped

-- Different host → cross-origin, absolute-form target, no userinfo
#guard
  match getPlan (redirect' .movedPermanently "http://other.com/page") with
  | some plan =>
    plan.isCrossOrigin &&
    match plan.target with
    | .absoluteForm uri => uri.authority.all (·.userInfo.isNone)
    | _ => false
  | none => false

-- Userinfo in cross-origin Location stripped (§4.2.4)
#guard
  match getPlan (redirect' .movedPermanently "http://user:pw@other.com/page") with
  | some plan =>
    match plan.target with
    | .absoluteForm uri => uri.authority.all (·.userInfo.isNone)
    | _ => false
  | none => false

-- https upgrade from http is cross-origin (scheme change)
#guard
  match getPlan (redirect' .movedPermanently "https://example.com/secure") with
  | some plan => plan.isCrossOrigin && plan.origin.scheme.val == "https"
  | none => false

-- Different port is cross-origin
#guard planIsCrossOrigin (redirect' .movedPermanently "http://example.com:8080/path") == some true

-- §15.4: isCrossOrigin flag
#guard planIsCrossOrigin (redirect' .movedPermanently "http://example.com/same") == some false
#guard planIsCrossOrigin (redirect' .movedPermanently "http://other.com/diff")   == some true

-- §15.4: bodyAction is .empty when method changes to GET

-- 301 POST→GET: no body on the GET redirect
#guard planBodyAction (redirect' .movedPermanently "http://example.com/new" (method := .post)) == some .empty

-- 303 any→GET: no body
#guard planBodyAction (redirect' .seeOther "http://example.com/res" (method := .put)) == some .empty

-- 307 GET→GET: no body (GET carries no body)
#guard planBodyAction (redirect' .temporaryRedirect "http://example.com/new") == some .empty

-- Authorization must be stripped on cross-origin (credential header)
#guard
  match getPlan (redirect' .movedPermanently "http://other.com/"
      (reqHeaders := [(.authorization, "Bearer token123")])) with
  | some plan => !plan.headers.contains .authorization
  | none => false

-- Cookie must be stripped on cross-origin
#guard
  match getPlan (redirect' .movedPermanently "http://other.com/"
      (reqHeaders := [(.cookie, "session=abc")])) with
  | some plan => !plan.headers.contains .cookie
  | none => false

-- Proxy-Authorization must be stripped on cross-origin
#guard
  match getPlan (redirect' .movedPermanently "http://other.com/"
      (reqHeaders := [(.proxyAuthorization, "Basic xyz")])) with
  | some plan => !plan.headers.contains .proxyAuthorization
  | none => false

-- Transfer-Encoding must be stripped on cross-origin (connection-specific header)
#guard
  match getPlan (redirect' .movedPermanently "http://other.com/"
      (reqHeaders := [(.transferEncoding, "chunked")])) with
  | some plan => !plan.headers.contains .transferEncoding
  | none => false

-- Authorization is preserved on same-origin redirect
#guard
  match getPlan (redirect' .movedPermanently "http://example.com/new"
      (reqHeaders := [(.authorization, "Bearer token123")])) with
  | some plan => plan.headers.contains .authorization
  | none => false

-- Content-Type is stripped when method changes to GET
#guard
  match getPlan (redirect' .movedPermanently "http://example.com/new"
      (method := .post) (reqHeaders := [(.contentType, "application/json")])) with
  | some plan => !plan.headers.contains .contentType
  | none => false

-- Content-Length is stripped when method changes to GET
#guard
  match getPlan (redirect' .movedPermanently "http://example.com/new"
      (method := .post) (reqHeaders := [(.contentLength, "42")])) with
  | some plan => !plan.headers.contains .contentLength
  | none => false

-- Content-Type is preserved when method does NOT change (GET→GET via 307)
#guard
  match getPlan (redirect' .temporaryRedirect "http://example.com/new"
      (reqHeaders := [(.contentType, "text/plain")])) with
  | some plan => plan.headers.contains .contentType
  | none => false

-- Host updated to new origin on cross-origin (new value is appended last)
#guard
  match getPlan (redirect' .movedPermanently "http://other.com/"
      (reqHeaders := [(.host, "example.com")])) with
  | some plan =>
    match plan.headers.map.getLast? .host with
    | some v => v.value == "other.com"
    | none => false
  | none => false

-- Non-standard port appears in Host header value on cross-origin
#guard
  match getPlan (redirect' .movedPermanently "http://other.com:8080/path"
      (reqHeaders := [(.host, "example.com")])) with
  | some plan =>
    match plan.headers.map.getLast? .host with
    | some v => v.value == "other.com:8080"
    | none => false
  | none => false

-- Host preserved as-is on same-origin redirect (no rewrite occurs)
#guard
  match getPlan (redirect' .movedPermanently "http://example.com/new"
      (reqHeaders := [(.host, "example.com")])) with
  | some plan =>
    match plan.headers.get? .host with
    | some v => v.value == "example.com"
    | none => false
  | none => false

-- Explicit host:port
#guard
  match getPlan (redirect' .movedPermanently "http://api.example.com:8080/v2") with
  | some plan => plan.origin == mkOrigin "http" "api.example.com" 8080
  | none => false

-- https with default port 443
#guard
  match getPlan (redirect' .movedPermanently "https://secure.example.com/") with
  | some plan => plan.origin.port == 443 && plan.origin.scheme.val == "https"
  | none => false

-- http with default port 80
#guard
  match getPlan (redirect' .movedPermanently "http://api.example.com/") with
  | some plan => plan.origin.port == 80
  | none => false

def parseURIRef (s : String) : Option URIReference :=
  (URI.Parser.parseURIReference <* Std.Internal.Parsec.eof).run s.toUTF8 |>.toOption

-- Full absolute URIs (scheme present → .absolute)
#guard (parseURIRef "http://example.com/path?q=1#frag").isSome
#guard (parseURIRef "https://user:pw@host.com:443/p").isSome
#guard (parseURIRef "ftp://files.example.com/").isSome

#guard
  match parseURIRef "http://example.com" with
  | some (.absolute _) => true
  | _ => false

-- Absolute-path relative reference (/path → .relative, no authority, absolute path)
#guard
  match parseURIRef "/new/path?q=1" with
  | some (.relative r) => r.authority.isNone && r.path.absolute
  | _ => false

-- Protocol-relative reference (//host/path → .relative with authority)
#guard
  match parseURIRef "//other.com/page" with
  | some (.relative r) => r.authority.isSome
  | _ => false

-- Query-only relative reference
#guard
  match parseURIRef "?updated=1" with
  | some (.relative r) => r.path.isEmpty && !r.query.isEmpty
  | _ => false

-- Empty reference is valid per RFC 3986 §4.1
#guard (parseURIRef "").isSome

-- Relative path-noscheme (no leading slash, no scheme → .relative)
#guard
  match parseURIRef "../other" with
  | some (.relative r) => !r.path.absolute
  | _ => false

-- Fragment captured in relative reference
#guard
  match parseURIRef "/page#section" with
  | some (.relative r) => r.fragment == some "section"
  | _ => false

-- Relative reference with both query and fragment
#guard
  match parseURIRef "/search?q=lean#results" with
  | some (.relative r) => !r.query.isEmpty && r.fragment == some "results"
  | _ => false

-- Userinfo in absolute URI-reference is parsed
#guard
  match parseURIRef "http://user:pass@example.com/" with
  | some (.absolute uri) => uri.authority.any (·.userInfo.isSome)
  | _ => false

-- IPv6 host in absolute URI-reference
#guard
  match parseURIRef "http://[::1]:8080/path" with
  | some (.absolute uri) =>
    match uri.authority with
    | some auth => match auth.host with | .ipv6 _ => true | _ => false
    | none => false
  | _ => false

-- Percent-encoded path segment parses successfully
#guard (parseURIRef "http://example.com/caf%C3%A9").isSome

-- Invalid percent encoding is rejected
#guard (parseURIRef "http://example.com/%GG").isNone
#guard (parseURIRef "http://example.com/%2").isNone

-- Non-http/https schemes parse as URIReferences (scheme gate is in decideRedirect)
#guard (parseURIRef "ftp://files.example.com/pub").isSome
#guard (parseURIRef "urn:isbn:0451450523").isSome
