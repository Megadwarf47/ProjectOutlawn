///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct SendGlobalEventData {
		SendGlobalEventData() {
			m_sendFrom = Realm::Realm_Client;
			m_isNetworked = false;
		};

		String m_eventName; // 0x0 (0)
		Realm m_sendFrom; // 0x8 (8)
		bool m_isNetworked; // 0xC (12)
	}; // 0x10 (16)
}

