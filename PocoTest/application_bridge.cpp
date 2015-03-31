//
//  application_bridge.cpp
//  PocoTest
//
//  Created by おもちメタル on 2015/03/31.
//  Copyright (c) 2015年 omochimetaru. All rights reserved.
//

#include "application_bridge.h"

#include "application.h"

extern "C" void * ApplicationInit() {
	auto app = new Application();
	return static_cast<void *>(app);
}
