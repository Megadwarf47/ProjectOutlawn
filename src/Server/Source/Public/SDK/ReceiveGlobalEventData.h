///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/String.h>

namespace fb {
	struct ReceiveGlobalEventData {
		ReceiveGlobalEventData() {
			m_receiveOn = Realm::Realm_Client;
		};

		String m_eventName; // 0x0 (0)
		Realm m_receiveOn; // 0x8 (8)
	}; // 0x10 (16)
}

