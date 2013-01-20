/*
 * libfritz++
 *
 * Copyright (C) 2007-2012 Joachim Wilke <libfritz@joachim-wilke.de>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#ifndef OERTLICHESFONBOOK_H
#define OERTLICHESFONBOOK_H

#include "LookupFonbook.h"

namespace fritz {

class OertlichesFonbook : public LookupFonbook
{
	friend class FonbookManager;
private:
	OertlichesFonbook();
public:
	sResolveResult Lookup(std::string number) const override;
};

}

#endif /*OERTLICHESFONBOOK_H_*/
