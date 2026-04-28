// Lean compiler output
// Module: Lean.Parser.Extra
// Imports: public import Lean.PrettyPrinter.Formatter public import Lean.PrettyPrinter.Parenthesizer import all Lean.Parser.Types import all Lean.Parser.Basic import all Lean.Parser.Extension public meta import Lean.Hygiene
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushWhitespace___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_getIndent(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_indent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushLine___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_tokenWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_node_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_node_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkNoImmediateColon_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Parenthesizer_visitArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_tokenWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkNoImmediateColon_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_identNoAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Syntax_Traverser_left(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_backtrackExceptionId;
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_visitArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushAlign___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkLinebreakBefore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkColEq_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_resetLeadWord___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Formatter_visitArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_identNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_setLhsPrec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_withAntiquotSuffixSplice_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_optionalNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquotSuffixSplice_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_rawIdentNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Parser_node(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_identNoAntiquot;
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_fill(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_charLitNoAntiquot;
lean_object* l_Lean_PrettyPrinter_Formatter_group(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_strLitNoAntiquot;
lean_object* l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___redArg();
lean_object* l_Lean_PrettyPrinter_Formatter_checkColGe_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_unicodeSymbolNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_numLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_concat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_numLitNoAntiquot;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
lean_object* l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_hygieneInfoNoAntiquot;
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkColGe(lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_pushNone;
lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object*);
lean_object* l_Lean_Parser_checkColEq(lean_object*);
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_withPosition(lean_object*);
lean_object* l_Lean_Parser_checkNoWsBefore(lean_object*);
lean_object* l_Lean_Parser_optionalNoAntiquot(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_registerAlias(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_registerAlias(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_fill___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_group___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_skip;
extern lean_object* l_Lean_Parser_hexnumNoAntiquot;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Parser_sepBy1(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PrettyPrinter_Formatter_charLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___redArg();
lean_object* l_Lean_PrettyPrinter_Formatter_scientificLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
extern lean_object* l_Lean_Parser_scientificLitNoAntiquot;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_manyNoAntiquot(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_visitArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1NoAntiquot(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_strLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_nameLitNoAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
extern lean_object* l_Lean_Parser_rawIdentNoAntiquot;
extern lean_object* l_Lean_Parser_nameLitNoAntiquot;
lean_object* l_Lean_Parser_notFollowedBy(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_unicodeSymbolNoAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Macro_resolveGlobalName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_termParser_formatter___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_termParser_formatter___redArg___closed__0;
static lean_once_cell_t l_Lean_Parser_termParser_formatter___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_termParser_formatter___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_commandParser_formatter___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_commandParser_formatter___redArg___closed__0;
static lean_once_cell_t l_Lean_Parser_commandParser_formatter___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_commandParser_formatter___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_atomic_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_atomic_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__2;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__3;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__4;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__5;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__6;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_formatter___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__7;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_formatter___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_antiquotExpr_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_antiquotExpr_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_antiquotExpr_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr_formatter___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__0;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__2;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__3;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__4;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__5;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__6;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__7;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__8;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__9;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_formatter___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__10;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__0;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_antiquotExpr_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr_parenthesizer___closed__0;
static lean_once_cell_t l_Lean_Parser_antiquotExpr_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_mkAntiquot_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__0;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__1;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__3;
static lean_once_cell_t l_Lean_Parser_mkAntiquot_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__2;
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__3;
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__4;
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__5;
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__6;
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice_formatter___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_sepByElemParser_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByElemParser_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_sepByElemParser_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByElemParser_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_sepByElemParser_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByElemParser_formatter___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__0;
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_formatter(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_parenthesizer(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_optional_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_optional_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_optional_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_optional_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_optional_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_optional_formatter___closed__2;
static lean_once_cell_t l_Lean_Parser_optional_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_optional_formatter___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_optional_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_optional_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_optional_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_optional_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_optional_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_optional_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_optional___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_optional___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_optional(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_many_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_many_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_many_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_many_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_many_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_many_formatter___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_many_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_many_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_many_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_many_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_many___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_many___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_many(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_ident_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_ident_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_ident_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_ident_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_ident_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_ident_formatter___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_ident_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ident_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_ident_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_ident_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_ident_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ident_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_ident___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_ident___closed__0;
static lean_once_cell_t l_Lean_Parser_ident___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_ident___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_ident;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__2;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__3;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__4;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__0;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__1;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__3;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__0;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__1;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__2;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__3;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__4;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__5;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__6;
static lean_once_cell_t l_Lean_Parser_identWithPartialTrailingDot___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identWithPartialTrailingDot___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot;
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_rawIdent_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_rawIdent_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_rawIdent___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_rawIdent___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent;
static lean_once_cell_t l_Lean_Parser_hygieneInfo_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hygieneInfo_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_hygieneInfo_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hygieneInfo_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_hygieneInfo_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hygieneInfo_formatter___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_hygieneInfo_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hygieneInfo_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_hygieneInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hygieneInfo___closed__0;
static lean_once_cell_t l_Lean_Parser_hygieneInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hygieneInfo___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_numLit_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_numLit_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_numLit_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_numLit_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_numLit_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_numLit_formatter___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_numLit_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_numLit_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_numLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_numLit___closed__0;
static lean_once_cell_t l_Lean_Parser_numLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_numLit___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_numLit;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_hexnum___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hexnum___closed__0;
static lean_once_cell_t l_Lean_Parser_hexnum___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hexnum___closed__1;
static lean_once_cell_t l_Lean_Parser_hexnum___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hexnum___closed__2;
static lean_once_cell_t l_Lean_Parser_hexnum___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hexnum___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_hexnum;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_scientificLit_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_scientificLit_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_scientificLit_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_scientificLit_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_scientificLit_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_scientificLit_formatter___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_scientificLit_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_scientificLit_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_scientificLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_scientificLit___closed__0;
static lean_once_cell_t l_Lean_Parser_scientificLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_scientificLit___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_strLit_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_strLit_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_strLit_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_strLit_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_strLit_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_strLit_formatter___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_strLit_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_strLit_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_strLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_strLit___closed__0;
static lean_once_cell_t l_Lean_Parser_strLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_strLit___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_strLit;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_charLit_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_charLit_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_charLit_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_charLit_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_charLit_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_charLit_formatter___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_charLit_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_charLit_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_charLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_charLit___closed__0;
static lean_once_cell_t l_Lean_Parser_charLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_charLit___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_charLit;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_nameLit_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_nameLit_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_nameLit_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_nameLit_formatter___closed__1;
static lean_once_cell_t l_Lean_Parser_nameLit_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_nameLit_formatter___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_nameLit_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_nameLit_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_nameLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_nameLit___closed__0;
static lean_once_cell_t l_Lean_Parser_nameLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_nameLit___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_group_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_group_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_group_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_group_formatter___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_group_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_group_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_group_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_group_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_group(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_many1Indent___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_many1Indent___closed__0;
static lean_once_cell_t l_Lean_Parser_many1Indent___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_many1Indent___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Parser_sepByIndent___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent___closed__0;
static lean_once_cell_t l_Lean_Parser_sepByIndent___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent___closed__1;
static lean_once_cell_t l_Lean_Parser_sepByIndent___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent___closed__2;
static lean_once_cell_t l_Lean_Parser_sepByIndent___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent___closed__3;
static lean_once_cell_t l_Lean_Parser_sepByIndent___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__0;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Parser_sepByIndent_formatter_spec__4(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Parser_sepByIndent_formatter_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Parser_sepByIndent_formatter_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_sepByIndent_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent_parenthesizer___closed__0;
static lean_once_cell_t l_Lean_Parser_sepByIndent_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_sepByIndent_parenthesizer___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol(lean_object*);
static lean_once_cell_t l_Lean_Parser_patternIgnore_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_patternIgnore_formatter___closed__0;
static lean_once_cell_t l_Lean_Parser_patternIgnore_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_patternIgnore_formatter___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_ppHardSpace_formatter___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ppHardSpace_formatter___redArg___closed__0;
static lean_once_cell_t l_Lean_ppHardSpace_formatter___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ppHardSpace_formatter___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppRealFill_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppRealFill_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppRealGroup_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppRealGroup_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppIndent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppIndent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ppDedent_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ppDedent_formatter___closed__0;
LEAN_EXPORT lean_object* l_Lean_ppDedent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppDedent_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppDedentIfGrouped_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppDedentIfGrouped_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__0;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__2;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__4;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__5;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__6;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__7;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__8;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__9;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__10;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__11;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__12;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__14;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__15;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__16;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__17;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__18;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__19;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__20;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__21;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__24;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__25;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__26;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__27;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__28;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__29;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__30;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__31;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__32;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__33;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__34;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__35;
static lean_once_cell_t l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__36;
LEAN_EXPORT lean_object* l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29____________;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__0;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__2;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__3;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__4;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__5;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__6;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__7;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__8;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__9;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__10;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__11;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__13;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__14;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__15;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__17;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__18;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__19;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__20;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__25;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__27;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__29;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__31;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__33;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__34;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__36;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__38;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__39;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__42;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__44;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__45;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__46;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__48;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__50;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__52;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__56;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__58;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__59;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__61;
static lean_once_cell_t l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62;
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__0_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__0_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__2_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__2_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__3_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__3_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__13_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__13_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__5_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__0_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__0_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__1_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__1_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__2_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__2_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__3_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__3_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__4_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__4_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__5_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__5_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__6_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__6_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__7_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__7_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__8_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__8_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__9_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__9_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__11_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__11_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__12_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__12_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__13_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__13_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__14_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__14_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__16_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__16_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__17_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__17_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__18_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__18_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__20_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__20_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__21_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__21_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__22_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__22_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__23_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__23_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__24_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__24_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__25_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__25_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__26_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__26_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__27_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__27_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__28_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__28_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__29_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__29_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__30_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__30_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__31_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__31_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__32_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__32_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__33_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__33_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__34_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__34_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__35_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__35_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__36_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__36_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__37_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__37_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__38_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__38_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__39_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__39_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__40_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__40_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__41_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__41_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__42_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__42_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__43_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__43_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__44_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__44_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__45_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__45_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__46_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__46_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__47_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__47_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__48_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__48_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__49_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__49_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__50_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__50_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__51_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__51_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__52_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__52_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__53_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__53_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__54_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__54_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__55_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__55_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__56_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__56_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__57_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__57_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__58_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__58_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__59_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__59_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__60_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__60_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__61_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__61_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__62_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__62_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__63_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__63_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Parser_Extra_0__Lean_initFn___closed__64_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___closed__64_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter___redArg(lean_object* v_n_1_, lean_object* v_p_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_8_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 5, 0);
v___x_9_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter___boxed), 7, 2);
lean_closure_set(v___x_9_, 0, v_n_1_);
lean_closure_set(v___x_9_, 1, v_p_2_);
v___x_10_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_setLhsPrec_formatter___boxed), 5, 0);
v___x_11_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_11_, 0, v___x_9_);
lean_closure_set(v___x_11_, 1, v___x_10_);
v___x_12_ = l_Lean_PrettyPrinter_Formatter_andthen_formatter(v___x_8_, v___x_11_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter___redArg___boxed(lean_object* v_n_13_, lean_object* v_p_14_, lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Parser_leadingNode_formatter___redArg(v_n_13_, v_p_14_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
lean_dec(v_a_18_);
lean_dec_ref(v_a_17_);
lean_dec(v_a_16_);
lean_dec_ref(v_a_15_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter(lean_object* v_n_21_, lean_object* v_prec_22_, lean_object* v_p_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Parser_leadingNode_formatter___redArg(v_n_21_, v_p_23_, v_a_24_, v_a_25_, v_a_26_, v_a_27_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object* v_n_30_, lean_object* v_prec_31_, lean_object* v_p_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_Parser_leadingNode_formatter(v_n_30_, v_prec_31_, v_p_32_, v_a_33_, v_a_34_, v_a_35_, v_a_36_);
lean_dec(v_a_36_);
lean_dec_ref(v_a_35_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
lean_dec(v_prec_31_);
return v_res_38_;
}
}
static lean_object* _init_l_Lean_Parser_termParser_formatter___redArg___closed__0(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_Parser_termParser_formatter___redArg___closed__1(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_obj_once(&l_Lean_Parser_termParser_formatter___redArg___closed__0, &l_Lean_Parser_termParser_formatter___redArg___closed__0_once, _init_l_Lean_Parser_termParser_formatter___redArg___closed__0);
v___x_41_ = l_Lean_Name_mkStr1(v___x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter___redArg(lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_obj_once(&l_Lean_Parser_termParser_formatter___redArg___closed__1, &l_Lean_Parser_termParser_formatter___redArg___closed__1_once, _init_l_Lean_Parser_termParser_formatter___redArg___closed__1);
v___x_48_ = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(v___x_47_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter___redArg___boxed(lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_Parser_termParser_formatter___redArg(v_a_49_, v_a_50_, v_a_51_, v_a_52_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter(lean_object* v_prec_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lean_Parser_termParser_formatter___redArg(v_a_56_, v_a_57_, v_a_58_, v_a_59_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_formatter___boxed(lean_object* v_prec_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lean_Parser_termParser_formatter(v_prec_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
lean_dec(v_a_66_);
lean_dec_ref(v_a_65_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec(v_prec_62_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_parenthesizer(lean_object* v_prec_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_obj_once(&l_Lean_Parser_termParser_formatter___redArg___closed__1, &l_Lean_Parser_termParser_formatter___redArg___closed__1_once, _init_l_Lean_Parser_termParser_formatter___redArg___closed__1);
v___x_76_ = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(v___x_75_, v_prec_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser_parenthesizer___boxed(lean_object* v_prec_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lean_Parser_termParser_parenthesizer(v_prec_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
lean_dec(v_a_81_);
lean_dec_ref(v_a_80_);
lean_dec(v_a_79_);
lean_dec_ref(v_a_78_);
return v_res_83_;
}
}
static lean_object* _init_l_Lean_Parser_commandParser_formatter___redArg___closed__0(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lean_mk_string_unchecked("command", 7, 7);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_Parser_commandParser_formatter___redArg___closed__1(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_obj_once(&l_Lean_Parser_commandParser_formatter___redArg___closed__0, &l_Lean_Parser_commandParser_formatter___redArg___closed__0_once, _init_l_Lean_Parser_commandParser_formatter___redArg___closed__0);
v___x_86_ = l_Lean_Name_mkStr1(v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter___redArg(lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_obj_once(&l_Lean_Parser_commandParser_formatter___redArg___closed__1, &l_Lean_Parser_commandParser_formatter___redArg___closed__1_once, _init_l_Lean_Parser_commandParser_formatter___redArg___closed__1);
v___x_93_ = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(v___x_92_, v_a_87_, v_a_88_, v_a_89_, v_a_90_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter___redArg___boxed(lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_Parser_commandParser_formatter___redArg(v_a_94_, v_a_95_, v_a_96_, v_a_97_);
lean_dec(v_a_97_);
lean_dec_ref(v_a_96_);
lean_dec(v_a_95_);
lean_dec_ref(v_a_94_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter(lean_object* v_rbp_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lean_Parser_commandParser_formatter___redArg(v_a_101_, v_a_102_, v_a_103_, v_a_104_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_formatter___boxed(lean_object* v_rbp_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_Parser_commandParser_formatter(v_rbp_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_);
lean_dec(v_a_111_);
lean_dec_ref(v_a_110_);
lean_dec(v_a_109_);
lean_dec_ref(v_a_108_);
lean_dec(v_rbp_107_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_parenthesizer(lean_object* v_rbp_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = lean_obj_once(&l_Lean_Parser_commandParser_formatter___redArg___closed__1, &l_Lean_Parser_commandParser_formatter___redArg___closed__1_once, _init_l_Lean_Parser_commandParser_formatter___redArg___closed__1);
v___x_121_ = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(v___x_120_, v_rbp_114_, v_a_115_, v_a_116_, v_a_117_, v_a_118_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_commandParser_parenthesizer___boxed(lean_object* v_rbp_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l_Lean_Parser_commandParser_parenthesizer(v_rbp_122_, v_a_123_, v_a_124_, v_a_125_, v_a_126_);
lean_dec(v_a_126_);
lean_dec_ref(v_a_125_);
lean_dec(v_a_124_);
lean_dec_ref(v_a_123_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_atomic_formatter(lean_object* v_p_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_){
_start:
{
lean_object* v___x_135_; 
lean_inc(v_a_133_);
lean_inc_ref(v_a_132_);
lean_inc(v_a_131_);
lean_inc_ref(v_a_130_);
v___x_135_ = lean_apply_5(v_p_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, lean_box(0));
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_atomic_formatter___boxed(lean_object* v_p_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_Parser_atomic_formatter(v_p_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
lean_dec(v_a_140_);
lean_dec_ref(v_a_139_);
lean_dec(v_a_138_);
lean_dec_ref(v_a_137_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter___redArg(lean_object* v_p_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_149_; 
lean_inc(v_a_147_);
lean_inc_ref(v_a_146_);
lean_inc(v_a_145_);
lean_inc_ref(v_a_144_);
v___x_149_ = lean_apply_5(v_p_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, lean_box(0));
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter___redArg___boxed(lean_object* v_p_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lean_Parser_setExpected_formatter___redArg(v_p_150_, v_a_151_, v_a_152_, v_a_153_, v_a_154_);
lean_dec(v_a_154_);
lean_dec_ref(v_a_153_);
lean_dec(v_a_152_);
lean_dec_ref(v_a_151_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter(lean_object* v_expected_157_, lean_object* v_p_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v___x_164_; 
lean_inc(v_a_162_);
lean_inc_ref(v_a_161_);
lean_inc(v_a_160_);
lean_inc_ref(v_a_159_);
v___x_164_ = lean_apply_5(v_p_158_, v_a_159_, v_a_160_, v_a_161_, v_a_162_, lean_box(0));
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_formatter___boxed(lean_object* v_expected_165_, lean_object* v_p_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_Parser_setExpected_formatter(v_expected_165_, v_p_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_);
lean_dec(v_a_170_);
lean_dec_ref(v_a_169_);
lean_dec(v_a_168_);
lean_dec_ref(v_a_167_);
lean_dec(v_expected_165_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_formatter(lean_object* v_sym_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter___boxed), 6, 1);
lean_closure_set(v___x_179_, 0, v_sym_173_);
v___x_180_ = l_Lean_PrettyPrinter_Formatter_tokenWithAntiquot_formatter(v___x_179_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object* v_sym_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_Parser_symbol_formatter(v_sym_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_);
lean_dec(v_a_185_);
lean_dec_ref(v_a_184_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter___redArg(lean_object* v_p_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v___x_194_; 
lean_inc(v_a_192_);
lean_inc_ref(v_a_191_);
lean_inc(v_a_190_);
lean_inc_ref(v_a_189_);
v___x_194_ = lean_apply_5(v_p_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, lean_box(0));
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter___redArg___boxed(lean_object* v_p_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_Parser_adaptCacheableContext_formatter___redArg(v_p_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
lean_dec(v_a_199_);
lean_dec_ref(v_a_198_);
lean_dec(v_a_197_);
lean_dec_ref(v_a_196_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter(lean_object* v_f_202_, lean_object* v_p_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_){
_start:
{
lean_object* v___x_209_; 
lean_inc(v_a_207_);
lean_inc_ref(v_a_206_);
lean_inc(v_a_205_);
lean_inc_ref(v_a_204_);
v___x_209_ = lean_apply_5(v_p_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, lean_box(0));
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_formatter___boxed(lean_object* v_f_210_, lean_object* v_p_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lean_Parser_adaptCacheableContext_formatter(v_f_210_, v_p_211_, v_a_212_, v_a_213_, v_a_214_, v_a_215_);
lean_dec(v_a_215_);
lean_dec_ref(v_a_214_);
lean_dec(v_a_213_);
lean_dec_ref(v_a_212_);
lean_dec_ref(v_f_210_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___redArg(lean_object* v_p_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_){
_start:
{
lean_object* v___x_224_; 
lean_inc(v_a_222_);
lean_inc_ref(v_a_221_);
lean_inc(v_a_220_);
lean_inc_ref(v_a_219_);
v___x_224_ = lean_apply_5(v_p_218_, v_a_219_, v_a_220_, v_a_221_, v_a_222_, lean_box(0));
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___redArg___boxed(lean_object* v_p_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___redArg(v_p_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
lean_dec(v_a_229_);
lean_dec_ref(v_a_228_);
lean_dec(v_a_227_);
lean_dec_ref(v_a_226_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter(lean_object* v_i_232_, lean_object* v_p_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v___x_239_; 
lean_inc(v_a_237_);
lean_inc_ref(v_a_236_);
lean_inc(v_a_235_);
lean_inc_ref(v_a_234_);
v___x_239_ = lean_apply_5(v_p_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_, lean_box(0));
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter___boxed(lean_object* v_i_240_, lean_object* v_p_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_formatter(v_i_240_, v_p_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_i_240_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_formatter(lean_object* v_p_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
lean_object* v___x_254_; 
lean_inc(v_a_252_);
lean_inc_ref(v_a_251_);
lean_inc(v_a_250_);
lean_inc_ref(v_a_249_);
v___x_254_ = lean_apply_5(v_p_248_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, lean_box(0));
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_formatter___boxed(lean_object* v_p_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_Parser_decQuotDepth_formatter(v_p_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_);
lean_dec(v_a_259_);
lean_dec_ref(v_a_258_);
lean_dec(v_a_257_);
lean_dec_ref(v_a_256_);
return v_res_261_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__0(void){
_start:
{
lean_object* v___f_262_; 
v___f_262_ = lean_alloc_closure((void*)(l_Lean_Parser_termParser_formatter___redArg___boxed), 5, 0);
return v___f_262_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__1(void){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = lean_mk_string_unchecked("antiquotNestedExpr", 18, 18);
return v___x_263_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__2(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__1, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__1_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__1);
v___x_265_ = l_Lean_Name_mkStr1(v___x_264_);
return v___x_265_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__3(void){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = lean_mk_string_unchecked("(", 1, 1);
return v___x_266_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__4(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__3, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__3_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__3);
v___x_268_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter___boxed), 6, 1);
lean_closure_set(v___x_268_, 0, v___x_267_);
return v___x_268_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__5(void){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = lean_mk_string_unchecked(")", 1, 1);
return v___x_269_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__6(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__5, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__5_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__5);
v___x_271_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter___boxed), 6, 1);
lean_closure_set(v___x_271_, 0, v___x_270_);
return v___x_271_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__7(void){
_start:
{
lean_object* v___x_272_; lean_object* v___f_273_; lean_object* v___x_274_; 
v___x_272_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__6, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__6_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__6);
v___f_273_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__0, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__0_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__0);
v___x_274_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_274_, 0, v___f_273_);
lean_closure_set(v___x_274_, 1, v___x_272_);
return v___x_274_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__8(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_275_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__7, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__7_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__7);
v___x_276_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__4, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__4_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__4);
v___x_277_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_277_, 0, v___x_276_);
lean_closure_set(v___x_277_, 1, v___x_275_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_formatter(lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_283_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__2, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__2_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__2);
v___x_284_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__8, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__8_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__8);
v___x_285_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_283_, v___x_284_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___boxed(lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lean_Parser_antiquotNestedExpr_formatter(v_a_286_, v_a_287_, v_a_288_, v_a_289_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec(v_a_287_);
lean_dec_ref(v_a_286_);
return v_res_291_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0(void){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_292_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1(void){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_293_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2(void){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = lean_mk_string_unchecked("formatter", 9, 9);
return v___x_294_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_295_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2);
v___x_296_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__1, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__1_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__1);
v___x_297_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_298_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_299_ = l_Lean_Name_mkStr4(v___x_298_, v___x_297_, v___x_296_, v___x_295_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15(){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_301_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_302_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__2, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__2_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__2);
v___x_303_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__3);
v___x_304_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_formatter___boxed), 5, 0);
v___x_305_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_301_, v___x_302_, v___x_303_, v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___boxed(lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15();
return v_res_307_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_formatter___closed__0(void){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = lean_mk_string_unchecked("_", 1, 1);
return v___x_308_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_formatter___closed__1(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = lean_obj_once(&l_Lean_Parser_antiquotExpr_formatter___closed__0, &l_Lean_Parser_antiquotExpr_formatter___closed__0_once, _init_l_Lean_Parser_antiquotExpr_formatter___closed__0);
v___x_310_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter___boxed), 6, 1);
lean_closure_set(v___x_310_, 0, v___x_309_);
return v___x_310_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_formatter___closed__2(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_311_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_formatter___boxed), 5, 0);
v___x_312_ = lean_obj_once(&l_Lean_Parser_antiquotExpr_formatter___closed__1, &l_Lean_Parser_antiquotExpr_formatter___closed__1_once, _init_l_Lean_Parser_antiquotExpr_formatter___closed__1);
v___x_313_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_313_, 0, v___x_312_);
lean_closure_set(v___x_313_, 1, v___x_311_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_formatter(lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_319_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_identNoAntiquot_formatter___boxed), 5, 0);
v___x_320_ = lean_obj_once(&l_Lean_Parser_antiquotExpr_formatter___closed__2, &l_Lean_Parser_antiquotExpr_formatter___closed__2_once, _init_l_Lean_Parser_antiquotExpr_formatter___closed__2);
v___x_321_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_319_, v___x_320_, v_a_314_, v_a_315_, v_a_316_, v_a_317_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_formatter___boxed(lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Parser_antiquotExpr_formatter(v_a_322_, v_a_323_, v_a_324_, v_a_325_);
lean_dec(v_a_325_);
lean_dec_ref(v_a_324_);
lean_dec(v_a_323_);
lean_dec_ref(v_a_322_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg___lam__0(lean_object* v_sym_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(v_sym_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg___lam__0___boxed(lean_object* v_sym_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lean_Parser_nonReservedSymbol_formatter___redArg___lam__0(v_sym_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg(lean_object* v_sym_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
lean_object* v___f_348_; lean_object* v___x_349_; 
v___f_348_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_348_, 0, v_sym_342_);
v___x_349_ = l_Lean_PrettyPrinter_Formatter_tokenWithAntiquot_formatter(v___f_348_, v_a_343_, v_a_344_, v_a_345_, v_a_346_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___redArg___boxed(lean_object* v_sym_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_Parser_nonReservedSymbol_formatter___redArg(v_sym_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_);
lean_dec(v_a_354_);
lean_dec_ref(v_a_353_);
lean_dec(v_a_352_);
lean_dec_ref(v_a_351_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter(lean_object* v_sym_357_, uint8_t v_includeIdent_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_Parser_nonReservedSymbol_formatter___redArg(v_sym_357_, v_a_359_, v_a_360_, v_a_361_, v_a_362_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object* v_sym_365_, lean_object* v_includeIdent_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
uint8_t v_includeIdent_boxed_372_; lean_object* v_res_373_; 
v_includeIdent_boxed_372_ = lean_unbox(v_includeIdent_366_);
v_res_373_ = l_Lean_Parser_nonReservedSymbol_formatter(v_sym_365_, v_includeIdent_boxed_372_, v_a_367_, v_a_368_, v_a_369_, v_a_370_);
lean_dec(v_a_370_);
lean_dec_ref(v_a_369_);
lean_dec(v_a_368_);
lean_dec_ref(v_a_367_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__0(lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l_Lean_PrettyPrinter_Formatter_resetLeadWord___redArg(v___y_375_, v___y_377_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__0___boxed(lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Parser_mkAntiquot_formatter___lam__0(v___y_380_, v___y_381_, v___y_382_, v___y_383_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
return v_res_385_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__0(void){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = lean_mk_string_unchecked("antiquotName", 12, 12);
return v___x_386_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__0, &l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__0_once, _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__0);
v___x_388_ = l_Lean_Name_mkStr1(v___x_387_);
return v___x_388_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2(void){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = lean_mk_string_unchecked(":", 1, 1);
return v___x_389_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2, &l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2_once, _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2);
v___x_391_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter___boxed), 6, 1);
lean_closure_set(v___x_391_, 0, v___x_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1(uint8_t v_anonymous_392_, lean_object* v_name_393_, lean_object* v___f_394_, lean_object* v___f_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
if (v_anonymous_392_ == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec_ref(v___f_395_);
v___x_401_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1, &l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1_once, _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1);
v___x_402_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3, &l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3_once, _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3);
v___x_403_ = lean_box(v_anonymous_392_);
v___x_404_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(v___x_404_, 0, v_name_393_);
lean_closure_set(v___x_404_, 1, v___x_403_);
v___x_405_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_405_, 0, v___x_402_);
lean_closure_set(v___x_405_, 1, v___x_404_);
v___x_406_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_406_, 0, v___f_394_);
lean_closure_set(v___x_406_, 1, v___x_405_);
v___x_407_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_401_, v___x_406_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
return v___x_407_;
}
else
{
lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_408_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1, &l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1_once, _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1);
v___x_409_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3, &l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3_once, _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__3);
v___x_410_ = 0;
v___x_411_ = lean_box(v___x_410_);
v___x_412_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(v___x_412_, 0, v_name_393_);
lean_closure_set(v___x_412_, 1, v___x_411_);
v___x_413_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_413_, 0, v___x_409_);
lean_closure_set(v___x_413_, 1, v___x_412_);
v___x_414_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_414_, 0, v___f_394_);
lean_closure_set(v___x_414_, 1, v___x_413_);
v___x_415_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter___boxed), 7, 2);
lean_closure_set(v___x_415_, 0, v___x_408_);
lean_closure_set(v___x_415_, 1, v___x_414_);
v___x_416_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkNoImmediateColon_formatter___boxed), 5, 0);
v___x_417_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_417_, 0, v___x_416_);
lean_closure_set(v___x_417_, 1, v___f_395_);
v___x_418_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_415_, v___x_417_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
return v___x_418_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__1___boxed(lean_object* v_anonymous_419_, lean_object* v_name_420_, lean_object* v___f_421_, lean_object* v___f_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
uint8_t v_anonymous_boxed_428_; lean_object* v_res_429_; 
v_anonymous_boxed_428_ = lean_unbox(v_anonymous_419_);
v_res_429_ = l_Lean_Parser_mkAntiquot_formatter___lam__1(v_anonymous_boxed_428_, v_name_420_, v___f_421_, v___f_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__2(lean_object* v___x_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_Lean_Parser_symbol_formatter(v___x_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__2___boxed(lean_object* v___x_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_Parser_mkAntiquot_formatter___lam__2(v___x_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__3(lean_object* v___f_444_, lean_object* v___x_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Lean_PrettyPrinter_Formatter_andthen_formatter(v___f_444_, v___x_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___lam__3___boxed(lean_object* v___f_452_, lean_object* v___x_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_Lean_Parser_mkAntiquot_formatter___lam__3(v___f_452_, v___x_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
return v_res_459_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__0(void){
_start:
{
lean_object* v___f_460_; 
v___f_460_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___lam__0___boxed), 5, 0);
return v___f_460_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__1(void){
_start:
{
lean_object* v___f_461_; 
v___f_461_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Formatter_visitArgs_spec__1___boxed), 5, 0);
return v___f_461_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__2(void){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = lean_mk_string_unchecked("antiquot", 8, 8);
return v___x_462_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__3(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__2, &l_Lean_Parser_mkAntiquot_formatter___closed__2_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__2);
v___x_464_ = l_Lean_Name_mkStr1(v___x_463_);
return v___x_464_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__4(void){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = lean_mk_string_unchecked("$", 1, 1);
return v___x_465_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__5(void){
_start:
{
lean_object* v___x_466_; lean_object* v___f_467_; 
v___x_466_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__4, &l_Lean_Parser_mkAntiquot_formatter___closed__4_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__4);
v___f_467_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___lam__2___boxed), 6, 1);
lean_closure_set(v___f_467_, 0, v___x_466_);
return v___f_467_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__6(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__4, &l_Lean_Parser_mkAntiquot_formatter___closed__4_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__4);
v___x_469_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter___boxed), 6, 1);
lean_closure_set(v___x_469_, 0, v___x_468_);
return v___x_469_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__7(void){
_start:
{
lean_object* v___x_470_; lean_object* v___f_471_; lean_object* v___x_472_; 
v___x_470_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__6, &l_Lean_Parser_mkAntiquot_formatter___closed__6_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__6);
v___f_471_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__0, &l_Lean_Parser_mkAntiquot_formatter___closed__0_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__0);
v___x_472_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_472_, 0, v___f_471_);
lean_closure_set(v___x_472_, 1, v___x_470_);
return v___x_472_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__8(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__7, &l_Lean_Parser_mkAntiquot_formatter___closed__7_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__7);
v___x_474_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter___boxed), 6, 1);
lean_closure_set(v___x_474_, 0, v___x_473_);
return v___x_474_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__9(void){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = lean_mk_string_unchecked("pseudo", 6, 6);
return v___x_475_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__10(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__9, &l_Lean_Parser_mkAntiquot_formatter___closed__9_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__9);
v___x_477_ = l_Lean_Name_mkStr1(v___x_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter(lean_object* v_name_478_, lean_object* v_kind_479_, uint8_t v_anonymous_480_, uint8_t v_isPseudoKind_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
lean_object* v___f_487_; lean_object* v___f_488_; lean_object* v___x_489_; lean_object* v___y_490_; lean_object* v___y_492_; 
v___f_487_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__0, &l_Lean_Parser_mkAntiquot_formatter___closed__0_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__0);
v___f_488_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__1, &l_Lean_Parser_mkAntiquot_formatter___closed__1_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__1);
v___x_489_ = lean_box(v_anonymous_480_);
v___y_490_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___lam__1___boxed), 9, 4);
lean_closure_set(v___y_490_, 0, v___x_489_);
lean_closure_set(v___y_490_, 1, v_name_478_);
lean_closure_set(v___y_490_, 2, v___f_487_);
lean_closure_set(v___y_490_, 3, v___f_488_);
if (v_isPseudoKind_481_ == 0)
{
lean_object* v___x_504_; 
v___x_504_ = lean_box(0);
v___y_492_ = v___x_504_;
goto v___jp_491_;
}
else
{
lean_object* v___x_505_; 
v___x_505_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__10, &l_Lean_Parser_mkAntiquot_formatter___closed__10_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__10);
v___y_492_ = v___x_505_;
goto v___jp_491_;
}
v___jp_491_:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v_kind_495_; lean_object* v___f_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___f_502_; lean_object* v___x_503_; 
lean_inc(v___y_492_);
v___x_493_ = l_Lean_Name_append(v_kind_479_, v___y_492_);
v___x_494_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__3, &l_Lean_Parser_mkAntiquot_formatter___closed__3_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__3);
v_kind_495_ = l_Lean_Name_append(v___x_493_, v___x_494_);
v___f_496_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__5, &l_Lean_Parser_mkAntiquot_formatter___closed__5_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__5);
v___x_497_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__8, &l_Lean_Parser_mkAntiquot_formatter___closed__8_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__8);
v___x_498_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotExpr_formatter___boxed), 5, 0);
v___x_499_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_499_, 0, v___x_498_);
lean_closure_set(v___x_499_, 1, v___y_490_);
v___x_500_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_500_, 0, v___f_487_);
lean_closure_set(v___x_500_, 1, v___x_499_);
v___x_501_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_501_, 0, v___x_497_);
lean_closure_set(v___x_501_, 1, v___x_500_);
v___f_502_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___lam__3___boxed), 7, 2);
lean_closure_set(v___f_502_, 0, v___f_496_);
lean_closure_set(v___f_502_, 1, v___x_501_);
v___x_503_ = l_Lean_Parser_leadingNode_formatter___redArg(v_kind_495_, v___f_502_, v_a_482_, v_a_483_, v_a_484_, v_a_485_);
return v___x_503_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object* v_name_506_, lean_object* v_kind_507_, lean_object* v_anonymous_508_, lean_object* v_isPseudoKind_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_){
_start:
{
uint8_t v_anonymous_boxed_515_; uint8_t v_isPseudoKind_boxed_516_; lean_object* v_res_517_; 
v_anonymous_boxed_515_ = lean_unbox(v_anonymous_508_);
v_isPseudoKind_boxed_516_ = lean_unbox(v_isPseudoKind_509_);
v_res_517_ = l_Lean_Parser_mkAntiquot_formatter(v_name_506_, v_kind_507_, v_anonymous_boxed_515_, v_isPseudoKind_boxed_516_, v_a_510_, v_a_511_, v_a_512_, v_a_513_);
lean_dec(v_a_513_);
lean_dec_ref(v_a_512_);
lean_dec(v_a_511_);
lean_dec_ref(v_a_510_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer___redArg(lean_object* v_p_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
lean_object* v___x_524_; 
lean_inc(v_a_522_);
lean_inc_ref(v_a_521_);
lean_inc(v_a_520_);
lean_inc_ref(v_a_519_);
v___x_524_ = lean_apply_5(v_p_518_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, lean_box(0));
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer___redArg___boxed(lean_object* v_p_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lean_Parser_setExpected_parenthesizer___redArg(v_p_525_, v_a_526_, v_a_527_, v_a_528_, v_a_529_);
lean_dec(v_a_529_);
lean_dec_ref(v_a_528_);
lean_dec(v_a_527_);
lean_dec_ref(v_a_526_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer(lean_object* v_expected_532_, lean_object* v_p_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_){
_start:
{
lean_object* v___x_539_; 
lean_inc(v_a_537_);
lean_inc_ref(v_a_536_);
lean_inc(v_a_535_);
lean_inc_ref(v_a_534_);
v___x_539_ = lean_apply_5(v_p_533_, v_a_534_, v_a_535_, v_a_536_, v_a_537_, lean_box(0));
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected_parenthesizer___boxed(lean_object* v_expected_540_, lean_object* v_p_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lean_Parser_setExpected_parenthesizer(v_expected_540_, v_p_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_);
lean_dec(v_a_545_);
lean_dec_ref(v_a_544_);
lean_dec(v_a_543_);
lean_dec_ref(v_a_542_);
lean_dec(v_expected_540_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_parenthesizer(lean_object* v_sym_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_554_, 0, v_sym_548_);
v___x_555_ = l_Lean_PrettyPrinter_Parenthesizer_tokenWithAntiquot_parenthesizer(v___x_554_, v_a_549_, v_a_550_, v_a_551_, v_a_552_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object* v_sym_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lean_Parser_symbol_parenthesizer(v_sym_556_, v_a_557_, v_a_558_, v_a_559_, v_a_560_);
lean_dec(v_a_560_);
lean_dec_ref(v_a_559_);
lean_dec(v_a_558_);
lean_dec_ref(v_a_557_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer___redArg(lean_object* v_p_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_){
_start:
{
lean_object* v___x_569_; 
lean_inc(v_a_567_);
lean_inc_ref(v_a_566_);
lean_inc(v_a_565_);
lean_inc_ref(v_a_564_);
v___x_569_ = lean_apply_5(v_p_563_, v_a_564_, v_a_565_, v_a_566_, v_a_567_, lean_box(0));
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer___redArg___boxed(lean_object* v_p_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lean_Parser_adaptCacheableContext_parenthesizer___redArg(v_p_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_);
lean_dec(v_a_574_);
lean_dec_ref(v_a_573_);
lean_dec(v_a_572_);
lean_dec_ref(v_a_571_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer(lean_object* v_f_577_, lean_object* v_p_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v___x_584_; 
lean_inc(v_a_582_);
lean_inc_ref(v_a_581_);
lean_inc(v_a_580_);
lean_inc_ref(v_a_579_);
v___x_584_ = lean_apply_5(v_p_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, lean_box(0));
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext_parenthesizer___boxed(lean_object* v_f_585_, lean_object* v_p_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_Parser_adaptCacheableContext_parenthesizer(v_f_585_, v_p_586_, v_a_587_, v_a_588_, v_a_589_, v_a_590_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_589_);
lean_dec(v_a_588_);
lean_dec_ref(v_a_587_);
lean_dec_ref(v_f_585_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___redArg(lean_object* v_p_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_){
_start:
{
lean_object* v___x_599_; 
lean_inc(v_a_597_);
lean_inc_ref(v_a_596_);
lean_inc(v_a_595_);
lean_inc_ref(v_a_594_);
v___x_599_ = lean_apply_5(v_p_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, lean_box(0));
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___redArg___boxed(lean_object* v_p_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___redArg(v_p_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_);
lean_dec(v_a_604_);
lean_dec_ref(v_a_603_);
lean_dec(v_a_602_);
lean_dec_ref(v_a_601_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer(lean_object* v_i_607_, lean_object* v_p_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_){
_start:
{
lean_object* v___x_614_; 
lean_inc(v_a_612_);
lean_inc_ref(v_a_611_);
lean_inc(v_a_610_);
lean_inc_ref(v_a_609_);
v___x_614_ = lean_apply_5(v_p_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, lean_box(0));
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer___boxed(lean_object* v_i_615_, lean_object* v_p_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_parenthesizer(v_i_615_, v_p_616_, v_a_617_, v_a_618_, v_a_619_, v_a_620_);
lean_dec(v_a_620_);
lean_dec_ref(v_a_619_);
lean_dec(v_a_618_);
lean_dec_ref(v_a_617_);
lean_dec(v_i_615_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_parenthesizer(lean_object* v_p_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_){
_start:
{
lean_object* v___x_629_; 
lean_inc(v_a_627_);
lean_inc_ref(v_a_626_);
lean_inc(v_a_625_);
lean_inc_ref(v_a_624_);
v___x_629_ = lean_apply_5(v_p_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_, lean_box(0));
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth_parenthesizer___boxed(lean_object* v_p_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Lean_Parser_decQuotDepth_parenthesizer(v_p_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_);
lean_dec(v_a_634_);
lean_dec_ref(v_a_633_);
lean_dec(v_a_632_);
lean_dec_ref(v_a_631_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___lam__0(lean_object* v___x_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_Lean_Parser_termParser_parenthesizer(v___x_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___lam__0___boxed(lean_object* v___x_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lean_Parser_antiquotNestedExpr_parenthesizer___lam__0(v___x_644_, v___y_645_, v___y_646_, v___y_647_, v___y_648_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec(v___y_646_);
lean_dec_ref(v___y_645_);
return v_res_650_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__3, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__3_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__3);
v___x_652_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_652_, 0, v___x_651_);
return v___x_652_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_653_; lean_object* v___f_654_; 
v___x_653_ = lean_unsigned_to_nat(0u);
v___f_654_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_parenthesizer___lam__0___boxed), 6, 1);
lean_closure_set(v___f_654_, 0, v___x_653_);
return v___f_654_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__5, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__5_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__5);
v___x_656_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_656_, 0, v___x_655_);
return v___x_656_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_657_; lean_object* v___f_658_; lean_object* v___x_659_; 
v___x_657_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2, &l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2_once, _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2);
v___f_658_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1, &l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1_once, _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1);
v___x_659_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_659_, 0, v___f_658_);
lean_closure_set(v___x_659_, 1, v___x_657_);
return v___x_659_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_660_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3, &l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3_once, _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3);
v___x_661_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__0, &l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__0_once, _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__0);
v___x_662_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_662_, 0, v___x_661_);
lean_closure_set(v___x_662_, 1, v___x_660_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_668_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__2, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__2_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__2);
v___x_669_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4, &l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4_once, _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4);
v___x_670_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_668_, v___x_669_, v_a_663_, v_a_664_, v_a_665_, v_a_666_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___boxed(lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lean_Parser_antiquotNestedExpr_parenthesizer(v_a_671_, v_a_672_, v_a_673_, v_a_674_);
lean_dec(v_a_674_);
lean_dec_ref(v_a_673_);
lean_dec(v_a_672_);
lean_dec_ref(v_a_671_);
return v_res_676_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0(void){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = lean_mk_string_unchecked("parenthesizer", 13, 13);
return v___x_677_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_678_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0);
v___x_679_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__1, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__1_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__1);
v___x_680_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_681_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_682_ = l_Lean_Name_mkStr4(v___x_681_, v___x_680_, v___x_679_, v___x_678_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35(){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_684_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_685_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__2, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__2_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__2);
v___x_686_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__1);
v___x_687_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_parenthesizer___boxed), 5, 0);
v___x_688_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_684_, v___x_685_, v___x_686_, v___x_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___boxed(lean_object* v_a_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35();
return v_res_690_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_obj_once(&l_Lean_Parser_antiquotExpr_formatter___closed__0, &l_Lean_Parser_antiquotExpr_formatter___closed__0_once, _init_l_Lean_Parser_antiquotExpr_formatter___closed__0);
v___x_692_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_692_, 0, v___x_691_);
return v___x_692_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_693_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_parenthesizer___boxed), 5, 0);
v___x_694_ = lean_obj_once(&l_Lean_Parser_antiquotExpr_parenthesizer___closed__0, &l_Lean_Parser_antiquotExpr_parenthesizer___closed__0_once, _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__0);
v___x_695_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_695_, 0, v___x_694_);
lean_closure_set(v___x_695_, 1, v___x_693_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_parenthesizer(lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_701_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_identNoAntiquot_parenthesizer___boxed), 5, 0);
v___x_702_ = lean_obj_once(&l_Lean_Parser_antiquotExpr_parenthesizer___closed__1, &l_Lean_Parser_antiquotExpr_parenthesizer___closed__1_once, _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__1);
v___x_703_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___x_701_, v___x_702_, v_a_696_, v_a_697_, v_a_698_, v_a_699_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr_parenthesizer___boxed(lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Lean_Parser_antiquotExpr_parenthesizer(v_a_704_, v_a_705_, v_a_706_, v_a_707_);
lean_dec(v_a_707_);
lean_dec_ref(v_a_706_);
lean_dec(v_a_705_);
lean_dec_ref(v_a_704_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___lam__0(lean_object* v_sym_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
lean_object* v___x_716_; 
v___x_716_ = l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___redArg(v_sym_710_, v___y_712_, v___y_713_, v___y_714_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___lam__0___boxed(lean_object* v_sym_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___lam__0(v_sym_717_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_718_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg(lean_object* v_sym_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_){
_start:
{
lean_object* v___f_730_; lean_object* v___x_731_; 
v___f_730_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_730_, 0, v_sym_724_);
v___x_731_ = l_Lean_PrettyPrinter_Parenthesizer_tokenWithAntiquot_parenthesizer(v___f_730_, v_a_725_, v_a_726_, v_a_727_, v_a_728_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg___boxed(lean_object* v_sym_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg(v_sym_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
lean_dec(v_a_736_);
lean_dec_ref(v_a_735_);
lean_dec(v_a_734_);
lean_dec_ref(v_a_733_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer(lean_object* v_sym_739_, uint8_t v_includeIdent_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = l_Lean_Parser_nonReservedSymbol_parenthesizer___redArg(v_sym_739_, v_a_741_, v_a_742_, v_a_743_, v_a_744_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object* v_sym_747_, lean_object* v_includeIdent_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_){
_start:
{
uint8_t v_includeIdent_boxed_754_; lean_object* v_res_755_; 
v_includeIdent_boxed_754_ = lean_unbox(v_includeIdent_748_);
v_res_755_ = l_Lean_Parser_nonReservedSymbol_parenthesizer(v_sym_747_, v_includeIdent_boxed_754_, v_a_749_, v_a_750_, v_a_751_, v_a_752_);
lean_dec(v_a_752_);
lean_dec_ref(v_a_751_);
lean_dec(v_a_750_);
lean_dec_ref(v_a_749_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__0(lean_object* v___x_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = l_Lean_Parser_symbol_parenthesizer(v___x_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__0___boxed(lean_object* v___x_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_Lean_Parser_mkAntiquot_parenthesizer___lam__0(v___x_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
return v_res_769_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0(void){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2, &l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2_once, _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__2);
v___x_771_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_771_, 0, v___x_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__1(uint8_t v_anonymous_772_, lean_object* v_name_773_, lean_object* v___x_774_, lean_object* v___f_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
if (v_anonymous_772_ == 0)
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
lean_dec_ref(v___f_775_);
v___x_781_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1, &l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1_once, _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1);
v___x_782_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0, &l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0);
v___x_783_ = lean_box(v_anonymous_772_);
v___x_784_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_784_, 0, v_name_773_);
lean_closure_set(v___x_784_, 1, v___x_783_);
v___x_785_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_785_, 0, v___x_782_);
lean_closure_set(v___x_785_, 1, v___x_784_);
v___x_786_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_786_, 0, v___x_774_);
lean_closure_set(v___x_786_, 1, v___x_785_);
v___x_787_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_781_, v___x_786_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
return v___x_787_;
}
else
{
lean_object* v___x_788_; lean_object* v___x_789_; uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_788_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1, &l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1_once, _init_l_Lean_Parser_mkAntiquot_formatter___lam__1___closed__1);
v___x_789_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0, &l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___closed__0);
v___x_790_ = 0;
v___x_791_ = lean_box(v___x_790_);
v___x_792_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_792_, 0, v_name_773_);
lean_closure_set(v___x_792_, 1, v___x_791_);
v___x_793_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_793_, 0, v___x_789_);
lean_closure_set(v___x_793_, 1, v___x_792_);
v___x_794_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_794_, 0, v___x_774_);
lean_closure_set(v___x_794_, 1, v___x_793_);
v___x_795_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_795_, 0, v___x_788_);
lean_closure_set(v___x_795_, 1, v___x_794_);
v___x_796_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoImmediateColon_parenthesizer___boxed), 5, 0);
v___x_797_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_797_, 0, v___x_796_);
lean_closure_set(v___x_797_, 1, v___f_775_);
v___x_798_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___x_795_, v___x_797_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
return v___x_798_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___boxed(lean_object* v_anonymous_799_, lean_object* v_name_800_, lean_object* v___x_801_, lean_object* v___f_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
uint8_t v_anonymous_boxed_808_; lean_object* v_res_809_; 
v_anonymous_boxed_808_ = lean_unbox(v_anonymous_799_);
v_res_809_ = l_Lean_Parser_mkAntiquot_parenthesizer___lam__1(v_anonymous_boxed_808_, v_name_800_, v___x_801_, v___f_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__2(lean_object* v___f_810_, lean_object* v___x_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(v___f_810_, v___x_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___lam__2___boxed(lean_object* v___f_818_, lean_object* v___x_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lean_Parser_mkAntiquot_parenthesizer___lam__2(v___f_818_, v___x_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
return v_res_825_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__0(void){
_start:
{
lean_object* v___f_826_; 
v___f_826_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Parenthesizer_visitArgs_spec__1___boxed), 5, 0);
return v___f_826_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_827_; lean_object* v___f_828_; 
v___x_827_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__4, &l_Lean_Parser_mkAntiquot_formatter___closed__4_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__4);
v___f_828_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___lam__0___boxed), 6, 1);
lean_closure_set(v___f_828_, 0, v___x_827_);
return v___f_828_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__4, &l_Lean_Parser_mkAntiquot_formatter___closed__4_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__4);
v___x_830_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_830_, 0, v___x_829_);
return v___x_830_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_831_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___closed__2, &l_Lean_Parser_mkAntiquot_parenthesizer___closed__2_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__2);
v___x_832_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 5, 0);
v___x_833_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_833_, 0, v___x_832_);
lean_closure_set(v___x_833_, 1, v___x_831_);
return v___x_833_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_834_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___closed__3, &l_Lean_Parser_mkAntiquot_parenthesizer___closed__3_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__3);
v___x_835_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_835_, 0, v___x_834_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer(lean_object* v_name_836_, lean_object* v_kind_837_, uint8_t v_anonymous_838_, uint8_t v_isPseudoKind_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_){
_start:
{
lean_object* v___f_845_; lean_object* v___y_847_; 
v___f_845_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___closed__0, &l_Lean_Parser_mkAntiquot_parenthesizer___closed__0_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__0);
if (v_isPseudoKind_839_ == 0)
{
lean_object* v___x_863_; 
v___x_863_ = lean_box(0);
v___y_847_ = v___x_863_;
goto v___jp_846_;
}
else
{
lean_object* v___x_864_; 
v___x_864_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__10, &l_Lean_Parser_mkAntiquot_formatter___closed__10_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__10);
v___y_847_ = v___x_864_;
goto v___jp_846_;
}
v___jp_846_:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v_kind_850_; lean_object* v___x_851_; lean_object* v___f_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___y_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___f_861_; lean_object* v___x_862_; 
lean_inc(v___y_847_);
v___x_848_ = l_Lean_Name_append(v_kind_837_, v___y_847_);
v___x_849_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__3, &l_Lean_Parser_mkAntiquot_formatter___closed__3_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__3);
v_kind_850_ = l_Lean_Name_append(v___x_848_, v___x_849_);
v___x_851_ = lean_unsigned_to_nat(1024u);
v___f_852_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___closed__1, &l_Lean_Parser_mkAntiquot_parenthesizer___closed__1_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__1);
v___x_853_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 5, 0);
v___x_854_ = lean_box(v_anonymous_838_);
lean_inc_ref(v___x_853_);
v___y_855_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___lam__1___boxed), 9, 4);
lean_closure_set(v___y_855_, 0, v___x_854_);
lean_closure_set(v___y_855_, 1, v_name_836_);
lean_closure_set(v___y_855_, 2, v___x_853_);
lean_closure_set(v___y_855_, 3, v___f_845_);
v___x_856_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___closed__4, &l_Lean_Parser_mkAntiquot_parenthesizer___closed__4_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__4);
v___x_857_ = lean_alloc_closure((void*)(l_Lean_Parser_antiquotExpr_parenthesizer___boxed), 5, 0);
v___x_858_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_858_, 0, v___x_857_);
lean_closure_set(v___x_858_, 1, v___y_855_);
v___x_859_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_859_, 0, v___x_853_);
lean_closure_set(v___x_859_, 1, v___x_858_);
v___x_860_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_860_, 0, v___x_856_);
lean_closure_set(v___x_860_, 1, v___x_859_);
v___f_861_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___lam__2___boxed), 7, 2);
lean_closure_set(v___f_861_, 0, v___f_852_);
lean_closure_set(v___f_861_, 1, v___x_860_);
v___x_862_ = l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer(v_kind_850_, v___x_851_, v___f_861_, v_a_840_, v_a_841_, v_a_842_, v_a_843_);
return v___x_862_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object* v_name_865_, lean_object* v_kind_866_, lean_object* v_anonymous_867_, lean_object* v_isPseudoKind_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
uint8_t v_anonymous_boxed_874_; uint8_t v_isPseudoKind_boxed_875_; lean_object* v_res_876_; 
v_anonymous_boxed_874_ = lean_unbox(v_anonymous_867_);
v_isPseudoKind_boxed_875_ = lean_unbox(v_isPseudoKind_868_);
v_res_876_ = l_Lean_Parser_mkAntiquot_parenthesizer(v_name_865_, v_kind_866_, v_anonymous_boxed_874_, v_isPseudoKind_boxed_875_, v_a_869_, v_a_870_, v_a_871_, v_a_872_);
lean_dec(v_a_872_);
lean_dec_ref(v_a_871_);
lean_dec(v_a_870_);
lean_dec_ref(v_a_869_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_formatter(lean_object* v_name_877_, lean_object* v_kind_878_, lean_object* v_p_879_, uint8_t v_anonymous_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_){
_start:
{
uint8_t v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_886_ = 0;
v___x_887_ = lean_box(v_anonymous_880_);
v___x_888_ = lean_box(v___x_886_);
lean_inc(v_kind_878_);
v___x_889_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_889_, 0, v_name_877_);
lean_closure_set(v___x_889_, 1, v_kind_878_);
lean_closure_set(v___x_889_, 2, v___x_887_);
lean_closure_set(v___x_889_, 3, v___x_888_);
v___x_890_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter___boxed), 7, 2);
lean_closure_set(v___x_890_, 0, v_kind_878_);
lean_closure_set(v___x_890_, 1, v_p_879_);
v___x_891_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_889_, v___x_890_, v_a_881_, v_a_882_, v_a_883_, v_a_884_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_formatter___boxed(lean_object* v_name_892_, lean_object* v_kind_893_, lean_object* v_p_894_, lean_object* v_anonymous_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_){
_start:
{
uint8_t v_anonymous_boxed_901_; lean_object* v_res_902_; 
v_anonymous_boxed_901_ = lean_unbox(v_anonymous_895_);
v_res_902_ = l_Lean_Parser_nodeWithAntiquot_formatter(v_name_892_, v_kind_893_, v_p_894_, v_anonymous_boxed_901_, v_a_896_, v_a_897_, v_a_898_, v_a_899_);
lean_dec(v_a_899_);
lean_dec_ref(v_a_898_);
lean_dec(v_a_897_);
lean_dec_ref(v_a_896_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer(lean_object* v_name_903_, lean_object* v_kind_904_, lean_object* v_p_905_, uint8_t v_anonymous_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
uint8_t v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_912_ = 0;
v___x_913_ = lean_box(v_anonymous_906_);
v___x_914_ = lean_box(v___x_912_);
lean_inc(v_kind_904_);
v___x_915_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_915_, 0, v_name_903_);
lean_closure_set(v___x_915_, 1, v_kind_904_);
lean_closure_set(v___x_915_, 2, v___x_913_);
lean_closure_set(v___x_915_, 3, v___x_914_);
v___x_916_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_916_, 0, v_kind_904_);
lean_closure_set(v___x_916_, 1, v_p_905_);
v___x_917_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_915_, v___x_916_, v_a_907_, v_a_908_, v_a_909_, v_a_910_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer___boxed(lean_object* v_name_918_, lean_object* v_kind_919_, lean_object* v_p_920_, lean_object* v_anonymous_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_){
_start:
{
uint8_t v_anonymous_boxed_927_; lean_object* v_res_928_; 
v_anonymous_boxed_927_ = lean_unbox(v_anonymous_921_);
v_res_928_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v_name_918_, v_kind_919_, v_p_920_, v_anonymous_boxed_927_, v_a_922_, v_a_923_, v_a_924_, v_a_925_);
lean_dec(v_a_925_);
lean_dec_ref(v_a_924_);
lean_dec(v_a_923_);
lean_dec_ref(v_a_922_);
return v_res_928_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__0(void){
_start:
{
lean_object* v___x_929_; 
v___x_929_ = lean_mk_string_unchecked("antiquot_scope", 14, 14);
return v___x_929_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__1(void){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_930_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__0, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__0_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__0);
v___x_931_ = l_Lean_Name_mkStr1(v___x_930_);
return v___x_931_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__2(void){
_start:
{
lean_object* v___x_932_; 
v___x_932_ = lean_mk_string_unchecked("[", 1, 1);
return v___x_932_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__3(void){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_933_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__2, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__2_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__2);
v___x_934_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter___boxed), 6, 1);
lean_closure_set(v___x_934_, 0, v___x_933_);
return v___x_934_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__4(void){
_start:
{
lean_object* v___x_935_; 
v___x_935_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_935_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__5(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__4, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__4_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__4);
v___x_937_ = l_Lean_Name_mkStr1(v___x_936_);
return v___x_937_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__6(void){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = lean_mk_string_unchecked("]", 1, 1);
return v___x_938_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__7(void){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__6, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__6_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__6);
v___x_940_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter___boxed), 6, 1);
lean_closure_set(v___x_940_, 0, v___x_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_formatter(lean_object* v_kind_941_, lean_object* v_p_942_, lean_object* v_suffix_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_){
_start:
{
lean_object* v___f_949_; lean_object* v___x_950_; lean_object* v_kind_951_; lean_object* v___f_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___f_963_; lean_object* v___x_964_; 
v___f_949_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__0, &l_Lean_Parser_mkAntiquot_formatter___closed__0_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__0);
v___x_950_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__1, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__1_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__1);
v_kind_951_ = l_Lean_Name_append(v_kind_941_, v___x_950_);
v___f_952_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__5, &l_Lean_Parser_mkAntiquot_formatter___closed__5_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__5);
v___x_953_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__8, &l_Lean_Parser_mkAntiquot_formatter___closed__8_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__8);
v___x_954_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__3, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__3_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__3);
v___x_955_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__5, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__5_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__5);
v___x_956_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter___boxed), 7, 2);
lean_closure_set(v___x_956_, 0, v___x_955_);
lean_closure_set(v___x_956_, 1, v_p_942_);
v___x_957_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__7, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__7_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__7);
v___x_958_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_958_, 0, v___x_957_);
lean_closure_set(v___x_958_, 1, v_suffix_943_);
v___x_959_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_959_, 0, v___x_956_);
lean_closure_set(v___x_959_, 1, v___x_958_);
v___x_960_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_960_, 0, v___x_954_);
lean_closure_set(v___x_960_, 1, v___x_959_);
v___x_961_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_961_, 0, v___f_949_);
lean_closure_set(v___x_961_, 1, v___x_960_);
v___x_962_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_962_, 0, v___x_953_);
lean_closure_set(v___x_962_, 1, v___x_961_);
v___f_963_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___lam__3___boxed), 7, 2);
lean_closure_set(v___f_963_, 0, v___f_952_);
lean_closure_set(v___f_963_, 1, v___x_962_);
v___x_964_ = l_Lean_Parser_leadingNode_formatter___redArg(v_kind_951_, v___f_963_, v_a_944_, v_a_945_, v_a_946_, v_a_947_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___boxed(lean_object* v_kind_965_, lean_object* v_p_966_, lean_object* v_suffix_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_Lean_Parser_mkAntiquotSplice_formatter(v_kind_965_, v_p_966_, v_suffix_967_, v_a_968_, v_a_969_, v_a_970_, v_a_971_);
lean_dec(v_a_971_);
lean_dec_ref(v_a_970_);
lean_dec(v_a_969_);
lean_dec_ref(v_a_968_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___lam__0(lean_object* v_p_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_){
_start:
{
lean_object* v___x_980_; 
v___x_980_ = lean_apply_5(v_p_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, lean_box(0));
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___lam__0___boxed(lean_object* v_p_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___lam__0(v_p_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter(lean_object* v_kind_988_, lean_object* v_p_989_, lean_object* v_suffix_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_){
_start:
{
lean_object* v___f_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
lean_inc_ref(v_p_989_);
v___f_996_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___lam__0___boxed), 6, 1);
lean_closure_set(v___f_996_, 0, v_p_989_);
lean_inc_ref(v_suffix_990_);
lean_inc(v_kind_988_);
v___x_997_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquotSplice_formatter___boxed), 8, 3);
lean_closure_set(v___x_997_, 0, v_kind_988_);
lean_closure_set(v___x_997_, 1, v___f_996_);
lean_closure_set(v___x_997_, 2, v_suffix_990_);
v___x_998_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_withAntiquotSuffixSplice_formatter___boxed), 8, 3);
lean_closure_set(v___x_998_, 0, v_kind_988_);
lean_closure_set(v___x_998_, 1, v_p_989_);
lean_closure_set(v___x_998_, 2, v_suffix_990_);
v___x_999_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_997_, v___x_998_, v_a_991_, v_a_992_, v_a_993_, v_a_994_);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed(lean_object* v_kind_1000_, lean_object* v_p_1001_, lean_object* v_suffix_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter(v_kind_1000_, v_p_1001_, v_suffix_1002_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_);
lean_dec(v_a_1006_);
lean_dec_ref(v_a_1005_);
lean_dec(v_a_1004_);
lean_dec_ref(v_a_1003_);
return v_res_1008_;
}
}
static lean_object* _init_l_Lean_Parser_sepByElemParser_formatter___closed__0(void){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = lean_mk_string_unchecked("sepBy", 5, 5);
return v___x_1009_;
}
}
static lean_object* _init_l_Lean_Parser_sepByElemParser_formatter___closed__1(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = lean_obj_once(&l_Lean_Parser_sepByElemParser_formatter___closed__0, &l_Lean_Parser_sepByElemParser_formatter___closed__0_once, _init_l_Lean_Parser_sepByElemParser_formatter___closed__0);
v___x_1011_ = l_Lean_Name_mkStr1(v___x_1010_);
return v___x_1011_;
}
}
static lean_object* _init_l_Lean_Parser_sepByElemParser_formatter___closed__2(void){
_start:
{
lean_object* v___x_1012_; 
v___x_1012_ = lean_mk_string_unchecked("*", 1, 1);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_formatter(lean_object* v_p_1013_, lean_object* v_sep_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_){
_start:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v_str_1024_; lean_object* v_startInclusive_1025_; lean_object* v_endExclusive_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1020_ = lean_unsigned_to_nat(0u);
v___x_1021_ = lean_string_utf8_byte_size(v_sep_1014_);
v___x_1022_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1022_, 0, v_sep_1014_);
lean_ctor_set(v___x_1022_, 1, v___x_1020_);
lean_ctor_set(v___x_1022_, 2, v___x_1021_);
v___x_1023_ = l_String_Slice_trimAscii(v___x_1022_);
v_str_1024_ = lean_ctor_get(v___x_1023_, 0);
lean_inc_ref(v_str_1024_);
v_startInclusive_1025_ = lean_ctor_get(v___x_1023_, 1);
lean_inc(v_startInclusive_1025_);
v_endExclusive_1026_ = lean_ctor_get(v___x_1023_, 2);
lean_inc(v_endExclusive_1026_);
lean_dec_ref(v___x_1023_);
v___x_1027_ = lean_obj_once(&l_Lean_Parser_sepByElemParser_formatter___closed__1, &l_Lean_Parser_sepByElemParser_formatter___closed__1_once, _init_l_Lean_Parser_sepByElemParser_formatter___closed__1);
v___x_1028_ = lean_string_utf8_extract(v_str_1024_, v_startInclusive_1025_, v_endExclusive_1026_);
lean_dec(v_endExclusive_1026_);
lean_dec(v_startInclusive_1025_);
lean_dec_ref(v_str_1024_);
v___x_1029_ = lean_obj_once(&l_Lean_Parser_sepByElemParser_formatter___closed__2, &l_Lean_Parser_sepByElemParser_formatter___closed__2_once, _init_l_Lean_Parser_sepByElemParser_formatter___closed__2);
v___x_1030_ = lean_string_append(v___x_1028_, v___x_1029_);
v___x_1031_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter___boxed), 6, 1);
lean_closure_set(v___x_1031_, 0, v___x_1030_);
v___x_1032_ = l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter(v___x_1027_, v_p_1013_, v___x_1031_, v_a_1015_, v_a_1016_, v_a_1017_, v_a_1018_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_formatter___boxed(lean_object* v_p_1033_, lean_object* v_sep_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lean_Parser_sepByElemParser_formatter(v_p_1033_, v_sep_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_);
lean_dec(v_a_1038_);
lean_dec_ref(v_a_1037_);
lean_dec(v_a_1036_);
lean_dec_ref(v_a_1035_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter___redArg(lean_object* v_p_1041_, lean_object* v_sep_1042_, lean_object* v_psep_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = lean_alloc_closure((void*)(l_Lean_Parser_sepByElemParser_formatter___boxed), 7, 2);
lean_closure_set(v___x_1049_, 0, v_p_1041_);
lean_closure_set(v___x_1049_, 1, v_sep_1042_);
v___x_1050_ = l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(v___x_1049_, v_psep_1043_, v_a_1044_, v_a_1045_, v_a_1046_, v_a_1047_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter___redArg___boxed(lean_object* v_p_1051_, lean_object* v_sep_1052_, lean_object* v_psep_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Lean_Parser_sepBy_formatter___redArg(v_p_1051_, v_sep_1052_, v_psep_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_);
lean_dec(v_a_1057_);
lean_dec_ref(v_a_1056_);
lean_dec(v_a_1055_);
lean_dec_ref(v_a_1054_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter(lean_object* v_p_1060_, lean_object* v_sep_1061_, lean_object* v_psep_1062_, uint8_t v_allowTrailingSep_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v___x_1069_; 
v___x_1069_ = l_Lean_Parser_sepBy_formatter___redArg(v_p_1060_, v_sep_1061_, v_psep_1062_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_formatter___boxed(lean_object* v_p_1070_, lean_object* v_sep_1071_, lean_object* v_psep_1072_, lean_object* v_allowTrailingSep_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1079_; lean_object* v_res_1080_; 
v_allowTrailingSep_boxed_1079_ = lean_unbox(v_allowTrailingSep_1073_);
v_res_1080_ = l_Lean_Parser_sepBy_formatter(v_p_1070_, v_sep_1071_, v_psep_1072_, v_allowTrailingSep_boxed_1079_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_);
lean_dec(v_a_1077_);
lean_dec_ref(v_a_1076_);
lean_dec(v_a_1075_);
lean_dec_ref(v_a_1074_);
return v_res_1080_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__2, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__2_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__2);
v___x_1082_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_1082_, 0, v___x_1081_);
return v___x_1082_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1083_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__6, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__6_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__6);
v___x_1084_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_1084_, 0, v___x_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer(lean_object* v_kind_1085_, lean_object* v_p_1086_, lean_object* v_suffix_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_){
_start:
{
lean_object* v___x_1093_; lean_object* v_kind_1094_; lean_object* v___x_1095_; lean_object* v___f_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___f_1108_; lean_object* v___x_1109_; 
v___x_1093_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__1, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__1_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__1);
v_kind_1094_ = l_Lean_Name_append(v_kind_1085_, v___x_1093_);
v___x_1095_ = lean_unsigned_to_nat(1024u);
v___f_1096_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___closed__1, &l_Lean_Parser_mkAntiquot_parenthesizer___closed__1_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__1);
v___x_1097_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 5, 0);
v___x_1098_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___closed__4, &l_Lean_Parser_mkAntiquot_parenthesizer___closed__4_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__4);
v___x_1099_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__0, &l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__0_once, _init_l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__0);
v___x_1100_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__5, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__5_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__5);
v___x_1101_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1101_, 0, v___x_1100_);
lean_closure_set(v___x_1101_, 1, v_p_1086_);
v___x_1102_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1, &l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1_once, _init_l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1);
v___x_1103_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1103_, 0, v___x_1102_);
lean_closure_set(v___x_1103_, 1, v_suffix_1087_);
v___x_1104_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1104_, 0, v___x_1101_);
lean_closure_set(v___x_1104_, 1, v___x_1103_);
v___x_1105_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1105_, 0, v___x_1099_);
lean_closure_set(v___x_1105_, 1, v___x_1104_);
v___x_1106_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1106_, 0, v___x_1097_);
lean_closure_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1107_, 0, v___x_1098_);
lean_closure_set(v___x_1107_, 1, v___x_1106_);
v___f_1108_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___lam__2___boxed), 7, 2);
lean_closure_set(v___f_1108_, 0, v___f_1096_);
lean_closure_set(v___f_1108_, 1, v___x_1107_);
v___x_1109_ = l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer(v_kind_1094_, v___x_1095_, v___f_1108_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer___boxed(lean_object* v_kind_1110_, lean_object* v_p_1111_, lean_object* v_suffix_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lean_Parser_mkAntiquotSplice_parenthesizer(v_kind_1110_, v_p_1111_, v_suffix_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_);
lean_dec(v_a_1116_);
lean_dec_ref(v_a_1115_);
lean_dec(v_a_1114_);
lean_dec_ref(v_a_1113_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___lam__0(lean_object* v_p_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_apply_5(v_p_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, lean_box(0));
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___lam__0___boxed(lean_object* v_p_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___lam__0(v_p_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer(lean_object* v_kind_1133_, lean_object* v_p_1134_, lean_object* v_suffix_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_){
_start:
{
lean_object* v___f_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
lean_inc_ref(v_p_1134_);
v___f_1141_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1141_, 0, v_p_1134_);
lean_inc_ref(v_suffix_1135_);
lean_inc(v_kind_1133_);
v___x_1142_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquotSplice_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1142_, 0, v_kind_1133_);
lean_closure_set(v___x_1142_, 1, v___f_1141_);
lean_closure_set(v___x_1142_, 2, v_suffix_1135_);
v___x_1143_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_withAntiquotSuffixSplice_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1143_, 0, v_kind_1133_);
lean_closure_set(v___x_1143_, 1, v_p_1134_);
lean_closure_set(v___x_1143_, 2, v_suffix_1135_);
v___x_1144_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1142_, v___x_1143_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed(lean_object* v_kind_1145_, lean_object* v_p_1146_, lean_object* v_suffix_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer(v_kind_1145_, v_p_1146_, v_suffix_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_);
lean_dec(v_a_1151_);
lean_dec_ref(v_a_1150_);
lean_dec(v_a_1149_);
lean_dec_ref(v_a_1148_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_parenthesizer(lean_object* v_p_1154_, lean_object* v_sep_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v_str_1165_; lean_object* v_startInclusive_1166_; lean_object* v_endExclusive_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1161_ = lean_unsigned_to_nat(0u);
v___x_1162_ = lean_string_utf8_byte_size(v_sep_1155_);
v___x_1163_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1163_, 0, v_sep_1155_);
lean_ctor_set(v___x_1163_, 1, v___x_1161_);
lean_ctor_set(v___x_1163_, 2, v___x_1162_);
v___x_1164_ = l_String_Slice_trimAscii(v___x_1163_);
v_str_1165_ = lean_ctor_get(v___x_1164_, 0);
lean_inc_ref(v_str_1165_);
v_startInclusive_1166_ = lean_ctor_get(v___x_1164_, 1);
lean_inc(v_startInclusive_1166_);
v_endExclusive_1167_ = lean_ctor_get(v___x_1164_, 2);
lean_inc(v_endExclusive_1167_);
lean_dec_ref(v___x_1164_);
v___x_1168_ = lean_obj_once(&l_Lean_Parser_sepByElemParser_formatter___closed__1, &l_Lean_Parser_sepByElemParser_formatter___closed__1_once, _init_l_Lean_Parser_sepByElemParser_formatter___closed__1);
v___x_1169_ = lean_string_utf8_extract(v_str_1165_, v_startInclusive_1166_, v_endExclusive_1167_);
lean_dec(v_endExclusive_1167_);
lean_dec(v_startInclusive_1166_);
lean_dec_ref(v_str_1165_);
v___x_1170_ = lean_obj_once(&l_Lean_Parser_sepByElemParser_formatter___closed__2, &l_Lean_Parser_sepByElemParser_formatter___closed__2_once, _init_l_Lean_Parser_sepByElemParser_formatter___closed__2);
v___x_1171_ = lean_string_append(v___x_1169_, v___x_1170_);
v___x_1172_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_1172_, 0, v___x_1171_);
v___x_1173_ = l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer(v___x_1168_, v_p_1154_, v___x_1172_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser_parenthesizer___boxed(lean_object* v_p_1174_, lean_object* v_sep_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lean_Parser_sepByElemParser_parenthesizer(v_p_1174_, v_sep_1175_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_);
lean_dec(v_a_1179_);
lean_dec_ref(v_a_1178_);
lean_dec(v_a_1177_);
lean_dec_ref(v_a_1176_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer___redArg(lean_object* v_p_1182_, lean_object* v_sep_1183_, lean_object* v_psep_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1190_ = lean_alloc_closure((void*)(l_Lean_Parser_sepByElemParser_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1190_, 0, v_p_1182_);
lean_closure_set(v___x_1190_, 1, v_sep_1183_);
v___x_1191_ = l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(v___x_1190_, v_psep_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer___redArg___boxed(lean_object* v_p_1192_, lean_object* v_sep_1193_, lean_object* v_psep_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_Parser_sepBy_parenthesizer___redArg(v_p_1192_, v_sep_1193_, v_psep_1194_, v_a_1195_, v_a_1196_, v_a_1197_, v_a_1198_);
lean_dec(v_a_1198_);
lean_dec_ref(v_a_1197_);
lean_dec(v_a_1196_);
lean_dec_ref(v_a_1195_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer(lean_object* v_p_1201_, lean_object* v_sep_1202_, lean_object* v_psep_1203_, uint8_t v_allowTrailingSep_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = l_Lean_Parser_sepBy_parenthesizer___redArg(v_p_1201_, v_sep_1202_, v_psep_1203_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy_parenthesizer___boxed(lean_object* v_p_1211_, lean_object* v_sep_1212_, lean_object* v_psep_1213_, lean_object* v_allowTrailingSep_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1220_; lean_object* v_res_1221_; 
v_allowTrailingSep_boxed_1220_ = lean_unbox(v_allowTrailingSep_1214_);
v_res_1221_ = l_Lean_Parser_sepBy_parenthesizer(v_p_1211_, v_sep_1212_, v_psep_1213_, v_allowTrailingSep_boxed_1220_, v_a_1215_, v_a_1216_, v_a_1217_, v_a_1218_);
lean_dec(v_a_1218_);
lean_dec_ref(v_a_1217_);
lean_dec(v_a_1216_);
lean_dec_ref(v_a_1215_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter___redArg(lean_object* v_p_1222_, lean_object* v_sep_1223_, lean_object* v_psep_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1230_ = lean_alloc_closure((void*)(l_Lean_Parser_sepByElemParser_formatter___boxed), 7, 2);
lean_closure_set(v___x_1230_, 0, v_p_1222_);
lean_closure_set(v___x_1230_, 1, v_sep_1223_);
v___x_1231_ = l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(v___x_1230_, v_psep_1224_, v_a_1225_, v_a_1226_, v_a_1227_, v_a_1228_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter___redArg___boxed(lean_object* v_p_1232_, lean_object* v_sep_1233_, lean_object* v_psep_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Lean_Parser_sepBy1_formatter___redArg(v_p_1232_, v_sep_1233_, v_psep_1234_, v_a_1235_, v_a_1236_, v_a_1237_, v_a_1238_);
lean_dec(v_a_1238_);
lean_dec_ref(v_a_1237_);
lean_dec(v_a_1236_);
lean_dec_ref(v_a_1235_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter(lean_object* v_p_1241_, lean_object* v_sep_1242_, lean_object* v_psep_1243_, uint8_t v_allowTrailingSep_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_){
_start:
{
lean_object* v___x_1250_; 
v___x_1250_ = l_Lean_Parser_sepBy1_formatter___redArg(v_p_1241_, v_sep_1242_, v_psep_1243_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_formatter___boxed(lean_object* v_p_1251_, lean_object* v_sep_1252_, lean_object* v_psep_1253_, lean_object* v_allowTrailingSep_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1260_; lean_object* v_res_1261_; 
v_allowTrailingSep_boxed_1260_ = lean_unbox(v_allowTrailingSep_1254_);
v_res_1261_ = l_Lean_Parser_sepBy1_formatter(v_p_1251_, v_sep_1252_, v_psep_1253_, v_allowTrailingSep_boxed_1260_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_);
lean_dec(v_a_1258_);
lean_dec_ref(v_a_1257_);
lean_dec(v_a_1256_);
lean_dec_ref(v_a_1255_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer___redArg(lean_object* v_p_1262_, lean_object* v_sep_1263_, lean_object* v_psep_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = lean_alloc_closure((void*)(l_Lean_Parser_sepByElemParser_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1270_, 0, v_p_1262_);
lean_closure_set(v___x_1270_, 1, v_sep_1263_);
v___x_1271_ = l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(v___x_1270_, v_psep_1264_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer___redArg___boxed(lean_object* v_p_1272_, lean_object* v_sep_1273_, lean_object* v_psep_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Lean_Parser_sepBy1_parenthesizer___redArg(v_p_1272_, v_sep_1273_, v_psep_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer(lean_object* v_p_1281_, lean_object* v_sep_1282_, lean_object* v_psep_1283_, uint8_t v_allowTrailingSep_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_){
_start:
{
lean_object* v___x_1290_; 
v___x_1290_ = l_Lean_Parser_sepBy1_parenthesizer___redArg(v_p_1281_, v_sep_1282_, v_psep_1283_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1_parenthesizer___boxed(lean_object* v_p_1291_, lean_object* v_sep_1292_, lean_object* v_psep_1293_, lean_object* v_allowTrailingSep_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1300_; lean_object* v_res_1301_; 
v_allowTrailingSep_boxed_1300_ = lean_unbox(v_allowTrailingSep_1294_);
v_res_1301_ = l_Lean_Parser_sepBy1_parenthesizer(v_p_1291_, v_sep_1292_, v_psep_1293_, v_allowTrailingSep_boxed_1300_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_);
lean_dec(v_a_1298_);
lean_dec_ref(v_a_1297_);
lean_dec(v_a_1296_);
lean_dec_ref(v_a_1295_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_formatter(lean_object* v_sym_1302_, lean_object* v_asciiSym_1303_, uint8_t v_preserveForPP_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_){
_start:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1310_ = lean_box(v_preserveForPP_1304_);
v___x_1311_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_unicodeSymbolNoAntiquot_formatter___boxed), 8, 3);
lean_closure_set(v___x_1311_, 0, v_sym_1302_);
lean_closure_set(v___x_1311_, 1, v_asciiSym_1303_);
lean_closure_set(v___x_1311_, 2, v___x_1310_);
v___x_1312_ = l_Lean_PrettyPrinter_Formatter_tokenWithAntiquot_formatter(v___x_1311_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_);
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_formatter___boxed(lean_object* v_sym_1313_, lean_object* v_asciiSym_1314_, lean_object* v_preserveForPP_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_){
_start:
{
uint8_t v_preserveForPP_boxed_1321_; lean_object* v_res_1322_; 
v_preserveForPP_boxed_1321_ = lean_unbox(v_preserveForPP_1315_);
v_res_1322_ = l_Lean_Parser_unicodeSymbol_formatter(v_sym_1313_, v_asciiSym_1314_, v_preserveForPP_boxed_1321_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_);
lean_dec(v_a_1319_);
lean_dec_ref(v_a_1318_);
lean_dec(v_a_1317_);
lean_dec_ref(v_a_1316_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_parenthesizer(lean_object* v_sym_1323_, lean_object* v_asciiSym_1324_, uint8_t v_preserveForPP_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1331_ = lean_box(v_preserveForPP_1325_);
v___x_1332_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_unicodeSymbolNoAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1332_, 0, v_sym_1323_);
lean_closure_set(v___x_1332_, 1, v_asciiSym_1324_);
lean_closure_set(v___x_1332_, 2, v___x_1331_);
v___x_1333_ = l_Lean_PrettyPrinter_Parenthesizer_tokenWithAntiquot_parenthesizer(v___x_1332_, v_a_1326_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol_parenthesizer___boxed(lean_object* v_sym_1334_, lean_object* v_asciiSym_1335_, lean_object* v_preserveForPP_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_){
_start:
{
uint8_t v_preserveForPP_boxed_1342_; lean_object* v_res_1343_; 
v_preserveForPP_boxed_1342_ = lean_unbox(v_preserveForPP_1336_);
v_res_1343_ = l_Lean_Parser_unicodeSymbol_parenthesizer(v_sym_1334_, v_asciiSym_1335_, v_preserveForPP_boxed_1342_, v_a_1337_, v_a_1338_, v_a_1339_, v_a_1340_);
lean_dec(v_a_1340_);
lean_dec_ref(v_a_1339_);
lean_dec(v_a_1338_);
lean_dec_ref(v_a_1337_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter___redArg(lean_object* v_p_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_){
_start:
{
lean_object* v___x_1350_; 
lean_inc(v_a_1348_);
lean_inc_ref(v_a_1347_);
lean_inc(v_a_1346_);
lean_inc_ref(v_a_1345_);
v___x_1350_ = lean_apply_5(v_p_1344_, v_a_1345_, v_a_1346_, v_a_1347_, v_a_1348_, lean_box(0));
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter___redArg___boxed(lean_object* v_p_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l_Lean_Parser_withCache_formatter___redArg(v_p_1351_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_);
lean_dec(v_a_1355_);
lean_dec_ref(v_a_1354_);
lean_dec(v_a_1353_);
lean_dec_ref(v_a_1352_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter(lean_object* v_parserName_1358_, lean_object* v_p_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_){
_start:
{
lean_object* v___x_1365_; 
lean_inc(v_a_1363_);
lean_inc_ref(v_a_1362_);
lean_inc(v_a_1361_);
lean_inc_ref(v_a_1360_);
v___x_1365_ = lean_apply_5(v_p_1359_, v_a_1360_, v_a_1361_, v_a_1362_, v_a_1363_, lean_box(0));
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_formatter___boxed(lean_object* v_parserName_1366_, lean_object* v_p_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_Lean_Parser_withCache_formatter(v_parserName_1366_, v_p_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
lean_dec(v_a_1371_);
lean_dec_ref(v_a_1370_);
lean_dec(v_a_1369_);
lean_dec_ref(v_a_1368_);
lean_dec(v_parserName_1366_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer___redArg(lean_object* v_p_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_){
_start:
{
lean_object* v___x_1380_; 
lean_inc(v_a_1378_);
lean_inc_ref(v_a_1377_);
lean_inc(v_a_1376_);
lean_inc_ref(v_a_1375_);
v___x_1380_ = lean_apply_5(v_p_1374_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_, lean_box(0));
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer___redArg___boxed(lean_object* v_p_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Lean_Parser_withCache_parenthesizer___redArg(v_p_1381_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
lean_dec(v_a_1385_);
lean_dec_ref(v_a_1384_);
lean_dec(v_a_1383_);
lean_dec_ref(v_a_1382_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer(lean_object* v_parserName_1388_, lean_object* v_p_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_){
_start:
{
lean_object* v___x_1395_; 
lean_inc(v_a_1393_);
lean_inc_ref(v_a_1392_);
lean_inc(v_a_1391_);
lean_inc_ref(v_a_1390_);
v___x_1395_ = lean_apply_5(v_p_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_, lean_box(0));
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache_parenthesizer___boxed(lean_object* v_parserName_1396_, lean_object* v_p_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_){
_start:
{
lean_object* v_res_1403_; 
v_res_1403_ = l_Lean_Parser_withCache_parenthesizer(v_parserName_1396_, v_p_1397_, v_a_1398_, v_a_1399_, v_a_1400_, v_a_1401_);
lean_dec(v_a_1401_);
lean_dec_ref(v_a_1400_);
lean_dec(v_a_1399_);
lean_dec_ref(v_a_1398_);
lean_dec(v_parserName_1396_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_formatter(lean_object* v_p_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_){
_start:
{
lean_object* v___x_1410_; 
lean_inc(v_a_1408_);
lean_inc_ref(v_a_1407_);
lean_inc(v_a_1406_);
lean_inc_ref(v_a_1405_);
v___x_1410_ = lean_apply_5(v_p_1404_, v_a_1405_, v_a_1406_, v_a_1407_, v_a_1408_, lean_box(0));
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_formatter___boxed(lean_object* v_p_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_){
_start:
{
lean_object* v_res_1417_; 
v_res_1417_ = l_Lean_Parser_withResetCache_formatter(v_p_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_);
lean_dec(v_a_1415_);
lean_dec_ref(v_a_1414_);
lean_dec(v_a_1413_);
lean_dec_ref(v_a_1412_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_parenthesizer(lean_object* v_p_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_){
_start:
{
lean_object* v___x_1424_; 
lean_inc(v_a_1422_);
lean_inc_ref(v_a_1421_);
lean_inc(v_a_1420_);
lean_inc_ref(v_a_1419_);
v___x_1424_ = lean_apply_5(v_p_1418_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, lean_box(0));
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache_parenthesizer___boxed(lean_object* v_p_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l_Lean_Parser_withResetCache_parenthesizer(v_p_1425_, v_a_1426_, v_a_1427_, v_a_1428_, v_a_1429_);
lean_dec(v_a_1429_);
lean_dec_ref(v_a_1428_);
lean_dec(v_a_1427_);
lean_dec_ref(v_a_1426_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition_formatter(lean_object* v_p_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_){
_start:
{
lean_object* v___x_1438_; 
lean_inc(v_a_1436_);
lean_inc_ref(v_a_1435_);
lean_inc(v_a_1434_);
lean_inc_ref(v_a_1433_);
v___x_1438_ = lean_apply_5(v_p_1432_, v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_, lean_box(0));
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition_formatter___boxed(lean_object* v_p_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_){
_start:
{
lean_object* v_res_1445_; 
v_res_1445_ = l_Lean_Parser_withPosition_formatter(v_p_1439_, v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_);
lean_dec(v_a_1443_);
lean_dec_ref(v_a_1442_);
lean_dec(v_a_1441_);
lean_dec_ref(v_a_1440_);
return v_res_1445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak_formatter(lean_object* v_p_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_){
_start:
{
lean_object* v___x_1452_; 
lean_inc(v_a_1450_);
lean_inc_ref(v_a_1449_);
lean_inc(v_a_1448_);
lean_inc_ref(v_a_1447_);
v___x_1452_ = lean_apply_5(v_p_1446_, v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_, lean_box(0));
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak_formatter___boxed(lean_object* v_p_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l_Lean_Parser_withPositionAfterLinebreak_formatter(v_p_1453_, v_a_1454_, v_a_1455_, v_a_1456_, v_a_1457_);
lean_dec(v_a_1457_);
lean_dec_ref(v_a_1456_);
lean_dec(v_a_1455_);
lean_dec_ref(v_a_1454_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_formatter(lean_object* v_p_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_){
_start:
{
lean_object* v___x_1466_; 
lean_inc(v_a_1464_);
lean_inc_ref(v_a_1463_);
lean_inc(v_a_1462_);
lean_inc_ref(v_a_1461_);
v___x_1466_ = lean_apply_5(v_p_1460_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_, lean_box(0));
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_formatter___boxed(lean_object* v_p_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_){
_start:
{
lean_object* v_res_1473_; 
v_res_1473_ = l_Lean_Parser_withoutPosition_formatter(v_p_1467_, v_a_1468_, v_a_1469_, v_a_1470_, v_a_1471_);
lean_dec(v_a_1471_);
lean_dec_ref(v_a_1470_);
lean_dec(v_a_1469_);
lean_dec_ref(v_a_1468_);
return v_res_1473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_parenthesizer(lean_object* v_p_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_){
_start:
{
lean_object* v___x_1480_; 
lean_inc(v_a_1478_);
lean_inc_ref(v_a_1477_);
lean_inc(v_a_1476_);
lean_inc_ref(v_a_1475_);
v___x_1480_ = lean_apply_5(v_p_1474_, v_a_1475_, v_a_1476_, v_a_1477_, v_a_1478_, lean_box(0));
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition_parenthesizer___boxed(lean_object* v_p_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = l_Lean_Parser_withoutPosition_parenthesizer(v_p_1481_, v_a_1482_, v_a_1483_, v_a_1484_, v_a_1485_);
lean_dec(v_a_1485_);
lean_dec_ref(v_a_1484_);
lean_dec(v_a_1483_);
lean_dec_ref(v_a_1482_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter___redArg(lean_object* v_p_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_){
_start:
{
lean_object* v___x_1494_; 
lean_inc(v_a_1492_);
lean_inc_ref(v_a_1491_);
lean_inc(v_a_1490_);
lean_inc_ref(v_a_1489_);
v___x_1494_ = lean_apply_5(v_p_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_, lean_box(0));
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter___redArg___boxed(lean_object* v_p_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Lean_Parser_withForbidden_formatter___redArg(v_p_1495_, v_a_1496_, v_a_1497_, v_a_1498_, v_a_1499_);
lean_dec(v_a_1499_);
lean_dec_ref(v_a_1498_);
lean_dec(v_a_1497_);
lean_dec_ref(v_a_1496_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter(lean_object* v_tk_1502_, lean_object* v_p_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_){
_start:
{
lean_object* v___x_1509_; 
lean_inc(v_a_1507_);
lean_inc_ref(v_a_1506_);
lean_inc(v_a_1505_);
lean_inc_ref(v_a_1504_);
v___x_1509_ = lean_apply_5(v_p_1503_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, lean_box(0));
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_formatter___boxed(lean_object* v_tk_1510_, lean_object* v_p_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_Parser_withForbidden_formatter(v_tk_1510_, v_p_1511_, v_a_1512_, v_a_1513_, v_a_1514_, v_a_1515_);
lean_dec(v_a_1515_);
lean_dec_ref(v_a_1514_);
lean_dec(v_a_1513_);
lean_dec_ref(v_a_1512_);
lean_dec_ref(v_tk_1510_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer___redArg(lean_object* v_p_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_){
_start:
{
lean_object* v___x_1524_; 
lean_inc(v_a_1522_);
lean_inc_ref(v_a_1521_);
lean_inc(v_a_1520_);
lean_inc_ref(v_a_1519_);
v___x_1524_ = lean_apply_5(v_p_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, lean_box(0));
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer___redArg___boxed(lean_object* v_p_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lean_Parser_withForbidden_parenthesizer___redArg(v_p_1525_, v_a_1526_, v_a_1527_, v_a_1528_, v_a_1529_);
lean_dec(v_a_1529_);
lean_dec_ref(v_a_1528_);
lean_dec(v_a_1527_);
lean_dec_ref(v_a_1526_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer(lean_object* v_tk_1532_, lean_object* v_p_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_){
_start:
{
lean_object* v___x_1539_; 
lean_inc(v_a_1537_);
lean_inc_ref(v_a_1536_);
lean_inc(v_a_1535_);
lean_inc_ref(v_a_1534_);
v___x_1539_ = lean_apply_5(v_p_1533_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_, lean_box(0));
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden_parenthesizer___boxed(lean_object* v_tk_1540_, lean_object* v_p_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_Lean_Parser_withForbidden_parenthesizer(v_tk_1540_, v_p_1541_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_);
lean_dec(v_a_1545_);
lean_dec_ref(v_a_1544_);
lean_dec(v_a_1543_);
lean_dec_ref(v_a_1542_);
lean_dec_ref(v_tk_1540_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_formatter(lean_object* v_p_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_){
_start:
{
lean_object* v___x_1554_; 
lean_inc(v_a_1552_);
lean_inc_ref(v_a_1551_);
lean_inc(v_a_1550_);
lean_inc_ref(v_a_1549_);
v___x_1554_ = lean_apply_5(v_p_1548_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_, lean_box(0));
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_formatter___boxed(lean_object* v_p_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l_Lean_Parser_withoutForbidden_formatter(v_p_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
lean_dec(v_a_1559_);
lean_dec_ref(v_a_1558_);
lean_dec(v_a_1557_);
lean_dec_ref(v_a_1556_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_parenthesizer(lean_object* v_p_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_){
_start:
{
lean_object* v___x_1568_; 
lean_inc(v_a_1566_);
lean_inc_ref(v_a_1565_);
lean_inc(v_a_1564_);
lean_inc_ref(v_a_1563_);
v___x_1568_ = lean_apply_5(v_p_1562_, v_a_1563_, v_a_1564_, v_a_1565_, v_a_1566_, lean_box(0));
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden_parenthesizer___boxed(lean_object* v_p_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_){
_start:
{
lean_object* v_res_1575_; 
v_res_1575_ = l_Lean_Parser_withoutForbidden_parenthesizer(v_p_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
lean_dec(v_a_1573_);
lean_dec_ref(v_a_1572_);
lean_dec(v_a_1571_);
lean_dec_ref(v_a_1570_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_formatter(lean_object* v_p_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_){
_start:
{
lean_object* v___x_1582_; 
lean_inc(v_a_1580_);
lean_inc_ref(v_a_1579_);
lean_inc(v_a_1578_);
lean_inc_ref(v_a_1577_);
v___x_1582_ = lean_apply_5(v_p_1576_, v_a_1577_, v_a_1578_, v_a_1579_, v_a_1580_, lean_box(0));
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_formatter___boxed(lean_object* v_p_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Lean_Parser_incQuotDepth_formatter(v_p_1583_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_);
lean_dec(v_a_1587_);
lean_dec_ref(v_a_1586_);
lean_dec(v_a_1585_);
lean_dec_ref(v_a_1584_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_parenthesizer(lean_object* v_p_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_){
_start:
{
lean_object* v___x_1596_; 
lean_inc(v_a_1594_);
lean_inc_ref(v_a_1593_);
lean_inc(v_a_1592_);
lean_inc_ref(v_a_1591_);
v___x_1596_ = lean_apply_5(v_p_1590_, v_a_1591_, v_a_1592_, v_a_1593_, v_a_1594_, lean_box(0));
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth_parenthesizer___boxed(lean_object* v_p_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_Lean_Parser_incQuotDepth_parenthesizer(v_p_1597_, v_a_1598_, v_a_1599_, v_a_1600_, v_a_1601_);
lean_dec(v_a_1601_);
lean_dec_ref(v_a_1600_);
lean_dec(v_a_1599_);
lean_dec_ref(v_a_1598_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_formatter(lean_object* v_00___1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_){
_start:
{
lean_object* v___x_1610_; 
lean_inc(v_a_1608_);
lean_inc_ref(v_a_1607_);
lean_inc(v_a_1606_);
lean_inc_ref(v_a_1605_);
v___x_1610_ = lean_apply_5(v_00___1604_, v_a_1605_, v_a_1606_, v_a_1607_, v_a_1608_, lean_box(0));
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_formatter___boxed(lean_object* v_00___1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Lean_Parser_suppressInsideQuot_formatter(v_00___1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_);
lean_dec(v_a_1615_);
lean_dec_ref(v_a_1614_);
lean_dec(v_a_1613_);
lean_dec_ref(v_a_1612_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_parenthesizer(lean_object* v_00___1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_){
_start:
{
lean_object* v___x_1624_; 
lean_inc(v_a_1622_);
lean_inc_ref(v_a_1621_);
lean_inc(v_a_1620_);
lean_inc_ref(v_a_1619_);
v___x_1624_ = lean_apply_5(v_00___1618_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_, lean_box(0));
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot_parenthesizer___boxed(lean_object* v_00___1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lean_Parser_suppressInsideQuot_parenthesizer(v_00___1625_, v_a_1626_, v_a_1627_, v_a_1628_, v_a_1629_);
lean_dec(v_a_1629_);
lean_dec_ref(v_a_1628_);
lean_dec(v_a_1627_);
lean_dec_ref(v_a_1626_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter___redArg(lean_object* v_p_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v___x_1638_; 
lean_inc(v_a_1636_);
lean_inc_ref(v_a_1635_);
lean_inc(v_a_1634_);
lean_inc_ref(v_a_1633_);
v___x_1638_ = lean_apply_5(v_p_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_, lean_box(0));
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter___redArg___boxed(lean_object* v_p_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = l_Lean_Parser_evalInsideQuot_formatter___redArg(v_p_1639_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_);
lean_dec(v_a_1643_);
lean_dec_ref(v_a_1642_);
lean_dec(v_a_1641_);
lean_dec_ref(v_a_1640_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter(lean_object* v_declName_1646_, lean_object* v_p_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_){
_start:
{
lean_object* v___x_1653_; 
lean_inc(v_a_1651_);
lean_inc_ref(v_a_1650_);
lean_inc(v_a_1649_);
lean_inc_ref(v_a_1648_);
v___x_1653_ = lean_apply_5(v_p_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, lean_box(0));
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_formatter___boxed(lean_object* v_declName_1654_, lean_object* v_p_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l_Lean_Parser_evalInsideQuot_formatter(v_declName_1654_, v_p_1655_, v_a_1656_, v_a_1657_, v_a_1658_, v_a_1659_);
lean_dec(v_a_1659_);
lean_dec_ref(v_a_1658_);
lean_dec(v_a_1657_);
lean_dec_ref(v_a_1656_);
lean_dec(v_declName_1654_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer___redArg(lean_object* v_p_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_){
_start:
{
lean_object* v___x_1668_; 
lean_inc(v_a_1666_);
lean_inc_ref(v_a_1665_);
lean_inc(v_a_1664_);
lean_inc_ref(v_a_1663_);
v___x_1668_ = lean_apply_5(v_p_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, lean_box(0));
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer___redArg___boxed(lean_object* v_p_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_Lean_Parser_evalInsideQuot_parenthesizer___redArg(v_p_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
lean_dec(v_a_1673_);
lean_dec_ref(v_a_1672_);
lean_dec(v_a_1671_);
lean_dec_ref(v_a_1670_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer(lean_object* v_declName_1676_, lean_object* v_p_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_){
_start:
{
lean_object* v___x_1683_; 
lean_inc(v_a_1681_);
lean_inc_ref(v_a_1680_);
lean_inc(v_a_1679_);
lean_inc_ref(v_a_1678_);
v___x_1683_ = lean_apply_5(v_p_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, lean_box(0));
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_evalInsideQuot_parenthesizer___boxed(lean_object* v_declName_1684_, lean_object* v_p_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_){
_start:
{
lean_object* v_res_1691_; 
v_res_1691_ = l_Lean_Parser_evalInsideQuot_parenthesizer(v_declName_1684_, v_p_1685_, v_a_1686_, v_a_1687_, v_a_1688_, v_a_1689_);
lean_dec(v_a_1689_);
lean_dec_ref(v_a_1688_);
lean_dec(v_a_1687_);
lean_dec_ref(v_a_1686_);
lean_dec(v_declName_1684_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_formatter(lean_object* v_p_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_, lean_object* v_a_1695_, lean_object* v_a_1696_){
_start:
{
lean_object* v___x_1698_; 
lean_inc(v_a_1696_);
lean_inc_ref(v_a_1695_);
lean_inc(v_a_1694_);
lean_inc_ref(v_a_1693_);
v___x_1698_ = lean_apply_5(v_p_1692_, v_a_1693_, v_a_1694_, v_a_1695_, v_a_1696_, lean_box(0));
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_formatter___boxed(lean_object* v_p_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l_Lean_Parser_withOpen_formatter(v_p_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_);
lean_dec(v_a_1703_);
lean_dec_ref(v_a_1702_);
lean_dec(v_a_1701_);
lean_dec_ref(v_a_1700_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_parenthesizer(lean_object* v_p_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_){
_start:
{
lean_object* v___x_1712_; 
lean_inc(v_a_1710_);
lean_inc_ref(v_a_1709_);
lean_inc(v_a_1708_);
lean_inc_ref(v_a_1707_);
v___x_1712_ = lean_apply_5(v_p_1706_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_, lean_box(0));
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpen_parenthesizer___boxed(lean_object* v_p_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lean_Parser_withOpen_parenthesizer(v_p_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_);
lean_dec(v_a_1717_);
lean_dec_ref(v_a_1716_);
lean_dec(v_a_1715_);
lean_dec_ref(v_a_1714_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_formatter(lean_object* v_p_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v___x_1726_; 
lean_inc(v_a_1724_);
lean_inc_ref(v_a_1723_);
lean_inc(v_a_1722_);
lean_inc_ref(v_a_1721_);
v___x_1726_ = lean_apply_5(v_p_1720_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_, lean_box(0));
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_formatter___boxed(lean_object* v_p_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_){
_start:
{
lean_object* v_res_1733_; 
v_res_1733_ = l_Lean_Parser_withOpenDecl_formatter(v_p_1727_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_);
lean_dec(v_a_1731_);
lean_dec_ref(v_a_1730_);
lean_dec(v_a_1729_);
lean_dec_ref(v_a_1728_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_parenthesizer(lean_object* v_p_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v___x_1740_; 
lean_inc(v_a_1738_);
lean_inc_ref(v_a_1737_);
lean_inc(v_a_1736_);
lean_inc_ref(v_a_1735_);
v___x_1740_ = lean_apply_5(v_p_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_, lean_box(0));
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withOpenDecl_parenthesizer___boxed(lean_object* v_p_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l_Lean_Parser_withOpenDecl_parenthesizer(v_p_1741_, v_a_1742_, v_a_1743_, v_a_1744_, v_a_1745_);
lean_dec(v_a_1745_);
lean_dec_ref(v_a_1744_);
lean_dec(v_a_1743_);
lean_dec_ref(v_a_1742_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter___redArg(lean_object* v_p_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_){
_start:
{
lean_object* v___x_1754_; 
lean_inc(v_a_1752_);
lean_inc_ref(v_a_1751_);
lean_inc(v_a_1750_);
lean_inc_ref(v_a_1749_);
v___x_1754_ = lean_apply_5(v_p_1748_, v_a_1749_, v_a_1750_, v_a_1751_, v_a_1752_, lean_box(0));
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter___redArg___boxed(lean_object* v_p_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l_Lean_Parser_dbgTraceState_formatter___redArg(v_p_1755_, v_a_1756_, v_a_1757_, v_a_1758_, v_a_1759_);
lean_dec(v_a_1759_);
lean_dec_ref(v_a_1758_);
lean_dec(v_a_1757_);
lean_dec_ref(v_a_1756_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter(lean_object* v_label_1762_, lean_object* v_p_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_){
_start:
{
lean_object* v___x_1769_; 
lean_inc(v_a_1767_);
lean_inc_ref(v_a_1766_);
lean_inc(v_a_1765_);
lean_inc_ref(v_a_1764_);
v___x_1769_ = lean_apply_5(v_p_1763_, v_a_1764_, v_a_1765_, v_a_1766_, v_a_1767_, lean_box(0));
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_formatter___boxed(lean_object* v_label_1770_, lean_object* v_p_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lean_Parser_dbgTraceState_formatter(v_label_1770_, v_p_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_);
lean_dec(v_a_1775_);
lean_dec_ref(v_a_1774_);
lean_dec(v_a_1773_);
lean_dec_ref(v_a_1772_);
lean_dec_ref(v_label_1770_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer___redArg(lean_object* v_p_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_){
_start:
{
lean_object* v___x_1784_; 
lean_inc(v_a_1782_);
lean_inc_ref(v_a_1781_);
lean_inc(v_a_1780_);
lean_inc_ref(v_a_1779_);
v___x_1784_ = lean_apply_5(v_p_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_, lean_box(0));
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer___redArg___boxed(lean_object* v_p_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l_Lean_Parser_dbgTraceState_parenthesizer___redArg(v_p_1785_, v_a_1786_, v_a_1787_, v_a_1788_, v_a_1789_);
lean_dec(v_a_1789_);
lean_dec_ref(v_a_1788_);
lean_dec(v_a_1787_);
lean_dec_ref(v_a_1786_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer(lean_object* v_label_1792_, lean_object* v_p_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v___x_1799_; 
lean_inc(v_a_1797_);
lean_inc_ref(v_a_1796_);
lean_inc(v_a_1795_);
lean_inc_ref(v_a_1794_);
v___x_1799_ = lean_apply_5(v_p_1793_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_, lean_box(0));
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState_parenthesizer___boxed(lean_object* v_label_1800_, lean_object* v_p_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l_Lean_Parser_dbgTraceState_parenthesizer(v_label_1800_, v_p_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
lean_dec(v_a_1805_);
lean_dec_ref(v_a_1804_);
lean_dec(v_a_1803_);
lean_dec_ref(v_a_1802_);
lean_dec_ref(v_label_1800_);
return v_res_1807_;
}
}
static lean_object* _init_l_Lean_Parser_optional_formatter___closed__0(void){
_start:
{
lean_object* v___x_1808_; 
v___x_1808_ = lean_mk_string_unchecked("optional", 8, 8);
return v___x_1808_;
}
}
static lean_object* _init_l_Lean_Parser_optional_formatter___closed__1(void){
_start:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1809_ = lean_obj_once(&l_Lean_Parser_optional_formatter___closed__0, &l_Lean_Parser_optional_formatter___closed__0_once, _init_l_Lean_Parser_optional_formatter___closed__0);
v___x_1810_ = l_Lean_Name_mkStr1(v___x_1809_);
return v___x_1810_;
}
}
static lean_object* _init_l_Lean_Parser_optional_formatter___closed__2(void){
_start:
{
lean_object* v___x_1811_; 
v___x_1811_ = lean_mk_string_unchecked("\?", 1, 1);
return v___x_1811_;
}
}
static lean_object* _init_l_Lean_Parser_optional_formatter___closed__3(void){
_start:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1812_ = lean_obj_once(&l_Lean_Parser_optional_formatter___closed__2, &l_Lean_Parser_optional_formatter___closed__2_once, _init_l_Lean_Parser_optional_formatter___closed__2);
v___x_1813_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter___boxed), 6, 1);
lean_closure_set(v___x_1813_, 0, v___x_1812_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optional_formatter(lean_object* v_p_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_){
_start:
{
lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1820_ = lean_obj_once(&l_Lean_Parser_optional_formatter___closed__1, &l_Lean_Parser_optional_formatter___closed__1_once, _init_l_Lean_Parser_optional_formatter___closed__1);
v___x_1821_ = lean_obj_once(&l_Lean_Parser_optional_formatter___closed__3, &l_Lean_Parser_optional_formatter___closed__3_once, _init_l_Lean_Parser_optional_formatter___closed__3);
v___x_1822_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed), 8, 3);
lean_closure_set(v___x_1822_, 0, v___x_1820_);
lean_closure_set(v___x_1822_, 1, v_p_1814_);
lean_closure_set(v___x_1822_, 2, v___x_1821_);
v___x_1823_ = l_Lean_PrettyPrinter_Formatter_optionalNoAntiquot_formatter(v___x_1822_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optional_formatter___boxed(lean_object* v_p_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Lean_Parser_optional_formatter(v_p_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_);
lean_dec(v_a_1828_);
lean_dec_ref(v_a_1827_);
lean_dec(v_a_1826_);
lean_dec_ref(v_a_1825_);
return v_res_1830_;
}
}
static lean_object* _init_l_Lean_Parser_optional_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1831_ = lean_obj_once(&l_Lean_Parser_optional_formatter___closed__2, &l_Lean_Parser_optional_formatter___closed__2_once, _init_l_Lean_Parser_optional_formatter___closed__2);
v___x_1832_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_1832_, 0, v___x_1831_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optional_parenthesizer(lean_object* v_p_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_){
_start:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1839_ = lean_obj_once(&l_Lean_Parser_optional_formatter___closed__1, &l_Lean_Parser_optional_formatter___closed__1_once, _init_l_Lean_Parser_optional_formatter___closed__1);
v___x_1840_ = lean_obj_once(&l_Lean_Parser_optional_parenthesizer___closed__0, &l_Lean_Parser_optional_parenthesizer___closed__0_once, _init_l_Lean_Parser_optional_parenthesizer___closed__0);
v___x_1841_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1841_, 0, v___x_1839_);
lean_closure_set(v___x_1841_, 1, v_p_1833_);
lean_closure_set(v___x_1841_, 2, v___x_1840_);
v___x_1842_ = l_Lean_PrettyPrinter_Parenthesizer_visitArgs(v___x_1841_, v_a_1834_, v_a_1835_, v_a_1836_, v_a_1837_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optional_parenthesizer___boxed(lean_object* v_p_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l_Lean_Parser_optional_parenthesizer(v_p_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
lean_dec(v_a_1847_);
lean_dec_ref(v_a_1846_);
lean_dec(v_a_1845_);
lean_dec_ref(v_a_1844_);
return v_res_1849_;
}
}
static lean_object* _init_l_Lean_Parser_optional___closed__0(void){
_start:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1850_ = lean_obj_once(&l_Lean_Parser_optional_formatter___closed__2, &l_Lean_Parser_optional_formatter___closed__2_once, _init_l_Lean_Parser_optional_formatter___closed__2);
v___x_1851_ = l_Lean_Parser_symbol(v___x_1850_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optional(lean_object* v_p_1852_){
_start:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1853_ = lean_obj_once(&l_Lean_Parser_optional_formatter___closed__1, &l_Lean_Parser_optional_formatter___closed__1_once, _init_l_Lean_Parser_optional_formatter___closed__1);
v___x_1854_ = lean_obj_once(&l_Lean_Parser_optional___closed__0, &l_Lean_Parser_optional___closed__0_once, _init_l_Lean_Parser_optional___closed__0);
v___x_1855_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_1853_, v_p_1852_, v___x_1854_);
v___x_1856_ = l_Lean_Parser_optionalNoAntiquot(v___x_1855_);
return v___x_1856_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0(void){
_start:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1857_ = lean_obj_once(&l_Lean_Parser_optional_formatter___closed__0, &l_Lean_Parser_optional_formatter___closed__0_once, _init_l_Lean_Parser_optional_formatter___closed__0);
v___x_1858_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_1859_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_1860_ = l_Lean_Name_mkStr3(v___x_1859_, v___x_1858_, v___x_1857_);
return v___x_1860_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__1(void){
_start:
{
lean_object* v___x_1861_; 
v___x_1861_ = lean_mk_string_unchecked("The parser `optional(p)`, or `(p)\?`, parses `p` if it succeeds,\notherwise it succeeds with no value.\n\nNote that because `\?` is a legal identifier character, one must write `(p)\?` or `p \?` for\nit to parse correctly. `ident\?` will not work; one must write `(ident)\?` instead.\n\nThis parser has arity 1: it produces a `nullKind` node containing either zero arguments\n(for the `none` case) or the list of arguments produced by `p`.\n(In particular, if `p` has arity 0 then the two cases are not differentiated!) ", 506, 506);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1(){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; 
v___x_1863_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__0);
v___x_1864_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___closed__1);
v___x_1865_ = l_Lean_addBuiltinDocString(v___x_1863_, v___x_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1___boxed(lean_object* v_a_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1();
return v_res_1867_;
}
}
static lean_object* _init_l_Lean_Parser_many_formatter___closed__0(void){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = lean_mk_string_unchecked("many", 4, 4);
return v___x_1868_;
}
}
static lean_object* _init_l_Lean_Parser_many_formatter___closed__1(void){
_start:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1869_ = lean_obj_once(&l_Lean_Parser_many_formatter___closed__0, &l_Lean_Parser_many_formatter___closed__0_once, _init_l_Lean_Parser_many_formatter___closed__0);
v___x_1870_ = l_Lean_Name_mkStr1(v___x_1869_);
return v___x_1870_;
}
}
static lean_object* _init_l_Lean_Parser_many_formatter___closed__2(void){
_start:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1871_ = lean_obj_once(&l_Lean_Parser_sepByElemParser_formatter___closed__2, &l_Lean_Parser_sepByElemParser_formatter___closed__2_once, _init_l_Lean_Parser_sepByElemParser_formatter___closed__2);
v___x_1872_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter___boxed), 6, 1);
lean_closure_set(v___x_1872_, 0, v___x_1871_);
return v___x_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many_formatter(lean_object* v_p_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1879_ = lean_obj_once(&l_Lean_Parser_many_formatter___closed__1, &l_Lean_Parser_many_formatter___closed__1_once, _init_l_Lean_Parser_many_formatter___closed__1);
v___x_1880_ = lean_obj_once(&l_Lean_Parser_many_formatter___closed__2, &l_Lean_Parser_many_formatter___closed__2_once, _init_l_Lean_Parser_many_formatter___closed__2);
v___x_1881_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed), 8, 3);
lean_closure_set(v___x_1881_, 0, v___x_1879_);
lean_closure_set(v___x_1881_, 1, v_p_1873_);
lean_closure_set(v___x_1881_, 2, v___x_1880_);
v___x_1882_ = l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter(v___x_1881_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many_formatter___boxed(lean_object* v_p_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lean_Parser_many_formatter(v_p_1883_, v_a_1884_, v_a_1885_, v_a_1886_, v_a_1887_);
lean_dec(v_a_1887_);
lean_dec_ref(v_a_1886_);
lean_dec(v_a_1885_);
lean_dec_ref(v_a_1884_);
return v_res_1889_;
}
}
static lean_object* _init_l_Lean_Parser_many_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1890_ = lean_obj_once(&l_Lean_Parser_sepByElemParser_formatter___closed__2, &l_Lean_Parser_sepByElemParser_formatter___closed__2_once, _init_l_Lean_Parser_sepByElemParser_formatter___closed__2);
v___x_1891_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_1891_, 0, v___x_1890_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many_parenthesizer(lean_object* v_p_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_){
_start:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1898_ = lean_obj_once(&l_Lean_Parser_many_formatter___closed__1, &l_Lean_Parser_many_formatter___closed__1_once, _init_l_Lean_Parser_many_formatter___closed__1);
v___x_1899_ = lean_obj_once(&l_Lean_Parser_many_parenthesizer___closed__0, &l_Lean_Parser_many_parenthesizer___closed__0_once, _init_l_Lean_Parser_many_parenthesizer___closed__0);
v___x_1900_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1900_, 0, v___x_1898_);
lean_closure_set(v___x_1900_, 1, v_p_1892_);
lean_closure_set(v___x_1900_, 2, v___x_1899_);
v___x_1901_ = l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer(v___x_1900_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many_parenthesizer___boxed(lean_object* v_p_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l_Lean_Parser_many_parenthesizer(v_p_1902_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_);
lean_dec(v_a_1906_);
lean_dec_ref(v_a_1905_);
lean_dec(v_a_1904_);
lean_dec_ref(v_a_1903_);
return v_res_1908_;
}
}
static lean_object* _init_l_Lean_Parser_many___closed__0(void){
_start:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = lean_obj_once(&l_Lean_Parser_sepByElemParser_formatter___closed__2, &l_Lean_Parser_sepByElemParser_formatter___closed__2_once, _init_l_Lean_Parser_sepByElemParser_formatter___closed__2);
v___x_1910_ = l_Lean_Parser_symbol(v___x_1909_);
return v___x_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many(lean_object* v_p_1911_){
_start:
{
lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1912_ = lean_obj_once(&l_Lean_Parser_many_formatter___closed__1, &l_Lean_Parser_many_formatter___closed__1_once, _init_l_Lean_Parser_many_formatter___closed__1);
v___x_1913_ = lean_obj_once(&l_Lean_Parser_many___closed__0, &l_Lean_Parser_many___closed__0_once, _init_l_Lean_Parser_many___closed__0);
v___x_1914_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_1912_, v_p_1911_, v___x_1913_);
v___x_1915_ = l_Lean_Parser_manyNoAntiquot(v___x_1914_);
return v___x_1915_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0(void){
_start:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1916_ = lean_obj_once(&l_Lean_Parser_many_formatter___closed__0, &l_Lean_Parser_many_formatter___closed__0_once, _init_l_Lean_Parser_many_formatter___closed__0);
v___x_1917_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_1918_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_1919_ = l_Lean_Name_mkStr3(v___x_1918_, v___x_1917_, v___x_1916_);
return v___x_1919_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__1(void){
_start:
{
lean_object* v___x_1920_; 
v___x_1920_ = lean_mk_string_unchecked("The parser `many(p)`, or `p*`, repeats `p` until it fails, and returns the list of results.\n\nThe argument `p` is \"auto-grouped\", meaning that if the arity is greater than 1 it will be\nautomatically replaced by `group(p)` to ensure that it produces exactly 1 value.\n\nThis parser has arity 1: it produces a `nullKind` node containing one argument for each\ninvocation of `p` (or `group(p)`). ", 389, 389);
return v___x_1920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1(){
_start:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1922_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__0);
v___x_1923_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___closed__1);
v___x_1924_ = l_Lean_addBuiltinDocString(v___x_1922_, v___x_1923_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1___boxed(lean_object* v_a_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1();
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1_formatter(lean_object* v_p_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1933_ = lean_obj_once(&l_Lean_Parser_many_formatter___closed__1, &l_Lean_Parser_many_formatter___closed__1_once, _init_l_Lean_Parser_many_formatter___closed__1);
v___x_1934_ = lean_obj_once(&l_Lean_Parser_many_formatter___closed__2, &l_Lean_Parser_many_formatter___closed__2_once, _init_l_Lean_Parser_many_formatter___closed__2);
v___x_1935_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed), 8, 3);
lean_closure_set(v___x_1935_, 0, v___x_1933_);
lean_closure_set(v___x_1935_, 1, v_p_1927_);
lean_closure_set(v___x_1935_, 2, v___x_1934_);
v___x_1936_ = l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter(v___x_1935_, v_a_1928_, v_a_1929_, v_a_1930_, v_a_1931_);
return v___x_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1_formatter___boxed(lean_object* v_p_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_, lean_object* v_a_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l_Lean_Parser_many1_formatter(v_p_1937_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_);
lean_dec(v_a_1941_);
lean_dec_ref(v_a_1940_);
lean_dec(v_a_1939_);
lean_dec_ref(v_a_1938_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1_parenthesizer(lean_object* v_p_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1950_ = lean_obj_once(&l_Lean_Parser_many_formatter___closed__1, &l_Lean_Parser_many_formatter___closed__1_once, _init_l_Lean_Parser_many_formatter___closed__1);
v___x_1951_ = lean_obj_once(&l_Lean_Parser_many_parenthesizer___closed__0, &l_Lean_Parser_many_parenthesizer___closed__0_once, _init_l_Lean_Parser_many_parenthesizer___closed__0);
v___x_1952_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1952_, 0, v___x_1950_);
lean_closure_set(v___x_1952_, 1, v_p_1944_);
lean_closure_set(v___x_1952_, 2, v___x_1951_);
v___x_1953_ = l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer(v___x_1952_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1_parenthesizer___boxed(lean_object* v_p_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Lean_Parser_many1_parenthesizer(v_p_1954_, v_a_1955_, v_a_1956_, v_a_1957_, v_a_1958_);
lean_dec(v_a_1958_);
lean_dec_ref(v_a_1957_);
lean_dec(v_a_1956_);
lean_dec_ref(v_a_1955_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1(lean_object* v_p_1961_){
_start:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1962_ = lean_obj_once(&l_Lean_Parser_many_formatter___closed__1, &l_Lean_Parser_many_formatter___closed__1_once, _init_l_Lean_Parser_many_formatter___closed__1);
v___x_1963_ = lean_obj_once(&l_Lean_Parser_many___closed__0, &l_Lean_Parser_many___closed__0_once, _init_l_Lean_Parser_many___closed__0);
v___x_1964_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_1962_, v_p_1961_, v___x_1963_);
v___x_1965_ = l_Lean_Parser_many1NoAntiquot(v___x_1964_);
return v___x_1965_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__0(void){
_start:
{
lean_object* v___x_1966_; 
v___x_1966_ = lean_mk_string_unchecked("many1", 5, 5);
return v___x_1966_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1(void){
_start:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1967_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__0);
v___x_1968_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_1969_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_1970_ = l_Lean_Name_mkStr3(v___x_1969_, v___x_1968_, v___x_1967_);
return v___x_1970_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__2(void){
_start:
{
lean_object* v___x_1971_; 
v___x_1971_ = lean_mk_string_unchecked("The parser `many1(p)`, or `p+`, repeats `p` until it fails, and returns the list of results.\n`p` must succeed at least once, or this parser will fail.\n\nNote that this parser produces the same parse tree as the `many(p)` / `p*` combinator,\nand one matches both `p*` and `p+` using `$[ .. ]*` syntax in a syntax match.\n(There is no `$[ .. ]+` syntax.)\n\nThe argument `p` is \"auto-grouped\", meaning that if the arity is greater than 1 it will be\nautomatically replaced by `group(p)` to ensure that it produces exactly 1 value.\n\nThis parser has arity 1: it produces a `nullKind` node containing one argument for each\ninvocation of `p` (or `group(p)`). ", 647, 647);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1(){
_start:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1973_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__1);
v___x_1974_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___closed__2);
v___x_1975_ = l_Lean_addBuiltinDocString(v___x_1973_, v___x_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1___boxed(lean_object* v_a_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1();
return v_res_1977_;
}
}
static lean_object* _init_l_Lean_Parser_ident_formatter___closed__0(void){
_start:
{
lean_object* v___x_1978_; 
v___x_1978_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_1978_;
}
}
static lean_object* _init_l_Lean_Parser_ident_formatter___closed__1(void){
_start:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1979_ = lean_obj_once(&l_Lean_Parser_ident_formatter___closed__0, &l_Lean_Parser_ident_formatter___closed__0_once, _init_l_Lean_Parser_ident_formatter___closed__0);
v___x_1980_ = l_Lean_Name_mkStr1(v___x_1979_);
return v___x_1980_;
}
}
static lean_object* _init_l_Lean_Parser_ident_formatter___closed__2(void){
_start:
{
uint8_t v___x_1981_; uint8_t v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; 
v___x_1981_ = 0;
v___x_1982_ = 1;
v___x_1983_ = lean_obj_once(&l_Lean_Parser_ident_formatter___closed__1, &l_Lean_Parser_ident_formatter___closed__1_once, _init_l_Lean_Parser_ident_formatter___closed__1);
v___x_1984_ = lean_obj_once(&l_Lean_Parser_ident_formatter___closed__0, &l_Lean_Parser_ident_formatter___closed__0_once, _init_l_Lean_Parser_ident_formatter___closed__0);
v___x_1985_ = lean_box(v___x_1982_);
v___x_1986_ = lean_box(v___x_1981_);
v___x_1987_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_1987_, 0, v___x_1984_);
lean_closure_set(v___x_1987_, 1, v___x_1983_);
lean_closure_set(v___x_1987_, 2, v___x_1985_);
lean_closure_set(v___x_1987_, 3, v___x_1986_);
return v___x_1987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ident_formatter(lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_){
_start:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1993_ = lean_obj_once(&l_Lean_Parser_ident_formatter___closed__2, &l_Lean_Parser_ident_formatter___closed__2_once, _init_l_Lean_Parser_ident_formatter___closed__2);
v___x_1994_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_identNoAntiquot_formatter___boxed), 5, 0);
v___x_1995_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1993_, v___x_1994_, v_a_1988_, v_a_1989_, v_a_1990_, v_a_1991_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ident_formatter___boxed(lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_){
_start:
{
lean_object* v_res_2001_; 
v_res_2001_ = l_Lean_Parser_ident_formatter(v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_);
lean_dec(v_a_1999_);
lean_dec_ref(v_a_1998_);
lean_dec(v_a_1997_);
lean_dec_ref(v_a_1996_);
return v_res_2001_;
}
}
static lean_object* _init_l_Lean_Parser_ident_parenthesizer___closed__0(void){
_start:
{
uint8_t v___x_2002_; uint8_t v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2002_ = 0;
v___x_2003_ = 1;
v___x_2004_ = lean_obj_once(&l_Lean_Parser_ident_formatter___closed__1, &l_Lean_Parser_ident_formatter___closed__1_once, _init_l_Lean_Parser_ident_formatter___closed__1);
v___x_2005_ = lean_obj_once(&l_Lean_Parser_ident_formatter___closed__0, &l_Lean_Parser_ident_formatter___closed__0_once, _init_l_Lean_Parser_ident_formatter___closed__0);
v___x_2006_ = lean_box(v___x_2003_);
v___x_2007_ = lean_box(v___x_2002_);
v___x_2008_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_2008_, 0, v___x_2005_);
lean_closure_set(v___x_2008_, 1, v___x_2004_);
lean_closure_set(v___x_2008_, 2, v___x_2006_);
lean_closure_set(v___x_2008_, 3, v___x_2007_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ident_parenthesizer(lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_){
_start:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2014_ = lean_obj_once(&l_Lean_Parser_ident_parenthesizer___closed__0, &l_Lean_Parser_ident_parenthesizer___closed__0_once, _init_l_Lean_Parser_ident_parenthesizer___closed__0);
v___x_2015_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_identNoAntiquot_parenthesizer___boxed), 5, 0);
v___x_2016_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2014_, v___x_2015_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ident_parenthesizer___boxed(lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v_res_2022_; 
v_res_2022_ = l_Lean_Parser_ident_parenthesizer(v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_);
lean_dec(v_a_2020_);
lean_dec_ref(v_a_2019_);
lean_dec(v_a_2018_);
lean_dec_ref(v_a_2017_);
return v_res_2022_;
}
}
static lean_object* _init_l_Lean_Parser_ident___closed__0(void){
_start:
{
uint8_t v___x_2023_; uint8_t v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2023_ = 0;
v___x_2024_ = 1;
v___x_2025_ = lean_obj_once(&l_Lean_Parser_ident_formatter___closed__1, &l_Lean_Parser_ident_formatter___closed__1_once, _init_l_Lean_Parser_ident_formatter___closed__1);
v___x_2026_ = lean_obj_once(&l_Lean_Parser_ident_formatter___closed__0, &l_Lean_Parser_ident_formatter___closed__0_once, _init_l_Lean_Parser_ident_formatter___closed__0);
v___x_2027_ = l_Lean_Parser_mkAntiquot(v___x_2026_, v___x_2025_, v___x_2024_, v___x_2023_);
return v___x_2027_;
}
}
static lean_object* _init_l_Lean_Parser_ident___closed__1(void){
_start:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2028_ = l_Lean_Parser_identNoAntiquot;
v___x_2029_ = lean_obj_once(&l_Lean_Parser_ident___closed__0, &l_Lean_Parser_ident___closed__0_once, _init_l_Lean_Parser_ident___closed__0);
v___x_2030_ = l_Lean_Parser_withAntiquot(v___x_2029_, v___x_2028_);
return v___x_2030_;
}
}
static lean_object* _init_l_Lean_Parser_ident(void){
_start:
{
lean_object* v___x_2031_; 
v___x_2031_ = lean_obj_once(&l_Lean_Parser_ident___closed__1, &l_Lean_Parser_ident___closed__1_once, _init_l_Lean_Parser_ident___closed__1);
return v___x_2031_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0(void){
_start:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2032_ = lean_obj_once(&l_Lean_Parser_ident_formatter___closed__0, &l_Lean_Parser_ident_formatter___closed__0_once, _init_l_Lean_Parser_ident_formatter___closed__0);
v___x_2033_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_2034_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_2035_ = l_Lean_Name_mkStr3(v___x_2034_, v___x_2033_, v___x_2032_);
return v___x_2035_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__1(void){
_start:
{
lean_object* v___x_2036_; 
v___x_2036_ = lean_mk_string_unchecked("The parser `ident` parses a single identifier, possibly with namespaces, such as `foo` or\n`bar.baz`. The identifier must not be a declared token, so for example it will not match `\"def\"`\nbecause `def` is a keyword token. Tokens are implicitly declared by using them in string literals\nin parser declarations, so `syntax foo := \"bla\"` will make `bla` no longer legal as an identifier.\n\nIdentifiers can contain special characters or keywords if they are escaped using the `«»` characters:\n`«def»` is an identifier named `def`, and `«x»` is treated the same as `x`. This is useful for\nusing disallowed characters in identifiers such as `«foo.bar».baz` or `«hello world»`.\n\nThis parser has arity 1: it produces a `Syntax.ident` node containing the parsed identifier.\nYou can use `TSyntax.getId` to extract the name from the resulting syntax object. ", 855, 845);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1(){
_start:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2038_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__0);
v___x_2039_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___closed__1);
v___x_2040_ = l_Lean_addBuiltinDocString(v___x_2038_, v___x_2039_);
return v___x_2040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1___boxed(lean_object* v_a_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1();
return v_res_2042_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0(void){
_start:
{
lean_object* v___x_2043_; 
v___x_2043_ = lean_mk_string_unchecked(".", 1, 1);
return v___x_2043_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__1(void){
_start:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2044_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0);
v___x_2045_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter___boxed), 6, 1);
lean_closure_set(v___x_2045_, 0, v___x_2044_);
return v___x_2045_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__2(void){
_start:
{
lean_object* v___x_2046_; lean_object* v___f_2047_; lean_object* v___x_2048_; 
v___x_2046_ = lean_alloc_closure((void*)(l_Lean_Parser_ident_formatter___boxed), 5, 0);
v___f_2047_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__0, &l_Lean_Parser_mkAntiquot_formatter___closed__0_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__0);
v___x_2048_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2048_, 0, v___f_2047_);
lean_closure_set(v___x_2048_, 1, v___x_2046_);
return v___x_2048_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__3(void){
_start:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2049_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__2, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__2_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__2);
v___x_2050_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__1, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__1_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__1);
v___x_2051_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2051_, 0, v___x_2050_);
lean_closure_set(v___x_2051_, 1, v___x_2049_);
return v___x_2051_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__4(void){
_start:
{
lean_object* v___x_2052_; lean_object* v___f_2053_; lean_object* v___x_2054_; 
v___x_2052_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__3, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__3_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__3);
v___f_2053_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__0, &l_Lean_Parser_mkAntiquot_formatter___closed__0_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__0);
v___x_2054_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2054_, 0, v___f_2053_);
lean_closure_set(v___x_2054_, 1, v___x_2052_);
return v___x_2054_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__5(void){
_start:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; 
v___x_2055_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__4, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__4_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__4);
v___x_2056_ = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter___boxed), 6, 1);
lean_closure_set(v___x_2056_, 0, v___x_2055_);
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter(lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_){
_start:
{
lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___x_2062_ = lean_alloc_closure((void*)(l_Lean_Parser_ident_formatter___boxed), 5, 0);
v___x_2063_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__5, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__5_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__5);
v___x_2064_ = l_Lean_PrettyPrinter_Formatter_andthen_formatter(v___x_2062_, v___x_2063_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_);
return v___x_2064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_formatter___boxed(lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_Lean_Parser_identWithPartialTrailingDot_formatter(v_a_2065_, v_a_2066_, v_a_2067_, v_a_2068_);
lean_dec(v_a_2068_);
lean_dec_ref(v_a_2067_);
lean_dec(v_a_2066_);
lean_dec_ref(v_a_2065_);
return v_res_2070_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2071_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0);
v___x_2072_ = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2072_, 0, v___x_2071_);
return v___x_2072_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2073_ = lean_alloc_closure((void*)(l_Lean_Parser_ident_parenthesizer___boxed), 5, 0);
v___x_2074_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 5, 0);
v___x_2075_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2075_, 0, v___x_2074_);
lean_closure_set(v___x_2075_, 1, v___x_2073_);
return v___x_2075_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___x_2076_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__1, &l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__1_once, _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__1);
v___x_2077_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__0, &l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__0_once, _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__0);
v___x_2078_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2078_, 0, v___x_2077_);
lean_closure_set(v___x_2078_, 1, v___x_2076_);
return v___x_2078_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2079_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__2, &l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__2_once, _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__2);
v___x_2080_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 5, 0);
v___x_2081_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2081_, 0, v___x_2080_);
lean_closure_set(v___x_2081_, 1, v___x_2079_);
return v___x_2081_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_2082_; lean_object* v___x_2083_; 
v___x_2082_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__3, &l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__3_once, _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__3);
v___x_2083_ = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2083_, 0, v___x_2082_);
return v___x_2083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer(lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_){
_start:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2089_ = lean_alloc_closure((void*)(l_Lean_Parser_ident_parenthesizer___boxed), 5, 0);
v___x_2090_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__4, &l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__4_once, _init_l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___closed__4);
v___x_2091_ = l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(v___x_2089_, v___x_2090_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
return v___x_2091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identWithPartialTrailingDot_parenthesizer___boxed(lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_){
_start:
{
lean_object* v_res_2097_; 
v_res_2097_ = l_Lean_Parser_identWithPartialTrailingDot_parenthesizer(v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
lean_dec(v_a_2095_);
lean_dec_ref(v_a_2094_);
lean_dec(v_a_2093_);
lean_dec_ref(v_a_2092_);
return v_res_2097_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__0(void){
_start:
{
lean_object* v___x_2098_; 
v___x_2098_ = lean_mk_string_unchecked("no space before", 15, 15);
return v___x_2098_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__1(void){
_start:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2099_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__0, &l_Lean_Parser_identWithPartialTrailingDot___closed__0_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__0);
v___x_2100_ = l_Lean_Parser_checkNoWsBefore(v___x_2099_);
return v___x_2100_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__2(void){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2101_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0);
v___x_2102_ = l_Lean_Parser_symbol(v___x_2101_);
return v___x_2102_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__3(void){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2103_ = l_Lean_Parser_ident;
v___x_2104_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__1, &l_Lean_Parser_identWithPartialTrailingDot___closed__1_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__1);
v___x_2105_ = l_Lean_Parser_andthen(v___x_2104_, v___x_2103_);
return v___x_2105_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__4(void){
_start:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2106_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__3, &l_Lean_Parser_identWithPartialTrailingDot___closed__3_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__3);
v___x_2107_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__2, &l_Lean_Parser_identWithPartialTrailingDot___closed__2_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__2);
v___x_2108_ = l_Lean_Parser_andthen(v___x_2107_, v___x_2106_);
return v___x_2108_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__5(void){
_start:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2109_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__4, &l_Lean_Parser_identWithPartialTrailingDot___closed__4_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__4);
v___x_2110_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__1, &l_Lean_Parser_identWithPartialTrailingDot___closed__1_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__1);
v___x_2111_ = l_Lean_Parser_andthen(v___x_2110_, v___x_2109_);
return v___x_2111_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__6(void){
_start:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2112_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__5, &l_Lean_Parser_identWithPartialTrailingDot___closed__5_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__5);
v___x_2113_ = l_Lean_Parser_optional(v___x_2112_);
return v___x_2113_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot___closed__7(void){
_start:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2114_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__6, &l_Lean_Parser_identWithPartialTrailingDot___closed__6_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__6);
v___x_2115_ = l_Lean_Parser_ident;
v___x_2116_ = l_Lean_Parser_andthen(v___x_2115_, v___x_2114_);
return v___x_2116_;
}
}
static lean_object* _init_l_Lean_Parser_identWithPartialTrailingDot(void){
_start:
{
lean_object* v___x_2117_; 
v___x_2117_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot___closed__7, &l_Lean_Parser_identWithPartialTrailingDot___closed__7_once, _init_l_Lean_Parser_identWithPartialTrailingDot___closed__7);
return v___x_2117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_formatter(lean_object* v_a_2118_, lean_object* v_a_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2123_ = lean_obj_once(&l_Lean_Parser_ident_formatter___closed__2, &l_Lean_Parser_ident_formatter___closed__2_once, _init_l_Lean_Parser_ident_formatter___closed__2);
v___x_2124_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_rawIdentNoAntiquot_formatter___boxed), 5, 0);
v___x_2125_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2123_, v___x_2124_, v_a_2118_, v_a_2119_, v_a_2120_, v_a_2121_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_formatter___boxed(lean_object* v_a_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_){
_start:
{
lean_object* v_res_2131_; 
v_res_2131_ = l_Lean_Parser_rawIdent_formatter(v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_);
lean_dec(v_a_2129_);
lean_dec_ref(v_a_2128_);
lean_dec(v_a_2127_);
lean_dec_ref(v_a_2126_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer___lam__0(lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v___y_2133_, v___y_2135_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer___lam__0___boxed(lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_){
_start:
{
lean_object* v_res_2143_; 
v_res_2143_ = l_Lean_Parser_rawIdent_parenthesizer___lam__0(v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_);
lean_dec(v___y_2141_);
lean_dec_ref(v___y_2140_);
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
return v_res_2143_;
}
}
static lean_object* _init_l_Lean_Parser_rawIdent_parenthesizer___closed__0(void){
_start:
{
lean_object* v___f_2144_; 
v___f_2144_ = lean_alloc_closure((void*)(l_Lean_Parser_rawIdent_parenthesizer___lam__0___boxed), 5, 0);
return v___f_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer(lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_){
_start:
{
lean_object* v___f_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___f_2150_ = lean_obj_once(&l_Lean_Parser_rawIdent_parenthesizer___closed__0, &l_Lean_Parser_rawIdent_parenthesizer___closed__0_once, _init_l_Lean_Parser_rawIdent_parenthesizer___closed__0);
v___x_2151_ = lean_obj_once(&l_Lean_Parser_ident_parenthesizer___closed__0, &l_Lean_Parser_ident_parenthesizer___closed__0_once, _init_l_Lean_Parser_ident_parenthesizer___closed__0);
v___x_2152_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2151_, v___f_2150_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdent_parenthesizer___boxed(lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_){
_start:
{
lean_object* v_res_2158_; 
v_res_2158_ = l_Lean_Parser_rawIdent_parenthesizer(v_a_2153_, v_a_2154_, v_a_2155_, v_a_2156_);
lean_dec(v_a_2156_);
lean_dec_ref(v_a_2155_);
lean_dec(v_a_2154_);
lean_dec_ref(v_a_2153_);
return v_res_2158_;
}
}
static lean_object* _init_l_Lean_Parser_rawIdent___closed__0(void){
_start:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2159_ = l_Lean_Parser_rawIdentNoAntiquot;
v___x_2160_ = lean_obj_once(&l_Lean_Parser_ident___closed__0, &l_Lean_Parser_ident___closed__0_once, _init_l_Lean_Parser_ident___closed__0);
v___x_2161_ = l_Lean_Parser_withAntiquot(v___x_2160_, v___x_2159_);
return v___x_2161_;
}
}
static lean_object* _init_l_Lean_Parser_rawIdent(void){
_start:
{
lean_object* v___x_2162_; 
v___x_2162_ = lean_obj_once(&l_Lean_Parser_rawIdent___closed__0, &l_Lean_Parser_rawIdent___closed__0_once, _init_l_Lean_Parser_rawIdent___closed__0);
return v___x_2162_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfo_formatter___closed__0(void){
_start:
{
lean_object* v___x_2163_; 
v___x_2163_ = lean_mk_string_unchecked("hygieneInfo", 11, 11);
return v___x_2163_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfo_formatter___closed__1(void){
_start:
{
lean_object* v___x_2164_; lean_object* v___x_2165_; 
v___x_2164_ = lean_obj_once(&l_Lean_Parser_hygieneInfo_formatter___closed__0, &l_Lean_Parser_hygieneInfo_formatter___closed__0_once, _init_l_Lean_Parser_hygieneInfo_formatter___closed__0);
v___x_2165_ = l_Lean_Name_mkStr1(v___x_2164_);
return v___x_2165_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfo_formatter___closed__2(void){
_start:
{
uint8_t v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2166_ = 0;
v___x_2167_ = lean_obj_once(&l_Lean_Parser_hygieneInfo_formatter___closed__1, &l_Lean_Parser_hygieneInfo_formatter___closed__1_once, _init_l_Lean_Parser_hygieneInfo_formatter___closed__1);
v___x_2168_ = lean_obj_once(&l_Lean_Parser_hygieneInfo_formatter___closed__0, &l_Lean_Parser_hygieneInfo_formatter___closed__0_once, _init_l_Lean_Parser_hygieneInfo_formatter___closed__0);
v___x_2169_ = lean_box(v___x_2166_);
v___x_2170_ = lean_box(v___x_2166_);
v___x_2171_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_2171_, 0, v___x_2168_);
lean_closure_set(v___x_2171_, 1, v___x_2167_);
lean_closure_set(v___x_2171_, 2, v___x_2169_);
lean_closure_set(v___x_2171_, 3, v___x_2170_);
return v___x_2171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_formatter(lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_){
_start:
{
lean_object* v___f_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___f_2177_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_formatter___closed__1, &l_Lean_Parser_mkAntiquot_formatter___closed__1_once, _init_l_Lean_Parser_mkAntiquot_formatter___closed__1);
v___x_2178_ = lean_obj_once(&l_Lean_Parser_hygieneInfo_formatter___closed__2, &l_Lean_Parser_hygieneInfo_formatter___closed__2_once, _init_l_Lean_Parser_hygieneInfo_formatter___closed__2);
v___x_2179_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2178_, v___f_2177_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_formatter___boxed(lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_){
_start:
{
lean_object* v_res_2185_; 
v_res_2185_ = l_Lean_Parser_hygieneInfo_formatter(v_a_2180_, v_a_2181_, v_a_2182_, v_a_2183_);
lean_dec(v_a_2183_);
lean_dec_ref(v_a_2182_);
lean_dec(v_a_2181_);
lean_dec_ref(v_a_2180_);
return v_res_2185_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfo_parenthesizer___closed__0(void){
_start:
{
uint8_t v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___x_2186_ = 0;
v___x_2187_ = lean_obj_once(&l_Lean_Parser_hygieneInfo_formatter___closed__1, &l_Lean_Parser_hygieneInfo_formatter___closed__1_once, _init_l_Lean_Parser_hygieneInfo_formatter___closed__1);
v___x_2188_ = lean_obj_once(&l_Lean_Parser_hygieneInfo_formatter___closed__0, &l_Lean_Parser_hygieneInfo_formatter___closed__0_once, _init_l_Lean_Parser_hygieneInfo_formatter___closed__0);
v___x_2189_ = lean_box(v___x_2186_);
v___x_2190_ = lean_box(v___x_2186_);
v___x_2191_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_2191_, 0, v___x_2188_);
lean_closure_set(v___x_2191_, 1, v___x_2187_);
lean_closure_set(v___x_2191_, 2, v___x_2189_);
lean_closure_set(v___x_2191_, 3, v___x_2190_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_parenthesizer(lean_object* v_a_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_){
_start:
{
lean_object* v___f_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___f_2197_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___closed__0, &l_Lean_Parser_mkAntiquot_parenthesizer___closed__0_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__0);
v___x_2198_ = lean_obj_once(&l_Lean_Parser_hygieneInfo_parenthesizer___closed__0, &l_Lean_Parser_hygieneInfo_parenthesizer___closed__0_once, _init_l_Lean_Parser_hygieneInfo_parenthesizer___closed__0);
v___x_2199_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2198_, v___f_2197_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_);
return v___x_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfo_parenthesizer___boxed(lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_){
_start:
{
lean_object* v_res_2205_; 
v_res_2205_ = l_Lean_Parser_hygieneInfo_parenthesizer(v_a_2200_, v_a_2201_, v_a_2202_, v_a_2203_);
lean_dec(v_a_2203_);
lean_dec_ref(v_a_2202_);
lean_dec(v_a_2201_);
lean_dec_ref(v_a_2200_);
return v_res_2205_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfo___closed__0(void){
_start:
{
uint8_t v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
v___x_2206_ = 0;
v___x_2207_ = lean_obj_once(&l_Lean_Parser_hygieneInfo_formatter___closed__1, &l_Lean_Parser_hygieneInfo_formatter___closed__1_once, _init_l_Lean_Parser_hygieneInfo_formatter___closed__1);
v___x_2208_ = lean_obj_once(&l_Lean_Parser_hygieneInfo_formatter___closed__0, &l_Lean_Parser_hygieneInfo_formatter___closed__0_once, _init_l_Lean_Parser_hygieneInfo_formatter___closed__0);
v___x_2209_ = l_Lean_Parser_mkAntiquot(v___x_2208_, v___x_2207_, v___x_2206_, v___x_2206_);
return v___x_2209_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfo___closed__1(void){
_start:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___x_2210_ = l_Lean_Parser_hygieneInfoNoAntiquot;
v___x_2211_ = lean_obj_once(&l_Lean_Parser_hygieneInfo___closed__0, &l_Lean_Parser_hygieneInfo___closed__0_once, _init_l_Lean_Parser_hygieneInfo___closed__0);
v___x_2212_ = l_Lean_Parser_withAntiquot(v___x_2211_, v___x_2210_);
return v___x_2212_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfo(void){
_start:
{
lean_object* v___x_2213_; 
v___x_2213_ = lean_obj_once(&l_Lean_Parser_hygieneInfo___closed__1, &l_Lean_Parser_hygieneInfo___closed__1_once, _init_l_Lean_Parser_hygieneInfo___closed__1);
return v___x_2213_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0(void){
_start:
{
lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2214_ = lean_obj_once(&l_Lean_Parser_hygieneInfo_formatter___closed__0, &l_Lean_Parser_hygieneInfo_formatter___closed__0_once, _init_l_Lean_Parser_hygieneInfo_formatter___closed__0);
v___x_2215_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_2216_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_2217_ = l_Lean_Name_mkStr3(v___x_2216_, v___x_2215_, v___x_2214_);
return v___x_2217_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__1(void){
_start:
{
lean_object* v___x_2218_; 
v___x_2218_ = lean_mk_string_unchecked("The parser `hygieneInfo` parses no text, but creates a `hygieneInfoKind` node\ncontaining an anonymous identifier as if it were parsed at the current position.\nThis identifier is modified by syntax quotations to add macro scopes like a regular identifier.\n\nThis is used to implement `have := ...` syntax: the `hygieneInfo` between the `have` and `:=`\ncollects macro scopes, which we can apply to `this` when expanding to `have this := ...`.\nSee [the language reference](lean-manual://section/macro-hygiene) for more information about\nmacro hygiene.\n\nThis is also used to implement cdot functions such as `(1 + ·)`. The opening parenthesis contains\na `hygieneInfo` node as does the cdot, which lets cdot expansion hygienically associate parentheses to cdots.\n\nThis parser has arity 1: it produces a `hygieneInfoKind` node containing an anonymous `Syntax.ident`.\nYou can use `HygieneInfo.mkIdent` to create an `Ident` from the syntax object,\nbut you can also use `TSyntax.getHygieneInfo` to get the raw name from the identifier. ", 1027, 1026);
return v___x_2218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1(){
_start:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2220_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__0);
v___x_2221_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___closed__1);
v___x_2222_ = l_Lean_addBuiltinDocString(v___x_2220_, v___x_2221_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1___boxed(lean_object* v_a_2223_){
_start:
{
lean_object* v_res_2224_; 
v_res_2224_ = l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1();
return v_res_2224_;
}
}
static lean_object* _init_l_Lean_Parser_numLit_formatter___closed__0(void){
_start:
{
lean_object* v___x_2225_; 
v___x_2225_ = lean_mk_string_unchecked("num", 3, 3);
return v___x_2225_;
}
}
static lean_object* _init_l_Lean_Parser_numLit_formatter___closed__1(void){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2226_ = lean_obj_once(&l_Lean_Parser_numLit_formatter___closed__0, &l_Lean_Parser_numLit_formatter___closed__0_once, _init_l_Lean_Parser_numLit_formatter___closed__0);
v___x_2227_ = l_Lean_Name_mkStr1(v___x_2226_);
return v___x_2227_;
}
}
static lean_object* _init_l_Lean_Parser_numLit_formatter___closed__2(void){
_start:
{
uint8_t v___x_2228_; uint8_t v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2228_ = 0;
v___x_2229_ = 1;
v___x_2230_ = lean_obj_once(&l_Lean_Parser_numLit_formatter___closed__1, &l_Lean_Parser_numLit_formatter___closed__1_once, _init_l_Lean_Parser_numLit_formatter___closed__1);
v___x_2231_ = lean_obj_once(&l_Lean_Parser_numLit_formatter___closed__0, &l_Lean_Parser_numLit_formatter___closed__0_once, _init_l_Lean_Parser_numLit_formatter___closed__0);
v___x_2232_ = lean_box(v___x_2229_);
v___x_2233_ = lean_box(v___x_2228_);
v___x_2234_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_2234_, 0, v___x_2231_);
lean_closure_set(v___x_2234_, 1, v___x_2230_);
lean_closure_set(v___x_2234_, 2, v___x_2232_);
lean_closure_set(v___x_2234_, 3, v___x_2233_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_formatter(lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_){
_start:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2240_ = lean_obj_once(&l_Lean_Parser_numLit_formatter___closed__2, &l_Lean_Parser_numLit_formatter___closed__2_once, _init_l_Lean_Parser_numLit_formatter___closed__2);
v___x_2241_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_numLitNoAntiquot_formatter___boxed), 5, 0);
v___x_2242_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2240_, v___x_2241_, v_a_2235_, v_a_2236_, v_a_2237_, v_a_2238_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_formatter___boxed(lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_){
_start:
{
lean_object* v_res_2248_; 
v_res_2248_ = l_Lean_Parser_numLit_formatter(v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
lean_dec(v_a_2246_);
lean_dec_ref(v_a_2245_);
lean_dec(v_a_2244_);
lean_dec_ref(v_a_2243_);
return v_res_2248_;
}
}
static lean_object* _init_l_Lean_Parser_numLit_parenthesizer___closed__0(void){
_start:
{
uint8_t v___x_2249_; uint8_t v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2249_ = 0;
v___x_2250_ = 1;
v___x_2251_ = lean_obj_once(&l_Lean_Parser_numLit_formatter___closed__1, &l_Lean_Parser_numLit_formatter___closed__1_once, _init_l_Lean_Parser_numLit_formatter___closed__1);
v___x_2252_ = lean_obj_once(&l_Lean_Parser_numLit_formatter___closed__0, &l_Lean_Parser_numLit_formatter___closed__0_once, _init_l_Lean_Parser_numLit_formatter___closed__0);
v___x_2253_ = lean_box(v___x_2250_);
v___x_2254_ = lean_box(v___x_2249_);
v___x_2255_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_2255_, 0, v___x_2252_);
lean_closure_set(v___x_2255_, 1, v___x_2251_);
lean_closure_set(v___x_2255_, 2, v___x_2253_);
lean_closure_set(v___x_2255_, 3, v___x_2254_);
return v___x_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_parenthesizer(lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_){
_start:
{
lean_object* v___f_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___f_2261_ = lean_obj_once(&l_Lean_Parser_rawIdent_parenthesizer___closed__0, &l_Lean_Parser_rawIdent_parenthesizer___closed__0_once, _init_l_Lean_Parser_rawIdent_parenthesizer___closed__0);
v___x_2262_ = lean_obj_once(&l_Lean_Parser_numLit_parenthesizer___closed__0, &l_Lean_Parser_numLit_parenthesizer___closed__0_once, _init_l_Lean_Parser_numLit_parenthesizer___closed__0);
v___x_2263_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2262_, v___f_2261_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numLit_parenthesizer___boxed(lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l_Lean_Parser_numLit_parenthesizer(v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_);
lean_dec(v_a_2267_);
lean_dec_ref(v_a_2266_);
lean_dec(v_a_2265_);
lean_dec_ref(v_a_2264_);
return v_res_2269_;
}
}
static lean_object* _init_l_Lean_Parser_numLit___closed__0(void){
_start:
{
uint8_t v___x_2270_; uint8_t v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2270_ = 0;
v___x_2271_ = 1;
v___x_2272_ = lean_obj_once(&l_Lean_Parser_numLit_formatter___closed__1, &l_Lean_Parser_numLit_formatter___closed__1_once, _init_l_Lean_Parser_numLit_formatter___closed__1);
v___x_2273_ = lean_obj_once(&l_Lean_Parser_numLit_formatter___closed__0, &l_Lean_Parser_numLit_formatter___closed__0_once, _init_l_Lean_Parser_numLit_formatter___closed__0);
v___x_2274_ = l_Lean_Parser_mkAntiquot(v___x_2273_, v___x_2272_, v___x_2271_, v___x_2270_);
return v___x_2274_;
}
}
static lean_object* _init_l_Lean_Parser_numLit___closed__1(void){
_start:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2275_ = l_Lean_Parser_numLitNoAntiquot;
v___x_2276_ = lean_obj_once(&l_Lean_Parser_numLit___closed__0, &l_Lean_Parser_numLit___closed__0_once, _init_l_Lean_Parser_numLit___closed__0);
v___x_2277_ = l_Lean_Parser_withAntiquot(v___x_2276_, v___x_2275_);
return v___x_2277_;
}
}
static lean_object* _init_l_Lean_Parser_numLit(void){
_start:
{
lean_object* v___x_2278_; 
v___x_2278_ = lean_obj_once(&l_Lean_Parser_numLit___closed__1, &l_Lean_Parser_numLit___closed__1_once, _init_l_Lean_Parser_numLit___closed__1);
return v___x_2278_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__0(void){
_start:
{
lean_object* v___x_2279_; 
v___x_2279_ = lean_mk_string_unchecked("numLit", 6, 6);
return v___x_2279_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1(void){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2280_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__0);
v___x_2281_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_2282_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_2283_ = l_Lean_Name_mkStr3(v___x_2282_, v___x_2281_, v___x_2280_);
return v___x_2283_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__2(void){
_start:
{
lean_object* v___x_2284_; 
v___x_2284_ = lean_mk_string_unchecked("The parser `num` parses a numeric literal in several bases:\n\n* Decimal: `129`\n* Hexadecimal: `0xdeadbeef`\n* Octal: `0o755`\n* Binary: `0b1101`\n\nThis parser has arity 1: it produces a `numLitKind` node containing an atom with the text of the\nliteral.\nYou can use `TSyntax.getNat` to extract the number from the resulting syntax object. ", 334, 334);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1(){
_start:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2286_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__1);
v___x_2287_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___closed__2);
v___x_2288_ = l_Lean_addBuiltinDocString(v___x_2286_, v___x_2287_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1___boxed(lean_object* v_a_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1();
return v_res_2290_;
}
}
static lean_object* _init_l_Lean_Parser_hexnum___closed__0(void){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = lean_mk_string_unchecked("hexnum", 6, 6);
return v___x_2291_;
}
}
static lean_object* _init_l_Lean_Parser_hexnum___closed__1(void){
_start:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2292_ = lean_obj_once(&l_Lean_Parser_hexnum___closed__0, &l_Lean_Parser_hexnum___closed__0_once, _init_l_Lean_Parser_hexnum___closed__0);
v___x_2293_ = l_Lean_Name_mkStr1(v___x_2292_);
return v___x_2293_;
}
}
static lean_object* _init_l_Lean_Parser_hexnum___closed__2(void){
_start:
{
uint8_t v___x_2294_; uint8_t v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2294_ = 0;
v___x_2295_ = 1;
v___x_2296_ = lean_obj_once(&l_Lean_Parser_hexnum___closed__1, &l_Lean_Parser_hexnum___closed__1_once, _init_l_Lean_Parser_hexnum___closed__1);
v___x_2297_ = lean_obj_once(&l_Lean_Parser_hexnum___closed__0, &l_Lean_Parser_hexnum___closed__0_once, _init_l_Lean_Parser_hexnum___closed__0);
v___x_2298_ = l_Lean_Parser_mkAntiquot(v___x_2297_, v___x_2296_, v___x_2295_, v___x_2294_);
return v___x_2298_;
}
}
static lean_object* _init_l_Lean_Parser_hexnum___closed__3(void){
_start:
{
lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2299_ = l_Lean_Parser_hexnumNoAntiquot;
v___x_2300_ = lean_obj_once(&l_Lean_Parser_hexnum___closed__2, &l_Lean_Parser_hexnum___closed__2_once, _init_l_Lean_Parser_hexnum___closed__2);
v___x_2301_ = l_Lean_Parser_withAntiquot(v___x_2300_, v___x_2299_);
return v___x_2301_;
}
}
static lean_object* _init_l_Lean_Parser_hexnum(void){
_start:
{
lean_object* v___x_2302_; 
v___x_2302_ = lean_obj_once(&l_Lean_Parser_hexnum___closed__3, &l_Lean_Parser_hexnum___closed__3_once, _init_l_Lean_Parser_hexnum___closed__3);
return v___x_2302_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0(void){
_start:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; 
v___x_2303_ = lean_obj_once(&l_Lean_Parser_hexnum___closed__0, &l_Lean_Parser_hexnum___closed__0_once, _init_l_Lean_Parser_hexnum___closed__0);
v___x_2304_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_2305_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_2306_ = l_Lean_Name_mkStr3(v___x_2305_, v___x_2304_, v___x_2303_);
return v___x_2306_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__1(void){
_start:
{
lean_object* v___x_2307_; 
v___x_2307_ = lean_mk_string_unchecked("The parser `hexnum` parses a hexadecimal numeric literal not containing the `0x` prefix.\n\nIt produces a `hexnumKind` node containing an atom with the text of the\nliteral. This parser is mainly used for creating atoms such `#<hexnum>`. Recall that `hexnum`\nis not a token and this parser must be prefixed by another parser.\n\nFor numerals such as `0xadef100a`, you should use `numLit`.\n", 384, 384);
return v___x_2307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1(){
_start:
{
lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2309_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__0);
v___x_2310_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___closed__1);
v___x_2311_ = l_Lean_addBuiltinDocString(v___x_2309_, v___x_2310_);
return v___x_2311_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1___boxed(lean_object* v_a_2312_){
_start:
{
lean_object* v_res_2313_; 
v_res_2313_ = l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1();
return v_res_2313_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit_formatter___closed__0(void){
_start:
{
lean_object* v___x_2314_; 
v___x_2314_ = lean_mk_string_unchecked("scientific", 10, 10);
return v___x_2314_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit_formatter___closed__1(void){
_start:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2315_ = lean_obj_once(&l_Lean_Parser_scientificLit_formatter___closed__0, &l_Lean_Parser_scientificLit_formatter___closed__0_once, _init_l_Lean_Parser_scientificLit_formatter___closed__0);
v___x_2316_ = l_Lean_Name_mkStr1(v___x_2315_);
return v___x_2316_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit_formatter___closed__2(void){
_start:
{
uint8_t v___x_2317_; uint8_t v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2317_ = 0;
v___x_2318_ = 1;
v___x_2319_ = lean_obj_once(&l_Lean_Parser_scientificLit_formatter___closed__1, &l_Lean_Parser_scientificLit_formatter___closed__1_once, _init_l_Lean_Parser_scientificLit_formatter___closed__1);
v___x_2320_ = lean_obj_once(&l_Lean_Parser_scientificLit_formatter___closed__0, &l_Lean_Parser_scientificLit_formatter___closed__0_once, _init_l_Lean_Parser_scientificLit_formatter___closed__0);
v___x_2321_ = lean_box(v___x_2318_);
v___x_2322_ = lean_box(v___x_2317_);
v___x_2323_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_2323_, 0, v___x_2320_);
lean_closure_set(v___x_2323_, 1, v___x_2319_);
lean_closure_set(v___x_2323_, 2, v___x_2321_);
lean_closure_set(v___x_2323_, 3, v___x_2322_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_formatter(lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2329_ = lean_obj_once(&l_Lean_Parser_scientificLit_formatter___closed__2, &l_Lean_Parser_scientificLit_formatter___closed__2_once, _init_l_Lean_Parser_scientificLit_formatter___closed__2);
v___x_2330_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_scientificLitNoAntiquot_formatter___boxed), 5, 0);
v___x_2331_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2329_, v___x_2330_, v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_formatter___boxed(lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_){
_start:
{
lean_object* v_res_2337_; 
v_res_2337_ = l_Lean_Parser_scientificLit_formatter(v_a_2332_, v_a_2333_, v_a_2334_, v_a_2335_);
lean_dec(v_a_2335_);
lean_dec_ref(v_a_2334_);
lean_dec(v_a_2333_);
lean_dec_ref(v_a_2332_);
return v_res_2337_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit_parenthesizer___closed__0(void){
_start:
{
uint8_t v___x_2338_; uint8_t v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2338_ = 0;
v___x_2339_ = 1;
v___x_2340_ = lean_obj_once(&l_Lean_Parser_scientificLit_formatter___closed__1, &l_Lean_Parser_scientificLit_formatter___closed__1_once, _init_l_Lean_Parser_scientificLit_formatter___closed__1);
v___x_2341_ = lean_obj_once(&l_Lean_Parser_scientificLit_formatter___closed__0, &l_Lean_Parser_scientificLit_formatter___closed__0_once, _init_l_Lean_Parser_scientificLit_formatter___closed__0);
v___x_2342_ = lean_box(v___x_2339_);
v___x_2343_ = lean_box(v___x_2338_);
v___x_2344_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_2344_, 0, v___x_2341_);
lean_closure_set(v___x_2344_, 1, v___x_2340_);
lean_closure_set(v___x_2344_, 2, v___x_2342_);
lean_closure_set(v___x_2344_, 3, v___x_2343_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_parenthesizer(lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_){
_start:
{
lean_object* v___f_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___f_2350_ = lean_obj_once(&l_Lean_Parser_rawIdent_parenthesizer___closed__0, &l_Lean_Parser_rawIdent_parenthesizer___closed__0_once, _init_l_Lean_Parser_rawIdent_parenthesizer___closed__0);
v___x_2351_ = lean_obj_once(&l_Lean_Parser_scientificLit_parenthesizer___closed__0, &l_Lean_Parser_scientificLit_parenthesizer___closed__0_once, _init_l_Lean_Parser_scientificLit_parenthesizer___closed__0);
v___x_2352_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2351_, v___f_2350_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_);
return v___x_2352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLit_parenthesizer___boxed(lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = l_Lean_Parser_scientificLit_parenthesizer(v_a_2353_, v_a_2354_, v_a_2355_, v_a_2356_);
lean_dec(v_a_2356_);
lean_dec_ref(v_a_2355_);
lean_dec(v_a_2354_);
lean_dec_ref(v_a_2353_);
return v_res_2358_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit___closed__0(void){
_start:
{
uint8_t v___x_2359_; uint8_t v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2359_ = 0;
v___x_2360_ = 1;
v___x_2361_ = lean_obj_once(&l_Lean_Parser_scientificLit_formatter___closed__1, &l_Lean_Parser_scientificLit_formatter___closed__1_once, _init_l_Lean_Parser_scientificLit_formatter___closed__1);
v___x_2362_ = lean_obj_once(&l_Lean_Parser_scientificLit_formatter___closed__0, &l_Lean_Parser_scientificLit_formatter___closed__0_once, _init_l_Lean_Parser_scientificLit_formatter___closed__0);
v___x_2363_ = l_Lean_Parser_mkAntiquot(v___x_2362_, v___x_2361_, v___x_2360_, v___x_2359_);
return v___x_2363_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit___closed__1(void){
_start:
{
lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2364_ = l_Lean_Parser_scientificLitNoAntiquot;
v___x_2365_ = lean_obj_once(&l_Lean_Parser_scientificLit___closed__0, &l_Lean_Parser_scientificLit___closed__0_once, _init_l_Lean_Parser_scientificLit___closed__0);
v___x_2366_ = l_Lean_Parser_withAntiquot(v___x_2365_, v___x_2364_);
return v___x_2366_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit(void){
_start:
{
lean_object* v___x_2367_; 
v___x_2367_ = lean_obj_once(&l_Lean_Parser_scientificLit___closed__1, &l_Lean_Parser_scientificLit___closed__1_once, _init_l_Lean_Parser_scientificLit___closed__1);
return v___x_2367_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__0(void){
_start:
{
lean_object* v___x_2368_; 
v___x_2368_ = lean_mk_string_unchecked("scientificLit", 13, 13);
return v___x_2368_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1(void){
_start:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2369_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__0);
v___x_2370_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_2371_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_2372_ = l_Lean_Name_mkStr3(v___x_2371_, v___x_2370_, v___x_2369_);
return v___x_2372_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__2(void){
_start:
{
lean_object* v___x_2373_; 
v___x_2373_ = lean_mk_string_unchecked("The parser `scientific` parses a scientific-notation literal, such as `1.3e-24`.\n\nThis parser has arity 1: it produces a `scientificLitKind` node containing an atom with the text\nof the literal.\nYou can use `TSyntax.getScientific` to extract the parts from the resulting syntax object. ", 286, 286);
return v___x_2373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1(){
_start:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; 
v___x_2375_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__1);
v___x_2376_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___closed__2);
v___x_2377_ = l_Lean_addBuiltinDocString(v___x_2375_, v___x_2376_);
return v___x_2377_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1___boxed(lean_object* v_a_2378_){
_start:
{
lean_object* v_res_2379_; 
v_res_2379_ = l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1();
return v_res_2379_;
}
}
static lean_object* _init_l_Lean_Parser_strLit_formatter___closed__0(void){
_start:
{
lean_object* v___x_2380_; 
v___x_2380_ = lean_mk_string_unchecked("str", 3, 3);
return v___x_2380_;
}
}
static lean_object* _init_l_Lean_Parser_strLit_formatter___closed__1(void){
_start:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; 
v___x_2381_ = lean_obj_once(&l_Lean_Parser_strLit_formatter___closed__0, &l_Lean_Parser_strLit_formatter___closed__0_once, _init_l_Lean_Parser_strLit_formatter___closed__0);
v___x_2382_ = l_Lean_Name_mkStr1(v___x_2381_);
return v___x_2382_;
}
}
static lean_object* _init_l_Lean_Parser_strLit_formatter___closed__2(void){
_start:
{
uint8_t v___x_2383_; uint8_t v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2383_ = 0;
v___x_2384_ = 1;
v___x_2385_ = lean_obj_once(&l_Lean_Parser_strLit_formatter___closed__1, &l_Lean_Parser_strLit_formatter___closed__1_once, _init_l_Lean_Parser_strLit_formatter___closed__1);
v___x_2386_ = lean_obj_once(&l_Lean_Parser_strLit_formatter___closed__0, &l_Lean_Parser_strLit_formatter___closed__0_once, _init_l_Lean_Parser_strLit_formatter___closed__0);
v___x_2387_ = lean_box(v___x_2384_);
v___x_2388_ = lean_box(v___x_2383_);
v___x_2389_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_2389_, 0, v___x_2386_);
lean_closure_set(v___x_2389_, 1, v___x_2385_);
lean_closure_set(v___x_2389_, 2, v___x_2387_);
lean_closure_set(v___x_2389_, 3, v___x_2388_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_formatter(lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_){
_start:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2395_ = lean_obj_once(&l_Lean_Parser_strLit_formatter___closed__2, &l_Lean_Parser_strLit_formatter___closed__2_once, _init_l_Lean_Parser_strLit_formatter___closed__2);
v___x_2396_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_strLitNoAntiquot_formatter___boxed), 5, 0);
v___x_2397_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2395_, v___x_2396_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_);
return v___x_2397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_formatter___boxed(lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_){
_start:
{
lean_object* v_res_2403_; 
v_res_2403_ = l_Lean_Parser_strLit_formatter(v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_);
lean_dec(v_a_2401_);
lean_dec_ref(v_a_2400_);
lean_dec(v_a_2399_);
lean_dec_ref(v_a_2398_);
return v_res_2403_;
}
}
static lean_object* _init_l_Lean_Parser_strLit_parenthesizer___closed__0(void){
_start:
{
uint8_t v___x_2404_; uint8_t v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2404_ = 0;
v___x_2405_ = 1;
v___x_2406_ = lean_obj_once(&l_Lean_Parser_strLit_formatter___closed__1, &l_Lean_Parser_strLit_formatter___closed__1_once, _init_l_Lean_Parser_strLit_formatter___closed__1);
v___x_2407_ = lean_obj_once(&l_Lean_Parser_strLit_formatter___closed__0, &l_Lean_Parser_strLit_formatter___closed__0_once, _init_l_Lean_Parser_strLit_formatter___closed__0);
v___x_2408_ = lean_box(v___x_2405_);
v___x_2409_ = lean_box(v___x_2404_);
v___x_2410_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_2410_, 0, v___x_2407_);
lean_closure_set(v___x_2410_, 1, v___x_2406_);
lean_closure_set(v___x_2410_, 2, v___x_2408_);
lean_closure_set(v___x_2410_, 3, v___x_2409_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_parenthesizer(lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_){
_start:
{
lean_object* v___f_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___f_2416_ = lean_obj_once(&l_Lean_Parser_rawIdent_parenthesizer___closed__0, &l_Lean_Parser_rawIdent_parenthesizer___closed__0_once, _init_l_Lean_Parser_rawIdent_parenthesizer___closed__0);
v___x_2417_ = lean_obj_once(&l_Lean_Parser_strLit_parenthesizer___closed__0, &l_Lean_Parser_strLit_parenthesizer___closed__0_once, _init_l_Lean_Parser_strLit_parenthesizer___closed__0);
v___x_2418_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2417_, v___f_2416_, v_a_2411_, v_a_2412_, v_a_2413_, v_a_2414_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLit_parenthesizer___boxed(lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l_Lean_Parser_strLit_parenthesizer(v_a_2419_, v_a_2420_, v_a_2421_, v_a_2422_);
lean_dec(v_a_2422_);
lean_dec_ref(v_a_2421_);
lean_dec(v_a_2420_);
lean_dec_ref(v_a_2419_);
return v_res_2424_;
}
}
static lean_object* _init_l_Lean_Parser_strLit___closed__0(void){
_start:
{
uint8_t v___x_2425_; uint8_t v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2425_ = 0;
v___x_2426_ = 1;
v___x_2427_ = lean_obj_once(&l_Lean_Parser_strLit_formatter___closed__1, &l_Lean_Parser_strLit_formatter___closed__1_once, _init_l_Lean_Parser_strLit_formatter___closed__1);
v___x_2428_ = lean_obj_once(&l_Lean_Parser_strLit_formatter___closed__0, &l_Lean_Parser_strLit_formatter___closed__0_once, _init_l_Lean_Parser_strLit_formatter___closed__0);
v___x_2429_ = l_Lean_Parser_mkAntiquot(v___x_2428_, v___x_2427_, v___x_2426_, v___x_2425_);
return v___x_2429_;
}
}
static lean_object* _init_l_Lean_Parser_strLit___closed__1(void){
_start:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2430_ = l_Lean_Parser_strLitNoAntiquot;
v___x_2431_ = lean_obj_once(&l_Lean_Parser_strLit___closed__0, &l_Lean_Parser_strLit___closed__0_once, _init_l_Lean_Parser_strLit___closed__0);
v___x_2432_ = l_Lean_Parser_withAntiquot(v___x_2431_, v___x_2430_);
return v___x_2432_;
}
}
static lean_object* _init_l_Lean_Parser_strLit(void){
_start:
{
lean_object* v___x_2433_; 
v___x_2433_ = lean_obj_once(&l_Lean_Parser_strLit___closed__1, &l_Lean_Parser_strLit___closed__1_once, _init_l_Lean_Parser_strLit___closed__1);
return v___x_2433_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__0(void){
_start:
{
lean_object* v___x_2434_; 
v___x_2434_ = lean_mk_string_unchecked("strLit", 6, 6);
return v___x_2434_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1(void){
_start:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___x_2435_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__0);
v___x_2436_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_2437_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_2438_ = l_Lean_Name_mkStr3(v___x_2437_, v___x_2436_, v___x_2435_);
return v___x_2438_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__2(void){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = lean_mk_string_unchecked("The parser `str` parses a string literal, such as `\"foo\"` or `\"\\r\\n\"`. Strings can contain\nC-style escapes like `\\n`, `\\\"`, `\\x00` or `\\u2665`, as well as literal unicode characters like `∈`.\nNewlines in a string are interpreted literally.\n\nThis parser has arity 1: it produces a `strLitKind` node containing an atom with the raw\nliteral (including the quote marks and without interpreting the escapes).\nYou can use `TSyntax.getString` to decode the string from the resulting syntax object. ", 493, 491);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1(){
_start:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
v___x_2441_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__1);
v___x_2442_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___closed__2);
v___x_2443_ = l_Lean_addBuiltinDocString(v___x_2441_, v___x_2442_);
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1___boxed(lean_object* v_a_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1();
return v_res_2445_;
}
}
static lean_object* _init_l_Lean_Parser_charLit_formatter___closed__0(void){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = lean_mk_string_unchecked("char", 4, 4);
return v___x_2446_;
}
}
static lean_object* _init_l_Lean_Parser_charLit_formatter___closed__1(void){
_start:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2447_ = lean_obj_once(&l_Lean_Parser_charLit_formatter___closed__0, &l_Lean_Parser_charLit_formatter___closed__0_once, _init_l_Lean_Parser_charLit_formatter___closed__0);
v___x_2448_ = l_Lean_Name_mkStr1(v___x_2447_);
return v___x_2448_;
}
}
static lean_object* _init_l_Lean_Parser_charLit_formatter___closed__2(void){
_start:
{
uint8_t v___x_2449_; uint8_t v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2449_ = 0;
v___x_2450_ = 1;
v___x_2451_ = lean_obj_once(&l_Lean_Parser_charLit_formatter___closed__1, &l_Lean_Parser_charLit_formatter___closed__1_once, _init_l_Lean_Parser_charLit_formatter___closed__1);
v___x_2452_ = lean_obj_once(&l_Lean_Parser_charLit_formatter___closed__0, &l_Lean_Parser_charLit_formatter___closed__0_once, _init_l_Lean_Parser_charLit_formatter___closed__0);
v___x_2453_ = lean_box(v___x_2450_);
v___x_2454_ = lean_box(v___x_2449_);
v___x_2455_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_2455_, 0, v___x_2452_);
lean_closure_set(v___x_2455_, 1, v___x_2451_);
lean_closure_set(v___x_2455_, 2, v___x_2453_);
lean_closure_set(v___x_2455_, 3, v___x_2454_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_formatter(lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2461_ = lean_obj_once(&l_Lean_Parser_charLit_formatter___closed__2, &l_Lean_Parser_charLit_formatter___closed__2_once, _init_l_Lean_Parser_charLit_formatter___closed__2);
v___x_2462_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_charLitNoAntiquot_formatter___boxed), 5, 0);
v___x_2463_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2461_, v___x_2462_, v_a_2456_, v_a_2457_, v_a_2458_, v_a_2459_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_formatter___boxed(lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_){
_start:
{
lean_object* v_res_2469_; 
v_res_2469_ = l_Lean_Parser_charLit_formatter(v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_);
lean_dec(v_a_2467_);
lean_dec_ref(v_a_2466_);
lean_dec(v_a_2465_);
lean_dec_ref(v_a_2464_);
return v_res_2469_;
}
}
static lean_object* _init_l_Lean_Parser_charLit_parenthesizer___closed__0(void){
_start:
{
uint8_t v___x_2470_; uint8_t v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; 
v___x_2470_ = 0;
v___x_2471_ = 1;
v___x_2472_ = lean_obj_once(&l_Lean_Parser_charLit_formatter___closed__1, &l_Lean_Parser_charLit_formatter___closed__1_once, _init_l_Lean_Parser_charLit_formatter___closed__1);
v___x_2473_ = lean_obj_once(&l_Lean_Parser_charLit_formatter___closed__0, &l_Lean_Parser_charLit_formatter___closed__0_once, _init_l_Lean_Parser_charLit_formatter___closed__0);
v___x_2474_ = lean_box(v___x_2471_);
v___x_2475_ = lean_box(v___x_2470_);
v___x_2476_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_2476_, 0, v___x_2473_);
lean_closure_set(v___x_2476_, 1, v___x_2472_);
lean_closure_set(v___x_2476_, 2, v___x_2474_);
lean_closure_set(v___x_2476_, 3, v___x_2475_);
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_parenthesizer(lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_){
_start:
{
lean_object* v___f_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___f_2482_ = lean_obj_once(&l_Lean_Parser_rawIdent_parenthesizer___closed__0, &l_Lean_Parser_rawIdent_parenthesizer___closed__0_once, _init_l_Lean_Parser_rawIdent_parenthesizer___closed__0);
v___x_2483_ = lean_obj_once(&l_Lean_Parser_charLit_parenthesizer___closed__0, &l_Lean_Parser_charLit_parenthesizer___closed__0_once, _init_l_Lean_Parser_charLit_parenthesizer___closed__0);
v___x_2484_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2483_, v___f_2482_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLit_parenthesizer___boxed(lean_object* v_a_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_, lean_object* v_a_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_Lean_Parser_charLit_parenthesizer(v_a_2485_, v_a_2486_, v_a_2487_, v_a_2488_);
lean_dec(v_a_2488_);
lean_dec_ref(v_a_2487_);
lean_dec(v_a_2486_);
lean_dec_ref(v_a_2485_);
return v_res_2490_;
}
}
static lean_object* _init_l_Lean_Parser_charLit___closed__0(void){
_start:
{
uint8_t v___x_2491_; uint8_t v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2491_ = 0;
v___x_2492_ = 1;
v___x_2493_ = lean_obj_once(&l_Lean_Parser_charLit_formatter___closed__1, &l_Lean_Parser_charLit_formatter___closed__1_once, _init_l_Lean_Parser_charLit_formatter___closed__1);
v___x_2494_ = lean_obj_once(&l_Lean_Parser_charLit_formatter___closed__0, &l_Lean_Parser_charLit_formatter___closed__0_once, _init_l_Lean_Parser_charLit_formatter___closed__0);
v___x_2495_ = l_Lean_Parser_mkAntiquot(v___x_2494_, v___x_2493_, v___x_2492_, v___x_2491_);
return v___x_2495_;
}
}
static lean_object* _init_l_Lean_Parser_charLit___closed__1(void){
_start:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___x_2496_ = l_Lean_Parser_charLitNoAntiquot;
v___x_2497_ = lean_obj_once(&l_Lean_Parser_charLit___closed__0, &l_Lean_Parser_charLit___closed__0_once, _init_l_Lean_Parser_charLit___closed__0);
v___x_2498_ = l_Lean_Parser_withAntiquot(v___x_2497_, v___x_2496_);
return v___x_2498_;
}
}
static lean_object* _init_l_Lean_Parser_charLit(void){
_start:
{
lean_object* v___x_2499_; 
v___x_2499_ = lean_obj_once(&l_Lean_Parser_charLit___closed__1, &l_Lean_Parser_charLit___closed__1_once, _init_l_Lean_Parser_charLit___closed__1);
return v___x_2499_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__0(void){
_start:
{
lean_object* v___x_2500_; 
v___x_2500_ = lean_mk_string_unchecked("charLit", 7, 7);
return v___x_2500_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1(void){
_start:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2501_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__0);
v___x_2502_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_2503_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_2504_ = l_Lean_Name_mkStr3(v___x_2503_, v___x_2502_, v___x_2501_);
return v___x_2504_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__2(void){
_start:
{
lean_object* v___x_2505_; 
v___x_2505_ = lean_mk_string_unchecked("The parser `char` parses a character literal, such as `'a'` or `'\\n'`. Character literals can\ncontain C-style escapes like `\\n`, `\\\"`, `\\x00` or `\\u2665`, as well as literal unicode characters\nlike `∈`, but must evaluate to a single unicode codepoint, so `'♥'` is allowed but `'❤️'` is not\n(since it is two codepoints but one grapheme cluster).\n\nThis parser has arity 1: it produces a `charLitKind` node containing an atom with the raw\nliteral (including the quote marks and without interpreting the escapes).\nYou can use `TSyntax.getChar` to decode the string from the resulting syntax object. ", 603, 595);
return v___x_2505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1(){
_start:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2507_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__1);
v___x_2508_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___closed__2);
v___x_2509_ = l_Lean_addBuiltinDocString(v___x_2507_, v___x_2508_);
return v___x_2509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1___boxed(lean_object* v_a_2510_){
_start:
{
lean_object* v_res_2511_; 
v_res_2511_ = l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1();
return v_res_2511_;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_formatter___closed__0(void){
_start:
{
lean_object* v___x_2512_; 
v___x_2512_ = lean_mk_string_unchecked("name", 4, 4);
return v___x_2512_;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_formatter___closed__1(void){
_start:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2513_ = lean_obj_once(&l_Lean_Parser_nameLit_formatter___closed__0, &l_Lean_Parser_nameLit_formatter___closed__0_once, _init_l_Lean_Parser_nameLit_formatter___closed__0);
v___x_2514_ = l_Lean_Name_mkStr1(v___x_2513_);
return v___x_2514_;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_formatter___closed__2(void){
_start:
{
uint8_t v___x_2515_; uint8_t v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2515_ = 0;
v___x_2516_ = 1;
v___x_2517_ = lean_obj_once(&l_Lean_Parser_nameLit_formatter___closed__1, &l_Lean_Parser_nameLit_formatter___closed__1_once, _init_l_Lean_Parser_nameLit_formatter___closed__1);
v___x_2518_ = lean_obj_once(&l_Lean_Parser_nameLit_formatter___closed__0, &l_Lean_Parser_nameLit_formatter___closed__0_once, _init_l_Lean_Parser_nameLit_formatter___closed__0);
v___x_2519_ = lean_box(v___x_2516_);
v___x_2520_ = lean_box(v___x_2515_);
v___x_2521_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_2521_, 0, v___x_2518_);
lean_closure_set(v___x_2521_, 1, v___x_2517_);
lean_closure_set(v___x_2521_, 2, v___x_2519_);
lean_closure_set(v___x_2521_, 3, v___x_2520_);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_formatter(lean_object* v_a_2522_, lean_object* v_a_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_){
_start:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; 
v___x_2527_ = lean_obj_once(&l_Lean_Parser_nameLit_formatter___closed__2, &l_Lean_Parser_nameLit_formatter___closed__2_once, _init_l_Lean_Parser_nameLit_formatter___closed__2);
v___x_2528_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_nameLitNoAntiquot_formatter___boxed), 5, 0);
v___x_2529_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2527_, v___x_2528_, v_a_2522_, v_a_2523_, v_a_2524_, v_a_2525_);
return v___x_2529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_formatter___boxed(lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Lean_Parser_nameLit_formatter(v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_);
lean_dec(v_a_2533_);
lean_dec_ref(v_a_2532_);
lean_dec(v_a_2531_);
lean_dec_ref(v_a_2530_);
return v_res_2535_;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_parenthesizer___closed__0(void){
_start:
{
uint8_t v___x_2536_; uint8_t v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2536_ = 0;
v___x_2537_ = 1;
v___x_2538_ = lean_obj_once(&l_Lean_Parser_nameLit_formatter___closed__1, &l_Lean_Parser_nameLit_formatter___closed__1_once, _init_l_Lean_Parser_nameLit_formatter___closed__1);
v___x_2539_ = lean_obj_once(&l_Lean_Parser_nameLit_formatter___closed__0, &l_Lean_Parser_nameLit_formatter___closed__0_once, _init_l_Lean_Parser_nameLit_formatter___closed__0);
v___x_2540_ = lean_box(v___x_2537_);
v___x_2541_ = lean_box(v___x_2536_);
v___x_2542_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_2542_, 0, v___x_2539_);
lean_closure_set(v___x_2542_, 1, v___x_2538_);
lean_closure_set(v___x_2542_, 2, v___x_2540_);
lean_closure_set(v___x_2542_, 3, v___x_2541_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_parenthesizer(lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_){
_start:
{
lean_object* v___f_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___f_2548_ = lean_obj_once(&l_Lean_Parser_rawIdent_parenthesizer___closed__0, &l_Lean_Parser_rawIdent_parenthesizer___closed__0_once, _init_l_Lean_Parser_rawIdent_parenthesizer___closed__0);
v___x_2549_ = lean_obj_once(&l_Lean_Parser_nameLit_parenthesizer___closed__0, &l_Lean_Parser_nameLit_parenthesizer___closed__0_once, _init_l_Lean_Parser_nameLit_parenthesizer___closed__0);
v___x_2550_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2549_, v___f_2548_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_);
return v___x_2550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nameLit_parenthesizer___boxed(lean_object* v_a_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_){
_start:
{
lean_object* v_res_2556_; 
v_res_2556_ = l_Lean_Parser_nameLit_parenthesizer(v_a_2551_, v_a_2552_, v_a_2553_, v_a_2554_);
lean_dec(v_a_2554_);
lean_dec_ref(v_a_2553_);
lean_dec(v_a_2552_);
lean_dec_ref(v_a_2551_);
return v_res_2556_;
}
}
static lean_object* _init_l_Lean_Parser_nameLit___closed__0(void){
_start:
{
uint8_t v___x_2557_; uint8_t v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
v___x_2557_ = 0;
v___x_2558_ = 1;
v___x_2559_ = lean_obj_once(&l_Lean_Parser_nameLit_formatter___closed__1, &l_Lean_Parser_nameLit_formatter___closed__1_once, _init_l_Lean_Parser_nameLit_formatter___closed__1);
v___x_2560_ = lean_obj_once(&l_Lean_Parser_nameLit_formatter___closed__0, &l_Lean_Parser_nameLit_formatter___closed__0_once, _init_l_Lean_Parser_nameLit_formatter___closed__0);
v___x_2561_ = l_Lean_Parser_mkAntiquot(v___x_2560_, v___x_2559_, v___x_2558_, v___x_2557_);
return v___x_2561_;
}
}
static lean_object* _init_l_Lean_Parser_nameLit___closed__1(void){
_start:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2562_ = l_Lean_Parser_nameLitNoAntiquot;
v___x_2563_ = lean_obj_once(&l_Lean_Parser_nameLit___closed__0, &l_Lean_Parser_nameLit___closed__0_once, _init_l_Lean_Parser_nameLit___closed__0);
v___x_2564_ = l_Lean_Parser_withAntiquot(v___x_2563_, v___x_2562_);
return v___x_2564_;
}
}
static lean_object* _init_l_Lean_Parser_nameLit(void){
_start:
{
lean_object* v___x_2565_; 
v___x_2565_ = lean_obj_once(&l_Lean_Parser_nameLit___closed__1, &l_Lean_Parser_nameLit___closed__1_once, _init_l_Lean_Parser_nameLit___closed__1);
return v___x_2565_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__0(void){
_start:
{
lean_object* v___x_2566_; 
v___x_2566_ = lean_mk_string_unchecked("nameLit", 7, 7);
return v___x_2566_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1(void){
_start:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2567_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__0);
v___x_2568_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_2569_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_2570_ = l_Lean_Name_mkStr3(v___x_2569_, v___x_2568_, v___x_2567_);
return v___x_2570_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__2(void){
_start:
{
lean_object* v___x_2571_; 
v___x_2571_ = lean_mk_string_unchecked("The parser `name` parses a name literal like `` `foo``. The syntax is the same as for identifiers\n(see `ident`) but with a leading backquote.\n\nThis parser has arity 1: it produces a `nameLitKind` node containing the raw literal\n(including the backquote).\nYou can use `TSyntax.getName` to extract the name from the resulting syntax object. ", 339, 339);
return v___x_2571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1(){
_start:
{
lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2573_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__1);
v___x_2574_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___closed__2);
v___x_2575_ = l_Lean_addBuiltinDocString(v___x_2573_, v___x_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1___boxed(lean_object* v_a_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1();
return v_res_2577_;
}
}
static lean_object* _init_l_Lean_Parser_group_formatter___closed__0(void){
_start:
{
lean_object* v___x_2578_; 
v___x_2578_ = lean_mk_string_unchecked("group", 5, 5);
return v___x_2578_;
}
}
static lean_object* _init_l_Lean_Parser_group_formatter___closed__1(void){
_start:
{
lean_object* v___x_2579_; lean_object* v___x_2580_; 
v___x_2579_ = lean_obj_once(&l_Lean_Parser_group_formatter___closed__0, &l_Lean_Parser_group_formatter___closed__0_once, _init_l_Lean_Parser_group_formatter___closed__0);
v___x_2580_ = l_Lean_Name_mkStr1(v___x_2579_);
return v___x_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_group_formatter(lean_object* v_p_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_){
_start:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; 
v___x_2587_ = lean_obj_once(&l_Lean_Parser_group_formatter___closed__1, &l_Lean_Parser_group_formatter___closed__1_once, _init_l_Lean_Parser_group_formatter___closed__1);
v___x_2588_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_2587_, v_p_2581_, v_a_2582_, v_a_2583_, v_a_2584_, v_a_2585_);
return v___x_2588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_group_formatter___boxed(lean_object* v_p_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_Lean_Parser_group_formatter(v_p_2589_, v_a_2590_, v_a_2591_, v_a_2592_, v_a_2593_);
lean_dec(v_a_2593_);
lean_dec_ref(v_a_2592_);
lean_dec(v_a_2591_);
lean_dec_ref(v_a_2590_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_group_parenthesizer(lean_object* v_p_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_){
_start:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2602_ = lean_obj_once(&l_Lean_Parser_group_formatter___closed__1, &l_Lean_Parser_group_formatter___closed__1_once, _init_l_Lean_Parser_group_formatter___closed__1);
v___x_2603_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_2602_, v_p_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_);
return v___x_2603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_group_parenthesizer___boxed(lean_object* v_p_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_){
_start:
{
lean_object* v_res_2610_; 
v_res_2610_ = l_Lean_Parser_group_parenthesizer(v_p_2604_, v_a_2605_, v_a_2606_, v_a_2607_, v_a_2608_);
lean_dec(v_a_2608_);
lean_dec_ref(v_a_2607_);
lean_dec(v_a_2606_);
lean_dec_ref(v_a_2605_);
return v_res_2610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_group(lean_object* v_p_2611_){
_start:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; 
v___x_2612_ = lean_obj_once(&l_Lean_Parser_group_formatter___closed__1, &l_Lean_Parser_group_formatter___closed__1_once, _init_l_Lean_Parser_group_formatter___closed__1);
v___x_2613_ = l_Lean_Parser_node(v___x_2612_, v_p_2611_);
return v___x_2613_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0(void){
_start:
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2614_ = lean_obj_once(&l_Lean_Parser_group_formatter___closed__0, &l_Lean_Parser_group_formatter___closed__0_once, _init_l_Lean_Parser_group_formatter___closed__0);
v___x_2615_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_2616_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_2617_ = l_Lean_Name_mkStr3(v___x_2616_, v___x_2615_, v___x_2614_);
return v___x_2617_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__1(void){
_start:
{
lean_object* v___x_2618_; 
v___x_2618_ = lean_mk_string_unchecked("The parser `group(p)` parses the same thing as `p`, but it wraps the results in a `groupKind`\nnode.\n\nThis parser always has arity 1, even if `p` does not. Parsers like `p*` are automatically\nrewritten to `group(p)*` if `p` does not have arity 1, so that the results from separate invocations\nof `p` can be differentiated. ", 322, 322);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1(){
_start:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2620_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0);
v___x_2621_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__1);
v___x_2622_ = l_Lean_addBuiltinDocString(v___x_2620_, v___x_2621_);
return v___x_2622_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___boxed(lean_object* v_a_2623_){
_start:
{
lean_object* v_res_2624_; 
v_res_2624_ = l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1();
return v_res_2624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_formatter(lean_object* v_p_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_){
_start:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___x_2631_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkColGe_formatter___boxed), 5, 0);
v___x_2632_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2632_, 0, v___x_2631_);
lean_closure_set(v___x_2632_, 1, v_p_2625_);
v___x_2633_ = l_Lean_Parser_many1_formatter(v___x_2632_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_formatter___boxed(lean_object* v_p_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_, lean_object* v_a_2639_){
_start:
{
lean_object* v_res_2640_; 
v_res_2640_ = l_Lean_Parser_many1Indent_formatter(v_p_2634_, v_a_2635_, v_a_2636_, v_a_2637_, v_a_2638_);
lean_dec(v_a_2638_);
lean_dec_ref(v_a_2637_);
lean_dec(v_a_2636_);
lean_dec_ref(v_a_2635_);
return v_res_2640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_parenthesizer(lean_object* v_p_2641_, lean_object* v_a_2642_, lean_object* v_a_2643_, lean_object* v_a_2644_, lean_object* v_a_2645_){
_start:
{
lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2647_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed), 5, 0);
v___x_2648_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2648_, 0, v___x_2647_);
lean_closure_set(v___x_2648_, 1, v_p_2641_);
v___x_2649_ = lean_alloc_closure((void*)(l_Lean_Parser_many1_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2649_, 0, v___x_2648_);
v___x_2650_ = l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(v___x_2649_, v_a_2642_, v_a_2643_, v_a_2644_, v_a_2645_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent_parenthesizer___boxed(lean_object* v_p_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l_Lean_Parser_many1Indent_parenthesizer(v_p_2651_, v_a_2652_, v_a_2653_, v_a_2654_, v_a_2655_);
lean_dec(v_a_2655_);
lean_dec_ref(v_a_2654_);
lean_dec(v_a_2653_);
lean_dec_ref(v_a_2652_);
return v_res_2657_;
}
}
static lean_object* _init_l_Lean_Parser_many1Indent___closed__0(void){
_start:
{
lean_object* v___x_2658_; 
v___x_2658_ = lean_mk_string_unchecked("irrelevant", 10, 10);
return v___x_2658_;
}
}
static lean_object* _init_l_Lean_Parser_many1Indent___closed__1(void){
_start:
{
lean_object* v___x_2659_; lean_object* v___x_2660_; 
v___x_2659_ = lean_obj_once(&l_Lean_Parser_many1Indent___closed__0, &l_Lean_Parser_many1Indent___closed__0_once, _init_l_Lean_Parser_many1Indent___closed__0);
v___x_2660_ = l_Lean_Parser_checkColGe(v___x_2659_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Indent(lean_object* v_p_2661_){
_start:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2662_ = lean_obj_once(&l_Lean_Parser_many1Indent___closed__1, &l_Lean_Parser_many1Indent___closed__1_once, _init_l_Lean_Parser_many1Indent___closed__1);
v___x_2663_ = l_Lean_Parser_andthen(v___x_2662_, v_p_2661_);
v___x_2664_ = l_Lean_Parser_many1(v___x_2663_);
v___x_2665_ = l_Lean_Parser_withPosition(v___x_2664_);
return v___x_2665_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__0(void){
_start:
{
lean_object* v___x_2666_; 
v___x_2666_ = lean_mk_string_unchecked("many1Indent", 11, 11);
return v___x_2666_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1(void){
_start:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2667_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__0);
v___x_2668_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_2669_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_2670_ = l_Lean_Name_mkStr3(v___x_2669_, v___x_2668_, v___x_2667_);
return v___x_2670_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__2(void){
_start:
{
lean_object* v___x_2671_; 
v___x_2671_ = lean_mk_string_unchecked("The parser `many1Indent(p)` is equivalent to `withPosition((colGe p)+)`. This has the effect of\nparsing one or more occurrences of `p`, where each subsequent `p` parse needs to be indented\nthe same or more than the first parse.\n\nThis parser has arity 1, and returns a list of the results from `p`.\n`p` is \"auto-grouped\" if it is not arity 1. ", 342, 342);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1(){
_start:
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2673_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__1);
v___x_2674_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___closed__2);
v___x_2675_ = l_Lean_addBuiltinDocString(v___x_2673_, v___x_2674_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1___boxed(lean_object* v_a_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1();
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_formatter(lean_object* v_p_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_){
_start:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; 
v___x_2684_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkColGe_formatter___boxed), 5, 0);
v___x_2685_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2685_, 0, v___x_2684_);
lean_closure_set(v___x_2685_, 1, v_p_2678_);
v___x_2686_ = l_Lean_Parser_many_formatter(v___x_2685_, v_a_2679_, v_a_2680_, v_a_2681_, v_a_2682_);
return v___x_2686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_formatter___boxed(lean_object* v_p_2687_, lean_object* v_a_2688_, lean_object* v_a_2689_, lean_object* v_a_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_){
_start:
{
lean_object* v_res_2693_; 
v_res_2693_ = l_Lean_Parser_manyIndent_formatter(v_p_2687_, v_a_2688_, v_a_2689_, v_a_2690_, v_a_2691_);
lean_dec(v_a_2691_);
lean_dec_ref(v_a_2690_);
lean_dec(v_a_2689_);
lean_dec_ref(v_a_2688_);
return v_res_2693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_parenthesizer(lean_object* v_p_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_){
_start:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___x_2700_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed), 5, 0);
v___x_2701_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2701_, 0, v___x_2700_);
lean_closure_set(v___x_2701_, 1, v_p_2694_);
v___x_2702_ = lean_alloc_closure((void*)(l_Lean_Parser_many_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2702_, 0, v___x_2701_);
v___x_2703_ = l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(v___x_2702_, v_a_2695_, v_a_2696_, v_a_2697_, v_a_2698_);
return v___x_2703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent_parenthesizer___boxed(lean_object* v_p_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l_Lean_Parser_manyIndent_parenthesizer(v_p_2704_, v_a_2705_, v_a_2706_, v_a_2707_, v_a_2708_);
lean_dec(v_a_2708_);
lean_dec_ref(v_a_2707_);
lean_dec(v_a_2706_);
lean_dec_ref(v_a_2705_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyIndent(lean_object* v_p_2711_){
_start:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v___x_2712_ = lean_obj_once(&l_Lean_Parser_many1Indent___closed__1, &l_Lean_Parser_many1Indent___closed__1_once, _init_l_Lean_Parser_many1Indent___closed__1);
v___x_2713_ = l_Lean_Parser_andthen(v___x_2712_, v_p_2711_);
v___x_2714_ = l_Lean_Parser_many(v___x_2713_);
v___x_2715_ = l_Lean_Parser_withPosition(v___x_2714_);
return v___x_2715_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__0(void){
_start:
{
lean_object* v___x_2716_; 
v___x_2716_ = lean_mk_string_unchecked("manyIndent", 10, 10);
return v___x_2716_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1(void){
_start:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2717_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__0);
v___x_2718_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_2719_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_2720_ = l_Lean_Name_mkStr3(v___x_2719_, v___x_2718_, v___x_2717_);
return v___x_2720_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__2(void){
_start:
{
lean_object* v___x_2721_; 
v___x_2721_ = lean_mk_string_unchecked("The parser `manyIndent(p)` is equivalent to `withPosition((colGe p)*)`. This has the effect of\nparsing zero or more occurrences of `p`, where each subsequent `p` parse needs to be indented\nthe same or more than the first parse.\n\nThis parser has arity 1, and returns a list of the results from `p`.\n`p` is \"auto-grouped\" if it is not arity 1. ", 342, 342);
return v___x_2721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1(){
_start:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2723_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__1);
v___x_2724_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___closed__2);
v___x_2725_ = l_Lean_addBuiltinDocString(v___x_2723_, v___x_2724_);
return v___x_2725_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1___boxed(lean_object* v_a_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1();
return v_res_2727_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent___closed__0(void){
_start:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2728_ = lean_obj_once(&l_Lean_Parser_many1Indent___closed__0, &l_Lean_Parser_many1Indent___closed__0_once, _init_l_Lean_Parser_many1Indent___closed__0);
v___x_2729_ = l_Lean_Parser_checkColEq(v___x_2728_);
return v___x_2729_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent___closed__1(void){
_start:
{
lean_object* v___x_2730_; 
v___x_2730_ = lean_mk_string_unchecked("line break", 10, 10);
return v___x_2730_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent___closed__2(void){
_start:
{
lean_object* v___x_2731_; lean_object* v___x_2732_; 
v___x_2731_ = lean_obj_once(&l_Lean_Parser_sepByIndent___closed__1, &l_Lean_Parser_sepByIndent___closed__1_once, _init_l_Lean_Parser_sepByIndent___closed__1);
v___x_2732_ = l_Lean_Parser_checkLinebreakBefore(v___x_2731_);
return v___x_2732_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent___closed__3(void){
_start:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
v___x_2733_ = l_Lean_Parser_pushNone;
v___x_2734_ = lean_obj_once(&l_Lean_Parser_sepByIndent___closed__2, &l_Lean_Parser_sepByIndent___closed__2_once, _init_l_Lean_Parser_sepByIndent___closed__2);
v___x_2735_ = l_Lean_Parser_andthen(v___x_2734_, v___x_2733_);
return v___x_2735_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent___closed__4(void){
_start:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2736_ = lean_obj_once(&l_Lean_Parser_sepByIndent___closed__3, &l_Lean_Parser_sepByIndent___closed__3_once, _init_l_Lean_Parser_sepByIndent___closed__3);
v___x_2737_ = lean_obj_once(&l_Lean_Parser_sepByIndent___closed__0, &l_Lean_Parser_sepByIndent___closed__0_once, _init_l_Lean_Parser_sepByIndent___closed__0);
v___x_2738_ = l_Lean_Parser_andthen(v___x_2737_, v___x_2736_);
return v___x_2738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent(lean_object* v_p_2739_, lean_object* v_sep_2740_, lean_object* v_psep_2741_, uint8_t v_allowTrailingSep_2742_){
_start:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v_p_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; 
v___x_2743_ = lean_obj_once(&l_Lean_Parser_sepByElemParser_formatter___closed__1, &l_Lean_Parser_sepByElemParser_formatter___closed__1_once, _init_l_Lean_Parser_sepByElemParser_formatter___closed__1);
v___x_2744_ = lean_obj_once(&l_Lean_Parser_many___closed__0, &l_Lean_Parser_many___closed__0_once, _init_l_Lean_Parser_many___closed__0);
v_p_2745_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_2743_, v_p_2739_, v___x_2744_);
v___x_2746_ = lean_obj_once(&l_Lean_Parser_many1Indent___closed__1, &l_Lean_Parser_many1Indent___closed__1_once, _init_l_Lean_Parser_many1Indent___closed__1);
v___x_2747_ = l_Lean_Parser_andthen(v___x_2746_, v_p_2745_);
v___x_2748_ = lean_obj_once(&l_Lean_Parser_sepByIndent___closed__4, &l_Lean_Parser_sepByIndent___closed__4_once, _init_l_Lean_Parser_sepByIndent___closed__4);
v___x_2749_ = l_Lean_Parser_orelse(v_psep_2741_, v___x_2748_);
v___x_2750_ = l_Lean_Parser_sepBy(v___x_2747_, v_sep_2740_, v___x_2749_, v_allowTrailingSep_2742_);
v___x_2751_ = l_Lean_Parser_withPosition(v___x_2750_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent___boxed(lean_object* v_p_2752_, lean_object* v_sep_2753_, lean_object* v_psep_2754_, lean_object* v_allowTrailingSep_2755_){
_start:
{
uint8_t v_allowTrailingSep_boxed_2756_; lean_object* v_res_2757_; 
v_allowTrailingSep_boxed_2756_ = lean_unbox(v_allowTrailingSep_2755_);
v_res_2757_ = l_Lean_Parser_sepByIndent(v_p_2752_, v_sep_2753_, v_psep_2754_, v_allowTrailingSep_boxed_2756_);
return v_res_2757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent(lean_object* v_p_2758_, lean_object* v_sep_2759_, lean_object* v_psep_2760_, uint8_t v_allowTrailingSep_2761_){
_start:
{
lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v_p_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
v___x_2762_ = lean_obj_once(&l_Lean_Parser_sepByElemParser_formatter___closed__1, &l_Lean_Parser_sepByElemParser_formatter___closed__1_once, _init_l_Lean_Parser_sepByElemParser_formatter___closed__1);
v___x_2763_ = lean_obj_once(&l_Lean_Parser_many___closed__0, &l_Lean_Parser_many___closed__0_once, _init_l_Lean_Parser_many___closed__0);
v_p_2764_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_2762_, v_p_2758_, v___x_2763_);
v___x_2765_ = lean_obj_once(&l_Lean_Parser_many1Indent___closed__1, &l_Lean_Parser_many1Indent___closed__1_once, _init_l_Lean_Parser_many1Indent___closed__1);
v___x_2766_ = l_Lean_Parser_andthen(v___x_2765_, v_p_2764_);
v___x_2767_ = lean_obj_once(&l_Lean_Parser_sepByIndent___closed__4, &l_Lean_Parser_sepByIndent___closed__4_once, _init_l_Lean_Parser_sepByIndent___closed__4);
v___x_2768_ = l_Lean_Parser_orelse(v_psep_2760_, v___x_2767_);
v___x_2769_ = l_Lean_Parser_sepBy1(v___x_2766_, v_sep_2759_, v___x_2768_, v_allowTrailingSep_2761_);
v___x_2770_ = l_Lean_Parser_withPosition(v___x_2769_);
return v___x_2770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent___boxed(lean_object* v_p_2771_, lean_object* v_sep_2772_, lean_object* v_psep_2773_, lean_object* v_allowTrailingSep_2774_){
_start:
{
uint8_t v_allowTrailingSep_boxed_2775_; lean_object* v_res_2776_; 
v_allowTrailingSep_boxed_2775_ = lean_unbox(v_allowTrailingSep_2774_);
v_res_2776_ = l_Lean_Parser_sepBy1Indent(v_p_2771_, v_sep_2772_, v_psep_2773_, v_allowTrailingSep_boxed_2775_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg(lean_object* v___y_2777_, lean_object* v___y_2778_){
_start:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v_stxTrav_2782_; lean_object* v_cur_2783_; lean_object* v___x_2784_; 
v___x_2780_ = lean_st_ref_get(v___y_2778_);
lean_dec(v___x_2780_);
v___x_2781_ = lean_st_ref_get(v___y_2777_);
v_stxTrav_2782_ = lean_ctor_get(v___x_2781_, 0);
lean_inc_ref(v_stxTrav_2782_);
lean_dec(v___x_2781_);
v_cur_2783_ = lean_ctor_get(v_stxTrav_2782_, 0);
lean_inc(v_cur_2783_);
lean_dec_ref(v_stxTrav_2782_);
v___x_2784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2784_, 0, v_cur_2783_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg___boxed(lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_){
_start:
{
lean_object* v_res_2788_; 
v_res_2788_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg(v___y_2785_, v___y_2786_);
lean_dec(v___y_2786_);
lean_dec(v___y_2785_);
return v_res_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0(lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_){
_start:
{
lean_object* v___x_2794_; 
v___x_2794_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg(v___y_2790_, v___y_2792_);
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___boxed(lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_){
_start:
{
lean_object* v_res_2800_; 
v_res_2800_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0(v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2797_);
lean_dec(v___y_2796_);
lean_dec_ref(v___y_2795_);
return v_res_2800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg(lean_object* v___y_2801_, lean_object* v___y_2802_){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v_stxTrav_2806_; lean_object* v_leadWord_2807_; uint8_t v_leadWordIdent_2808_; uint8_t v_isUngrouped_2809_; uint8_t v_mustBeGrouped_2810_; lean_object* v_stack_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2822_; 
v___x_2804_ = lean_st_ref_get(v___y_2802_);
lean_dec(v___x_2804_);
v___x_2805_ = lean_st_ref_take(v___y_2801_);
v_stxTrav_2806_ = lean_ctor_get(v___x_2805_, 0);
v_leadWord_2807_ = lean_ctor_get(v___x_2805_, 1);
v_leadWordIdent_2808_ = lean_ctor_get_uint8(v___x_2805_, sizeof(void*)*3);
v_isUngrouped_2809_ = lean_ctor_get_uint8(v___x_2805_, sizeof(void*)*3 + 1);
v_mustBeGrouped_2810_ = lean_ctor_get_uint8(v___x_2805_, sizeof(void*)*3 + 2);
v_stack_2811_ = lean_ctor_get(v___x_2805_, 2);
v_isSharedCheck_2822_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2813_ = v___x_2805_;
v_isShared_2814_ = v_isSharedCheck_2822_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_stack_2811_);
lean_inc(v_leadWord_2807_);
lean_inc(v_stxTrav_2806_);
lean_dec(v___x_2805_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2822_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2815_; lean_object* v___x_2817_; 
v___x_2815_ = l_Lean_Syntax_Traverser_left(v_stxTrav_2806_);
if (v_isShared_2814_ == 0)
{
lean_ctor_set(v___x_2813_, 0, v___x_2815_);
v___x_2817_ = v___x_2813_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v___x_2815_);
lean_ctor_set(v_reuseFailAlloc_2821_, 1, v_leadWord_2807_);
lean_ctor_set(v_reuseFailAlloc_2821_, 2, v_stack_2811_);
lean_ctor_set_uint8(v_reuseFailAlloc_2821_, sizeof(void*)*3, v_leadWordIdent_2808_);
lean_ctor_set_uint8(v_reuseFailAlloc_2821_, sizeof(void*)*3 + 1, v_isUngrouped_2809_);
lean_ctor_set_uint8(v_reuseFailAlloc_2821_, sizeof(void*)*3 + 2, v_mustBeGrouped_2810_);
v___x_2817_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v___x_2818_ = lean_st_ref_set(v___y_2801_, v___x_2817_);
v___x_2819_ = lean_box(0);
v___x_2820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2820_, 0, v___x_2819_);
return v___x_2820_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg___boxed(lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg(v___y_2823_, v___y_2824_);
lean_dec(v___y_2824_);
lean_dec(v___y_2823_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2(lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_){
_start:
{
lean_object* v___x_2832_; 
v___x_2832_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg(v___y_2828_, v___y_2830_);
return v___x_2832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___boxed(lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_){
_start:
{
lean_object* v_res_2838_; 
v_res_2838_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2(v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_);
lean_dec(v___y_2836_);
lean_dec_ref(v___y_2835_);
lean_dec(v___y_2834_);
lean_dec_ref(v___y_2833_);
return v_res_2838_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_2839_; 
v___x_2839_ = lean_mk_string_unchecked("\n", 1, 1);
return v___x_2839_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; 
v___x_2840_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__0, &l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__0);
v___x_2841_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2840_);
return v___x_2841_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg(lean_object* v_pSep_2842_, lean_object* v___x_2843_, lean_object* v_p_2844_, lean_object* v_as_x27_2845_, lean_object* v_b_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_){
_start:
{
if (lean_obj_tag(v_as_x27_2845_) == 0)
{
lean_object* v___x_2852_; 
lean_dec_ref(v_p_2844_);
lean_dec_ref(v_pSep_2842_);
v___x_2852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2852_, 0, v_b_2846_);
return v___x_2852_;
}
else
{
lean_object* v_head_2853_; lean_object* v_tail_2854_; lean_object* v___x_2855_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; uint8_t v___x_2862_; 
v_head_2853_ = lean_ctor_get(v_as_x27_2845_, 0);
v_tail_2854_ = lean_ctor_get(v_as_x27_2845_, 1);
v___x_2855_ = lean_box(0);
v___x_2859_ = lean_unsigned_to_nat(0u);
v___x_2860_ = lean_unsigned_to_nat(2u);
v___x_2861_ = lean_nat_mod(v_head_2853_, v___x_2860_);
v___x_2862_ = lean_nat_dec_eq(v___x_2861_, v___x_2859_);
lean_dec(v___x_2861_);
if (v___x_2862_ == 0)
{
lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; 
v___x_2863_ = lean_st_ref_get(v___y_2850_);
lean_dec(v___x_2863_);
v___x_2864_ = lean_st_ref_get(v___y_2848_);
lean_inc_ref(v_pSep_2842_);
lean_inc(v___y_2850_);
lean_inc_ref(v___y_2849_);
lean_inc(v___y_2848_);
lean_inc_ref(v___y_2847_);
v___x_2865_ = lean_apply_5(v_pSep_2842_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, lean_box(0));
if (lean_obj_tag(v___x_2865_) == 0)
{
lean_dec_ref(v___x_2865_);
lean_dec(v___x_2864_);
v_as_x27_2845_ = v_tail_2854_;
v_b_2846_ = v___x_2855_;
goto _start;
}
else
{
lean_object* v_a_2867_; lean_object* v___x_2868_; uint8_t v___y_2870_; uint8_t v___x_2880_; 
v_a_2867_ = lean_ctor_get(v___x_2865_, 0);
lean_inc(v_a_2867_);
v___x_2868_ = l_Lean_PrettyPrinter_backtrackExceptionId;
v___x_2880_ = l_Lean_Exception_isInterrupt(v_a_2867_);
if (v___x_2880_ == 0)
{
uint8_t v___x_2881_; 
lean_inc(v_a_2867_);
v___x_2881_ = l_Lean_Exception_isRuntime(v_a_2867_);
v___y_2870_ = v___x_2881_;
goto v___jp_2869_;
}
else
{
v___y_2870_ = v___x_2880_;
goto v___jp_2869_;
}
v___jp_2869_:
{
if (v___y_2870_ == 0)
{
if (lean_obj_tag(v_a_2867_) == 0)
{
lean_dec_ref(v_a_2867_);
lean_dec(v___x_2864_);
lean_dec_ref(v_p_2844_);
lean_dec_ref(v_pSep_2842_);
return v___x_2865_;
}
else
{
lean_object* v_id_2871_; uint8_t v___x_2872_; 
v_id_2871_ = lean_ctor_get(v_a_2867_, 0);
lean_inc(v_id_2871_);
lean_dec_ref(v_a_2867_);
v___x_2872_ = l_Lean_instBEqInternalExceptionId_beq(v___x_2868_, v_id_2871_);
lean_dec(v_id_2871_);
if (v___x_2872_ == 0)
{
lean_dec(v___x_2864_);
lean_dec_ref(v_p_2844_);
lean_dec_ref(v_pSep_2842_);
return v___x_2865_;
}
else
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; uint8_t v___x_2877_; 
lean_dec_ref(v___x_2865_);
v___x_2873_ = lean_st_ref_get(v___y_2850_);
lean_dec(v___x_2873_);
v___x_2874_ = lean_st_ref_set(v___y_2848_, v___x_2864_);
v___x_2875_ = lean_unsigned_to_nat(1u);
v___x_2876_ = lean_nat_sub(v___x_2843_, v___x_2875_);
v___x_2877_ = lean_nat_dec_eq(v_head_2853_, v___x_2876_);
lean_dec(v___x_2876_);
if (v___x_2877_ == 0)
{
lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2878_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1);
v___x_2879_ = l_Lean_PrettyPrinter_Formatter_pushWhitespace___redArg(v___x_2878_, v___y_2848_, v___y_2850_);
if (lean_obj_tag(v___x_2879_) == 0)
{
lean_dec_ref(v___x_2879_);
goto v___jp_2856_;
}
else
{
lean_dec_ref(v_p_2844_);
lean_dec_ref(v_pSep_2842_);
return v___x_2879_;
}
}
else
{
goto v___jp_2856_;
}
}
}
}
else
{
lean_dec(v_a_2867_);
lean_dec(v___x_2864_);
lean_dec_ref(v_p_2844_);
lean_dec_ref(v_pSep_2842_);
return v___x_2865_;
}
}
}
}
else
{
lean_object* v___x_2882_; 
lean_inc_ref(v_p_2844_);
lean_inc(v___y_2850_);
lean_inc_ref(v___y_2849_);
lean_inc(v___y_2848_);
lean_inc_ref(v___y_2847_);
v___x_2882_ = lean_apply_5(v_p_2844_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, lean_box(0));
if (lean_obj_tag(v___x_2882_) == 0)
{
lean_dec_ref(v___x_2882_);
v_as_x27_2845_ = v_tail_2854_;
v_b_2846_ = v___x_2855_;
goto _start;
}
else
{
lean_dec_ref(v_p_2844_);
lean_dec_ref(v_pSep_2842_);
return v___x_2882_;
}
}
v___jp_2856_:
{
lean_object* v___x_2857_; 
v___x_2857_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_Parser_sepByIndent_formatter_spec__2___redArg(v___y_2848_, v___y_2850_);
lean_dec_ref(v___x_2857_);
v_as_x27_2845_ = v_tail_2854_;
v_b_2846_ = v___x_2855_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___boxed(lean_object* v_pSep_2884_, lean_object* v___x_2885_, lean_object* v_p_2886_, lean_object* v_as_x27_2887_, lean_object* v_b_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
lean_object* v_res_2894_; 
v_res_2894_ = l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg(v_pSep_2884_, v___x_2885_, v_p_2886_, v_as_x27_2887_, v_b_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
lean_dec(v_as_x27_2887_);
lean_dec(v___x_2885_);
return v_res_2894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg___lam__0(lean_object* v_pSep_2895_, lean_object* v___x_2896_, lean_object* v_p_2897_, lean_object* v___x_2898_, lean_object* v___x_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
lean_object* v___x_2905_; 
v___x_2905_ = l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg(v_pSep_2895_, v___x_2896_, v_p_2897_, v___x_2898_, v___x_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_);
if (lean_obj_tag(v___x_2905_) == 0)
{
lean_object* v___x_2907_; uint8_t v_isShared_2908_; uint8_t v_isSharedCheck_2912_; 
v_isSharedCheck_2912_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2912_ == 0)
{
lean_object* v_unused_2913_; 
v_unused_2913_ = lean_ctor_get(v___x_2905_, 0);
lean_dec(v_unused_2913_);
v___x_2907_ = v___x_2905_;
v_isShared_2908_ = v_isSharedCheck_2912_;
goto v_resetjp_2906_;
}
else
{
lean_dec(v___x_2905_);
v___x_2907_ = lean_box(0);
v_isShared_2908_ = v_isSharedCheck_2912_;
goto v_resetjp_2906_;
}
v_resetjp_2906_:
{
lean_object* v___x_2910_; 
if (v_isShared_2908_ == 0)
{
lean_ctor_set(v___x_2907_, 0, v___x_2899_);
v___x_2910_ = v___x_2907_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v___x_2899_);
v___x_2910_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
return v___x_2910_;
}
}
}
else
{
return v___x_2905_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg___lam__0___boxed(lean_object* v_pSep_2914_, lean_object* v___x_2915_, lean_object* v_p_2916_, lean_object* v___x_2917_, lean_object* v___x_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l_Lean_Parser_sepByIndent_formatter___redArg___lam__0(v_pSep_2914_, v___x_2915_, v_p_2916_, v___x_2917_, v___x_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
lean_dec(v___x_2917_);
lean_dec(v___x_2915_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg(lean_object* v_a_2925_, lean_object* v_as_2926_, lean_object* v_i_2927_, lean_object* v_j_2928_, lean_object* v_bs_2929_){
_start:
{
lean_object* v_zero_2930_; uint8_t v_isZero_2931_; 
v_zero_2930_ = lean_unsigned_to_nat(0u);
v_isZero_2931_ = lean_nat_dec_eq(v_i_2927_, v_zero_2930_);
if (v_isZero_2931_ == 1)
{
lean_dec(v_j_2928_);
lean_dec(v_i_2927_);
return v_bs_2929_;
}
else
{
lean_object* v_one_2932_; lean_object* v_n_2933_; uint8_t v___y_2935_; uint8_t v___y_2941_; lean_object* v___x_2946_; lean_object* v___x_2947_; uint8_t v___x_2948_; 
v_one_2932_ = lean_unsigned_to_nat(1u);
v_n_2933_ = lean_nat_sub(v_i_2927_, v_one_2932_);
lean_dec(v_i_2927_);
v___x_2946_ = lean_unsigned_to_nat(2u);
v___x_2947_ = lean_nat_mod(v_j_2928_, v___x_2946_);
v___x_2948_ = lean_nat_dec_eq(v___x_2947_, v_one_2932_);
lean_dec(v___x_2947_);
if (v___x_2948_ == 0)
{
v___y_2941_ = v___x_2948_;
goto v___jp_2940_;
}
else
{
lean_object* v___x_2949_; uint8_t v___x_2950_; 
v___x_2949_ = lean_array_fget_borrowed(v_as_2926_, v_j_2928_);
lean_inc(v___x_2949_);
v___x_2950_ = l_Lean_Syntax_matchesNull(v___x_2949_, v_zero_2930_);
v___y_2941_ = v___x_2950_;
goto v___jp_2940_;
}
v___jp_2934_:
{
lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2936_ = lean_nat_add(v_j_2928_, v_one_2932_);
lean_dec(v_j_2928_);
v___x_2937_ = lean_box(v___y_2935_);
v___x_2938_ = lean_array_push(v_bs_2929_, v___x_2937_);
v_i_2927_ = v_n_2933_;
v_j_2928_ = v___x_2936_;
v_bs_2929_ = v___x_2938_;
goto _start;
}
v___jp_2940_:
{
if (v___y_2941_ == 0)
{
v___y_2935_ = v___y_2941_;
goto v___jp_2934_;
}
else
{
lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; uint8_t v___x_2945_; 
v___x_2942_ = l_Lean_Syntax_getArgs(v_a_2925_);
v___x_2943_ = lean_array_get_size(v___x_2942_);
lean_dec_ref(v___x_2942_);
v___x_2944_ = lean_nat_sub(v___x_2943_, v_one_2932_);
v___x_2945_ = lean_nat_dec_eq(v_j_2928_, v___x_2944_);
lean_dec(v___x_2944_);
if (v___x_2945_ == 0)
{
v___y_2935_ = v___y_2941_;
goto v___jp_2934_;
}
else
{
v___y_2935_ = v_isZero_2931_;
goto v___jp_2934_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg___boxed(lean_object* v_a_2951_, lean_object* v_as_2952_, lean_object* v_i_2953_, lean_object* v_j_2954_, lean_object* v_bs_2955_){
_start:
{
lean_object* v_res_2956_; 
v_res_2956_ = l_Array_mapFinIdxM_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg(v_a_2951_, v_as_2952_, v_i_2953_, v_j_2954_, v_bs_2955_);
lean_dec_ref(v_as_2952_);
lean_dec(v_a_2951_);
return v_res_2956_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Parser_sepByIndent_formatter_spec__4(lean_object* v_as_2957_, size_t v_i_2958_, size_t v_stop_2959_){
_start:
{
uint8_t v___x_2960_; 
v___x_2960_ = lean_usize_dec_eq(v_i_2958_, v_stop_2959_);
if (v___x_2960_ == 0)
{
lean_object* v___x_2961_; uint8_t v___x_2962_; 
v___x_2961_ = lean_array_uget_borrowed(v_as_2957_, v_i_2958_);
v___x_2962_ = lean_unbox(v___x_2961_);
if (v___x_2962_ == 0)
{
size_t v___x_2963_; size_t v___x_2964_; 
v___x_2963_ = ((size_t)1ULL);
v___x_2964_ = lean_usize_add(v_i_2958_, v___x_2963_);
v_i_2958_ = v___x_2964_;
goto _start;
}
else
{
uint8_t v___x_2966_; 
v___x_2966_ = lean_unbox(v___x_2961_);
return v___x_2966_;
}
}
else
{
uint8_t v___x_2967_; 
v___x_2967_ = 0;
return v___x_2967_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Parser_sepByIndent_formatter_spec__4___boxed(lean_object* v_as_2968_, lean_object* v_i_2969_, lean_object* v_stop_2970_){
_start:
{
size_t v_i_boxed_2971_; size_t v_stop_boxed_2972_; uint8_t v_res_2973_; lean_object* v_r_2974_; 
v_i_boxed_2971_ = lean_unbox_usize(v_i_2969_);
lean_dec(v_i_2969_);
v_stop_boxed_2972_ = lean_unbox_usize(v_stop_2970_);
lean_dec(v_stop_2970_);
v_res_2973_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Parser_sepByIndent_formatter_spec__4(v_as_2968_, v_i_boxed_2971_, v_stop_boxed_2972_);
lean_dec_ref(v_as_2968_);
v_r_2974_ = lean_box(v_res_2973_);
return v_r_2974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg(lean_object* v_p_2975_, lean_object* v_pSep_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_){
_start:
{
lean_object* v___x_2982_; lean_object* v_a_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; uint8_t v___y_2987_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; uint8_t v___x_3006_; 
v___x_2982_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Parser_sepByIndent_formatter_spec__0___redArg(v_a_2978_, v_a_2980_);
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
lean_inc(v_a_2983_);
lean_dec_ref(v___x_2982_);
v___x_2984_ = l_Lean_Syntax_getArgs(v_a_2983_);
v___x_2985_ = lean_array_get_size(v___x_2984_);
v___x_3002_ = lean_unsigned_to_nat(0u);
v___x_3003_ = lean_mk_empty_array_with_capacity(v___x_2985_);
v___x_3004_ = l_Array_mapFinIdxM_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg(v_a_2983_, v___x_2984_, v___x_2985_, v___x_3002_, v___x_3003_);
lean_dec_ref(v___x_2984_);
lean_dec(v_a_2983_);
v___x_3005_ = lean_array_get_size(v___x_3004_);
v___x_3006_ = lean_nat_dec_lt(v___x_3002_, v___x_3005_);
if (v___x_3006_ == 0)
{
lean_dec_ref(v___x_3004_);
v___y_2987_ = v___x_3006_;
goto v___jp_2986_;
}
else
{
if (v___x_3006_ == 0)
{
lean_dec_ref(v___x_3004_);
v___y_2987_ = v___x_3006_;
goto v___jp_2986_;
}
else
{
size_t v___x_3007_; size_t v___x_3008_; uint8_t v___x_3009_; 
v___x_3007_ = ((size_t)0ULL);
v___x_3008_ = lean_usize_of_nat(v___x_3005_);
v___x_3009_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Parser_sepByIndent_formatter_spec__4(v___x_3004_, v___x_3007_, v___x_3008_);
lean_dec_ref(v___x_3004_);
v___y_2987_ = v___x_3009_;
goto v___jp_2986_;
}
}
v___jp_2986_:
{
lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___f_2991_; lean_object* v___x_2992_; 
v___x_2988_ = l_List_range(v___x_2985_);
v___x_2989_ = l_List_reverse___redArg(v___x_2988_);
v___x_2990_ = lean_box(0);
v___f_2991_ = lean_alloc_closure((void*)(l_Lean_Parser_sepByIndent_formatter___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2991_, 0, v_pSep_2976_);
lean_closure_set(v___f_2991_, 1, v___x_2985_);
lean_closure_set(v___f_2991_, 2, v_p_2975_);
lean_closure_set(v___f_2991_, 3, v___x_2989_);
lean_closure_set(v___f_2991_, 4, v___x_2990_);
v___x_2992_ = l_Lean_PrettyPrinter_Formatter_visitArgs(v___f_2991_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_);
if (lean_obj_tag(v___x_2992_) == 0)
{
lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_3000_; 
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2992_);
if (v_isSharedCheck_3000_ == 0)
{
lean_object* v_unused_3001_; 
v_unused_3001_ = lean_ctor_get(v___x_2992_, 0);
lean_dec(v_unused_3001_);
v___x_2994_ = v___x_2992_;
v_isShared_2995_ = v_isSharedCheck_3000_;
goto v_resetjp_2993_;
}
else
{
lean_dec(v___x_2992_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_3000_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
if (v___y_2987_ == 0)
{
lean_object* v___x_2997_; 
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 0, v___x_2990_);
v___x_2997_ = v___x_2994_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v___x_2990_);
v___x_2997_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
return v___x_2997_;
}
}
else
{
lean_object* v___x_2999_; 
lean_del_object(v___x_2994_);
v___x_2999_ = l_Lean_PrettyPrinter_Formatter_pushAlign___redArg(v___y_2987_, v_a_2978_, v_a_2980_);
return v___x_2999_;
}
}
}
else
{
return v___x_2992_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___redArg___boxed(lean_object* v_p_3010_, lean_object* v_pSep_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_){
_start:
{
lean_object* v_res_3017_; 
v_res_3017_ = l_Lean_Parser_sepByIndent_formatter___redArg(v_p_3010_, v_pSep_3011_, v_a_3012_, v_a_3013_, v_a_3014_, v_a_3015_);
lean_dec(v_a_3015_);
lean_dec_ref(v_a_3014_);
lean_dec(v_a_3013_);
lean_dec_ref(v_a_3012_);
return v_res_3017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter(lean_object* v_p_3018_, lean_object* v___sep_3019_, lean_object* v_pSep_3020_, lean_object* v_a_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_){
_start:
{
lean_object* v___x_3026_; 
v___x_3026_ = l_Lean_Parser_sepByIndent_formatter___redArg(v_p_3018_, v_pSep_3020_, v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_);
return v___x_3026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_formatter___boxed(lean_object* v_p_3027_, lean_object* v___sep_3028_, lean_object* v_pSep_3029_, lean_object* v_a_3030_, lean_object* v_a_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_Lean_Parser_sepByIndent_formatter(v_p_3027_, v___sep_3028_, v_pSep_3029_, v_a_3030_, v_a_3031_, v_a_3032_, v_a_3033_);
lean_dec(v_a_3033_);
lean_dec_ref(v_a_3032_);
lean_dec(v_a_3031_);
lean_dec_ref(v_a_3030_);
lean_dec_ref(v___sep_3028_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Parser_sepByIndent_formatter_spec__1(lean_object* v_a_3036_, lean_object* v_as_3037_, lean_object* v_i_3038_, lean_object* v_j_3039_, lean_object* v_inv_3040_, lean_object* v_bs_3041_){
_start:
{
lean_object* v___x_3042_; 
v___x_3042_ = l_Array_mapFinIdxM_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___redArg(v_a_3036_, v_as_3037_, v_i_3038_, v_j_3039_, v_bs_3041_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Parser_sepByIndent_formatter_spec__1___boxed(lean_object* v_a_3043_, lean_object* v_as_3044_, lean_object* v_i_3045_, lean_object* v_j_3046_, lean_object* v_inv_3047_, lean_object* v_bs_3048_){
_start:
{
lean_object* v_res_3049_; 
v_res_3049_ = l_Array_mapFinIdxM_map___at___00Lean_Parser_sepByIndent_formatter_spec__1(v_a_3043_, v_as_3044_, v_i_3045_, v_j_3046_, v_inv_3047_, v_bs_3048_);
lean_dec_ref(v_as_3044_);
lean_dec(v_a_3043_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3(lean_object* v_pSep_3050_, lean_object* v___x_3051_, lean_object* v_p_3052_, lean_object* v_as_3053_, lean_object* v_as_x27_3054_, lean_object* v_b_3055_, lean_object* v_a_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v___x_3062_; 
v___x_3062_ = l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg(v_pSep_3050_, v___x_3051_, v_p_3052_, v_as_x27_3054_, v_b_3055_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
return v___x_3062_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___boxed(lean_object* v_pSep_3063_, lean_object* v___x_3064_, lean_object* v_p_3065_, lean_object* v_as_3066_, lean_object* v_as_x27_3067_, lean_object* v_b_3068_, lean_object* v_a_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
lean_object* v_res_3075_; 
v_res_3075_ = l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3(v_pSep_3063_, v___x_3064_, v_p_3065_, v_as_3066_, v_as_x27_3067_, v_b_3068_, v_a_3069_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_);
lean_dec(v___y_3073_);
lean_dec_ref(v___y_3072_);
lean_dec(v___y_3071_);
lean_dec_ref(v___y_3070_);
lean_dec(v_as_x27_3067_);
lean_dec(v_as_3066_);
lean_dec(v___x_3064_);
return v_res_3075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter___redArg(lean_object* v_p_3076_, lean_object* v_pSep_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_){
_start:
{
lean_object* v___x_3083_; 
v___x_3083_ = l_Lean_Parser_sepByIndent_formatter___redArg(v_p_3076_, v_pSep_3077_, v_a_3078_, v_a_3079_, v_a_3080_, v_a_3081_);
return v___x_3083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter___redArg___boxed(lean_object* v_p_3084_, lean_object* v_pSep_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_, lean_object* v_a_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l_Lean_Parser_sepBy1Indent_formatter___redArg(v_p_3084_, v_pSep_3085_, v_a_3086_, v_a_3087_, v_a_3088_, v_a_3089_);
lean_dec(v_a_3089_);
lean_dec_ref(v_a_3088_);
lean_dec(v_a_3087_);
lean_dec_ref(v_a_3086_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter(lean_object* v_p_3092_, lean_object* v___sep_3093_, lean_object* v_pSep_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_){
_start:
{
lean_object* v___x_3100_; 
v___x_3100_ = l_Lean_Parser_sepByIndent_formatter___redArg(v_p_3092_, v_pSep_3094_, v_a_3095_, v_a_3096_, v_a_3097_, v_a_3098_);
return v___x_3100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_formatter___boxed(lean_object* v_p_3101_, lean_object* v___sep_3102_, lean_object* v_pSep_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_, lean_object* v_a_3107_, lean_object* v_a_3108_){
_start:
{
lean_object* v_res_3109_; 
v_res_3109_ = l_Lean_Parser_sepBy1Indent_formatter(v_p_3101_, v___sep_3102_, v_pSep_3103_, v_a_3104_, v_a_3105_, v_a_3106_, v_a_3107_);
lean_dec(v_a_3107_);
lean_dec_ref(v_a_3106_);
lean_dec(v_a_3105_);
lean_dec_ref(v_a_3104_);
lean_dec_ref(v___sep_3102_);
return v_res_3109_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent_parenthesizer___closed__0(void){
_start:
{
lean_object* v___f_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___f_3110_ = lean_obj_once(&l_Lean_Parser_mkAntiquot_parenthesizer___closed__0, &l_Lean_Parser_mkAntiquot_parenthesizer___closed__0_once, _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__0);
v___x_3111_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkLinebreakBefore_parenthesizer___boxed), 5, 0);
v___x_3112_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3112_, 0, v___x_3111_);
lean_closure_set(v___x_3112_, 1, v___f_3110_);
return v___x_3112_;
}
}
static lean_object* _init_l_Lean_Parser_sepByIndent_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
v___x_3113_ = lean_obj_once(&l_Lean_Parser_sepByIndent_parenthesizer___closed__0, &l_Lean_Parser_sepByIndent_parenthesizer___closed__0_once, _init_l_Lean_Parser_sepByIndent_parenthesizer___closed__0);
v___x_3114_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColEq_parenthesizer___boxed), 5, 0);
v___x_3115_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3115_, 0, v___x_3114_);
lean_closure_set(v___x_3115_, 1, v___x_3113_);
return v___x_3115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_parenthesizer(lean_object* v_p_3116_, lean_object* v_sep_3117_, lean_object* v_psep_3118_, uint8_t v_allowTrailingSep_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_){
_start:
{
lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; 
v___x_3125_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed), 5, 0);
v___x_3126_ = lean_obj_once(&l_Lean_Parser_sepByElemParser_formatter___closed__1, &l_Lean_Parser_sepByElemParser_formatter___closed__1_once, _init_l_Lean_Parser_sepByElemParser_formatter___closed__1);
v___x_3127_ = lean_obj_once(&l_Lean_Parser_many_parenthesizer___closed__0, &l_Lean_Parser_many_parenthesizer___closed__0_once, _init_l_Lean_Parser_many_parenthesizer___closed__0);
v___x_3128_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_3128_, 0, v___x_3126_);
lean_closure_set(v___x_3128_, 1, v_p_3116_);
lean_closure_set(v___x_3128_, 2, v___x_3127_);
v___x_3129_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3129_, 0, v___x_3125_);
lean_closure_set(v___x_3129_, 1, v___x_3128_);
v___x_3130_ = lean_obj_once(&l_Lean_Parser_sepByIndent_parenthesizer___closed__1, &l_Lean_Parser_sepByIndent_parenthesizer___closed__1_once, _init_l_Lean_Parser_sepByIndent_parenthesizer___closed__1);
v___x_3131_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3131_, 0, v_psep_3118_);
lean_closure_set(v___x_3131_, 1, v___x_3130_);
v___x_3132_ = lean_box(v_allowTrailingSep_3119_);
v___x_3133_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_3133_, 0, v___x_3129_);
lean_closure_set(v___x_3133_, 1, v_sep_3117_);
lean_closure_set(v___x_3133_, 2, v___x_3131_);
lean_closure_set(v___x_3133_, 3, v___x_3132_);
v___x_3134_ = l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(v___x_3133_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_);
return v___x_3134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByIndent_parenthesizer___boxed(lean_object* v_p_3135_, lean_object* v_sep_3136_, lean_object* v_psep_3137_, lean_object* v_allowTrailingSep_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_){
_start:
{
uint8_t v_allowTrailingSep_boxed_3144_; lean_object* v_res_3145_; 
v_allowTrailingSep_boxed_3144_ = lean_unbox(v_allowTrailingSep_3138_);
v_res_3145_ = l_Lean_Parser_sepByIndent_parenthesizer(v_p_3135_, v_sep_3136_, v_psep_3137_, v_allowTrailingSep_boxed_3144_, v_a_3139_, v_a_3140_, v_a_3141_, v_a_3142_);
lean_dec(v_a_3142_);
lean_dec_ref(v_a_3141_);
lean_dec(v_a_3140_);
lean_dec_ref(v_a_3139_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_parenthesizer(lean_object* v_p_3146_, lean_object* v_sep_3147_, lean_object* v_psep_3148_, uint8_t v_allowTrailingSep_3149_, lean_object* v_a_3150_, lean_object* v_a_3151_, lean_object* v_a_3152_, lean_object* v_a_3153_){
_start:
{
lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3155_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed), 5, 0);
v___x_3156_ = lean_obj_once(&l_Lean_Parser_sepByElemParser_formatter___closed__1, &l_Lean_Parser_sepByElemParser_formatter___closed__1_once, _init_l_Lean_Parser_sepByElemParser_formatter___closed__1);
v___x_3157_ = lean_obj_once(&l_Lean_Parser_many_parenthesizer___closed__0, &l_Lean_Parser_many_parenthesizer___closed__0_once, _init_l_Lean_Parser_many_parenthesizer___closed__0);
v___x_3158_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_3158_, 0, v___x_3156_);
lean_closure_set(v___x_3158_, 1, v_p_3146_);
lean_closure_set(v___x_3158_, 2, v___x_3157_);
v___x_3159_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3159_, 0, v___x_3155_);
lean_closure_set(v___x_3159_, 1, v___x_3158_);
v___x_3160_ = lean_obj_once(&l_Lean_Parser_sepByIndent_parenthesizer___closed__1, &l_Lean_Parser_sepByIndent_parenthesizer___closed__1_once, _init_l_Lean_Parser_sepByIndent_parenthesizer___closed__1);
v___x_3161_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_3161_, 0, v_psep_3148_);
lean_closure_set(v___x_3161_, 1, v___x_3160_);
v___x_3162_ = lean_box(v_allowTrailingSep_3149_);
v___x_3163_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_3163_, 0, v___x_3159_);
lean_closure_set(v___x_3163_, 1, v_sep_3147_);
lean_closure_set(v___x_3163_, 2, v___x_3161_);
lean_closure_set(v___x_3163_, 3, v___x_3162_);
v___x_3164_ = l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(v___x_3163_, v_a_3150_, v_a_3151_, v_a_3152_, v_a_3153_);
return v___x_3164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Indent_parenthesizer___boxed(lean_object* v_p_3165_, lean_object* v_sep_3166_, lean_object* v_psep_3167_, lean_object* v_allowTrailingSep_3168_, lean_object* v_a_3169_, lean_object* v_a_3170_, lean_object* v_a_3171_, lean_object* v_a_3172_, lean_object* v_a_3173_){
_start:
{
uint8_t v_allowTrailingSep_boxed_3174_; lean_object* v_res_3175_; 
v_allowTrailingSep_boxed_3174_ = lean_unbox(v_allowTrailingSep_3168_);
v_res_3175_ = l_Lean_Parser_sepBy1Indent_parenthesizer(v_p_3165_, v_sep_3166_, v_psep_3167_, v_allowTrailingSep_boxed_3174_, v_a_3169_, v_a_3170_, v_a_3171_, v_a_3172_);
lean_dec(v_a_3172_);
lean_dec_ref(v_a_3171_);
lean_dec(v_a_3170_);
lean_dec_ref(v_a_3169_);
return v_res_3175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter___redArg(){
_start:
{
lean_object* v___x_3177_; 
v___x_3177_ = l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___redArg();
return v___x_3177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter___redArg___boxed(lean_object* v_a_3178_){
_start:
{
lean_object* v_res_3179_; 
v_res_3179_ = l_Lean_Parser_notSymbol_formatter___redArg();
return v_res_3179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter(lean_object* v_s_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_, lean_object* v_a_3184_){
_start:
{
lean_object* v___x_3186_; 
v___x_3186_ = l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___redArg();
return v___x_3186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_formatter___boxed(lean_object* v_s_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_){
_start:
{
lean_object* v_res_3193_; 
v_res_3193_ = l_Lean_Parser_notSymbol_formatter(v_s_3187_, v_a_3188_, v_a_3189_, v_a_3190_, v_a_3191_);
lean_dec(v_a_3191_);
lean_dec_ref(v_a_3190_);
lean_dec(v_a_3189_);
lean_dec_ref(v_a_3188_);
lean_dec_ref(v_s_3187_);
return v_res_3193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer___redArg(){
_start:
{
lean_object* v___x_3195_; 
v___x_3195_ = l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___redArg();
return v___x_3195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer___redArg___boxed(lean_object* v_a_3196_){
_start:
{
lean_object* v_res_3197_; 
v_res_3197_ = l_Lean_Parser_notSymbol_parenthesizer___redArg();
return v_res_3197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer(lean_object* v_s_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_){
_start:
{
lean_object* v___x_3204_; 
v___x_3204_ = l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___redArg();
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol_parenthesizer___boxed(lean_object* v_s_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_){
_start:
{
lean_object* v_res_3211_; 
v_res_3211_ = l_Lean_Parser_notSymbol_parenthesizer(v_s_3205_, v_a_3206_, v_a_3207_, v_a_3208_, v_a_3209_);
lean_dec(v_a_3209_);
lean_dec_ref(v_a_3208_);
lean_dec(v_a_3207_);
lean_dec_ref(v_a_3206_);
lean_dec_ref(v_s_3205_);
return v_res_3211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notSymbol(lean_object* v_s_3212_){
_start:
{
lean_object* v___x_3213_; lean_object* v___x_3214_; 
lean_inc_ref(v_s_3212_);
v___x_3213_ = l_Lean_Parser_symbol(v_s_3212_);
v___x_3214_ = l_Lean_Parser_notFollowedBy(v___x_3213_, v_s_3212_);
return v___x_3214_;
}
}
static lean_object* _init_l_Lean_Parser_patternIgnore_formatter___closed__0(void){
_start:
{
lean_object* v___x_3215_; 
v___x_3215_ = lean_mk_string_unchecked("patternIgnore", 13, 13);
return v___x_3215_;
}
}
static lean_object* _init_l_Lean_Parser_patternIgnore_formatter___closed__1(void){
_start:
{
lean_object* v___x_3216_; lean_object* v___x_3217_; 
v___x_3216_ = lean_obj_once(&l_Lean_Parser_patternIgnore_formatter___closed__0, &l_Lean_Parser_patternIgnore_formatter___closed__0_once, _init_l_Lean_Parser_patternIgnore_formatter___closed__0);
v___x_3217_ = l_Lean_Name_mkStr1(v___x_3216_);
return v___x_3217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_formatter(lean_object* v_p_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_){
_start:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3224_ = lean_obj_once(&l_Lean_Parser_patternIgnore_formatter___closed__1, &l_Lean_Parser_patternIgnore_formatter___closed__1_once, _init_l_Lean_Parser_patternIgnore_formatter___closed__1);
v___x_3225_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_3224_, v_p_3218_, v_a_3219_, v_a_3220_, v_a_3221_, v_a_3222_);
return v___x_3225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_formatter___boxed(lean_object* v_p_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_, lean_object* v_a_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_){
_start:
{
lean_object* v_res_3232_; 
v_res_3232_ = l_Lean_Parser_patternIgnore_formatter(v_p_3226_, v_a_3227_, v_a_3228_, v_a_3229_, v_a_3230_);
lean_dec(v_a_3230_);
lean_dec_ref(v_a_3229_);
lean_dec(v_a_3228_);
lean_dec_ref(v_a_3227_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_parenthesizer(lean_object* v_p_3233_, lean_object* v_a_3234_, lean_object* v_a_3235_, lean_object* v_a_3236_, lean_object* v_a_3237_){
_start:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; 
v___x_3239_ = lean_obj_once(&l_Lean_Parser_patternIgnore_formatter___closed__1, &l_Lean_Parser_patternIgnore_formatter___closed__1_once, _init_l_Lean_Parser_patternIgnore_formatter___closed__1);
v___x_3240_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_3239_, v_p_3233_, v_a_3234_, v_a_3235_, v_a_3236_, v_a_3237_);
return v___x_3240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore_parenthesizer___boxed(lean_object* v_p_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_, lean_object* v_a_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l_Lean_Parser_patternIgnore_parenthesizer(v_p_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_);
lean_dec(v_a_3245_);
lean_dec_ref(v_a_3244_);
lean_dec(v_a_3243_);
lean_dec_ref(v_a_3242_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_patternIgnore(lean_object* v_p_3248_){
_start:
{
lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3249_ = lean_obj_once(&l_Lean_Parser_patternIgnore_formatter___closed__1, &l_Lean_Parser_patternIgnore_formatter___closed__1_once, _init_l_Lean_Parser_patternIgnore_formatter___closed__1);
v___x_3250_ = l_Lean_Parser_node(v___x_3249_, v_p_3248_);
return v___x_3250_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0(void){
_start:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3251_ = lean_obj_once(&l_Lean_Parser_patternIgnore_formatter___closed__0, &l_Lean_Parser_patternIgnore_formatter___closed__0_once, _init_l_Lean_Parser_patternIgnore_formatter___closed__0);
v___x_3252_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3253_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3254_ = l_Lean_Name_mkStr3(v___x_3253_, v___x_3252_, v___x_3251_);
return v___x_3254_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__1(void){
_start:
{
lean_object* v___x_3255_; 
v___x_3255_ = lean_mk_string_unchecked("No-op parser combinator that annotates subtrees to be ignored in syntax patterns. ", 82, 82);
return v___x_3255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1(){
_start:
{
lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; 
v___x_3257_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0);
v___x_3258_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__1);
v___x_3259_ = l_Lean_addBuiltinDocString(v___x_3257_, v___x_3258_);
return v___x_3259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___boxed(lean_object* v_a_3260_){
_start:
{
lean_object* v_res_3261_; 
v_res_3261_ = l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1();
return v_res_3261_;
}
}
static lean_object* _init_l_Lean_Parser_ppHardSpace(void){
_start:
{
lean_object* v___x_3262_; 
v___x_3262_ = l_Lean_Parser_skip;
return v___x_3262_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0(void){
_start:
{
lean_object* v___x_3263_; 
v___x_3263_ = lean_mk_string_unchecked("ppHardSpace", 11, 11);
return v___x_3263_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1(void){
_start:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; 
v___x_3264_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0);
v___x_3265_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3266_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3267_ = l_Lean_Name_mkStr3(v___x_3266_, v___x_3265_, v___x_3264_);
return v___x_3267_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__2(void){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = lean_mk_string_unchecked("No-op parser that advises the pretty printer to emit a non-breaking space. ", 75, 75);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1(){
_start:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; 
v___x_3270_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1);
v___x_3271_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__2);
v___x_3272_ = l_Lean_addBuiltinDocString(v___x_3270_, v___x_3271_);
return v___x_3272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___boxed(lean_object* v_a_3273_){
_start:
{
lean_object* v_res_3274_; 
v_res_3274_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1();
return v_res_3274_;
}
}
static lean_object* _init_l_Lean_Parser_ppSpace(void){
_start:
{
lean_object* v___x_3275_; 
v___x_3275_ = l_Lean_Parser_skip;
return v___x_3275_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0(void){
_start:
{
lean_object* v___x_3276_; 
v___x_3276_ = lean_mk_string_unchecked("ppSpace", 7, 7);
return v___x_3276_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1(void){
_start:
{
lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3277_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0);
v___x_3278_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3279_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3280_ = l_Lean_Name_mkStr3(v___x_3279_, v___x_3278_, v___x_3277_);
return v___x_3280_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__2(void){
_start:
{
lean_object* v___x_3281_; 
v___x_3281_ = lean_mk_string_unchecked("No-op parser that advises the pretty printer to emit a space/soft line break. ", 78, 78);
return v___x_3281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1(){
_start:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; 
v___x_3283_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1);
v___x_3284_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__2);
v___x_3285_ = l_Lean_addBuiltinDocString(v___x_3283_, v___x_3284_);
return v___x_3285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___boxed(lean_object* v_a_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1();
return v_res_3287_;
}
}
static lean_object* _init_l_Lean_Parser_ppLine(void){
_start:
{
lean_object* v___x_3288_; 
v___x_3288_ = l_Lean_Parser_skip;
return v___x_3288_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0(void){
_start:
{
lean_object* v___x_3289_; 
v___x_3289_ = lean_mk_string_unchecked("ppLine", 6, 6);
return v___x_3289_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1(void){
_start:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3290_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0);
v___x_3291_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3292_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3293_ = l_Lean_Name_mkStr3(v___x_3292_, v___x_3291_, v___x_3290_);
return v___x_3293_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__2(void){
_start:
{
lean_object* v___x_3294_; 
v___x_3294_ = lean_mk_string_unchecked("No-op parser that advises the pretty printer to emit a hard line break. ", 72, 72);
return v___x_3294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1(){
_start:
{
lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; 
v___x_3296_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1);
v___x_3297_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__2);
v___x_3298_ = l_Lean_addBuiltinDocString(v___x_3296_, v___x_3297_);
return v___x_3298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___boxed(lean_object* v_a_3299_){
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1();
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill(lean_object* v_a_3301_){
_start:
{
lean_inc_ref(v_a_3301_);
return v_a_3301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill___boxed(lean_object* v_a_3302_){
_start:
{
lean_object* v_res_3303_; 
v_res_3303_ = l_Lean_Parser_ppRealFill(v_a_3302_);
lean_dec_ref(v_a_3302_);
return v_res_3303_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0(void){
_start:
{
lean_object* v___x_3304_; 
v___x_3304_ = lean_mk_string_unchecked("ppRealFill", 10, 10);
return v___x_3304_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1(void){
_start:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3305_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0);
v___x_3306_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3307_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3308_ = l_Lean_Name_mkStr3(v___x_3307_, v___x_3306_, v___x_3305_);
return v___x_3308_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__2(void){
_start:
{
lean_object* v___x_3309_; 
v___x_3309_ = lean_mk_string_unchecked("No-op parser combinator that advises the pretty printer to emit a `Format.fill` node. ", 86, 86);
return v___x_3309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1(){
_start:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; 
v___x_3311_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1);
v___x_3312_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__2);
v___x_3313_ = l_Lean_addBuiltinDocString(v___x_3311_, v___x_3312_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___boxed(lean_object* v_a_3314_){
_start:
{
lean_object* v_res_3315_; 
v_res_3315_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1();
return v_res_3315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup(lean_object* v_a_3316_){
_start:
{
lean_inc_ref(v_a_3316_);
return v_a_3316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup___boxed(lean_object* v_a_3317_){
_start:
{
lean_object* v_res_3318_; 
v_res_3318_ = l_Lean_Parser_ppRealGroup(v_a_3317_);
lean_dec_ref(v_a_3317_);
return v_res_3318_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0(void){
_start:
{
lean_object* v___x_3319_; 
v___x_3319_ = lean_mk_string_unchecked("ppRealGroup", 11, 11);
return v___x_3319_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1(void){
_start:
{
lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3320_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0);
v___x_3321_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3322_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3323_ = l_Lean_Name_mkStr3(v___x_3322_, v___x_3321_, v___x_3320_);
return v___x_3323_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__2(void){
_start:
{
lean_object* v___x_3324_; 
v___x_3324_ = lean_mk_string_unchecked("No-op parser combinator that advises the pretty printer to emit a `Format.group` node. ", 87, 87);
return v___x_3324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1(){
_start:
{
lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___x_3326_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1);
v___x_3327_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__2);
v___x_3328_ = l_Lean_addBuiltinDocString(v___x_3326_, v___x_3327_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___boxed(lean_object* v_a_3329_){
_start:
{
lean_object* v_res_3330_; 
v_res_3330_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1();
return v_res_3330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent(lean_object* v_a_3331_){
_start:
{
lean_inc_ref(v_a_3331_);
return v_a_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent___boxed(lean_object* v_a_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_Lean_Parser_ppIndent(v_a_3332_);
lean_dec_ref(v_a_3332_);
return v_res_3333_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0(void){
_start:
{
lean_object* v___x_3334_; 
v___x_3334_ = lean_mk_string_unchecked("ppIndent", 8, 8);
return v___x_3334_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1(void){
_start:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; 
v___x_3335_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0);
v___x_3336_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3337_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3338_ = l_Lean_Name_mkStr3(v___x_3337_, v___x_3336_, v___x_3335_);
return v___x_3338_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__2(void){
_start:
{
lean_object* v___x_3339_; 
v___x_3339_ = lean_mk_string_unchecked("No-op parser combinator that advises the pretty printer to indent the given syntax without grouping it. ", 104, 104);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1(){
_start:
{
lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3341_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1);
v___x_3342_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__2);
v___x_3343_ = l_Lean_addBuiltinDocString(v___x_3341_, v___x_3342_);
return v___x_3343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___boxed(lean_object* v_a_3344_){
_start:
{
lean_object* v_res_3345_; 
v_res_3345_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1();
return v_res_3345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup(lean_object* v_p_3346_){
_start:
{
lean_inc_ref(v_p_3346_);
return v_p_3346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup___boxed(lean_object* v_p_3347_){
_start:
{
lean_object* v_res_3348_; 
v_res_3348_ = l_Lean_Parser_ppGroup(v_p_3347_);
lean_dec_ref(v_p_3347_);
return v_res_3348_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0(void){
_start:
{
lean_object* v___x_3349_; 
v___x_3349_ = lean_mk_string_unchecked("ppGroup", 7, 7);
return v___x_3349_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1(void){
_start:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3350_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0);
v___x_3351_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3352_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3353_ = l_Lean_Name_mkStr3(v___x_3352_, v___x_3351_, v___x_3350_);
return v___x_3353_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__2(void){
_start:
{
lean_object* v___x_3354_; 
v___x_3354_ = lean_mk_string_unchecked("No-op parser combinator that advises the pretty printer to group and indent the given syntax.\nBy default, only syntax categories are grouped. ", 142, 142);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1(){
_start:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; 
v___x_3356_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1);
v___x_3357_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__2);
v___x_3358_ = l_Lean_addBuiltinDocString(v___x_3356_, v___x_3357_);
return v___x_3358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___boxed(lean_object* v_a_3359_){
_start:
{
lean_object* v_res_3360_; 
v_res_3360_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1();
return v_res_3360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent(lean_object* v_a_3361_){
_start:
{
lean_inc_ref(v_a_3361_);
return v_a_3361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent___boxed(lean_object* v_a_3362_){
_start:
{
lean_object* v_res_3363_; 
v_res_3363_ = l_Lean_Parser_ppDedent(v_a_3362_);
lean_dec_ref(v_a_3362_);
return v_res_3363_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0(void){
_start:
{
lean_object* v___x_3364_; 
v___x_3364_ = lean_mk_string_unchecked("ppDedent", 8, 8);
return v___x_3364_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1(void){
_start:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3365_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0);
v___x_3366_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3367_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3368_ = l_Lean_Name_mkStr3(v___x_3367_, v___x_3366_, v___x_3365_);
return v___x_3368_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__2(void){
_start:
{
lean_object* v___x_3369_; 
v___x_3369_ = lean_mk_string_unchecked("No-op parser combinator that advises the pretty printer to dedent the given syntax.\nDedenting can in particular be used to counteract automatic indentation. ", 157, 157);
return v___x_3369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1(){
_start:
{
lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; 
v___x_3371_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1);
v___x_3372_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__2);
v___x_3373_ = l_Lean_addBuiltinDocString(v___x_3371_, v___x_3372_);
return v___x_3373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___boxed(lean_object* v_a_3374_){
_start:
{
lean_object* v_res_3375_; 
v_res_3375_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1();
return v_res_3375_;
}
}
static lean_object* _init_l_Lean_Parser_ppAllowUngrouped(void){
_start:
{
lean_object* v___x_3376_; 
v___x_3376_ = l_Lean_Parser_skip;
return v___x_3376_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0(void){
_start:
{
lean_object* v___x_3377_; 
v___x_3377_ = lean_mk_string_unchecked("ppAllowUngrouped", 16, 16);
return v___x_3377_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1(void){
_start:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3378_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0);
v___x_3379_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3380_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3381_ = l_Lean_Name_mkStr3(v___x_3380_, v___x_3379_, v___x_3378_);
return v___x_3381_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__2(void){
_start:
{
lean_object* v___x_3382_; 
v___x_3382_ = lean_mk_string_unchecked("No-op parser combinator that allows the pretty printer to omit the group and\nindent operation in the enclosing category parser.\n```\nsyntax ppAllowUngrouped \"by \" tacticSeq : term\n-- allows a `by` after `:=` without linebreak in between:\ntheorem foo : True := by\n  trivial\n```\n", 276, 276);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1(){
_start:
{
lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3384_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1);
v___x_3385_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__2);
v___x_3386_ = l_Lean_addBuiltinDocString(v___x_3384_, v___x_3385_);
return v___x_3386_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___boxed(lean_object* v_a_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1();
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped(lean_object* v_a_3389_){
_start:
{
lean_inc_ref(v_a_3389_);
return v_a_3389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped___boxed(lean_object* v_a_3390_){
_start:
{
lean_object* v_res_3391_; 
v_res_3391_ = l_Lean_Parser_ppDedentIfGrouped(v_a_3390_);
lean_dec_ref(v_a_3390_);
return v_res_3391_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0(void){
_start:
{
lean_object* v___x_3392_; 
v___x_3392_ = lean_mk_string_unchecked("ppDedentIfGrouped", 17, 17);
return v___x_3392_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1(void){
_start:
{
lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3393_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0);
v___x_3394_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3395_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3396_ = l_Lean_Name_mkStr3(v___x_3395_, v___x_3394_, v___x_3393_);
return v___x_3396_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__2(void){
_start:
{
lean_object* v___x_3397_; 
v___x_3397_ = lean_mk_string_unchecked("No-op parser combinator that advises the pretty printer to dedent the given syntax,\nif it was grouped by the category parser.\nDedenting can in particular be used to counteract automatic indentation. ", 199, 199);
return v___x_3397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1(){
_start:
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3399_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1);
v___x_3400_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__2);
v___x_3401_ = l_Lean_addBuiltinDocString(v___x_3399_, v___x_3400_);
return v___x_3401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___boxed(lean_object* v_a_3402_){
_start:
{
lean_object* v_res_3403_; 
v_res_3403_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1();
return v_res_3403_;
}
}
static lean_object* _init_l_Lean_Parser_ppHardLineUnlessUngrouped(void){
_start:
{
lean_object* v___x_3404_; 
v___x_3404_ = l_Lean_Parser_skip;
return v___x_3404_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0(void){
_start:
{
lean_object* v___x_3405_; 
v___x_3405_ = lean_mk_string_unchecked("ppHardLineUnlessUngrouped", 25, 25);
return v___x_3405_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1(void){
_start:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3406_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0);
v___x_3407_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3408_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3409_ = l_Lean_Name_mkStr3(v___x_3408_, v___x_3407_, v___x_3406_);
return v___x_3409_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__2(void){
_start:
{
lean_object* v___x_3410_; 
v___x_3410_ = lean_mk_string_unchecked("No-op parser combinator that prints a line break.\nThe line break is soft if the combinator is followed\nby an ungrouped parser (see ppAllowUngrouped), otherwise hard. ", 166, 166);
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1(){
_start:
{
lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3412_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1);
v___x_3413_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__2);
v___x_3414_ = l_Lean_addBuiltinDocString(v___x_3412_, v___x_3413_);
return v___x_3414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___boxed(lean_object* v_a_3415_){
_start:
{
lean_object* v_res_3416_; 
v_res_3416_ = l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1();
return v_res_3416_;
}
}
static lean_object* _init_l_Lean_ppHardSpace_formatter___redArg___closed__0(void){
_start:
{
lean_object* v___x_3417_; 
v___x_3417_ = lean_mk_string_unchecked(" ", 1, 1);
return v___x_3417_;
}
}
static lean_object* _init_l_Lean_ppHardSpace_formatter___redArg___closed__1(void){
_start:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3418_ = lean_obj_once(&l_Lean_ppHardSpace_formatter___redArg___closed__0, &l_Lean_ppHardSpace_formatter___redArg___closed__0_once, _init_l_Lean_ppHardSpace_formatter___redArg___closed__0);
v___x_3419_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3419_, 0, v___x_3418_);
return v___x_3419_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter___redArg(lean_object* v_a_3420_, lean_object* v_a_3421_){
_start:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3423_ = lean_obj_once(&l_Lean_ppHardSpace_formatter___redArg___closed__1, &l_Lean_ppHardSpace_formatter___redArg___closed__1_once, _init_l_Lean_ppHardSpace_formatter___redArg___closed__1);
v___x_3424_ = l_Lean_PrettyPrinter_Formatter_pushWhitespace___redArg(v___x_3423_, v_a_3420_, v_a_3421_);
return v___x_3424_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter___redArg___boxed(lean_object* v_a_3425_, lean_object* v_a_3426_, lean_object* v_a_3427_){
_start:
{
lean_object* v_res_3428_; 
v_res_3428_ = l_Lean_ppHardSpace_formatter___redArg(v_a_3425_, v_a_3426_);
lean_dec(v_a_3426_);
lean_dec(v_a_3425_);
return v_res_3428_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter(lean_object* v_a_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_){
_start:
{
lean_object* v___x_3434_; 
v___x_3434_ = l_Lean_ppHardSpace_formatter___redArg(v_a_3430_, v_a_3432_);
return v___x_3434_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardSpace_formatter___boxed(lean_object* v_a_3435_, lean_object* v_a_3436_, lean_object* v_a_3437_, lean_object* v_a_3438_, lean_object* v_a_3439_){
_start:
{
lean_object* v_res_3440_; 
v_res_3440_ = l_Lean_ppHardSpace_formatter(v_a_3435_, v_a_3436_, v_a_3437_, v_a_3438_);
lean_dec(v_a_3438_);
lean_dec_ref(v_a_3437_);
lean_dec(v_a_3436_);
lean_dec_ref(v_a_3435_);
return v_res_3440_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter___redArg(lean_object* v_a_3441_, lean_object* v_a_3442_){
_start:
{
lean_object* v___x_3444_; 
v___x_3444_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v_a_3441_, v_a_3442_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter___redArg___boxed(lean_object* v_a_3445_, lean_object* v_a_3446_, lean_object* v_a_3447_){
_start:
{
lean_object* v_res_3448_; 
v_res_3448_ = l_Lean_ppSpace_formatter___redArg(v_a_3445_, v_a_3446_);
lean_dec(v_a_3446_);
lean_dec(v_a_3445_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter(lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_, lean_object* v_a_3452_){
_start:
{
lean_object* v___x_3454_; 
v___x_3454_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v_a_3450_, v_a_3452_);
return v___x_3454_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppSpace_formatter___boxed(lean_object* v_a_3455_, lean_object* v_a_3456_, lean_object* v_a_3457_, lean_object* v_a_3458_, lean_object* v_a_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l_Lean_ppSpace_formatter(v_a_3455_, v_a_3456_, v_a_3457_, v_a_3458_);
lean_dec(v_a_3458_);
lean_dec_ref(v_a_3457_);
lean_dec(v_a_3456_);
lean_dec_ref(v_a_3455_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter___redArg(lean_object* v_a_3461_, lean_object* v_a_3462_){
_start:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; 
v___x_3464_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Parser_sepByIndent_formatter_spec__3___redArg___closed__1);
v___x_3465_ = l_Lean_PrettyPrinter_Formatter_pushWhitespace___redArg(v___x_3464_, v_a_3461_, v_a_3462_);
return v___x_3465_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter___redArg___boxed(lean_object* v_a_3466_, lean_object* v_a_3467_, lean_object* v_a_3468_){
_start:
{
lean_object* v_res_3469_; 
v_res_3469_ = l_Lean_ppLine_formatter___redArg(v_a_3466_, v_a_3467_);
lean_dec(v_a_3467_);
lean_dec(v_a_3466_);
return v_res_3469_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter(lean_object* v_a_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_, lean_object* v_a_3473_){
_start:
{
lean_object* v___x_3475_; 
v___x_3475_ = l_Lean_ppLine_formatter___redArg(v_a_3471_, v_a_3473_);
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppLine_formatter___boxed(lean_object* v_a_3476_, lean_object* v_a_3477_, lean_object* v_a_3478_, lean_object* v_a_3479_, lean_object* v_a_3480_){
_start:
{
lean_object* v_res_3481_; 
v_res_3481_ = l_Lean_ppLine_formatter(v_a_3476_, v_a_3477_, v_a_3478_, v_a_3479_);
lean_dec(v_a_3479_);
lean_dec_ref(v_a_3478_);
lean_dec(v_a_3477_);
lean_dec_ref(v_a_3476_);
return v_res_3481_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppRealFill_formatter(lean_object* v_p_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_){
_start:
{
lean_object* v___x_3488_; 
v___x_3488_ = l_Lean_PrettyPrinter_Formatter_fill(v_p_3482_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_);
return v___x_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppRealFill_formatter___boxed(lean_object* v_p_3489_, lean_object* v_a_3490_, lean_object* v_a_3491_, lean_object* v_a_3492_, lean_object* v_a_3493_, lean_object* v_a_3494_){
_start:
{
lean_object* v_res_3495_; 
v_res_3495_ = l_Lean_ppRealFill_formatter(v_p_3489_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
lean_dec(v_a_3493_);
lean_dec_ref(v_a_3492_);
lean_dec(v_a_3491_);
lean_dec_ref(v_a_3490_);
return v_res_3495_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppRealGroup_formatter(lean_object* v_p_3496_, lean_object* v_a_3497_, lean_object* v_a_3498_, lean_object* v_a_3499_, lean_object* v_a_3500_){
_start:
{
lean_object* v___x_3502_; 
v___x_3502_ = l_Lean_PrettyPrinter_Formatter_group(v_p_3496_, v_a_3497_, v_a_3498_, v_a_3499_, v_a_3500_);
return v___x_3502_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppRealGroup_formatter___boxed(lean_object* v_p_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_, lean_object* v_a_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_){
_start:
{
lean_object* v_res_3509_; 
v_res_3509_ = l_Lean_ppRealGroup_formatter(v_p_3503_, v_a_3504_, v_a_3505_, v_a_3506_, v_a_3507_);
lean_dec(v_a_3507_);
lean_dec_ref(v_a_3506_);
lean_dec(v_a_3505_);
lean_dec_ref(v_a_3504_);
return v_res_3509_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppIndent_formatter(lean_object* v_p_3510_, lean_object* v_a_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_, lean_object* v_a_3514_){
_start:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; 
v___x_3516_ = lean_box(0);
v___x_3517_ = l_Lean_PrettyPrinter_Formatter_indent(v_p_3510_, v___x_3516_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_);
return v___x_3517_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppIndent_formatter___boxed(lean_object* v_p_3518_, lean_object* v_a_3519_, lean_object* v_a_3520_, lean_object* v_a_3521_, lean_object* v_a_3522_, lean_object* v_a_3523_){
_start:
{
lean_object* v_res_3524_; 
v_res_3524_ = l_Lean_ppIndent_formatter(v_p_3518_, v_a_3519_, v_a_3520_, v_a_3521_, v_a_3522_);
lean_dec(v_a_3522_);
lean_dec_ref(v_a_3521_);
lean_dec(v_a_3520_);
lean_dec_ref(v_a_3519_);
return v_res_3524_;
}
}
static lean_object* _init_l_Lean_ppDedent_formatter___closed__0(void){
_start:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3525_ = lean_unsigned_to_nat(0u);
v___x_3526_ = lean_nat_to_int(v___x_3525_);
return v___x_3526_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppDedent_formatter(lean_object* v_p_3527_, lean_object* v_a_3528_, lean_object* v_a_3529_, lean_object* v_a_3530_, lean_object* v_a_3531_){
_start:
{
lean_object* v_options_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; 
v_options_3533_ = lean_ctor_get(v_a_3530_, 2);
v___x_3534_ = lean_obj_once(&l_Lean_ppDedent_formatter___closed__0, &l_Lean_ppDedent_formatter___closed__0_once, _init_l_Lean_ppDedent_formatter___closed__0);
v___x_3535_ = l_Std_Format_getIndent(v_options_3533_);
v___x_3536_ = lean_nat_to_int(v___x_3535_);
v___x_3537_ = lean_int_sub(v___x_3534_, v___x_3536_);
lean_dec(v___x_3536_);
v___x_3538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3538_, 0, v___x_3537_);
v___x_3539_ = l_Lean_PrettyPrinter_Formatter_indent(v_p_3527_, v___x_3538_, v_a_3528_, v_a_3529_, v_a_3530_, v_a_3531_);
return v___x_3539_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppDedent_formatter___boxed(lean_object* v_p_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_){
_start:
{
lean_object* v_res_3546_; 
v_res_3546_ = l_Lean_ppDedent_formatter(v_p_3540_, v_a_3541_, v_a_3542_, v_a_3543_, v_a_3544_);
lean_dec(v_a_3544_);
lean_dec_ref(v_a_3543_);
lean_dec(v_a_3542_);
lean_dec_ref(v_a_3541_);
return v_res_3546_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter___redArg(lean_object* v_a_3547_, lean_object* v_a_3548_){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v_stxTrav_3552_; lean_object* v_leadWord_3553_; uint8_t v_leadWordIdent_3554_; uint8_t v_isUngrouped_3555_; lean_object* v_stack_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3567_; 
v___x_3550_ = lean_st_ref_get(v_a_3548_);
lean_dec(v___x_3550_);
v___x_3551_ = lean_st_ref_take(v_a_3547_);
v_stxTrav_3552_ = lean_ctor_get(v___x_3551_, 0);
v_leadWord_3553_ = lean_ctor_get(v___x_3551_, 1);
v_leadWordIdent_3554_ = lean_ctor_get_uint8(v___x_3551_, sizeof(void*)*3);
v_isUngrouped_3555_ = lean_ctor_get_uint8(v___x_3551_, sizeof(void*)*3 + 1);
v_stack_3556_ = lean_ctor_get(v___x_3551_, 2);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3551_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3558_ = v___x_3551_;
v_isShared_3559_ = v_isSharedCheck_3567_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_stack_3556_);
lean_inc(v_leadWord_3553_);
lean_inc(v_stxTrav_3552_);
lean_dec(v___x_3551_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3567_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
uint8_t v___x_3560_; lean_object* v___x_3562_; 
v___x_3560_ = 0;
if (v_isShared_3559_ == 0)
{
v___x_3562_ = v___x_3558_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_stxTrav_3552_);
lean_ctor_set(v_reuseFailAlloc_3566_, 1, v_leadWord_3553_);
lean_ctor_set(v_reuseFailAlloc_3566_, 2, v_stack_3556_);
lean_ctor_set_uint8(v_reuseFailAlloc_3566_, sizeof(void*)*3, v_leadWordIdent_3554_);
lean_ctor_set_uint8(v_reuseFailAlloc_3566_, sizeof(void*)*3 + 1, v_isUngrouped_3555_);
v___x_3562_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; 
lean_ctor_set_uint8(v___x_3562_, sizeof(void*)*3 + 2, v___x_3560_);
v___x_3563_ = lean_st_ref_set(v_a_3547_, v___x_3562_);
v___x_3564_ = lean_box(0);
v___x_3565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3564_);
return v___x_3565_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter___redArg___boxed(lean_object* v_a_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_){
_start:
{
lean_object* v_res_3571_; 
v_res_3571_ = l_Lean_ppAllowUngrouped_formatter___redArg(v_a_3568_, v_a_3569_);
lean_dec(v_a_3569_);
lean_dec(v_a_3568_);
return v_res_3571_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter(lean_object* v_a_3572_, lean_object* v_a_3573_, lean_object* v_a_3574_, lean_object* v_a_3575_){
_start:
{
lean_object* v___x_3577_; 
v___x_3577_ = l_Lean_ppAllowUngrouped_formatter___redArg(v_a_3573_, v_a_3575_);
return v___x_3577_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppAllowUngrouped_formatter___boxed(lean_object* v_a_3578_, lean_object* v_a_3579_, lean_object* v_a_3580_, lean_object* v_a_3581_, lean_object* v_a_3582_){
_start:
{
lean_object* v_res_3583_; 
v_res_3583_ = l_Lean_ppAllowUngrouped_formatter(v_a_3578_, v_a_3579_, v_a_3580_, v_a_3581_);
lean_dec(v_a_3581_);
lean_dec_ref(v_a_3580_);
lean_dec(v_a_3579_);
lean_dec_ref(v_a_3578_);
return v_res_3583_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppDedentIfGrouped_formatter(lean_object* v_p_3584_, lean_object* v_a_3585_, lean_object* v_a_3586_, lean_object* v_a_3587_, lean_object* v_a_3588_){
_start:
{
lean_object* v___x_3590_; 
v___x_3590_ = l_Lean_PrettyPrinter_Formatter_concat(v_p_3584_, v_a_3585_, v_a_3586_, v_a_3587_, v_a_3588_);
if (lean_obj_tag(v___x_3590_) == 0)
{
lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3640_; 
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3590_);
if (v_isSharedCheck_3640_ == 0)
{
lean_object* v_unused_3641_; 
v_unused_3641_ = lean_ctor_get(v___x_3590_, 0);
lean_dec(v_unused_3641_);
v___x_3592_ = v___x_3590_;
v_isShared_3593_ = v_isSharedCheck_3640_;
goto v_resetjp_3591_;
}
else
{
lean_dec(v___x_3590_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3640_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v___x_3594_; lean_object* v___x_3595_; uint8_t v_isUngrouped_3596_; 
v___x_3594_ = lean_st_ref_get(v_a_3588_);
lean_dec(v___x_3594_);
v___x_3595_ = lean_st_ref_get(v_a_3586_);
v_isUngrouped_3596_ = lean_ctor_get_uint8(v___x_3595_, sizeof(void*)*3 + 1);
lean_dec(v___x_3595_);
if (v_isUngrouped_3596_ == 0)
{
lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v_fst_3600_; lean_object* v_snd_3601_; lean_object* v_stxTrav_3606_; lean_object* v_leadWord_3607_; uint8_t v_leadWordIdent_3608_; uint8_t v_isUngrouped_3609_; uint8_t v_mustBeGrouped_3610_; lean_object* v_stack_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; uint8_t v___x_3616_; 
v___x_3597_ = lean_st_ref_get(v_a_3588_);
lean_dec(v___x_3597_);
v___x_3598_ = lean_st_ref_take(v_a_3586_);
v_stxTrav_3606_ = lean_ctor_get(v___x_3598_, 0);
lean_inc_ref(v_stxTrav_3606_);
v_leadWord_3607_ = lean_ctor_get(v___x_3598_, 1);
lean_inc_ref(v_leadWord_3607_);
v_leadWordIdent_3608_ = lean_ctor_get_uint8(v___x_3598_, sizeof(void*)*3);
v_isUngrouped_3609_ = lean_ctor_get_uint8(v___x_3598_, sizeof(void*)*3 + 1);
v_mustBeGrouped_3610_ = lean_ctor_get_uint8(v___x_3598_, sizeof(void*)*3 + 2);
v_stack_3611_ = lean_ctor_get(v___x_3598_, 2);
lean_inc_ref(v_stack_3611_);
v___x_3612_ = lean_box(0);
v___x_3613_ = lean_array_get_size(v_stack_3611_);
v___x_3614_ = lean_unsigned_to_nat(1u);
v___x_3615_ = lean_nat_sub(v___x_3613_, v___x_3614_);
v___x_3616_ = lean_nat_dec_lt(v___x_3615_, v___x_3613_);
if (v___x_3616_ == 0)
{
lean_dec(v___x_3615_);
lean_dec_ref(v_stack_3611_);
lean_dec_ref(v_leadWord_3607_);
lean_dec_ref(v_stxTrav_3606_);
v_fst_3600_ = v___x_3612_;
v_snd_3601_ = v___x_3598_;
goto v___jp_3599_;
}
else
{
lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3632_; 
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3598_);
if (v_isSharedCheck_3632_ == 0)
{
lean_object* v_unused_3633_; lean_object* v_unused_3634_; lean_object* v_unused_3635_; 
v_unused_3633_ = lean_ctor_get(v___x_3598_, 2);
lean_dec(v_unused_3633_);
v_unused_3634_ = lean_ctor_get(v___x_3598_, 1);
lean_dec(v_unused_3634_);
v_unused_3635_ = lean_ctor_get(v___x_3598_, 0);
lean_dec(v_unused_3635_);
v___x_3618_ = v___x_3598_;
v_isShared_3619_ = v_isSharedCheck_3632_;
goto v_resetjp_3617_;
}
else
{
lean_dec(v___x_3598_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3632_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v_options_3620_; lean_object* v___x_3621_; lean_object* v_v_3622_; lean_object* v_xs_x27_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3630_; 
v_options_3620_ = lean_ctor_get(v_a_3587_, 2);
v___x_3621_ = l_Std_Format_getIndent(v_options_3620_);
v_v_3622_ = lean_array_fget(v_stack_3611_, v___x_3615_);
v_xs_x27_3623_ = lean_array_fset(v_stack_3611_, v___x_3615_, v___x_3612_);
v___x_3624_ = lean_obj_once(&l_Lean_ppDedent_formatter___closed__0, &l_Lean_ppDedent_formatter___closed__0_once, _init_l_Lean_ppDedent_formatter___closed__0);
v___x_3625_ = lean_nat_to_int(v___x_3621_);
v___x_3626_ = lean_int_sub(v___x_3624_, v___x_3625_);
lean_dec(v___x_3625_);
v___x_3627_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3627_, 0, v___x_3626_);
lean_ctor_set(v___x_3627_, 1, v_v_3622_);
v___x_3628_ = lean_array_fset(v_xs_x27_3623_, v___x_3615_, v___x_3627_);
lean_dec(v___x_3615_);
if (v_isShared_3619_ == 0)
{
lean_ctor_set(v___x_3618_, 2, v___x_3628_);
v___x_3630_ = v___x_3618_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v_stxTrav_3606_);
lean_ctor_set(v_reuseFailAlloc_3631_, 1, v_leadWord_3607_);
lean_ctor_set(v_reuseFailAlloc_3631_, 2, v___x_3628_);
lean_ctor_set_uint8(v_reuseFailAlloc_3631_, sizeof(void*)*3, v_leadWordIdent_3608_);
lean_ctor_set_uint8(v_reuseFailAlloc_3631_, sizeof(void*)*3 + 1, v_isUngrouped_3609_);
lean_ctor_set_uint8(v_reuseFailAlloc_3631_, sizeof(void*)*3 + 2, v_mustBeGrouped_3610_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
v_fst_3600_ = v___x_3612_;
v_snd_3601_ = v___x_3630_;
goto v___jp_3599_;
}
}
}
v___jp_3599_:
{
lean_object* v___x_3602_; lean_object* v___x_3604_; 
v___x_3602_ = lean_st_ref_set(v_a_3586_, v_snd_3601_);
if (v_isShared_3593_ == 0)
{
lean_ctor_set(v___x_3592_, 0, v_fst_3600_);
v___x_3604_ = v___x_3592_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_fst_3600_);
v___x_3604_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
return v___x_3604_;
}
}
}
else
{
lean_object* v___x_3636_; lean_object* v___x_3638_; 
v___x_3636_ = lean_box(0);
if (v_isShared_3593_ == 0)
{
lean_ctor_set(v___x_3592_, 0, v___x_3636_);
v___x_3638_ = v___x_3592_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v___x_3636_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
}
else
{
return v___x_3590_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ppDedentIfGrouped_formatter___boxed(lean_object* v_p_3642_, lean_object* v_a_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_, lean_object* v_a_3646_, lean_object* v_a_3647_){
_start:
{
lean_object* v_res_3648_; 
v_res_3648_ = l_Lean_ppDedentIfGrouped_formatter(v_p_3642_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
lean_dec(v_a_3646_);
lean_dec_ref(v_a_3645_);
lean_dec(v_a_3644_);
lean_dec_ref(v_a_3643_);
return v_res_3648_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter___redArg(lean_object* v_a_3649_, lean_object* v_a_3650_){
_start:
{
lean_object* v___x_3652_; lean_object* v___x_3653_; uint8_t v_isUngrouped_3654_; 
v___x_3652_ = lean_st_ref_get(v_a_3650_);
lean_dec(v___x_3652_);
v___x_3653_ = lean_st_ref_get(v_a_3649_);
v_isUngrouped_3654_ = lean_ctor_get_uint8(v___x_3653_, sizeof(void*)*3 + 1);
lean_dec(v___x_3653_);
if (v_isUngrouped_3654_ == 0)
{
lean_object* v___x_3655_; 
v___x_3655_ = l_Lean_ppLine_formatter___redArg(v_a_3649_, v_a_3650_);
return v___x_3655_;
}
else
{
lean_object* v___x_3656_; 
v___x_3656_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v_a_3649_, v_a_3650_);
return v___x_3656_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter___redArg___boxed(lean_object* v_a_3657_, lean_object* v_a_3658_, lean_object* v_a_3659_){
_start:
{
lean_object* v_res_3660_; 
v_res_3660_ = l_Lean_ppHardLineUnlessUngrouped_formatter___redArg(v_a_3657_, v_a_3658_);
lean_dec(v_a_3658_);
lean_dec(v_a_3657_);
return v_res_3660_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter(lean_object* v_a_3661_, lean_object* v_a_3662_, lean_object* v_a_3663_, lean_object* v_a_3664_){
_start:
{
lean_object* v___x_3666_; 
v___x_3666_ = l_Lean_ppHardLineUnlessUngrouped_formatter___redArg(v_a_3662_, v_a_3664_);
return v___x_3666_;
}
}
LEAN_EXPORT lean_object* l_Lean_ppHardLineUnlessUngrouped_formatter___boxed(lean_object* v_a_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_){
_start:
{
lean_object* v_res_3672_; 
v_res_3672_ = l_Lean_ppHardLineUnlessUngrouped_formatter(v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_);
lean_dec(v_a_3670_);
lean_dec_ref(v_a_3669_);
lean_dec(v_a_3668_);
lean_dec_ref(v_a_3667_);
return v_res_3672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___redArg(){
_start:
{
lean_object* v___x_3674_; 
v___x_3674_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___redArg___boxed(lean_object* v_a_3675_){
_start:
{
lean_object* v_res_3676_; 
v_res_3676_ = l_Lean_Parser_ppHardSpace_parenthesizer___redArg();
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer(lean_object* v_a_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_, lean_object* v_a_3680_){
_start:
{
lean_object* v___x_3682_; 
v___x_3682_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___boxed(lean_object* v_a_3683_, lean_object* v_a_3684_, lean_object* v_a_3685_, lean_object* v_a_3686_, lean_object* v_a_3687_){
_start:
{
lean_object* v_res_3688_; 
v_res_3688_ = l_Lean_Parser_ppHardSpace_parenthesizer(v_a_3683_, v_a_3684_, v_a_3685_, v_a_3686_);
lean_dec(v_a_3686_);
lean_dec_ref(v_a_3685_);
lean_dec(v_a_3684_);
lean_dec_ref(v_a_3683_);
return v_res_3688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer___redArg(){
_start:
{
lean_object* v___x_3690_; 
v___x_3690_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3690_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer___redArg___boxed(lean_object* v_a_3691_){
_start:
{
lean_object* v_res_3692_; 
v_res_3692_ = l_Lean_Parser_ppSpace_parenthesizer___redArg();
return v_res_3692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer(lean_object* v_a_3693_, lean_object* v_a_3694_, lean_object* v_a_3695_, lean_object* v_a_3696_){
_start:
{
lean_object* v___x_3698_; 
v___x_3698_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object* v_a_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_){
_start:
{
lean_object* v_res_3704_; 
v_res_3704_ = l_Lean_Parser_ppSpace_parenthesizer(v_a_3699_, v_a_3700_, v_a_3701_, v_a_3702_);
lean_dec(v_a_3702_);
lean_dec_ref(v_a_3701_);
lean_dec(v_a_3700_);
lean_dec_ref(v_a_3699_);
return v_res_3704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer___redArg(){
_start:
{
lean_object* v___x_3706_; 
v___x_3706_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer___redArg___boxed(lean_object* v_a_3707_){
_start:
{
lean_object* v_res_3708_; 
v_res_3708_ = l_Lean_Parser_ppLine_parenthesizer___redArg();
return v_res_3708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer(lean_object* v_a_3709_, lean_object* v_a_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_){
_start:
{
lean_object* v___x_3714_; 
v___x_3714_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppLine_parenthesizer___boxed(lean_object* v_a_3715_, lean_object* v_a_3716_, lean_object* v_a_3717_, lean_object* v_a_3718_, lean_object* v_a_3719_){
_start:
{
lean_object* v_res_3720_; 
v_res_3720_ = l_Lean_Parser_ppLine_parenthesizer(v_a_3715_, v_a_3716_, v_a_3717_, v_a_3718_);
lean_dec(v_a_3718_);
lean_dec_ref(v_a_3717_);
lean_dec(v_a_3716_);
lean_dec_ref(v_a_3715_);
return v_res_3720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_formatter(lean_object* v_p_3721_, lean_object* v_a_3722_, lean_object* v_a_3723_, lean_object* v_a_3724_, lean_object* v_a_3725_){
_start:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; 
v___x_3727_ = lean_alloc_closure((void*)(l_Lean_ppIndent_formatter___boxed), 6, 1);
lean_closure_set(v___x_3727_, 0, v_p_3721_);
v___x_3728_ = l_Lean_PrettyPrinter_Formatter_fill(v___x_3727_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_);
return v___x_3728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_formatter___boxed(lean_object* v_p_3729_, lean_object* v_a_3730_, lean_object* v_a_3731_, lean_object* v_a_3732_, lean_object* v_a_3733_, lean_object* v_a_3734_){
_start:
{
lean_object* v_res_3735_; 
v_res_3735_ = l_Lean_Parser_ppGroup_formatter(v_p_3729_, v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
lean_dec(v_a_3733_);
lean_dec_ref(v_a_3732_);
lean_dec(v_a_3731_);
lean_dec_ref(v_a_3730_);
return v_res_3735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill_parenthesizer(lean_object* v_a_3736_, lean_object* v_a_3737_, lean_object* v_a_3738_, lean_object* v_a_3739_, lean_object* v_a_3740_){
_start:
{
lean_object* v___x_3742_; 
lean_inc(v_a_3740_);
lean_inc_ref(v_a_3739_);
lean_inc(v_a_3738_);
lean_inc_ref(v_a_3737_);
v___x_3742_ = lean_apply_5(v_a_3736_, v_a_3737_, v_a_3738_, v_a_3739_, v_a_3740_, lean_box(0));
return v___x_3742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealFill_parenthesizer___boxed(lean_object* v_a_3743_, lean_object* v_a_3744_, lean_object* v_a_3745_, lean_object* v_a_3746_, lean_object* v_a_3747_, lean_object* v_a_3748_){
_start:
{
lean_object* v_res_3749_; 
v_res_3749_ = l_Lean_Parser_ppRealFill_parenthesizer(v_a_3743_, v_a_3744_, v_a_3745_, v_a_3746_, v_a_3747_);
lean_dec(v_a_3747_);
lean_dec_ref(v_a_3746_);
lean_dec(v_a_3745_);
lean_dec_ref(v_a_3744_);
return v_res_3749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent_parenthesizer(lean_object* v_a_3750_, lean_object* v_a_3751_, lean_object* v_a_3752_, lean_object* v_a_3753_, lean_object* v_a_3754_){
_start:
{
lean_object* v___x_3756_; 
lean_inc(v_a_3754_);
lean_inc_ref(v_a_3753_);
lean_inc(v_a_3752_);
lean_inc_ref(v_a_3751_);
v___x_3756_ = lean_apply_5(v_a_3750_, v_a_3751_, v_a_3752_, v_a_3753_, v_a_3754_, lean_box(0));
return v___x_3756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppIndent_parenthesizer___boxed(lean_object* v_a_3757_, lean_object* v_a_3758_, lean_object* v_a_3759_, lean_object* v_a_3760_, lean_object* v_a_3761_, lean_object* v_a_3762_){
_start:
{
lean_object* v_res_3763_; 
v_res_3763_ = l_Lean_Parser_ppIndent_parenthesizer(v_a_3757_, v_a_3758_, v_a_3759_, v_a_3760_, v_a_3761_);
lean_dec(v_a_3761_);
lean_dec_ref(v_a_3760_);
lean_dec(v_a_3759_);
lean_dec_ref(v_a_3758_);
return v_res_3763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_parenthesizer(lean_object* v_p_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_, lean_object* v_a_3767_, lean_object* v_a_3768_){
_start:
{
lean_object* v___x_3770_; 
lean_inc(v_a_3768_);
lean_inc_ref(v_a_3767_);
lean_inc(v_a_3766_);
lean_inc_ref(v_a_3765_);
v___x_3770_ = lean_apply_5(v_p_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, lean_box(0));
return v___x_3770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppGroup_parenthesizer___boxed(lean_object* v_p_3771_, lean_object* v_a_3772_, lean_object* v_a_3773_, lean_object* v_a_3774_, lean_object* v_a_3775_, lean_object* v_a_3776_){
_start:
{
lean_object* v_res_3777_; 
v_res_3777_ = l_Lean_Parser_ppGroup_parenthesizer(v_p_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_);
lean_dec(v_a_3775_);
lean_dec_ref(v_a_3774_);
lean_dec(v_a_3773_);
lean_dec_ref(v_a_3772_);
return v_res_3777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup_parenthesizer(lean_object* v_a_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_, lean_object* v_a_3782_){
_start:
{
lean_object* v___x_3784_; 
lean_inc(v_a_3782_);
lean_inc_ref(v_a_3781_);
lean_inc(v_a_3780_);
lean_inc_ref(v_a_3779_);
v___x_3784_ = lean_apply_5(v_a_3778_, v_a_3779_, v_a_3780_, v_a_3781_, v_a_3782_, lean_box(0));
return v___x_3784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppRealGroup_parenthesizer___boxed(lean_object* v_a_3785_, lean_object* v_a_3786_, lean_object* v_a_3787_, lean_object* v_a_3788_, lean_object* v_a_3789_, lean_object* v_a_3790_){
_start:
{
lean_object* v_res_3791_; 
v_res_3791_ = l_Lean_Parser_ppRealGroup_parenthesizer(v_a_3785_, v_a_3786_, v_a_3787_, v_a_3788_, v_a_3789_);
lean_dec(v_a_3789_);
lean_dec_ref(v_a_3788_);
lean_dec(v_a_3787_);
lean_dec_ref(v_a_3786_);
return v_res_3791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent_parenthesizer(lean_object* v_a_3792_, lean_object* v_a_3793_, lean_object* v_a_3794_, lean_object* v_a_3795_, lean_object* v_a_3796_){
_start:
{
lean_object* v___x_3798_; 
lean_inc(v_a_3796_);
lean_inc_ref(v_a_3795_);
lean_inc(v_a_3794_);
lean_inc_ref(v_a_3793_);
v___x_3798_ = lean_apply_5(v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_, v_a_3796_, lean_box(0));
return v___x_3798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedent_parenthesizer___boxed(lean_object* v_a_3799_, lean_object* v_a_3800_, lean_object* v_a_3801_, lean_object* v_a_3802_, lean_object* v_a_3803_, lean_object* v_a_3804_){
_start:
{
lean_object* v_res_3805_; 
v_res_3805_ = l_Lean_Parser_ppDedent_parenthesizer(v_a_3799_, v_a_3800_, v_a_3801_, v_a_3802_, v_a_3803_);
lean_dec(v_a_3803_);
lean_dec_ref(v_a_3802_);
lean_dec(v_a_3801_);
lean_dec_ref(v_a_3800_);
return v_res_3805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer___redArg(){
_start:
{
lean_object* v___x_3807_; 
v___x_3807_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer___redArg___boxed(lean_object* v_a_3808_){
_start:
{
lean_object* v_res_3809_; 
v_res_3809_ = l_Lean_Parser_ppAllowUngrouped_parenthesizer___redArg();
return v_res_3809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer(lean_object* v_a_3810_, lean_object* v_a_3811_, lean_object* v_a_3812_, lean_object* v_a_3813_){
_start:
{
lean_object* v___x_3815_; 
v___x_3815_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppAllowUngrouped_parenthesizer___boxed(lean_object* v_a_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_){
_start:
{
lean_object* v_res_3821_; 
v_res_3821_ = l_Lean_Parser_ppAllowUngrouped_parenthesizer(v_a_3816_, v_a_3817_, v_a_3818_, v_a_3819_);
lean_dec(v_a_3819_);
lean_dec_ref(v_a_3818_);
lean_dec(v_a_3817_);
lean_dec_ref(v_a_3816_);
return v_res_3821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped_parenthesizer(lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_, lean_object* v_a_3826_){
_start:
{
lean_object* v___x_3828_; 
lean_inc(v_a_3826_);
lean_inc_ref(v_a_3825_);
lean_inc(v_a_3824_);
lean_inc_ref(v_a_3823_);
v___x_3828_ = lean_apply_5(v_a_3822_, v_a_3823_, v_a_3824_, v_a_3825_, v_a_3826_, lean_box(0));
return v___x_3828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppDedentIfGrouped_parenthesizer___boxed(lean_object* v_a_3829_, lean_object* v_a_3830_, lean_object* v_a_3831_, lean_object* v_a_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_){
_start:
{
lean_object* v_res_3835_; 
v_res_3835_ = l_Lean_Parser_ppDedentIfGrouped_parenthesizer(v_a_3829_, v_a_3830_, v_a_3831_, v_a_3832_, v_a_3833_);
lean_dec(v_a_3833_);
lean_dec_ref(v_a_3832_);
lean_dec(v_a_3831_);
lean_dec_ref(v_a_3830_);
return v_res_3835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___redArg(){
_start:
{
lean_object* v___x_3837_; 
v___x_3837_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___redArg___boxed(lean_object* v_a_3838_){
_start:
{
lean_object* v_res_3839_; 
v_res_3839_ = l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___redArg();
return v_res_3839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer(lean_object* v_a_3840_, lean_object* v_a_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_){
_start:
{
lean_object* v___x_3845_; 
v___x_3845_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_3845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer___boxed(lean_object* v_a_3846_, lean_object* v_a_3847_, lean_object* v_a_3848_, lean_object* v_a_3849_, lean_object* v_a_3850_){
_start:
{
lean_object* v_res_3851_; 
v_res_3851_ = l_Lean_Parser_ppHardLineUnlessUngrouped_parenthesizer(v_a_3846_, v_a_3847_, v_a_3848_, v_a_3849_);
lean_dec(v_a_3849_);
lean_dec_ref(v_a_3848_);
lean_dec(v_a_3847_);
lean_dec_ref(v_a_3846_);
return v_res_3851_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__0(void){
_start:
{
lean_object* v___x_3852_; 
v___x_3852_ = lean_mk_string_unchecked("termRegister_parser_alias(Kind:=_)______", 40, 40);
return v___x_3852_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1(void){
_start:
{
lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; 
v___x_3853_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__0, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__0_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__0);
v___x_3854_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3855_ = l_Lean_Name_mkStr2(v___x_3854_, v___x_3853_);
return v___x_3855_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__2(void){
_start:
{
lean_object* v___x_3856_; 
v___x_3856_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_3856_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3(void){
_start:
{
lean_object* v___x_3857_; lean_object* v___x_3858_; 
v___x_3857_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__2, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__2_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__2);
v___x_3858_ = l_Lean_Name_mkStr1(v___x_3857_);
return v___x_3858_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__4(void){
_start:
{
lean_object* v___x_3859_; 
v___x_3859_ = lean_mk_string_unchecked("register_parser_alias ", 22, 22);
return v___x_3859_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__5(void){
_start:
{
lean_object* v___x_3860_; lean_object* v___x_3861_; 
v___x_3860_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__4, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__4_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__4);
v___x_3861_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3861_, 0, v___x_3860_);
return v___x_3861_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__6(void){
_start:
{
lean_object* v___x_3862_; lean_object* v___x_3863_; 
v___x_3862_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__3, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__3_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__3);
v___x_3863_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3863_, 0, v___x_3862_);
return v___x_3863_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__7(void){
_start:
{
lean_object* v___x_3864_; 
v___x_3864_ = lean_mk_string_unchecked("kind", 4, 4);
return v___x_3864_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__8(void){
_start:
{
uint8_t v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; 
v___x_3865_ = 0;
v___x_3866_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__7, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__7_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__7);
v___x_3867_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3867_, 0, v___x_3866_);
lean_ctor_set_uint8(v___x_3867_, sizeof(void*)*1, v___x_3865_);
return v___x_3867_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__9(void){
_start:
{
lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; 
v___x_3868_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__8, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__8_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__8);
v___x_3869_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__6, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__6_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__6);
v___x_3870_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3);
v___x_3871_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3871_, 0, v___x_3870_);
lean_ctor_set(v___x_3871_, 1, v___x_3869_);
lean_ctor_set(v___x_3871_, 2, v___x_3868_);
return v___x_3871_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__10(void){
_start:
{
lean_object* v___x_3872_; 
v___x_3872_ = lean_mk_string_unchecked(" := ", 4, 4);
return v___x_3872_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__11(void){
_start:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; 
v___x_3873_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__10, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__10_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__10);
v___x_3874_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3874_, 0, v___x_3873_);
return v___x_3874_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__12(void){
_start:
{
lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; 
v___x_3875_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__11, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__11_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__11);
v___x_3876_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__9, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__9_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__9);
v___x_3877_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3);
v___x_3878_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3877_);
lean_ctor_set(v___x_3878_, 1, v___x_3876_);
lean_ctor_set(v___x_3878_, 2, v___x_3875_);
return v___x_3878_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13(void){
_start:
{
lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; 
v___x_3879_ = lean_unsigned_to_nat(0u);
v___x_3880_ = lean_obj_once(&l_Lean_Parser_termParser_formatter___redArg___closed__1, &l_Lean_Parser_termParser_formatter___redArg___closed__1_once, _init_l_Lean_Parser_termParser_formatter___redArg___closed__1);
v___x_3881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3881_, 0, v___x_3880_);
lean_ctor_set(v___x_3881_, 1, v___x_3879_);
return v___x_3881_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__14(void){
_start:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; 
v___x_3882_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13);
v___x_3883_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__12, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__12_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__12);
v___x_3884_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3);
v___x_3885_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3885_, 0, v___x_3884_);
lean_ctor_set(v___x_3885_, 1, v___x_3883_);
lean_ctor_set(v___x_3885_, 2, v___x_3882_);
return v___x_3885_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__15(void){
_start:
{
lean_object* v___x_3886_; 
v___x_3886_ = lean_mk_string_unchecked(") ", 2, 2);
return v___x_3886_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__16(void){
_start:
{
lean_object* v___x_3887_; lean_object* v___x_3888_; 
v___x_3887_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__15, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__15_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__15);
v___x_3888_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3888_, 0, v___x_3887_);
return v___x_3888_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__17(void){
_start:
{
lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; 
v___x_3889_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__16, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__16_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__16);
v___x_3890_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__14, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__14_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__14);
v___x_3891_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3);
v___x_3892_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3892_, 0, v___x_3891_);
lean_ctor_set(v___x_3892_, 1, v___x_3890_);
lean_ctor_set(v___x_3892_, 2, v___x_3889_);
return v___x_3892_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__18(void){
_start:
{
lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3893_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__17, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__17_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__17);
v___x_3894_ = lean_obj_once(&l_Lean_Parser_group_formatter___closed__1, &l_Lean_Parser_group_formatter___closed__1_once, _init_l_Lean_Parser_group_formatter___closed__1);
v___x_3895_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3895_, 0, v___x_3894_);
lean_ctor_set(v___x_3895_, 1, v___x_3893_);
return v___x_3895_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__19(void){
_start:
{
lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3896_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__18, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__18_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__18);
v___x_3897_ = lean_obj_once(&l_Lean_Parser_optional_formatter___closed__1, &l_Lean_Parser_optional_formatter___closed__1_once, _init_l_Lean_Parser_optional_formatter___closed__1);
v___x_3898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3897_);
lean_ctor_set(v___x_3898_, 1, v___x_3896_);
return v___x_3898_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__20(void){
_start:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; 
v___x_3899_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__19, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__19_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__19);
v___x_3900_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__5, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__5_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__5);
v___x_3901_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3);
v___x_3902_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3902_, 0, v___x_3901_);
lean_ctor_set(v___x_3902_, 1, v___x_3900_);
lean_ctor_set(v___x_3902_, 2, v___x_3899_);
return v___x_3902_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__21(void){
_start:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; 
v___x_3903_ = lean_obj_once(&l_Lean_Parser_strLit_formatter___closed__1, &l_Lean_Parser_strLit_formatter___closed__1_once, _init_l_Lean_Parser_strLit_formatter___closed__1);
v___x_3904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3904_, 0, v___x_3903_);
return v___x_3904_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22(void){
_start:
{
lean_object* v___x_3905_; lean_object* v___x_3906_; 
v___x_3905_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__0);
v___x_3906_ = l_Lean_Name_mkStr1(v___x_3905_);
return v___x_3906_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23(void){
_start:
{
lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3907_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22);
v___x_3908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3908_, 0, v___x_3907_);
return v___x_3908_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__24(void){
_start:
{
lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
v___x_3909_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23);
v___x_3910_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__21, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__21_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__21);
v___x_3911_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3);
v___x_3912_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3911_);
lean_ctor_set(v___x_3912_, 1, v___x_3910_);
lean_ctor_set(v___x_3912_, 2, v___x_3909_);
return v___x_3912_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__25(void){
_start:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3913_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__24, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__24_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__24);
v___x_3914_ = lean_obj_once(&l_Lean_Parser_optional_formatter___closed__1, &l_Lean_Parser_optional_formatter___closed__1_once, _init_l_Lean_Parser_optional_formatter___closed__1);
v___x_3915_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3914_);
lean_ctor_set(v___x_3915_, 1, v___x_3913_);
return v___x_3915_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__26(void){
_start:
{
lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; 
v___x_3916_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__25, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__25_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__25);
v___x_3917_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__20, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__20_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__20);
v___x_3918_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3);
v___x_3919_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3919_, 0, v___x_3918_);
lean_ctor_set(v___x_3919_, 1, v___x_3917_);
lean_ctor_set(v___x_3919_, 2, v___x_3916_);
return v___x_3919_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__27(void){
_start:
{
lean_object* v___x_3920_; lean_object* v___x_3921_; 
v___x_3920_ = lean_obj_once(&l_Lean_Parser_ident_formatter___closed__1, &l_Lean_Parser_ident_formatter___closed__1_once, _init_l_Lean_Parser_ident_formatter___closed__1);
v___x_3921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3921_, 0, v___x_3920_);
return v___x_3921_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__28(void){
_start:
{
lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v___x_3922_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__27, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__27_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__27);
v___x_3923_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__26, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__26_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__26);
v___x_3924_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3);
v___x_3925_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3925_, 0, v___x_3924_);
lean_ctor_set(v___x_3925_, 1, v___x_3923_);
lean_ctor_set(v___x_3925_, 2, v___x_3922_);
return v___x_3925_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__29(void){
_start:
{
lean_object* v___x_3926_; 
v___x_3926_ = lean_mk_string_unchecked("colGt", 5, 5);
return v___x_3926_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__30(void){
_start:
{
lean_object* v___x_3927_; lean_object* v___x_3928_; 
v___x_3927_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__29, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__29_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__29);
v___x_3928_ = l_Lean_Name_mkStr1(v___x_3927_);
return v___x_3928_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__31(void){
_start:
{
lean_object* v___x_3929_; lean_object* v___x_3930_; 
v___x_3929_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__30, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__30_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__30);
v___x_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3929_);
return v___x_3930_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__32(void){
_start:
{
lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; 
v___x_3931_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__31, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__31_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__31);
v___x_3932_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__23);
v___x_3933_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3);
v___x_3934_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3933_);
lean_ctor_set(v___x_3934_, 1, v___x_3932_);
lean_ctor_set(v___x_3934_, 2, v___x_3931_);
return v___x_3934_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__33(void){
_start:
{
lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; 
v___x_3935_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__13);
v___x_3936_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__32, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__32_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__32);
v___x_3937_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3);
v___x_3938_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3937_);
lean_ctor_set(v___x_3938_, 1, v___x_3936_);
lean_ctor_set(v___x_3938_, 2, v___x_3935_);
return v___x_3938_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__34(void){
_start:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3939_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__33, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__33_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__33);
v___x_3940_ = lean_obj_once(&l_Lean_Parser_optional_formatter___closed__1, &l_Lean_Parser_optional_formatter___closed__1_once, _init_l_Lean_Parser_optional_formatter___closed__1);
v___x_3941_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
lean_ctor_set(v___x_3941_, 1, v___x_3939_);
return v___x_3941_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__35(void){
_start:
{
lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; 
v___x_3942_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__34, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__34_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__34);
v___x_3943_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__28, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__28_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__28);
v___x_3944_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__3);
v___x_3945_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3944_);
lean_ctor_set(v___x_3945_, 1, v___x_3943_);
lean_ctor_set(v___x_3945_, 2, v___x_3942_);
return v___x_3945_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__36(void){
_start:
{
lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; 
v___x_3946_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__35, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__35_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__35);
v___x_3947_ = lean_unsigned_to_nat(1022u);
v___x_3948_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1);
v___x_3949_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
lean_ctor_set(v___x_3949_, 1, v___x_3947_);
lean_ctor_set(v___x_3949_, 2, v___x_3946_);
return v___x_3949_;
}
}
static lean_object* _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29____________(void){
_start:
{
lean_object* v___x_3950_; 
v___x_3950_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__36, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__36_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__36);
return v___x_3950_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__0(void){
_start:
{
lean_object* v___x_3951_; 
v___x_3951_ = lean_mk_string_unchecked("expected non-overloaded constant name", 37, 37);
return v___x_3951_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1(void){
_start:
{
lean_object* v___x_3952_; 
v___x_3952_ = l_Array_mkArray0(lean_box(0));
return v___x_3952_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__2(void){
_start:
{
lean_object* v___x_3953_; 
v___x_3953_ = lean_mk_string_unchecked("PrettyPrinter.Formatter.registerAlias", 37, 37);
return v___x_3953_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__3(void){
_start:
{
lean_object* v___x_3954_; lean_object* v___x_3955_; 
v___x_3954_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__2, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__2_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__2);
v___x_3955_ = l_String_toRawSubstring_x27(v___x_3954_);
return v___x_3955_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__4(void){
_start:
{
lean_object* v___x_3956_; 
v___x_3956_ = lean_mk_string_unchecked("PrettyPrinter", 13, 13);
return v___x_3956_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__5(void){
_start:
{
lean_object* v___x_3957_; 
v___x_3957_ = lean_mk_string_unchecked("Formatter", 9, 9);
return v___x_3957_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__6(void){
_start:
{
lean_object* v___x_3958_; lean_object* v___x_3959_; 
v___x_3958_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__2);
v___x_3959_ = l_Lean_Name_mkStr1(v___x_3958_);
return v___x_3959_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__7(void){
_start:
{
lean_object* v___x_3960_; 
v___x_3960_ = lean_mk_string_unchecked("PrettyPrinter.Parenthesizer.registerAlias", 41, 41);
return v___x_3960_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__8(void){
_start:
{
lean_object* v___x_3961_; lean_object* v___x_3962_; 
v___x_3961_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__7, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__7_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__7);
v___x_3962_ = l_String_toRawSubstring_x27(v___x_3961_);
return v___x_3962_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__9(void){
_start:
{
lean_object* v___x_3963_; 
v___x_3963_ = lean_mk_string_unchecked("Parenthesizer", 13, 13);
return v___x_3963_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__10(void){
_start:
{
lean_object* v___x_3964_; lean_object* v___x_3965_; 
v___x_3964_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35___closed__0);
v___x_3965_ = l_Lean_Name_mkStr1(v___x_3964_);
return v___x_3965_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__11(void){
_start:
{
lean_object* v___x_3966_; 
v___x_3966_ = lean_mk_string_unchecked("namedArgument", 13, 13);
return v___x_3966_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12(void){
_start:
{
lean_object* v___x_3967_; 
v___x_3967_ = lean_mk_string_unchecked("kind\?", 5, 5);
return v___x_3967_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__13(void){
_start:
{
lean_object* v___x_3968_; lean_object* v___x_3969_; 
v___x_3968_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12);
v___x_3969_ = l_String_toRawSubstring_x27(v___x_3968_);
return v___x_3969_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__14(void){
_start:
{
lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3970_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__12);
v___x_3971_ = l_Lean_Name_mkStr1(v___x_3970_);
return v___x_3971_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__15(void){
_start:
{
lean_object* v___x_3972_; 
v___x_3972_ = lean_mk_string_unchecked(":=", 2, 2);
return v___x_3972_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16(void){
_start:
{
lean_object* v___x_3973_; 
v___x_3973_ = lean_mk_string_unchecked("some", 4, 4);
return v___x_3973_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__17(void){
_start:
{
lean_object* v___x_3974_; lean_object* v___x_3975_; 
v___x_3974_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16);
v___x_3975_ = l_String_toRawSubstring_x27(v___x_3974_);
return v___x_3975_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__18(void){
_start:
{
lean_object* v___x_3976_; lean_object* v___x_3977_; 
v___x_3976_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16);
v___x_3977_ = l_Lean_Name_mkStr1(v___x_3976_);
return v___x_3977_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__19(void){
_start:
{
lean_object* v___x_3978_; 
v___x_3978_ = lean_mk_string_unchecked("Option", 6, 6);
return v___x_3978_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__20(void){
_start:
{
lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; 
v___x_3979_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__16);
v___x_3980_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__19, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__19_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__19);
v___x_3981_ = l_Lean_Name_mkStr2(v___x_3980_, v___x_3979_);
return v___x_3981_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21(void){
_start:
{
lean_object* v___x_3982_; 
v___x_3982_ = lean_mk_string_unchecked("quotedName", 10, 10);
return v___x_3982_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22(void){
_start:
{
lean_object* v___x_3983_; 
v___x_3983_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_3983_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23(void){
_start:
{
lean_object* v___x_3984_; 
v___x_3984_ = lean_mk_string_unchecked("do", 2, 2);
return v___x_3984_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24(void){
_start:
{
lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; 
v___x_3985_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23);
v___x_3986_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22);
v___x_3987_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3988_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3989_ = l_Lean_Name_mkStr4(v___x_3988_, v___x_3987_, v___x_3986_, v___x_3985_);
return v___x_3989_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__25(void){
_start:
{
lean_object* v___x_3990_; 
v___x_3990_ = lean_mk_string_unchecked("doSeqIndent", 11, 11);
return v___x_3990_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26(void){
_start:
{
lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; 
v___x_3991_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__25, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__25_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__25);
v___x_3992_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22);
v___x_3993_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_3994_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_3995_ = l_Lean_Name_mkStr4(v___x_3994_, v___x_3993_, v___x_3992_, v___x_3991_);
return v___x_3995_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__27(void){
_start:
{
lean_object* v___x_3996_; 
v___x_3996_ = lean_mk_string_unchecked("doSeqItem", 9, 9);
return v___x_3996_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28(void){
_start:
{
lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; 
v___x_3997_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__27, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__27_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__27);
v___x_3998_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22);
v___x_3999_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_4000_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_4001_ = l_Lean_Name_mkStr4(v___x_4000_, v___x_3999_, v___x_3998_, v___x_3997_);
return v___x_4001_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__29(void){
_start:
{
lean_object* v___x_4002_; 
v___x_4002_ = lean_mk_string_unchecked("doExpr", 6, 6);
return v___x_4002_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30(void){
_start:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; 
v___x_4003_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__29, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__29_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__29);
v___x_4004_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22);
v___x_4005_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_4006_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_4007_ = l_Lean_Name_mkStr4(v___x_4006_, v___x_4005_, v___x_4004_, v___x_4003_);
return v___x_4007_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__31(void){
_start:
{
lean_object* v___x_4008_; 
v___x_4008_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_4008_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32(void){
_start:
{
lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; 
v___x_4009_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__31, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__31_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__31);
v___x_4010_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22);
v___x_4011_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_4012_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_4013_ = l_Lean_Name_mkStr4(v___x_4012_, v___x_4011_, v___x_4010_, v___x_4009_);
return v___x_4013_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__33(void){
_start:
{
lean_object* v___x_4014_; 
v___x_4014_ = lean_mk_string_unchecked("Parser.registerAlias", 20, 20);
return v___x_4014_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__34(void){
_start:
{
lean_object* v___x_4015_; lean_object* v___x_4016_; 
v___x_4015_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__33, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__33_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__33);
v___x_4016_ = l_String_toRawSubstring_x27(v___x_4015_);
return v___x_4016_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35(void){
_start:
{
lean_object* v___x_4017_; 
v___x_4017_ = lean_mk_string_unchecked("registerAlias", 13, 13);
return v___x_4017_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__36(void){
_start:
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; 
v___x_4018_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35);
v___x_4019_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_4020_ = l_Lean_Name_mkStr2(v___x_4019_, v___x_4018_);
return v___x_4020_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37(void){
_start:
{
lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; 
v___x_4021_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35);
v___x_4022_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_4023_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_4024_ = l_Lean_Name_mkStr3(v___x_4023_, v___x_4022_, v___x_4021_);
return v___x_4024_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__38(void){
_start:
{
lean_object* v___x_4025_; 
v___x_4025_ = lean_mk_string_unchecked("doubleQuotedName", 16, 16);
return v___x_4025_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__39(void){
_start:
{
lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; 
v___x_4026_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__38, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__38_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__38);
v___x_4027_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22);
v___x_4028_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_4029_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_4030_ = l_Lean_Name_mkStr4(v___x_4029_, v___x_4028_, v___x_4027_, v___x_4026_);
return v___x_4030_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40(void){
_start:
{
lean_object* v___x_4031_; 
v___x_4031_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_4031_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41(void){
_start:
{
uint8_t v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; 
v___x_4032_ = 0;
v___x_4033_ = lean_box(0);
v___x_4034_ = l_Lean_SourceInfo_fromRef(v___x_4033_, v___x_4032_);
return v___x_4034_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__42(void){
_start:
{
lean_object* v___x_4035_; 
v___x_4035_ = lean_mk_string_unchecked("choice", 6, 6);
return v___x_4035_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43(void){
_start:
{
lean_object* v___x_4036_; lean_object* v___x_4037_; 
v___x_4036_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__42, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__42_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__42);
v___x_4037_ = l_Lean_Name_mkStr1(v___x_4036_);
return v___x_4037_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__44(void){
_start:
{
lean_object* v___x_4038_; 
v___x_4038_ = lean_mk_string_unchecked("term{}", 6, 6);
return v___x_4038_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__45(void){
_start:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; 
v___x_4039_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__44, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__44_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__44);
v___x_4040_ = l_Lean_Name_mkStr1(v___x_4039_);
return v___x_4040_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__46(void){
_start:
{
lean_object* v___x_4041_; 
v___x_4041_ = lean_mk_string_unchecked("{", 1, 1);
return v___x_4041_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47(void){
_start:
{
lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; 
v___x_4042_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__46, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__46_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__46);
v___x_4043_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41);
v___x_4044_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4044_, 0, v___x_4043_);
lean_ctor_set(v___x_4044_, 1, v___x_4042_);
return v___x_4044_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__48(void){
_start:
{
lean_object* v___x_4045_; 
v___x_4045_ = lean_mk_string_unchecked("}", 1, 1);
return v___x_4045_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49(void){
_start:
{
lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; 
v___x_4046_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__48, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__48_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__48);
v___x_4047_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41);
v___x_4048_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4048_, 0, v___x_4047_);
lean_ctor_set(v___x_4048_, 1, v___x_4046_);
return v___x_4048_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__50(void){
_start:
{
lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4049_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49);
v___x_4050_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47);
v___x_4051_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__45, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__45_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__45);
v___x_4052_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41);
v___x_4053_ = l_Lean_Syntax_node2(v___x_4052_, v___x_4051_, v___x_4050_, v___x_4049_);
return v___x_4053_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51(void){
_start:
{
lean_object* v___x_4054_; 
v___x_4054_ = lean_mk_string_unchecked("structInst", 10, 10);
return v___x_4054_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__52(void){
_start:
{
lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; 
v___x_4055_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__51);
v___x_4056_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22);
v___x_4057_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_4058_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_4059_ = l_Lean_Name_mkStr4(v___x_4058_, v___x_4057_, v___x_4056_, v___x_4055_);
return v___x_4059_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53(void){
_start:
{
lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; 
v___x_4060_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1);
v___x_4061_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__5, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__5_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__5);
v___x_4062_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41);
v___x_4063_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4063_, 0, v___x_4062_);
lean_ctor_set(v___x_4063_, 1, v___x_4061_);
lean_ctor_set(v___x_4063_, 2, v___x_4060_);
return v___x_4063_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54(void){
_start:
{
lean_object* v___x_4064_; 
v___x_4064_ = lean_mk_string_unchecked("structInstFields", 16, 16);
return v___x_4064_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55(void){
_start:
{
lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; 
v___x_4065_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__54);
v___x_4066_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22);
v___x_4067_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_4068_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_4069_ = l_Lean_Name_mkStr4(v___x_4068_, v___x_4067_, v___x_4066_, v___x_4065_);
return v___x_4069_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__56(void){
_start:
{
lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; 
v___x_4070_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53);
v___x_4071_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__55);
v___x_4072_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41);
v___x_4073_ = l_Lean_Syntax_node1(v___x_4072_, v___x_4071_, v___x_4070_);
return v___x_4073_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57(void){
_start:
{
lean_object* v___x_4074_; 
v___x_4074_ = lean_mk_string_unchecked("optEllipsis", 11, 11);
return v___x_4074_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__58(void){
_start:
{
lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; 
v___x_4075_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__57);
v___x_4076_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22);
v___x_4077_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_4078_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_4079_ = l_Lean_Name_mkStr4(v___x_4078_, v___x_4077_, v___x_4076_, v___x_4075_);
return v___x_4079_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__59(void){
_start:
{
lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; 
v___x_4080_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53);
v___x_4081_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__58, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__58_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__58);
v___x_4082_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41);
v___x_4083_ = l_Lean_Syntax_node1(v___x_4082_, v___x_4081_, v___x_4080_);
return v___x_4083_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60(void){
_start:
{
lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; 
v___x_4084_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__49);
v___x_4085_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__59, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__59_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__59);
v___x_4086_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__56, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__56_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__56);
v___x_4087_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__53);
v___x_4088_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__47);
v___x_4089_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__52, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__52_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__52);
v___x_4090_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41);
v___x_4091_ = l_Lean_Syntax_node6(v___x_4090_, v___x_4089_, v___x_4088_, v___x_4087_, v___x_4086_, v___x_4085_, v___x_4087_, v___x_4084_);
return v___x_4091_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__61(void){
_start:
{
lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; 
v___x_4092_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__60);
v___x_4093_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__50, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__50_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__50);
v___x_4094_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__43);
v___x_4095_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__41);
v___x_4096_ = l_Lean_Syntax_node2(v___x_4095_, v___x_4094_, v___x_4093_, v___x_4092_);
return v___x_4096_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62(void){
_start:
{
lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4097_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21);
v___x_4098_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22);
v___x_4099_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_4100_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_4101_ = l_Lean_Name_mkStr4(v___x_4100_, v___x_4099_, v___x_4098_, v___x_4097_);
return v___x_4101_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1(lean_object* v_x_4102_, lean_object* v_a_4103_, lean_object* v_a_4104_){
_start:
{
lean_object* v___y_4106_; lean_object* v___y_4107_; lean_object* v___x_4110_; lean_object* v___y_4112_; lean_object* v___y_4113_; lean_object* v___y_4114_; lean_object* v___y_4115_; lean_object* v___y_4116_; lean_object* v___y_4117_; lean_object* v___y_4118_; lean_object* v___y_4119_; lean_object* v___y_4120_; lean_object* v___y_4121_; lean_object* v___y_4122_; lean_object* v___y_4123_; lean_object* v___y_4124_; uint8_t v___y_4125_; lean_object* v___y_4126_; lean_object* v___y_4127_; lean_object* v___y_4128_; lean_object* v___y_4129_; lean_object* v___y_4130_; lean_object* v___y_4131_; lean_object* v___y_4132_; lean_object* v___y_4133_; lean_object* v___y_4134_; lean_object* v___y_4135_; lean_object* v___y_4136_; lean_object* v___y_4137_; lean_object* v___y_4138_; lean_object* v___y_4186_; lean_object* v___y_4187_; lean_object* v___y_4188_; lean_object* v___y_4189_; lean_object* v___y_4190_; lean_object* v___y_4191_; lean_object* v___y_4192_; lean_object* v___y_4193_; lean_object* v___y_4194_; lean_object* v___y_4195_; lean_object* v___y_4196_; lean_object* v___y_4197_; lean_object* v___y_4198_; uint8_t v___y_4199_; lean_object* v___y_4200_; lean_object* v___y_4201_; lean_object* v___y_4202_; lean_object* v___y_4203_; lean_object* v___y_4204_; lean_object* v___y_4205_; lean_object* v___y_4206_; lean_object* v___y_4207_; lean_object* v___y_4208_; lean_object* v___y_4209_; lean_object* v___y_4210_; lean_object* v___y_4211_; lean_object* v___y_4245_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4285_; lean_object* v___y_4286_; lean_object* v___y_4287_; lean_object* v___y_4288_; lean_object* v___y_4289_; lean_object* v___y_4290_; lean_object* v___y_4346_; lean_object* v___y_4347_; lean_object* v___y_4348_; lean_object* v___y_4349_; lean_object* v___y_4350_; lean_object* v___y_4351_; lean_object* v_kind_x3f_4363_; lean_object* v___y_4364_; lean_object* v___y_4365_; lean_object* v___x_4382_; uint8_t v___x_4383_; 
v___x_4110_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__0);
v___x_4382_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__1);
lean_inc(v_x_4102_);
v___x_4383_ = l_Lean_Syntax_isOfKind(v_x_4102_, v___x_4382_);
if (v___x_4383_ == 0)
{
lean_object* v___x_4384_; lean_object* v___x_4385_; 
lean_dec(v_x_4102_);
v___x_4384_ = lean_box(1);
v___x_4385_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4385_, 0, v___x_4384_);
lean_ctor_set(v___x_4385_, 1, v_a_4104_);
return v___x_4385_;
}
else
{
lean_object* v___x_4386_; lean_object* v___x_4387_; uint8_t v___x_4388_; 
v___x_4386_ = lean_unsigned_to_nat(1u);
v___x_4387_ = l_Lean_Syntax_getArg(v_x_4102_, v___x_4386_);
v___x_4388_ = l_Lean_Syntax_isNone(v___x_4387_);
if (v___x_4388_ == 0)
{
uint8_t v___x_4389_; 
lean_inc(v___x_4387_);
v___x_4389_ = l_Lean_Syntax_matchesNull(v___x_4387_, v___x_4386_);
if (v___x_4389_ == 0)
{
lean_object* v___x_4390_; lean_object* v___x_4391_; 
lean_dec(v___x_4387_);
lean_dec(v_x_4102_);
v___x_4390_ = lean_box(1);
v___x_4391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4391_, 0, v___x_4390_);
lean_ctor_set(v___x_4391_, 1, v_a_4104_);
return v___x_4391_;
}
else
{
lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; uint8_t v___x_4395_; 
v___x_4392_ = lean_unsigned_to_nat(0u);
v___x_4393_ = l_Lean_Syntax_getArg(v___x_4387_, v___x_4392_);
lean_dec(v___x_4387_);
v___x_4394_ = lean_obj_once(&l_Lean_Parser_group_formatter___closed__1, &l_Lean_Parser_group_formatter___closed__1_once, _init_l_Lean_Parser_group_formatter___closed__1);
lean_inc(v___x_4393_);
v___x_4395_ = l_Lean_Syntax_isOfKind(v___x_4393_, v___x_4394_);
if (v___x_4395_ == 0)
{
lean_object* v___x_4396_; lean_object* v___x_4397_; 
lean_dec(v___x_4393_);
lean_dec(v_x_4102_);
v___x_4396_ = lean_box(1);
v___x_4397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4397_, 0, v___x_4396_);
lean_ctor_set(v___x_4397_, 1, v_a_4104_);
return v___x_4397_;
}
else
{
lean_object* v___x_4398_; lean_object* v_kind_x3f_4399_; lean_object* v___x_4400_; 
v___x_4398_ = lean_unsigned_to_nat(3u);
v_kind_x3f_4399_ = l_Lean_Syntax_getArg(v___x_4393_, v___x_4398_);
lean_dec(v___x_4393_);
v___x_4400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4400_, 0, v_kind_x3f_4399_);
v_kind_x3f_4363_ = v___x_4400_;
v___y_4364_ = v_a_4103_;
v___y_4365_ = v_a_4104_;
goto v___jp_4362_;
}
}
}
else
{
lean_object* v___x_4401_; 
lean_dec(v___x_4387_);
v___x_4401_ = lean_box(0);
v_kind_x3f_4363_ = v___x_4401_;
v___y_4364_ = v_a_4103_;
v___y_4365_ = v_a_4104_;
goto v___jp_4362_;
}
}
v___jp_4105_:
{
lean_object* v___x_4108_; lean_object* v___x_4109_; 
v___x_4108_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__0, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__0_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__0);
v___x_4109_ = l_Lean_Macro_throwError___redArg(v___x_4108_, v___y_4106_, v___y_4107_);
return v___x_4109_;
}
v___jp_4111_:
{
lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; 
lean_inc_n(v___y_4123_, 6);
lean_inc_n(v___y_4118_, 21);
v___x_4139_ = l_Lean_Syntax_node1(v___y_4118_, v___y_4123_, v___y_4138_);
lean_inc_n(v___y_4117_, 4);
v___x_4140_ = l_Lean_Syntax_node2(v___y_4118_, v___y_4117_, v___y_4136_, v___x_4139_);
v___x_4141_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__5, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__5_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__5);
v___x_4142_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4142_, 0, v___y_4118_);
lean_ctor_set(v___x_4142_, 1, v___x_4141_);
v___x_4143_ = l_Lean_Syntax_node5(v___y_4118_, v___y_4121_, v___y_4112_, v___y_4134_, v___y_4114_, v___x_4140_, v___x_4142_);
lean_inc(v___y_4131_);
lean_inc_n(v___y_4120_, 2);
v___x_4144_ = l_Lean_Syntax_node5(v___y_4118_, v___y_4123_, v___y_4120_, v___y_4119_, v___y_4131_, v___y_4122_, v___x_4143_);
v___x_4145_ = l_Lean_Syntax_node2(v___y_4118_, v___y_4117_, v___y_4113_, v___x_4144_);
lean_inc_n(v___y_4126_, 3);
v___x_4146_ = l_Lean_Syntax_node1(v___y_4118_, v___y_4126_, v___x_4145_);
v___x_4147_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__1);
v___x_4148_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4148_, 0, v___y_4118_);
lean_ctor_set(v___x_4148_, 1, v___y_4123_);
lean_ctor_set(v___x_4148_, 2, v___x_4147_);
lean_inc_ref_n(v___x_4148_, 2);
lean_inc_n(v___y_4132_, 3);
v___x_4149_ = l_Lean_Syntax_node2(v___y_4118_, v___y_4132_, v___x_4146_, v___x_4148_);
v___x_4150_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__3, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__3_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__3);
v___x_4151_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__4, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__4_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__4);
v___x_4152_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__5, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__5_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__5);
lean_inc_ref_n(v___y_4137_, 4);
v___x_4153_ = l_Lean_Name_mkStr3(v___x_4151_, v___x_4152_, v___y_4137_);
lean_inc(v___y_4133_);
lean_inc(v___y_4127_);
v___x_4154_ = l_Lean_addMacroScope(v___y_4127_, v___x_4153_, v___y_4133_);
v___x_4155_ = l_Lean_Name_mkStr4(v___x_4110_, v___x_4151_, v___x_4152_, v___y_4137_);
lean_inc(v___y_4129_);
v___x_4156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4156_, 0, v___x_4155_);
lean_ctor_set(v___x_4156_, 1, v___y_4129_);
lean_inc_n(v___y_4135_, 2);
v___x_4157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4157_, 0, v___x_4156_);
lean_ctor_set(v___x_4157_, 1, v___y_4135_);
v___x_4158_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4158_, 0, v___y_4118_);
lean_ctor_set(v___x_4158_, 1, v___x_4150_);
lean_ctor_set(v___x_4158_, 2, v___x_4154_);
lean_ctor_set(v___x_4158_, 3, v___x_4157_);
v___x_4159_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__6, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__6_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__6);
lean_inc(v___y_4116_);
v___x_4160_ = l_Lean_Name_append(v___y_4116_, v___x_4159_);
v___x_4161_ = l_Lean_mkIdentFrom(v___y_4131_, v___x_4160_, v___y_4125_);
v___x_4162_ = l_Lean_Syntax_node2(v___y_4118_, v___y_4123_, v___y_4120_, v___x_4161_);
v___x_4163_ = l_Lean_Syntax_node2(v___y_4118_, v___y_4117_, v___x_4158_, v___x_4162_);
v___x_4164_ = l_Lean_Syntax_node1(v___y_4118_, v___y_4126_, v___x_4163_);
v___x_4165_ = l_Lean_Syntax_node2(v___y_4118_, v___y_4132_, v___x_4164_, v___x_4148_);
v___x_4166_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__8, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__8_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__8);
v___x_4167_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__9, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__9_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__9);
v___x_4168_ = l_Lean_Name_mkStr3(v___x_4151_, v___x_4167_, v___y_4137_);
v___x_4169_ = l_Lean_addMacroScope(v___y_4127_, v___x_4168_, v___y_4133_);
v___x_4170_ = l_Lean_Name_mkStr4(v___x_4110_, v___x_4151_, v___x_4167_, v___y_4137_);
v___x_4171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4171_, 0, v___x_4170_);
lean_ctor_set(v___x_4171_, 1, v___y_4129_);
v___x_4172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4172_, 0, v___x_4171_);
lean_ctor_set(v___x_4172_, 1, v___y_4135_);
v___x_4173_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4173_, 0, v___y_4118_);
lean_ctor_set(v___x_4173_, 1, v___x_4166_);
lean_ctor_set(v___x_4173_, 2, v___x_4169_);
lean_ctor_set(v___x_4173_, 3, v___x_4172_);
v___x_4174_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__10, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__10_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__10);
v___x_4175_ = l_Lean_Name_append(v___y_4116_, v___x_4174_);
v___x_4176_ = l_Lean_mkIdentFrom(v___y_4131_, v___x_4175_, v___y_4125_);
lean_dec(v___y_4131_);
v___x_4177_ = l_Lean_Syntax_node2(v___y_4118_, v___y_4123_, v___y_4120_, v___x_4176_);
v___x_4178_ = l_Lean_Syntax_node2(v___y_4118_, v___y_4117_, v___x_4173_, v___x_4177_);
v___x_4179_ = l_Lean_Syntax_node1(v___y_4118_, v___y_4126_, v___x_4178_);
v___x_4180_ = l_Lean_Syntax_node2(v___y_4118_, v___y_4132_, v___x_4179_, v___x_4148_);
v___x_4181_ = l_Lean_Syntax_node3(v___y_4118_, v___y_4123_, v___x_4149_, v___x_4165_, v___x_4180_);
lean_inc(v___y_4130_);
v___x_4182_ = l_Lean_Syntax_node1(v___y_4118_, v___y_4130_, v___x_4181_);
lean_inc(v___y_4128_);
v___x_4183_ = l_Lean_Syntax_node2(v___y_4118_, v___y_4128_, v___y_4124_, v___x_4182_);
v___x_4184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4184_, 0, v___x_4183_);
lean_ctor_set(v___x_4184_, 1, v___y_4115_);
return v___x_4184_;
}
v___jp_4185_:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; 
v___x_4212_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__11, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__11_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__11);
lean_inc_ref(v___y_4204_);
lean_inc_ref(v___y_4195_);
v___x_4213_ = l_Lean_Name_mkStr4(v___x_4110_, v___y_4195_, v___y_4204_, v___x_4212_);
v___x_4214_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr_formatter___closed__3, &l_Lean_Parser_antiquotNestedExpr_formatter___closed__3_once, _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__3);
lean_inc_n(v___y_4192_, 4);
v___x_4215_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4215_, 0, v___y_4192_);
lean_ctor_set(v___x_4215_, 1, v___x_4214_);
v___x_4216_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__13, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__13_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__13);
v___x_4217_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__14, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__14_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__14);
lean_inc_n(v___y_4208_, 2);
lean_inc_n(v___y_4201_, 2);
v___x_4218_ = l_Lean_addMacroScope(v___y_4201_, v___x_4217_, v___y_4208_);
lean_inc_n(v___y_4209_, 2);
v___x_4219_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4219_, 0, v___y_4192_);
lean_ctor_set(v___x_4219_, 1, v___x_4216_);
lean_ctor_set(v___x_4219_, 2, v___x_4218_);
lean_ctor_set(v___x_4219_, 3, v___y_4209_);
v___x_4220_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__15, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__15_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__15);
v___x_4221_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4221_, 0, v___y_4192_);
lean_ctor_set(v___x_4221_, 1, v___x_4220_);
v___x_4222_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__17, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__17_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__17);
v___x_4223_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__18, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__18_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__18);
v___x_4224_ = l_Lean_addMacroScope(v___y_4201_, v___x_4223_, v___y_4208_);
v___x_4225_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__20, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__20_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__20);
lean_inc(v___y_4203_);
v___x_4226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4226_, 0, v___x_4225_);
lean_ctor_set(v___x_4226_, 1, v___y_4203_);
v___x_4227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4227_, 0, v___x_4226_);
lean_ctor_set(v___x_4227_, 1, v___y_4209_);
v___x_4228_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4228_, 0, v___y_4192_);
lean_ctor_set(v___x_4228_, 1, v___x_4222_);
lean_ctor_set(v___x_4228_, 2, v___x_4224_);
lean_ctor_set(v___x_4228_, 3, v___x_4227_);
if (lean_obj_tag(v___y_4196_) == 0)
{
lean_object* v___x_4229_; 
lean_inc(v___y_4186_);
lean_inc(v___y_4203_);
v___x_4229_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___y_4203_, v___y_4186_);
if (lean_obj_tag(v___x_4229_) == 0)
{
lean_object* v___x_4230_; 
v___x_4230_ = l_Lean_quoteNameMk(v___y_4186_);
v___y_4112_ = v___x_4215_;
v___y_4113_ = v___y_4187_;
v___y_4114_ = v___x_4221_;
v___y_4115_ = v___y_4189_;
v___y_4116_ = v___y_4190_;
v___y_4117_ = v___y_4191_;
v___y_4118_ = v___y_4192_;
v___y_4119_ = v___y_4193_;
v___y_4120_ = v___y_4194_;
v___y_4121_ = v___x_4213_;
v___y_4122_ = v___y_4211_;
v___y_4123_ = v___y_4197_;
v___y_4124_ = v___y_4198_;
v___y_4125_ = v___y_4199_;
v___y_4126_ = v___y_4200_;
v___y_4127_ = v___y_4201_;
v___y_4128_ = v___y_4202_;
v___y_4129_ = v___y_4203_;
v___y_4130_ = v___y_4205_;
v___y_4131_ = v___y_4206_;
v___y_4132_ = v___y_4207_;
v___y_4133_ = v___y_4208_;
v___y_4134_ = v___x_4219_;
v___y_4135_ = v___y_4209_;
v___y_4136_ = v___x_4228_;
v___y_4137_ = v___y_4210_;
v___y_4138_ = v___x_4230_;
goto v___jp_4111_;
}
else
{
lean_object* v_val_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; 
lean_dec(v___y_4186_);
v_val_4231_ = lean_ctor_get(v___x_4229_, 0);
lean_inc(v_val_4231_);
lean_dec_ref(v___x_4229_);
v___x_4232_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__21);
lean_inc_ref(v___y_4204_);
lean_inc_ref(v___y_4195_);
v___x_4233_ = l_Lean_Name_mkStr4(v___x_4110_, v___y_4195_, v___y_4204_, v___x_4232_);
v___x_4234_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0);
v___x_4235_ = lean_string_intercalate(v___x_4234_, v_val_4231_);
lean_inc_ref(v___y_4188_);
v___x_4236_ = lean_string_append(v___y_4188_, v___x_4235_);
lean_dec_ref(v___x_4235_);
v___x_4237_ = lean_box(2);
v___x_4238_ = l_Lean_Syntax_mkNameLit(v___x_4236_, v___x_4237_);
v___x_4239_ = lean_unsigned_to_nat(1u);
v___x_4240_ = lean_mk_empty_array_with_capacity(v___x_4239_);
v___x_4241_ = lean_array_push(v___x_4240_, v___x_4238_);
v___x_4242_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4242_, 0, v___x_4237_);
lean_ctor_set(v___x_4242_, 1, v___x_4233_);
lean_ctor_set(v___x_4242_, 2, v___x_4241_);
v___y_4112_ = v___x_4215_;
v___y_4113_ = v___y_4187_;
v___y_4114_ = v___x_4221_;
v___y_4115_ = v___y_4189_;
v___y_4116_ = v___y_4190_;
v___y_4117_ = v___y_4191_;
v___y_4118_ = v___y_4192_;
v___y_4119_ = v___y_4193_;
v___y_4120_ = v___y_4194_;
v___y_4121_ = v___x_4213_;
v___y_4122_ = v___y_4211_;
v___y_4123_ = v___y_4197_;
v___y_4124_ = v___y_4198_;
v___y_4125_ = v___y_4199_;
v___y_4126_ = v___y_4200_;
v___y_4127_ = v___y_4201_;
v___y_4128_ = v___y_4202_;
v___y_4129_ = v___y_4203_;
v___y_4130_ = v___y_4205_;
v___y_4131_ = v___y_4206_;
v___y_4132_ = v___y_4207_;
v___y_4133_ = v___y_4208_;
v___y_4134_ = v___x_4219_;
v___y_4135_ = v___y_4209_;
v___y_4136_ = v___x_4228_;
v___y_4137_ = v___y_4210_;
v___y_4138_ = v___x_4242_;
goto v___jp_4111_;
}
}
else
{
lean_object* v_val_4243_; 
lean_dec(v___y_4186_);
v_val_4243_ = lean_ctor_get(v___y_4196_, 0);
lean_inc(v_val_4243_);
lean_dec_ref(v___y_4196_);
v___y_4112_ = v___x_4215_;
v___y_4113_ = v___y_4187_;
v___y_4114_ = v___x_4221_;
v___y_4115_ = v___y_4189_;
v___y_4116_ = v___y_4190_;
v___y_4117_ = v___y_4191_;
v___y_4118_ = v___y_4192_;
v___y_4119_ = v___y_4193_;
v___y_4120_ = v___y_4194_;
v___y_4121_ = v___x_4213_;
v___y_4122_ = v___y_4211_;
v___y_4123_ = v___y_4197_;
v___y_4124_ = v___y_4198_;
v___y_4125_ = v___y_4199_;
v___y_4126_ = v___y_4200_;
v___y_4127_ = v___y_4201_;
v___y_4128_ = v___y_4202_;
v___y_4129_ = v___y_4203_;
v___y_4130_ = v___y_4205_;
v___y_4131_ = v___y_4206_;
v___y_4132_ = v___y_4207_;
v___y_4133_ = v___y_4208_;
v___y_4134_ = v___x_4219_;
v___y_4135_ = v___y_4209_;
v___y_4136_ = v___x_4228_;
v___y_4137_ = v___y_4210_;
v___y_4138_ = v_val_4243_;
goto v___jp_4111_;
}
}
v___jp_4244_:
{
lean_object* v_quotContext_4254_; lean_object* v_currMacroScope_4255_; lean_object* v_ref_4256_; uint8_t v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; 
v_quotContext_4254_ = lean_ctor_get(v___y_4248_, 1);
v_currMacroScope_4255_ = lean_ctor_get(v___y_4248_, 2);
v_ref_4256_ = lean_ctor_get(v___y_4248_, 5);
v___x_4257_ = 0;
v___x_4258_ = l_Lean_SourceInfo_fromRef(v_ref_4256_, v___x_4257_);
v___x_4259_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15___closed__1);
v___x_4260_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__22);
v___x_4261_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__23);
v___x_4262_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__24);
lean_inc_n(v___x_4258_, 4);
v___x_4263_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4263_, 0, v___x_4258_);
lean_ctor_set(v___x_4263_, 1, v___x_4261_);
v___x_4264_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__26);
v___x_4265_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice_formatter___closed__5, &l_Lean_Parser_mkAntiquotSplice_formatter___closed__5_once, _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__5);
v___x_4266_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__28);
v___x_4267_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__30);
v___x_4268_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__32);
v___x_4269_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__34, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__34_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__34);
v___x_4270_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__35);
v___x_4271_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__36, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__36_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__36);
lean_inc(v_currMacroScope_4255_);
lean_inc(v_quotContext_4254_);
v___x_4272_ = l_Lean_addMacroScope(v_quotContext_4254_, v___x_4271_, v_currMacroScope_4255_);
v___x_4273_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__37);
lean_inc(v___y_4250_);
v___x_4274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4274_, 0, v___x_4273_);
lean_ctor_set(v___x_4274_, 1, v___y_4250_);
v___x_4275_ = lean_box(0);
v___x_4276_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4276_, 0, v___x_4274_);
lean_ctor_set(v___x_4276_, 1, v___x_4275_);
v___x_4277_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4277_, 0, v___x_4258_);
lean_ctor_set(v___x_4277_, 1, v___x_4269_);
lean_ctor_set(v___x_4277_, 2, v___x_4272_);
lean_ctor_set(v___x_4277_, 3, v___x_4276_);
v___x_4278_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__39, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__39_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__39);
v___x_4279_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40);
v___x_4280_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4280_, 0, v___x_4258_);
lean_ctor_set(v___x_4280_, 1, v___x_4279_);
lean_inc(v___y_4252_);
lean_inc_ref(v___x_4280_);
v___x_4281_ = l_Lean_Syntax_node3(v___x_4258_, v___x_4278_, v___x_4280_, v___x_4280_, v___y_4252_);
if (lean_obj_tag(v___y_4249_) == 0)
{
lean_object* v___x_4282_; 
v___x_4282_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__61, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__61_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__61);
lean_inc(v_currMacroScope_4255_);
lean_inc(v_quotContext_4254_);
v___y_4186_ = v___y_4246_;
v___y_4187_ = v___x_4277_;
v___y_4188_ = v___x_4279_;
v___y_4189_ = v___y_4245_;
v___y_4190_ = v___y_4247_;
v___y_4191_ = v___x_4268_;
v___y_4192_ = v___x_4258_;
v___y_4193_ = v___x_4281_;
v___y_4194_ = v___y_4253_;
v___y_4195_ = v___x_4259_;
v___y_4196_ = v___y_4251_;
v___y_4197_ = v___x_4265_;
v___y_4198_ = v___x_4263_;
v___y_4199_ = v___x_4257_;
v___y_4200_ = v___x_4267_;
v___y_4201_ = v_quotContext_4254_;
v___y_4202_ = v___x_4262_;
v___y_4203_ = v___y_4250_;
v___y_4204_ = v___x_4260_;
v___y_4205_ = v___x_4264_;
v___y_4206_ = v___y_4252_;
v___y_4207_ = v___x_4266_;
v___y_4208_ = v_currMacroScope_4255_;
v___y_4209_ = v___x_4275_;
v___y_4210_ = v___x_4270_;
v___y_4211_ = v___x_4282_;
goto v___jp_4185_;
}
else
{
lean_object* v_val_4283_; 
v_val_4283_ = lean_ctor_get(v___y_4249_, 0);
lean_inc(v_val_4283_);
lean_dec_ref(v___y_4249_);
lean_inc(v_currMacroScope_4255_);
lean_inc(v_quotContext_4254_);
v___y_4186_ = v___y_4246_;
v___y_4187_ = v___x_4277_;
v___y_4188_ = v___x_4279_;
v___y_4189_ = v___y_4245_;
v___y_4190_ = v___y_4247_;
v___y_4191_ = v___x_4268_;
v___y_4192_ = v___x_4258_;
v___y_4193_ = v___x_4281_;
v___y_4194_ = v___y_4253_;
v___y_4195_ = v___x_4259_;
v___y_4196_ = v___y_4251_;
v___y_4197_ = v___x_4265_;
v___y_4198_ = v___x_4263_;
v___y_4199_ = v___x_4257_;
v___y_4200_ = v___x_4267_;
v___y_4201_ = v_quotContext_4254_;
v___y_4202_ = v___x_4262_;
v___y_4203_ = v___y_4250_;
v___y_4204_ = v___x_4260_;
v___y_4205_ = v___x_4264_;
v___y_4206_ = v___y_4252_;
v___y_4207_ = v___x_4266_;
v___y_4208_ = v_currMacroScope_4255_;
v___y_4209_ = v___x_4275_;
v___y_4210_ = v___x_4270_;
v___y_4211_ = v_val_4283_;
goto v___jp_4185_;
}
}
v___jp_4284_:
{
lean_object* v___x_4291_; lean_object* v___x_4292_; 
v___x_4291_ = l_Lean_TSyntax_getId(v___y_4289_);
lean_inc(v___x_4291_);
v___x_4292_ = l_Lean_Macro_resolveGlobalName(v___x_4291_, v___y_4285_, v___y_4287_);
if (lean_obj_tag(v___x_4292_) == 0)
{
lean_object* v_a_4293_; 
v_a_4293_ = lean_ctor_get(v___x_4292_, 0);
lean_inc(v_a_4293_);
if (lean_obj_tag(v_a_4293_) == 1)
{
lean_object* v_head_4294_; lean_object* v_snd_4295_; 
v_head_4294_ = lean_ctor_get(v_a_4293_, 0);
lean_inc(v_head_4294_);
v_snd_4295_ = lean_ctor_get(v_head_4294_, 1);
lean_inc(v_snd_4295_);
if (lean_obj_tag(v_snd_4295_) == 0)
{
lean_object* v_tail_4296_; 
v_tail_4296_ = lean_ctor_get(v_a_4293_, 1);
lean_inc(v_tail_4296_);
lean_dec_ref(v_a_4293_);
if (lean_obj_tag(v_tail_4296_) == 0)
{
if (lean_obj_tag(v___y_4290_) == 0)
{
lean_object* v_a_4297_; lean_object* v_fst_4298_; lean_object* v___x_4299_; 
v_a_4297_ = lean_ctor_get(v___x_4292_, 1);
lean_inc(v_a_4297_);
lean_dec_ref(v___x_4292_);
v_fst_4298_ = lean_ctor_get(v_head_4294_, 0);
lean_inc(v_fst_4298_);
lean_dec(v_head_4294_);
lean_inc(v___x_4291_);
v___x_4299_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v_snd_4295_, v___x_4291_);
if (lean_obj_tag(v___x_4299_) == 0)
{
lean_object* v___x_4300_; 
lean_inc(v___x_4291_);
v___x_4300_ = l_Lean_quoteNameMk(v___x_4291_);
v___y_4245_ = v_a_4297_;
v___y_4246_ = v_fst_4298_;
v___y_4247_ = v___x_4291_;
v___y_4248_ = v___y_4285_;
v___y_4249_ = v___y_4286_;
v___y_4250_ = v_snd_4295_;
v___y_4251_ = v___y_4288_;
v___y_4252_ = v___y_4289_;
v___y_4253_ = v___x_4300_;
goto v___jp_4244_;
}
else
{
lean_object* v_val_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; 
v_val_4301_ = lean_ctor_get(v___x_4299_, 0);
lean_inc(v_val_4301_);
lean_dec_ref(v___x_4299_);
v___x_4302_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62);
v___x_4303_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40);
v___x_4304_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0);
v___x_4305_ = lean_string_intercalate(v___x_4304_, v_val_4301_);
v___x_4306_ = lean_string_append(v___x_4303_, v___x_4305_);
lean_dec_ref(v___x_4305_);
v___x_4307_ = lean_box(2);
v___x_4308_ = l_Lean_Syntax_mkNameLit(v___x_4306_, v___x_4307_);
v___x_4309_ = lean_unsigned_to_nat(1u);
v___x_4310_ = lean_mk_empty_array_with_capacity(v___x_4309_);
v___x_4311_ = lean_array_push(v___x_4310_, v___x_4308_);
v___x_4312_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4312_, 0, v___x_4307_);
lean_ctor_set(v___x_4312_, 1, v___x_4302_);
lean_ctor_set(v___x_4312_, 2, v___x_4311_);
v___y_4245_ = v_a_4297_;
v___y_4246_ = v_fst_4298_;
v___y_4247_ = v___x_4291_;
v___y_4248_ = v___y_4285_;
v___y_4249_ = v___y_4286_;
v___y_4250_ = v_snd_4295_;
v___y_4251_ = v___y_4288_;
v___y_4252_ = v___y_4289_;
v___y_4253_ = v___x_4312_;
goto v___jp_4244_;
}
}
else
{
lean_object* v_a_4313_; lean_object* v_fst_4314_; lean_object* v_val_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; 
v_a_4313_ = lean_ctor_get(v___x_4292_, 1);
lean_inc(v_a_4313_);
lean_dec_ref(v___x_4292_);
v_fst_4314_ = lean_ctor_get(v_head_4294_, 0);
lean_inc(v_fst_4314_);
lean_dec(v_head_4294_);
v_val_4315_ = lean_ctor_get(v___y_4290_, 0);
lean_inc(v_val_4315_);
lean_dec_ref(v___y_4290_);
v___x_4316_ = l_Lean_TSyntax_getString(v_val_4315_);
lean_dec(v_val_4315_);
v___x_4317_ = lean_box(0);
v___x_4318_ = l_Lean_Name_str___override(v___x_4317_, v___x_4316_);
lean_inc(v___x_4318_);
v___x_4319_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v_snd_4295_, v___x_4318_);
if (lean_obj_tag(v___x_4319_) == 0)
{
lean_object* v___x_4320_; 
v___x_4320_ = l_Lean_quoteNameMk(v___x_4318_);
v___y_4245_ = v_a_4313_;
v___y_4246_ = v_fst_4314_;
v___y_4247_ = v___x_4291_;
v___y_4248_ = v___y_4285_;
v___y_4249_ = v___y_4286_;
v___y_4250_ = v_snd_4295_;
v___y_4251_ = v___y_4288_;
v___y_4252_ = v___y_4289_;
v___y_4253_ = v___x_4320_;
goto v___jp_4244_;
}
else
{
lean_object* v_val_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; 
lean_dec(v___x_4318_);
v_val_4321_ = lean_ctor_get(v___x_4319_, 0);
lean_inc(v_val_4321_);
lean_dec_ref(v___x_4319_);
v___x_4322_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__62);
v___x_4323_ = lean_obj_once(&l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40, &l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40_once, _init_l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___closed__40);
v___x_4324_ = lean_obj_once(&l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0, &l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0_once, _init_l_Lean_Parser_identWithPartialTrailingDot_formatter___closed__0);
v___x_4325_ = lean_string_intercalate(v___x_4324_, v_val_4321_);
v___x_4326_ = lean_string_append(v___x_4323_, v___x_4325_);
lean_dec_ref(v___x_4325_);
v___x_4327_ = lean_box(2);
v___x_4328_ = l_Lean_Syntax_mkNameLit(v___x_4326_, v___x_4327_);
v___x_4329_ = lean_unsigned_to_nat(1u);
v___x_4330_ = lean_mk_empty_array_with_capacity(v___x_4329_);
v___x_4331_ = lean_array_push(v___x_4330_, v___x_4328_);
v___x_4332_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4332_, 0, v___x_4327_);
lean_ctor_set(v___x_4332_, 1, v___x_4322_);
lean_ctor_set(v___x_4332_, 2, v___x_4331_);
v___y_4245_ = v_a_4313_;
v___y_4246_ = v_fst_4314_;
v___y_4247_ = v___x_4291_;
v___y_4248_ = v___y_4285_;
v___y_4249_ = v___y_4286_;
v___y_4250_ = v_snd_4295_;
v___y_4251_ = v___y_4288_;
v___y_4252_ = v___y_4289_;
v___y_4253_ = v___x_4332_;
goto v___jp_4244_;
}
}
}
else
{
lean_object* v_a_4333_; 
lean_dec(v_tail_4296_);
lean_dec(v_head_4294_);
lean_dec(v___x_4291_);
lean_dec(v___y_4290_);
lean_dec(v___y_4289_);
lean_dec(v___y_4288_);
lean_dec(v___y_4286_);
v_a_4333_ = lean_ctor_get(v___x_4292_, 1);
lean_inc(v_a_4333_);
lean_dec_ref(v___x_4292_);
v___y_4106_ = v___y_4285_;
v___y_4107_ = v_a_4333_;
goto v___jp_4105_;
}
}
else
{
lean_object* v_a_4334_; 
lean_dec(v_snd_4295_);
lean_dec_ref(v_a_4293_);
lean_dec(v_head_4294_);
lean_dec(v___x_4291_);
lean_dec(v___y_4290_);
lean_dec(v___y_4289_);
lean_dec(v___y_4288_);
lean_dec(v___y_4286_);
v_a_4334_ = lean_ctor_get(v___x_4292_, 1);
lean_inc(v_a_4334_);
lean_dec_ref(v___x_4292_);
v___y_4106_ = v___y_4285_;
v___y_4107_ = v_a_4334_;
goto v___jp_4105_;
}
}
else
{
lean_object* v_a_4335_; 
lean_dec(v_a_4293_);
lean_dec(v___x_4291_);
lean_dec(v___y_4290_);
lean_dec(v___y_4289_);
lean_dec(v___y_4288_);
lean_dec(v___y_4286_);
v_a_4335_ = lean_ctor_get(v___x_4292_, 1);
lean_inc(v_a_4335_);
lean_dec_ref(v___x_4292_);
v___y_4106_ = v___y_4285_;
v___y_4107_ = v_a_4335_;
goto v___jp_4105_;
}
}
else
{
lean_object* v_a_4336_; lean_object* v_a_4337_; lean_object* v___x_4339_; uint8_t v_isShared_4340_; uint8_t v_isSharedCheck_4344_; 
lean_dec(v___x_4291_);
lean_dec(v___y_4290_);
lean_dec(v___y_4289_);
lean_dec(v___y_4288_);
lean_dec(v___y_4286_);
v_a_4336_ = lean_ctor_get(v___x_4292_, 0);
v_a_4337_ = lean_ctor_get(v___x_4292_, 1);
v_isSharedCheck_4344_ = !lean_is_exclusive(v___x_4292_);
if (v_isSharedCheck_4344_ == 0)
{
v___x_4339_ = v___x_4292_;
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
else
{
lean_inc(v_a_4337_);
lean_inc(v_a_4336_);
lean_dec(v___x_4292_);
v___x_4339_ = lean_box(0);
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
v_resetjp_4338_:
{
lean_object* v___x_4342_; 
if (v_isShared_4340_ == 0)
{
v___x_4342_ = v___x_4339_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4343_; 
v_reuseFailAlloc_4343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4343_, 0, v_a_4336_);
lean_ctor_set(v_reuseFailAlloc_4343_, 1, v_a_4337_);
v___x_4342_ = v_reuseFailAlloc_4343_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
return v___x_4342_;
}
}
}
}
v___jp_4345_:
{
lean_object* v___x_4352_; 
v___x_4352_ = l_Lean_Syntax_getOptional_x3f(v___y_4350_);
lean_dec(v___y_4350_);
if (lean_obj_tag(v___x_4352_) == 0)
{
lean_object* v___x_4353_; 
v___x_4353_ = lean_box(0);
v___y_4285_ = v___y_4346_;
v___y_4286_ = v___y_4351_;
v___y_4287_ = v___y_4347_;
v___y_4288_ = v___y_4349_;
v___y_4289_ = v___y_4348_;
v___y_4290_ = v___x_4353_;
goto v___jp_4284_;
}
else
{
lean_object* v_val_4354_; lean_object* v___x_4356_; uint8_t v_isShared_4357_; uint8_t v_isSharedCheck_4361_; 
v_val_4354_ = lean_ctor_get(v___x_4352_, 0);
v_isSharedCheck_4361_ = !lean_is_exclusive(v___x_4352_);
if (v_isSharedCheck_4361_ == 0)
{
v___x_4356_ = v___x_4352_;
v_isShared_4357_ = v_isSharedCheck_4361_;
goto v_resetjp_4355_;
}
else
{
lean_inc(v_val_4354_);
lean_dec(v___x_4352_);
v___x_4356_ = lean_box(0);
v_isShared_4357_ = v_isSharedCheck_4361_;
goto v_resetjp_4355_;
}
v_resetjp_4355_:
{
lean_object* v___x_4359_; 
if (v_isShared_4357_ == 0)
{
v___x_4359_ = v___x_4356_;
goto v_reusejp_4358_;
}
else
{
lean_object* v_reuseFailAlloc_4360_; 
v_reuseFailAlloc_4360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4360_, 0, v_val_4354_);
v___x_4359_ = v_reuseFailAlloc_4360_;
goto v_reusejp_4358_;
}
v_reusejp_4358_:
{
v___y_4285_ = v___y_4346_;
v___y_4286_ = v___y_4351_;
v___y_4287_ = v___y_4347_;
v___y_4288_ = v___y_4349_;
v___y_4289_ = v___y_4348_;
v___y_4290_ = v___x_4359_;
goto v___jp_4284_;
}
}
}
}
v___jp_4362_:
{
lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v_declName_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4366_ = lean_unsigned_to_nat(2u);
v___x_4367_ = l_Lean_Syntax_getArg(v_x_4102_, v___x_4366_);
v___x_4368_ = lean_unsigned_to_nat(3u);
v_declName_4369_ = l_Lean_Syntax_getArg(v_x_4102_, v___x_4368_);
v___x_4370_ = lean_unsigned_to_nat(4u);
v___x_4371_ = l_Lean_Syntax_getArg(v_x_4102_, v___x_4370_);
lean_dec(v_x_4102_);
v___x_4372_ = l_Lean_Syntax_getOptional_x3f(v___x_4371_);
lean_dec(v___x_4371_);
if (lean_obj_tag(v___x_4372_) == 0)
{
lean_object* v___x_4373_; 
v___x_4373_ = lean_box(0);
v___y_4346_ = v___y_4364_;
v___y_4347_ = v___y_4365_;
v___y_4348_ = v_declName_4369_;
v___y_4349_ = v_kind_x3f_4363_;
v___y_4350_ = v___x_4367_;
v___y_4351_ = v___x_4373_;
goto v___jp_4345_;
}
else
{
lean_object* v_val_4374_; lean_object* v___x_4376_; uint8_t v_isShared_4377_; uint8_t v_isSharedCheck_4381_; 
v_val_4374_ = lean_ctor_get(v___x_4372_, 0);
v_isSharedCheck_4381_ = !lean_is_exclusive(v___x_4372_);
if (v_isSharedCheck_4381_ == 0)
{
v___x_4376_ = v___x_4372_;
v_isShared_4377_ = v_isSharedCheck_4381_;
goto v_resetjp_4375_;
}
else
{
lean_inc(v_val_4374_);
lean_dec(v___x_4372_);
v___x_4376_ = lean_box(0);
v_isShared_4377_ = v_isSharedCheck_4381_;
goto v_resetjp_4375_;
}
v_resetjp_4375_:
{
lean_object* v___x_4379_; 
if (v_isShared_4377_ == 0)
{
v___x_4379_ = v___x_4376_;
goto v_reusejp_4378_;
}
else
{
lean_object* v_reuseFailAlloc_4380_; 
v_reuseFailAlloc_4380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4380_, 0, v_val_4374_);
v___x_4379_ = v_reuseFailAlloc_4380_;
goto v_reusejp_4378_;
}
v_reusejp_4378_:
{
v___y_4346_ = v___y_4364_;
v___y_4347_ = v___y_4365_;
v___y_4348_ = v_declName_4369_;
v___y_4349_ = v_kind_x3f_4363_;
v___y_4350_ = v___x_4367_;
v___y_4351_ = v___x_4379_;
goto v___jp_4345_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1___boxed(lean_object* v_x_4402_, lean_object* v_a_4403_, lean_object* v_a_4404_){
_start:
{
lean_object* v_res_4405_; 
v_res_4405_ = l_Lean___aux__Lean__Parser__Extra______macroRules__Lean__termRegister__parser__alias_x28Kind_x3a_x3d___x29______________1(v_x_4402_, v_a_4403_, v_a_4404_);
lean_dec_ref(v_a_4403_);
return v_res_4405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__0_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_){
_start:
{
lean_object* v___x_4411_; 
v___x_4411_ = l_Lean_PrettyPrinter_Parenthesizer_skip_parenthesizer___redArg();
return v___x_4411_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__0_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed(lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_){
_start:
{
lean_object* v_res_4417_; 
v_res_4417_ = l___private_Lean_Parser_Extra_0__Lean_initFn___lam__0_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(v___y_4412_, v___y_4413_, v___y_4414_, v___y_4415_);
lean_dec(v___y_4415_);
lean_dec_ref(v___y_4414_);
lean_dec(v___y_4413_);
lean_dec_ref(v___y_4412_);
return v_res_4417_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__2_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(lean_object* v___y_4418_){
_start:
{
lean_inc_ref(v___y_4418_);
return v___y_4418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__2_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed(lean_object* v___y_4419_){
_start:
{
lean_object* v_res_4420_; 
v_res_4420_ = l___private_Lean_Parser_Extra_0__Lean_initFn___lam__2_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(v___y_4419_);
lean_dec_ref(v___y_4419_);
return v_res_4420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__3_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_){
_start:
{
lean_object* v___x_4427_; 
v___x_4427_ = lean_apply_5(v___y_4421_, v___y_4422_, v___y_4423_, v___y_4424_, v___y_4425_, lean_box(0));
return v___x_4427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__3_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed(lean_object* v___y_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_){
_start:
{
lean_object* v_res_4434_; 
v_res_4434_ = l___private_Lean_Parser_Extra_0__Lean_initFn___lam__3_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(v___y_4428_, v___y_4429_, v___y_4430_, v___y_4431_, v___y_4432_);
return v_res_4434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__13_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_){
_start:
{
lean_object* v___x_4440_; 
v___x_4440_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v___y_4436_, v___y_4438_);
return v___x_4440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__13_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed(lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_){
_start:
{
lean_object* v_res_4446_; 
v_res_4446_ = l___private_Lean_Parser_Extra_0__Lean_initFn___lam__13_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(v___y_4441_, v___y_4442_, v___y_4443_, v___y_4444_);
lean_dec(v___y_4444_);
lean_dec_ref(v___y_4443_);
lean_dec(v___y_4442_);
lean_dec_ref(v___y_4441_);
return v_res_4446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn___lam__5_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(lean_object* v___x_4447_, lean_object* v___y_4448_){
_start:
{
lean_object* v___x_4449_; 
v___x_4449_ = l_Lean_Parser_node(v___x_4447_, v___y_4448_);
return v___x_4449_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__0_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4450_; 
v___f_4450_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extra_0__Lean_initFn___lam__0_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed), 5, 0);
return v___f_4450_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__1_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4451_; 
v___f_4451_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extra_0__Lean_initFn___lam__2_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed), 1, 0);
return v___f_4451_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__2_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4452_; 
v___f_4452_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extra_0__Lean_initFn___lam__3_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed), 6, 0);
return v___f_4452_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__3_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4453_; 
v___f_4453_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_fill___boxed), 6, 0);
return v___f_4453_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__4_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4454_; 
v___f_4454_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_group___boxed), 6, 0);
return v___f_4454_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__5_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4455_; 
v___f_4455_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extra_0__Lean_initFn___lam__13_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed), 5, 0);
return v___f_4455_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__6_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4456_; lean_object* v___f_4457_; 
v___x_4456_ = lean_obj_once(&l_Lean_Parser_patternIgnore_formatter___closed__1, &l_Lean_Parser_patternIgnore_formatter___closed__1_once, _init_l_Lean_Parser_patternIgnore_formatter___closed__1);
v___f_4457_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extra_0__Lean_initFn___lam__5_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_), 2, 1);
lean_closure_set(v___f_4457_, 0, v___x_4456_);
return v___f_4457_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__7_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4458_; lean_object* v___x_4459_; 
v___x_4458_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__0);
v___x_4459_ = l_Lean_Name_mkStr1(v___x_4458_);
return v___x_4459_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__8_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4460_; lean_object* v___x_4461_; 
v___x_4460_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1);
v___x_4461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4461_, 0, v___x_4460_);
return v___x_4461_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__9_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4462_; lean_object* v___x_4463_; 
v___x_4462_ = lean_alloc_closure((void*)(l_Lean_ppHardLineUnlessUngrouped_formatter___boxed), 5, 0);
v___x_4463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4463_, 0, v___x_4462_);
return v___x_4463_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4464_; lean_object* v___x_4465_; 
v___f_4464_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__0_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__0_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__0_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4465_, 0, v___f_4464_);
return v___x_4465_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__11_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4466_; lean_object* v___x_4467_; 
v___x_4466_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__0);
v___x_4467_ = l_Lean_Name_mkStr1(v___x_4466_);
return v___x_4467_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__12_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; 
v___x_4468_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1);
v___x_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4469_, 0, v___x_4468_);
return v___x_4469_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__13_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4470_; lean_object* v___x_4471_; 
v___x_4470_ = lean_alloc_closure((void*)(l_Lean_ppAllowUngrouped_formatter___boxed), 5, 0);
v___x_4471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4471_, 0, v___x_4470_);
return v___x_4471_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__14_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4472_; lean_object* v___x_4473_; 
v___x_4472_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__0);
v___x_4473_ = l_Lean_Name_mkStr1(v___x_4472_);
return v___x_4473_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4474_; lean_object* v___x_4475_; 
v___f_4474_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__1_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__1_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__1_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4475_, 0, v___f_4474_);
return v___x_4475_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__16_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4476_; lean_object* v___x_4477_; 
v___x_4476_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1);
v___x_4477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4477_, 0, v___x_4476_);
return v___x_4477_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__17_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4478_; 
v___x_4478_ = lean_alloc_closure((void*)(l_Lean_ppDedentIfGrouped_formatter___boxed), 6, 0);
return v___x_4478_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__18_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4479_; lean_object* v___x_4480_; 
v___x_4479_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__17_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__17_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__17_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4480_, 0, v___x_4479_);
return v___x_4480_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4481_; lean_object* v___x_4482_; 
v___f_4481_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__2_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__2_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__2_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4482_, 0, v___f_4481_);
return v___x_4482_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__20_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4483_; lean_object* v___x_4484_; 
v___x_4483_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__0);
v___x_4484_ = l_Lean_Name_mkStr1(v___x_4483_);
return v___x_4484_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__21_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4485_; lean_object* v___x_4486_; 
v___x_4485_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1);
v___x_4486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4486_, 0, v___x_4485_);
return v___x_4486_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__22_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4487_; 
v___x_4487_ = lean_alloc_closure((void*)(l_Lean_ppDedent_formatter___boxed), 6, 0);
return v___x_4487_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__23_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4488_; lean_object* v___x_4489_; 
v___x_4488_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__22_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__22_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__22_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4489_, 0, v___x_4488_);
return v___x_4489_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__24_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4490_; lean_object* v___x_4491_; 
v___x_4490_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__0);
v___x_4491_ = l_Lean_Name_mkStr1(v___x_4490_);
return v___x_4491_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__25_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4492_; lean_object* v___x_4493_; 
v___x_4492_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1);
v___x_4493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4493_, 0, v___x_4492_);
return v___x_4493_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__26_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4494_; 
v___x_4494_ = lean_alloc_closure((void*)(l_Lean_ppIndent_formatter___boxed), 6, 0);
return v___x_4494_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__27_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4495_; lean_object* v___x_4496_; 
v___x_4495_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__26_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__26_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__26_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4496_, 0, v___x_4495_);
return v___x_4496_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__28_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4497_; lean_object* v___x_4498_; 
v___x_4497_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__0);
v___x_4498_ = l_Lean_Name_mkStr1(v___x_4497_);
return v___x_4498_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__29_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4499_; lean_object* v___x_4500_; 
v___x_4499_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1);
v___x_4500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4500_, 0, v___x_4499_);
return v___x_4500_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__30_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4501_; lean_object* v___x_4502_; 
v___f_4501_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__3_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__3_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__3_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4502_, 0, v___f_4501_);
return v___x_4502_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__31_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4503_; lean_object* v___x_4504_; 
v___x_4503_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__0);
v___x_4504_ = l_Lean_Name_mkStr1(v___x_4503_);
return v___x_4504_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__32_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4505_; lean_object* v___x_4506_; 
v___x_4505_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1);
v___x_4506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4506_, 0, v___x_4505_);
return v___x_4506_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__33_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4507_; lean_object* v___x_4508_; 
v___f_4507_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__4_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__4_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__4_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4508_, 0, v___f_4507_);
return v___x_4508_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__34_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4509_; lean_object* v___x_4510_; 
v___f_4509_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__6_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__6_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__6_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4510_, 0, v___f_4509_);
return v___x_4510_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__35_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4511_; lean_object* v___x_4512_; 
v___x_4511_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0);
v___x_4512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4511_);
return v___x_4512_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__36_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4513_; lean_object* v___x_4514_; 
v___x_4513_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__0);
v___x_4514_ = l_Lean_Name_mkStr1(v___x_4513_);
return v___x_4514_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__37_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4515_; lean_object* v___x_4516_; 
v___x_4515_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1);
v___x_4516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4516_, 0, v___x_4515_);
return v___x_4516_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__38_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; 
v___x_4517_ = 0;
v___x_4518_ = lean_box(0);
v___x_4519_ = lean_box(0);
v___x_4520_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4520_, 0, v___x_4519_);
lean_ctor_set(v___x_4520_, 1, v___x_4518_);
lean_ctor_set_uint8(v___x_4520_, sizeof(void*)*2, v___x_4517_);
return v___x_4520_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__39_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4521_; 
v___x_4521_ = lean_alloc_closure((void*)(l_Lean_Parser_ppGroup_formatter___boxed), 6, 0);
return v___x_4521_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__40_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4522_; lean_object* v___x_4523_; 
v___x_4522_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__39_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__39_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__39_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4523_, 0, v___x_4522_);
return v___x_4523_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__41_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; 
v___x_4524_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__0);
v___x_4525_ = l_Lean_Name_mkStr1(v___x_4524_);
return v___x_4525_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__42_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4526_; lean_object* v___x_4527_; 
v___x_4526_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1);
v___x_4527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4527_, 0, v___x_4526_);
return v___x_4527_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__43_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4528_; lean_object* v___x_4529_; 
v___x_4528_ = lean_alloc_closure((void*)(l_Lean_ppLine_formatter___boxed), 5, 0);
v___x_4529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4529_, 0, v___x_4528_);
return v___x_4529_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__44_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4530_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1);
v___x_4531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4531_, 0, v___x_4530_);
return v___x_4531_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__45_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4532_; lean_object* v___x_4533_; 
v___f_4532_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__5_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__5_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__5_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4533_, 0, v___f_4532_);
return v___x_4533_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__46_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4534_; lean_object* v___x_4535_; 
v___x_4534_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__0);
v___x_4535_ = l_Lean_Name_mkStr1(v___x_4534_);
return v___x_4535_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__47_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4536_ = l_Lean_Parser_skip;
v___x_4537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4537_, 0, v___x_4536_);
return v___x_4537_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__48_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4538_; lean_object* v___x_4539_; 
v___x_4538_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1);
v___x_4539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4539_, 0, v___x_4538_);
return v___x_4539_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__49_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4540_; lean_object* v___x_4541_; 
v___x_4540_ = lean_unsigned_to_nat(0u);
v___x_4541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4541_, 0, v___x_4540_);
return v___x_4541_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__50_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; 
v___x_4542_ = 1;
v___x_4543_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__49_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__49_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__49_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4544_ = lean_box(0);
v___x_4545_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4545_, 0, v___x_4544_);
lean_ctor_set(v___x_4545_, 1, v___x_4543_);
lean_ctor_set_uint8(v___x_4545_, sizeof(void*)*2, v___x_4542_);
return v___x_4545_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__51_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4546_; lean_object* v___x_4547_; 
v___x_4546_ = lean_alloc_closure((void*)(l_Lean_ppHardSpace_formatter___boxed), 5, 0);
v___x_4547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4547_, 0, v___x_4546_);
return v___x_4547_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__52_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4548_; lean_object* v___x_4549_; 
v___x_4548_ = lean_unsigned_to_nat(1u);
v___x_4549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4549_, 0, v___x_4548_);
return v___x_4549_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__53_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; 
v___x_4550_ = 0;
v___x_4551_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__52_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__52_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__52_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4552_ = lean_box(0);
v___x_4553_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4553_, 0, v___x_4552_);
lean_ctor_set(v___x_4553_, 1, v___x_4551_);
lean_ctor_set_uint8(v___x_4553_, sizeof(void*)*2, v___x_4550_);
return v___x_4553_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__54_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4554_; lean_object* v___f_4555_; 
v___x_4554_ = lean_obj_once(&l_Lean_Parser_group_formatter___closed__1, &l_Lean_Parser_group_formatter___closed__1_once, _init_l_Lean_Parser_group_formatter___closed__1);
v___f_4555_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Extra_0__Lean_initFn___lam__5_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_), 2, 1);
lean_closure_set(v___f_4555_, 0, v___x_4554_);
return v___f_4555_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__55_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_4556_; lean_object* v___x_4557_; 
v___f_4556_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__54_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__54_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__54_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4557_, 0, v___f_4556_);
return v___x_4557_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__56_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4558_; lean_object* v___x_4559_; 
v___x_4558_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0);
v___x_4559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4558_);
return v___x_4559_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__57_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4560_; 
v___x_4560_ = lean_alloc_closure((void*)(l_Lean_Parser_group_formatter___boxed), 6, 0);
return v___x_4560_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__58_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4561_; lean_object* v___x_4562_; 
v___x_4561_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__57_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__57_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__57_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4562_, 0, v___x_4561_);
return v___x_4562_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__59_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4563_; 
v___x_4563_ = lean_alloc_closure((void*)(l_Lean_Parser_group_parenthesizer___boxed), 6, 0);
return v___x_4563_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__60_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4564_; lean_object* v___x_4565_; 
v___x_4564_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__59_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__59_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__59_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4565_, 0, v___x_4564_);
return v___x_4565_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__61_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4566_; 
v___x_4566_ = lean_alloc_closure((void*)(l_Lean_Parser_patternIgnore_formatter___boxed), 6, 0);
return v___x_4566_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__62_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4567_; lean_object* v___x_4568_; 
v___x_4567_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__61_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__61_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__61_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4568_, 0, v___x_4567_);
return v___x_4568_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__63_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4569_; 
v___x_4569_ = lean_alloc_closure((void*)(l_Lean_Parser_patternIgnore_parenthesizer___boxed), 6, 0);
return v___x_4569_;
}
}
static lean_object* _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__64_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4570_; lean_object* v___x_4571_; 
v___x_4570_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__63_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__63_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__63_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4571_, 0, v___x_4570_);
return v___x_4571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4573_; lean_object* v___y_4575_; lean_object* v___y_4576_; lean_object* v___y_4577_; lean_object* v___y_4587_; lean_object* v___y_4588_; lean_object* v___y_4589_; lean_object* v___y_4599_; lean_object* v___y_4600_; lean_object* v___y_4601_; lean_object* v___y_4602_; lean_object* v___y_4613_; lean_object* v___y_4614_; lean_object* v___y_4615_; lean_object* v___y_4616_; lean_object* v___y_4627_; lean_object* v___y_4628_; lean_object* v___y_4629_; lean_object* v___y_4630_; lean_object* v___y_4641_; lean_object* v___y_4642_; lean_object* v___y_4643_; lean_object* v___y_4644_; lean_object* v___y_4655_; lean_object* v___y_4656_; lean_object* v___y_4657_; lean_object* v___y_4658_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___y_4672_; lean_object* v___y_4673_; lean_object* v___y_4674_; lean_object* v___y_4686_; lean_object* v___y_4687_; lean_object* v___y_4688_; lean_object* v___y_4698_; lean_object* v___y_4699_; lean_object* v___y_4700_; lean_object* v___y_4710_; lean_object* v___x_4721_; lean_object* v___y_4723_; lean_object* v___x_4733_; 
v___x_4573_ = lean_obj_once(&l_Lean_Parser_patternIgnore_formatter___closed__1, &l_Lean_Parser_patternIgnore_formatter___closed__1_once, _init_l_Lean_Parser_patternIgnore_formatter___closed__1);
v___x_4668_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1___closed__0);
v___x_4669_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__34_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__34_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__34_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4670_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__35_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__35_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__35_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4721_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__53_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__53_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__53_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4733_ = l_Lean_Parser_registerAlias(v___x_4573_, v___x_4668_, v___x_4669_, v___x_4670_, v___x_4721_);
if (lean_obj_tag(v___x_4733_) == 0)
{
lean_object* v___x_4734_; lean_object* v___x_4735_; 
lean_dec_ref(v___x_4733_);
v___x_4734_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__62_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__62_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__62_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4735_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4573_, v___x_4734_);
if (lean_obj_tag(v___x_4735_) == 0)
{
lean_object* v___x_4736_; lean_object* v___x_4737_; 
lean_dec_ref(v___x_4735_);
v___x_4736_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__64_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__64_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__64_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4737_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4573_, v___x_4736_);
v___y_4723_ = v___x_4737_;
goto v___jp_4722_;
}
else
{
v___y_4723_ = v___x_4735_;
goto v___jp_4722_;
}
}
else
{
v___y_4723_ = v___x_4733_;
goto v___jp_4722_;
}
v___jp_4574_:
{
if (lean_obj_tag(v___y_4577_) == 0)
{
lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; 
lean_dec_ref(v___y_4577_);
v___x_4578_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__7_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__7_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__7_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4579_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1___closed__1);
v___x_4580_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__8_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__8_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__8_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4581_ = l_Lean_Parser_registerAlias(v___x_4578_, v___x_4579_, v___y_4575_, v___x_4580_, v___y_4576_);
if (lean_obj_tag(v___x_4581_) == 0)
{
lean_object* v___x_4582_; lean_object* v___x_4583_; 
lean_dec_ref(v___x_4581_);
v___x_4582_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__9_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__9_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__9_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4583_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4578_, v___x_4582_);
if (lean_obj_tag(v___x_4583_) == 0)
{
lean_object* v___x_4584_; lean_object* v___x_4585_; 
lean_dec_ref(v___x_4583_);
v___x_4584_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4585_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4578_, v___x_4584_);
return v___x_4585_;
}
else
{
return v___x_4583_;
}
}
else
{
return v___x_4581_;
}
}
else
{
lean_dec_ref(v___y_4576_);
lean_dec_ref(v___y_4575_);
return v___y_4577_;
}
}
v___jp_4586_:
{
if (lean_obj_tag(v___y_4589_) == 0)
{
lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; 
lean_dec_ref(v___y_4589_);
v___x_4590_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__11_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__11_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__11_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4591_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1___closed__1);
v___x_4592_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__12_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__12_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__12_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
lean_inc_ref(v___y_4588_);
lean_inc_ref(v___y_4587_);
v___x_4593_ = l_Lean_Parser_registerAlias(v___x_4590_, v___x_4591_, v___y_4587_, v___x_4592_, v___y_4588_);
if (lean_obj_tag(v___x_4593_) == 0)
{
lean_object* v___x_4594_; lean_object* v___x_4595_; 
lean_dec_ref(v___x_4593_);
v___x_4594_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__13_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__13_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__13_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4595_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4590_, v___x_4594_);
if (lean_obj_tag(v___x_4595_) == 0)
{
lean_object* v___x_4596_; lean_object* v___x_4597_; 
lean_dec_ref(v___x_4595_);
v___x_4596_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4597_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4590_, v___x_4596_);
v___y_4575_ = v___y_4587_;
v___y_4576_ = v___y_4588_;
v___y_4577_ = v___x_4597_;
goto v___jp_4574_;
}
else
{
v___y_4575_ = v___y_4587_;
v___y_4576_ = v___y_4588_;
v___y_4577_ = v___x_4595_;
goto v___jp_4574_;
}
}
else
{
v___y_4575_ = v___y_4587_;
v___y_4576_ = v___y_4588_;
v___y_4577_ = v___x_4593_;
goto v___jp_4574_;
}
}
else
{
lean_dec_ref(v___y_4588_);
lean_dec_ref(v___y_4587_);
return v___y_4589_;
}
}
v___jp_4598_:
{
if (lean_obj_tag(v___y_4602_) == 0)
{
lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; 
lean_dec_ref(v___y_4602_);
v___x_4603_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__14_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__14_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__14_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4604_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1___closed__1);
v___x_4605_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4606_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__16_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__16_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__16_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4607_ = l_Lean_Parser_registerAlias(v___x_4603_, v___x_4604_, v___x_4605_, v___x_4606_, v___y_4599_);
if (lean_obj_tag(v___x_4607_) == 0)
{
lean_object* v___x_4608_; lean_object* v___x_4609_; 
lean_dec_ref(v___x_4607_);
v___x_4608_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__18_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__18_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__18_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4609_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4603_, v___x_4608_);
if (lean_obj_tag(v___x_4609_) == 0)
{
lean_object* v___x_4610_; lean_object* v___x_4611_; 
lean_dec_ref(v___x_4609_);
v___x_4610_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4611_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4603_, v___x_4610_);
v___y_4587_ = v___y_4600_;
v___y_4588_ = v___y_4601_;
v___y_4589_ = v___x_4611_;
goto v___jp_4586_;
}
else
{
v___y_4587_ = v___y_4600_;
v___y_4588_ = v___y_4601_;
v___y_4589_ = v___x_4609_;
goto v___jp_4586_;
}
}
else
{
v___y_4587_ = v___y_4600_;
v___y_4588_ = v___y_4601_;
v___y_4589_ = v___x_4607_;
goto v___jp_4586_;
}
}
else
{
lean_dec_ref(v___y_4601_);
lean_dec_ref(v___y_4600_);
lean_dec_ref(v___y_4599_);
return v___y_4602_;
}
}
v___jp_4612_:
{
if (lean_obj_tag(v___y_4616_) == 0)
{
lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; 
lean_dec_ref(v___y_4616_);
v___x_4617_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__20_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__20_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__20_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4618_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1___closed__1);
v___x_4619_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4620_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__21_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__21_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__21_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
lean_inc_ref(v___y_4613_);
v___x_4621_ = l_Lean_Parser_registerAlias(v___x_4617_, v___x_4618_, v___x_4619_, v___x_4620_, v___y_4613_);
if (lean_obj_tag(v___x_4621_) == 0)
{
lean_object* v___x_4622_; lean_object* v___x_4623_; 
lean_dec_ref(v___x_4621_);
v___x_4622_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__23_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__23_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__23_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4623_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4617_, v___x_4622_);
if (lean_obj_tag(v___x_4623_) == 0)
{
lean_object* v___x_4624_; lean_object* v___x_4625_; 
lean_dec_ref(v___x_4623_);
v___x_4624_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4625_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4617_, v___x_4624_);
v___y_4599_ = v___y_4613_;
v___y_4600_ = v___y_4614_;
v___y_4601_ = v___y_4615_;
v___y_4602_ = v___x_4625_;
goto v___jp_4598_;
}
else
{
v___y_4599_ = v___y_4613_;
v___y_4600_ = v___y_4614_;
v___y_4601_ = v___y_4615_;
v___y_4602_ = v___x_4623_;
goto v___jp_4598_;
}
}
else
{
v___y_4599_ = v___y_4613_;
v___y_4600_ = v___y_4614_;
v___y_4601_ = v___y_4615_;
v___y_4602_ = v___x_4621_;
goto v___jp_4598_;
}
}
else
{
lean_dec_ref(v___y_4615_);
lean_dec_ref(v___y_4614_);
lean_dec_ref(v___y_4613_);
return v___y_4616_;
}
}
v___jp_4626_:
{
if (lean_obj_tag(v___y_4630_) == 0)
{
lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; 
lean_dec_ref(v___y_4630_);
v___x_4631_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__24_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__24_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__24_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4632_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1___closed__1);
v___x_4633_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4634_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__25_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__25_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__25_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
lean_inc_ref(v___y_4627_);
v___x_4635_ = l_Lean_Parser_registerAlias(v___x_4631_, v___x_4632_, v___x_4633_, v___x_4634_, v___y_4627_);
if (lean_obj_tag(v___x_4635_) == 0)
{
lean_object* v___x_4636_; lean_object* v___x_4637_; 
lean_dec_ref(v___x_4635_);
v___x_4636_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__27_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__27_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__27_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4637_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4631_, v___x_4636_);
if (lean_obj_tag(v___x_4637_) == 0)
{
lean_object* v___x_4638_; lean_object* v___x_4639_; 
lean_dec_ref(v___x_4637_);
v___x_4638_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4639_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4631_, v___x_4638_);
v___y_4613_ = v___y_4627_;
v___y_4614_ = v___y_4628_;
v___y_4615_ = v___y_4629_;
v___y_4616_ = v___x_4639_;
goto v___jp_4612_;
}
else
{
v___y_4613_ = v___y_4627_;
v___y_4614_ = v___y_4628_;
v___y_4615_ = v___y_4629_;
v___y_4616_ = v___x_4637_;
goto v___jp_4612_;
}
}
else
{
v___y_4613_ = v___y_4627_;
v___y_4614_ = v___y_4628_;
v___y_4615_ = v___y_4629_;
v___y_4616_ = v___x_4635_;
goto v___jp_4612_;
}
}
else
{
lean_dec_ref(v___y_4629_);
lean_dec_ref(v___y_4628_);
lean_dec_ref(v___y_4627_);
return v___y_4630_;
}
}
v___jp_4640_:
{
if (lean_obj_tag(v___y_4644_) == 0)
{
lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; 
lean_dec_ref(v___y_4644_);
v___x_4645_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__28_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__28_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__28_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4646_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1___closed__1);
v___x_4647_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4648_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__29_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__29_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__29_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
lean_inc_ref(v___y_4641_);
v___x_4649_ = l_Lean_Parser_registerAlias(v___x_4645_, v___x_4646_, v___x_4647_, v___x_4648_, v___y_4641_);
if (lean_obj_tag(v___x_4649_) == 0)
{
lean_object* v___x_4650_; lean_object* v___x_4651_; 
lean_dec_ref(v___x_4649_);
v___x_4650_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__30_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__30_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__30_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4651_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4645_, v___x_4650_);
if (lean_obj_tag(v___x_4651_) == 0)
{
lean_object* v___x_4652_; lean_object* v___x_4653_; 
lean_dec_ref(v___x_4651_);
v___x_4652_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4653_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4645_, v___x_4652_);
v___y_4627_ = v___y_4641_;
v___y_4628_ = v___y_4642_;
v___y_4629_ = v___y_4643_;
v___y_4630_ = v___x_4653_;
goto v___jp_4626_;
}
else
{
v___y_4627_ = v___y_4641_;
v___y_4628_ = v___y_4642_;
v___y_4629_ = v___y_4643_;
v___y_4630_ = v___x_4651_;
goto v___jp_4626_;
}
}
else
{
v___y_4627_ = v___y_4641_;
v___y_4628_ = v___y_4642_;
v___y_4629_ = v___y_4643_;
v___y_4630_ = v___x_4649_;
goto v___jp_4626_;
}
}
else
{
lean_dec_ref(v___y_4643_);
lean_dec_ref(v___y_4642_);
lean_dec_ref(v___y_4641_);
return v___y_4644_;
}
}
v___jp_4654_:
{
if (lean_obj_tag(v___y_4658_) == 0)
{
lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; 
lean_dec_ref(v___y_4658_);
v___x_4659_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__31_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__31_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__31_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4660_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1___closed__1);
v___x_4661_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4662_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__32_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__32_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__32_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
lean_inc_ref(v___y_4655_);
v___x_4663_ = l_Lean_Parser_registerAlias(v___x_4659_, v___x_4660_, v___x_4661_, v___x_4662_, v___y_4655_);
if (lean_obj_tag(v___x_4663_) == 0)
{
lean_object* v___x_4664_; lean_object* v___x_4665_; 
lean_dec_ref(v___x_4663_);
v___x_4664_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__33_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__33_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__33_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4665_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4659_, v___x_4664_);
if (lean_obj_tag(v___x_4665_) == 0)
{
lean_object* v___x_4666_; lean_object* v___x_4667_; 
lean_dec_ref(v___x_4665_);
v___x_4666_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4667_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4659_, v___x_4666_);
v___y_4641_ = v___y_4655_;
v___y_4642_ = v___y_4656_;
v___y_4643_ = v___y_4657_;
v___y_4644_ = v___x_4667_;
goto v___jp_4640_;
}
else
{
v___y_4641_ = v___y_4655_;
v___y_4642_ = v___y_4656_;
v___y_4643_ = v___y_4657_;
v___y_4644_ = v___x_4665_;
goto v___jp_4640_;
}
}
else
{
v___y_4641_ = v___y_4655_;
v___y_4642_ = v___y_4656_;
v___y_4643_ = v___y_4657_;
v___y_4644_ = v___x_4663_;
goto v___jp_4640_;
}
}
else
{
lean_dec_ref(v___y_4657_);
lean_dec_ref(v___y_4656_);
lean_dec_ref(v___y_4655_);
return v___y_4658_;
}
}
v___jp_4671_:
{
if (lean_obj_tag(v___y_4674_) == 0)
{
lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; 
lean_dec_ref(v___y_4674_);
v___x_4675_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__36_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__36_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__36_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4676_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1___closed__1);
v___x_4677_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__15_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4678_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__37_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__37_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__37_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4679_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__38_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__38_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__38_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4680_ = l_Lean_Parser_registerAlias(v___x_4675_, v___x_4676_, v___x_4677_, v___x_4678_, v___x_4679_);
if (lean_obj_tag(v___x_4680_) == 0)
{
lean_object* v___x_4681_; lean_object* v___x_4682_; 
lean_dec_ref(v___x_4680_);
v___x_4681_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__40_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__40_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__40_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4682_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4675_, v___x_4681_);
if (lean_obj_tag(v___x_4682_) == 0)
{
lean_object* v___x_4683_; lean_object* v___x_4684_; 
lean_dec_ref(v___x_4682_);
v___x_4683_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__19_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4684_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4675_, v___x_4683_);
v___y_4655_ = v___x_4679_;
v___y_4656_ = v___y_4672_;
v___y_4657_ = v___y_4673_;
v___y_4658_ = v___x_4684_;
goto v___jp_4654_;
}
else
{
v___y_4655_ = v___x_4679_;
v___y_4656_ = v___y_4672_;
v___y_4657_ = v___y_4673_;
v___y_4658_ = v___x_4682_;
goto v___jp_4654_;
}
}
else
{
v___y_4655_ = v___x_4679_;
v___y_4656_ = v___y_4672_;
v___y_4657_ = v___y_4673_;
v___y_4658_ = v___x_4680_;
goto v___jp_4654_;
}
}
else
{
lean_dec_ref(v___y_4673_);
lean_dec_ref(v___y_4672_);
return v___y_4674_;
}
}
v___jp_4685_:
{
if (lean_obj_tag(v___y_4688_) == 0)
{
lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; 
lean_dec_ref(v___y_4688_);
v___x_4689_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__41_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__41_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__41_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4690_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1___closed__1);
v___x_4691_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__42_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__42_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__42_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
lean_inc_ref(v___y_4687_);
lean_inc_ref(v___y_4686_);
v___x_4692_ = l_Lean_Parser_registerAlias(v___x_4689_, v___x_4690_, v___y_4686_, v___x_4691_, v___y_4687_);
if (lean_obj_tag(v___x_4692_) == 0)
{
lean_object* v___x_4693_; lean_object* v___x_4694_; 
lean_dec_ref(v___x_4692_);
v___x_4693_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__43_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__43_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__43_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4694_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4689_, v___x_4693_);
if (lean_obj_tag(v___x_4694_) == 0)
{
lean_object* v___x_4695_; lean_object* v___x_4696_; 
lean_dec_ref(v___x_4694_);
v___x_4695_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4696_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4689_, v___x_4695_);
v___y_4672_ = v___y_4686_;
v___y_4673_ = v___y_4687_;
v___y_4674_ = v___x_4696_;
goto v___jp_4671_;
}
else
{
v___y_4672_ = v___y_4686_;
v___y_4673_ = v___y_4687_;
v___y_4674_ = v___x_4694_;
goto v___jp_4671_;
}
}
else
{
v___y_4672_ = v___y_4686_;
v___y_4673_ = v___y_4687_;
v___y_4674_ = v___x_4692_;
goto v___jp_4671_;
}
}
else
{
lean_dec_ref(v___y_4687_);
lean_dec_ref(v___y_4686_);
return v___y_4688_;
}
}
v___jp_4697_:
{
if (lean_obj_tag(v___y_4700_) == 0)
{
lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; 
lean_dec_ref(v___y_4700_);
v___x_4701_ = lean_obj_once(&l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22, &l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22_once, _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29_____________00__closed__22);
v___x_4702_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1___closed__1);
v___x_4703_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__44_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__44_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__44_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
lean_inc_ref(v___y_4699_);
lean_inc_ref(v___y_4698_);
v___x_4704_ = l_Lean_Parser_registerAlias(v___x_4701_, v___x_4702_, v___y_4698_, v___x_4703_, v___y_4699_);
if (lean_obj_tag(v___x_4704_) == 0)
{
lean_object* v___x_4705_; lean_object* v___x_4706_; 
lean_dec_ref(v___x_4704_);
v___x_4705_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__45_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__45_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__45_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4706_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4701_, v___x_4705_);
if (lean_obj_tag(v___x_4706_) == 0)
{
lean_object* v___x_4707_; lean_object* v___x_4708_; 
lean_dec_ref(v___x_4706_);
v___x_4707_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4708_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4701_, v___x_4707_);
v___y_4686_ = v___y_4698_;
v___y_4687_ = v___y_4699_;
v___y_4688_ = v___x_4708_;
goto v___jp_4685_;
}
else
{
v___y_4686_ = v___y_4698_;
v___y_4687_ = v___y_4699_;
v___y_4688_ = v___x_4706_;
goto v___jp_4685_;
}
}
else
{
v___y_4686_ = v___y_4698_;
v___y_4687_ = v___y_4699_;
v___y_4688_ = v___x_4704_;
goto v___jp_4685_;
}
}
else
{
lean_dec_ref(v___y_4699_);
lean_dec_ref(v___y_4698_);
return v___y_4700_;
}
}
v___jp_4709_:
{
if (lean_obj_tag(v___y_4710_) == 0)
{
lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; 
lean_dec_ref(v___y_4710_);
v___x_4711_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__46_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__46_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__46_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4712_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1, &l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1___closed__1);
v___x_4713_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__47_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__47_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__47_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4714_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__48_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__48_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__48_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4715_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__50_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__50_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__50_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4716_ = l_Lean_Parser_registerAlias(v___x_4711_, v___x_4712_, v___x_4713_, v___x_4714_, v___x_4715_);
if (lean_obj_tag(v___x_4716_) == 0)
{
lean_object* v___x_4717_; lean_object* v___x_4718_; 
lean_dec_ref(v___x_4716_);
v___x_4717_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__51_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__51_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__51_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4718_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4711_, v___x_4717_);
if (lean_obj_tag(v___x_4718_) == 0)
{
lean_object* v___x_4719_; lean_object* v___x_4720_; 
lean_dec_ref(v___x_4718_);
v___x_4719_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__10_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4720_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4711_, v___x_4719_);
v___y_4698_ = v___x_4713_;
v___y_4699_ = v___x_4715_;
v___y_4700_ = v___x_4720_;
goto v___jp_4697_;
}
else
{
v___y_4698_ = v___x_4713_;
v___y_4699_ = v___x_4715_;
v___y_4700_ = v___x_4718_;
goto v___jp_4697_;
}
}
else
{
v___y_4698_ = v___x_4713_;
v___y_4699_ = v___x_4715_;
v___y_4700_ = v___x_4716_;
goto v___jp_4697_;
}
}
else
{
return v___y_4710_;
}
}
v___jp_4722_:
{
if (lean_obj_tag(v___y_4723_) == 0)
{
lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; 
lean_dec_ref(v___y_4723_);
v___x_4724_ = lean_obj_once(&l_Lean_Parser_group_formatter___closed__1, &l_Lean_Parser_group_formatter___closed__1_once, _init_l_Lean_Parser_group_formatter___closed__1);
v___x_4725_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0, &l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0_once, _init_l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1___closed__0);
v___x_4726_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__55_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__55_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__55_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4727_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__56_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__56_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__56_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4728_ = l_Lean_Parser_registerAlias(v___x_4724_, v___x_4725_, v___x_4726_, v___x_4727_, v___x_4721_);
if (lean_obj_tag(v___x_4728_) == 0)
{
lean_object* v___x_4729_; lean_object* v___x_4730_; 
lean_dec_ref(v___x_4728_);
v___x_4729_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__58_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__58_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__58_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4730_ = l_Lean_PrettyPrinter_Formatter_registerAlias(v___x_4724_, v___x_4729_);
if (lean_obj_tag(v___x_4730_) == 0)
{
lean_object* v___x_4731_; lean_object* v___x_4732_; 
lean_dec_ref(v___x_4730_);
v___x_4731_ = lean_obj_once(&l___private_Lean_Parser_Extra_0__Lean_initFn___closed__60_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_, &l___private_Lean_Parser_Extra_0__Lean_initFn___closed__60_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Extra_0__Lean_initFn___closed__60_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_);
v___x_4732_ = l_Lean_PrettyPrinter_Parenthesizer_registerAlias(v___x_4724_, v___x_4731_);
v___y_4710_ = v___x_4732_;
goto v___jp_4709_;
}
else
{
v___y_4710_ = v___x_4730_;
goto v___jp_4709_;
}
}
else
{
v___y_4710_ = v___x_4728_;
goto v___jp_4709_;
}
}
else
{
return v___y_4723_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Extra_0__Lean_initFn_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2____boxed(lean_object* v_a_4738_){
_start:
{
lean_object* v_res_4739_; 
v_res_4739_ = l___private_Lean_Parser_Extra_0__Lean_initFn_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_();
return v_res_4739_;
}
}
lean_object* runtime_initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Extension(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Extra(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_formatter__15();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_antiquotNestedExpr_parenthesizer__35();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_optional___regBuiltin_Lean_Parser_optional_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_many___regBuiltin_Lean_Parser_many_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_many1___regBuiltin_Lean_Parser_many1_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ident = _init_l_Lean_Parser_ident();
lean_mark_persistent(l_Lean_Parser_ident);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ident___regBuiltin_Lean_Parser_ident_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_identWithPartialTrailingDot = _init_l_Lean_Parser_identWithPartialTrailingDot();
lean_mark_persistent(l_Lean_Parser_identWithPartialTrailingDot);
l_Lean_Parser_rawIdent = _init_l_Lean_Parser_rawIdent();
lean_mark_persistent(l_Lean_Parser_rawIdent);
l_Lean_Parser_hygieneInfo = _init_l_Lean_Parser_hygieneInfo();
lean_mark_persistent(l_Lean_Parser_hygieneInfo);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_hygieneInfo___regBuiltin_Lean_Parser_hygieneInfo_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_numLit = _init_l_Lean_Parser_numLit();
lean_mark_persistent(l_Lean_Parser_numLit);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_numLit___regBuiltin_Lean_Parser_numLit_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_hexnum = _init_l_Lean_Parser_hexnum();
lean_mark_persistent(l_Lean_Parser_hexnum);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_hexnum___regBuiltin_Lean_Parser_hexnum_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_scientificLit = _init_l_Lean_Parser_scientificLit();
lean_mark_persistent(l_Lean_Parser_scientificLit);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_scientificLit___regBuiltin_Lean_Parser_scientificLit_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_strLit = _init_l_Lean_Parser_strLit();
lean_mark_persistent(l_Lean_Parser_strLit);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_strLit___regBuiltin_Lean_Parser_strLit_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_charLit = _init_l_Lean_Parser_charLit();
lean_mark_persistent(l_Lean_Parser_charLit);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_charLit___regBuiltin_Lean_Parser_charLit_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_nameLit = _init_l_Lean_Parser_nameLit();
lean_mark_persistent(l_Lean_Parser_nameLit);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_nameLit___regBuiltin_Lean_Parser_nameLit_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_group___regBuiltin_Lean_Parser_group_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_many1Indent___regBuiltin_Lean_Parser_many1Indent_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_manyIndent___regBuiltin_Lean_Parser_manyIndent_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_patternIgnore___regBuiltin_Lean_Parser_patternIgnore_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ppHardSpace = _init_l_Lean_Parser_ppHardSpace();
lean_mark_persistent(l_Lean_Parser_ppHardSpace);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardSpace___regBuiltin_Lean_Parser_ppHardSpace_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ppSpace = _init_l_Lean_Parser_ppSpace();
lean_mark_persistent(l_Lean_Parser_ppSpace);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppSpace___regBuiltin_Lean_Parser_ppSpace_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ppLine = _init_l_Lean_Parser_ppLine();
lean_mark_persistent(l_Lean_Parser_ppLine);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppLine___regBuiltin_Lean_Parser_ppLine_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealFill___regBuiltin_Lean_Parser_ppRealFill_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppRealGroup___regBuiltin_Lean_Parser_ppRealGroup_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppIndent___regBuiltin_Lean_Parser_ppIndent_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppGroup___regBuiltin_Lean_Parser_ppGroup_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedent___regBuiltin_Lean_Parser_ppDedent_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ppAllowUngrouped = _init_l_Lean_Parser_ppAllowUngrouped();
lean_mark_persistent(l_Lean_Parser_ppAllowUngrouped);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppAllowUngrouped___regBuiltin_Lean_Parser_ppAllowUngrouped_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppDedentIfGrouped___regBuiltin_Lean_Parser_ppDedentIfGrouped_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_ppHardLineUnlessUngrouped = _init_l_Lean_Parser_ppHardLineUnlessUngrouped();
lean_mark_persistent(l_Lean_Parser_ppHardLineUnlessUngrouped);
res = l___private_Lean_Parser_Extra_0__Lean_Parser_ppHardLineUnlessUngrouped___regBuiltin_Lean_Parser_ppHardLineUnlessUngrouped_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Extra_0__Lean_initFn_00___x40_Lean_Parser_Extra_1768749410____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Hygiene(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Extra(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Hygiene(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29____________ = _init_l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29____________();
lean_mark_persistent(l_Lean_termRegister__parser__alias_x28Kind_x3a_x3d___x29____________);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
lean_object* initialize_Lean_Parser_Types(uint8_t builtin);
lean_object* initialize_Lean_Parser_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* initialize_Lean_Hygiene(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Extra(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Hygiene(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Extra(builtin);
}
#ifdef __cplusplus
}
#endif
