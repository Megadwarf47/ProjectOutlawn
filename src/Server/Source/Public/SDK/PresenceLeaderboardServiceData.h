///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PresenceServiceData.h>

namespace fb {
	class PresenceLeaderboardServiceData : public PresenceServiceData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PresenceLeaderboardServiceData"); }
		virtual ~PresenceLeaderboardServiceData() override {}
		PresenceLeaderboardServiceData() {
		};

	}; // 0x18 (24)
}

