/*
* Copyright (C) 2007-2018, GrammarSoft ApS
* Developed by Tino Didriksen <mail@tinodidriksen.com>
* Design by Eckhard Bick <eckhard.bick@mail.dk>, Tino Didriksen <mail@tinodidriksen.com>
*
* This file is part of VISL CG-3
*
* VISL CG-3 is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* VISL CG-3 is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with VISL CG-3.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Strings.hpp"

namespace CG3 {

const UString g_flags[FLAGS_COUNT] = {
	"NEAREST"_us,
	"ALLOWLOOP"_us,
	"DELAYED"_us,
	"IMMEDIATE"_us,
	"LOOKDELETED"_us,
	"LOOKDELAYED"_us,
	"UNSAFE"_us,
	"SAFE"_us,
	"REMEMBERX"_us,
	"RESETX"_us,
	"KEEPORDER"_us,
	"VARYORDER"_us,
	"ENCL_INNER"_us,
	"ENCL_OUTER"_us,
	"ENCL_FINAL"_us,
	"ENCL_ANY"_us,
	"ALLOWCROSS"_us,
	"WITHCHILD"_us,
	"NOCHILD"_us,
	"ITERATE"_us,
	"NOITERATE"_us,
	"UNMAPLAST"_us,
	"REVERSE"_us,
	"SUB"_us,
	"OUTPUT"_us,
	"CAPTURE_UNIF"_us,
	"REPEAT"_us,
	"BEFORE"_us,
	"AFTER"_us,
	"IGNORED"_us,
	"LOOKIGNORED"_us,
};

const UString keywords[KEYWORD_COUNT] = {
	"__CG3_DUMMY_KEYWORD__"_us,
	"SETS"_us,
	"LIST"_us,
	"SET"_us,
	"DELIMITERS"_us,
	"SOFT-DELIMITERS"_us,
	"PREFERRED-TARGETS"_us,
	"MAPPING-PREFIX"_us,
	"MAPPINGS"_us,
	"CONSTRAINTS"_us,
	"CORRECTIONS"_us,
	"SECTION"_us,
	"BEFORE-SECTIONS"_us,
	"AFTER-SECTIONS"_us,
	"NULL-SECTION"_us,
	"ADD"_us,
	"MAP"_us,
	"REPLACE"_us,
	"SELECT"_us,
	"REMOVE"_us,
	"IFF"_us,
	"APPEND"_us,
	"SUBSTITUTE"_us,
	"START"_us,
	"END"_us,
	"ANCHOR"_us,
	"EXECUTE"_us,
	"JUMP"_us,
	"REMVARIABLE"_us,
	"SETVARIABLE"_us,
	"DELIMIT"_us,
	"MATCH"_us,
	"SETPARENT"_us,
	"SETCHILD"_us,
	"ADDRELATION"_us,
	"SETRELATION"_us,
	"REMRELATION"_us,
	"ADDRELATIONS"_us,
	"SETRELATIONS"_us,
	"REMRELATIONS"_us,
	"TEMPLATE"_us,
	"MOVE"_us,
	"MOVE-AFTER"_us,
	"MOVE-BEFORE"_us,
	"SWITCH"_us,
	"REMCOHORT"_us,
	"STATIC-SETS"_us,
	"UNMAP"_us,
	"COPY"_us,
	"ADDCOHORT"_us,
	"ADDCOHORT-AFTER"_us,
	"ADDCOHORT-BEFORE"_us,
	"EXTERNAL"_us,
	"EXTERNAL-ONCE"_us,
	"EXTERNAL-ALWAYS"_us,
	"OPTIONS"_us,
	"STRICT-TAGS"_us,
	"REOPEN-MAPPINGS"_us,
	"SUBREADINGS"_us,
	"SPLITCOHORT"_us,
	"PROTECT"_us,
	"UNPROTECT"_us,
	"MERGECOHORTS"_us,
	"RESTORE"_us,
};

const UString stringbits[STRINGS_COUNT] = {
	"__CG3_DUMMY_STRINGBIT__"_us,
	"|"_us,
	"TO"_us,
	"OR"_us,
	"+"_us,
	"-"_us,
	"*"_us,
	"**"_us,
	"^"_us,
	"\\"_us,
	"#"_us,
	"!"_us,
	"NOT"_us,
	"NEGATE"_us,
	"ALL"_us,
	"NONE"_us,
	"LINK"_us,
	"BARRIER"_us,
	"CBARRIER"_us,
	"<STREAMCMD:FLUSH>"_us,
	"<STREAMCMD:EXIT>"_us,
	"<STREAMCMD:IGNORE>"_us,
	"<STREAMCMD:RESUME>"_us,
	"TARGET"_us,
	"AND"_us,
	"IF"_us,
	"_S_DELIMITERS_"_us,
	"_S_SOFT_DELIMITERS_"_us,
	"_S_TEXT_DELIMITERS_"_us,
	"/(^|\\n)</s/r"_us,
	">>>"_us,
	"<<<"_us,
	" LINK 0 "_us,
	" "_us,
	"_LEFT_"_us,
	"_RIGHT_"_us,
	"_PAREN_"_us,
	"_TARGET_"_us,
	"_MARK_"_us,
	"_ATTACHTO_"_us,
	"<.*>"_us,
	"\".*\""_us,
	"\"<.*>\""_us,
	"AFTER"_us,
	"BEFORE"_us,
	"WITH"_us,
	"?"_us,
	"$1"_us,
	"$2"_us,
	"$3"_us,
	"$4"_us,
	"$5"_us,
	"$6"_us,
	"$7"_us,
	"$8"_us,
	"$9"_us,
	"%u"_us,
	"%U"_us,
	"%l"_us,
	"%L"_us,
	"_G_"_us,
	"POSITIVE"_us,
	"NEGATIVE"_us,
	"ONCE"_us,
	"ALWAYS"_us,
	"\\"_us,
	u"\u2229"_us,
	u"\u2206"_us,
	"FROM"_us,
	"EXCEPT"_us,
	"_ENCL_"_us,
	"_SAME_BASIC_"_us,
	"no-inline-sets"_us,
	"no-inline-templates"_us,
	"strict-wordforms"_us,
	"strict-baseforms"_us,
	"strict-secondary"_us,
	"strict-regex"_us,
	"strict-icase"_us,
	"self-no-barrier"_us,
	"ordered"_us,
	"<STREAMCMD:SETVAR:"_us,
	"<STREAMCMD:REMVAR:"_us,
	"STATIC"_us,
	"\x01u"_us,
	"\x01U"_us,
	"\x01l"_us,
	"\x01L"_us,
};

std::vector<UString> gbuffers(NUM_GBUFFERS, UString(CG3_BUFFER_SIZE, 0));
std::vector<std::string> cbuffers(NUM_CBUFFERS, std::string(CG3_BUFFER_SIZE, 0));
}
