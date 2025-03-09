///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PresenceServiceData.h>

namespace fb {
	class PresencePartyServiceData : public PresenceServiceData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PresencePartyServiceData"); }
		virtual ~PresencePartyServiceData() override {}
		PresencePartyServiceData() {
		};

	}; // 0x18 (24)
}

