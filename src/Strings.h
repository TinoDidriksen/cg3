/*
* Copyright (C) 2007, GrammarSoft ApS
* Developed by Tino Didriksen <tino@didriksen.cc>
* Design by Eckhard Bick <eckhard.bick@mail.dk>, Tino Didriksen <tino@didriksen.cc>
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

#ifndef __STRINGS_H
#define __STRINGS_H

#include "stdafx.h"
#undef BUFFER_SIZE
#define BUFFER_SIZE (131072L)

namespace CG3 {
	namespace Strings {
		// ToDo: Add ABORT
		enum KEYWORDS {
			K_IGNORE,
			K_SETS,
			K_LIST,
			K_SET,
			K_DELIMITERS,
			K_SOFT_DELIMITERS,
			K_PREFERRED_TARGETS,
			K_MAPPING_PREFIX,
			K_MAPPINGS,
			K_CONSTRAINTS,
			K_CORRECTIONS,
			K_SECTION,
			K_BEFORE_SECTIONS,
			K_AFTER_SECTIONS,
			K_ADD,
			K_MAP,
			K_REPLACE,
			K_SELECT,
			K_REMOVE,
			K_IFF,
			K_APPEND,
			K_SUBSTITUTE,
			K_END,
			K_ANCHOR,
			K_EXECUTE,
			K_JUMP,
			K_REMVARIABLE,
			K_SETVARIABLE,
			K_DELIMIT,
			K_MATCH,
			K_SETPARENT,
			K_SETCHILD,
			K_SETRELATION,
			K_REMRELATION,
			K_SETRELATIONS,
			K_REMRELATIONS,
			KEYWORD_COUNT
		};

		enum STRINGS {
			S_IGNORE,
			S_PIPE,
			S_TO,
			S_OR,
			S_PLUS,
			S_MINUS,
			S_MULTIPLY,
			S_FAILFAST,
			S_BACKSLASH,
			S_HASH,
			S_NOT,
			S_TEXTNOT,
			S_TEXTNEGATE,
			S_LINK,
			S_BARRIER,
			S_CBARRIER,
			S_ASTERIK,
			S_ASTERIKTWO,
			S_CMD_FLUSH,
			S_CMD_EXIT,
			S_CMD_IGNORE,
			S_CMD_RESUME,
			S_TARGET,
			S_AND,
			S_IF,
			S_DELIMITSET,
			S_SOFTDELIMITSET,
			S_BEGINTAG,
			S_ENDTAG,
			S_LINKZ,
			S_SPACE,
			STRINGS_COUNT
		};

		enum REGEXPS {
			R_ANDLINK,
			R_CLEANSTRING,
			REGEXP_COUNT
		};

		extern UChar *keywords[KEYWORD_COUNT];
		extern uint32_t keyword_pow[KEYWORD_COUNT];
		extern UChar *stringbits[STRINGS_COUNT];
		extern uint32_t string_hashes[STRINGS_COUNT];
		extern URegularExpression *regexps[REGEXP_COUNT];

		int init_keywords();
		int free_keywords();

		int init_strings();
		int free_strings();

		int init_regexps(UFILE *ux_stderr);
		int free_regexps();

		#define NUM_GBUFFERS 5
		extern UChar *gbuffers[NUM_GBUFFERS];
		#define NUM_CBUFFERS 1
		extern char *cbuffers[NUM_CBUFFERS];
		int init_gbuffers();
		int free_gbuffers();
	}
}

using namespace CG3::Strings;

#endif
