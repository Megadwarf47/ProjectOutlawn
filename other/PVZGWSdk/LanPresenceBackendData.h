///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PresenceBackendData.h>

namespace fb {
	class LanPresenceBackendData : public PresenceBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LanPresenceBackendData"); }
		virtual ~LanPresenceBackendData() override {}
		LanPresenceBackendData() {
		};

	}; // 0x18 (24)
}

