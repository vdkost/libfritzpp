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

#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

#include <string>

#include "TcpClient.h"

namespace fritz {

class HttpClient : public TcpClient {
public:
	typedef std::map<std::string, std::string> param_t;
	typedef std::map<std::string, std::string> header_t;
	typedef std::string body_t;
	typedef std::pair<header_t, body_t> response_t;
private:
	header_t defaultHeader =
	  {
	    {"User-Agent", "Lynx/2.8.6" },
	    {"Connection", "Close" },
	    {"Host", host },
	  };
protected:
	std::string SendRequest(const std::ostream &request, const std::ostream &postdata = std::ostringstream(), const param_t &header = param_t());
	response_t ParseResponse();
public:
	HttpClient(std::string &host, int port = 80);
	virtual ~HttpClient();
	std::string Get(const std::ostream& os, const param_t &header = param_t());
	std::string Get(const std::string& s, const param_t &header = param_t());
	static std::string GetURL(const std::string &url, const param_t &header = param_t());
	std::string Post(const std::string &request, param_t &postdata, const param_t &header = param_t());
	std::string Post(const std::ostream &request, const std::ostream &postdata, const param_t &header = param_t());
	std::string PostMIME(const std::ostream &request, const param_t &postdata, const param_t &header = param_t());
	std::string PostMIME(const std::string &request, const param_t &postdata, const param_t &header = param_t());
};

}

#endif /* HTTPCLIENT_H_ */
