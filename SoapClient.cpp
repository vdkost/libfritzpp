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

#include "SoapClient.h"

namespace fritz {

SoapClient::SoapClient(std::string &host, int port) {
//	HttpClient(host, port, new ost2::SOAPStream()) { TODO
//	soapStream = static_cast<ost2::SOAPStream *>(stream);
}

SoapClient::~SoapClient() {
}

std::string SoapClient::Post(const std::ostream &url, const std::ostream &action, const std::ostream &postdata) {
//	const std::stringstream &_action = static_cast<const std::stringstream&>(action);
//	soapStream->setAction(_action.str().c_str());
//
//	return HttpClient::Post(url, postdata); //TODO
	return "";
}

}
