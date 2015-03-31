//
//  application.cpp
//  PocoTest
//
//  Created by おもちメタル on 2015/03/31.
//  Copyright (c) 2015年 omochimetaru. All rights reserved.
//

#include "application.h"

Application::Application() {
	printf("Application ctor: %p\n", this);
	
	using namespace Poco;
	using namespace Poco::Net;
	
	URI uri("http://pocoproject.org/");

	HTTPClientSession session(uri.getHost(), uri.getPort());
	HTTPRequest request(HTTPRequest::HTTP_GET, uri.getPath(), HTTPMessage::HTTP_1_1);
	HTTPResponse response;
	
	session.sendRequest(request);
	std::istream& rs = session.receiveResponse(response);
	std::cout << response.getStatus() << " " << response.getReason() << std::endl;
	if (response.getStatus() == Poco::Net::HTTPResponse::HTTP_OK)
	{
		StreamCopier::copyStream(rs, std::cout);
	}
	
	
}