///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/Types.h>

namespace fb {
	struct EventChannel {
		EventChannel() {
			m_realm = Realm::Realm_Client;
			m_id = 0;
		};

		Realm m_realm; // 0x0 (0)
		s32 m_id; // 0x4 (4)
	}; // 0x8 (8)
}

