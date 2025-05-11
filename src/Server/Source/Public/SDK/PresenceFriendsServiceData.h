///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PresenceServiceData.h>

namespace fb {
	class PresenceFriendsServiceData : public PresenceServiceData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PresenceFriendsServiceData"); }
		virtual ~PresenceFriendsServiceData() override {}
		PresenceFriendsServiceData() {
		};

	}; // 0x18 (24)
}

