// Lean compiler output
// Module: Lake.Toml.ParserUtil
// Imports: public import Lean.PrettyPrinter.Formatter public import Lean.PrettyPrinter.Parenthesizer import Lean.Parser
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lean_PrettyPrinter_Formatter_visitAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Formatter_visitArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkLinebreakBefore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_formatterForKindUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PrettyPrinter_Formatter_getExprPos_x3f(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushToken___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_withMaybeTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Syntax_Traverser_left(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_throwBacktrack___redArg();
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_pushNone;
lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1NoAntiquot(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_instBEqError_beq___boxed(lean_object*, lean_object*);
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Parenthesizer_visitArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkLinebreakBefore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserContext_mkEmptySubstringAt(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_pushSyntax(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* l_Lean_Parser_ParserState_popSyntax(lean_object*);
extern lean_object* l_Lean_Parser_epsilonInfo;
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Lean_Parser_sepByNoAntiquot(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_parenthesizerForKindUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_Parser_atomicFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_rawCh_formatter(uint32_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhileFn(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_stackSize(lean_object*);
lean_object* l_Lean_Parser_ParserState_restore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_isBinDigit(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_isBinDigit___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_isOctDigit(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_isOctDigit___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_isHexDigit(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_isHexDigit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_instAndThenParserFn__lake___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_instAndThenParserFn__lake___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_instAndThenParserFn__lake___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_instAndThenParserFn__lake;
LEAN_EXPORT lean_object* l_Lake_Toml_usePosFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lake_Toml_optFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lake_Toml_optFn_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_optFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_repeatFn(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_mkUnexpectedCharError___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_mkUnexpectedCharError___closed__0;
static lean_once_cell_t l_Lake_Toml_mkUnexpectedCharError___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_mkUnexpectedCharError___closed__1;
static lean_once_cell_t l_Lake_Toml_mkUnexpectedCharError___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_mkUnexpectedCharError___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_mkUnexpectedCharError(lean_object*, uint32_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Toml_mkUnexpectedCharError___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_satisfyFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_satisfyFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_takeWhile1Fn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_takeWhile1Fn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_digitFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_digitFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_digitPairFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_digitPairFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chFn(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAuxFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAuxFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strFn(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_sepByChar1Fn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByChar1Fn___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1Fn(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1AuxFn(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1AuxFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1Fn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_pushAtom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atomFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__1___boxed(lean_object*);
static lean_once_cell_t l_Lake_Toml_atom___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom___closed__0;
static lean_once_cell_t l_Lake_Toml_atom___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom___closed__1;
static lean_once_cell_t l_Lake_Toml_atom___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_atom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__0;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__1;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__2;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__3;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__4;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__5;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__6;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__7;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__8;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__9;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__10;
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter___redArg(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_pushLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_extendTrailingFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__0;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__1;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__0;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_sepByLinebreak___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak___closed__0;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak___closed__1;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak___closed__2;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak___closed__3;
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuotFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_isBinDigit(uint32_t v_c_1_){
_start:
{
uint32_t v___x_2_; uint8_t v___x_3_; 
v___x_2_ = 48;
v___x_3_ = lean_uint32_dec_eq(v_c_1_, v___x_2_);
if (v___x_3_ == 0)
{
uint32_t v___x_4_; uint8_t v___x_5_; 
v___x_4_ = 49;
v___x_5_ = lean_uint32_dec_eq(v_c_1_, v___x_4_);
return v___x_5_;
}
else
{
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_isBinDigit___boxed(lean_object* v_c_6_){
_start:
{
uint32_t v_c_boxed_7_; uint8_t v_res_8_; lean_object* v_r_9_; 
v_c_boxed_7_ = lean_unbox_uint32(v_c_6_);
lean_dec(v_c_6_);
v_res_8_ = l_Lake_Toml_isBinDigit(v_c_boxed_7_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_isOctDigit(uint32_t v_c_10_){
_start:
{
uint32_t v___x_11_; uint8_t v___x_12_; 
v___x_11_ = 48;
v___x_12_ = lean_uint32_dec_le(v___x_11_, v_c_10_);
if (v___x_12_ == 0)
{
return v___x_12_;
}
else
{
uint32_t v___x_13_; uint8_t v___x_14_; 
v___x_13_ = 55;
v___x_14_ = lean_uint32_dec_le(v_c_10_, v___x_13_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_isOctDigit___boxed(lean_object* v_c_15_){
_start:
{
uint32_t v_c_boxed_16_; uint8_t v_res_17_; lean_object* v_r_18_; 
v_c_boxed_16_ = lean_unbox_uint32(v_c_15_);
lean_dec(v_c_15_);
v_res_17_ = l_Lake_Toml_isOctDigit(v_c_boxed_16_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_isHexDigit(uint32_t v_c_19_){
_start:
{
uint8_t v___y_21_; uint8_t v___y_27_; uint32_t v___x_32_; uint8_t v___x_33_; 
v___x_32_ = 48;
v___x_33_ = lean_uint32_dec_le(v___x_32_, v_c_19_);
if (v___x_33_ == 0)
{
v___y_27_ = v___x_33_;
goto v___jp_26_;
}
else
{
uint32_t v___x_34_; uint8_t v___x_35_; 
v___x_34_ = 57;
v___x_35_ = lean_uint32_dec_le(v_c_19_, v___x_34_);
v___y_27_ = v___x_35_;
goto v___jp_26_;
}
v___jp_20_:
{
if (v___y_21_ == 0)
{
uint32_t v___x_22_; uint8_t v___x_23_; 
v___x_22_ = 65;
v___x_23_ = lean_uint32_dec_le(v___x_22_, v_c_19_);
if (v___x_23_ == 0)
{
return v___x_23_;
}
else
{
uint32_t v___x_24_; uint8_t v___x_25_; 
v___x_24_ = 70;
v___x_25_ = lean_uint32_dec_le(v_c_19_, v___x_24_);
return v___x_25_;
}
}
else
{
return v___y_21_;
}
}
v___jp_26_:
{
if (v___y_27_ == 0)
{
uint32_t v___x_28_; uint8_t v___x_29_; 
v___x_28_ = 97;
v___x_29_ = lean_uint32_dec_le(v___x_28_, v_c_19_);
if (v___x_29_ == 0)
{
v___y_21_ = v___x_29_;
goto v___jp_20_;
}
else
{
uint32_t v___x_30_; uint8_t v___x_31_; 
v___x_30_ = 102;
v___x_31_ = lean_uint32_dec_le(v_c_19_, v___x_30_);
v___y_21_ = v___x_31_;
goto v___jp_20_;
}
}
else
{
return v___y_27_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_isHexDigit___boxed(lean_object* v_c_36_){
_start:
{
uint32_t v_c_boxed_37_; uint8_t v_res_38_; lean_object* v_r_39_; 
v_c_boxed_37_ = lean_unbox_uint32(v_c_36_);
lean_dec(v_c_36_);
v_res_38_ = l_Lake_Toml_isHexDigit(v_c_boxed_37_);
v_r_39_ = lean_box(v_res_38_);
return v_r_39_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn___redArg(lean_object* v_s_40_){
_start:
{
lean_inc_ref(v_s_40_);
return v_s_40_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn___redArg___boxed(lean_object* v_s_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lake_Toml_skipFn___redArg(v_s_41_);
lean_dec_ref(v_s_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn(lean_object* v_x_43_, lean_object* v_s_44_){
_start:
{
lean_inc_ref(v_s_44_);
return v_s_44_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn___boxed(lean_object* v_x_45_, lean_object* v_s_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lake_Toml_skipFn(v_x_45_, v_s_46_);
lean_dec_ref(v_s_46_);
lean_dec_ref(v_x_45_);
return v_res_47_;
}
}
static lean_object* _init_l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_alloc_closure((void*)(l_Lean_Parser_instBEqError_beq___boxed), 2, 0);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instAndThenParserFn__lake___lam__0(lean_object* v_p_49_, lean_object* v_q_50_, lean_object* v_c_51_, lean_object* v_s_52_){
_start:
{
lean_object* v_s_53_; lean_object* v_errorMsg_54_; lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
lean_inc_ref(v_c_51_);
v_s_53_ = lean_apply_2(v_p_49_, v_c_51_, v_s_52_);
v_errorMsg_54_ = lean_ctor_get(v_s_53_, 4);
lean_inc(v_errorMsg_54_);
v___x_55_ = lean_obj_once(&l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0, &l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0_once, _init_l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0);
v___x_56_ = lean_box(0);
v___x_57_ = l_Option_instBEq_beq___redArg(v___x_55_, v_errorMsg_54_, v___x_56_);
if (v___x_57_ == 0)
{
lean_dec_ref(v_c_51_);
lean_dec_ref(v_q_50_);
return v_s_53_;
}
else
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_box(0);
v___x_59_ = lean_apply_3(v_q_50_, v___x_58_, v_c_51_, v_s_53_);
return v___x_59_;
}
}
}
static lean_object* _init_l_Lake_Toml_instAndThenParserFn__lake___closed__0(void){
_start:
{
lean_object* v___f_60_; 
v___f_60_ = lean_alloc_closure((void*)(l_Lake_Toml_instAndThenParserFn__lake___lam__0), 4, 0);
return v___f_60_;
}
}
static lean_object* _init_l_Lake_Toml_instAndThenParserFn__lake(void){
_start:
{
lean_object* v___f_61_; 
v___f_61_ = lean_obj_once(&l_Lake_Toml_instAndThenParserFn__lake___closed__0, &l_Lake_Toml_instAndThenParserFn__lake___closed__0_once, _init_l_Lake_Toml_instAndThenParserFn__lake___closed__0);
return v___f_61_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_usePosFn(lean_object* v_f_62_, lean_object* v_c_63_, lean_object* v_s_64_){
_start:
{
lean_object* v_pos_65_; lean_object* v___x_66_; 
v_pos_65_ = lean_ctor_get(v_s_64_, 2);
lean_inc(v_pos_65_);
v___x_66_ = lean_apply_3(v_f_62_, v_pos_65_, v_c_63_, v_s_64_);
return v___x_66_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lake_Toml_optFn_spec__0(lean_object* v_x_67_, lean_object* v_x_68_){
_start:
{
if (lean_obj_tag(v_x_67_) == 0)
{
if (lean_obj_tag(v_x_68_) == 0)
{
uint8_t v___x_69_; 
v___x_69_ = 1;
return v___x_69_;
}
else
{
uint8_t v___x_70_; 
lean_dec_ref(v_x_68_);
v___x_70_ = 0;
return v___x_70_;
}
}
else
{
if (lean_obj_tag(v_x_68_) == 0)
{
uint8_t v___x_71_; 
lean_dec_ref(v_x_67_);
v___x_71_ = 0;
return v___x_71_;
}
else
{
lean_object* v_val_72_; lean_object* v_val_73_; uint8_t v___x_74_; 
v_val_72_ = lean_ctor_get(v_x_67_, 0);
lean_inc(v_val_72_);
lean_dec_ref(v_x_67_);
v_val_73_ = lean_ctor_get(v_x_68_, 0);
lean_inc(v_val_73_);
lean_dec_ref(v_x_68_);
v___x_74_ = l_Lean_Parser_instBEqError_beq(v_val_72_, v_val_73_);
return v___x_74_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lake_Toml_optFn_spec__0___boxed(lean_object* v_x_75_, lean_object* v_x_76_){
_start:
{
uint8_t v_res_77_; lean_object* v_r_78_; 
v_res_77_ = l_Option_instBEq_beq___at___00Lake_Toml_optFn_spec__0(v_x_75_, v_x_76_);
v_r_78_ = lean_box(v_res_77_);
return v_r_78_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_optFn(lean_object* v_p_79_, lean_object* v_c_80_, lean_object* v_s_81_){
_start:
{
lean_object* v_pos_82_; lean_object* v_iniSz_83_; lean_object* v_s_84_; lean_object* v_pos_85_; lean_object* v_errorMsg_86_; lean_object* v___x_87_; uint8_t v___x_88_; 
v_pos_82_ = lean_ctor_get(v_s_81_, 2);
lean_inc(v_pos_82_);
v_iniSz_83_ = l_Lean_Parser_ParserState_stackSize(v_s_81_);
v_s_84_ = lean_apply_2(v_p_79_, v_c_80_, v_s_81_);
v_pos_85_ = lean_ctor_get(v_s_84_, 2);
lean_inc(v_pos_85_);
v_errorMsg_86_ = lean_ctor_get(v_s_84_, 4);
lean_inc(v_errorMsg_86_);
v___x_87_ = lean_box(0);
v___x_88_ = l_Option_instBEq_beq___at___00Lake_Toml_optFn_spec__0(v_errorMsg_86_, v___x_87_);
if (v___x_88_ == 0)
{
uint8_t v___x_89_; 
v___x_89_ = lean_nat_dec_eq(v_pos_85_, v_pos_82_);
lean_dec(v_pos_85_);
if (v___x_89_ == 0)
{
lean_dec(v_iniSz_83_);
lean_dec(v_pos_82_);
return v_s_84_;
}
else
{
lean_object* v___x_90_; 
v___x_90_ = l_Lean_Parser_ParserState_restore(v_s_84_, v_iniSz_83_, v_pos_82_);
lean_dec(v_iniSz_83_);
return v___x_90_;
}
}
else
{
lean_dec(v_pos_85_);
lean_dec(v_iniSz_83_);
lean_dec(v_pos_82_);
return v_s_84_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop(lean_object* v_p_91_, lean_object* v_c_92_, lean_object* v_x_93_, lean_object* v_x_94_){
_start:
{
lean_object* v_zero_95_; uint8_t v_isZero_96_; 
v_zero_95_ = lean_unsigned_to_nat(0u);
v_isZero_96_ = lean_nat_dec_eq(v_x_93_, v_zero_95_);
if (v_isZero_96_ == 1)
{
lean_dec(v_x_93_);
lean_dec_ref(v_c_92_);
lean_dec_ref(v_p_91_);
return v_x_94_;
}
else
{
lean_object* v_s_97_; lean_object* v_errorMsg_98_; lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
lean_inc_ref(v_p_91_);
lean_inc_ref(v_c_92_);
v_s_97_ = lean_apply_2(v_p_91_, v_c_92_, v_x_94_);
v_errorMsg_98_ = lean_ctor_get(v_s_97_, 4);
lean_inc(v_errorMsg_98_);
v___x_99_ = lean_obj_once(&l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0, &l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0_once, _init_l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0);
v___x_100_ = lean_box(0);
v___x_101_ = l_Option_instBEq_beq___redArg(v___x_99_, v_errorMsg_98_, v___x_100_);
if (v___x_101_ == 0)
{
lean_dec(v_x_93_);
lean_dec_ref(v_c_92_);
lean_dec_ref(v_p_91_);
return v_s_97_;
}
else
{
lean_object* v_one_102_; lean_object* v_n_103_; 
v_one_102_ = lean_unsigned_to_nat(1u);
v_n_103_ = lean_nat_sub(v_x_93_, v_one_102_);
lean_dec(v_x_93_);
v_x_93_ = v_n_103_;
v_x_94_ = v_s_97_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_repeatFn(lean_object* v_n_105_, lean_object* v_p_106_, lean_object* v_c_107_, lean_object* v_s_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop(v_p_106_, v_c_107_, v_n_105_, v_s_108_);
return v___x_109_;
}
}
static lean_object* _init_l_Lake_Toml_mkUnexpectedCharError___closed__0(void){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = lean_mk_string_unchecked("unexpected '", 12, 12);
return v___x_110_;
}
}
static lean_object* _init_l_Lake_Toml_mkUnexpectedCharError___closed__1(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lean_mk_string_unchecked("", 0, 0);
return v___x_111_;
}
}
static lean_object* _init_l_Lake_Toml_mkUnexpectedCharError___closed__2(void){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mkUnexpectedCharError(lean_object* v_s_113_, uint32_t v_c_114_, lean_object* v_expected_115_, uint8_t v_pushMissing_116_){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_117_ = lean_obj_once(&l_Lake_Toml_mkUnexpectedCharError___closed__0, &l_Lake_Toml_mkUnexpectedCharError___closed__0_once, _init_l_Lake_Toml_mkUnexpectedCharError___closed__0);
v___x_118_ = lean_obj_once(&l_Lake_Toml_mkUnexpectedCharError___closed__1, &l_Lake_Toml_mkUnexpectedCharError___closed__1_once, _init_l_Lake_Toml_mkUnexpectedCharError___closed__1);
v___x_119_ = lean_string_push(v___x_118_, v_c_114_);
v___x_120_ = lean_string_append(v___x_117_, v___x_119_);
lean_dec_ref(v___x_119_);
v___x_121_ = lean_obj_once(&l_Lake_Toml_mkUnexpectedCharError___closed__2, &l_Lake_Toml_mkUnexpectedCharError___closed__2_once, _init_l_Lake_Toml_mkUnexpectedCharError___closed__2);
v___x_122_ = lean_string_append(v___x_120_, v___x_121_);
v___x_123_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_113_, v___x_122_, v_expected_115_, v_pushMissing_116_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mkUnexpectedCharError___boxed(lean_object* v_s_124_, lean_object* v_c_125_, lean_object* v_expected_126_, lean_object* v_pushMissing_127_){
_start:
{
uint32_t v_c_boxed_128_; uint8_t v_pushMissing_boxed_129_; lean_object* v_res_130_; 
v_c_boxed_128_ = lean_unbox_uint32(v_c_125_);
lean_dec(v_c_125_);
v_pushMissing_boxed_129_ = lean_unbox(v_pushMissing_127_);
v_res_130_ = l_Lake_Toml_mkUnexpectedCharError(v_s_124_, v_c_boxed_128_, v_expected_126_, v_pushMissing_boxed_129_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_satisfyFn(lean_object* v_p_131_, lean_object* v_expected_132_, lean_object* v_c_133_, lean_object* v_s_134_){
_start:
{
lean_object* v_pos_135_; lean_object* v_toInputContext_136_; uint8_t v___x_137_; 
v_pos_135_ = lean_ctor_get(v_s_134_, 2);
v_toInputContext_136_ = lean_ctor_get(v_c_133_, 0);
v___x_137_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_136_, v_pos_135_);
if (v___x_137_ == 0)
{
lean_object* v_inputString_138_; uint32_t v_curr_139_; lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v_inputString_138_ = lean_ctor_get(v_toInputContext_136_, 0);
v_curr_139_ = lean_string_utf8_get_fast(v_inputString_138_, v_pos_135_);
v___x_140_ = lean_box_uint32(v_curr_139_);
v___x_141_ = lean_apply_1(v_p_131_, v___x_140_);
v___x_142_ = lean_unbox(v___x_141_);
if (v___x_142_ == 0)
{
uint8_t v___x_143_; lean_object* v___x_144_; 
v___x_143_ = 1;
v___x_144_ = l_Lake_Toml_mkUnexpectedCharError(v_s_134_, v_curr_139_, v_expected_132_, v___x_143_);
return v___x_144_;
}
else
{
lean_object* v___x_145_; 
lean_inc(v_pos_135_);
lean_dec(v_expected_132_);
v___x_145_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_134_, v_c_133_, v_pos_135_);
lean_dec(v_pos_135_);
return v___x_145_;
}
}
else
{
lean_object* v___x_146_; 
lean_dec_ref(v_p_131_);
v___x_146_ = l_Lean_Parser_ParserState_mkEOIError(v_s_134_, v_expected_132_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_satisfyFn___boxed(lean_object* v_p_147_, lean_object* v_expected_148_, lean_object* v_c_149_, lean_object* v_s_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Lake_Toml_satisfyFn(v_p_147_, v_expected_148_, v_c_149_, v_s_150_);
lean_dec_ref(v_c_149_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_takeWhile1Fn(lean_object* v_p_152_, lean_object* v_expected_153_, lean_object* v_a_154_, lean_object* v_a_155_){
_start:
{
lean_object* v___y_157_; lean_object* v_pos_162_; lean_object* v_toInputContext_163_; uint8_t v___x_164_; 
v_pos_162_ = lean_ctor_get(v_a_155_, 2);
v_toInputContext_163_ = lean_ctor_get(v_a_154_, 0);
v___x_164_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_163_, v_pos_162_);
if (v___x_164_ == 0)
{
lean_object* v_inputString_165_; uint32_t v_curr_166_; lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; 
v_inputString_165_ = lean_ctor_get(v_toInputContext_163_, 0);
v_curr_166_ = lean_string_utf8_get_fast(v_inputString_165_, v_pos_162_);
v___x_167_ = lean_box_uint32(v_curr_166_);
lean_inc_ref(v_p_152_);
v___x_168_ = lean_apply_1(v_p_152_, v___x_167_);
v___x_169_ = lean_unbox(v___x_168_);
if (v___x_169_ == 0)
{
uint8_t v___x_170_; lean_object* v___x_171_; 
v___x_170_ = 1;
v___x_171_ = l_Lake_Toml_mkUnexpectedCharError(v_a_155_, v_curr_166_, v_expected_153_, v___x_170_);
v___y_157_ = v___x_171_;
goto v___jp_156_;
}
else
{
lean_object* v___x_172_; 
lean_inc(v_pos_162_);
lean_dec(v_expected_153_);
v___x_172_ = l_Lean_Parser_ParserState_next_x27___redArg(v_a_155_, v_a_154_, v_pos_162_);
lean_dec(v_pos_162_);
v___y_157_ = v___x_172_;
goto v___jp_156_;
}
}
else
{
lean_object* v___x_173_; 
v___x_173_ = l_Lean_Parser_ParserState_mkEOIError(v_a_155_, v_expected_153_);
v___y_157_ = v___x_173_;
goto v___jp_156_;
}
v___jp_156_:
{
lean_object* v_errorMsg_158_; lean_object* v___x_159_; uint8_t v___x_160_; 
v_errorMsg_158_ = lean_ctor_get(v___y_157_, 4);
v___x_159_ = lean_box(0);
lean_inc(v_errorMsg_158_);
v___x_160_ = l_Option_instBEq_beq___at___00Lake_Toml_optFn_spec__0(v_errorMsg_158_, v___x_159_);
if (v___x_160_ == 0)
{
lean_dec_ref(v_p_152_);
return v___y_157_;
}
else
{
lean_object* v___x_161_; 
v___x_161_ = l_Lean_Parser_takeWhileFn(v_p_152_, v_a_154_, v___y_157_);
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_takeWhile1Fn___boxed(lean_object* v_p_174_, lean_object* v_expected_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lake_Toml_takeWhile1Fn(v_p_174_, v_expected_175_, v_a_176_, v_a_177_);
lean_dec_ref(v_a_176_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_digitFn(lean_object* v_expected_179_, lean_object* v_a_180_, lean_object* v_a_181_){
_start:
{
lean_object* v_pos_182_; lean_object* v_toInputContext_183_; uint8_t v___x_184_; 
v_pos_182_ = lean_ctor_get(v_a_181_, 2);
v_toInputContext_183_ = lean_ctor_get(v_a_180_, 0);
v___x_184_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_183_, v_pos_182_);
if (v___x_184_ == 0)
{
lean_object* v_inputString_185_; uint32_t v_curr_186_; uint8_t v___y_188_; uint32_t v___x_192_; uint8_t v___x_193_; 
v_inputString_185_ = lean_ctor_get(v_toInputContext_183_, 0);
v_curr_186_ = lean_string_utf8_get_fast(v_inputString_185_, v_pos_182_);
v___x_192_ = 48;
v___x_193_ = lean_uint32_dec_le(v___x_192_, v_curr_186_);
if (v___x_193_ == 0)
{
v___y_188_ = v___x_193_;
goto v___jp_187_;
}
else
{
uint32_t v___x_194_; uint8_t v___x_195_; 
v___x_194_ = 57;
v___x_195_ = lean_uint32_dec_le(v_curr_186_, v___x_194_);
v___y_188_ = v___x_195_;
goto v___jp_187_;
}
v___jp_187_:
{
if (v___y_188_ == 0)
{
uint8_t v___x_189_; lean_object* v___x_190_; 
v___x_189_ = 1;
v___x_190_ = l_Lake_Toml_mkUnexpectedCharError(v_a_181_, v_curr_186_, v_expected_179_, v___x_189_);
return v___x_190_;
}
else
{
lean_object* v___x_191_; 
lean_inc(v_pos_182_);
lean_dec(v_expected_179_);
v___x_191_ = l_Lean_Parser_ParserState_next_x27___redArg(v_a_181_, v_a_180_, v_pos_182_);
lean_dec(v_pos_182_);
return v___x_191_;
}
}
}
else
{
lean_object* v___x_196_; 
v___x_196_ = l_Lean_Parser_ParserState_mkEOIError(v_a_181_, v_expected_179_);
return v___x_196_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_digitFn___boxed(lean_object* v_expected_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lake_Toml_digitFn(v_expected_197_, v_a_198_, v_a_199_);
lean_dec_ref(v_a_198_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_digitPairFn(lean_object* v_expected_201_, lean_object* v_a_202_, lean_object* v_a_203_){
_start:
{
lean_object* v_s_204_; lean_object* v_errorMsg_205_; lean_object* v___x_206_; uint8_t v___x_207_; 
lean_inc(v_expected_201_);
v_s_204_ = l_Lake_Toml_digitFn(v_expected_201_, v_a_202_, v_a_203_);
v_errorMsg_205_ = lean_ctor_get(v_s_204_, 4);
lean_inc(v_errorMsg_205_);
v___x_206_ = lean_box(0);
v___x_207_ = l_Option_instBEq_beq___at___00Lake_Toml_optFn_spec__0(v_errorMsg_205_, v___x_206_);
if (v___x_207_ == 0)
{
lean_dec(v_expected_201_);
return v_s_204_;
}
else
{
lean_object* v___x_208_; 
v___x_208_ = l_Lake_Toml_digitFn(v_expected_201_, v_a_202_, v_s_204_);
return v___x_208_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_digitPairFn___boxed(lean_object* v_expected_209_, lean_object* v_a_210_, lean_object* v_a_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lake_Toml_digitPairFn(v_expected_209_, v_a_210_, v_a_211_);
lean_dec_ref(v_a_210_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chFn(uint32_t v_c_213_, lean_object* v_expected_214_, lean_object* v_a_215_, lean_object* v_a_216_){
_start:
{
lean_object* v_pos_217_; lean_object* v_toInputContext_218_; uint8_t v___x_219_; 
v_pos_217_ = lean_ctor_get(v_a_216_, 2);
v_toInputContext_218_ = lean_ctor_get(v_a_215_, 0);
v___x_219_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_218_, v_pos_217_);
if (v___x_219_ == 0)
{
lean_object* v_inputString_220_; uint32_t v_curr_221_; uint8_t v___x_222_; 
v_inputString_220_ = lean_ctor_get(v_toInputContext_218_, 0);
v_curr_221_ = lean_string_utf8_get_fast(v_inputString_220_, v_pos_217_);
v___x_222_ = lean_uint32_dec_eq(v_curr_221_, v_c_213_);
if (v___x_222_ == 0)
{
uint8_t v___x_223_; lean_object* v___x_224_; 
v___x_223_ = 1;
v___x_224_ = l_Lake_Toml_mkUnexpectedCharError(v_a_216_, v_curr_221_, v_expected_214_, v___x_223_);
return v___x_224_;
}
else
{
lean_object* v___x_225_; 
lean_inc(v_pos_217_);
lean_dec(v_expected_214_);
v___x_225_ = l_Lean_Parser_ParserState_next_x27___redArg(v_a_216_, v_a_215_, v_pos_217_);
lean_dec(v_pos_217_);
return v___x_225_;
}
}
else
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_Parser_ParserState_mkEOIError(v_a_216_, v_expected_214_);
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chFn___boxed(lean_object* v_c_227_, lean_object* v_expected_228_, lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
uint32_t v_c_boxed_231_; lean_object* v_res_232_; 
v_c_boxed_231_ = lean_unbox_uint32(v_c_227_);
lean_dec(v_c_227_);
v_res_232_ = l_Lake_Toml_chFn(v_c_boxed_231_, v_expected_228_, v_a_229_, v_a_230_);
lean_dec_ref(v_a_229_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAuxFn(lean_object* v_str_233_, lean_object* v_expected_234_, lean_object* v_strPos_235_, lean_object* v_c_236_, lean_object* v_s_237_){
_start:
{
uint8_t v___x_238_; 
v___x_238_ = lean_string_utf8_at_end(v_str_233_, v_strPos_235_);
if (v___x_238_ == 0)
{
uint32_t v___x_239_; lean_object* v_s_240_; lean_object* v_errorMsg_241_; lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_239_ = lean_string_utf8_get_fast(v_str_233_, v_strPos_235_);
lean_inc(v_expected_234_);
v_s_240_ = l_Lake_Toml_chFn(v___x_239_, v_expected_234_, v_c_236_, v_s_237_);
v_errorMsg_241_ = lean_ctor_get(v_s_240_, 4);
lean_inc(v_errorMsg_241_);
v___x_242_ = lean_box(0);
v___x_243_ = l_Option_instBEq_beq___at___00Lake_Toml_optFn_spec__0(v_errorMsg_241_, v___x_242_);
if (v___x_243_ == 0)
{
lean_dec(v_strPos_235_);
lean_dec(v_expected_234_);
return v_s_240_;
}
else
{
if (v___x_238_ == 0)
{
lean_object* v___x_244_; 
v___x_244_ = lean_string_utf8_next_fast(v_str_233_, v_strPos_235_);
lean_dec(v_strPos_235_);
v_strPos_235_ = v___x_244_;
v_s_237_ = v_s_240_;
goto _start;
}
else
{
lean_dec(v_strPos_235_);
lean_dec(v_expected_234_);
return v_s_240_;
}
}
}
else
{
lean_dec(v_strPos_235_);
lean_dec(v_expected_234_);
return v_s_237_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAuxFn___boxed(lean_object* v_str_246_, lean_object* v_expected_247_, lean_object* v_strPos_248_, lean_object* v_c_249_, lean_object* v_s_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lake_Toml_strAuxFn(v_str_246_, v_expected_247_, v_strPos_248_, v_c_249_, v_s_250_);
lean_dec_ref(v_c_249_);
lean_dec_ref(v_str_246_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strFn(lean_object* v_str_252_, lean_object* v_expected_253_, lean_object* v_a_254_, lean_object* v_a_255_){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_256_ = lean_unsigned_to_nat(0u);
v___x_257_ = lean_alloc_closure((void*)(l_Lake_Toml_strAuxFn___boxed), 5, 3);
lean_closure_set(v___x_257_, 0, v_str_252_);
lean_closure_set(v___x_257_, 1, v_expected_253_);
lean_closure_set(v___x_257_, 2, v___x_256_);
v___x_258_ = l_Lean_Parser_atomicFn(v___x_257_, v_a_254_, v_a_255_);
return v___x_258_;
}
}
static lean_object* _init_l_Lake_Toml_sepByChar1Fn___closed__0(void){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = lean_mk_string_unchecked("unexpected separator '", 22, 22);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1Fn(lean_object* v_p_260_, uint32_t v_sep_261_, lean_object* v_expected_262_, lean_object* v_c_263_, lean_object* v_s_264_){
_start:
{
lean_object* v_pos_265_; lean_object* v_toInputContext_266_; uint8_t v___x_267_; 
v_pos_265_ = lean_ctor_get(v_s_264_, 2);
v_toInputContext_266_ = lean_ctor_get(v_c_263_, 0);
v___x_267_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_266_, v_pos_265_);
if (v___x_267_ == 0)
{
lean_object* v_inputString_268_; uint32_t v_curr_269_; lean_object* v_s_270_; lean_object* v___x_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
lean_inc(v_pos_265_);
v_inputString_268_ = lean_ctor_get(v_toInputContext_266_, 0);
v_curr_269_ = lean_string_utf8_get_fast(v_inputString_268_, v_pos_265_);
v_s_270_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_264_, v_c_263_, v_pos_265_);
lean_dec(v_pos_265_);
v___x_271_ = lean_box_uint32(v_curr_269_);
lean_inc_ref(v_p_260_);
v___x_272_ = lean_apply_1(v_p_260_, v___x_271_);
v___x_273_ = lean_unbox(v___x_272_);
if (v___x_273_ == 0)
{
uint8_t v___x_274_; uint8_t v___x_275_; 
lean_dec_ref(v_p_260_);
v___x_274_ = 1;
v___x_275_ = lean_uint32_dec_eq(v_curr_269_, v_sep_261_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; 
v___x_276_ = l_Lake_Toml_mkUnexpectedCharError(v_s_270_, v_curr_269_, v_expected_262_, v___x_274_);
return v___x_276_;
}
else
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_277_ = lean_obj_once(&l_Lake_Toml_sepByChar1Fn___closed__0, &l_Lake_Toml_sepByChar1Fn___closed__0_once, _init_l_Lake_Toml_sepByChar1Fn___closed__0);
v___x_278_ = lean_obj_once(&l_Lake_Toml_mkUnexpectedCharError___closed__1, &l_Lake_Toml_mkUnexpectedCharError___closed__1_once, _init_l_Lake_Toml_mkUnexpectedCharError___closed__1);
v___x_279_ = lean_string_push(v___x_278_, v_curr_269_);
v___x_280_ = lean_string_append(v___x_277_, v___x_279_);
lean_dec_ref(v___x_279_);
v___x_281_ = lean_obj_once(&l_Lake_Toml_mkUnexpectedCharError___closed__2, &l_Lake_Toml_mkUnexpectedCharError___closed__2_once, _init_l_Lake_Toml_mkUnexpectedCharError___closed__2);
v___x_282_ = lean_string_append(v___x_280_, v___x_281_);
v___x_283_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_270_, v___x_282_, v_expected_262_, v___x_274_);
return v___x_283_;
}
}
else
{
lean_object* v___x_284_; 
v___x_284_ = l_Lake_Toml_sepByChar1AuxFn(v_p_260_, v_sep_261_, v_expected_262_, v_c_263_, v_s_270_);
return v___x_284_;
}
}
else
{
lean_dec(v_expected_262_);
lean_dec_ref(v_p_260_);
return v_s_264_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1AuxFn(lean_object* v_p_285_, uint32_t v_sep_286_, lean_object* v_expected_287_, lean_object* v_c_288_, lean_object* v_s_289_){
_start:
{
lean_object* v_pos_290_; lean_object* v_toInputContext_291_; uint8_t v___x_292_; 
v_pos_290_ = lean_ctor_get(v_s_289_, 2);
v_toInputContext_291_ = lean_ctor_get(v_c_288_, 0);
v___x_292_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_291_, v_pos_290_);
if (v___x_292_ == 0)
{
lean_object* v_inputString_293_; uint32_t v_curr_294_; lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v_inputString_293_ = lean_ctor_get(v_toInputContext_291_, 0);
v_curr_294_ = lean_string_utf8_get_fast(v_inputString_293_, v_pos_290_);
v___x_295_ = lean_box_uint32(v_curr_294_);
lean_inc_ref(v_p_285_);
v___x_296_ = lean_apply_1(v_p_285_, v___x_295_);
v___x_297_ = lean_unbox(v___x_296_);
if (v___x_297_ == 0)
{
uint8_t v___x_298_; 
v___x_298_ = lean_uint32_dec_eq(v_curr_294_, v_sep_286_);
if (v___x_298_ == 0)
{
lean_dec(v_expected_287_);
lean_dec_ref(v_p_285_);
return v_s_289_;
}
else
{
lean_object* v___x_299_; lean_object* v___x_300_; 
lean_inc(v_pos_290_);
v___x_299_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_289_, v_c_288_, v_pos_290_);
lean_dec(v_pos_290_);
v___x_300_ = l_Lake_Toml_sepByChar1Fn(v_p_285_, v_sep_286_, v_expected_287_, v_c_288_, v___x_299_);
return v___x_300_;
}
}
else
{
lean_object* v___x_301_; 
lean_inc(v_pos_290_);
v___x_301_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_289_, v_c_288_, v_pos_290_);
lean_dec(v_pos_290_);
v_s_289_ = v___x_301_;
goto _start;
}
}
else
{
lean_dec(v_expected_287_);
lean_dec_ref(v_p_285_);
return v_s_289_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1AuxFn___boxed(lean_object* v_p_303_, lean_object* v_sep_304_, lean_object* v_expected_305_, lean_object* v_c_306_, lean_object* v_s_307_){
_start:
{
uint32_t v_sep_boxed_308_; lean_object* v_res_309_; 
v_sep_boxed_308_ = lean_unbox_uint32(v_sep_304_);
lean_dec(v_sep_304_);
v_res_309_ = l_Lake_Toml_sepByChar1AuxFn(v_p_303_, v_sep_boxed_308_, v_expected_305_, v_c_306_, v_s_307_);
lean_dec_ref(v_c_306_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1Fn___boxed(lean_object* v_p_310_, lean_object* v_sep_311_, lean_object* v_expected_312_, lean_object* v_c_313_, lean_object* v_s_314_){
_start:
{
uint32_t v_sep_boxed_315_; lean_object* v_res_316_; 
v_sep_boxed_315_ = lean_unbox_uint32(v_sep_311_);
lean_dec(v_sep_311_);
v_res_316_ = l_Lake_Toml_sepByChar1Fn(v_p_310_, v_sep_boxed_315_, v_expected_312_, v_c_313_, v_s_314_);
lean_dec_ref(v_c_313_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_pushAtom(lean_object* v_startPos_317_, lean_object* v_trailingFn_318_, lean_object* v_c_319_, lean_object* v_s_320_){
_start:
{
lean_object* v_toInputContext_321_; lean_object* v_pos_322_; lean_object* v_inputString_323_; lean_object* v_endPos_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_344_; 
v_toInputContext_321_ = lean_ctor_get(v_c_319_, 0);
lean_inc_ref(v_toInputContext_321_);
v_pos_322_ = lean_ctor_get(v_s_320_, 2);
lean_inc(v_pos_322_);
v_inputString_323_ = lean_ctor_get(v_toInputContext_321_, 0);
v_endPos_324_ = lean_ctor_get(v_toInputContext_321_, 3);
v_isSharedCheck_344_ = !lean_is_exclusive(v_toInputContext_321_);
if (v_isSharedCheck_344_ == 0)
{
lean_object* v_unused_345_; lean_object* v_unused_346_; 
v_unused_345_ = lean_ctor_get(v_toInputContext_321_, 2);
lean_dec(v_unused_345_);
v_unused_346_ = lean_ctor_get(v_toInputContext_321_, 1);
lean_dec(v_unused_346_);
v___x_326_ = v_toInputContext_321_;
v_isShared_327_ = v_isSharedCheck_344_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_endPos_324_);
lean_inc(v_inputString_323_);
lean_dec(v_toInputContext_321_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_344_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v_leading_328_; lean_object* v_s_329_; lean_object* v_pos_330_; lean_object* v_val_331_; lean_object* v___y_333_; uint8_t v___x_341_; 
lean_inc(v_startPos_317_);
v_leading_328_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_319_, v_startPos_317_);
v_s_329_ = lean_apply_2(v_trailingFn_318_, v_c_319_, v_s_320_);
v_pos_330_ = lean_ctor_get(v_s_329_, 2);
lean_inc(v_pos_330_);
v_val_331_ = lean_string_utf8_extract(v_inputString_323_, v_startPos_317_, v_pos_322_);
v___x_341_ = lean_nat_dec_le(v_pos_330_, v_endPos_324_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; 
lean_dec(v_pos_330_);
v___x_342_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_342_, 0, v_inputString_323_);
lean_ctor_set(v___x_342_, 1, v_pos_322_);
lean_ctor_set(v___x_342_, 2, v_endPos_324_);
v___y_333_ = v___x_342_;
goto v___jp_332_;
}
else
{
lean_object* v___x_343_; 
lean_dec(v_endPos_324_);
v___x_343_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_343_, 0, v_inputString_323_);
lean_ctor_set(v___x_343_, 1, v_pos_322_);
lean_ctor_set(v___x_343_, 2, v_pos_330_);
v___y_333_ = v___x_343_;
goto v___jp_332_;
}
v___jp_332_:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_337_; 
v___x_334_ = lean_string_utf8_byte_size(v_val_331_);
v___x_335_ = lean_nat_add(v_startPos_317_, v___x_334_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 3, v___x_335_);
lean_ctor_set(v___x_326_, 2, v___y_333_);
lean_ctor_set(v___x_326_, 1, v_startPos_317_);
lean_ctor_set(v___x_326_, 0, v_leading_328_);
v___x_337_ = v___x_326_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_leading_328_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v_startPos_317_);
lean_ctor_set(v_reuseFailAlloc_340_, 2, v___y_333_);
lean_ctor_set(v_reuseFailAlloc_340_, 3, v___x_335_);
v___x_337_ = v_reuseFailAlloc_340_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
lean_object* v_atom_338_; lean_object* v___x_339_; 
v_atom_338_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_338_, 0, v___x_337_);
lean_ctor_set(v_atom_338_, 1, v_val_331_);
v___x_339_ = l_Lean_Parser_ParserState_pushSyntax(v_s_329_, v_atom_338_);
return v___x_339_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atomFn(lean_object* v_p_347_, lean_object* v_trailingFn_348_, lean_object* v_c_349_, lean_object* v_s_350_){
_start:
{
lean_object* v_pos_351_; lean_object* v_s_352_; lean_object* v_errorMsg_353_; lean_object* v___x_354_; uint8_t v___x_355_; 
v_pos_351_ = lean_ctor_get(v_s_350_, 2);
lean_inc(v_pos_351_);
lean_inc_ref(v_c_349_);
v_s_352_ = lean_apply_2(v_p_347_, v_c_349_, v_s_350_);
v_errorMsg_353_ = lean_ctor_get(v_s_352_, 4);
lean_inc(v_errorMsg_353_);
v___x_354_ = lean_box(0);
v___x_355_ = l_Option_instBEq_beq___at___00Lake_Toml_optFn_spec__0(v_errorMsg_353_, v___x_354_);
if (v___x_355_ == 0)
{
lean_dec(v_pos_351_);
lean_dec_ref(v_c_349_);
lean_dec_ref(v_trailingFn_348_);
return v_s_352_;
}
else
{
lean_object* v___x_356_; 
v___x_356_ = l_Lake_Toml_pushAtom(v_pos_351_, v_trailingFn_348_, v_c_349_, v_s_352_);
return v___x_356_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__0(lean_object* v___y_357_){
_start:
{
lean_inc(v___y_357_);
return v___y_357_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__0___boxed(lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lake_Toml_atom___lam__0(v___y_358_);
lean_dec(v___y_358_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__1(lean_object* v___y_360_){
_start:
{
lean_inc_ref(v___y_360_);
return v___y_360_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__1___boxed(lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lake_Toml_atom___lam__1(v___y_361_);
lean_dec_ref(v___y_361_);
return v_res_362_;
}
}
static lean_object* _init_l_Lake_Toml_atom___closed__0(void){
_start:
{
lean_object* v___f_363_; 
v___f_363_ = lean_alloc_closure((void*)(l_Lake_Toml_atom___lam__0___boxed), 1, 0);
return v___f_363_;
}
}
static lean_object* _init_l_Lake_Toml_atom___closed__1(void){
_start:
{
lean_object* v___f_364_; 
v___f_364_ = lean_alloc_closure((void*)(l_Lake_Toml_atom___lam__1___boxed), 1, 0);
return v___f_364_;
}
}
static lean_object* _init_l_Lake_Toml_atom___closed__2(void){
_start:
{
lean_object* v___x_365_; lean_object* v___f_366_; lean_object* v___f_367_; lean_object* v___x_368_; 
v___x_365_ = lean_box(1);
v___f_366_ = lean_obj_once(&l_Lake_Toml_atom___closed__1, &l_Lake_Toml_atom___closed__1_once, _init_l_Lake_Toml_atom___closed__1);
v___f_367_ = lean_obj_once(&l_Lake_Toml_atom___closed__0, &l_Lake_Toml_atom___closed__0_once, _init_l_Lake_Toml_atom___closed__0);
v___x_368_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_368_, 0, v___f_367_);
lean_ctor_set(v___x_368_, 1, v___f_366_);
lean_ctor_set(v___x_368_, 2, v___x_365_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom(lean_object* v_p_369_, lean_object* v_trailingFn_370_){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_371_ = lean_obj_once(&l_Lake_Toml_atom___closed__2, &l_Lake_Toml_atom___closed__2_once, _init_l_Lake_Toml_atom___closed__2);
v___x_372_ = lean_alloc_closure((void*)(l_Lake_Toml_atomFn), 4, 2);
lean_closure_set(v___x_372_, 0, v_p_369_);
lean_closure_set(v___x_372_, 1, v_trailingFn_370_);
v___x_373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_373_, 0, v___x_371_);
lean_ctor_set(v___x_373_, 1, v___x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg(lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v_stxTrav_379_; lean_object* v_cur_380_; lean_object* v___x_381_; 
v___x_377_ = lean_st_ref_get(v___y_375_);
lean_dec(v___x_377_);
v___x_378_ = lean_st_ref_get(v___y_374_);
v_stxTrav_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc_ref(v_stxTrav_379_);
lean_dec(v___x_378_);
v_cur_380_ = lean_ctor_get(v_stxTrav_379_, 0);
lean_inc(v_cur_380_);
lean_dec_ref(v_stxTrav_379_);
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v_cur_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg___boxed(lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg(v___y_382_, v___y_383_);
lean_dec(v___y_383_);
lean_dec(v___y_382_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0(lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg(v___y_387_, v___y_389_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___boxed(lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0(v___y_392_, v___y_393_, v___y_394_, v___y_395_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg(lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v_stxTrav_403_; lean_object* v_leadWord_404_; uint8_t v_leadWordIdent_405_; uint8_t v_isUngrouped_406_; uint8_t v_mustBeGrouped_407_; lean_object* v_stack_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_419_; 
v___x_401_ = lean_st_ref_get(v___y_399_);
lean_dec(v___x_401_);
v___x_402_ = lean_st_ref_take(v___y_398_);
v_stxTrav_403_ = lean_ctor_get(v___x_402_, 0);
v_leadWord_404_ = lean_ctor_get(v___x_402_, 1);
v_leadWordIdent_405_ = lean_ctor_get_uint8(v___x_402_, sizeof(void*)*3);
v_isUngrouped_406_ = lean_ctor_get_uint8(v___x_402_, sizeof(void*)*3 + 1);
v_mustBeGrouped_407_ = lean_ctor_get_uint8(v___x_402_, sizeof(void*)*3 + 2);
v_stack_408_ = lean_ctor_get(v___x_402_, 2);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_419_ == 0)
{
v___x_410_ = v___x_402_;
v_isShared_411_ = v_isSharedCheck_419_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_stack_408_);
lean_inc(v_leadWord_404_);
lean_inc(v_stxTrav_403_);
lean_dec(v___x_402_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_419_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_412_; lean_object* v___x_414_; 
v___x_412_ = l_Lean_Syntax_Traverser_left(v_stxTrav_403_);
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 0, v___x_412_);
v___x_414_ = v___x_410_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v___x_412_);
lean_ctor_set(v_reuseFailAlloc_418_, 1, v_leadWord_404_);
lean_ctor_set(v_reuseFailAlloc_418_, 2, v_stack_408_);
lean_ctor_set_uint8(v_reuseFailAlloc_418_, sizeof(void*)*3, v_leadWordIdent_405_);
lean_ctor_set_uint8(v_reuseFailAlloc_418_, sizeof(void*)*3 + 1, v_isUngrouped_406_);
lean_ctor_set_uint8(v_reuseFailAlloc_418_, sizeof(void*)*3 + 2, v_mustBeGrouped_407_);
v___x_414_ = v_reuseFailAlloc_418_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_415_ = lean_st_ref_set(v___y_398_, v___x_414_);
v___x_416_ = lean_box(0);
v___x_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
return v___x_417_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg___boxed(lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg(v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec(v___y_420_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1(lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg(v___y_425_, v___y_427_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___boxed(lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1(v___y_430_, v___y_431_, v___y_432_, v___y_433_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
return v_res_435_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__0(void){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_436_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__0);
v___x_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_438_, 0, v___x_437_);
return v___x_438_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__2(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_439_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1);
v___x_440_ = lean_unsigned_to_nat(0u);
v___x_441_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set(v___x_441_, 1, v___x_440_);
lean_ctor_set(v___x_441_, 2, v___x_440_);
lean_ctor_set(v___x_441_, 3, v___x_440_);
lean_ctor_set(v___x_441_, 4, v___x_439_);
lean_ctor_set(v___x_441_, 5, v___x_439_);
lean_ctor_set(v___x_441_, 6, v___x_439_);
lean_ctor_set(v___x_441_, 7, v___x_439_);
lean_ctor_set(v___x_441_, 8, v___x_439_);
lean_ctor_set(v___x_441_, 9, v___x_439_);
return v___x_441_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__3(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_442_ = lean_unsigned_to_nat(32u);
v___x_443_ = lean_mk_empty_array_with_capacity(v___x_442_);
v___x_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
return v___x_444_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__4(void){
_start:
{
size_t v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_445_ = ((size_t)5ULL);
v___x_446_ = lean_unsigned_to_nat(0u);
v___x_447_ = lean_unsigned_to_nat(32u);
v___x_448_ = lean_mk_empty_array_with_capacity(v___x_447_);
v___x_449_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__3);
v___x_450_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_450_, 0, v___x_449_);
lean_ctor_set(v___x_450_, 1, v___x_448_);
lean_ctor_set(v___x_450_, 2, v___x_446_);
lean_ctor_set(v___x_450_, 3, v___x_446_);
lean_ctor_set_usize(v___x_450_, 4, v___x_445_);
return v___x_450_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__5(void){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_451_ = lean_box(1);
v___x_452_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__4);
v___x_453_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1);
v___x_454_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
lean_ctor_set(v___x_454_, 1, v___x_452_);
lean_ctor_set(v___x_454_, 2, v___x_451_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2(lean_object* v_msgData_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v___x_459_; lean_object* v_env_460_; lean_object* v_options_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_459_ = lean_st_ref_get(v___y_457_);
v_env_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc_ref(v_env_460_);
lean_dec(v___x_459_);
v_options_461_ = lean_ctor_get(v___y_456_, 2);
v___x_462_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__2);
v___x_463_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__5);
lean_inc_ref(v_options_461_);
v___x_464_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_464_, 0, v_env_460_);
lean_ctor_set(v___x_464_, 1, v___x_462_);
lean_ctor_set(v___x_464_, 2, v___x_463_);
lean_ctor_set(v___x_464_, 3, v_options_461_);
v___x_465_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
lean_ctor_set(v___x_465_, 1, v_msgData_455_);
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___boxed(lean_object* v_msgData_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2(v_msgData_467_, v___y_468_, v___y_469_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
return v_res_471_;
}
}
static double _init_l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_472_; double v___x_473_; 
v___x_472_ = lean_unsigned_to_nat(0u);
v___x_473_ = lean_float_of_nat(v___x_472_);
return v___x_473_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_474_ = lean_unsigned_to_nat(0u);
v___x_475_ = lean_mk_empty_array_with_capacity(v___x_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg(lean_object* v_cls_476_, lean_object* v_msg_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v_ref_481_; lean_object* v___x_482_; lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_527_; 
v_ref_481_ = lean_ctor_get(v___y_478_, 5);
v___x_482_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2(v_msg_477_, v___y_478_, v___y_479_);
v_a_483_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_527_ == 0)
{
v___x_485_ = v___x_482_;
v_isShared_486_ = v_isSharedCheck_527_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_dec(v___x_482_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_527_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_487_; lean_object* v_traceState_488_; lean_object* v_env_489_; lean_object* v_nextMacroScope_490_; lean_object* v_ngen_491_; lean_object* v_auxDeclNGen_492_; lean_object* v_cache_493_; lean_object* v_messages_494_; lean_object* v_infoState_495_; lean_object* v_snapshotTasks_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_526_; 
v___x_487_ = lean_st_ref_take(v___y_479_);
v_traceState_488_ = lean_ctor_get(v___x_487_, 4);
v_env_489_ = lean_ctor_get(v___x_487_, 0);
v_nextMacroScope_490_ = lean_ctor_get(v___x_487_, 1);
v_ngen_491_ = lean_ctor_get(v___x_487_, 2);
v_auxDeclNGen_492_ = lean_ctor_get(v___x_487_, 3);
v_cache_493_ = lean_ctor_get(v___x_487_, 5);
v_messages_494_ = lean_ctor_get(v___x_487_, 6);
v_infoState_495_ = lean_ctor_get(v___x_487_, 7);
v_snapshotTasks_496_ = lean_ctor_get(v___x_487_, 8);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_526_ == 0)
{
v___x_498_ = v___x_487_;
v_isShared_499_ = v_isSharedCheck_526_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_snapshotTasks_496_);
lean_inc(v_infoState_495_);
lean_inc(v_messages_494_);
lean_inc(v_cache_493_);
lean_inc(v_traceState_488_);
lean_inc(v_auxDeclNGen_492_);
lean_inc(v_ngen_491_);
lean_inc(v_nextMacroScope_490_);
lean_inc(v_env_489_);
lean_dec(v___x_487_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_526_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
uint64_t v_tid_500_; lean_object* v_traces_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_525_; 
v_tid_500_ = lean_ctor_get_uint64(v_traceState_488_, sizeof(void*)*1);
v_traces_501_ = lean_ctor_get(v_traceState_488_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v_traceState_488_);
if (v_isSharedCheck_525_ == 0)
{
v___x_503_ = v_traceState_488_;
v_isShared_504_ = v_isSharedCheck_525_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_traces_501_);
lean_dec(v_traceState_488_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_525_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_505_; double v___x_506_; uint8_t v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_515_; 
v___x_505_ = lean_box(0);
v___x_506_ = lean_float_once(&l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__0);
v___x_507_ = 0;
v___x_508_ = lean_obj_once(&l_Lake_Toml_mkUnexpectedCharError___closed__1, &l_Lake_Toml_mkUnexpectedCharError___closed__1_once, _init_l_Lake_Toml_mkUnexpectedCharError___closed__1);
v___x_509_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_509_, 0, v_cls_476_);
lean_ctor_set(v___x_509_, 1, v___x_505_);
lean_ctor_set(v___x_509_, 2, v___x_508_);
lean_ctor_set_float(v___x_509_, sizeof(void*)*3, v___x_506_);
lean_ctor_set_float(v___x_509_, sizeof(void*)*3 + 8, v___x_506_);
lean_ctor_set_uint8(v___x_509_, sizeof(void*)*3 + 16, v___x_507_);
v___x_510_ = lean_obj_once(&l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__1, &l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__1_once, _init_l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__1);
v___x_511_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_511_, 0, v___x_509_);
lean_ctor_set(v___x_511_, 1, v_a_483_);
lean_ctor_set(v___x_511_, 2, v___x_510_);
lean_inc(v_ref_481_);
v___x_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_512_, 0, v_ref_481_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = l_Lean_PersistentArray_push___redArg(v_traces_501_, v___x_512_);
if (v_isShared_504_ == 0)
{
lean_ctor_set(v___x_503_, 0, v___x_513_);
v___x_515_ = v___x_503_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_513_);
lean_ctor_set_uint64(v_reuseFailAlloc_524_, sizeof(void*)*1, v_tid_500_);
v___x_515_ = v_reuseFailAlloc_524_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
lean_object* v___x_517_; 
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 4, v___x_515_);
v___x_517_ = v___x_498_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_env_489_);
lean_ctor_set(v_reuseFailAlloc_523_, 1, v_nextMacroScope_490_);
lean_ctor_set(v_reuseFailAlloc_523_, 2, v_ngen_491_);
lean_ctor_set(v_reuseFailAlloc_523_, 3, v_auxDeclNGen_492_);
lean_ctor_set(v_reuseFailAlloc_523_, 4, v___x_515_);
lean_ctor_set(v_reuseFailAlloc_523_, 5, v_cache_493_);
lean_ctor_set(v_reuseFailAlloc_523_, 6, v_messages_494_);
lean_ctor_set(v_reuseFailAlloc_523_, 7, v_infoState_495_);
lean_ctor_set(v_reuseFailAlloc_523_, 8, v_snapshotTasks_496_);
v___x_517_ = v_reuseFailAlloc_523_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_518_ = lean_st_ref_set(v___y_479_, v___x_517_);
v___x_519_ = lean_box(0);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 0, v___x_519_);
v___x_521_ = v___x_485_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v___x_519_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___boxed(lean_object* v_cls_528_, lean_object* v_msg_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg(v_cls_528_, v_msg_529_, v___y_530_, v___y_531_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
return v_res_533_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__0(void){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = lean_mk_string_unchecked("PrettyPrinter", 13, 13);
return v___x_534_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__1(void){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = lean_mk_string_unchecked("format", 6, 6);
return v___x_535_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__2(void){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = lean_mk_string_unchecked("backtrack", 9, 9);
return v___x_536_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__3(void){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_537_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__2, &l_Lake_Toml_atom_formatter___redArg___closed__2_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__2);
v___x_538_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__1, &l_Lake_Toml_atom_formatter___redArg___closed__1_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__1);
v___x_539_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__0, &l_Lake_Toml_atom_formatter___redArg___closed__0_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__0);
v___x_540_ = l_Lean_Name_mkStr3(v___x_539_, v___x_538_, v___x_537_);
return v___x_540_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__4(void){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_541_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__5(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__4, &l_Lake_Toml_atom_formatter___redArg___closed__4_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__4);
v___x_543_ = l_Lean_Name_mkStr1(v___x_542_);
return v___x_543_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__6(void){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_544_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__3, &l_Lake_Toml_atom_formatter___redArg___closed__3_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__3);
v___x_545_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__5, &l_Lake_Toml_atom_formatter___redArg___closed__5_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__5);
v___x_546_ = l_Lean_Name_append(v___x_545_, v___x_544_);
return v___x_546_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__7(void){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = lean_mk_string_unchecked("unexpected syntax '", 19, 19);
return v___x_547_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__8(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__7, &l_Lake_Toml_atom_formatter___redArg___closed__7_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__7);
v___x_549_ = l_Lean_stringToMessageData(v___x_548_);
return v___x_549_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__9(void){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = lean_mk_string_unchecked("', expected atom", 16, 16);
return v___x_550_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__10(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__9, &l_Lake_Toml_atom_formatter___redArg___closed__9_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__9);
v___x_552_ = l_Lean_stringToMessageData(v___x_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter___redArg(lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_){
_start:
{
lean_object* v___x_558_; lean_object* v_a_559_; 
v___x_558_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg(v_a_554_, v_a_556_);
v_a_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_a_559_);
lean_dec_ref(v___x_558_);
if (lean_obj_tag(v_a_559_) == 2)
{
lean_object* v_info_560_; lean_object* v_val_561_; lean_object* v___x_562_; uint8_t v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v_info_560_ = lean_ctor_get(v_a_559_, 0);
lean_inc(v_info_560_);
v_val_561_ = lean_ctor_get(v_a_559_, 1);
lean_inc_ref(v_val_561_);
v___x_562_ = l_Lean_PrettyPrinter_Formatter_getExprPos_x3f(v_a_559_);
lean_dec_ref(v_a_559_);
v___x_563_ = 0;
v___x_564_ = lean_box(v___x_563_);
v___x_565_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_pushToken___boxed), 8, 3);
lean_closure_set(v___x_565_, 0, v_info_560_);
lean_closure_set(v___x_565_, 1, v_val_561_);
lean_closure_set(v___x_565_, 2, v___x_564_);
v___x_566_ = l_Lean_PrettyPrinter_Formatter_withMaybeTag(v___x_562_, v___x_565_, v_a_553_, v_a_554_, v_a_555_, v_a_556_);
lean_dec(v___x_562_);
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v___x_567_; 
lean_dec_ref(v___x_566_);
v___x_567_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg(v_a_554_, v_a_556_);
return v___x_567_;
}
else
{
return v___x_566_;
}
}
else
{
lean_object* v_options_568_; uint8_t v_hasTrace_569_; 
v_options_568_ = lean_ctor_get(v_a_555_, 2);
v_hasTrace_569_ = lean_ctor_get_uint8(v_options_568_, sizeof(void*)*1);
if (v_hasTrace_569_ == 0)
{
lean_object* v___x_570_; 
lean_dec(v_a_559_);
v___x_570_ = l_Lean_PrettyPrinter_Formatter_throwBacktrack___redArg();
return v___x_570_;
}
else
{
lean_object* v_inheritedTraceOptions_571_; lean_object* v___x_572_; lean_object* v___x_573_; uint8_t v___x_574_; 
v_inheritedTraceOptions_571_ = lean_ctor_get(v_a_555_, 13);
v___x_572_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__3, &l_Lake_Toml_atom_formatter___redArg___closed__3_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__3);
v___x_573_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__6, &l_Lake_Toml_atom_formatter___redArg___closed__6_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__6);
v___x_574_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_571_, v_options_568_, v___x_573_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; 
lean_dec(v_a_559_);
v___x_575_ = l_Lean_PrettyPrinter_Formatter_throwBacktrack___redArg();
return v___x_575_;
}
else
{
lean_object* v___x_576_; lean_object* v___x_577_; uint8_t v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_576_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__8, &l_Lake_Toml_atom_formatter___redArg___closed__8_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__8);
v___x_577_ = lean_box(0);
v___x_578_ = 0;
v___x_579_ = l_Lean_Syntax_formatStx(v_a_559_, v___x_577_, v___x_578_);
v___x_580_ = l_Lean_MessageData_ofFormat(v___x_579_);
v___x_581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_576_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__10, &l_Lake_Toml_atom_formatter___redArg___closed__10_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__10);
v___x_583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_581_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg(v___x_572_, v___x_583_, v_a_555_, v_a_556_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v___x_585_; 
lean_dec_ref(v___x_584_);
v___x_585_ = l_Lean_PrettyPrinter_Formatter_throwBacktrack___redArg();
return v___x_585_;
}
else
{
return v___x_584_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter___redArg___boxed(lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lake_Toml_atom_formatter___redArg(v_a_586_, v_a_587_, v_a_588_, v_a_589_);
lean_dec(v_a_589_);
lean_dec_ref(v_a_588_);
lean_dec(v_a_587_);
lean_dec_ref(v_a_586_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter(lean_object* v_x_592_, lean_object* v_x_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Lake_Toml_atom_formatter___redArg(v_a_594_, v_a_595_, v_a_596_, v_a_597_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter___boxed(lean_object* v_x_600_, lean_object* v_x_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lake_Toml_atom_formatter(v_x_600_, v_x_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_);
lean_dec(v_a_605_);
lean_dec_ref(v_a_604_);
lean_dec(v_a_603_);
lean_dec_ref(v_a_602_);
lean_dec_ref(v_x_601_);
lean_dec_ref(v_x_600_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2(lean_object* v_cls_608_, lean_object* v_msg_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg(v_cls_608_, v_msg_609_, v___y_612_, v___y_613_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___boxed(lean_object* v_cls_616_, lean_object* v_msg_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2(v_cls_616_, v_msg_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___redArg(lean_object* v_a_624_, lean_object* v_a_625_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_624_, v_a_625_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___redArg___boxed(lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___redArg(v_a_628_, v_a_629_);
lean_dec(v_a_629_);
lean_dec(v_a_628_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer(lean_object* v_x_632_, lean_object* v_x_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_635_, v_a_637_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___boxed(lean_object* v_x_640_, lean_object* v_x_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer(v_x_640_, v_x_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_);
lean_dec(v_a_645_);
lean_dec_ref(v_a_644_);
lean_dec(v_a_643_);
lean_dec_ref(v_a_642_);
lean_dec_ref(v_x_641_);
lean_dec_ref(v_x_640_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom(uint32_t v_c_648_, lean_object* v_expected_649_, lean_object* v_trailingFn_650_){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_651_ = lean_box_uint32(v_c_648_);
v___x_652_ = lean_alloc_closure((void*)(l_Lake_Toml_chFn___boxed), 4, 2);
lean_closure_set(v___x_652_, 0, v___x_651_);
lean_closure_set(v___x_652_, 1, v_expected_649_);
v___x_653_ = l_Lake_Toml_atom(v___x_652_, v_trailingFn_650_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom___boxed(lean_object* v_c_654_, lean_object* v_expected_655_, lean_object* v_trailingFn_656_){
_start:
{
uint32_t v_c_boxed_657_; lean_object* v_res_658_; 
v_c_boxed_657_ = lean_unbox_uint32(v_c_654_);
lean_dec(v_c_654_);
v_res_658_ = l_Lake_Toml_chAtom(v_c_boxed_657_, v_expected_655_, v_trailingFn_656_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter___redArg(uint32_t v_c_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_){
_start:
{
uint8_t v___x_665_; lean_object* v___x_666_; 
v___x_665_ = 0;
v___x_666_ = l_Lean_PrettyPrinter_Formatter_rawCh_formatter(v_c_659_, v___x_665_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter___redArg___boxed(lean_object* v_c_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
uint32_t v_c_boxed_673_; lean_object* v_res_674_; 
v_c_boxed_673_ = lean_unbox_uint32(v_c_667_);
lean_dec(v_c_667_);
v_res_674_ = l_Lake_Toml_chAtom_formatter___redArg(v_c_boxed_673_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
lean_dec(v_a_671_);
lean_dec_ref(v_a_670_);
lean_dec(v_a_669_);
lean_dec_ref(v_a_668_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter(uint32_t v_c_675_, lean_object* v_x_676_, lean_object* v_x_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = l_Lake_Toml_chAtom_formatter___redArg(v_c_675_, v_a_678_, v_a_679_, v_a_680_, v_a_681_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter___boxed(lean_object* v_c_684_, lean_object* v_x_685_, lean_object* v_x_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_){
_start:
{
uint32_t v_c_boxed_692_; lean_object* v_res_693_; 
v_c_boxed_692_ = lean_unbox_uint32(v_c_684_);
lean_dec(v_c_684_);
v_res_693_ = l_Lake_Toml_chAtom_formatter(v_c_boxed_692_, v_x_685_, v_x_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
lean_dec(v_a_690_);
lean_dec_ref(v_a_689_);
lean_dec(v_a_688_);
lean_dec_ref(v_a_687_);
lean_dec_ref(v_x_686_);
lean_dec(v_x_685_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer___redArg(lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_694_, v_a_695_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer___redArg___boxed(lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lake_Toml_chAtom_parenthesizer___redArg(v_a_698_, v_a_699_);
lean_dec(v_a_699_);
lean_dec(v_a_698_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer(uint32_t v_x_702_, lean_object* v_x_703_, lean_object* v_x_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_706_, v_a_708_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer___boxed(lean_object* v_x_711_, lean_object* v_x_712_, lean_object* v_x_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_){
_start:
{
uint32_t v_x_18__boxed_719_; lean_object* v_res_720_; 
v_x_18__boxed_719_ = lean_unbox_uint32(v_x_711_);
lean_dec(v_x_711_);
v_res_720_ = l_Lake_Toml_chAtom_parenthesizer(v_x_18__boxed_719_, v_x_712_, v_x_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_);
lean_dec(v_a_717_);
lean_dec_ref(v_a_716_);
lean_dec(v_a_715_);
lean_dec_ref(v_a_714_);
lean_dec_ref(v_x_713_);
lean_dec(v_x_712_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom(lean_object* v_s_721_, lean_object* v_expected_722_, lean_object* v_trailingFn_723_){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v_str_728_; lean_object* v_startInclusive_729_; lean_object* v_endExclusive_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_724_ = lean_unsigned_to_nat(0u);
v___x_725_ = lean_string_utf8_byte_size(v_s_721_);
v___x_726_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_726_, 0, v_s_721_);
lean_ctor_set(v___x_726_, 1, v___x_724_);
lean_ctor_set(v___x_726_, 2, v___x_725_);
v___x_727_ = l_String_Slice_trimAscii(v___x_726_);
v_str_728_ = lean_ctor_get(v___x_727_, 0);
lean_inc_ref(v_str_728_);
v_startInclusive_729_ = lean_ctor_get(v___x_727_, 1);
lean_inc(v_startInclusive_729_);
v_endExclusive_730_ = lean_ctor_get(v___x_727_, 2);
lean_inc(v_endExclusive_730_);
lean_dec_ref(v___x_727_);
v___x_731_ = lean_string_utf8_extract(v_str_728_, v_startInclusive_729_, v_endExclusive_730_);
lean_dec(v_endExclusive_730_);
lean_dec(v_startInclusive_729_);
lean_dec_ref(v_str_728_);
v___x_732_ = lean_alloc_closure((void*)(l_Lake_Toml_strFn), 4, 2);
lean_closure_set(v___x_732_, 0, v___x_731_);
lean_closure_set(v___x_732_, 1, v_expected_722_);
v___x_733_ = l_Lake_Toml_atom(v___x_732_, v_trailingFn_723_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter___redArg(lean_object* v_s_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(v_s_734_, v_a_735_, v_a_736_, v_a_737_, v_a_738_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter___redArg___boxed(lean_object* v_s_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_Lake_Toml_strAtom_formatter___redArg(v_s_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_);
lean_dec(v_a_745_);
lean_dec_ref(v_a_744_);
lean_dec(v_a_743_);
lean_dec_ref(v_a_742_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter(lean_object* v_s_748_, lean_object* v_x_749_, lean_object* v_x_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(v_s_748_, v_a_751_, v_a_752_, v_a_753_, v_a_754_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter___boxed(lean_object* v_s_757_, lean_object* v_x_758_, lean_object* v_x_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Lake_Toml_strAtom_formatter(v_s_757_, v_x_758_, v_x_759_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
lean_dec(v_a_763_);
lean_dec_ref(v_a_762_);
lean_dec(v_a_761_);
lean_dec_ref(v_a_760_);
lean_dec_ref(v_x_759_);
lean_dec(v_x_758_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer___redArg(lean_object* v_a_766_, lean_object* v_a_767_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_766_, v_a_767_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer___redArg___boxed(lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Lake_Toml_strAtom_parenthesizer___redArg(v_a_770_, v_a_771_);
lean_dec(v_a_771_);
lean_dec(v_a_770_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer(lean_object* v_x_774_, lean_object* v_x_775_, lean_object* v_x_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_778_, v_a_780_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer___boxed(lean_object* v_x_783_, lean_object* v_x_784_, lean_object* v_x_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lake_Toml_strAtom_parenthesizer(v_x_783_, v_x_784_, v_x_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_);
lean_dec(v_a_789_);
lean_dec_ref(v_a_788_);
lean_dec(v_a_787_);
lean_dec_ref(v_a_786_);
lean_dec_ref(v_x_785_);
lean_dec(v_x_784_);
lean_dec_ref(v_x_783_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_pushLit(lean_object* v_kind_792_, lean_object* v_startPos_793_, lean_object* v_trailingFn_794_, lean_object* v_c_795_, lean_object* v_s_796_){
_start:
{
lean_object* v_toInputContext_797_; lean_object* v_pos_798_; lean_object* v_inputString_799_; lean_object* v_endPos_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_818_; 
v_toInputContext_797_ = lean_ctor_get(v_c_795_, 0);
lean_inc_ref(v_toInputContext_797_);
v_pos_798_ = lean_ctor_get(v_s_796_, 2);
lean_inc(v_pos_798_);
v_inputString_799_ = lean_ctor_get(v_toInputContext_797_, 0);
v_endPos_800_ = lean_ctor_get(v_toInputContext_797_, 3);
v_isSharedCheck_818_ = !lean_is_exclusive(v_toInputContext_797_);
if (v_isSharedCheck_818_ == 0)
{
lean_object* v_unused_819_; lean_object* v_unused_820_; 
v_unused_819_ = lean_ctor_get(v_toInputContext_797_, 2);
lean_dec(v_unused_819_);
v_unused_820_ = lean_ctor_get(v_toInputContext_797_, 1);
lean_dec(v_unused_820_);
v___x_802_ = v_toInputContext_797_;
v_isShared_803_ = v_isSharedCheck_818_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_endPos_800_);
lean_inc(v_inputString_799_);
lean_dec(v_toInputContext_797_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_818_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v_leading_804_; lean_object* v_s_805_; lean_object* v_pos_806_; lean_object* v_val_807_; lean_object* v___y_809_; uint8_t v___x_815_; 
lean_inc(v_startPos_793_);
v_leading_804_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_795_, v_startPos_793_);
v_s_805_ = lean_apply_2(v_trailingFn_794_, v_c_795_, v_s_796_);
v_pos_806_ = lean_ctor_get(v_s_805_, 2);
lean_inc(v_pos_806_);
v_val_807_ = lean_string_utf8_extract(v_inputString_799_, v_startPos_793_, v_pos_798_);
v___x_815_ = lean_nat_dec_le(v_pos_806_, v_endPos_800_);
if (v___x_815_ == 0)
{
lean_object* v___x_816_; 
lean_dec(v_pos_806_);
lean_inc(v_pos_798_);
v___x_816_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_816_, 0, v_inputString_799_);
lean_ctor_set(v___x_816_, 1, v_pos_798_);
lean_ctor_set(v___x_816_, 2, v_endPos_800_);
v___y_809_ = v___x_816_;
goto v___jp_808_;
}
else
{
lean_object* v___x_817_; 
lean_dec(v_endPos_800_);
lean_inc(v_pos_798_);
v___x_817_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_817_, 0, v_inputString_799_);
lean_ctor_set(v___x_817_, 1, v_pos_798_);
lean_ctor_set(v___x_817_, 2, v_pos_806_);
v___y_809_ = v___x_817_;
goto v___jp_808_;
}
v___jp_808_:
{
lean_object* v_info_811_; 
if (v_isShared_803_ == 0)
{
lean_ctor_set(v___x_802_, 3, v_pos_798_);
lean_ctor_set(v___x_802_, 2, v___y_809_);
lean_ctor_set(v___x_802_, 1, v_startPos_793_);
lean_ctor_set(v___x_802_, 0, v_leading_804_);
v_info_811_ = v___x_802_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_leading_804_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v_startPos_793_);
lean_ctor_set(v_reuseFailAlloc_814_, 2, v___y_809_);
lean_ctor_set(v_reuseFailAlloc_814_, 3, v_pos_798_);
v_info_811_ = v_reuseFailAlloc_814_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = l_Lean_Syntax_mkLit(v_kind_792_, v_val_807_, v_info_811_);
v___x_813_ = l_Lean_Parser_ParserState_pushSyntax(v_s_805_, v___x_812_);
return v___x_813_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litFn(lean_object* v_kind_821_, lean_object* v_p_822_, lean_object* v_trailingFn_823_, lean_object* v_c_824_, lean_object* v_s_825_){
_start:
{
lean_object* v_pos_826_; lean_object* v_s_827_; lean_object* v_errorMsg_828_; lean_object* v___x_829_; uint8_t v___x_830_; 
v_pos_826_ = lean_ctor_get(v_s_825_, 2);
lean_inc(v_pos_826_);
lean_inc_ref(v_c_824_);
v_s_827_ = lean_apply_2(v_p_822_, v_c_824_, v_s_825_);
v_errorMsg_828_ = lean_ctor_get(v_s_827_, 4);
lean_inc(v_errorMsg_828_);
v___x_829_ = lean_box(0);
v___x_830_ = l_Option_instBEq_beq___at___00Lake_Toml_optFn_spec__0(v_errorMsg_828_, v___x_829_);
if (v___x_830_ == 0)
{
lean_dec(v_pos_826_);
lean_dec_ref(v_c_824_);
lean_dec_ref(v_trailingFn_823_);
lean_dec(v_kind_821_);
return v_s_827_;
}
else
{
lean_object* v___x_831_; 
v___x_831_ = l_Lake_Toml_pushLit(v_kind_821_, v_pos_826_, v_trailingFn_823_, v_c_824_, v_s_827_);
return v___x_831_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit(lean_object* v_kind_832_, lean_object* v_p_833_, lean_object* v_trailingFn_834_){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_835_ = lean_obj_once(&l_Lake_Toml_atom___closed__2, &l_Lake_Toml_atom___closed__2_once, _init_l_Lake_Toml_atom___closed__2);
v___x_836_ = lean_alloc_closure((void*)(l_Lake_Toml_litFn), 5, 3);
lean_closure_set(v___x_836_, 0, v_kind_832_);
lean_closure_set(v___x_836_, 1, v_p_833_);
lean_closure_set(v___x_836_, 2, v_trailingFn_834_);
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_835_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter___redArg(lean_object* v_kind_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v_kind_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter___redArg___boxed(lean_object* v_kind_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lake_Toml_lit_formatter___redArg(v_kind_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_);
lean_dec(v_a_849_);
lean_dec_ref(v_a_848_);
lean_dec(v_a_847_);
lean_dec_ref(v_a_846_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter(lean_object* v_kind_852_, lean_object* v_x_853_, lean_object* v_x_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v_kind_852_, v_a_855_, v_a_856_, v_a_857_, v_a_858_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter___boxed(lean_object* v_kind_861_, lean_object* v_x_862_, lean_object* v_x_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Lake_Toml_lit_formatter(v_kind_861_, v_x_862_, v_x_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_);
lean_dec(v_a_867_);
lean_dec_ref(v_a_866_);
lean_dec(v_a_865_);
lean_dec_ref(v_a_864_);
lean_dec_ref(v_x_863_);
lean_dec_ref(v_x_862_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer___redArg(lean_object* v_a_870_, lean_object* v_a_871_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_870_, v_a_871_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer___redArg___boxed(lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_Lake_Toml_lit_parenthesizer___redArg(v_a_874_, v_a_875_);
lean_dec(v_a_875_);
lean_dec(v_a_874_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer(lean_object* v_x_878_, lean_object* v_x_879_, lean_object* v_x_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_882_, v_a_884_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer___boxed(lean_object* v_x_887_, lean_object* v_x_888_, lean_object* v_x_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lake_Toml_lit_parenthesizer(v_x_887_, v_x_888_, v_x_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_);
lean_dec(v_a_893_);
lean_dec_ref(v_a_892_);
lean_dec(v_a_891_);
lean_dec_ref(v_a_890_);
lean_dec_ref(v_x_889_);
lean_dec_ref(v_x_888_);
lean_dec(v_x_887_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg___lam__0(lean_object* v_kind_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v_kind_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg___lam__0___boxed(lean_object* v_kind_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lake_Toml_litWithAntiquot_formatter___redArg___lam__0(v_kind_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_);
lean_dec(v___y_907_);
lean_dec_ref(v___y_906_);
lean_dec(v___y_905_);
lean_dec_ref(v___y_904_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg(lean_object* v_name_910_, lean_object* v_kind_911_, uint8_t v_anonymous_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_){
_start:
{
lean_object* v___f_918_; uint8_t v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
lean_inc(v_kind_911_);
v___f_918_ = lean_alloc_closure((void*)(l_Lake_Toml_litWithAntiquot_formatter___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_918_, 0, v_kind_911_);
v___x_919_ = 0;
v___x_920_ = lean_box(v_anonymous_912_);
v___x_921_ = lean_box(v___x_919_);
v___x_922_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_922_, 0, v_name_910_);
lean_closure_set(v___x_922_, 1, v_kind_911_);
lean_closure_set(v___x_922_, 2, v___x_920_);
lean_closure_set(v___x_922_, 3, v___x_921_);
v___x_923_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_922_, v___f_918_, v_a_913_, v_a_914_, v_a_915_, v_a_916_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg___boxed(lean_object* v_name_924_, lean_object* v_kind_925_, lean_object* v_anonymous_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_){
_start:
{
uint8_t v_anonymous_boxed_932_; lean_object* v_res_933_; 
v_anonymous_boxed_932_ = lean_unbox(v_anonymous_926_);
v_res_933_ = l_Lake_Toml_litWithAntiquot_formatter___redArg(v_name_924_, v_kind_925_, v_anonymous_boxed_932_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter(lean_object* v_name_934_, lean_object* v_kind_935_, lean_object* v_p_936_, lean_object* v_trailingFn_937_, uint8_t v_anonymous_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = l_Lake_Toml_litWithAntiquot_formatter___redArg(v_name_934_, v_kind_935_, v_anonymous_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___boxed(lean_object* v_name_945_, lean_object* v_kind_946_, lean_object* v_p_947_, lean_object* v_trailingFn_948_, lean_object* v_anonymous_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_){
_start:
{
uint8_t v_anonymous_boxed_955_; lean_object* v_res_956_; 
v_anonymous_boxed_955_ = lean_unbox(v_anonymous_949_);
v_res_956_ = l_Lake_Toml_litWithAntiquot_formatter(v_name_945_, v_kind_946_, v_p_947_, v_trailingFn_948_, v_anonymous_boxed_955_, v_a_950_, v_a_951_, v_a_952_, v_a_953_);
lean_dec(v_a_953_);
lean_dec_ref(v_a_952_);
lean_dec(v_a_951_);
lean_dec_ref(v_a_950_);
lean_dec_ref(v_trailingFn_948_);
lean_dec_ref(v_p_947_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___lam__0(lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v___y_958_, v___y_960_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___lam__0___boxed(lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___lam__0(v___y_963_, v___y_964_, v___y_965_, v___y_966_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
return v_res_968_;
}
}
static lean_object* _init_l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___closed__0(void){
_start:
{
lean_object* v___f_969_; 
v___f_969_ = lean_alloc_closure((void*)(l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___lam__0___boxed), 5, 0);
return v___f_969_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(lean_object* v_name_970_, lean_object* v_kind_971_, uint8_t v_anonymous_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_, lean_object* v_a_976_){
_start:
{
lean_object* v___f_978_; uint8_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___f_978_ = lean_obj_once(&l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___closed__0, &l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___closed__0_once, _init_l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___closed__0);
v___x_979_ = 0;
v___x_980_ = lean_box(v_anonymous_972_);
v___x_981_ = lean_box(v___x_979_);
v___x_982_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_982_, 0, v_name_970_);
lean_closure_set(v___x_982_, 1, v_kind_971_);
lean_closure_set(v___x_982_, 2, v___x_980_);
lean_closure_set(v___x_982_, 3, v___x_981_);
v___x_983_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_982_, v___f_978_, v_a_973_, v_a_974_, v_a_975_, v_a_976_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___boxed(lean_object* v_name_984_, lean_object* v_kind_985_, lean_object* v_anonymous_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_){
_start:
{
uint8_t v_anonymous_boxed_992_; lean_object* v_res_993_; 
v_anonymous_boxed_992_ = lean_unbox(v_anonymous_986_);
v_res_993_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(v_name_984_, v_kind_985_, v_anonymous_boxed_992_, v_a_987_, v_a_988_, v_a_989_, v_a_990_);
lean_dec(v_a_990_);
lean_dec_ref(v_a_989_);
lean_dec(v_a_988_);
lean_dec_ref(v_a_987_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer(lean_object* v_name_994_, lean_object* v_kind_995_, lean_object* v_p_996_, lean_object* v_trailingFn_997_, uint8_t v_anonymous_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(v_name_994_, v_kind_995_, v_anonymous_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___boxed(lean_object* v_name_1005_, lean_object* v_kind_1006_, lean_object* v_p_1007_, lean_object* v_trailingFn_1008_, lean_object* v_anonymous_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_){
_start:
{
uint8_t v_anonymous_boxed_1015_; lean_object* v_res_1016_; 
v_anonymous_boxed_1015_ = lean_unbox(v_anonymous_1009_);
v_res_1016_ = l_Lake_Toml_litWithAntiquot_parenthesizer(v_name_1005_, v_kind_1006_, v_p_1007_, v_trailingFn_1008_, v_anonymous_boxed_1015_, v_a_1010_, v_a_1011_, v_a_1012_, v_a_1013_);
lean_dec(v_a_1013_);
lean_dec_ref(v_a_1012_);
lean_dec(v_a_1011_);
lean_dec_ref(v_a_1010_);
lean_dec_ref(v_trailingFn_1008_);
lean_dec_ref(v_p_1007_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot(lean_object* v_name_1017_, lean_object* v_kind_1018_, lean_object* v_p_1019_, lean_object* v_trailingFn_1020_, uint8_t v_anonymous_1021_){
_start:
{
uint8_t v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1022_ = 0;
lean_inc(v_kind_1018_);
v___x_1023_ = l_Lean_Parser_mkAntiquot(v_name_1017_, v_kind_1018_, v_anonymous_1021_, v___x_1022_);
v___x_1024_ = l_Lake_Toml_lit(v_kind_1018_, v_p_1019_, v_trailingFn_1020_);
v___x_1025_ = l_Lean_Parser_withAntiquot(v___x_1023_, v___x_1024_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot___boxed(lean_object* v_name_1026_, lean_object* v_kind_1027_, lean_object* v_p_1028_, lean_object* v_trailingFn_1029_, lean_object* v_anonymous_1030_){
_start:
{
uint8_t v_anonymous_boxed_1031_; lean_object* v_res_1032_; 
v_anonymous_boxed_1031_ = lean_unbox(v_anonymous_1030_);
v_res_1032_ = l_Lake_Toml_litWithAntiquot(v_name_1026_, v_kind_1027_, v_p_1028_, v_trailingFn_1029_, v_anonymous_boxed_1031_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon(lean_object* v_fn_1033_){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1034_ = l_Lean_Parser_epsilonInfo;
v___x_1035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
lean_ctor_set(v___x_1035_, 1, v_fn_1033_);
return v___x_1035_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter___redArg(){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = lean_box(0);
v___x_1038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter___redArg___boxed(lean_object* v_a_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lake_Toml_epsilon_formatter___redArg();
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter(lean_object* v_x_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter___boxed(lean_object* v_x_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lake_Toml_epsilon_formatter(v_x_1048_, v_a_1049_, v_a_1050_, v_a_1051_, v_a_1052_);
lean_dec(v_a_1052_);
lean_dec_ref(v_a_1051_);
lean_dec(v_a_1050_);
lean_dec_ref(v_a_1049_);
lean_dec_ref(v_x_1048_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer___redArg(){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = lean_box(0);
v___x_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer___redArg___boxed(lean_object* v_a_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer(lean_object* v_x_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_){
_start:
{
lean_object* v___x_1066_; 
v___x_1066_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer___boxed(lean_object* v_x_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lake_Toml_epsilon_parenthesizer(v_x_1067_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_);
lean_dec(v_a_1071_);
lean_dec_ref(v_a_1070_);
lean_dec(v_a_1069_);
lean_dec_ref(v_a_1068_);
lean_dec_ref(v_x_1067_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo(lean_object* v_f_1074_, lean_object* v_x_1075_){
_start:
{
switch(lean_obj_tag(v_x_1075_))
{
case 2:
{
lean_object* v_info_1076_; lean_object* v_val_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1085_; 
v_info_1076_ = lean_ctor_get(v_x_1075_, 0);
v_val_1077_ = lean_ctor_get(v_x_1075_, 1);
v_isSharedCheck_1085_ = !lean_is_exclusive(v_x_1075_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1079_ = v_x_1075_;
v_isShared_1080_ = v_isSharedCheck_1085_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_val_1077_);
lean_inc(v_info_1076_);
lean_dec(v_x_1075_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1085_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1081_; lean_object* v___x_1083_; 
v___x_1081_ = lean_apply_1(v_f_1074_, v_info_1076_);
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 0, v___x_1081_);
v___x_1083_ = v___x_1079_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1081_);
lean_ctor_set(v_reuseFailAlloc_1084_, 1, v_val_1077_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
case 3:
{
lean_object* v_info_1086_; lean_object* v_rawVal_1087_; lean_object* v_val_1088_; lean_object* v_preresolved_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1097_; 
v_info_1086_ = lean_ctor_get(v_x_1075_, 0);
v_rawVal_1087_ = lean_ctor_get(v_x_1075_, 1);
v_val_1088_ = lean_ctor_get(v_x_1075_, 2);
v_preresolved_1089_ = lean_ctor_get(v_x_1075_, 3);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_x_1075_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1091_ = v_x_1075_;
v_isShared_1092_ = v_isSharedCheck_1097_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_preresolved_1089_);
lean_inc(v_val_1088_);
lean_inc(v_rawVal_1087_);
lean_inc(v_info_1086_);
lean_dec(v_x_1075_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1097_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1093_; lean_object* v___x_1095_; 
v___x_1093_ = lean_apply_1(v_f_1074_, v_info_1086_);
if (v_isShared_1092_ == 0)
{
lean_ctor_set(v___x_1091_, 0, v___x_1093_);
v___x_1095_ = v___x_1091_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v___x_1093_);
lean_ctor_set(v_reuseFailAlloc_1096_, 1, v_rawVal_1087_);
lean_ctor_set(v_reuseFailAlloc_1096_, 2, v_val_1088_);
lean_ctor_set(v_reuseFailAlloc_1096_, 3, v_preresolved_1089_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
case 1:
{
lean_object* v_info_1098_; lean_object* v_kind_1099_; lean_object* v_args_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; uint8_t v___x_1104_; 
v_info_1098_ = lean_ctor_get(v_x_1075_, 0);
v_kind_1099_ = lean_ctor_get(v_x_1075_, 1);
v_args_1100_ = lean_ctor_get(v_x_1075_, 2);
v___x_1101_ = lean_array_get_size(v_args_1100_);
v___x_1102_ = lean_unsigned_to_nat(1u);
v___x_1103_ = lean_nat_sub(v___x_1101_, v___x_1102_);
v___x_1104_ = lean_nat_dec_lt(v___x_1103_, v___x_1101_);
if (v___x_1104_ == 0)
{
lean_dec(v___x_1103_);
lean_dec_ref(v_f_1074_);
return v_x_1075_;
}
else
{
lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1116_; 
lean_inc_ref(v_args_1100_);
lean_inc(v_kind_1099_);
lean_inc(v_info_1098_);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_x_1075_);
if (v_isSharedCheck_1116_ == 0)
{
lean_object* v_unused_1117_; lean_object* v_unused_1118_; lean_object* v_unused_1119_; 
v_unused_1117_ = lean_ctor_get(v_x_1075_, 2);
lean_dec(v_unused_1117_);
v_unused_1118_ = lean_ctor_get(v_x_1075_, 1);
lean_dec(v_unused_1118_);
v_unused_1119_ = lean_ctor_get(v_x_1075_, 0);
lean_dec(v_unused_1119_);
v___x_1106_ = v_x_1075_;
v_isShared_1107_ = v_isSharedCheck_1116_;
goto v_resetjp_1105_;
}
else
{
lean_dec(v_x_1075_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1116_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v_v_1108_; lean_object* v___x_1109_; lean_object* v_xs_x27_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1114_; 
v_v_1108_ = lean_array_fget(v_args_1100_, v___x_1103_);
v___x_1109_ = lean_box(0);
v_xs_x27_1110_ = lean_array_fset(v_args_1100_, v___x_1103_, v___x_1109_);
v___x_1111_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo(v_f_1074_, v_v_1108_);
v___x_1112_ = lean_array_fset(v_xs_x27_1110_, v___x_1103_, v___x_1111_);
lean_dec(v___x_1103_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 2, v___x_1112_);
v___x_1114_ = v___x_1106_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_info_1098_);
lean_ctor_set(v_reuseFailAlloc_1115_, 1, v_kind_1099_);
lean_ctor_set(v_reuseFailAlloc_1115_, 2, v___x_1112_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
}
default: 
{
lean_dec_ref(v_f_1074_);
return v_x_1075_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0___lam__0(lean_object* v_stopPos_1120_, lean_object* v_x_1121_){
_start:
{
if (lean_obj_tag(v_x_1121_) == 0)
{
lean_object* v_trailing_1122_; lean_object* v_leading_1123_; lean_object* v_pos_1124_; lean_object* v_endPos_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1142_; 
v_trailing_1122_ = lean_ctor_get(v_x_1121_, 2);
v_leading_1123_ = lean_ctor_get(v_x_1121_, 0);
v_pos_1124_ = lean_ctor_get(v_x_1121_, 1);
v_endPos_1125_ = lean_ctor_get(v_x_1121_, 3);
v_isSharedCheck_1142_ = !lean_is_exclusive(v_x_1121_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1127_ = v_x_1121_;
v_isShared_1128_ = v_isSharedCheck_1142_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_endPos_1125_);
lean_inc(v_trailing_1122_);
lean_inc(v_pos_1124_);
lean_inc(v_leading_1123_);
lean_dec(v_x_1121_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1142_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v_str_1129_; lean_object* v_startPos_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1140_; 
v_str_1129_ = lean_ctor_get(v_trailing_1122_, 0);
v_startPos_1130_ = lean_ctor_get(v_trailing_1122_, 1);
v_isSharedCheck_1140_ = !lean_is_exclusive(v_trailing_1122_);
if (v_isSharedCheck_1140_ == 0)
{
lean_object* v_unused_1141_; 
v_unused_1141_ = lean_ctor_get(v_trailing_1122_, 2);
lean_dec(v_unused_1141_);
v___x_1132_ = v_trailing_1122_;
v_isShared_1133_ = v_isSharedCheck_1140_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_startPos_1130_);
lean_inc(v_str_1129_);
lean_dec(v_trailing_1122_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1140_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 2, v_stopPos_1120_);
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_str_1129_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_startPos_1130_);
lean_ctor_set(v_reuseFailAlloc_1139_, 2, v_stopPos_1120_);
v___x_1135_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
lean_object* v___x_1137_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 2, v___x_1135_);
v___x_1137_ = v___x_1127_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_leading_1123_);
lean_ctor_set(v_reuseFailAlloc_1138_, 1, v_pos_1124_);
lean_ctor_set(v_reuseFailAlloc_1138_, 2, v___x_1135_);
lean_ctor_set(v_reuseFailAlloc_1138_, 3, v_endPos_1125_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
return v___x_1137_;
}
}
}
}
}
else
{
lean_dec(v_stopPos_1120_);
return v_x_1121_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0(lean_object* v_stopPos_1143_, lean_object* v_x_1144_){
_start:
{
switch(lean_obj_tag(v_x_1144_))
{
case 2:
{
lean_object* v_info_1145_; lean_object* v_val_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1154_; 
v_info_1145_ = lean_ctor_get(v_x_1144_, 0);
v_val_1146_ = lean_ctor_get(v_x_1144_, 1);
v_isSharedCheck_1154_ = !lean_is_exclusive(v_x_1144_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1148_ = v_x_1144_;
v_isShared_1149_ = v_isSharedCheck_1154_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_val_1146_);
lean_inc(v_info_1145_);
lean_dec(v_x_1144_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1154_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1150_; lean_object* v___x_1152_; 
v___x_1150_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0___lam__0(v_stopPos_1143_, v_info_1145_);
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 0, v___x_1150_);
v___x_1152_ = v___x_1148_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1150_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_val_1146_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
case 3:
{
lean_object* v_info_1155_; lean_object* v_rawVal_1156_; lean_object* v_val_1157_; lean_object* v_preresolved_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1166_; 
v_info_1155_ = lean_ctor_get(v_x_1144_, 0);
v_rawVal_1156_ = lean_ctor_get(v_x_1144_, 1);
v_val_1157_ = lean_ctor_get(v_x_1144_, 2);
v_preresolved_1158_ = lean_ctor_get(v_x_1144_, 3);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_x_1144_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1160_ = v_x_1144_;
v_isShared_1161_ = v_isSharedCheck_1166_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_preresolved_1158_);
lean_inc(v_val_1157_);
lean_inc(v_rawVal_1156_);
lean_inc(v_info_1155_);
lean_dec(v_x_1144_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1166_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1164_; 
v___x_1162_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0___lam__0(v_stopPos_1143_, v_info_1155_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v___x_1162_);
v___x_1164_ = v___x_1160_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v___x_1162_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v_rawVal_1156_);
lean_ctor_set(v_reuseFailAlloc_1165_, 2, v_val_1157_);
lean_ctor_set(v_reuseFailAlloc_1165_, 3, v_preresolved_1158_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
case 1:
{
lean_object* v_info_1167_; lean_object* v_kind_1168_; lean_object* v_args_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; 
v_info_1167_ = lean_ctor_get(v_x_1144_, 0);
v_kind_1168_ = lean_ctor_get(v_x_1144_, 1);
v_args_1169_ = lean_ctor_get(v_x_1144_, 2);
v___x_1170_ = lean_array_get_size(v_args_1169_);
v___x_1171_ = lean_unsigned_to_nat(1u);
v___x_1172_ = lean_nat_sub(v___x_1170_, v___x_1171_);
v___x_1173_ = lean_nat_dec_lt(v___x_1172_, v___x_1170_);
if (v___x_1173_ == 0)
{
lean_dec(v___x_1172_);
lean_dec(v_stopPos_1143_);
return v_x_1144_;
}
else
{
lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1185_; 
lean_inc_ref(v_args_1169_);
lean_inc(v_kind_1168_);
lean_inc(v_info_1167_);
v_isSharedCheck_1185_ = !lean_is_exclusive(v_x_1144_);
if (v_isSharedCheck_1185_ == 0)
{
lean_object* v_unused_1186_; lean_object* v_unused_1187_; lean_object* v_unused_1188_; 
v_unused_1186_ = lean_ctor_get(v_x_1144_, 2);
lean_dec(v_unused_1186_);
v_unused_1187_ = lean_ctor_get(v_x_1144_, 1);
lean_dec(v_unused_1187_);
v_unused_1188_ = lean_ctor_get(v_x_1144_, 0);
lean_dec(v_unused_1188_);
v___x_1175_ = v_x_1144_;
v_isShared_1176_ = v_isSharedCheck_1185_;
goto v_resetjp_1174_;
}
else
{
lean_dec(v_x_1144_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1185_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v_v_1177_; lean_object* v___x_1178_; lean_object* v_xs_x27_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1183_; 
v_v_1177_ = lean_array_fget(v_args_1169_, v___x_1172_);
v___x_1178_ = lean_box(0);
v_xs_x27_1179_ = lean_array_fset(v_args_1169_, v___x_1172_, v___x_1178_);
v___x_1180_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0(v_stopPos_1143_, v_v_1177_);
v___x_1181_ = lean_array_fset(v_xs_x27_1179_, v___x_1172_, v___x_1180_);
lean_dec(v___x_1172_);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 2, v___x_1181_);
v___x_1183_ = v___x_1175_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_info_1167_);
lean_ctor_set(v_reuseFailAlloc_1184_, 1, v_kind_1168_);
lean_ctor_set(v_reuseFailAlloc_1184_, 2, v___x_1181_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
default: 
{
lean_dec(v_stopPos_1143_);
return v_x_1144_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_extendTrailingFn(lean_object* v_p_1189_, lean_object* v_c_1190_, lean_object* v_s_1191_){
_start:
{
lean_object* v_s_1192_; lean_object* v_stxStack_1193_; lean_object* v_pos_1194_; lean_object* v_tail_1195_; lean_object* v_s_1196_; lean_object* v_tail_1197_; lean_object* v___x_1198_; 
v_s_1192_ = lean_apply_2(v_p_1189_, v_c_1190_, v_s_1191_);
v_stxStack_1193_ = lean_ctor_get(v_s_1192_, 0);
lean_inc_ref(v_stxStack_1193_);
v_pos_1194_ = lean_ctor_get(v_s_1192_, 2);
lean_inc(v_pos_1194_);
v_tail_1195_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1193_);
lean_dec_ref(v_stxStack_1193_);
v_s_1196_ = l_Lean_Parser_ParserState_popSyntax(v_s_1192_);
v_tail_1197_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0(v_pos_1194_, v_tail_1195_);
v___x_1198_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1196_, v_tail_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter___redArg(){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter___redArg___boxed(lean_object* v_a_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l_Lake_Toml_trailing_formatter___redArg();
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter(lean_object* v_p_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter___boxed(lean_object* v_p_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Lake_Toml_trailing_formatter(v_p_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
lean_dec(v_a_1214_);
lean_dec_ref(v_a_1213_);
lean_dec(v_a_1212_);
lean_dec_ref(v_a_1211_);
lean_dec_ref(v_p_1210_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer___redArg(){
_start:
{
lean_object* v___x_1218_; 
v___x_1218_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer___redArg___boxed(lean_object* v_a_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_Lake_Toml_trailing_parenthesizer___redArg();
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer(lean_object* v_p_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer___boxed(lean_object* v_p_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_Lake_Toml_trailing_parenthesizer(v_p_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_);
lean_dec(v_a_1232_);
lean_dec_ref(v_a_1231_);
lean_dec(v_a_1230_);
lean_dec_ref(v_a_1229_);
lean_dec_ref(v_p_1228_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing(lean_object* v_p_1235_){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1236_ = lean_alloc_closure((void*)(l_Lake_Toml_extendTrailingFn), 3, 1);
lean_closure_set(v___x_1236_, 0, v_p_1235_);
v___x_1237_ = l_Lean_Parser_epsilonInfo;
v___x_1238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
lean_ctor_set(v___x_1238_, 1, v___x_1236_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode(lean_object* v_p_1239_){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1240_ = lean_obj_once(&l_Lake_Toml_atom___closed__2, &l_Lake_Toml_atom___closed__2_once, _init_l_Lake_Toml_atom___closed__2);
v___x_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
lean_ctor_set(v___x_1241_, 1, v_p_1239_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter___redArg(lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_){
_start:
{
lean_object* v___x_1247_; lean_object* v_a_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1247_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg(v_a_1243_, v_a_1245_);
v_a_1248_ = lean_ctor_get(v___x_1247_, 0);
lean_inc(v_a_1248_);
lean_dec_ref(v___x_1247_);
v___x_1249_ = l_Lean_Syntax_getKind(v_a_1248_);
v___x_1250_ = l_Lean_PrettyPrinter_Formatter_formatterForKindUnsafe(v___x_1249_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter___redArg___boxed(lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Lake_Toml_dynamicNode_formatter___redArg(v_a_1251_, v_a_1252_, v_a_1253_, v_a_1254_);
lean_dec(v_a_1254_);
lean_dec_ref(v_a_1253_);
lean_dec(v_a_1252_);
lean_dec_ref(v_a_1251_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter(lean_object* v_x_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Lake_Toml_dynamicNode_formatter___redArg(v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter___boxed(lean_object* v_x_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_){
_start:
{
lean_object* v_res_1270_; 
v_res_1270_ = l_Lake_Toml_dynamicNode_formatter(v_x_1264_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_);
lean_dec(v_a_1268_);
lean_dec_ref(v_a_1267_);
lean_dec(v_a_1266_);
lean_dec_ref(v_a_1265_);
lean_dec_ref(v_x_1264_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg(lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v_stxTrav_1276_; lean_object* v_cur_1277_; lean_object* v___x_1278_; 
v___x_1274_ = lean_st_ref_get(v___y_1272_);
lean_dec(v___x_1274_);
v___x_1275_ = lean_st_ref_get(v___y_1271_);
v_stxTrav_1276_ = lean_ctor_get(v___x_1275_, 0);
lean_inc_ref(v_stxTrav_1276_);
lean_dec(v___x_1275_);
v_cur_1277_ = lean_ctor_get(v_stxTrav_1276_, 0);
lean_inc(v_cur_1277_);
lean_dec_ref(v_stxTrav_1276_);
v___x_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1278_, 0, v_cur_1277_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg___boxed(lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg(v___y_1279_, v___y_1280_);
lean_dec(v___y_1280_);
lean_dec(v___y_1279_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0(lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v___x_1288_; 
v___x_1288_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg(v___y_1284_, v___y_1286_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___boxed(lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0(v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer___redArg(lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_){
_start:
{
lean_object* v___x_1300_; lean_object* v_a_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1300_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg(v_a_1296_, v_a_1298_);
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc(v_a_1301_);
lean_dec_ref(v___x_1300_);
v___x_1302_ = l_Lean_Syntax_getKind(v_a_1301_);
v___x_1303_ = l_Lean_PrettyPrinter_Parenthesizer_parenthesizerForKindUnsafe(v___x_1302_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer___redArg___boxed(lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_){
_start:
{
lean_object* v_res_1309_; 
v_res_1309_ = l_Lake_Toml_dynamicNode_parenthesizer___redArg(v_a_1304_, v_a_1305_, v_a_1306_, v_a_1307_);
lean_dec(v_a_1307_);
lean_dec_ref(v_a_1306_);
lean_dec(v_a_1305_);
lean_dec_ref(v_a_1304_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer(lean_object* v_x_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_){
_start:
{
lean_object* v___x_1316_; 
v___x_1316_ = l_Lake_Toml_dynamicNode_parenthesizer___redArg(v_a_1311_, v_a_1312_, v_a_1313_, v_a_1314_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer___boxed(lean_object* v_x_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_Lake_Toml_dynamicNode_parenthesizer(v_x_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_);
lean_dec(v_a_1321_);
lean_dec_ref(v_a_1320_);
lean_dec(v_a_1319_);
lean_dec_ref(v_a_1318_);
lean_dec_ref(v_x_1317_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeFn(lean_object* v_f_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v_fn_1330_; lean_object* v___x_1331_; 
lean_inc_ref(v_f_1324_);
v___x_1327_ = lean_alloc_closure((void*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeFn), 3, 1);
lean_closure_set(v___x_1327_, 0, v_f_1324_);
v___x_1328_ = l_Lake_Toml_dynamicNode(v___x_1327_);
v___x_1329_ = lean_apply_1(v_f_1324_, v___x_1328_);
v_fn_1330_ = lean_ctor_get(v___x_1329_, 1);
lean_inc_ref(v_fn_1330_);
lean_dec_ref(v___x_1329_);
v___x_1331_ = lean_apply_2(v_fn_1330_, v_a_1325_, v_a_1326_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter___redArg(lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_){
_start:
{
lean_object* v___x_1337_; 
v___x_1337_ = l_Lake_Toml_dynamicNode_formatter___redArg(v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_);
return v___x_1337_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter___redArg___boxed(lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lake_Toml_recNode_formatter___redArg(v_a_1338_, v_a_1339_, v_a_1340_, v_a_1341_);
lean_dec(v_a_1341_);
lean_dec_ref(v_a_1340_);
lean_dec(v_a_1339_);
lean_dec_ref(v_a_1338_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter(lean_object* v_f_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_){
_start:
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Lake_Toml_dynamicNode_formatter___redArg(v_a_1345_, v_a_1346_, v_a_1347_, v_a_1348_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter___boxed(lean_object* v_f_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l_Lake_Toml_recNode_formatter(v_f_1351_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_);
lean_dec(v_a_1355_);
lean_dec_ref(v_a_1354_);
lean_dec(v_a_1353_);
lean_dec_ref(v_a_1352_);
lean_dec_ref(v_f_1351_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer___redArg(lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_){
_start:
{
lean_object* v___x_1363_; 
v___x_1363_ = l_Lake_Toml_dynamicNode_parenthesizer___redArg(v_a_1358_, v_a_1359_, v_a_1360_, v_a_1361_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer___redArg___boxed(lean_object* v_a_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_Lake_Toml_recNode_parenthesizer___redArg(v_a_1364_, v_a_1365_, v_a_1366_, v_a_1367_);
lean_dec(v_a_1367_);
lean_dec_ref(v_a_1366_);
lean_dec(v_a_1365_);
lean_dec_ref(v_a_1364_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer(lean_object* v_f_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_){
_start:
{
lean_object* v___x_1376_; 
v___x_1376_ = l_Lake_Toml_dynamicNode_parenthesizer___redArg(v_a_1371_, v_a_1372_, v_a_1373_, v_a_1374_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer___boxed(lean_object* v_f_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_Lake_Toml_recNode_parenthesizer(v_f_1377_, v_a_1378_, v_a_1379_, v_a_1380_, v_a_1381_);
lean_dec(v_a_1381_);
lean_dec_ref(v_a_1380_);
lean_dec(v_a_1379_);
lean_dec_ref(v_a_1378_);
lean_dec_ref(v_f_1377_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode(lean_object* v_f_1384_){
_start:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1385_ = lean_alloc_closure((void*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeFn), 3, 1);
lean_closure_set(v___x_1385_, 0, v_f_1384_);
v___x_1386_ = l_Lake_Toml_dynamicNode(v___x_1385_);
return v___x_1386_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go(lean_object* v_name_1387_, lean_object* v_kind_1388_, lean_object* v_f_1389_, uint8_t v_anonymous_1390_, lean_object* v_p_1391_){
_start:
{
uint8_t v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1392_ = 1;
lean_inc(v_kind_1388_);
v___x_1393_ = l_Lean_Parser_mkAntiquot(v_name_1387_, v_kind_1388_, v_anonymous_1390_, v___x_1392_);
v___x_1394_ = lean_apply_1(v_f_1389_, v_p_1391_);
v___x_1395_ = l_Lean_Parser_withAntiquot(v___x_1393_, v___x_1394_);
v___x_1396_ = l_Lean_Parser_withCache(v_kind_1388_, v___x_1395_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go___boxed(lean_object* v_name_1397_, lean_object* v_kind_1398_, lean_object* v_f_1399_, lean_object* v_anonymous_1400_, lean_object* v_p_1401_){
_start:
{
uint8_t v_anonymous_boxed_1402_; lean_object* v_res_1403_; 
v_anonymous_boxed_1402_ = lean_unbox(v_anonymous_1400_);
v_res_1403_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go(v_name_1397_, v_kind_1398_, v_f_1399_, v_anonymous_boxed_1402_, v_p_1401_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_formatter(lean_object* v_name_1404_, lean_object* v_kind_1405_, lean_object* v_f_1406_, uint8_t v_anonymous_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_){
_start:
{
uint8_t v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1413_ = 1;
v___x_1414_ = lean_box(v_anonymous_1407_);
v___x_1415_ = lean_box(v___x_1413_);
lean_inc(v_kind_1405_);
lean_inc_ref(v_name_1404_);
v___x_1416_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_1416_, 0, v_name_1404_);
lean_closure_set(v___x_1416_, 1, v_kind_1405_);
lean_closure_set(v___x_1416_, 2, v___x_1414_);
lean_closure_set(v___x_1416_, 3, v___x_1415_);
v___x_1417_ = lean_box(v_anonymous_1407_);
v___x_1418_ = lean_alloc_closure((void*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go___boxed), 5, 4);
lean_closure_set(v___x_1418_, 0, v_name_1404_);
lean_closure_set(v___x_1418_, 1, v_kind_1405_);
lean_closure_set(v___x_1418_, 2, v_f_1406_);
lean_closure_set(v___x_1418_, 3, v___x_1417_);
v___x_1419_ = lean_alloc_closure((void*)(l_Lake_Toml_recNode_formatter___boxed), 6, 1);
lean_closure_set(v___x_1419_, 0, v___x_1418_);
v___x_1420_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1416_, v___x_1419_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_);
return v___x_1420_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_formatter___boxed(lean_object* v_name_1421_, lean_object* v_kind_1422_, lean_object* v_f_1423_, lean_object* v_anonymous_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_){
_start:
{
uint8_t v_anonymous_boxed_1430_; lean_object* v_res_1431_; 
v_anonymous_boxed_1430_ = lean_unbox(v_anonymous_1424_);
v_res_1431_ = l_Lake_Toml_recNodeWithAntiquot_formatter(v_name_1421_, v_kind_1422_, v_f_1423_, v_anonymous_boxed_1430_, v_a_1425_, v_a_1426_, v_a_1427_, v_a_1428_);
lean_dec(v_a_1428_);
lean_dec_ref(v_a_1427_);
lean_dec(v_a_1426_);
lean_dec_ref(v_a_1425_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_parenthesizer(lean_object* v_name_1432_, lean_object* v_kind_1433_, lean_object* v_f_1434_, uint8_t v_anonymous_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_){
_start:
{
uint8_t v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1441_ = 1;
v___x_1442_ = lean_box(v_anonymous_1435_);
v___x_1443_ = lean_box(v___x_1441_);
lean_inc(v_kind_1433_);
lean_inc_ref(v_name_1432_);
v___x_1444_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_1444_, 0, v_name_1432_);
lean_closure_set(v___x_1444_, 1, v_kind_1433_);
lean_closure_set(v___x_1444_, 2, v___x_1442_);
lean_closure_set(v___x_1444_, 3, v___x_1443_);
v___x_1445_ = lean_box(v_anonymous_1435_);
v___x_1446_ = lean_alloc_closure((void*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go___boxed), 5, 4);
lean_closure_set(v___x_1446_, 0, v_name_1432_);
lean_closure_set(v___x_1446_, 1, v_kind_1433_);
lean_closure_set(v___x_1446_, 2, v_f_1434_);
lean_closure_set(v___x_1446_, 3, v___x_1445_);
v___x_1447_ = lean_alloc_closure((void*)(l_Lake_Toml_recNode_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_1447_, 0, v___x_1446_);
v___x_1448_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1444_, v___x_1447_, v_a_1436_, v_a_1437_, v_a_1438_, v_a_1439_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_parenthesizer___boxed(lean_object* v_name_1449_, lean_object* v_kind_1450_, lean_object* v_f_1451_, lean_object* v_anonymous_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_){
_start:
{
uint8_t v_anonymous_boxed_1458_; lean_object* v_res_1459_; 
v_anonymous_boxed_1458_ = lean_unbox(v_anonymous_1452_);
v_res_1459_ = l_Lake_Toml_recNodeWithAntiquot_parenthesizer(v_name_1449_, v_kind_1450_, v_f_1451_, v_anonymous_boxed_1458_, v_a_1453_, v_a_1454_, v_a_1455_, v_a_1456_);
lean_dec(v_a_1456_);
lean_dec_ref(v_a_1455_);
lean_dec(v_a_1454_);
lean_dec_ref(v_a_1453_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot(lean_object* v_name_1460_, lean_object* v_kind_1461_, lean_object* v_f_1462_, uint8_t v_anonymous_1463_){
_start:
{
uint8_t v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1464_ = 1;
lean_inc_n(v_kind_1461_, 2);
lean_inc_ref(v_name_1460_);
v___x_1465_ = l_Lean_Parser_mkAntiquot(v_name_1460_, v_kind_1461_, v_anonymous_1463_, v___x_1464_);
v___x_1466_ = lean_box(v_anonymous_1463_);
v___x_1467_ = lean_alloc_closure((void*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go___boxed), 5, 4);
lean_closure_set(v___x_1467_, 0, v_name_1460_);
lean_closure_set(v___x_1467_, 1, v_kind_1461_);
lean_closure_set(v___x_1467_, 2, v_f_1462_);
lean_closure_set(v___x_1467_, 3, v___x_1466_);
v___x_1468_ = l_Lake_Toml_recNode(v___x_1467_);
v___x_1469_ = l_Lean_Parser_withAntiquot(v___x_1465_, v___x_1468_);
v___x_1470_ = l_Lean_Parser_withCache(v_kind_1461_, v___x_1469_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot___boxed(lean_object* v_name_1471_, lean_object* v_kind_1472_, lean_object* v_f_1473_, lean_object* v_anonymous_1474_){
_start:
{
uint8_t v_anonymous_boxed_1475_; lean_object* v_res_1476_; 
v_anonymous_boxed_1475_ = lean_unbox(v_anonymous_1474_);
v_res_1476_ = l_Lake_Toml_recNodeWithAntiquot(v_name_1471_, v_kind_1472_, v_f_1473_, v_anonymous_boxed_1475_);
return v_res_1476_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__0(void){
_start:
{
lean_object* v___f_1477_; 
v___f_1477_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Formatter_visitArgs_spec__1___boxed), 5, 0);
return v___f_1477_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__1(void){
_start:
{
lean_object* v___x_1478_; 
v___x_1478_ = lean_mk_string_unchecked("sepBy", 5, 5);
return v___x_1478_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2(void){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1479_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__1, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__1_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__1);
v___x_1480_ = l_Lean_Name_mkStr1(v___x_1479_);
return v___x_1480_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3(void){
_start:
{
lean_object* v___x_1481_; 
v___x_1481_ = lean_mk_string_unchecked("*", 1, 1);
return v___x_1481_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4(void){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1482_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3);
v___x_1483_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter___boxed), 6, 1);
lean_closure_set(v___x_1483_, 0, v___x_1482_);
return v___x_1483_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5(void){
_start:
{
lean_object* v___f_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___f_1484_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__0, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__0_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__0);
v___x_1485_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkLinebreakBefore_formatter___boxed), 5, 0);
v___x_1486_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_1486_, 0, v___x_1485_);
lean_closure_set(v___x_1486_, 1, v___f_1484_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg(lean_object* v_p_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_){
_start:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1493_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2);
v___x_1494_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4);
v___x_1495_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed), 8, 3);
lean_closure_set(v___x_1495_, 0, v___x_1493_);
lean_closure_set(v___x_1495_, 1, v_p_1487_);
lean_closure_set(v___x_1495_, 2, v___x_1494_);
v___x_1496_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5);
v___x_1497_ = l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(v___x_1495_, v___x_1496_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___boxed(lean_object* v_p_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_){
_start:
{
lean_object* v_res_1504_; 
v_res_1504_ = l_Lake_Toml_sepByLinebreak_formatter___redArg(v_p_1498_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_);
lean_dec(v_a_1502_);
lean_dec_ref(v_a_1501_);
lean_dec(v_a_1500_);
lean_dec_ref(v_a_1499_);
return v_res_1504_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter(lean_object* v_p_1505_, uint8_t v_allowTrailingLinebreak_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = l_Lake_Toml_sepByLinebreak_formatter___redArg(v_p_1505_, v_a_1507_, v_a_1508_, v_a_1509_, v_a_1510_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter___boxed(lean_object* v_p_1513_, lean_object* v_allowTrailingLinebreak_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_){
_start:
{
uint8_t v_allowTrailingLinebreak_boxed_1520_; lean_object* v_res_1521_; 
v_allowTrailingLinebreak_boxed_1520_ = lean_unbox(v_allowTrailingLinebreak_1514_);
v_res_1521_ = l_Lake_Toml_sepByLinebreak_formatter(v_p_1513_, v_allowTrailingLinebreak_boxed_1520_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_);
lean_dec(v_a_1518_);
lean_dec_ref(v_a_1517_);
lean_dec(v_a_1516_);
lean_dec_ref(v_a_1515_);
return v_res_1521_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__0(void){
_start:
{
lean_object* v___f_1522_; 
v___f_1522_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Parenthesizer_visitArgs_spec__1___boxed), 5, 0);
return v___f_1522_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1(void){
_start:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1523_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3);
v___x_1524_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_1524_, 0, v___x_1523_);
return v___x_1524_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2(void){
_start:
{
lean_object* v___f_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___f_1525_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__0, &l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__0_once, _init_l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__0);
v___x_1526_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkLinebreakBefore_parenthesizer___boxed), 5, 0);
v___x_1527_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1527_, 0, v___x_1526_);
lean_closure_set(v___x_1527_, 1, v___f_1525_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg(lean_object* v_p_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1534_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2);
v___x_1535_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1, &l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1_once, _init_l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1);
v___x_1536_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1536_, 0, v___x_1534_);
lean_closure_set(v___x_1536_, 1, v_p_1528_);
lean_closure_set(v___x_1536_, 2, v___x_1535_);
v___x_1537_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2, &l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2_once, _init_l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2);
v___x_1538_ = l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(v___x_1536_, v___x_1537_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___boxed(lean_object* v_p_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_){
_start:
{
lean_object* v_res_1545_; 
v_res_1545_ = l_Lake_Toml_sepByLinebreak_parenthesizer___redArg(v_p_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_);
lean_dec(v_a_1543_);
lean_dec_ref(v_a_1542_);
lean_dec(v_a_1541_);
lean_dec_ref(v_a_1540_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer(lean_object* v_p_1546_, uint8_t v_allowTrailingLinebreak_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = l_Lake_Toml_sepByLinebreak_parenthesizer___redArg(v_p_1546_, v_a_1548_, v_a_1549_, v_a_1550_, v_a_1551_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___boxed(lean_object* v_p_1554_, lean_object* v_allowTrailingLinebreak_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_){
_start:
{
uint8_t v_allowTrailingLinebreak_boxed_1561_; lean_object* v_res_1562_; 
v_allowTrailingLinebreak_boxed_1561_ = lean_unbox(v_allowTrailingLinebreak_1555_);
v_res_1562_ = l_Lake_Toml_sepByLinebreak_parenthesizer(v_p_1554_, v_allowTrailingLinebreak_boxed_1561_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
lean_dec(v_a_1559_);
lean_dec_ref(v_a_1558_);
lean_dec(v_a_1557_);
lean_dec_ref(v_a_1556_);
return v_res_1562_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak___closed__0(void){
_start:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1563_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3);
v___x_1564_ = l_Lean_Parser_symbol(v___x_1563_);
return v___x_1564_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak___closed__1(void){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = lean_mk_string_unchecked("line break", 10, 10);
return v___x_1565_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak___closed__2(void){
_start:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1566_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak___closed__1, &l_Lake_Toml_sepByLinebreak___closed__1_once, _init_l_Lake_Toml_sepByLinebreak___closed__1);
v___x_1567_ = l_Lean_Parser_checkLinebreakBefore(v___x_1566_);
return v___x_1567_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak___closed__3(void){
_start:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1568_ = l_Lean_Parser_pushNone;
v___x_1569_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak___closed__2, &l_Lake_Toml_sepByLinebreak___closed__2_once, _init_l_Lake_Toml_sepByLinebreak___closed__2);
v___x_1570_ = l_Lean_Parser_andthen(v___x_1569_, v___x_1568_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak(lean_object* v_p_1571_, uint8_t v_allowTrailingLinebreak_1572_){
_start:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v_p_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1573_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2);
v___x_1574_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak___closed__0, &l_Lake_Toml_sepByLinebreak___closed__0_once, _init_l_Lake_Toml_sepByLinebreak___closed__0);
v_p_1575_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_1573_, v_p_1571_, v___x_1574_);
v___x_1576_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak___closed__3, &l_Lake_Toml_sepByLinebreak___closed__3_once, _init_l_Lake_Toml_sepByLinebreak___closed__3);
v___x_1577_ = l_Lean_Parser_sepByNoAntiquot(v_p_1575_, v___x_1576_, v_allowTrailingLinebreak_1572_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak___boxed(lean_object* v_p_1578_, lean_object* v_allowTrailingLinebreak_1579_){
_start:
{
uint8_t v_allowTrailingLinebreak_boxed_1580_; lean_object* v_res_1581_; 
v_allowTrailingLinebreak_boxed_1580_ = lean_unbox(v_allowTrailingLinebreak_1579_);
v_res_1581_ = l_Lake_Toml_sepByLinebreak(v_p_1578_, v_allowTrailingLinebreak_boxed_1580_);
return v_res_1581_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter___redArg(lean_object* v_p_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1588_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2);
v___x_1589_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4);
v___x_1590_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed), 8, 3);
lean_closure_set(v___x_1590_, 0, v___x_1588_);
lean_closure_set(v___x_1590_, 1, v_p_1582_);
lean_closure_set(v___x_1590_, 2, v___x_1589_);
v___x_1591_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5);
v___x_1592_ = l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(v___x_1590_, v___x_1591_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter___redArg___boxed(lean_object* v_p_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l_Lake_Toml_sepBy1Linebreak_formatter___redArg(v_p_1593_, v_a_1594_, v_a_1595_, v_a_1596_, v_a_1597_);
lean_dec(v_a_1597_);
lean_dec_ref(v_a_1596_);
lean_dec(v_a_1595_);
lean_dec_ref(v_a_1594_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter(lean_object* v_p_1600_, uint8_t v_allowTrailingLinebreak_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_){
_start:
{
lean_object* v___x_1607_; 
v___x_1607_ = l_Lake_Toml_sepBy1Linebreak_formatter___redArg(v_p_1600_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter___boxed(lean_object* v_p_1608_, lean_object* v_allowTrailingLinebreak_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_){
_start:
{
uint8_t v_allowTrailingLinebreak_boxed_1615_; lean_object* v_res_1616_; 
v_allowTrailingLinebreak_boxed_1615_ = lean_unbox(v_allowTrailingLinebreak_1609_);
v_res_1616_ = l_Lake_Toml_sepBy1Linebreak_formatter(v_p_1608_, v_allowTrailingLinebreak_boxed_1615_, v_a_1610_, v_a_1611_, v_a_1612_, v_a_1613_);
lean_dec(v_a_1613_);
lean_dec_ref(v_a_1612_);
lean_dec(v_a_1611_);
lean_dec_ref(v_a_1610_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer___redArg(lean_object* v_p_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_){
_start:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1623_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2);
v___x_1624_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1, &l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1_once, _init_l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1);
v___x_1625_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1625_, 0, v___x_1623_);
lean_closure_set(v___x_1625_, 1, v_p_1617_);
lean_closure_set(v___x_1625_, 2, v___x_1624_);
v___x_1626_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2, &l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2_once, _init_l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2);
v___x_1627_ = l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(v___x_1625_, v___x_1626_, v_a_1618_, v_a_1619_, v_a_1620_, v_a_1621_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer___redArg___boxed(lean_object* v_p_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_){
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_Lake_Toml_sepBy1Linebreak_parenthesizer___redArg(v_p_1628_, v_a_1629_, v_a_1630_, v_a_1631_, v_a_1632_);
lean_dec(v_a_1632_);
lean_dec_ref(v_a_1631_);
lean_dec(v_a_1630_);
lean_dec_ref(v_a_1629_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer(lean_object* v_p_1635_, uint8_t v_allowTrailingLinebreak_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_){
_start:
{
lean_object* v___x_1642_; 
v___x_1642_ = l_Lake_Toml_sepBy1Linebreak_parenthesizer___redArg(v_p_1635_, v_a_1637_, v_a_1638_, v_a_1639_, v_a_1640_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer___boxed(lean_object* v_p_1643_, lean_object* v_allowTrailingLinebreak_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_){
_start:
{
uint8_t v_allowTrailingLinebreak_boxed_1650_; lean_object* v_res_1651_; 
v_allowTrailingLinebreak_boxed_1650_ = lean_unbox(v_allowTrailingLinebreak_1644_);
v_res_1651_ = l_Lake_Toml_sepBy1Linebreak_parenthesizer(v_p_1643_, v_allowTrailingLinebreak_boxed_1650_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
lean_dec(v_a_1648_);
lean_dec_ref(v_a_1647_);
lean_dec(v_a_1646_);
lean_dec_ref(v_a_1645_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak(lean_object* v_p_1652_, uint8_t v_allowTrailingLinebreak_1653_){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v_p_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1654_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2);
v___x_1655_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak___closed__0, &l_Lake_Toml_sepByLinebreak___closed__0_once, _init_l_Lake_Toml_sepByLinebreak___closed__0);
v_p_1656_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_1654_, v_p_1652_, v___x_1655_);
v___x_1657_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak___closed__3, &l_Lake_Toml_sepByLinebreak___closed__3_once, _init_l_Lake_Toml_sepByLinebreak___closed__3);
v___x_1658_ = l_Lean_Parser_sepBy1NoAntiquot(v_p_1656_, v___x_1657_, v_allowTrailingLinebreak_1653_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak___boxed(lean_object* v_p_1659_, lean_object* v_allowTrailingLinebreak_1660_){
_start:
{
uint8_t v_allowTrailingLinebreak_boxed_1661_; lean_object* v_res_1662_; 
v_allowTrailingLinebreak_boxed_1661_ = lean_unbox(v_allowTrailingLinebreak_1660_);
v_res_1662_ = l_Lake_Toml_sepBy1Linebreak(v_p_1659_, v_allowTrailingLinebreak_boxed_1661_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuotFn(lean_object* v_p_1663_, lean_object* v_c_1664_, lean_object* v_s_1665_){
_start:
{
lean_object* v_toCacheableParserContext_1666_; lean_object* v_quotDepth_1667_; lean_object* v___x_1668_; uint8_t v___x_1669_; 
v_toCacheableParserContext_1666_ = lean_ctor_get(v_c_1664_, 2);
v_quotDepth_1667_ = lean_ctor_get(v_toCacheableParserContext_1666_, 1);
v___x_1668_ = lean_unsigned_to_nat(0u);
v___x_1669_ = lean_nat_dec_lt(v___x_1668_, v_quotDepth_1667_);
if (v___x_1669_ == 0)
{
lean_object* v___x_1670_; 
v___x_1670_ = lean_apply_2(v_p_1663_, v_c_1664_, v_s_1665_);
return v___x_1670_;
}
else
{
lean_dec_ref(v_c_1664_);
lean_dec_ref(v_p_1663_);
return v_s_1665_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_formatter(lean_object* v_p_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_){
_start:
{
lean_object* v___x_1677_; 
lean_inc(v_a_1675_);
lean_inc_ref(v_a_1674_);
lean_inc(v_a_1673_);
lean_inc_ref(v_a_1672_);
v___x_1677_ = lean_apply_5(v_p_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_, lean_box(0));
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_formatter___boxed(lean_object* v_p_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l_Lake_Toml_skipInsideQuot_formatter(v_p_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_);
lean_dec(v_a_1682_);
lean_dec_ref(v_a_1681_);
lean_dec(v_a_1680_);
lean_dec_ref(v_a_1679_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_parenthesizer(lean_object* v_p_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_){
_start:
{
lean_object* v___x_1691_; 
lean_inc(v_a_1689_);
lean_inc_ref(v_a_1688_);
lean_inc(v_a_1687_);
lean_inc_ref(v_a_1686_);
v___x_1691_ = lean_apply_5(v_p_1685_, v_a_1686_, v_a_1687_, v_a_1688_, v_a_1689_, lean_box(0));
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_parenthesizer___boxed(lean_object* v_p_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_, lean_object* v_a_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l_Lake_Toml_skipInsideQuot_parenthesizer(v_p_1692_, v_a_1693_, v_a_1694_, v_a_1695_, v_a_1696_);
lean_dec(v_a_1696_);
lean_dec_ref(v_a_1695_);
lean_dec(v_a_1694_);
lean_dec_ref(v_a_1693_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot(lean_object* v_p_1699_){
_start:
{
lean_object* v_info_1700_; lean_object* v_fn_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1709_; 
v_info_1700_ = lean_ctor_get(v_p_1699_, 0);
v_fn_1701_ = lean_ctor_get(v_p_1699_, 1);
v_isSharedCheck_1709_ = !lean_is_exclusive(v_p_1699_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1703_ = v_p_1699_;
v_isShared_1704_ = v_isSharedCheck_1709_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_fn_1701_);
lean_inc(v_info_1700_);
lean_dec(v_p_1699_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1709_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1705_; lean_object* v___x_1707_; 
v___x_1705_ = lean_alloc_closure((void*)(l_Lake_Toml_skipInsideQuotFn), 3, 1);
lean_closure_set(v___x_1705_, 0, v_fn_1701_);
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 1, v___x_1705_);
v___x_1707_ = v___x_1703_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_info_1700_);
lean_ctor_set(v_reuseFailAlloc_1708_, 1, v___x_1705_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
}
lean_object* runtime_initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Toml_ParserUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_Toml_instAndThenParserFn__lake = _init_l_Lake_Toml_instAndThenParserFn__lake();
lean_mark_persistent(l_Lake_Toml_instAndThenParserFn__lake);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Toml_ParserUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
lean_object* initialize_Lean_Parser(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Toml_ParserUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_ParserUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Toml_ParserUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Toml_ParserUtil(builtin);
}
#ifdef __cplusplus
}
#endif
