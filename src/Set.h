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

#ifndef __SET_H
#define __SET_H

#include "stdafx.h"
#include "Grammar.h"
#include "CompositeTag.h"
#include "Strings.h"

namespace CG3 {

	class Set {
	public:
		bool match_any;
		bool is_special;
		bool is_unified;
		bool is_child_unified;
		bool is_used;
		mutable uint32_t num_fail, num_match;
		mutable clock_t total_time;
		UChar *name;
		uint32_t line;
		uint32_t hash;
		uint32_t number;

		uint32Set tags_set;
		CompositeTagHashSet tags;
		TagHashSet single_tags;
		uint32HashSet single_tags_hash;

		uint32Vector set_ops;
		uint32Vector sets;

		Set();
		~Set();

		void setName(uint32_t to);
		void setName(const UChar *to);

		uint32_t rehash();
		void resetStatistics();
		void reindex(Grammar *grammar);
		void markUsed(Grammar *grammar);
	};

}

#endif
