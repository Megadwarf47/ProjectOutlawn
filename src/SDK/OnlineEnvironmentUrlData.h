///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/OnlineEnvironment.h>
#include <fb/String.h>

namespace fb {
	struct OnlineEnvironmentUrlData {
		OnlineEnvironmentUrlData() {
			m_environment = OnlineEnvironment::OnlineEnvironment_Development;
		};

		String m_url; // 0x0 (0)
		OnlineEnvironment m_environment; // 0x8 (8)
	}; // 0x10 (16)
}

