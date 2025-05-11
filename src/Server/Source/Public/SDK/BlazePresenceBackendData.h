///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PresenceBackendData.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class MatchmakingSession;
}

namespace fb {
	class BlazePresenceBackendData : public PresenceBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BlazePresenceBackendData"); }
		virtual ~BlazePresenceBackendData() override {}
		BlazePresenceBackendData() {
			m_useDemanglerService = false;
		};

		String m_defaultRoleName; // 0x18 (24)
		RefArray<MatchmakingSession> m_matchmakingSessions; // 0x20 (32)
		bool m_useDemanglerService; // 0x28 (40)
	}; // 0x30 (48)
}

